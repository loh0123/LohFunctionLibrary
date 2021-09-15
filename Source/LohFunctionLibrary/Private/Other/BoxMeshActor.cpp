// Copyright 2021 Loh0123


#include "Other/BoxMeshActor.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ABoxMeshActor::ABoxMeshActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = true;
	bAlwaysRelevant = true;
	SetReplicatingMovement(true);

	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent")));

	StaticMeshRenderList.SetNum(26);

	int32 CurrentIndex = 0;

	// Create End
	//////////////////////////////////
	for (int32 i = 0; i < 4; i++)
	{
		FRotator MeshRotation = FRotator(0, i * 90, 0);

		// Create TopEnd
		//////////////////////////////////
		UStaticMeshComponent* SMC01 = CreateDefaultSubobject<UStaticMeshComponent>(*FString("TopEnd " + i));

		SMC01->SetRelativeRotation(MeshRotation);

		StaticMeshRenderList[CurrentIndex++] = SMC01;

		// Create BottomEnd
		//////////////////////////////////
		SMC01 = CreateDefaultSubobject<UStaticMeshComponent>(*FString("BottomEnd " + i));

		SMC01->SetRelativeRotation(MeshRotation);

		StaticMeshRenderList[CurrentIndex++] = SMC01;

		// Create Wall
		//////////////////////////////////
		SMC01 = CreateDefaultSubobject<UStaticMeshComponent>(*FString("Wall " + i));

		SMC01->SetRelativeRotation(MeshRotation);

		StaticMeshRenderList[CurrentIndex++] = SMC01;

		// Create SideEdge
		//////////////////////////////////
		SMC01 = CreateDefaultSubobject<UStaticMeshComponent>(*FString("SideEdge " + i));

		SMC01->SetRelativeRotation(MeshRotation);

		StaticMeshRenderList[CurrentIndex++] = SMC01;

		// Create TopEdge
		//////////////////////////////////
		SMC01 = CreateDefaultSubobject<UStaticMeshComponent>(*FString("TopEdge " + i));

		SMC01->SetRelativeRotation(MeshRotation);

		StaticMeshRenderList[CurrentIndex++] = SMC01;

		// Create BottomEdge
		//////////////////////////////////
		SMC01 = CreateDefaultSubobject<UStaticMeshComponent>(*FString("BottomEdge " + i));

		SMC01->SetRelativeRotation(MeshRotation);

		StaticMeshRenderList[CurrentIndex++] = SMC01;
	}

	UStaticMeshComponent* SMC01 = CreateDefaultSubobject<UStaticMeshComponent>(*FString("TopFloor"));
	UStaticMeshComponent* SMC02 = CreateDefaultSubobject<UStaticMeshComponent>(*FString("BottomFloor"));

	StaticMeshRenderList[CurrentIndex++] = SMC01;
	StaticMeshRenderList[CurrentIndex++] = SMC02;

	for (UStaticMeshComponent*& SMC : StaticMeshRenderList)
	{
		SMC->SetupAttachment(RootComponent);
		SMC->SetIsReplicated(true);
	}
}

void ABoxMeshActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABoxMeshActor, TopEnd);
	DOREPLIFETIME(ABoxMeshActor, TopEdge);;
	DOREPLIFETIME(ABoxMeshActor, SideEdge);
	DOREPLIFETIME(ABoxMeshActor, Wall);
	DOREPLIFETIME(ABoxMeshActor, BottomEnd);
	DOREPLIFETIME(ABoxMeshActor, BottomEdge);
	DOREPLIFETIME(ABoxMeshActor, TopFloor);
	DOREPLIFETIME(ABoxMeshActor, BottomFloor);
	DOREPLIFETIME(ABoxMeshActor, MeshMaterial);
	DOREPLIFETIME(ABoxMeshActor, PositionOffset);
	DOREPLIFETIME(ABoxMeshActor, MeshSize);
	DOREPLIFETIME(ABoxMeshActor, LoopSize);
	DOREPLIFETIME(ABoxMeshActor, LoopOffset);
	DOREPLIFETIME(ABoxMeshActor, CustomMeshData);
	DOREPLIFETIME(ABoxMeshActor, StaticMeshRenderList);
	DOREPLIFETIME(ABoxMeshActor, TotalLoop);
}

void ABoxMeshActor::OnConstruction(const FTransform& Transform)
{
	Reconfigure();
}

// Called when the game starts or when spawned
void ABoxMeshActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABoxMeshActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABoxMeshActor::OnMeshListUpdate_Implementation()
{
}

