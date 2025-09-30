// Fill out your copyright notice in the Description page of Project Settings.


#include "CrashGame.h"

UFUNCTION(CPF_BlueprintCallable) void ForceCrash()
{
	volatile int* prt = nullptr;
	*prt = 123;
}