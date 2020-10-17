#pragma once

#include "Engine/DataTable.h"
#include "AmmoTypes.generated.h"

USTRUCT(BlueprintType)
struct FAmmoTypeDatatableRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StartingAmmoCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxAmmoutCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText AmmoName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor AmmoColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ProjectileActor;
};