void ABoxMeshActor::Reconfigure()
{
	int32 CurrentIndex = 0;
	UStaticMeshComponent* SMC01;

	TotalLoop = FIntVector(	(PerLoopAddon.X * LoopSize.X) + LoopOffset.X,
							(PerLoopAddon.Y * LoopSize.Y) + LoopOffset.Y,
							(PerLoopAddon.Z * LoopSize.Z) + LoopOffset.Z);

	float ZValue = PositionOffset.Y + ((MeshSize.Z / 6) * TotalLoop.Z);

	FVector TopSize = FVector(TotalLoop.X, TotalLoop.Y, 0) + 1;
	FVector ForwardSize = FVector(0, TotalLoop.Y, TotalLoop.Z) + 1;
	FVector RightSize = FVector(0, TotalLoop.X, TotalLoop.Z) + 1;

	// Load End
	//////////////////////////////////
	for (int32 i = 0; i < 4; i++)
	{
		float ForwardVector = PositionOffset.X;
		float RightVector = -PositionOffset.X;

		FVector TargetSize;

		if (i == 0 || i == 2)
		{
			ForwardVector += ((MeshSize.X / 6) * TotalLoop.X);
			RightVector -= ((MeshSize.Y / 6) * TotalLoop.Y);
			TargetSize = ForwardSize;
		}
		else
		{
			ForwardVector += ((MeshSize.Y / 6) * TotalLoop.Y);
			RightVector -= ((MeshSize.X / 6) * TotalLoop.X);
			TargetSize = RightSize;
		}

		FVector MeshForwardPosition = FRotator(0, i * 90, 0).RotateVector(FVector(ForwardVector, 0, 0));
		FVector SideMeshForwardPosition = FRotator(0, i * 90, 0).RotateVector(FVector(ForwardVector, RightVector, 0));

		// Load TopEnd
		//////////////////////////////////
		SMC01 = StaticMeshRenderList[CurrentIndex++];

		SMC01->SetStaticMesh(TopEnd);
		SMC01->SetRelativeLocation(SideMeshForwardPosition);
		SMC01->AddRelativeLocation(FVector(0, 0, ZValue));
		SMC01->SetCustomPrimitiveDataVector2(0, FVector2D(1, 1));

		// Load BottomEnd
		//////////////////////////////////
		SMC01 = StaticMeshRenderList[CurrentIndex++];

		SMC01->SetStaticMesh(BottomEnd);
		SMC01->SetRelativeLocation(SideMeshForwardPosition);
		SMC01->AddRelativeLocation(FVector(0, 0, -ZValue));
		SMC01->SetCustomPrimitiveDataVector2(0, FVector2D(1, 1));

		// Load Wall
		//////////////////////////////////
		SMC01 = StaticMeshRenderList[CurrentIndex++];

		SMC01->SetStaticMesh(Wall);
		SMC01->SetRelativeLocation(MeshForwardPosition);
		SMC01->SetRelativeScale3D(TargetSize);
		SMC01->SetCustomPrimitiveDataVector2(0, FVector2D(TargetSize.Z, TargetSize.Y));

		// Load SideEdge
		//////////////////////////////////
		SMC01 = StaticMeshRenderList[CurrentIndex++];

		SMC01->SetStaticMesh(SideEdge);
		SMC01->SetRelativeLocation(SideMeshForwardPosition);
		SMC01->SetRelativeScale3D(FVector(1, 1, TotalLoop.Z + 1));
		SMC01->SetCustomPrimitiveDataVector2(0, FVector2D(TotalLoop.Z + 1, 1));

		// Load TopEdge
		//////////////////////////////////
		SMC01 = StaticMeshRenderList[CurrentIndex++];

		SMC01->SetStaticMesh(TopEdge);
		SMC01->SetRelativeLocation(MeshForwardPosition);
		SMC01->AddRelativeLocation(FVector(0, 0, ZValue));
		SMC01->SetRelativeScale3D(FVector(1, TargetSize.Y, 1));
		SMC01->SetCustomPrimitiveDataVector2(0, FVector2D(1, TargetSize.Y));

		// Load BottomEdge
		//////////////////////////////////
		SMC01 = StaticMeshRenderList[CurrentIndex++];

		SMC01->SetStaticMesh(BottomEdge);
		SMC01->SetRelativeLocation(MeshForwardPosition);
		SMC01->AddRelativeLocation(FVector(0, 0, -ZValue));
		SMC01->SetRelativeScale3D(FVector(1, TargetSize.Y, 1));
		SMC01->SetCustomPrimitiveDataVector2(0, FVector2D(1, TargetSize.Y));
	}

	// Load TopFloor
	//////////////////////////////////
	SMC01 = StaticMeshRenderList[CurrentIndex++];

	SMC01->SetStaticMesh(TopFloor);
	SMC01->SetRelativeLocation(FVector(0, 0, ZValue));
	SMC01->SetRelativeScale3D(TopSize);
	SMC01->SetCustomPrimitiveDataVector2(0, FVector2D(TopSize.X, TopSize.Y));

	// Load BottomFloor
	//////////////////////////////////
	SMC01 = StaticMeshRenderList[CurrentIndex++];

	SMC01->SetStaticMesh(BottomFloor);
	SMC01->SetRelativeLocation(FVector(0, 0, -ZValue));
	SMC01->SetRelativeScale3D(TopSize);
	SMC01->SetCustomPrimitiveDataVector2(0, FVector2D(TopSize.X, TopSize.Y));

	for (UStaticMeshComponent*& SMC : StaticMeshRenderList)
	{
		SMC->SetMaterial(0, MeshMaterial);

		for (int32 i = 0; i < CustomMeshData.Num(); i++)
		{
			SMC->SetCustomPrimitiveDataFloat(i + 2, CustomMeshData[i]);
		}
	}

	return;
}

