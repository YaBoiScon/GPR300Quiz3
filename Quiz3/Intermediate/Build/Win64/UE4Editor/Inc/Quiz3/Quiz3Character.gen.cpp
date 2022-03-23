// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quiz3/Quiz3Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuiz3Character() {}
// Cross Module References
	QUIZ3_API UClass* Z_Construct_UClass_AQuiz3Character_NoRegister();
	QUIZ3_API UClass* Z_Construct_UClass_AQuiz3Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Quiz3();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AQuiz3Character::StaticRegisterNativesAQuiz3Character()
	{
	}
	UClass* Z_Construct_UClass_AQuiz3Character_NoRegister()
	{
		return AQuiz3Character::StaticClass();
	}
	struct Z_Construct_UClass_AQuiz3Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuiz3Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Quiz3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuiz3Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Quiz3Character.h" },
		{ "ModuleRelativePath", "Quiz3Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuiz3Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Quiz3Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuiz3Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuiz3Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuiz3Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuiz3Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuiz3Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Quiz3Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuiz3Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuiz3Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuiz3Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuiz3Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Quiz3Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuiz3Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Quiz3Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuiz3Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuiz3Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuiz3Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuiz3Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuiz3Character_Statics::NewProp_BaseLookUpRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuiz3Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuiz3Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuiz3Character_Statics::ClassParams = {
		&AQuiz3Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AQuiz3Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuiz3Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuiz3Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuiz3Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuiz3Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuiz3Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuiz3Character, 551178628);
	template<> QUIZ3_API UClass* StaticClass<AQuiz3Character>()
	{
		return AQuiz3Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuiz3Character(Z_Construct_UClass_AQuiz3Character, &AQuiz3Character::StaticClass, TEXT("/Script/Quiz3"), TEXT("AQuiz3Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuiz3Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
