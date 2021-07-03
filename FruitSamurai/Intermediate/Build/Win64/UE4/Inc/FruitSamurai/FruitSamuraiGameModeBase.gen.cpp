// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FruitSamurai/Game Modes/FruitSamuraiGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFruitSamuraiGameModeBase() {}
// Cross Module References
	FRUITSAMURAI_API UClass* Z_Construct_UClass_AFruitSamuraiGameModeBase_NoRegister();
	FRUITSAMURAI_API UClass* Z_Construct_UClass_AFruitSamuraiGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FruitSamurai();
// End Cross Module References
	DEFINE_FUNCTION(AFruitSamuraiGameModeBase::execEndGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FinalScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndGame(Z_Param_FinalScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFruitSamuraiGameModeBase::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	static FName NAME_AFruitSamuraiGameModeBase_OnEndGame = FName(TEXT("OnEndGame"));
	void AFruitSamuraiGameModeBase::OnEndGame(int32 FinalScore)
	{
		FruitSamuraiGameModeBase_eventOnEndGame_Parms Parms;
		Parms.FinalScore=FinalScore;
		ProcessEvent(FindFunctionChecked(NAME_AFruitSamuraiGameModeBase_OnEndGame),&Parms);
	}
	static FName NAME_AFruitSamuraiGameModeBase_OnStartGame = FName(TEXT("OnStartGame"));
	void AFruitSamuraiGameModeBase::OnStartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFruitSamuraiGameModeBase_OnStartGame),NULL);
	}
	void AFruitSamuraiGameModeBase::StaticRegisterNativesAFruitSamuraiGameModeBase()
	{
		UClass* Class = AFruitSamuraiGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndGame", &AFruitSamuraiGameModeBase::execEndGame },
			{ "StartGame", &AFruitSamuraiGameModeBase::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics
	{
		struct FruitSamuraiGameModeBase_eventEndGame_Parms
		{
			int32 FinalScore;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FinalScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::NewProp_FinalScore = { "FinalScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FruitSamuraiGameModeBase_eventEndGame_Parms, FinalScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::NewProp_FinalScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Flow" },
		{ "ModuleRelativePath", "Game Modes/FruitSamuraiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFruitSamuraiGameModeBase, nullptr, "EndGame", nullptr, nullptr, sizeof(FruitSamuraiGameModeBase_eventEndGame_Parms), Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FinalScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::NewProp_FinalScore = { "FinalScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FruitSamuraiGameModeBase_eventOnEndGame_Parms, FinalScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::NewProp_FinalScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Flow" },
		{ "ModuleRelativePath", "Game Modes/FruitSamuraiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFruitSamuraiGameModeBase, nullptr, "OnEndGame", nullptr, nullptr, sizeof(FruitSamuraiGameModeBase_eventOnEndGame_Parms), Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnStartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnStartGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Flow" },
		{ "ModuleRelativePath", "Game Modes/FruitSamuraiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnStartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFruitSamuraiGameModeBase, nullptr, "OnStartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnStartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnStartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnStartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnStartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFruitSamuraiGameModeBase_StartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFruitSamuraiGameModeBase_StartGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Flow" },
		{ "ModuleRelativePath", "Game Modes/FruitSamuraiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFruitSamuraiGameModeBase_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFruitSamuraiGameModeBase, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFruitSamuraiGameModeBase_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFruitSamuraiGameModeBase_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFruitSamuraiGameModeBase_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFruitSamuraiGameModeBase_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFruitSamuraiGameModeBase_NoRegister()
	{
		return AFruitSamuraiGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFruitSamuraiGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFruitSamuraiGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FruitSamurai,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFruitSamuraiGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFruitSamuraiGameModeBase_EndGame, "EndGame" }, // 2502314657
		{ &Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnEndGame, "OnEndGame" }, // 3077259169
		{ &Z_Construct_UFunction_AFruitSamuraiGameModeBase_OnStartGame, "OnStartGame" }, // 1598293529
		{ &Z_Construct_UFunction_AFruitSamuraiGameModeBase_StartGame, "StartGame" }, // 2209132757
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFruitSamuraiGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Game Modes/FruitSamuraiGameModeBase.h" },
		{ "ModuleRelativePath", "Game Modes/FruitSamuraiGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFruitSamuraiGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFruitSamuraiGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFruitSamuraiGameModeBase_Statics::ClassParams = {
		&AFruitSamuraiGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFruitSamuraiGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFruitSamuraiGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFruitSamuraiGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFruitSamuraiGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFruitSamuraiGameModeBase, 1467194276);
	template<> FRUITSAMURAI_API UClass* StaticClass<AFruitSamuraiGameModeBase>()
	{
		return AFruitSamuraiGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFruitSamuraiGameModeBase(Z_Construct_UClass_AFruitSamuraiGameModeBase, &AFruitSamuraiGameModeBase::StaticClass, TEXT("/Script/FruitSamurai"), TEXT("AFruitSamuraiGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFruitSamuraiGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
