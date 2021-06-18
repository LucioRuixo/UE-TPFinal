// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FruitSamurai/Spawners/BaseFruitSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFruitSpawner() {}
// Cross Module References
	FRUITSAMURAI_API UClass* Z_Construct_UClass_ABaseFruitSpawner_NoRegister();
	FRUITSAMURAI_API UClass* Z_Construct_UClass_ABaseFruitSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FruitSamurai();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(ABaseFruitSpawner::execGetSpawnTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSpawnTransform();
		P_NATIVE_END;
	}
	void ABaseFruitSpawner::StaticRegisterNativesABaseFruitSpawner()
	{
		UClass* Class = ABaseFruitSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnTransform", &ABaseFruitSpawner::execGetSpawnTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics
	{
		struct BaseFruitSpawner_eventGetSpawnTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFruitSpawner_eventGetSpawnTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spawners/BaseFruitSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFruitSpawner, nullptr, "GetSpawnTransform", nullptr, nullptr, sizeof(BaseFruitSpawner_eventGetSpawnTransform_Parms), Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseFruitSpawner_NoRegister()
	{
		return ABaseFruitSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ABaseFruitSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAngleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnAngleRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnAngleTilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnAngleTilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnYLocationRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnYLocationRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnXLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnXLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnZLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnZLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseFruitSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FruitSamurai,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseFruitSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseFruitSpawner_GetSpawnTransform, "GetSpawnTransform" }, // 777759824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFruitSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spawners/BaseFruitSpawner.h" },
		{ "ModuleRelativePath", "Spawners/BaseFruitSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnAngleRange_MetaData[] = {
		{ "Category", "Spawn Transform Parameters" },
		{ "ModuleRelativePath", "Spawners/BaseFruitSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnAngleRange = { "SpawnAngleRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFruitSpawner, SpawnAngleRange), METADATA_PARAMS(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnAngleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnAngleRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_MaxSpawnAngleTilt_MetaData[] = {
		{ "Category", "Spawn Transform Parameters" },
		{ "ModuleRelativePath", "Spawners/BaseFruitSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_MaxSpawnAngleTilt = { "MaxSpawnAngleTilt", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFruitSpawner, MaxSpawnAngleTilt), METADATA_PARAMS(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_MaxSpawnAngleTilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_MaxSpawnAngleTilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnYLocationRange_MetaData[] = {
		{ "Category", "Spawn Transform Parameters" },
		{ "ModuleRelativePath", "Spawners/BaseFruitSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnYLocationRange = { "SpawnYLocationRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFruitSpawner, SpawnYLocationRange), METADATA_PARAMS(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnYLocationRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnYLocationRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnXLocation_MetaData[] = {
		{ "Category", "Spawn Transform Parameters" },
		{ "ModuleRelativePath", "Spawners/BaseFruitSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnXLocation = { "SpawnXLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFruitSpawner, SpawnXLocation), METADATA_PARAMS(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnXLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnXLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnZLocation_MetaData[] = {
		{ "Category", "Spawn Transform Parameters" },
		{ "ModuleRelativePath", "Spawners/BaseFruitSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnZLocation = { "SpawnZLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFruitSpawner, SpawnZLocation), METADATA_PARAMS(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnZLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnZLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseFruitSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnAngleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_MaxSpawnAngleTilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnYLocationRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnXLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFruitSpawner_Statics::NewProp_SpawnZLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseFruitSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseFruitSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseFruitSpawner_Statics::ClassParams = {
		&ABaseFruitSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseFruitSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFruitSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseFruitSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFruitSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseFruitSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseFruitSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseFruitSpawner, 1670462951);
	template<> FRUITSAMURAI_API UClass* StaticClass<ABaseFruitSpawner>()
	{
		return ABaseFruitSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseFruitSpawner(Z_Construct_UClass_ABaseFruitSpawner, &ABaseFruitSpawner::StaticClass, TEXT("/Script/FruitSamurai"), TEXT("ABaseFruitSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseFruitSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
