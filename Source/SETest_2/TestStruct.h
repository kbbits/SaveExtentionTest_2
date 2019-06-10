// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataStruct.h"
#include "TestStruct.generated.h"

USTRUCT(BlueprintType)
struct FTestStruct : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
		FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
		float TestFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
		int TestInt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
		TArray<FDataStruct> DataArray;
	
};

