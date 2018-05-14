// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ResourceBag.generated.h"


UENUM(BlueprintType)
enum class ResourceType : uint8{
	Wood = 0,
	Stone,
	Metal
};

USTRUCT(BlueprintType)
struct FBuildingResource {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	FString Name;

	UPROPERTY(EditAnywhere)
	int Amount;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ROYALE_API UResourceBag : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UResourceBag();

	ResourceType SelectedResourceType = ResourceType::Wood;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SelectResource(ResourceType type);

	UFUNCTION(BlueprintCallable)
	int GetResourceAmount(ResourceType type);

	UPROPERTY(EditAnywhere)
	TMap<ResourceType, FBuildingResource> Resources;
};
