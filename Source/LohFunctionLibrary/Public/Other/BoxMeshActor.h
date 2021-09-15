// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoxMeshActor.generated.h"

UCLASS(Blueprintable)
class LOHFUNCTIONLIBRARY_API ABoxMeshActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoxMeshActor();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Mesh")
		UStaticMesh* TopEnd;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Mesh")
		UStaticMesh* TopEdge;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Mesh")
		UStaticMesh* SideEdge;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Mesh")
		UStaticMesh* Wall;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Mesh")
		UStaticMesh* BottomEnd;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Mesh")
		UStaticMesh* BottomEdge;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Mesh")
		UStaticMesh* TopFloor;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Mesh")
		UStaticMesh* BottomFloor;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Material")
		UMaterialInterface* MeshMaterial;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Setting")
		FVector2D PositionOffset;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Setting")
		FVector MeshSize = FVector(100, 100, 100);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "BoxMeshActor | Setting")
		FIntVector PerLoopAddon = FIntVector(3, 3, 3);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Setting")
		FIntVector LoopSize;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, replicated, Category = "BoxMeshActor | Setting")
		FIntVector LoopOffset;

	UPROPERTY(EditAnywhere, replicated, Category = "BoxMeshActor | Setting")
		TArray<float> CustomMeshData;

	UPROPERTY(replicated, ReplicatedUsing=OnMeshListUpdate)
		TArray<UStaticMeshComponent*> StaticMeshRenderList;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, replicated, Category = "BoxMeshActor | Setting")
		FIntVector TotalLoop;

protected:
	virtual void OnConstruction(const FTransform& Transform) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BoxMeshActor | Function")
		void OnMeshListUpdate();

	UFUNCTION()
		virtual void OnMeshListUpdate_Implementation();

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		void Reconfigure();

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		bool SetAllMeshCustomData1D(int32 Index, float Value);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		bool SetAllMeshCustomData2D(int32 Index, FVector2D Value);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		bool SetAllMeshCustomData3D(int32 Index, FVector Value);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		bool SetAllMeshCustomData4D(int32 Index, FVector4 Value);

	UFUNCTION(BlueprintPure, Category = "ABoxMeshActor | Function")
		TArray<float> GetCustomMeshData();

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		bool SetSingleMesh(int32 Index, UStaticMesh* Mesh);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		void SetAllMesh(TArray<UStaticMesh*> Mesh);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		void SetMeshSize(FVector2D Offset, FVector Size);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		void SetMeshMaterial(UMaterialInterface* Material);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		void SetLoopSize(FIntVector Value);

	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "BoxMeshActor | Function")
		void SetLoopOffset(FIntVector Value);
};
