// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiz3/Quiz3GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuiz3GameMode() {}
// Cross Module References
	QUIZ3_API UClass* Z_Construct_UClass_AQuiz3GameMode_NoRegister();
	QUIZ3_API UClass* Z_Construct_UClass_AQuiz3GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Quiz3();
// End Cross Module References
	void AQuiz3GameMode::StaticRegisterNativesAQuiz3GameMode()
	{
	}
	UClass* Z_Construct_UClass_AQuiz3GameMode_NoRegister()
	{
		return AQuiz3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AQuiz3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuiz3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Quiz3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuiz3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Quiz3GameMode.h" },
		{ "ModuleRelativePath", "Quiz3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuiz3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuiz3GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuiz3GameMode_Statics::ClassParams = {
		&AQuiz3GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AQuiz3GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuiz3GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuiz3GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuiz3GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuiz3GameMode, 4268690552);
	template<> QUIZ3_API UClass* StaticClass<AQuiz3GameMode>()
	{
		return AQuiz3GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuiz3GameMode(Z_Construct_UClass_AQuiz3GameMode, &AQuiz3GameMode::StaticClass, TEXT("/Script/Quiz3"), TEXT("AQuiz3GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuiz3GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