bool ABoxMeshActor::SetAllMeshCustomData1D(int32 Index, float Value)
{
	if (CustomMeshData.IsValidIndex(Index))
	{
		CustomMeshData[Index] = Value;

		for (UStaticMeshComponent*& SMC : StaticMeshRenderList)
		{
			SMC->SetCustomPrimitiveDataFloat(Index + 2, Value);
		}

		return true;
	}

	return false;
}

bool ABoxMeshActor::SetAllMeshCustomData2D(int32 Index, FVector2D Value)
{
	if (CustomMeshData.IsValidIndex(Index + 1))
	{
		CustomMeshData[Index] = Value.X;
		CustomMeshData[Index + 1] = Value.Y;

		for (UStaticMeshComponent*& SMC : StaticMeshRenderList)
		{
			SMC->SetCustomPrimitiveDataVector2(Index + 2, Value);
		}

		return true;
	}

	return false;
}

bool ABoxMeshActor::SetAllMeshCustomData3D(int32 Index, FVector Value)
{
	if (CustomMeshData.IsValidIndex(Index + 2))
	{
		CustomMeshData[Index] = Value.X;
		CustomMeshData[Index + 1] = Value.Y;
		CustomMeshData[Index + 2] = Value.Z;

		for (UStaticMeshComponent*& SMC : StaticMeshRenderList)
		{
			SMC->SetCustomPrimitiveDataVector3(Index + 2, Value);
		}

		return true;
	}

	return false;
}

bool ABoxMeshActor::SetAllMeshCustomData4D(int32 Index, FVector4 Value)
{
	if (CustomMeshData.IsValidIndex(Index + 3))
	{
		CustomMeshData[Index] = Value.X;
		CustomMeshData[Index + 1] = Value.Y;
		CustomMeshData[Index + 2] = Value.Z;
		CustomMeshData[Index + 3] = Value.W;

		for (UStaticMeshComponent*& SMC : StaticMeshRenderList)
		{
			SMC->SetCustomPrimitiveDataVector4(Index + 2, Value);
		}

		return true;
	}

	return false;
}

TArray<float> ABoxMeshActor::GetCustomMeshData()
{
	return CustomMeshData;
}

bool ABoxMeshActor::SetSingleMesh(int32 Index, UStaticMesh* Mesh)
{
	if (StaticMeshRenderList.IsValidIndex(Index))
	{
		StaticMeshRenderList[Index]->SetStaticMesh(Mesh);

		return true;
	}

	return false;
}

void ABoxMeshActor::SetAllMesh(TArray<UStaticMesh*> Mesh)
{
	for (int32 i = 0; i < StaticMeshRenderList.Num(); i++)
	{
		SetSingleMesh(i, Mesh.IsValidIndex(i) ? Mesh[i] : nullptr);
	}

	return;
}

void ABoxMeshActor::SetMeshSize(FVector2D Offset, FVector Size)
{
	PositionOffset = Offset;
	MeshSize = Size;

	Reconfigure();

	return;
}

void ABoxMeshActor::SetMeshMaterial(UMaterialInterface* Material)
{
	MeshMaterial = Material;

	for (UStaticMeshComponent* Mesh : StaticMeshRenderList)
	{
		Mesh->SetMaterial(0, MeshMaterial);
	}

	return;
}

void ABoxMeshActor::SetLoopSize(FIntVector Value)
{
	LoopSize = Value;

	Reconfigure();

	return;
}

void ABoxMeshActor::SetLoopOffset(FIntVector Value)
{
	LoopOffset = Value;

	Reconfigure();

	return;
}
