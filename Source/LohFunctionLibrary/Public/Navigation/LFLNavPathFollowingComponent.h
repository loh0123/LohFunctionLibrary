// Copyright 2021 Loh0123

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LFLNavPathFollowingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LOHFUNCTIONLIBRARY_API ULFLNavPathFollowingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULFLNavPathFollowingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
