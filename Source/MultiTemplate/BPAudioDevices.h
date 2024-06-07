// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPAudioDevices.generated.h"

/**
 * 
 */
UCLASS()
class MULTITEMPLATE_API UBPAudioDevices : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Audio")
	static TArray<FString> GetAudioOutputDevices();
};
