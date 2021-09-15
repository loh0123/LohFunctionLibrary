// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LFLPointNavActor.generated.h"

UCLASS()
class LOHFUNCTIONLIBRARY_API ALFLPointNavActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALFLPointNavActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
