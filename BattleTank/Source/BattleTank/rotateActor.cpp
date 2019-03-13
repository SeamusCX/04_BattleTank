// Fill out your copyright notice in the Description page of Project Settings.

#include "rotateActor.h"
#include "Engine.h"
// Sets default values for this component's properties

UrotateActor::UrotateActor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	ItsOwner=GetOwner();
	FString OwnerName="DefaltName";
	if (ItsOwner)
	{
		OwnerName = ItsOwner->GetName();
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, OwnerName);
	
	UE_LOG(LogMyGame, Warning, TEXT("Your message"));
	
	// ...
}


// Called when the game starts
void UrotateActor::BeginPlay()
{
	Super::BeginPlay();


	// ...
	
}


// Called every frame
void UrotateActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (ItsOwner)
	{
		
		ItsOwner->AddActorWorldRotation(FRotator(0.f,DeltaTime*10,0.f));
	}
	
	// ...
}

