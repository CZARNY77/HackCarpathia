// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "QuestBase.h"
#include "FetchQuest.generated.h"

/**
 * 
 */
UCLASS()
class HACKCARPATHIA_API UFetchQuest : public UQuestBase
{
	GENERATED_BODY()
public:
    UFetchQuest();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fetch Quest")
    FName ItemID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fetch Quest")
    int32 RequiredItemCount;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Fetch Quest")
    int32 CurrentItemCount;

    void CollectItem(FName CollectedItemID);

    virtual void ActivateQuest() override;

    virtual void CompleteQuest() override;

};
