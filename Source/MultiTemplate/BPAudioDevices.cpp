// Fill out your copyright notice in the Description page of Project Settings.


#include "BPAudioDevices.h"

#include "Sound/SoundMix.h"
#include "AudioDevice.h"

TArray<FString> UBPAudioDevices::GetAudioOutputDevices()
{
    TArray<FString> OutputDevices;

    if (FAudioDeviceHandle AudioDevice = GEngine->GetMainAudioDevice())
    {
        AudioDevice->GetAudioDeviceList(OutputDevices);
    }

    return OutputDevices;
}
