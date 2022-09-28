// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorTest.generated.h"

class ATestClassInfo
{
public:
	int num = 0;
	int sex = 0;
	int age = 0;
	int topic = 0;

};

UCLASS()
class LASTPROJECT_API AMyActorTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorTest();

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Any)
	//TArray<ATestClassInfo> ArrayOfClasses;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};


