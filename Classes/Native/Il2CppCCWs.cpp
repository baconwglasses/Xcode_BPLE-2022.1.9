#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// Microsoft.DiaSymReader.ComMemoryStream
struct ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3;
// System.Runtime.InteropServices.ComTypes.IStream
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
// Microsoft.DiaSymReader.ISymWriterMetadataProvider
struct ISymWriterMetadataProvider_t3E18BBBE16D2AE0020168B17BBEF94F19D1F9F61;
// Microsoft.DiaSymReader.MetadataAdapterBase
struct MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10;
// System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;
// System.String
struct String_t;
// Microsoft.DiaSymReader.SymWriterMetadataAdapter
struct SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Guid_t;
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
struct MetadataImportFieldOffset_t44A1CAA35A45D77251F3B853D92EAD5FAFFBE14F;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.DiaSymReader.IMetadataEmit
struct NOVTABLE IMetadataEmit_tC87597AAD9BF4FF837BAF9522CBA3AAFAAF9AD14 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetModuleProps_mAFE1405E6F7472CF40F23D8F99043BA4735288E3() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___Save_m09006E3CF4024CFDE52BC3E99F24F93B59FF292D() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SaveToStream_m72BD71EFB8891C44F2759296869E8D084A5F559A() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___GetSaveSize_m80576FD6605D3E39A3A8BB3B1BEDC1B173C9DD8E() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineTypeDef_mD08E4671458F390D52D0826450FF5101E5851C50() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineNestedType_mC8178A6EC5B40E1893522E6B6158EDFC4736BDE3() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetHandler_m955C6CA4927170960B4AC1C155D211A374261B7F() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineMethod_mDC5C0D933BA652400956175E75041307B249654F() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineMethodImpl_m9C56CE78FFCA02E869DA71B30B40FD6B9FB6750A() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineTypeRefByName_m5671A3C35860103F8332D2B0E403068C5187BF2C() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineImportType_m753E46BAECCF79CEB93B072FAE5846A0D04A0518() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineMemberRef_m3C58076D96B6E7C0F9881FD0902DD3D49BA65C5F() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineImportMember_mB42E6A4C1D5EEC0C6D9A8C9FDDECB86BD3A6048E() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineEvent_m82B3CD4699B3E4E2E7AB89E3CA5EDBE57E6F5BDC() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetClassLayout_mC326A46327F044B9BF420BC47B79EBE81F1B2EAD() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeleteClassLayout_m8C50C11F7305EF67F0C082E99540B49779CBD711() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetFieldMarshal_mC282A68ECE14AD80D924BEDE5CC14B58E62D8EAE() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeleteFieldMarshal_mBDC95C2BCD4782D5FCE840B3B1DF2007340306B0() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefinePermissionSet_m9CEE706A16751BEF773B7AD54E90E7F2372BB0B1() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetRVA_m1F45EA879E662BC352FB600218469871CF4BFF31() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit_GetTokenFromSig_mDABB684B81648D8B0D9B844F7AEDCAF2FF368FE0(uint8_t* ___0_voidPointerSig, int32_t ___1_byteCountSig, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineModuleRef_m9A4EB129127BED5CE7CD9A462DFE26AEF367D68A() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetParent_mA56BD24822C9EB4416E7FE9D2914457398442519() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___GetTokenFromTypeSpec_m3AFA57B01CA2FA12ACBC36898178A35371D24138() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SaveToMemory_mB2C3513D714E2EE03A30A2428EBB6148F6E24F8F() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineUserString_mB35ECC504A81000BBB5E906FEF8888B6BE776030() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeleteToken_m49C6CD3EA2FEC361F75C97756E2CCE4CD2629B7A() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetMethodProps_m5E06BD487F7EFC06A6F384FEAB2FEE7B96E930E9() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetTypeDefProps_mEE308999ED171F383169D0AD3C833F4925B51AFD() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetEventProps_m9ECD1FDE7D582508EE5B07274AD13A0D214428CD() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetPermissionSetProps_mB43CDF31F347065162C77B54BF0142BA5B63010E() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefinePinvokeMap_m0DD678F08E5977584FE6CEEF25147E1729F209C8() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetPinvokeMap_mD583D16A1C15C1875BFEF9FFD2F8763F7CE9CC3B() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeletePinvokeMap_mB2830E96053E0D0BB58680F856C379201EB26746() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineCustomAttribute_m9F1391E801E4B4ACBCAA48A8429A153905F84335() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetCustomAttributeValue_m8550F081EF4A051A561296B2008A3EDBD514A126() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineField_mE56800195E8939FD78D30E1BDBE7CB8620E14742() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineProperty_mA493ECB6F90DBA24866EBE7317D29D20F58F6356() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineParam_mFE9BAAFCDF3CD831D65EA006E078477CBE15CA04() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetFieldProps_m1392A032B273A656A9DB6170BD43F82C98D0A426() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetPropertyProps_m8A771699C360E7814CD1A39AB9076BF8DF99379F() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetParamProps_m6DEB49C1E4B08CEE199A200B8F2E9A256438430F() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineSecurityAttributeSet_m3B5E6563D6C0307C8157FBD6E708488D6582DA9A() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___ApplyEditAndContinue_m88628B3A6E59D46319599CDCAF8455BF9A524FCB() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___TranslateSigWithScope_mE859C82A42E6E679F3B4FB9FC964758F739CDE19() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetMethodImplFlags_mC328A9AF6992FD67AA4917B32BB1BCC07A2F9C75() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetFieldRVA_m8B5474A9F496975F907A4F40D69176490A73D389() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___Merge_m40A0D34BFFE82FF3EC0D919455C47BA9D9B10DF0() = 0;
	virtual il2cpp_hresult_t STDCALL IMetadataEmit___MergeEnd_m5BBADC57D9C3B58A5E07DBC3FE15129E13C17548() = 0;
};
// Microsoft.DiaSymReader.IMetadataImport
struct NOVTABLE IMetadataImport_tE1441B91C32BBACB29A95F0402916096458BDAB7 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual void STDCALL IMetadataImport_CloseEnum_m573729C6FC45531BFF9A07B8478E07C1A0D228F7(void* ___0_enumHandle) = 0;
	virtual int32_t STDCALL IMetadataImport_CountEnum_mD4DDD03DB8DFB12FF3E0795F6BCE61FA95B9473D(void* ___0_enumHandle, int32_t* ___1_count) = 0;
	virtual int32_t STDCALL IMetadataImport_ResetEnum_mBB3594ED3E0D773E99C136B949EA759260417F9D(void* ___0_enumHandle, int32_t ___1_position) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumTypeDefs_mA17D2B251153C99F8621D73F10175B22D436A59E(void** ___0_enumHandle, int32_t* ___1_typeDefs, int32_t ___2_bufferLength, int32_t* ___3_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumInterfaceImpls_mF659986047EE7219CA41ECD018382B11D4A3F155(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_interfaceImpls, int32_t ___3_bufferLength, int32_t* ___4_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumTypeRefs_m166D292A1EF86970FFE4B9A08410DAFACAA27E22(void** ___0_enumHandle, int32_t* ___1_typeRefs, int32_t ___2_bufferLength, int32_t* ___3_count) = 0;
	virtual int32_t STDCALL IMetadataImport_FindTypeDefByName_mA0F24D357554556E9A0D394A5961E7B3E197D011(Il2CppChar* ___0_name, int32_t ___1_enclosingClass, int32_t* ___2_typeDef) = 0;
	virtual int32_t STDCALL IMetadataImport_GetScopeProps_m76948AF10CEB3A83E218B7DE44951C8F0D50AC10(Il2CppChar* ___0_name, int32_t ___1_bufferLength, int32_t* ___2_nameLength, Guid_t* ___3_mvid) = 0;
	virtual int32_t STDCALL IMetadataImport_GetModuleFromScope_m86751A554C8126A7F38B4B71BC9F7FBBE1CA4C71(int32_t* ___0_moduleDef) = 0;
	virtual int32_t STDCALL IMetadataImport_GetTypeDefProps_m7B23DCD6F1DF07B5063BFF90A9B6175BB79FCA00(int32_t ___0_typeDef, Il2CppChar* ___1_qualifiedName, int32_t ___2_qualifiedNameBufferLength, int32_t* ___3_qualifiedNameLength, int32_t* ___4_attributes, int32_t* ___5_baseType) = 0;
	virtual int32_t STDCALL IMetadataImport_GetInterfaceImplProps_m18B44447246ED5A5D00C652354DB65B0D29CCE57(int32_t ___0_interfaceImpl, int32_t* ___1_typeDef, int32_t* ___2_interfaceDefRefSpec) = 0;
	virtual int32_t STDCALL IMetadataImport_GetTypeRefProps_m104B4F2BBBBB9ED958659DF8B26198E8C30AAD84(int32_t ___0_typeRef, int32_t* ___1_resolutionScope, Il2CppChar* ___2_qualifiedName, int32_t ___3_qualifiedNameBufferLength, int32_t* ___4_qualifiedNameLength) = 0;
	virtual int32_t STDCALL IMetadataImport_ResolveTypeRef_m55F51140D85D36451D3FA946D806D940677AE194(int32_t ___0_typeRef, Guid_t* ___1_scopeInterfaceId, Il2CppIUnknown** ___2_scope, int32_t* ___3_typeDef) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumMembers_m74CCC6EABDA1796971BBD70DB06413CA6749E07D(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_memberDefs, int32_t ___3_bufferLength, int32_t* ___4_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumMembersWithName_mA91863BE92E040812D71D9E3A364ECA2EEB3FDA3(void** ___0_enumHandle, int32_t ___1_typeDef, Il2CppChar* ___2_name, int32_t* ___3_memberDefs, int32_t ___4_bufferLength, int32_t* ___5_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumMethods_m837BB1F0E83ED51CFB976B6842A75F724BDD18DD(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_methodDefs, int32_t ___3_bufferLength, int32_t* ___4_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumMethodsWithName_m14A245E68A66A2FFA6A484F6D66713AA98CE273B(void** ___0_enumHandle, int32_t ___1_typeDef, Il2CppChar* ___2_name, int32_t* ___3_methodDefs, int32_t ___4_bufferLength, int32_t* ___5_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumFields_m24DFC022A0F8496730184EB39A49B9D2B421B8C0(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_fieldDefs, int32_t ___3_bufferLength, int32_t* ___4_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumFieldsWithName_mA6535D7094D9D4DF7CC5FAD32BAD91E11792EE3B(void** ___0_enumHandle, int32_t ___1_typeDef, Il2CppChar* ___2_name, int32_t* ___3_fieldDefs, int32_t ___4_bufferLength, int32_t* ___5_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumParams_mA16A66659F6BB8B7617F9253BAB0F67027636F39(void** ___0_enumHandle, int32_t ___1_methodDef, int32_t* ___2_paramDefs, int32_t ___3_bufferLength, int32_t* ___4_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumMemberRefs_m0A5B47AED30442EBB09DD1ABE298585C9462F8F0(void** ___0_enumHandle, int32_t ___1_parentToken, int32_t* ___2_memberRefs, int32_t ___3_bufferLength, int32_t* ___4_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumMethodImpls_mA19D3693E3A9A7B0503464033061BE37A5444D2B(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_implementationTokens, int32_t* ___3_declarationTokens, int32_t ___4_bufferLength, int32_t* ___5_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumPermissionSets_m47C5923A1B07A88DFD62BA62BDD11B748F5411D1(void** ___0_enumHandle, int32_t ___1_token, uint32_t ___2_action, int32_t* ___3_declSecurityTokens, int32_t ___4_bufferLength, int32_t* ___5_count) = 0;
	virtual int32_t STDCALL IMetadataImport_FindMember_m0D914E37C2F1A7996C58E03202413F3C19EA2530(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_memberDef) = 0;
	virtual int32_t STDCALL IMetadataImport_FindMethod_m4E27328DFD06CC488192BCBC34DA6FE9476B5786(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_methodDef) = 0;
	virtual int32_t STDCALL IMetadataImport_FindField_m9923DA9C8325A949FB59D34699F4D22E9FEA6DA2(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_fieldDef) = 0;
	virtual int32_t STDCALL IMetadataImport_FindMemberRef_mD6DDDDC12A59775C6631D8B2DA17655EF2DFA149(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_memberRef) = 0;
	virtual int32_t STDCALL IMetadataImport_GetMethodProps_m2E44DB3B51FBB3C540334271C17483FBE9904842(int32_t ___0_methodDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_relativeVirtualAddress, int32_t* ___9_implAttributes) = 0;
	virtual int32_t STDCALL IMetadataImport_GetMemberRefProps_m2C89679B4283891FEB4697D15F00E947EBB9D02F(int32_t ___0_memberRef, int32_t* ___1_declaringType, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, uint8_t** ___5_signature, int32_t* ___6_signatureLength) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumProperties_mB08CB1A289862FA317F91097E64BF1FBA40AD326(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_properties, int32_t ___3_bufferLength, int32_t* ___4_count) = 0;
	virtual uint32_t STDCALL IMetadataImport_EnumEvents_m897F5800137BCF94D8C44969D7DC043CE5FA6F4F(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_events, int32_t ___3_bufferLength, int32_t* ___4_count) = 0;
	virtual int32_t STDCALL IMetadataImport_GetEventProps_mF175AAF4065D09CEE976193FA6BB10EC71138B67(int32_t ___0_event, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, int32_t* ___6_eventType, int32_t* ___7_adderMethodDef, int32_t* ___8_removerMethodDef, int32_t* ___9_raiserMethodDef, int32_t* ___10_otherMethodDefs, int32_t ___11_otherMethodDefBufferLength, int32_t* ___12_methodMethodDefsLength) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumMethodSemantics_mF0264C6E0101034452FCC37EB62A9528EFE8947C(void** ___0_enumHandle, int32_t ___1_methodDef, int32_t* ___2_eventsAndProperties, int32_t ___3_bufferLength, int32_t* ___4_count) = 0;
	virtual int32_t STDCALL IMetadataImport_GetMethodSemantics_m0F8BE6901C5DBA47B9C76F2CCC08EDB23682548A(int32_t ___0_methodDef, int32_t ___1_eventOrProperty, int32_t* ___2_semantics) = 0;
	virtual int32_t STDCALL IMetadataImport_GetClassLayout_m3416902FED850B96935702F792A6CCBA4AAC038B(int32_t ___0_typeDef, int32_t* ___1_packSize, MetadataImportFieldOffset_t44A1CAA35A45D77251F3B853D92EAD5FAFFBE14F* ___2_fieldOffsets, int32_t ___3_bufferLength, int32_t* ___4_count, int32_t* ___5_typeSize) = 0;
	virtual int32_t STDCALL IMetadataImport_GetFieldMarshal_mAC0442BC1ED03E59FF77D56BDC7E42137B200CFA(int32_t ___0_fieldDef, uint8_t** ___1_nativeTypeSignature, int32_t* ___2_nativeTypeSignatureLengvth) = 0;
	virtual int32_t STDCALL IMetadataImport_GetRVA_m8D86BE2D9A4EBEC159F73F171F04A0ECA291EF5C(int32_t ___0_methodDef, int32_t* ___1_relativeVirtualAddress, int32_t* ___2_implAttributes) = 0;
	virtual int32_t STDCALL IMetadataImport_GetPermissionSetProps_mC4971283B94A15B2495A12AB4909702464EA5617(int32_t ___0_declSecurity, uint32_t* ___1_action, uint8_t** ___2_permissionBlob, int32_t* ___3_permissionBlobLength) = 0;
	virtual int32_t STDCALL IMetadataImport_GetSigFromToken_m7F4D3B7A68C5BDC9146B5BA3B5955A70AB37F025(int32_t ___0_standaloneSignature, uint8_t** ___1_signature, int32_t* ___2_signatureLength) = 0;
	virtual int32_t STDCALL IMetadataImport_GetModuleRefProps_m3B28646924380A005C617F6D3138BE57161CBEF2(int32_t ___0_moduleRef, Il2CppChar* ___1_name, int32_t ___2_nameBufferLength, int32_t* ___3_nameLength) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumModuleRefs_mF3E210B3A44F4AF08F9D644710F6AA70E6CDFC4D(void** ___0_enumHandle, int32_t* ___1_moduleRefs, int32_t ___2_bufferLength, int32_t* ___3_count) = 0;
	virtual int32_t STDCALL IMetadataImport_GetTypeSpecFromToken_mA3962E10DB9D0F724E7FB61719A8AD4B4FD6E182(int32_t ___0_typeSpec, uint8_t** ___1_signature, int32_t* ___2_signatureLength) = 0;
	virtual int32_t STDCALL IMetadataImport_GetNameFromToken_m85F3F3F67A62AAEC48538DADAACC1941800D78BE(int32_t ___0_token, uint8_t* ___1_nameUTF8) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumUnresolvedMethods_m1FEE391F0A92DA0F06B0FC043A9A85778B96FD4D(void** ___0_enumHandle, int32_t* ___1_methodDefs, int32_t ___2_bufferLength, int32_t* ___3_count) = 0;
	virtual int32_t STDCALL IMetadataImport_GetUserString_m47B5B9B7E9AE164CC75E6727FC36B6B6D2258285(int32_t ___0_userStringToken, Il2CppChar* ___1_buffer, int32_t ___2_bufferLength, int32_t* ___3_length) = 0;
	virtual int32_t STDCALL IMetadataImport_GetPinvokeMap_m18802FC6E12D254F88A246D2C9709AF336AF685A(int32_t ___0_memberDef, int32_t* ___1_attributes, Il2CppChar* ___2_importName, int32_t ___3_importNameBufferLength, int32_t* ___4_importNameLength, int32_t* ___5_moduleRef) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumSignatures_m4DB1174A1D28B2A290D700D64E7AA0B785367792(void** ___0_enumHandle, int32_t* ___1_signatureTokens, int32_t ___2_bufferLength, int32_t* ___3_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumTypeSpecs_m41DA17E39CD4E4E2526D47D436919B51C71EEC2F(void** ___0_enumHandle, int32_t* ___1_typeSpecs, int32_t ___2_bufferLength, int32_t* ___3_count) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumUserStrings_m79DF282C5DC9E5C910111F39EE275DBA1BCB44B5(void** ___0_enumHandle, int32_t* ___1_userStrings, int32_t ___2_bufferLength, int32_t* ___3_count) = 0;
	virtual int32_t STDCALL IMetadataImport_GetParamForMethodIndex_m9ED691CC3D505E4DDB5B89682BCA263558CFE17D(int32_t ___0_methodDef, int32_t ___1_sequenceNumber, int32_t* ___2_parameterToken) = 0;
	virtual int32_t STDCALL IMetadataImport_EnumCustomAttributes_mF7C652A2DCE5090D9300333FACCC6F278679AE12(void** ___0_enumHandle, int32_t ___1_parent, int32_t ___2_attributeType, int32_t* ___3_customAttributes, int32_t ___4_bufferLength, int32_t* ___5_count) = 0;
	virtual int32_t STDCALL IMetadataImport_GetCustomAttributeProps_mFDF6228D712BB4DB37D799714887D83DCA96BB85(int32_t ___0_customAttribute, int32_t* ___1_parent, int32_t* ___2_constructor, uint8_t** ___3_value, int32_t* ___4_valueLength) = 0;
	virtual int32_t STDCALL IMetadataImport_FindTypeRef_mA3A2124D2583C3693C7FD1AA5DEC9F04A8DC0133(int32_t ___0_resolutionScope, Il2CppChar* ___1_name, int32_t* ___2_typeRef) = 0;
	virtual int32_t STDCALL IMetadataImport_GetMemberProps_mD0C3FFB8528F687B5E4D507AA36D6FD98D706A8B(int32_t ___0_member, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_relativeVirtualAddress, int32_t* ___9_implAttributes, int32_t* ___10_constantType, uint8_t** ___11_constantValue, int32_t* ___12_constantValueLength) = 0;
	virtual int32_t STDCALL IMetadataImport_GetFieldProps_mF9525352FC212EE5685EFE8191A5EE00DEACC879(int32_t ___0_fieldDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_constantType, uint8_t** ___9_constantValue, int32_t* ___10_constantValueLength) = 0;
	virtual int32_t STDCALL IMetadataImport_GetPropertyProps_mE26A3F9F86CBFD020E682CA88F2C9177822446E1(int32_t ___0_propertyDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_constantType, uint8_t** ___9_constantValue, int32_t* ___10_constantValueLength, int32_t* ___11_setterMethodDef, int32_t* ___12_getterMethodDef, int32_t* ___13_outerMethodDefs, int32_t ___14_outerMethodDefsBufferLength, int32_t* ___15_otherMethodDefCount) = 0;
	virtual int32_t STDCALL IMetadataImport_GetParamProps_mA8811C6DEF34A0B0D5B3D17B4E32DD92D83BB009(int32_t ___0_parameter, int32_t* ___1_declaringMethodDef, int32_t* ___2_sequenceNumber, Il2CppChar* ___3_name, int32_t ___4_nameBufferLength, int32_t* ___5_nameLength, int32_t* ___6_attributes, int32_t* ___7_constantType, uint8_t** ___8_constantValue, int32_t* ___9_constantValueLength) = 0;
	virtual int32_t STDCALL IMetadataImport_GetCustomAttributeByName_mD836C59BA583F8AE906565DC6E4461E96AAB9654(int32_t ___0_parent, Il2CppChar* ___1_name, uint8_t** ___2_value, int32_t* ___3_valueLength) = 0;
	virtual IL2CPP_VARIANT_BOOL STDCALL IMetadataImport_IsValidToken_m439515AFE5EF48D1C071159EB4D0398FD174A03C(int32_t ___0_token) = 0;
	virtual int32_t STDCALL IMetadataImport_GetNestedClassProps_mA2CBAC2114EC5741D32E95809ED43857C690C1D4(int32_t ___0_nestedClass, int32_t* ___1_enclosingClass) = 0;
	virtual int32_t STDCALL IMetadataImport_GetNativeCallConvFromSig_mE3C0BF0A1AEC840781DAAEDB8CD31FC7131A012C(uint8_t* ___0_signature, int32_t ___1_signatureLength, int32_t* ___2_callingConvention) = 0;
	virtual int32_t STDCALL IMetadataImport_IsGlobal_m7C2CE794918A316EA7921F433065DAE7BE852BD2(int32_t ___0_token, IL2CPP_VARIANT_BOOL ___1_value) = 0;
};
// System.Runtime.InteropServices.ComTypes.IStream
struct NOVTABLE IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped0_Read_m3931B96A6502D63027D19B33BA00E7C458F4D7B4() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped1_Write_m6E380B9D97F9BE8C94006C2EFDAB9AECFB71C8A2() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped2_Seek_m48BA1F8D419524EA25388A125ACE01FD0E997E29() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped3_SetSize_mB7C3E686D66E8F06E9481D6568FA59859909618F() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped4_CopyTo_mFC5D2A1F09A0E8B93E0A59E073E3AA1E52BD0734() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped5_Commit_mB80C96189A539191961E33DB294ACE3212AF3F5E() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped6_Revert_m75A5D9DF47733C45D2A898B4BEF1D7F78388FFF7() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped7_LockRegion_m390EE8E850DD8FABE6AE1E5AFFBA3F9B99A97F7C() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped8_UnlockRegion_mC6D0528F61E174C8457129EC134A889C7171053D() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped9_Stat_mA04454F71EE8597AA29723BF0A5BA441E77ED55E() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped10_Clone_mAD943B3C6CA783518166BCC6DCBB78A60AB210C8() = 0;
};
// Microsoft.DiaSymReader.IUnsafeComStream
struct NOVTABLE IUnsafeComStream_t9EB25794F0525FA7F0C3279E5D01BBC0C9B9BE34 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Read_mC009056D709CF0520E7D30C463586E2B8AB23449(uint8_t* ___0_pv, int32_t ___1_cb, int32_t* ___2_pcbRead) = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Write_m4EA686839B2A5687580583374524B0E4D8A89EBD(uint8_t* ___0_pv, int32_t ___1_cb, int32_t* ___2_pcbWritten) = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Seek_m7EDA0D27B2217B91437269962321B32E31CA8512(int64_t ___0_dlibMove, int32_t ___1_dwOrigin, int64_t* ___2_plibNewPosition) = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_SetSize_m3AFDA3A12326AA7CCC79081AD0E31542AD78D943(int64_t ___0_libNewSize) = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_CopyTo_m0F48691F889E1C41C19BDAB633C9884D5380CE44(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___0_pstm, int64_t ___1_cb, int32_t* ___2_pcbRead, int32_t* ___3_pcbWritten) = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Commit_m47B3A82513D3E1D0AFF7075C282EDD5E52F6BF4E(int32_t ___0_grfCommitFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Revert_m7AC567230A2B3B3AA5B7302A138BA6474E18AD46() = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_LockRegion_m39618B35EB788EFBDE7CF42EAA42E37B1B2E91C1(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_UnlockRegion_m94423E610F211A29A41772801E3D415498A47A9C(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Stat_m15E5AE0A3A639ED269B308C60E472E4A691D92F4(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___0_pstatstg, int32_t ___1_grfStatFlag) = 0;
	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Clone_mF0A4166DB4197ABAEBB06A36FBE811373C592A21(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___0_ppstm) = 0;
};

// Microsoft.DiaSymReader.ComMemoryStream
struct ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3  : public RuntimeObject
{
	// System.Int32 Microsoft.DiaSymReader.ComMemoryStream::_chunkSize
	int32_t ____chunkSize_0;
	// System.Collections.Generic.List`1<System.Byte[]> Microsoft.DiaSymReader.ComMemoryStream::_chunks
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ____chunks_1;
	// System.Int32 Microsoft.DiaSymReader.ComMemoryStream::_position
	int32_t ____position_2;
	// System.Int32 Microsoft.DiaSymReader.ComMemoryStream::_length
	int32_t ____length_3;
};

// Microsoft.DiaSymReader.MetadataAdapterBase
struct MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Runtime.InteropServices.ComTypes.FILETIME
struct FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 
{
	// System.Int32 System.Runtime.InteropServices.ComTypes.FILETIME::dwLowDateTime
	int32_t ___dwLowDateTime_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.FILETIME::dwHighDateTime
	int32_t ___dwHighDateTime_1;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// Microsoft.DiaSymReader.MetadataImportFieldOffset
struct MetadataImportFieldOffset_t44A1CAA35A45D77251F3B853D92EAD5FAFFBE14F 
{
	// System.Int32 Microsoft.DiaSymReader.MetadataImportFieldOffset::FieldDef
	int32_t ___FieldDef_0;
	// System.UInt32 Microsoft.DiaSymReader.MetadataImportFieldOffset::Offset
	uint32_t ___Offset_1;
};

// Microsoft.DiaSymReader.SymWriterMetadataAdapter
struct SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34  : public MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10
{
	// Microsoft.DiaSymReader.ISymWriterMetadataProvider Microsoft.DiaSymReader.SymWriterMetadataAdapter::_metadataProvider
	RuntimeObject* ____metadataProvider_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Reflection.MethodAttributes
struct MethodAttributes_t11E7256A890B759AB3FAECB4F0E92376724657E0 
{
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___2;
};

// System.Reflection.MethodImplAttributes
struct MethodImplAttributes_tF5B03D3615C5C686582A636F1681C7404466AD4D 
{
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___2;
};

// System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 
{
	// System.String System.Runtime.InteropServices.ComTypes.STATSTG::pwcsName
	String_t* ___pwcsName_0;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::type
	int32_t ___type_1;
	// System.Int64 System.Runtime.InteropServices.ComTypes.STATSTG::cbSize
	int64_t ___cbSize_2;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::mtime
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime_3;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::ctime
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime_4;
	// System.Runtime.InteropServices.ComTypes.FILETIME System.Runtime.InteropServices.ComTypes.STATSTG::atime
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime_5;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfMode
	int32_t ___grfMode_6;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfLocksSupported
	int32_t ___grfLocksSupported_7;
	// System.Guid System.Runtime.InteropServices.ComTypes.STATSTG::clsid
	Guid_t ___clsid_8;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::grfStateBits
	int32_t ___grfStateBits_9;
	// System.Int32 System.Runtime.InteropServices.ComTypes.STATSTG::reserved
	int32_t ___reserved_10;
};
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime_3;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime_4;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.ComTypes.STATSTG
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com
{
	Il2CppChar* ___pwcsName_0;
	int32_t ___type_1;
	int64_t ___cbSize_2;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime_3;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime_4;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime_5;
	int32_t ___grfMode_6;
	int32_t ___grfLocksSupported_7;
	Guid_t ___clsid_8;
	int32_t ___grfStateBits_9;
	int32_t ___reserved_10;
};

// System.Reflection.TypeAttributes
struct TypeAttributes_t59E01D9A0A43AA9C196ED5686902E8B2DC0CBEC3 
{
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___2;
};

// Microsoft.DiaSymReader.ComMemoryStream

// Microsoft.DiaSymReader.ComMemoryStream

// Microsoft.DiaSymReader.MetadataAdapterBase

// Microsoft.DiaSymReader.MetadataAdapterBase

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// Microsoft.DiaSymReader.MetadataImportFieldOffset

// Microsoft.DiaSymReader.MetadataImportFieldOffset

// Microsoft.DiaSymReader.SymWriterMetadataAdapter

// Microsoft.DiaSymReader.SymWriterMetadataAdapter

// System.Void

// System.Void

// System.Reflection.MethodAttributes

// System.Reflection.MethodAttributes

// System.Reflection.MethodImplAttributes

// System.Reflection.MethodImplAttributes

// System.Runtime.InteropServices.ComTypes.STATSTG

// System.Runtime.InteropServices.ComTypes.STATSTG

// System.Reflection.TypeAttributes

// System.Reflection.TypeAttributes
#ifdef __clang__
#pragma clang diagnostic pop
#endif

IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com_back(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com_cleanup(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled);


// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.Read(System.Byte*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Read_mA18659192C939DB4B9A185ED2B63FDE5E093B43B (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, uint8_t* ___0_pv, int32_t ___1_cb, int32_t* ___2_pcbRead, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.Write(System.Byte*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Write_m7BD852EC29957D6AE647FD014731E121F2826B46 (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, uint8_t* ___0_pv, int32_t ___1_cb, int32_t* ___2_pcbWritten, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.Seek(System.Int64,System.Int32,System.Int64*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Seek_m7D5FA570E0860A400D407530A082A10C0122B549 (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, int64_t ___0_dlibMove, int32_t ___1_origin, int64_t* ___2_plibNewPosition, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.SetSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_SetSize_mB80914FE081BB7653C69A6D2A8DA6682F665A895 (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, int64_t ___0_libNewSize, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.CopyTo(System.Runtime.InteropServices.ComTypes.IStream,System.Int64,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_CopyTo_m9DB2DDD6B42F809E82E7417B8764230C4DAC5AD0 (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, RuntimeObject* ___0_pstm, int64_t ___1_cb, int32_t* ___2_pcbRead, int32_t* ___3_pcbWritten, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.Commit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Commit_mEA4708960E72179E5E7B6B2DAC981CA6A4BFF60D (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, int32_t ___0_grfCommitFlags, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Revert_m83248DF794C3950AA07EABD07DF7B0612E2889FE (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.LockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_LockRegion_mDDD646E5CF030F52F9081E90D2D2A4FEEA3DCF55 (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_lockType, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.UnlockRegion(System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_UnlockRegion_mA1328CBF967D495E3F22A534A9502F0F9F4E0A45 (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_lockType, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.Stat(System.Runtime.InteropServices.ComTypes.STATSTG&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Stat_m8386018F8A850EB14618648010CD06505A8305AC (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___0_pstatstg, int32_t ___1_grfStatFlag, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.ComMemoryStream::Microsoft.DiaSymReader.IUnsafeComStream.Clone(System.Runtime.InteropServices.ComTypes.IStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Clone_m38F4065E3CEAFBE079535ACC3F78488F4522D48C (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __this, RuntimeObject** ___0_ppstm, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.CloseEnum(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_CloseEnum_m7E84FEAD3D831CAED7A55BDCCB5A5BBB23B49977 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void* ___0_enumHandle, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.CountEnum(System.Void*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_CountEnum_m3DF44C8CEC1A9916E712F84269BA9390BD7A2DE9 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void* ___0_enumHandle, int32_t* ___1_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.ResetEnum(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_ResetEnum_m4FE20CBA62640948E01F5E4B7A7F9E7F15979BCD (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void* ___0_enumHandle, int32_t ___1_position, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumTypeDefs(System.Void*&,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumTypeDefs_mE31A83F88277EB796EE7134B8C990F7BB732572B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t* ___1_typeDefs, int32_t ___2_bufferLength, int32_t* ___3_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumInterfaceImpls(System.Void*&,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumInterfaceImpls_m2410DA0C973299775097F16FE17227C4A331F832 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_interfaceImpls, int32_t ___3_bufferLength, int32_t* ___4_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumTypeRefs(System.Void*&,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumTypeRefs_m07A9FCD53F5F4975329D91B558139A3D58C4834B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t* ___1_typeRefs, int32_t ___2_bufferLength, int32_t* ___3_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.FindTypeDefByName(System.String,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindTypeDefByName_mC06BB43AFD1097975C3BF9C49AD6BC2A7E3BDF3E (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, String_t* ___0_name, int32_t ___1_enclosingClass, int32_t* ___2_typeDef, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetScopeProps(System.Char*,System.Int32,System.Int32*,System.Guid*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetScopeProps_m61BDE47505849E4EB1F8DDA946FB1784AA58E358 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, Il2CppChar* ___0_name, int32_t ___1_bufferLength, int32_t* ___2_nameLength, Guid_t* ___3_mvid, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetModuleFromScope(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetModuleFromScope_m37086F214923658BC26A4A6296BF2EF62EBD4914 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t* ___0_moduleDef, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::GetTypeDefProps(System.Int32,System.Char*,System.Int32,System.Int32*,System.Reflection.TypeAttributes*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_GetTypeDefProps_mFC3A1A9BD775FC50025682AAED0C394F1265BBCD (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_typeDef, Il2CppChar* ___1_qualifiedName, int32_t ___2_qualifiedNameBufferLength, int32_t* ___3_qualifiedNameLength, int32_t* ___4_attributes, int32_t* ___5_baseType, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetInterfaceImplProps(System.Int32,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetInterfaceImplProps_m4E2DFB9506C09946267EA43EF79A1E37AF4DC417 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_interfaceImpl, int32_t* ___1_typeDef, int32_t* ___2_interfaceDefRefSpec, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::GetTypeRefProps(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_GetTypeRefProps_m32A448A8092C6E4FCD12E905B3AB137D04ABBEA3 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_typeRef, int32_t* ___1_resolutionScope, Il2CppChar* ___2_qualifiedName, int32_t ___3_qualifiedNameBufferLength, int32_t* ___4_qualifiedNameLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.ResolveTypeRef(System.Int32,System.Guid&,System.Object&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_ResolveTypeRef_m5D99DB1EBBADB834B1D4B72167BFAA9966E63603 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_typeRef, Guid_t* ___1_scopeInterfaceId, RuntimeObject** ___2_scope, int32_t* ___3_typeDef, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumMembers(System.Void*&,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMembers_m4E2215886D7CA96C6075698C0BD91C43B15AB4F7 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_memberDefs, int32_t ___3_bufferLength, int32_t* ___4_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumMembersWithName(System.Void*&,System.Int32,System.String,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMembersWithName_m1CEF2DC07C59B5FEE721EE529721FCC169287E2F (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, String_t* ___2_name, int32_t* ___3_memberDefs, int32_t ___4_bufferLength, int32_t* ___5_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumMethods(System.Void*&,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethods_mB28FBC962AF460E970192DC060AE045A05FE7EBF (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_methodDefs, int32_t ___3_bufferLength, int32_t* ___4_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumMethodsWithName(System.Void*&,System.Int32,System.String,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethodsWithName_mA95ECF0C380555643C36CC65D7B49F18A49043AB (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, String_t* ___2_name, int32_t* ___3_methodDefs, int32_t ___4_bufferLength, int32_t* ___5_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumFields(System.Void*&,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumFields_m31647ED4A98FF7381E2EC0C5EDA9D9B53C5EFD5B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_fieldDefs, int32_t ___3_bufferLength, int32_t* ___4_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumFieldsWithName(System.Void*&,System.Int32,System.String,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumFieldsWithName_m30E635D15F88CA0370FC6426E57934EECF4AF157 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, String_t* ___2_name, int32_t* ___3_fieldDefs, int32_t ___4_bufferLength, int32_t* ___5_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumParams(System.Void*&,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumParams_mE06F736E896CF05B6E5C69C83577D207B45352F6 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_methodDef, int32_t* ___2_paramDefs, int32_t ___3_bufferLength, int32_t* ___4_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumMemberRefs(System.Void*&,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMemberRefs_m6C83B6EF6D77AD1BEC9CD41A6E2B4A4F4341D762 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_parentToken, int32_t* ___2_memberRefs, int32_t ___3_bufferLength, int32_t* ___4_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumMethodImpls(System.Void*&,System.Int32,System.Int32*,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethodImpls_m3DB98828A26B3C7A88F60846EC7501A4832163F1 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_implementationTokens, int32_t* ___3_declarationTokens, int32_t ___4_bufferLength, int32_t* ___5_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumPermissionSets(System.Void*&,System.Int32,System.UInt32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumPermissionSets_m51906C9B7E6D828D9D2E35FB29E86D5F17C68487 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_token, uint32_t ___2_action, int32_t* ___3_declSecurityTokens, int32_t ___4_bufferLength, int32_t* ___5_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.FindMember(System.Int32,System.String,System.Byte*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindMember_mDF83574E1ECD7184CE8442BAB964C3E814973115 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_typeDef, String_t* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_memberDef, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.FindMethod(System.Int32,System.String,System.Byte*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindMethod_mCE098C4C7C74588F74295F96835B23A03499418C (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_typeDef, String_t* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_methodDef, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.FindField(System.Int32,System.String,System.Byte*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindField_mE7AC59CD66B612ABDCD3F46387D70322AE9DF78B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_typeDef, String_t* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_fieldDef, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.FindMemberRef(System.Int32,System.String,System.Byte*,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindMemberRef_m25A6DFB333869AC5C23C4156EBA8E4E7E85BB4C0 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_typeDef, String_t* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_memberRef, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::GetMethodProps(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*,System.Reflection.MethodAttributes*,System.Byte**,System.Int32*,System.Int32*,System.Reflection.MethodImplAttributes*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_GetMethodProps_m98CF5FAE3F49F12EE7174CC107B73F31D4C44758 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_methodDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_relativeVirtualAddress, int32_t* ___9_implAttributes, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetMemberRefProps(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetMemberRefProps_m0085FE84F51537C1ADB7522CDEA8B9364CA9AEF8 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_memberRef, int32_t* ___1_declaringType, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, uint8_t** ___5_signature, int32_t* ___6_signatureLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumProperties(System.Void*&,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumProperties_mC6D9525D1018F410A57A8B03C96015026C0D4D49 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_properties, int32_t ___3_bufferLength, int32_t* ___4_count, const RuntimeMethod* method) ;
// System.UInt32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumEvents(System.Void*&,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumEvents_m8E7F94350800DE86012890919BC134974F5B6EF4 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_events, int32_t ___3_bufferLength, int32_t* ___4_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetEventProps(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*,System.Int32*,System.Int32*,System.Int32*,System.Int32*,System.Int32*,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetEventProps_m1897365E611B6331E2E0A2000E2353297A163955 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_event, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, int32_t* ___6_eventType, int32_t* ___7_adderMethodDef, int32_t* ___8_removerMethodDef, int32_t* ___9_raiserMethodDef, int32_t* ___10_otherMethodDefs, int32_t ___11_otherMethodDefBufferLength, int32_t* ___12_methodMethodDefsLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumMethodSemantics(System.Void*&,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethodSemantics_m34ED9E0FE446ABF6758A7F490C228D4B6B5D6541 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_methodDef, int32_t* ___2_eventsAndProperties, int32_t ___3_bufferLength, int32_t* ___4_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetMethodSemantics(System.Int32,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetMethodSemantics_m8E680B29BC7F4E98A39CB426CC22226C0658E855 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_methodDef, int32_t ___1_eventOrProperty, int32_t* ___2_semantics, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetClassLayout(System.Int32,System.Int32*,Microsoft.DiaSymReader.MetadataImportFieldOffset*,System.Int32,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetClassLayout_m1DFC72381A149B5BC4AEAB8434633D65AF272503 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_typeDef, int32_t* ___1_packSize, MetadataImportFieldOffset_t44A1CAA35A45D77251F3B853D92EAD5FAFFBE14F* ___2_fieldOffsets, int32_t ___3_bufferLength, int32_t* ___4_count, int32_t* ___5_typeSize, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetFieldMarshal(System.Int32,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetFieldMarshal_m2B163215669A07486B30295DF504452307780EFF (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_fieldDef, uint8_t** ___1_nativeTypeSignature, int32_t* ___2_nativeTypeSignatureLengvth, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetRVA(System.Int32,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetRVA_mB63E8D0FE786AF116C437F378B77C1112C4719BA (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_methodDef, int32_t* ___1_relativeVirtualAddress, int32_t* ___2_implAttributes, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetPermissionSetProps(System.Int32,System.UInt32*,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetPermissionSetProps_m7673595279057AA7B4ADE70D52A6C7B74E47632E (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_declSecurity, uint32_t* ___1_action, uint8_t** ___2_permissionBlob, int32_t* ___3_permissionBlobLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::GetSigFromToken(System.Int32,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_GetSigFromToken_mEAD4DF80368D7AD2A55535C48BF8AB7CA4FF860D (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_standaloneSignature, uint8_t** ___1_signature, int32_t* ___2_signatureLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetModuleRefProps(System.Int32,System.Char*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetModuleRefProps_mEB0BAE2A9A5F13FE65332F89CA4859FFBD5933D3 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_moduleRef, Il2CppChar* ___1_name, int32_t ___2_nameBufferLength, int32_t* ___3_nameLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumModuleRefs(System.Void*&,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumModuleRefs_mCF5E00DD77D598F9F4EA19549C4047BF538D1BBF (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t* ___1_moduleRefs, int32_t ___2_bufferLength, int32_t* ___3_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetTypeSpecFromToken(System.Int32,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetTypeSpecFromToken_m90EDAC09CB92B78A0F3CAB7F93297EBA157C5F76 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_typeSpec, uint8_t** ___1_signature, int32_t* ___2_signatureLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetNameFromToken(System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetNameFromToken_m4BDE864FD52F46FEEB435ABDD5EA1B94269CD4D1 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_token, uint8_t* ___1_nameUTF8, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumUnresolvedMethods(System.Void*&,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumUnresolvedMethods_m7BDF48E14B6CC1E0505ABADF4994D109093D0B75 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t* ___1_methodDefs, int32_t ___2_bufferLength, int32_t* ___3_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetUserString(System.Int32,System.Char*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetUserString_mEC9D24C98684C5AA3EBAF4A3A937EF0C274ACC01 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_userStringToken, Il2CppChar* ___1_buffer, int32_t ___2_bufferLength, int32_t* ___3_length, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetPinvokeMap(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetPinvokeMap_m2C9E7F84DEBAE83F7062C4296F97688E135ED9C2 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_memberDef, int32_t* ___1_attributes, Il2CppChar* ___2_importName, int32_t ___3_importNameBufferLength, int32_t* ___4_importNameLength, int32_t* ___5_moduleRef, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumSignatures(System.Void*&,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumSignatures_mB728D755D53869C46BF3D291ABFEF344FE2D7BC9 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t* ___1_signatureTokens, int32_t ___2_bufferLength, int32_t* ___3_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumTypeSpecs(System.Void*&,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumTypeSpecs_m071FD54808411B0A1FB953EAEACD665CFE5EBB71 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t* ___1_typeSpecs, int32_t ___2_bufferLength, int32_t* ___3_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumUserStrings(System.Void*&,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumUserStrings_m2B39201C2C4386B49F31F7FFAB780AD00361BC7E (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t* ___1_userStrings, int32_t ___2_bufferLength, int32_t* ___3_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetParamForMethodIndex(System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetParamForMethodIndex_mBAAD3CC816396087616F74EA5CAC466CE4772460 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_methodDef, int32_t ___1_sequenceNumber, int32_t* ___2_parameterToken, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.EnumCustomAttributes(System.Void*&,System.Int32,System.Int32,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumCustomAttributes_m61E03E07CED08C1BC679F0DBB093B02C07C13EC8 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, void** ___0_enumHandle, int32_t ___1_parent, int32_t ___2_attributeType, int32_t* ___3_customAttributes, int32_t ___4_bufferLength, int32_t* ___5_count, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetCustomAttributeProps(System.Int32,System.Int32*,System.Int32*,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetCustomAttributeProps_mCE533D2C546D11811B5B622B22EDAD3F2874F578 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_customAttribute, int32_t* ___1_parent, int32_t* ___2_constructor, uint8_t** ___3_value, int32_t* ___4_valueLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.FindTypeRef(System.Int32,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindTypeRef_m8966A9C48A4C72464341694AB1538EC6784BADA2 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_resolutionScope, String_t* ___1_name, int32_t* ___2_typeRef, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetMemberProps(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*,System.Int32*,System.Byte**,System.Int32*,System.Int32*,System.Int32*,System.Int32*,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetMemberProps_mDA1CDE407AFF5492EA8E7623941B91383603344A (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_member, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_relativeVirtualAddress, int32_t* ___9_implAttributes, int32_t* ___10_constantType, uint8_t** ___11_constantValue, int32_t* ___12_constantValueLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetFieldProps(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*,System.Int32*,System.Byte**,System.Int32*,System.Int32*,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetFieldProps_m5F40C5E14A24CA39CD4A792C73AD8E53C50B2A29 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_fieldDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_constantType, uint8_t** ___9_constantValue, int32_t* ___10_constantValueLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetPropertyProps(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*,System.Int32*,System.Byte**,System.Int32*,System.Int32*,System.Byte**,System.Int32*,System.Int32*,System.Int32*,System.Int32*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetPropertyProps_mFDC0798A79B5CBB2D0C512BDF121C773F4DA741D (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_propertyDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_constantType, uint8_t** ___9_constantValue, int32_t* ___10_constantValueLength, int32_t* ___11_setterMethodDef, int32_t* ___12_getterMethodDef, int32_t* ___13_outerMethodDefs, int32_t ___14_outerMethodDefsBufferLength, int32_t* ___15_otherMethodDefCount, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetParamProps(System.Int32,System.Int32*,System.Int32*,System.Char*,System.Int32,System.Int32*,System.Int32*,System.Int32*,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetParamProps_m5A75A28ACEB99F8150A59A31A430286FFE2E7C59 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_parameter, int32_t* ___1_declaringMethodDef, int32_t* ___2_sequenceNumber, Il2CppChar* ___3_name, int32_t ___4_nameBufferLength, int32_t* ___5_nameLength, int32_t* ___6_attributes, int32_t* ___7_constantType, uint8_t** ___8_constantValue, int32_t* ___9_constantValueLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetCustomAttributeByName(System.Int32,System.String,System.Byte**,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetCustomAttributeByName_m576352C41BEBBCD1BD509E541FA9E276C6DABC5D (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_parent, String_t* ___1_name, uint8_t** ___2_value, int32_t* ___3_valueLength, const RuntimeMethod* method) ;
// System.Boolean Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.IsValidToken(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_IsValidToken_m49F273A03936666DFC85FCCF5679DCC62BDFC029 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::GetNestedClassProps(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_GetNestedClassProps_m959954EF6E7AA4A4B050CD2DF626EBC031A0FF94 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_nestedClass, int32_t* ___1_enclosingClass, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.GetNativeCallConvFromSig(System.Byte*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetNativeCallConvFromSig_mE09BD7C55C9433DAFA6954C4DBBC8A0AB9B74A02 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, uint8_t* ___0_signature, int32_t ___1_signatureLength, int32_t* ___2_callingConvention, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataImport.IsGlobal(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_IsGlobal_m75F17FCF9580E762B4355A0FF62F4DB47980470F (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, int32_t ___0_token, bool ___1_value, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetModuleProps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetModuleProps_mCEB523F63C99FCDB52C8DD5858D971418285E92A (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___Save_m4F43416B5B898838FDF6A34A70B6755E727C62A4 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SaveToStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SaveToStream_m1998ED7260D776FBEA48BC03206BDEBE336F354B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__GetSaveSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___GetSaveSize_mF95212A21343AEC08E51FBE9B5C764AF954C8603 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineTypeDef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineTypeDef_m728062B7D05C2E8B1F22BCDC0A8B192210C8005B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineNestedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineNestedType_m7AB729AB9AB8D562C7CC6DE615995C2AA4FBCEC4 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetHandler_mC955E8C21D44DD0F6EEA863EA3934975FEB91AE0 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineMethod_m3DE76FFC878B16ED9BF815A4440E93D937E9A222 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineMethodImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineMethodImpl_mFC973573EE6C63E9E3AF44EAA87611AB4E5E2239 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineTypeRefByName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineTypeRefByName_m83D2AF36EE8082D36D6B442C24EAA764555CFAAD (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineImportType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineImportType_m2AAE063814A2CD599B941681E2308B16C89FF935 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineMemberRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineMemberRef_m4D7EF36163B14272979862F4F7566A65EC78B68B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineImportMember()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineImportMember_m31A58C1479B9DE6016104570AF0A654409428A71 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineEvent_m5E1C2A9348EAF0B85D2804D00BEDC466BD22F383 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetClassLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetClassLayout_m6F687AF01E5183E2AAC7DBD7287B51761379B67E (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DeleteClassLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeleteClassLayout_m401D6FD450BA22873E4215B7343B606A0099762C (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetFieldMarshal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetFieldMarshal_m1D6E40716548DDE439872B3F5F90A6B99E610A16 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DeleteFieldMarshal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeleteFieldMarshal_m0E9A54C6DCF058AC5BF3A3DCE6AD196DA2BBA49B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefinePermissionSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefinePermissionSet_m7A4BE74A77CBEEA6C9E9FCA8C3C4EEC48365EED7 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetRVA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetRVA_mAD8ACB9D03706261AED2B2A9ADDB8A6FCA217C10 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.MetadataAdapterBase::GetTokenFromSig(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetadataAdapterBase_GetTokenFromSig_m79E6F3A485F1DDD7132F71750900853FC5A3B770 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, uint8_t* ___0_voidPointerSig, int32_t ___1_byteCountSig, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineModuleRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineModuleRef_mB31410ACEE0E99AC2AA326EC45AB3D644F869DFA (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetParent_m6C2BCAB1DA6AC82B8DFF8E1CC58FEA24A30E6D5E (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__GetTokenFromTypeSpec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___GetTokenFromTypeSpec_mEFEAD0138150B0CCE639972896B52914FCBAAA17 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SaveToMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SaveToMemory_mB9D9B9710083E7F6D1716892115AAD5346B700C7 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineUserString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineUserString_m9ECFC87555E334F901F3BA1FAAF2449A080F8127 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DeleteToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeleteToken_m551055BDE71002A808D9D9D7362EEB52D2E3D763 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetMethodProps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetMethodProps_m4130ACCD2650CAE7AB8B1BFFE1F64B564DA469E3 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetTypeDefProps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetTypeDefProps_m9E925B4AE570006C3257BD35405A658907B248CC (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetEventProps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetEventProps_mF4BBD01D4CA843E697EDF7A80A6AEBAC4FBCF640 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetPermissionSetProps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetPermissionSetProps_mF8A9A9F4FDC2957C5AF790E036FBC4B717B7B10B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefinePinvokeMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefinePinvokeMap_m98DE7B0FEE8FCFB465626762F755AC72DDB8C9AE (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetPinvokeMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetPinvokeMap_m64672DE2BEAC7EDD3F1B457E0DDA2F2D3724BBEA (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DeletePinvokeMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeletePinvokeMap_m69E3AF92B21BADD3D914ABE027978B22295C750D (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineCustomAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineCustomAttribute_m633FF29A10714865D52FD9EA5E721CDB0864C32E (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetCustomAttributeValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetCustomAttributeValue_mBEA3FF5E5595B9FB2C94AF5E8C965927822C11EE (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineField_m9EBCB4985BE4A5E637A1763F81B096B5635DBDD2 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineProperty_mD0C17F5AACEED4FFF6D684FC77B3F28C0B978D5A (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineParam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineParam_mA02A6EA65B7794E0B40C3639017505E9DF0D93C0 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetFieldProps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetFieldProps_mB9EAC700D3B6A80C2FDB1C5228707DED60822769 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetPropertyProps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetPropertyProps_m76DAF04EDFA4F14E4014D6A7B8F851DAEC369940 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetParamProps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetParamProps_mBE59B653BB0767FBC43BFC84AE08B083D1841B0B (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__DefineSecurityAttributeSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineSecurityAttributeSet_mDD7219420E038FCD22D6BEA61C262A9C18525808 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__ApplyEditAndContinue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___ApplyEditAndContinue_mF3B302C58DA56585D568C7D4D08CF9C3D99BCC58 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__TranslateSigWithScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___TranslateSigWithScope_m8D7FDAFFDAEC1FFAC9E67625A161FD92A12E6818 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetMethodImplFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetMethodImplFlags_m9C20240F03FEBCEA1EB2B515433C4BED8AE1FA6A (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__SetFieldRVA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetFieldRVA_mC616465B6AA84EBCDDF96E68B627B244007AD031 (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__Merge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___Merge_m5938CF3D737166E434786FBC1117BDF65D2444ED (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.DiaSymReader.MetadataAdapterBase::Microsoft.DiaSymReader.IMetadataEmit.__MergeEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___MergeEnd_m69131777D95B7E97F9C3392B18045CD3E3A5B6ED (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.SymWriterMetadataAdapter::GetTypeDefProps(System.Int32,System.Char*,System.Int32,System.Int32*,System.Reflection.TypeAttributes*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SymWriterMetadataAdapter_GetTypeDefProps_m595BF492F13C3B3314418AE7B9BD10CD92918E13 (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __this, int32_t ___0_typeDef, Il2CppChar* ___1_qualifiedName, int32_t ___2_qualifiedNameBufferLength, int32_t* ___3_qualifiedNameLength, int32_t* ___4_attributes, int32_t* ___5_baseType, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.SymWriterMetadataAdapter::GetTypeRefProps(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SymWriterMetadataAdapter_GetTypeRefProps_mED58E70E7BF9E18A6BB6D2ACECC7794722D99C12 (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __this, int32_t ___0_typeRef, int32_t* ___1_resolutionScope, Il2CppChar* ___2_qualifiedName, int32_t ___3_qualifiedNameBufferLength, int32_t* ___4_qualifiedNameLength, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.SymWriterMetadataAdapter::GetMethodProps(System.Int32,System.Int32*,System.Char*,System.Int32,System.Int32*,System.Reflection.MethodAttributes*,System.Byte**,System.Int32*,System.Int32*,System.Reflection.MethodImplAttributes*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SymWriterMetadataAdapter_GetMethodProps_mF29136F5C186C5AF2788C54C8BA2688788653C3C (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __this, int32_t ___0_methodDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_relativeVirtualAddress, int32_t* ___9_implAttributes, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.SymWriterMetadataAdapter::GetNestedClassProps(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SymWriterMetadataAdapter_GetNestedClassProps_mDB2F034A471DD5BF38DD7483CB0F7B42A66EF8B2 (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __this, int32_t ___0_nestedClass, int32_t* ___1_enclosingClass, const RuntimeMethod* method) ;
// System.Int32 Microsoft.DiaSymReader.SymWriterMetadataAdapter::GetTokenFromSig(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SymWriterMetadataAdapter_GetTokenFromSig_mD743213C17DEA8750464B89436CA79DA7C28EE94 (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __this, uint8_t* ___0_voidPointerSig, int32_t ___1_byteCountSig, const RuntimeMethod* method) ;

// COM Callable Wrapper for Microsoft.DiaSymReader.ComMemoryStream
struct ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3_ComCallableWrapper>, IUnsafeComStream_t9EB25794F0525FA7F0C3279E5D01BBC0C9B9BE34
{
	inline ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IUnsafeComStream_t9EB25794F0525FA7F0C3279E5D01BBC0C9B9BE34::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IUnsafeComStream_t9EB25794F0525FA7F0C3279E5D01BBC0C9B9BE34*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Read_mC009056D709CF0520E7D30C463586E2B8AB23449(uint8_t* ___0_pv, int32_t ___1_cb, int32_t* ___2_pcbRead) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Read_mA18659192C939DB4B9A185ED2B63FDE5E093B43B(__thisValue, ___0_pv, ___1_cb, ___2_pcbRead, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Write_m4EA686839B2A5687580583374524B0E4D8A89EBD(uint8_t* ___0_pv, int32_t ___1_cb, int32_t* ___2_pcbWritten) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Write_m7BD852EC29957D6AE647FD014731E121F2826B46(__thisValue, ___0_pv, ___1_cb, ___2_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Seek_m7EDA0D27B2217B91437269962321B32E31CA8512(int64_t ___0_dlibMove, int32_t ___1_origin, int64_t* ___2_plibNewPosition) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Seek_m7D5FA570E0860A400D407530A082A10C0122B549(__thisValue, ___0_dlibMove, ___1_origin, ___2_plibNewPosition, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_SetSize_m3AFDA3A12326AA7CCC79081AD0E31542AD78D943(int64_t ___0_libNewSize) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_SetSize_mB80914FE081BB7653C69A6D2A8DA6682F665A895(__thisValue, ___0_libNewSize, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_CopyTo_m0F48691F889E1C41C19BDAB633C9884D5380CE44(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___0_pstm, int64_t ___1_cb, int32_t* ___2_pcbRead, int32_t* ___3_pcbWritten) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_pstm' to managed representation
		RuntimeObject* ____0_pstm_unmarshaled = NULL;
		if (___0_pstm != NULL)
		{
			____0_pstm_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___0_pstm, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____0_pstm_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____0_pstm_unmarshaled), IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, ___0_pstm);
			}
		}
		else
		{
			____0_pstm_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_CopyTo_m9DB2DDD6B42F809E82E7417B8764230C4DAC5AD0(__thisValue, ____0_pstm_unmarshaled, ___1_cb, ___2_pcbRead, ___3_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Commit_m47B3A82513D3E1D0AFF7075C282EDD5E52F6BF4E(int32_t ___0_grfCommitFlags) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Commit_mEA4708960E72179E5E7B6B2DAC981CA6A4BFF60D(__thisValue, ___0_grfCommitFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Revert_m7AC567230A2B3B3AA5B7302A138BA6474E18AD46() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Revert_m83248DF794C3950AA07EABD07DF7B0612E2889FE(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_LockRegion_m39618B35EB788EFBDE7CF42EAA42E37B1B2E91C1(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_lockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_LockRegion_mDDD646E5CF030F52F9081E90D2D2A4FEEA3DCF55(__thisValue, ___0_libOffset, ___1_cb, ___2_lockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_UnlockRegion_m94423E610F211A29A41772801E3D415498A47A9C(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_lockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_UnlockRegion_mA1328CBF967D495E3F22A534A9502F0F9F4E0A45(__thisValue, ___0_libOffset, ___1_cb, ___2_lockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Stat_m15E5AE0A3A639ED269B308C60E472E4A691D92F4(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___0_pstatstg, int32_t ___1_grfStatFlag) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}


		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_pstatstg' to managed representation
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 ____0_pstatstg_empty;
		memset((&____0_pstatstg_empty), 0, sizeof(____0_pstatstg_empty));

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Stat_m8386018F8A850EB14618648010CD06505A8305AC(__thisValue, (&____0_pstatstg_empty), ___1_grfStatFlag, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___0_pstatstg' back from managed representation
		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(____0_pstatstg_empty, *___0_pstatstg);

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IUnsafeComStream_Clone_mF0A4166DB4197ABAEBB06A36FBE811373C592A21(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___0_ppstm) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_ppstm' to managed representation
		RuntimeObject* ____0_ppstm_empty = NULL;

		// Managed method invocation
		try
		{
			ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3* __thisValue = (ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3*)GetManagedObjectInline();
			ComMemoryStream_Microsoft_DiaSymReader_IUnsafeComStream_Clone_m38F4065E3CEAFBE079535ACC3F78488F4522D48C(__thisValue, (&____0_ppstm_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___0_ppstm' back from managed representation
		if (____0_ppstm_empty != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(____0_ppstm_empty))
			{
				*___0_ppstm = il2cpp_codegen_com_query_interface<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(static_cast<Il2CppComObject*>(____0_ppstm_empty));
				(*___0_ppstm)->AddRef();
			}
			else
			{
				*___0_ppstm = il2cpp_codegen_com_get_or_create_ccw<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8>(____0_ppstm_empty);
			}
		}
		else
		{
			*___0_ppstm = NULL;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ComMemoryStream_tC9BAA4CD46F9E70D785423AB88363FDEFECE8AF3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.DiaSymReader.MetadataAdapterBase
struct MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10_ComCallableWrapper>, IMetadataImport_tE1441B91C32BBACB29A95F0402916096458BDAB7, IMetadataEmit_tC87597AAD9BF4FF837BAF9522CBA3AAFAAF9AD14
{
	inline MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetadataImport_tE1441B91C32BBACB29A95F0402916096458BDAB7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetadataImport_tE1441B91C32BBACB29A95F0402916096458BDAB7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetadataEmit_tC87597AAD9BF4FF837BAF9522CBA3AAFAAF9AD14::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetadataEmit_tC87597AAD9BF4FF837BAF9522CBA3AAFAAF9AD14*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual void STDCALL IMetadataImport_CloseEnum_m573729C6FC45531BFF9A07B8478E07C1A0D228F7(void* ___0_enumHandle) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_CloseEnum_m7E84FEAD3D831CAED7A55BDCCB5A5BBB23B49977(__thisValue, ___0_enumHandle, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		}

	}

	virtual int32_t STDCALL IMetadataImport_CountEnum_mD4DDD03DB8DFB12FF3E0795F6BCE61FA95B9473D(void* ___0_enumHandle, int32_t* ___1_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_count' to managed representation
		int32_t ____1_count_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_CountEnum_m3DF44C8CEC1A9916E712F84269BA9390BD7A2DE9(__thisValue, ___0_enumHandle, (&____1_count_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___1_count' back from managed representation
		*___1_count = ____1_count_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_ResetEnum_mBB3594ED3E0D773E99C136B949EA759260417F9D(void* ___0_enumHandle, int32_t ___1_position) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_ResetEnum_m4FE20CBA62640948E01F5E4B7A7F9E7F15979BCD(__thisValue, ___0_enumHandle, ___1_position, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumTypeDefs_mA17D2B251153C99F8621D73F10175B22D436A59E(void** ___0_enumHandle, int32_t* ___1_typeDefs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_typeDefs' to managed representation
		int32_t* ____1_typeDefs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumTypeDefs_mE31A83F88277EB796EE7134B8C990F7BB732572B(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_typeDefs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumInterfaceImpls_mF659986047EE7219CA41ECD018382B11D4A3F155(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_interfaceImpls, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_interfaceImpls' to managed representation
		int32_t* ____2_interfaceImpls_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumInterfaceImpls_m2410DA0C973299775097F16FE17227C4A331F832(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_interfaceImpls_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumTypeRefs_m166D292A1EF86970FFE4B9A08410DAFACAA27E22(void** ___0_enumHandle, int32_t* ___1_typeRefs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_typeRefs' to managed representation
		int32_t* ____1_typeRefs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumTypeRefs_m07A9FCD53F5F4975329D91B558139A3D58C4834B(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_typeRefs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindTypeDefByName_mA0F24D357554556E9A0D394A5961E7B3E197D011(Il2CppChar* ___0_name, int32_t ___1_enclosingClass, int32_t* ___2_typeDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_name' to managed representation
		String_t* ____0_name_unmarshaled = NULL;
		____0_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___0_name);

		// Marshaling of parameter '___2_typeDef' to managed representation
		int32_t ____2_typeDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindTypeDefByName_mC06BB43AFD1097975C3BF9C49AD6BC2A7E3BDF3E(__thisValue, ____0_name_unmarshaled, ___1_enclosingClass, (&____2_typeDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___2_typeDef' back from managed representation
		*___2_typeDef = ____2_typeDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetScopeProps_m76948AF10CEB3A83E218B7DE44951C8F0D50AC10(Il2CppChar* ___0_name, int32_t ___1_bufferLength, int32_t* ___2_nameLength, Guid_t* ___3_mvid) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_name' to managed representation
		Il2CppChar* ____0_name_empty = NULL;

		// Marshaling of parameter '___2_nameLength' to managed representation
		int32_t* ____2_nameLength_empty = NULL;

		// Marshaling of parameter '___3_mvid' to managed representation
		Guid_t* ____3_mvid_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetScopeProps_m61BDE47505849E4EB1F8DDA946FB1784AA58E358(__thisValue, ____0_name_empty, ___1_bufferLength, ____2_nameLength_empty, ____3_mvid_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetModuleFromScope_m86751A554C8126A7F38B4B71BC9F7FBBE1CA4C71(int32_t* ___0_moduleDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_moduleDef' to managed representation
		int32_t ____0_moduleDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetModuleFromScope_m37086F214923658BC26A4A6296BF2EF62EBD4914(__thisValue, (&____0_moduleDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_moduleDef' back from managed representation
		*___0_moduleDef = ____0_moduleDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetTypeDefProps_m7B23DCD6F1DF07B5063BFF90A9B6175BB79FCA00(int32_t ___0_typeDef, Il2CppChar* ___1_qualifiedName, int32_t ___2_qualifiedNameBufferLength, int32_t* ___3_qualifiedNameLength, int32_t* ___4_attributes, int32_t* ___5_baseType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_qualifiedName' to managed representation
		Il2CppChar* ____1_qualifiedName_empty = NULL;

		// Marshaling of parameter '___3_qualifiedNameLength' to managed representation
		int32_t* ____3_qualifiedNameLength_empty = NULL;

		// Marshaling of parameter '___4_attributes' to managed representation
		int32_t* ____4_attributes_empty = 0;

		// Marshaling of parameter '___5_baseType' to managed representation
		int32_t* ____5_baseType_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_GetTypeDefProps_mFC3A1A9BD775FC50025682AAED0C394F1265BBCD(__thisValue, ___0_typeDef, ____1_qualifiedName_empty, ___2_qualifiedNameBufferLength, ____3_qualifiedNameLength_empty, ____4_attributes_empty, ____5_baseType_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetInterfaceImplProps_m18B44447246ED5A5D00C652354DB65B0D29CCE57(int32_t ___0_interfaceImpl, int32_t* ___1_typeDef, int32_t* ___2_interfaceDefRefSpec) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_typeDef' to managed representation
		int32_t* ____1_typeDef_empty = NULL;

		// Marshaling of parameter '___2_interfaceDefRefSpec' to managed representation
		int32_t* ____2_interfaceDefRefSpec_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetInterfaceImplProps_m4E2DFB9506C09946267EA43EF79A1E37AF4DC417(__thisValue, ___0_interfaceImpl, ____1_typeDef_empty, ____2_interfaceDefRefSpec_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetTypeRefProps_m104B4F2BBBBB9ED958659DF8B26198E8C30AAD84(int32_t ___0_typeRef, int32_t* ___1_resolutionScope, Il2CppChar* ___2_qualifiedName, int32_t ___3_qualifiedNameBufferLength, int32_t* ___4_qualifiedNameLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_resolutionScope' to managed representation
		int32_t* ____1_resolutionScope_empty = NULL;

		// Marshaling of parameter '___2_qualifiedName' to managed representation
		Il2CppChar* ____2_qualifiedName_empty = NULL;

		// Marshaling of parameter '___4_qualifiedNameLength' to managed representation
		int32_t* ____4_qualifiedNameLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_GetTypeRefProps_m32A448A8092C6E4FCD12E905B3AB137D04ABBEA3(__thisValue, ___0_typeRef, ____1_resolutionScope_empty, ____2_qualifiedName_empty, ___3_qualifiedNameBufferLength, ____4_qualifiedNameLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_ResolveTypeRef_m55F51140D85D36451D3FA946D806D940677AE194(int32_t ___0_typeRef, Guid_t* ___1_scopeInterfaceId, Il2CppIUnknown** ___2_scope, int32_t* ___3_typeDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_scope' to managed representation
		RuntimeObject* ____2_scope_empty = NULL;

		// Marshaling of parameter '___3_typeDef' to managed representation
		int32_t ____3_typeDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_ResolveTypeRef_m5D99DB1EBBADB834B1D4B72167BFAA9966E63603(__thisValue, ___0_typeRef, ___1_scopeInterfaceId, (&____2_scope_empty), (&____3_typeDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___2_scope' back from managed representation
		if (____2_scope_empty != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(____2_scope_empty))
			{
				*___2_scope = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(____2_scope_empty));
				(*___2_scope)->AddRef();
			}
			else
			{
				*___2_scope = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(____2_scope_empty);
			}
		}
		else
		{
			*___2_scope = NULL;
		}

		// Marshaling of parameter '___3_typeDef' back from managed representation
		*___3_typeDef = ____3_typeDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMembers_m74CCC6EABDA1796971BBD70DB06413CA6749E07D(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_memberDefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_memberDefs' to managed representation
		int32_t* ____2_memberDefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMembers_m4E2215886D7CA96C6075698C0BD91C43B15AB4F7(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_memberDefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMembersWithName_mA91863BE92E040812D71D9E3A364ECA2EEB3FDA3(void** ___0_enumHandle, int32_t ___1_typeDef, Il2CppChar* ___2_name, int32_t* ___3_memberDefs, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_name' to managed representation
		String_t* ____2_name_unmarshaled = NULL;
		____2_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_name);

		// Marshaling of parameter '___3_memberDefs' to managed representation
		int32_t* ____3_memberDefs_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMembersWithName_m1CEF2DC07C59B5FEE721EE529721FCC169287E2F(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_name_unmarshaled, ____3_memberDefs_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMethods_m837BB1F0E83ED51CFB976B6842A75F724BDD18DD(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_methodDefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_methodDefs' to managed representation
		int32_t* ____2_methodDefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethods_mB28FBC962AF460E970192DC060AE045A05FE7EBF(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_methodDefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMethodsWithName_m14A245E68A66A2FFA6A484F6D66713AA98CE273B(void** ___0_enumHandle, int32_t ___1_typeDef, Il2CppChar* ___2_name, int32_t* ___3_methodDefs, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_name' to managed representation
		String_t* ____2_name_unmarshaled = NULL;
		____2_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_name);

		// Marshaling of parameter '___3_methodDefs' to managed representation
		int32_t* ____3_methodDefs_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethodsWithName_mA95ECF0C380555643C36CC65D7B49F18A49043AB(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_name_unmarshaled, ____3_methodDefs_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumFields_m24DFC022A0F8496730184EB39A49B9D2B421B8C0(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_fieldDefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_fieldDefs' to managed representation
		int32_t* ____2_fieldDefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumFields_m31647ED4A98FF7381E2EC0C5EDA9D9B53C5EFD5B(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_fieldDefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumFieldsWithName_mA6535D7094D9D4DF7CC5FAD32BAD91E11792EE3B(void** ___0_enumHandle, int32_t ___1_typeDef, Il2CppChar* ___2_name, int32_t* ___3_fieldDefs, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_name' to managed representation
		String_t* ____2_name_unmarshaled = NULL;
		____2_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_name);

		// Marshaling of parameter '___3_fieldDefs' to managed representation
		int32_t* ____3_fieldDefs_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumFieldsWithName_m30E635D15F88CA0370FC6426E57934EECF4AF157(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_name_unmarshaled, ____3_fieldDefs_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumParams_mA16A66659F6BB8B7617F9253BAB0F67027636F39(void** ___0_enumHandle, int32_t ___1_methodDef, int32_t* ___2_paramDefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_paramDefs' to managed representation
		int32_t* ____2_paramDefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumParams_mE06F736E896CF05B6E5C69C83577D207B45352F6(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_methodDef, ____2_paramDefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMemberRefs_m0A5B47AED30442EBB09DD1ABE298585C9462F8F0(void** ___0_enumHandle, int32_t ___1_parentToken, int32_t* ___2_memberRefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_memberRefs' to managed representation
		int32_t* ____2_memberRefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMemberRefs_m6C83B6EF6D77AD1BEC9CD41A6E2B4A4F4341D762(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_parentToken, ____2_memberRefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMethodImpls_mA19D3693E3A9A7B0503464033061BE37A5444D2B(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_implementationTokens, int32_t* ___3_declarationTokens, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_implementationTokens' to managed representation
		int32_t* ____2_implementationTokens_empty = NULL;

		// Marshaling of parameter '___3_declarationTokens' to managed representation
		int32_t* ____3_declarationTokens_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethodImpls_m3DB98828A26B3C7A88F60846EC7501A4832163F1(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_implementationTokens_empty, ____3_declarationTokens_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumPermissionSets_m47C5923A1B07A88DFD62BA62BDD11B748F5411D1(void** ___0_enumHandle, int32_t ___1_token, uint32_t ___2_action, int32_t* ___3_declSecurityTokens, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___3_declSecurityTokens' to managed representation
		int32_t* ____3_declSecurityTokens_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumPermissionSets_m51906C9B7E6D828D9D2E35FB29E86D5F17C68487(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_token, ___2_action, ____3_declSecurityTokens_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindMember_m0D914E37C2F1A7996C58E03202413F3C19EA2530(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_memberDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___4_memberDef' to managed representation
		int32_t ____4_memberDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindMember_mDF83574E1ECD7184CE8442BAB964C3E814973115(__thisValue, ___0_typeDef, ____1_name_unmarshaled, ___2_signature, ___3_signatureLength, (&____4_memberDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___4_memberDef' back from managed representation
		*___4_memberDef = ____4_memberDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindMethod_m4E27328DFD06CC488192BCBC34DA6FE9476B5786(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_methodDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___4_methodDef' to managed representation
		int32_t ____4_methodDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindMethod_mCE098C4C7C74588F74295F96835B23A03499418C(__thisValue, ___0_typeDef, ____1_name_unmarshaled, ___2_signature, ___3_signatureLength, (&____4_methodDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___4_methodDef' back from managed representation
		*___4_methodDef = ____4_methodDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindField_m9923DA9C8325A949FB59D34699F4D22E9FEA6DA2(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_fieldDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___4_fieldDef' to managed representation
		int32_t ____4_fieldDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindField_mE7AC59CD66B612ABDCD3F46387D70322AE9DF78B(__thisValue, ___0_typeDef, ____1_name_unmarshaled, ___2_signature, ___3_signatureLength, (&____4_fieldDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___4_fieldDef' back from managed representation
		*___4_fieldDef = ____4_fieldDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindMemberRef_mD6DDDDC12A59775C6631D8B2DA17655EF2DFA149(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_memberRef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___4_memberRef' to managed representation
		int32_t ____4_memberRef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindMemberRef_m25A6DFB333869AC5C23C4156EBA8E4E7E85BB4C0(__thisValue, ___0_typeDef, ____1_name_unmarshaled, ___2_signature, ___3_signatureLength, (&____4_memberRef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___4_memberRef' back from managed representation
		*___4_memberRef = ____4_memberRef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetMethodProps_m2E44DB3B51FBB3C540334271C17483FBE9904842(int32_t ___0_methodDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_relativeVirtualAddress, int32_t* ___9_implAttributes) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = 0;

		// Marshaling of parameter '___6_signature' to managed representation
		uint8_t** ____6_signature_empty = NULL;

		// Marshaling of parameter '___7_signatureLength' to managed representation
		int32_t* ____7_signatureLength_empty = NULL;

		// Marshaling of parameter '___8_relativeVirtualAddress' to managed representation
		int32_t* ____8_relativeVirtualAddress_empty = NULL;

		// Marshaling of parameter '___9_implAttributes' to managed representation
		int32_t* ____9_implAttributes_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_GetMethodProps_m98CF5FAE3F49F12EE7174CC107B73F31D4C44758(__thisValue, ___0_methodDef, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_signature_empty, ____7_signatureLength_empty, ____8_relativeVirtualAddress_empty, ____9_implAttributes_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetMemberRefProps_m2C89679B4283891FEB4697D15F00E947EBB9D02F(int32_t ___0_memberRef, int32_t* ___1_declaringType, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, uint8_t** ___5_signature, int32_t* ___6_signatureLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringType' to managed representation
		int32_t* ____1_declaringType_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_signature' to managed representation
		uint8_t** ____5_signature_empty = NULL;

		// Marshaling of parameter '___6_signatureLength' to managed representation
		int32_t* ____6_signatureLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetMemberRefProps_m0085FE84F51537C1ADB7522CDEA8B9364CA9AEF8(__thisValue, ___0_memberRef, ____1_declaringType_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_signature_empty, ____6_signatureLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumProperties_mB08CB1A289862FA317F91097E64BF1FBA40AD326(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_properties, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_properties' to managed representation
		int32_t* ____2_properties_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumProperties_mC6D9525D1018F410A57A8B03C96015026C0D4D49(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_properties_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual uint32_t STDCALL IMetadataImport_EnumEvents_m897F5800137BCF94D8C44969D7DC043CE5FA6F4F(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_events, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_events' to managed representation
		int32_t* ____2_events_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumEvents_m8E7F94350800DE86012890919BC134974F5B6EF4(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_events_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<uint32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetEventProps_mF175AAF4065D09CEE976193FA6BB10EC71138B67(int32_t ___0_event, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, int32_t* ___6_eventType, int32_t* ___7_adderMethodDef, int32_t* ___8_removerMethodDef, int32_t* ___9_raiserMethodDef, int32_t* ___10_otherMethodDefs, int32_t ___11_otherMethodDefBufferLength, int32_t* ___12_methodMethodDefsLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = NULL;

		// Marshaling of parameter '___6_eventType' to managed representation
		int32_t* ____6_eventType_empty = NULL;

		// Marshaling of parameter '___7_adderMethodDef' to managed representation
		int32_t* ____7_adderMethodDef_empty = NULL;

		// Marshaling of parameter '___8_removerMethodDef' to managed representation
		int32_t* ____8_removerMethodDef_empty = NULL;

		// Marshaling of parameter '___9_raiserMethodDef' to managed representation
		int32_t* ____9_raiserMethodDef_empty = NULL;

		// Marshaling of parameter '___10_otherMethodDefs' to managed representation
		int32_t* ____10_otherMethodDefs_empty = NULL;

		// Marshaling of parameter '___12_methodMethodDefsLength' to managed representation
		int32_t* ____12_methodMethodDefsLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetEventProps_m1897365E611B6331E2E0A2000E2353297A163955(__thisValue, ___0_event, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_eventType_empty, ____7_adderMethodDef_empty, ____8_removerMethodDef_empty, ____9_raiserMethodDef_empty, ____10_otherMethodDefs_empty, ___11_otherMethodDefBufferLength, ____12_methodMethodDefsLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMethodSemantics_mF0264C6E0101034452FCC37EB62A9528EFE8947C(void** ___0_enumHandle, int32_t ___1_methodDef, int32_t* ___2_eventsAndProperties, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_eventsAndProperties' to managed representation
		int32_t* ____2_eventsAndProperties_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethodSemantics_m34ED9E0FE446ABF6758A7F490C228D4B6B5D6541(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_methodDef, ____2_eventsAndProperties_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetMethodSemantics_m0F8BE6901C5DBA47B9C76F2CCC08EDB23682548A(int32_t ___0_methodDef, int32_t ___1_eventOrProperty, int32_t* ___2_semantics) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_semantics' to managed representation
		int32_t* ____2_semantics_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetMethodSemantics_m8E680B29BC7F4E98A39CB426CC22226C0658E855(__thisValue, ___0_methodDef, ___1_eventOrProperty, ____2_semantics_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetClassLayout_m3416902FED850B96935702F792A6CCBA4AAC038B(int32_t ___0_typeDef, int32_t* ___1_packSize, MetadataImportFieldOffset_t44A1CAA35A45D77251F3B853D92EAD5FAFFBE14F* ___2_fieldOffsets, int32_t ___3_bufferLength, int32_t* ___4_count, int32_t* ___5_typeSize) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_packSize' to managed representation
		int32_t* ____1_packSize_empty = NULL;

		// Marshaling of parameter '___2_fieldOffsets' to managed representation
		MetadataImportFieldOffset_t44A1CAA35A45D77251F3B853D92EAD5FAFFBE14F* ____2_fieldOffsets_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Marshaling of parameter '___5_typeSize' to managed representation
		int32_t* ____5_typeSize_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetClassLayout_m1DFC72381A149B5BC4AEAB8434633D65AF272503(__thisValue, ___0_typeDef, ____1_packSize_empty, ____2_fieldOffsets_empty, ___3_bufferLength, ____4_count_empty, ____5_typeSize_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetFieldMarshal_mAC0442BC1ED03E59FF77D56BDC7E42137B200CFA(int32_t ___0_fieldDef, uint8_t** ___1_nativeTypeSignature, int32_t* ___2_nativeTypeSignatureLengvth) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_nativeTypeSignature' to managed representation
		uint8_t** ____1_nativeTypeSignature_empty = NULL;

		// Marshaling of parameter '___2_nativeTypeSignatureLengvth' to managed representation
		int32_t* ____2_nativeTypeSignatureLengvth_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetFieldMarshal_m2B163215669A07486B30295DF504452307780EFF(__thisValue, ___0_fieldDef, ____1_nativeTypeSignature_empty, ____2_nativeTypeSignatureLengvth_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetRVA_m8D86BE2D9A4EBEC159F73F171F04A0ECA291EF5C(int32_t ___0_methodDef, int32_t* ___1_relativeVirtualAddress, int32_t* ___2_implAttributes) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_relativeVirtualAddress' to managed representation
		int32_t* ____1_relativeVirtualAddress_empty = NULL;

		// Marshaling of parameter '___2_implAttributes' to managed representation
		int32_t* ____2_implAttributes_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetRVA_mB63E8D0FE786AF116C437F378B77C1112C4719BA(__thisValue, ___0_methodDef, ____1_relativeVirtualAddress_empty, ____2_implAttributes_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetPermissionSetProps_mC4971283B94A15B2495A12AB4909702464EA5617(int32_t ___0_declSecurity, uint32_t* ___1_action, uint8_t** ___2_permissionBlob, int32_t* ___3_permissionBlobLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_action' to managed representation
		uint32_t* ____1_action_empty = NULL;

		// Marshaling of parameter '___2_permissionBlob' to managed representation
		uint8_t** ____2_permissionBlob_empty = NULL;

		// Marshaling of parameter '___3_permissionBlobLength' to managed representation
		int32_t* ____3_permissionBlobLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetPermissionSetProps_m7673595279057AA7B4ADE70D52A6C7B74E47632E(__thisValue, ___0_declSecurity, ____1_action_empty, ____2_permissionBlob_empty, ____3_permissionBlobLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetSigFromToken_m7F4D3B7A68C5BDC9146B5BA3B5955A70AB37F025(int32_t ___0_standaloneSignature, uint8_t** ___1_signature, int32_t* ___2_signatureLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_signature' to managed representation
		uint8_t** ____1_signature_empty = NULL;

		// Marshaling of parameter '___2_signatureLength' to managed representation
		int32_t* ____2_signatureLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_GetSigFromToken_mEAD4DF80368D7AD2A55535C48BF8AB7CA4FF860D(__thisValue, ___0_standaloneSignature, ____1_signature_empty, ____2_signatureLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetModuleRefProps_m3B28646924380A005C617F6D3138BE57161CBEF2(int32_t ___0_moduleRef, Il2CppChar* ___1_name, int32_t ___2_nameBufferLength, int32_t* ___3_nameLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		Il2CppChar* ____1_name_empty = NULL;

		// Marshaling of parameter '___3_nameLength' to managed representation
		int32_t* ____3_nameLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetModuleRefProps_mEB0BAE2A9A5F13FE65332F89CA4859FFBD5933D3(__thisValue, ___0_moduleRef, ____1_name_empty, ___2_nameBufferLength, ____3_nameLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumModuleRefs_mF3E210B3A44F4AF08F9D644710F6AA70E6CDFC4D(void** ___0_enumHandle, int32_t* ___1_moduleRefs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_moduleRefs' to managed representation
		int32_t* ____1_moduleRefs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumModuleRefs_mCF5E00DD77D598F9F4EA19549C4047BF538D1BBF(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_moduleRefs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetTypeSpecFromToken_mA3962E10DB9D0F724E7FB61719A8AD4B4FD6E182(int32_t ___0_typeSpec, uint8_t** ___1_signature, int32_t* ___2_signatureLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_signature' to managed representation
		uint8_t** ____1_signature_empty = NULL;

		// Marshaling of parameter '___2_signatureLength' to managed representation
		int32_t* ____2_signatureLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetTypeSpecFromToken_m90EDAC09CB92B78A0F3CAB7F93297EBA157C5F76(__thisValue, ___0_typeSpec, ____1_signature_empty, ____2_signatureLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetNameFromToken_m85F3F3F67A62AAEC48538DADAACC1941800D78BE(int32_t ___0_token, uint8_t* ___1_nameUTF8) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_nameUTF8' to managed representation
		uint8_t* ____1_nameUTF8_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetNameFromToken_m4BDE864FD52F46FEEB435ABDD5EA1B94269CD4D1(__thisValue, ___0_token, ____1_nameUTF8_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumUnresolvedMethods_m1FEE391F0A92DA0F06B0FC043A9A85778B96FD4D(void** ___0_enumHandle, int32_t* ___1_methodDefs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_methodDefs' to managed representation
		int32_t* ____1_methodDefs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumUnresolvedMethods_m7BDF48E14B6CC1E0505ABADF4994D109093D0B75(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_methodDefs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetUserString_m47B5B9B7E9AE164CC75E6727FC36B6B6D2258285(int32_t ___0_userStringToken, Il2CppChar* ___1_buffer, int32_t ___2_bufferLength, int32_t* ___3_length) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_buffer' to managed representation
		Il2CppChar* ____1_buffer_empty = NULL;

		// Marshaling of parameter '___3_length' to managed representation
		int32_t* ____3_length_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetUserString_mEC9D24C98684C5AA3EBAF4A3A937EF0C274ACC01(__thisValue, ___0_userStringToken, ____1_buffer_empty, ___2_bufferLength, ____3_length_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetPinvokeMap_m18802FC6E12D254F88A246D2C9709AF336AF685A(int32_t ___0_memberDef, int32_t* ___1_attributes, Il2CppChar* ___2_importName, int32_t ___3_importNameBufferLength, int32_t* ___4_importNameLength, int32_t* ___5_moduleRef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_attributes' to managed representation
		int32_t* ____1_attributes_empty = NULL;

		// Marshaling of parameter '___2_importName' to managed representation
		Il2CppChar* ____2_importName_empty = NULL;

		// Marshaling of parameter '___4_importNameLength' to managed representation
		int32_t* ____4_importNameLength_empty = NULL;

		// Marshaling of parameter '___5_moduleRef' to managed representation
		int32_t* ____5_moduleRef_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetPinvokeMap_m2C9E7F84DEBAE83F7062C4296F97688E135ED9C2(__thisValue, ___0_memberDef, ____1_attributes_empty, ____2_importName_empty, ___3_importNameBufferLength, ____4_importNameLength_empty, ____5_moduleRef_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumSignatures_m4DB1174A1D28B2A290D700D64E7AA0B785367792(void** ___0_enumHandle, int32_t* ___1_signatureTokens, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_signatureTokens' to managed representation
		int32_t* ____1_signatureTokens_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumSignatures_mB728D755D53869C46BF3D291ABFEF344FE2D7BC9(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_signatureTokens_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumTypeSpecs_m41DA17E39CD4E4E2526D47D436919B51C71EEC2F(void** ___0_enumHandle, int32_t* ___1_typeSpecs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_typeSpecs' to managed representation
		int32_t* ____1_typeSpecs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumTypeSpecs_m071FD54808411B0A1FB953EAEACD665CFE5EBB71(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_typeSpecs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumUserStrings_m79DF282C5DC9E5C910111F39EE275DBA1BCB44B5(void** ___0_enumHandle, int32_t* ___1_userStrings, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_userStrings' to managed representation
		int32_t* ____1_userStrings_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumUserStrings_m2B39201C2C4386B49F31F7FFAB780AD00361BC7E(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_userStrings_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetParamForMethodIndex_m9ED691CC3D505E4DDB5B89682BCA263558CFE17D(int32_t ___0_methodDef, int32_t ___1_sequenceNumber, int32_t* ___2_parameterToken) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_parameterToken' to managed representation
		int32_t ____2_parameterToken_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetParamForMethodIndex_mBAAD3CC816396087616F74EA5CAC466CE4772460(__thisValue, ___0_methodDef, ___1_sequenceNumber, (&____2_parameterToken_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___2_parameterToken' back from managed representation
		*___2_parameterToken = ____2_parameterToken_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumCustomAttributes_mF7C652A2DCE5090D9300333FACCC6F278679AE12(void** ___0_enumHandle, int32_t ___1_parent, int32_t ___2_attributeType, int32_t* ___3_customAttributes, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___3_customAttributes' to managed representation
		int32_t* ____3_customAttributes_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumCustomAttributes_m61E03E07CED08C1BC679F0DBB093B02C07C13EC8(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_parent, ___2_attributeType, ____3_customAttributes_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetCustomAttributeProps_mFDF6228D712BB4DB37D799714887D83DCA96BB85(int32_t ___0_customAttribute, int32_t* ___1_parent, int32_t* ___2_constructor, uint8_t** ___3_value, int32_t* ___4_valueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_parent' to managed representation
		int32_t* ____1_parent_empty = NULL;

		// Marshaling of parameter '___2_constructor' to managed representation
		int32_t* ____2_constructor_empty = NULL;

		// Marshaling of parameter '___3_value' to managed representation
		uint8_t** ____3_value_empty = NULL;

		// Marshaling of parameter '___4_valueLength' to managed representation
		int32_t* ____4_valueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetCustomAttributeProps_mCE533D2C546D11811B5B622B22EDAD3F2874F578(__thisValue, ___0_customAttribute, ____1_parent_empty, ____2_constructor_empty, ____3_value_empty, ____4_valueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindTypeRef_mA3A2124D2583C3693C7FD1AA5DEC9F04A8DC0133(int32_t ___0_resolutionScope, Il2CppChar* ___1_name, int32_t* ___2_typeRef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___2_typeRef' to managed representation
		int32_t ____2_typeRef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindTypeRef_m8966A9C48A4C72464341694AB1538EC6784BADA2(__thisValue, ___0_resolutionScope, ____1_name_unmarshaled, (&____2_typeRef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___2_typeRef' back from managed representation
		*___2_typeRef = ____2_typeRef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetMemberProps_mD0C3FFB8528F687B5E4D507AA36D6FD98D706A8B(int32_t ___0_member, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_relativeVirtualAddress, int32_t* ___9_implAttributes, int32_t* ___10_constantType, uint8_t** ___11_constantValue, int32_t* ___12_constantValueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = NULL;

		// Marshaling of parameter '___6_signature' to managed representation
		uint8_t** ____6_signature_empty = NULL;

		// Marshaling of parameter '___7_signatureLength' to managed representation
		int32_t* ____7_signatureLength_empty = NULL;

		// Marshaling of parameter '___8_relativeVirtualAddress' to managed representation
		int32_t* ____8_relativeVirtualAddress_empty = NULL;

		// Marshaling of parameter '___9_implAttributes' to managed representation
		int32_t* ____9_implAttributes_empty = NULL;

		// Marshaling of parameter '___10_constantType' to managed representation
		int32_t* ____10_constantType_empty = NULL;

		// Marshaling of parameter '___11_constantValue' to managed representation
		uint8_t** ____11_constantValue_empty = NULL;

		// Marshaling of parameter '___12_constantValueLength' to managed representation
		int32_t* ____12_constantValueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetMemberProps_mDA1CDE407AFF5492EA8E7623941B91383603344A(__thisValue, ___0_member, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_signature_empty, ____7_signatureLength_empty, ____8_relativeVirtualAddress_empty, ____9_implAttributes_empty, ____10_constantType_empty, ____11_constantValue_empty, ____12_constantValueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetFieldProps_mF9525352FC212EE5685EFE8191A5EE00DEACC879(int32_t ___0_fieldDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_constantType, uint8_t** ___9_constantValue, int32_t* ___10_constantValueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = NULL;

		// Marshaling of parameter '___6_signature' to managed representation
		uint8_t** ____6_signature_empty = NULL;

		// Marshaling of parameter '___7_signatureLength' to managed representation
		int32_t* ____7_signatureLength_empty = NULL;

		// Marshaling of parameter '___8_constantType' to managed representation
		int32_t* ____8_constantType_empty = NULL;

		// Marshaling of parameter '___9_constantValue' to managed representation
		uint8_t** ____9_constantValue_empty = NULL;

		// Marshaling of parameter '___10_constantValueLength' to managed representation
		int32_t* ____10_constantValueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetFieldProps_m5F40C5E14A24CA39CD4A792C73AD8E53C50B2A29(__thisValue, ___0_fieldDef, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_signature_empty, ____7_signatureLength_empty, ____8_constantType_empty, ____9_constantValue_empty, ____10_constantValueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetPropertyProps_mE26A3F9F86CBFD020E682CA88F2C9177822446E1(int32_t ___0_propertyDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_constantType, uint8_t** ___9_constantValue, int32_t* ___10_constantValueLength, int32_t* ___11_setterMethodDef, int32_t* ___12_getterMethodDef, int32_t* ___13_outerMethodDefs, int32_t ___14_outerMethodDefsBufferLength, int32_t* ___15_otherMethodDefCount) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = NULL;

		// Marshaling of parameter '___6_signature' to managed representation
		uint8_t** ____6_signature_empty = NULL;

		// Marshaling of parameter '___7_signatureLength' to managed representation
		int32_t* ____7_signatureLength_empty = NULL;

		// Marshaling of parameter '___8_constantType' to managed representation
		int32_t* ____8_constantType_empty = NULL;

		// Marshaling of parameter '___9_constantValue' to managed representation
		uint8_t** ____9_constantValue_empty = NULL;

		// Marshaling of parameter '___10_constantValueLength' to managed representation
		int32_t* ____10_constantValueLength_empty = NULL;

		// Marshaling of parameter '___11_setterMethodDef' to managed representation
		int32_t* ____11_setterMethodDef_empty = NULL;

		// Marshaling of parameter '___12_getterMethodDef' to managed representation
		int32_t* ____12_getterMethodDef_empty = NULL;

		// Marshaling of parameter '___13_outerMethodDefs' to managed representation
		int32_t* ____13_outerMethodDefs_empty = NULL;

		// Marshaling of parameter '___15_otherMethodDefCount' to managed representation
		int32_t* ____15_otherMethodDefCount_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetPropertyProps_mFDC0798A79B5CBB2D0C512BDF121C773F4DA741D(__thisValue, ___0_propertyDef, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_signature_empty, ____7_signatureLength_empty, ____8_constantType_empty, ____9_constantValue_empty, ____10_constantValueLength_empty, ____11_setterMethodDef_empty, ____12_getterMethodDef_empty, ____13_outerMethodDefs_empty, ___14_outerMethodDefsBufferLength, ____15_otherMethodDefCount_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetParamProps_mA8811C6DEF34A0B0D5B3D17B4E32DD92D83BB009(int32_t ___0_parameter, int32_t* ___1_declaringMethodDef, int32_t* ___2_sequenceNumber, Il2CppChar* ___3_name, int32_t ___4_nameBufferLength, int32_t* ___5_nameLength, int32_t* ___6_attributes, int32_t* ___7_constantType, uint8_t** ___8_constantValue, int32_t* ___9_constantValueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringMethodDef' to managed representation
		int32_t* ____1_declaringMethodDef_empty = NULL;

		// Marshaling of parameter '___2_sequenceNumber' to managed representation
		int32_t* ____2_sequenceNumber_empty = NULL;

		// Marshaling of parameter '___3_name' to managed representation
		Il2CppChar* ____3_name_empty = NULL;

		// Marshaling of parameter '___5_nameLength' to managed representation
		int32_t* ____5_nameLength_empty = NULL;

		// Marshaling of parameter '___6_attributes' to managed representation
		int32_t* ____6_attributes_empty = NULL;

		// Marshaling of parameter '___7_constantType' to managed representation
		int32_t* ____7_constantType_empty = NULL;

		// Marshaling of parameter '___8_constantValue' to managed representation
		uint8_t** ____8_constantValue_empty = NULL;

		// Marshaling of parameter '___9_constantValueLength' to managed representation
		int32_t* ____9_constantValueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetParamProps_m5A75A28ACEB99F8150A59A31A430286FFE2E7C59(__thisValue, ___0_parameter, ____1_declaringMethodDef_empty, ____2_sequenceNumber_empty, ____3_name_empty, ___4_nameBufferLength, ____5_nameLength_empty, ____6_attributes_empty, ____7_constantType_empty, ____8_constantValue_empty, ____9_constantValueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetCustomAttributeByName_mD836C59BA583F8AE906565DC6E4461E96AAB9654(int32_t ___0_parent, Il2CppChar* ___1_name, uint8_t** ___2_value, int32_t* ___3_valueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___2_value' to managed representation
		uint8_t** ____2_value_empty = NULL;

		// Marshaling of parameter '___3_valueLength' to managed representation
		int32_t* ____3_valueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetCustomAttributeByName_m576352C41BEBBCD1BD509E541FA9E276C6DABC5D(__thisValue, ___0_parent, ____1_name_unmarshaled, ____2_value_empty, ____3_valueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual IL2CPP_VARIANT_BOOL STDCALL IMetadataImport_IsValidToken_m439515AFE5EF48D1C071159EB4D0398FD174A03C(int32_t ___0_token) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_IsValidToken_m49F273A03936666DFC85FCCF5679DCC62BDFC029(__thisValue, ___0_token, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<IL2CPP_VARIANT_BOOL>(0);
		}

		return ((returnValue) ? IL2CPP_VARIANT_TRUE : IL2CPP_VARIANT_FALSE);
	}

	virtual int32_t STDCALL IMetadataImport_GetNestedClassProps_mA2CBAC2114EC5741D32E95809ED43857C690C1D4(int32_t ___0_nestedClass, int32_t* ___1_enclosingClass) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_enclosingClass' to managed representation
		int32_t ____1_enclosingClass_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_GetNestedClassProps_m959954EF6E7AA4A4B050CD2DF626EBC031A0FF94(__thisValue, ___0_nestedClass, (&____1_enclosingClass_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___1_enclosingClass' back from managed representation
		*___1_enclosingClass = ____1_enclosingClass_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetNativeCallConvFromSig_mE3C0BF0A1AEC840781DAAEDB8CD31FC7131A012C(uint8_t* ___0_signature, int32_t ___1_signatureLength, int32_t* ___2_callingConvention) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_callingConvention' to managed representation
		int32_t* ____2_callingConvention_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetNativeCallConvFromSig_mE09BD7C55C9433DAFA6954C4DBBC8A0AB9B74A02(__thisValue, ___0_signature, ___1_signatureLength, ____2_callingConvention_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_IsGlobal_m7C2CE794918A316EA7921F433065DAE7BE852BD2(int32_t ___0_token, IL2CPP_VARIANT_BOOL ___1_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_IsGlobal_m75F17FCF9580E762B4355A0FF62F4DB47980470F(__thisValue, ___0_token, ((___1_value) != IL2CPP_VARIANT_FALSE), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetModuleProps_mAFE1405E6F7472CF40F23D8F99043BA4735288E3() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetModuleProps_mCEB523F63C99FCDB52C8DD5858D971418285E92A(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___Save_m09006E3CF4024CFDE52BC3E99F24F93B59FF292D() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___Save_m4F43416B5B898838FDF6A34A70B6755E727C62A4(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SaveToStream_m72BD71EFB8891C44F2759296869E8D084A5F559A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SaveToStream_m1998ED7260D776FBEA48BC03206BDEBE336F354B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___GetSaveSize_m80576FD6605D3E39A3A8BB3B1BEDC1B173C9DD8E() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___GetSaveSize_mF95212A21343AEC08E51FBE9B5C764AF954C8603(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineTypeDef_mD08E4671458F390D52D0826450FF5101E5851C50() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineTypeDef_m728062B7D05C2E8B1F22BCDC0A8B192210C8005B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineNestedType_mC8178A6EC5B40E1893522E6B6158EDFC4736BDE3() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineNestedType_m7AB729AB9AB8D562C7CC6DE615995C2AA4FBCEC4(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetHandler_m955C6CA4927170960B4AC1C155D211A374261B7F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetHandler_mC955E8C21D44DD0F6EEA863EA3934975FEB91AE0(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineMethod_mDC5C0D933BA652400956175E75041307B249654F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineMethod_m3DE76FFC878B16ED9BF815A4440E93D937E9A222(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineMethodImpl_m9C56CE78FFCA02E869DA71B30B40FD6B9FB6750A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineMethodImpl_mFC973573EE6C63E9E3AF44EAA87611AB4E5E2239(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineTypeRefByName_m5671A3C35860103F8332D2B0E403068C5187BF2C() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineTypeRefByName_m83D2AF36EE8082D36D6B442C24EAA764555CFAAD(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineImportType_m753E46BAECCF79CEB93B072FAE5846A0D04A0518() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineImportType_m2AAE063814A2CD599B941681E2308B16C89FF935(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineMemberRef_m3C58076D96B6E7C0F9881FD0902DD3D49BA65C5F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineMemberRef_m4D7EF36163B14272979862F4F7566A65EC78B68B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineImportMember_mB42E6A4C1D5EEC0C6D9A8C9FDDECB86BD3A6048E() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineImportMember_m31A58C1479B9DE6016104570AF0A654409428A71(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineEvent_m82B3CD4699B3E4E2E7AB89E3CA5EDBE57E6F5BDC() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineEvent_m5E1C2A9348EAF0B85D2804D00BEDC466BD22F383(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetClassLayout_mC326A46327F044B9BF420BC47B79EBE81F1B2EAD() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetClassLayout_m6F687AF01E5183E2AAC7DBD7287B51761379B67E(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeleteClassLayout_m8C50C11F7305EF67F0C082E99540B49779CBD711() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeleteClassLayout_m401D6FD450BA22873E4215B7343B606A0099762C(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetFieldMarshal_mC282A68ECE14AD80D924BEDE5CC14B58E62D8EAE() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetFieldMarshal_m1D6E40716548DDE439872B3F5F90A6B99E610A16(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeleteFieldMarshal_mBDC95C2BCD4782D5FCE840B3B1DF2007340306B0() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeleteFieldMarshal_m0E9A54C6DCF058AC5BF3A3DCE6AD196DA2BBA49B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefinePermissionSet_m9CEE706A16751BEF773B7AD54E90E7F2372BB0B1() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefinePermissionSet_m7A4BE74A77CBEEA6C9E9FCA8C3C4EEC48365EED7(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetRVA_m1F45EA879E662BC352FB600218469871CF4BFF31() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetRVA_mAD8ACB9D03706261AED2B2A9ADDB8A6FCA217C10(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit_GetTokenFromSig_mDABB684B81648D8B0D9B844F7AEDCAF2FF368FE0(uint8_t* ___0_voidPointerSig, int32_t ___1_byteCountSig, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_GetTokenFromSig_m79E6F3A485F1DDD7132F71750900853FC5A3B770(__thisValue, ___0_voidPointerSig, ___1_byteCountSig, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineModuleRef_m9A4EB129127BED5CE7CD9A462DFE26AEF367D68A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineModuleRef_mB31410ACEE0E99AC2AA326EC45AB3D644F869DFA(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetParent_mA56BD24822C9EB4416E7FE9D2914457398442519() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetParent_m6C2BCAB1DA6AC82B8DFF8E1CC58FEA24A30E6D5E(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___GetTokenFromTypeSpec_m3AFA57B01CA2FA12ACBC36898178A35371D24138() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___GetTokenFromTypeSpec_mEFEAD0138150B0CCE639972896B52914FCBAAA17(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SaveToMemory_mB2C3513D714E2EE03A30A2428EBB6148F6E24F8F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SaveToMemory_mB9D9B9710083E7F6D1716892115AAD5346B700C7(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineUserString_mB35ECC504A81000BBB5E906FEF8888B6BE776030() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineUserString_m9ECFC87555E334F901F3BA1FAAF2449A080F8127(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeleteToken_m49C6CD3EA2FEC361F75C97756E2CCE4CD2629B7A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeleteToken_m551055BDE71002A808D9D9D7362EEB52D2E3D763(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetMethodProps_m5E06BD487F7EFC06A6F384FEAB2FEE7B96E930E9() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetMethodProps_m4130ACCD2650CAE7AB8B1BFFE1F64B564DA469E3(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetTypeDefProps_mEE308999ED171F383169D0AD3C833F4925B51AFD() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetTypeDefProps_m9E925B4AE570006C3257BD35405A658907B248CC(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetEventProps_m9ECD1FDE7D582508EE5B07274AD13A0D214428CD() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetEventProps_mF4BBD01D4CA843E697EDF7A80A6AEBAC4FBCF640(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetPermissionSetProps_mB43CDF31F347065162C77B54BF0142BA5B63010E() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetPermissionSetProps_mF8A9A9F4FDC2957C5AF790E036FBC4B717B7B10B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefinePinvokeMap_m0DD678F08E5977584FE6CEEF25147E1729F209C8() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefinePinvokeMap_m98DE7B0FEE8FCFB465626762F755AC72DDB8C9AE(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetPinvokeMap_mD583D16A1C15C1875BFEF9FFD2F8763F7CE9CC3B() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetPinvokeMap_m64672DE2BEAC7EDD3F1B457E0DDA2F2D3724BBEA(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeletePinvokeMap_mB2830E96053E0D0BB58680F856C379201EB26746() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeletePinvokeMap_m69E3AF92B21BADD3D914ABE027978B22295C750D(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineCustomAttribute_m9F1391E801E4B4ACBCAA48A8429A153905F84335() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineCustomAttribute_m633FF29A10714865D52FD9EA5E721CDB0864C32E(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetCustomAttributeValue_m8550F081EF4A051A561296B2008A3EDBD514A126() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetCustomAttributeValue_mBEA3FF5E5595B9FB2C94AF5E8C965927822C11EE(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineField_mE56800195E8939FD78D30E1BDBE7CB8620E14742() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineField_m9EBCB4985BE4A5E637A1763F81B096B5635DBDD2(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineProperty_mA493ECB6F90DBA24866EBE7317D29D20F58F6356() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineProperty_mD0C17F5AACEED4FFF6D684FC77B3F28C0B978D5A(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineParam_mFE9BAAFCDF3CD831D65EA006E078477CBE15CA04() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineParam_mA02A6EA65B7794E0B40C3639017505E9DF0D93C0(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetFieldProps_m1392A032B273A656A9DB6170BD43F82C98D0A426() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetFieldProps_mB9EAC700D3B6A80C2FDB1C5228707DED60822769(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetPropertyProps_m8A771699C360E7814CD1A39AB9076BF8DF99379F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetPropertyProps_m76DAF04EDFA4F14E4014D6A7B8F851DAEC369940(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetParamProps_m6DEB49C1E4B08CEE199A200B8F2E9A256438430F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetParamProps_mBE59B653BB0767FBC43BFC84AE08B083D1841B0B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineSecurityAttributeSet_m3B5E6563D6C0307C8157FBD6E708488D6582DA9A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineSecurityAttributeSet_mDD7219420E038FCD22D6BEA61C262A9C18525808(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___ApplyEditAndContinue_m88628B3A6E59D46319599CDCAF8455BF9A524FCB() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___ApplyEditAndContinue_mF3B302C58DA56585D568C7D4D08CF9C3D99BCC58(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___TranslateSigWithScope_mE859C82A42E6E679F3B4FB9FC964758F739CDE19() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___TranslateSigWithScope_m8D7FDAFFDAEC1FFAC9E67625A161FD92A12E6818(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetMethodImplFlags_mC328A9AF6992FD67AA4917B32BB1BCC07A2F9C75() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetMethodImplFlags_m9C20240F03FEBCEA1EB2B515433C4BED8AE1FA6A(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetFieldRVA_m8B5474A9F496975F907A4F40D69176490A73D389() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetFieldRVA_mC616465B6AA84EBCDDF96E68B627B244007AD031(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___Merge_m40A0D34BFFE82FF3EC0D919455C47BA9D9B10DF0() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___Merge_m5938CF3D737166E434786FBC1117BDF65D2444ED(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___MergeEnd_m5BBADC57D9C3B58A5E07DBC3FE15129E13C17548() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___MergeEnd_m69131777D95B7E97F9C3392B18045CD3E3A5B6ED(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.DiaSymReader.SymWriterMetadataAdapter
struct SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34_ComCallableWrapper>, IMetadataImport_tE1441B91C32BBACB29A95F0402916096458BDAB7, IMetadataEmit_tC87597AAD9BF4FF837BAF9522CBA3AAFAAF9AD14
{
	inline SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetadataImport_tE1441B91C32BBACB29A95F0402916096458BDAB7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetadataImport_tE1441B91C32BBACB29A95F0402916096458BDAB7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetadataEmit_tC87597AAD9BF4FF837BAF9522CBA3AAFAAF9AD14::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetadataEmit_tC87597AAD9BF4FF837BAF9522CBA3AAFAAF9AD14*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual void STDCALL IMetadataImport_CloseEnum_m573729C6FC45531BFF9A07B8478E07C1A0D228F7(void* ___0_enumHandle) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_CloseEnum_m7E84FEAD3D831CAED7A55BDCCB5A5BBB23B49977(__thisValue, ___0_enumHandle, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		}

	}

	virtual int32_t STDCALL IMetadataImport_CountEnum_mD4DDD03DB8DFB12FF3E0795F6BCE61FA95B9473D(void* ___0_enumHandle, int32_t* ___1_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_count' to managed representation
		int32_t ____1_count_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_CountEnum_m3DF44C8CEC1A9916E712F84269BA9390BD7A2DE9(__thisValue, ___0_enumHandle, (&____1_count_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___1_count' back from managed representation
		*___1_count = ____1_count_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_ResetEnum_mBB3594ED3E0D773E99C136B949EA759260417F9D(void* ___0_enumHandle, int32_t ___1_position) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_ResetEnum_m4FE20CBA62640948E01F5E4B7A7F9E7F15979BCD(__thisValue, ___0_enumHandle, ___1_position, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumTypeDefs_mA17D2B251153C99F8621D73F10175B22D436A59E(void** ___0_enumHandle, int32_t* ___1_typeDefs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_typeDefs' to managed representation
		int32_t* ____1_typeDefs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumTypeDefs_mE31A83F88277EB796EE7134B8C990F7BB732572B(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_typeDefs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumInterfaceImpls_mF659986047EE7219CA41ECD018382B11D4A3F155(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_interfaceImpls, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_interfaceImpls' to managed representation
		int32_t* ____2_interfaceImpls_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumInterfaceImpls_m2410DA0C973299775097F16FE17227C4A331F832(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_interfaceImpls_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumTypeRefs_m166D292A1EF86970FFE4B9A08410DAFACAA27E22(void** ___0_enumHandle, int32_t* ___1_typeRefs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_typeRefs' to managed representation
		int32_t* ____1_typeRefs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumTypeRefs_m07A9FCD53F5F4975329D91B558139A3D58C4834B(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_typeRefs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindTypeDefByName_mA0F24D357554556E9A0D394A5961E7B3E197D011(Il2CppChar* ___0_name, int32_t ___1_enclosingClass, int32_t* ___2_typeDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_name' to managed representation
		String_t* ____0_name_unmarshaled = NULL;
		____0_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___0_name);

		// Marshaling of parameter '___2_typeDef' to managed representation
		int32_t ____2_typeDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindTypeDefByName_mC06BB43AFD1097975C3BF9C49AD6BC2A7E3BDF3E(__thisValue, ____0_name_unmarshaled, ___1_enclosingClass, (&____2_typeDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___2_typeDef' back from managed representation
		*___2_typeDef = ____2_typeDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetScopeProps_m76948AF10CEB3A83E218B7DE44951C8F0D50AC10(Il2CppChar* ___0_name, int32_t ___1_bufferLength, int32_t* ___2_nameLength, Guid_t* ___3_mvid) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_name' to managed representation
		Il2CppChar* ____0_name_empty = NULL;

		// Marshaling of parameter '___2_nameLength' to managed representation
		int32_t* ____2_nameLength_empty = NULL;

		// Marshaling of parameter '___3_mvid' to managed representation
		Guid_t* ____3_mvid_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetScopeProps_m61BDE47505849E4EB1F8DDA946FB1784AA58E358(__thisValue, ____0_name_empty, ___1_bufferLength, ____2_nameLength_empty, ____3_mvid_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetModuleFromScope_m86751A554C8126A7F38B4B71BC9F7FBBE1CA4C71(int32_t* ___0_moduleDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_moduleDef' to managed representation
		int32_t ____0_moduleDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetModuleFromScope_m37086F214923658BC26A4A6296BF2EF62EBD4914(__thisValue, (&____0_moduleDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_moduleDef' back from managed representation
		*___0_moduleDef = ____0_moduleDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetTypeDefProps_m7B23DCD6F1DF07B5063BFF90A9B6175BB79FCA00(int32_t ___0_typeDef, Il2CppChar* ___1_qualifiedName, int32_t ___2_qualifiedNameBufferLength, int32_t* ___3_qualifiedNameLength, int32_t* ___4_attributes, int32_t* ___5_baseType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_qualifiedName' to managed representation
		Il2CppChar* ____1_qualifiedName_empty = NULL;

		// Marshaling of parameter '___3_qualifiedNameLength' to managed representation
		int32_t* ____3_qualifiedNameLength_empty = NULL;

		// Marshaling of parameter '___4_attributes' to managed representation
		int32_t* ____4_attributes_empty = 0;

		// Marshaling of parameter '___5_baseType' to managed representation
		int32_t* ____5_baseType_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __thisValue = (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34*)GetManagedObjectInline();
			returnValue = SymWriterMetadataAdapter_GetTypeDefProps_m595BF492F13C3B3314418AE7B9BD10CD92918E13(__thisValue, ___0_typeDef, ____1_qualifiedName_empty, ___2_qualifiedNameBufferLength, ____3_qualifiedNameLength_empty, ____4_attributes_empty, ____5_baseType_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetInterfaceImplProps_m18B44447246ED5A5D00C652354DB65B0D29CCE57(int32_t ___0_interfaceImpl, int32_t* ___1_typeDef, int32_t* ___2_interfaceDefRefSpec) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_typeDef' to managed representation
		int32_t* ____1_typeDef_empty = NULL;

		// Marshaling of parameter '___2_interfaceDefRefSpec' to managed representation
		int32_t* ____2_interfaceDefRefSpec_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetInterfaceImplProps_m4E2DFB9506C09946267EA43EF79A1E37AF4DC417(__thisValue, ___0_interfaceImpl, ____1_typeDef_empty, ____2_interfaceDefRefSpec_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetTypeRefProps_m104B4F2BBBBB9ED958659DF8B26198E8C30AAD84(int32_t ___0_typeRef, int32_t* ___1_resolutionScope, Il2CppChar* ___2_qualifiedName, int32_t ___3_qualifiedNameBufferLength, int32_t* ___4_qualifiedNameLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_resolutionScope' to managed representation
		int32_t* ____1_resolutionScope_empty = NULL;

		// Marshaling of parameter '___2_qualifiedName' to managed representation
		Il2CppChar* ____2_qualifiedName_empty = NULL;

		// Marshaling of parameter '___4_qualifiedNameLength' to managed representation
		int32_t* ____4_qualifiedNameLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __thisValue = (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34*)GetManagedObjectInline();
			returnValue = SymWriterMetadataAdapter_GetTypeRefProps_mED58E70E7BF9E18A6BB6D2ACECC7794722D99C12(__thisValue, ___0_typeRef, ____1_resolutionScope_empty, ____2_qualifiedName_empty, ___3_qualifiedNameBufferLength, ____4_qualifiedNameLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_ResolveTypeRef_m55F51140D85D36451D3FA946D806D940677AE194(int32_t ___0_typeRef, Guid_t* ___1_scopeInterfaceId, Il2CppIUnknown** ___2_scope, int32_t* ___3_typeDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_scope' to managed representation
		RuntimeObject* ____2_scope_empty = NULL;

		// Marshaling of parameter '___3_typeDef' to managed representation
		int32_t ____3_typeDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_ResolveTypeRef_m5D99DB1EBBADB834B1D4B72167BFAA9966E63603(__thisValue, ___0_typeRef, ___1_scopeInterfaceId, (&____2_scope_empty), (&____3_typeDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___2_scope' back from managed representation
		if (____2_scope_empty != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(____2_scope_empty))
			{
				*___2_scope = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(____2_scope_empty));
				(*___2_scope)->AddRef();
			}
			else
			{
				*___2_scope = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(____2_scope_empty);
			}
		}
		else
		{
			*___2_scope = NULL;
		}

		// Marshaling of parameter '___3_typeDef' back from managed representation
		*___3_typeDef = ____3_typeDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMembers_m74CCC6EABDA1796971BBD70DB06413CA6749E07D(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_memberDefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_memberDefs' to managed representation
		int32_t* ____2_memberDefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMembers_m4E2215886D7CA96C6075698C0BD91C43B15AB4F7(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_memberDefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMembersWithName_mA91863BE92E040812D71D9E3A364ECA2EEB3FDA3(void** ___0_enumHandle, int32_t ___1_typeDef, Il2CppChar* ___2_name, int32_t* ___3_memberDefs, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_name' to managed representation
		String_t* ____2_name_unmarshaled = NULL;
		____2_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_name);

		// Marshaling of parameter '___3_memberDefs' to managed representation
		int32_t* ____3_memberDefs_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMembersWithName_m1CEF2DC07C59B5FEE721EE529721FCC169287E2F(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_name_unmarshaled, ____3_memberDefs_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMethods_m837BB1F0E83ED51CFB976B6842A75F724BDD18DD(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_methodDefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_methodDefs' to managed representation
		int32_t* ____2_methodDefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethods_mB28FBC962AF460E970192DC060AE045A05FE7EBF(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_methodDefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMethodsWithName_m14A245E68A66A2FFA6A484F6D66713AA98CE273B(void** ___0_enumHandle, int32_t ___1_typeDef, Il2CppChar* ___2_name, int32_t* ___3_methodDefs, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_name' to managed representation
		String_t* ____2_name_unmarshaled = NULL;
		____2_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_name);

		// Marshaling of parameter '___3_methodDefs' to managed representation
		int32_t* ____3_methodDefs_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethodsWithName_mA95ECF0C380555643C36CC65D7B49F18A49043AB(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_name_unmarshaled, ____3_methodDefs_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumFields_m24DFC022A0F8496730184EB39A49B9D2B421B8C0(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_fieldDefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_fieldDefs' to managed representation
		int32_t* ____2_fieldDefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumFields_m31647ED4A98FF7381E2EC0C5EDA9D9B53C5EFD5B(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_fieldDefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumFieldsWithName_mA6535D7094D9D4DF7CC5FAD32BAD91E11792EE3B(void** ___0_enumHandle, int32_t ___1_typeDef, Il2CppChar* ___2_name, int32_t* ___3_fieldDefs, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_name' to managed representation
		String_t* ____2_name_unmarshaled = NULL;
		____2_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___2_name);

		// Marshaling of parameter '___3_fieldDefs' to managed representation
		int32_t* ____3_fieldDefs_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumFieldsWithName_m30E635D15F88CA0370FC6426E57934EECF4AF157(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_name_unmarshaled, ____3_fieldDefs_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumParams_mA16A66659F6BB8B7617F9253BAB0F67027636F39(void** ___0_enumHandle, int32_t ___1_methodDef, int32_t* ___2_paramDefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_paramDefs' to managed representation
		int32_t* ____2_paramDefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumParams_mE06F736E896CF05B6E5C69C83577D207B45352F6(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_methodDef, ____2_paramDefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMemberRefs_m0A5B47AED30442EBB09DD1ABE298585C9462F8F0(void** ___0_enumHandle, int32_t ___1_parentToken, int32_t* ___2_memberRefs, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_memberRefs' to managed representation
		int32_t* ____2_memberRefs_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMemberRefs_m6C83B6EF6D77AD1BEC9CD41A6E2B4A4F4341D762(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_parentToken, ____2_memberRefs_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMethodImpls_mA19D3693E3A9A7B0503464033061BE37A5444D2B(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_implementationTokens, int32_t* ___3_declarationTokens, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_implementationTokens' to managed representation
		int32_t* ____2_implementationTokens_empty = NULL;

		// Marshaling of parameter '___3_declarationTokens' to managed representation
		int32_t* ____3_declarationTokens_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethodImpls_m3DB98828A26B3C7A88F60846EC7501A4832163F1(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_implementationTokens_empty, ____3_declarationTokens_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumPermissionSets_m47C5923A1B07A88DFD62BA62BDD11B748F5411D1(void** ___0_enumHandle, int32_t ___1_token, uint32_t ___2_action, int32_t* ___3_declSecurityTokens, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___3_declSecurityTokens' to managed representation
		int32_t* ____3_declSecurityTokens_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumPermissionSets_m51906C9B7E6D828D9D2E35FB29E86D5F17C68487(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_token, ___2_action, ____3_declSecurityTokens_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindMember_m0D914E37C2F1A7996C58E03202413F3C19EA2530(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_memberDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___4_memberDef' to managed representation
		int32_t ____4_memberDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindMember_mDF83574E1ECD7184CE8442BAB964C3E814973115(__thisValue, ___0_typeDef, ____1_name_unmarshaled, ___2_signature, ___3_signatureLength, (&____4_memberDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___4_memberDef' back from managed representation
		*___4_memberDef = ____4_memberDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindMethod_m4E27328DFD06CC488192BCBC34DA6FE9476B5786(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_methodDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___4_methodDef' to managed representation
		int32_t ____4_methodDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindMethod_mCE098C4C7C74588F74295F96835B23A03499418C(__thisValue, ___0_typeDef, ____1_name_unmarshaled, ___2_signature, ___3_signatureLength, (&____4_methodDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___4_methodDef' back from managed representation
		*___4_methodDef = ____4_methodDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindField_m9923DA9C8325A949FB59D34699F4D22E9FEA6DA2(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_fieldDef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___4_fieldDef' to managed representation
		int32_t ____4_fieldDef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindField_mE7AC59CD66B612ABDCD3F46387D70322AE9DF78B(__thisValue, ___0_typeDef, ____1_name_unmarshaled, ___2_signature, ___3_signatureLength, (&____4_fieldDef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___4_fieldDef' back from managed representation
		*___4_fieldDef = ____4_fieldDef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindMemberRef_mD6DDDDC12A59775C6631D8B2DA17655EF2DFA149(int32_t ___0_typeDef, Il2CppChar* ___1_name, uint8_t* ___2_signature, int32_t ___3_signatureLength, int32_t* ___4_memberRef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___4_memberRef' to managed representation
		int32_t ____4_memberRef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindMemberRef_m25A6DFB333869AC5C23C4156EBA8E4E7E85BB4C0(__thisValue, ___0_typeDef, ____1_name_unmarshaled, ___2_signature, ___3_signatureLength, (&____4_memberRef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___4_memberRef' back from managed representation
		*___4_memberRef = ____4_memberRef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetMethodProps_m2E44DB3B51FBB3C540334271C17483FBE9904842(int32_t ___0_methodDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_relativeVirtualAddress, int32_t* ___9_implAttributes) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = 0;

		// Marshaling of parameter '___6_signature' to managed representation
		uint8_t** ____6_signature_empty = NULL;

		// Marshaling of parameter '___7_signatureLength' to managed representation
		int32_t* ____7_signatureLength_empty = NULL;

		// Marshaling of parameter '___8_relativeVirtualAddress' to managed representation
		int32_t* ____8_relativeVirtualAddress_empty = NULL;

		// Marshaling of parameter '___9_implAttributes' to managed representation
		int32_t* ____9_implAttributes_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __thisValue = (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34*)GetManagedObjectInline();
			returnValue = SymWriterMetadataAdapter_GetMethodProps_mF29136F5C186C5AF2788C54C8BA2688788653C3C(__thisValue, ___0_methodDef, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_signature_empty, ____7_signatureLength_empty, ____8_relativeVirtualAddress_empty, ____9_implAttributes_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetMemberRefProps_m2C89679B4283891FEB4697D15F00E947EBB9D02F(int32_t ___0_memberRef, int32_t* ___1_declaringType, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, uint8_t** ___5_signature, int32_t* ___6_signatureLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringType' to managed representation
		int32_t* ____1_declaringType_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_signature' to managed representation
		uint8_t** ____5_signature_empty = NULL;

		// Marshaling of parameter '___6_signatureLength' to managed representation
		int32_t* ____6_signatureLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetMemberRefProps_m0085FE84F51537C1ADB7522CDEA8B9364CA9AEF8(__thisValue, ___0_memberRef, ____1_declaringType_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_signature_empty, ____6_signatureLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumProperties_mB08CB1A289862FA317F91097E64BF1FBA40AD326(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_properties, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_properties' to managed representation
		int32_t* ____2_properties_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumProperties_mC6D9525D1018F410A57A8B03C96015026C0D4D49(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_properties_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual uint32_t STDCALL IMetadataImport_EnumEvents_m897F5800137BCF94D8C44969D7DC043CE5FA6F4F(void** ___0_enumHandle, int32_t ___1_typeDef, int32_t* ___2_events, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_events' to managed representation
		int32_t* ____2_events_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumEvents_m8E7F94350800DE86012890919BC134974F5B6EF4(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_typeDef, ____2_events_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<uint32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetEventProps_mF175AAF4065D09CEE976193FA6BB10EC71138B67(int32_t ___0_event, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, int32_t* ___6_eventType, int32_t* ___7_adderMethodDef, int32_t* ___8_removerMethodDef, int32_t* ___9_raiserMethodDef, int32_t* ___10_otherMethodDefs, int32_t ___11_otherMethodDefBufferLength, int32_t* ___12_methodMethodDefsLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = NULL;

		// Marshaling of parameter '___6_eventType' to managed representation
		int32_t* ____6_eventType_empty = NULL;

		// Marshaling of parameter '___7_adderMethodDef' to managed representation
		int32_t* ____7_adderMethodDef_empty = NULL;

		// Marshaling of parameter '___8_removerMethodDef' to managed representation
		int32_t* ____8_removerMethodDef_empty = NULL;

		// Marshaling of parameter '___9_raiserMethodDef' to managed representation
		int32_t* ____9_raiserMethodDef_empty = NULL;

		// Marshaling of parameter '___10_otherMethodDefs' to managed representation
		int32_t* ____10_otherMethodDefs_empty = NULL;

		// Marshaling of parameter '___12_methodMethodDefsLength' to managed representation
		int32_t* ____12_methodMethodDefsLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetEventProps_m1897365E611B6331E2E0A2000E2353297A163955(__thisValue, ___0_event, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_eventType_empty, ____7_adderMethodDef_empty, ____8_removerMethodDef_empty, ____9_raiserMethodDef_empty, ____10_otherMethodDefs_empty, ___11_otherMethodDefBufferLength, ____12_methodMethodDefsLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumMethodSemantics_mF0264C6E0101034452FCC37EB62A9528EFE8947C(void** ___0_enumHandle, int32_t ___1_methodDef, int32_t* ___2_eventsAndProperties, int32_t ___3_bufferLength, int32_t* ___4_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___2_eventsAndProperties' to managed representation
		int32_t* ____2_eventsAndProperties_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumMethodSemantics_m34ED9E0FE446ABF6758A7F490C228D4B6B5D6541(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_methodDef, ____2_eventsAndProperties_empty, ___3_bufferLength, ____4_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetMethodSemantics_m0F8BE6901C5DBA47B9C76F2CCC08EDB23682548A(int32_t ___0_methodDef, int32_t ___1_eventOrProperty, int32_t* ___2_semantics) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_semantics' to managed representation
		int32_t* ____2_semantics_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetMethodSemantics_m8E680B29BC7F4E98A39CB426CC22226C0658E855(__thisValue, ___0_methodDef, ___1_eventOrProperty, ____2_semantics_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetClassLayout_m3416902FED850B96935702F792A6CCBA4AAC038B(int32_t ___0_typeDef, int32_t* ___1_packSize, MetadataImportFieldOffset_t44A1CAA35A45D77251F3B853D92EAD5FAFFBE14F* ___2_fieldOffsets, int32_t ___3_bufferLength, int32_t* ___4_count, int32_t* ___5_typeSize) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_packSize' to managed representation
		int32_t* ____1_packSize_empty = NULL;

		// Marshaling of parameter '___2_fieldOffsets' to managed representation
		MetadataImportFieldOffset_t44A1CAA35A45D77251F3B853D92EAD5FAFFBE14F* ____2_fieldOffsets_empty = NULL;

		// Marshaling of parameter '___4_count' to managed representation
		int32_t* ____4_count_empty = NULL;

		// Marshaling of parameter '___5_typeSize' to managed representation
		int32_t* ____5_typeSize_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetClassLayout_m1DFC72381A149B5BC4AEAB8434633D65AF272503(__thisValue, ___0_typeDef, ____1_packSize_empty, ____2_fieldOffsets_empty, ___3_bufferLength, ____4_count_empty, ____5_typeSize_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetFieldMarshal_mAC0442BC1ED03E59FF77D56BDC7E42137B200CFA(int32_t ___0_fieldDef, uint8_t** ___1_nativeTypeSignature, int32_t* ___2_nativeTypeSignatureLengvth) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_nativeTypeSignature' to managed representation
		uint8_t** ____1_nativeTypeSignature_empty = NULL;

		// Marshaling of parameter '___2_nativeTypeSignatureLengvth' to managed representation
		int32_t* ____2_nativeTypeSignatureLengvth_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetFieldMarshal_m2B163215669A07486B30295DF504452307780EFF(__thisValue, ___0_fieldDef, ____1_nativeTypeSignature_empty, ____2_nativeTypeSignatureLengvth_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetRVA_m8D86BE2D9A4EBEC159F73F171F04A0ECA291EF5C(int32_t ___0_methodDef, int32_t* ___1_relativeVirtualAddress, int32_t* ___2_implAttributes) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_relativeVirtualAddress' to managed representation
		int32_t* ____1_relativeVirtualAddress_empty = NULL;

		// Marshaling of parameter '___2_implAttributes' to managed representation
		int32_t* ____2_implAttributes_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetRVA_mB63E8D0FE786AF116C437F378B77C1112C4719BA(__thisValue, ___0_methodDef, ____1_relativeVirtualAddress_empty, ____2_implAttributes_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetPermissionSetProps_mC4971283B94A15B2495A12AB4909702464EA5617(int32_t ___0_declSecurity, uint32_t* ___1_action, uint8_t** ___2_permissionBlob, int32_t* ___3_permissionBlobLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_action' to managed representation
		uint32_t* ____1_action_empty = NULL;

		// Marshaling of parameter '___2_permissionBlob' to managed representation
		uint8_t** ____2_permissionBlob_empty = NULL;

		// Marshaling of parameter '___3_permissionBlobLength' to managed representation
		int32_t* ____3_permissionBlobLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetPermissionSetProps_m7673595279057AA7B4ADE70D52A6C7B74E47632E(__thisValue, ___0_declSecurity, ____1_action_empty, ____2_permissionBlob_empty, ____3_permissionBlobLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetSigFromToken_m7F4D3B7A68C5BDC9146B5BA3B5955A70AB37F025(int32_t ___0_standaloneSignature, uint8_t** ___1_signature, int32_t* ___2_signatureLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_signature' to managed representation
		uint8_t** ____1_signature_empty = NULL;

		// Marshaling of parameter '___2_signatureLength' to managed representation
		int32_t* ____2_signatureLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_GetSigFromToken_mEAD4DF80368D7AD2A55535C48BF8AB7CA4FF860D(__thisValue, ___0_standaloneSignature, ____1_signature_empty, ____2_signatureLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetModuleRefProps_m3B28646924380A005C617F6D3138BE57161CBEF2(int32_t ___0_moduleRef, Il2CppChar* ___1_name, int32_t ___2_nameBufferLength, int32_t* ___3_nameLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		Il2CppChar* ____1_name_empty = NULL;

		// Marshaling of parameter '___3_nameLength' to managed representation
		int32_t* ____3_nameLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetModuleRefProps_mEB0BAE2A9A5F13FE65332F89CA4859FFBD5933D3(__thisValue, ___0_moduleRef, ____1_name_empty, ___2_nameBufferLength, ____3_nameLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumModuleRefs_mF3E210B3A44F4AF08F9D644710F6AA70E6CDFC4D(void** ___0_enumHandle, int32_t* ___1_moduleRefs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_moduleRefs' to managed representation
		int32_t* ____1_moduleRefs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumModuleRefs_mCF5E00DD77D598F9F4EA19549C4047BF538D1BBF(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_moduleRefs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetTypeSpecFromToken_mA3962E10DB9D0F724E7FB61719A8AD4B4FD6E182(int32_t ___0_typeSpec, uint8_t** ___1_signature, int32_t* ___2_signatureLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_signature' to managed representation
		uint8_t** ____1_signature_empty = NULL;

		// Marshaling of parameter '___2_signatureLength' to managed representation
		int32_t* ____2_signatureLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetTypeSpecFromToken_m90EDAC09CB92B78A0F3CAB7F93297EBA157C5F76(__thisValue, ___0_typeSpec, ____1_signature_empty, ____2_signatureLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetNameFromToken_m85F3F3F67A62AAEC48538DADAACC1941800D78BE(int32_t ___0_token, uint8_t* ___1_nameUTF8) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_nameUTF8' to managed representation
		uint8_t* ____1_nameUTF8_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetNameFromToken_m4BDE864FD52F46FEEB435ABDD5EA1B94269CD4D1(__thisValue, ___0_token, ____1_nameUTF8_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumUnresolvedMethods_m1FEE391F0A92DA0F06B0FC043A9A85778B96FD4D(void** ___0_enumHandle, int32_t* ___1_methodDefs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_methodDefs' to managed representation
		int32_t* ____1_methodDefs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumUnresolvedMethods_m7BDF48E14B6CC1E0505ABADF4994D109093D0B75(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_methodDefs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetUserString_m47B5B9B7E9AE164CC75E6727FC36B6B6D2258285(int32_t ___0_userStringToken, Il2CppChar* ___1_buffer, int32_t ___2_bufferLength, int32_t* ___3_length) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_buffer' to managed representation
		Il2CppChar* ____1_buffer_empty = NULL;

		// Marshaling of parameter '___3_length' to managed representation
		int32_t* ____3_length_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetUserString_mEC9D24C98684C5AA3EBAF4A3A937EF0C274ACC01(__thisValue, ___0_userStringToken, ____1_buffer_empty, ___2_bufferLength, ____3_length_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetPinvokeMap_m18802FC6E12D254F88A246D2C9709AF336AF685A(int32_t ___0_memberDef, int32_t* ___1_attributes, Il2CppChar* ___2_importName, int32_t ___3_importNameBufferLength, int32_t* ___4_importNameLength, int32_t* ___5_moduleRef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_attributes' to managed representation
		int32_t* ____1_attributes_empty = NULL;

		// Marshaling of parameter '___2_importName' to managed representation
		Il2CppChar* ____2_importName_empty = NULL;

		// Marshaling of parameter '___4_importNameLength' to managed representation
		int32_t* ____4_importNameLength_empty = NULL;

		// Marshaling of parameter '___5_moduleRef' to managed representation
		int32_t* ____5_moduleRef_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetPinvokeMap_m2C9E7F84DEBAE83F7062C4296F97688E135ED9C2(__thisValue, ___0_memberDef, ____1_attributes_empty, ____2_importName_empty, ___3_importNameBufferLength, ____4_importNameLength_empty, ____5_moduleRef_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumSignatures_m4DB1174A1D28B2A290D700D64E7AA0B785367792(void** ___0_enumHandle, int32_t* ___1_signatureTokens, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_signatureTokens' to managed representation
		int32_t* ____1_signatureTokens_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumSignatures_mB728D755D53869C46BF3D291ABFEF344FE2D7BC9(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_signatureTokens_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumTypeSpecs_m41DA17E39CD4E4E2526D47D436919B51C71EEC2F(void** ___0_enumHandle, int32_t* ___1_typeSpecs, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_typeSpecs' to managed representation
		int32_t* ____1_typeSpecs_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumTypeSpecs_m071FD54808411B0A1FB953EAEACD665CFE5EBB71(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_typeSpecs_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumUserStrings_m79DF282C5DC9E5C910111F39EE275DBA1BCB44B5(void** ___0_enumHandle, int32_t* ___1_userStrings, int32_t ___2_bufferLength, int32_t* ___3_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___1_userStrings' to managed representation
		int32_t* ____1_userStrings_empty = NULL;

		// Marshaling of parameter '___3_count' to managed representation
		int32_t* ____3_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumUserStrings_m2B39201C2C4386B49F31F7FFAB780AD00361BC7E(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ____1_userStrings_empty, ___2_bufferLength, ____3_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetParamForMethodIndex_m9ED691CC3D505E4DDB5B89682BCA263558CFE17D(int32_t ___0_methodDef, int32_t ___1_sequenceNumber, int32_t* ___2_parameterToken) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_parameterToken' to managed representation
		int32_t ____2_parameterToken_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetParamForMethodIndex_mBAAD3CC816396087616F74EA5CAC466CE4772460(__thisValue, ___0_methodDef, ___1_sequenceNumber, (&____2_parameterToken_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___2_parameterToken' back from managed representation
		*___2_parameterToken = ____2_parameterToken_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_EnumCustomAttributes_mF7C652A2DCE5090D9300333FACCC6F278679AE12(void** ___0_enumHandle, int32_t ___1_parent, int32_t ___2_attributeType, int32_t* ___3_customAttributes, int32_t ___4_bufferLength, int32_t* ___5_count) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___0_enumHandle' to managed representation
		void* ____0_enumHandle_unmarshaled_dereferenced = NULL;
		____0_enumHandle_unmarshaled_dereferenced = *___0_enumHandle;

		// Marshaling of parameter '___3_customAttributes' to managed representation
		int32_t* ____3_customAttributes_empty = NULL;

		// Marshaling of parameter '___5_count' to managed representation
		int32_t* ____5_count_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_EnumCustomAttributes_m61E03E07CED08C1BC679F0DBB093B02C07C13EC8(__thisValue, (&____0_enumHandle_unmarshaled_dereferenced), ___1_parent, ___2_attributeType, ____3_customAttributes_empty, ___4_bufferLength, ____5_count_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___0_enumHandle' back from managed representation
		*___0_enumHandle = ____0_enumHandle_unmarshaled_dereferenced;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetCustomAttributeProps_mFDF6228D712BB4DB37D799714887D83DCA96BB85(int32_t ___0_customAttribute, int32_t* ___1_parent, int32_t* ___2_constructor, uint8_t** ___3_value, int32_t* ___4_valueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_parent' to managed representation
		int32_t* ____1_parent_empty = NULL;

		// Marshaling of parameter '___2_constructor' to managed representation
		int32_t* ____2_constructor_empty = NULL;

		// Marshaling of parameter '___3_value' to managed representation
		uint8_t** ____3_value_empty = NULL;

		// Marshaling of parameter '___4_valueLength' to managed representation
		int32_t* ____4_valueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetCustomAttributeProps_mCE533D2C546D11811B5B622B22EDAD3F2874F578(__thisValue, ___0_customAttribute, ____1_parent_empty, ____2_constructor_empty, ____3_value_empty, ____4_valueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_FindTypeRef_mA3A2124D2583C3693C7FD1AA5DEC9F04A8DC0133(int32_t ___0_resolutionScope, Il2CppChar* ___1_name, int32_t* ___2_typeRef) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___2_typeRef' to managed representation
		int32_t ____2_typeRef_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_FindTypeRef_m8966A9C48A4C72464341694AB1538EC6784BADA2(__thisValue, ___0_resolutionScope, ____1_name_unmarshaled, (&____2_typeRef_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___2_typeRef' back from managed representation
		*___2_typeRef = ____2_typeRef_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetMemberProps_mD0C3FFB8528F687B5E4D507AA36D6FD98D706A8B(int32_t ___0_member, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_relativeVirtualAddress, int32_t* ___9_implAttributes, int32_t* ___10_constantType, uint8_t** ___11_constantValue, int32_t* ___12_constantValueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = NULL;

		// Marshaling of parameter '___6_signature' to managed representation
		uint8_t** ____6_signature_empty = NULL;

		// Marshaling of parameter '___7_signatureLength' to managed representation
		int32_t* ____7_signatureLength_empty = NULL;

		// Marshaling of parameter '___8_relativeVirtualAddress' to managed representation
		int32_t* ____8_relativeVirtualAddress_empty = NULL;

		// Marshaling of parameter '___9_implAttributes' to managed representation
		int32_t* ____9_implAttributes_empty = NULL;

		// Marshaling of parameter '___10_constantType' to managed representation
		int32_t* ____10_constantType_empty = NULL;

		// Marshaling of parameter '___11_constantValue' to managed representation
		uint8_t** ____11_constantValue_empty = NULL;

		// Marshaling of parameter '___12_constantValueLength' to managed representation
		int32_t* ____12_constantValueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetMemberProps_mDA1CDE407AFF5492EA8E7623941B91383603344A(__thisValue, ___0_member, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_signature_empty, ____7_signatureLength_empty, ____8_relativeVirtualAddress_empty, ____9_implAttributes_empty, ____10_constantType_empty, ____11_constantValue_empty, ____12_constantValueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetFieldProps_mF9525352FC212EE5685EFE8191A5EE00DEACC879(int32_t ___0_fieldDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_constantType, uint8_t** ___9_constantValue, int32_t* ___10_constantValueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = NULL;

		// Marshaling of parameter '___6_signature' to managed representation
		uint8_t** ____6_signature_empty = NULL;

		// Marshaling of parameter '___7_signatureLength' to managed representation
		int32_t* ____7_signatureLength_empty = NULL;

		// Marshaling of parameter '___8_constantType' to managed representation
		int32_t* ____8_constantType_empty = NULL;

		// Marshaling of parameter '___9_constantValue' to managed representation
		uint8_t** ____9_constantValue_empty = NULL;

		// Marshaling of parameter '___10_constantValueLength' to managed representation
		int32_t* ____10_constantValueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetFieldProps_m5F40C5E14A24CA39CD4A792C73AD8E53C50B2A29(__thisValue, ___0_fieldDef, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_signature_empty, ____7_signatureLength_empty, ____8_constantType_empty, ____9_constantValue_empty, ____10_constantValueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetPropertyProps_mE26A3F9F86CBFD020E682CA88F2C9177822446E1(int32_t ___0_propertyDef, int32_t* ___1_declaringTypeDef, Il2CppChar* ___2_name, int32_t ___3_nameBufferLength, int32_t* ___4_nameLength, int32_t* ___5_attributes, uint8_t** ___6_signature, int32_t* ___7_signatureLength, int32_t* ___8_constantType, uint8_t** ___9_constantValue, int32_t* ___10_constantValueLength, int32_t* ___11_setterMethodDef, int32_t* ___12_getterMethodDef, int32_t* ___13_outerMethodDefs, int32_t ___14_outerMethodDefsBufferLength, int32_t* ___15_otherMethodDefCount) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringTypeDef' to managed representation
		int32_t* ____1_declaringTypeDef_empty = NULL;

		// Marshaling of parameter '___2_name' to managed representation
		Il2CppChar* ____2_name_empty = NULL;

		// Marshaling of parameter '___4_nameLength' to managed representation
		int32_t* ____4_nameLength_empty = NULL;

		// Marshaling of parameter '___5_attributes' to managed representation
		int32_t* ____5_attributes_empty = NULL;

		// Marshaling of parameter '___6_signature' to managed representation
		uint8_t** ____6_signature_empty = NULL;

		// Marshaling of parameter '___7_signatureLength' to managed representation
		int32_t* ____7_signatureLength_empty = NULL;

		// Marshaling of parameter '___8_constantType' to managed representation
		int32_t* ____8_constantType_empty = NULL;

		// Marshaling of parameter '___9_constantValue' to managed representation
		uint8_t** ____9_constantValue_empty = NULL;

		// Marshaling of parameter '___10_constantValueLength' to managed representation
		int32_t* ____10_constantValueLength_empty = NULL;

		// Marshaling of parameter '___11_setterMethodDef' to managed representation
		int32_t* ____11_setterMethodDef_empty = NULL;

		// Marshaling of parameter '___12_getterMethodDef' to managed representation
		int32_t* ____12_getterMethodDef_empty = NULL;

		// Marshaling of parameter '___13_outerMethodDefs' to managed representation
		int32_t* ____13_outerMethodDefs_empty = NULL;

		// Marshaling of parameter '___15_otherMethodDefCount' to managed representation
		int32_t* ____15_otherMethodDefCount_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetPropertyProps_mFDC0798A79B5CBB2D0C512BDF121C773F4DA741D(__thisValue, ___0_propertyDef, ____1_declaringTypeDef_empty, ____2_name_empty, ___3_nameBufferLength, ____4_nameLength_empty, ____5_attributes_empty, ____6_signature_empty, ____7_signatureLength_empty, ____8_constantType_empty, ____9_constantValue_empty, ____10_constantValueLength_empty, ____11_setterMethodDef_empty, ____12_getterMethodDef_empty, ____13_outerMethodDefs_empty, ___14_outerMethodDefsBufferLength, ____15_otherMethodDefCount_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetParamProps_mA8811C6DEF34A0B0D5B3D17B4E32DD92D83BB009(int32_t ___0_parameter, int32_t* ___1_declaringMethodDef, int32_t* ___2_sequenceNumber, Il2CppChar* ___3_name, int32_t ___4_nameBufferLength, int32_t* ___5_nameLength, int32_t* ___6_attributes, int32_t* ___7_constantType, uint8_t** ___8_constantValue, int32_t* ___9_constantValueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_declaringMethodDef' to managed representation
		int32_t* ____1_declaringMethodDef_empty = NULL;

		// Marshaling of parameter '___2_sequenceNumber' to managed representation
		int32_t* ____2_sequenceNumber_empty = NULL;

		// Marshaling of parameter '___3_name' to managed representation
		Il2CppChar* ____3_name_empty = NULL;

		// Marshaling of parameter '___5_nameLength' to managed representation
		int32_t* ____5_nameLength_empty = NULL;

		// Marshaling of parameter '___6_attributes' to managed representation
		int32_t* ____6_attributes_empty = NULL;

		// Marshaling of parameter '___7_constantType' to managed representation
		int32_t* ____7_constantType_empty = NULL;

		// Marshaling of parameter '___8_constantValue' to managed representation
		uint8_t** ____8_constantValue_empty = NULL;

		// Marshaling of parameter '___9_constantValueLength' to managed representation
		int32_t* ____9_constantValueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetParamProps_m5A75A28ACEB99F8150A59A31A430286FFE2E7C59(__thisValue, ___0_parameter, ____1_declaringMethodDef_empty, ____2_sequenceNumber_empty, ____3_name_empty, ___4_nameBufferLength, ____5_nameLength_empty, ____6_attributes_empty, ____7_constantType_empty, ____8_constantValue_empty, ____9_constantValueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetCustomAttributeByName_mD836C59BA583F8AE906565DC6E4461E96AAB9654(int32_t ___0_parent, Il2CppChar* ___1_name, uint8_t** ___2_value, int32_t* ___3_valueLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_name' to managed representation
		String_t* ____1_name_unmarshaled = NULL;
		____1_name_unmarshaled = il2cpp_codegen_marshal_bstring_result(___1_name);

		// Marshaling of parameter '___2_value' to managed representation
		uint8_t** ____2_value_empty = NULL;

		// Marshaling of parameter '___3_valueLength' to managed representation
		int32_t* ____3_valueLength_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetCustomAttributeByName_m576352C41BEBBCD1BD509E541FA9E276C6DABC5D(__thisValue, ___0_parent, ____1_name_unmarshaled, ____2_value_empty, ____3_valueLength_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual IL2CPP_VARIANT_BOOL STDCALL IMetadataImport_IsValidToken_m439515AFE5EF48D1C071159EB4D0398FD174A03C(int32_t ___0_token) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_IsValidToken_m49F273A03936666DFC85FCCF5679DCC62BDFC029(__thisValue, ___0_token, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<IL2CPP_VARIANT_BOOL>(0);
		}

		return ((returnValue) ? IL2CPP_VARIANT_TRUE : IL2CPP_VARIANT_FALSE);
	}

	virtual int32_t STDCALL IMetadataImport_GetNestedClassProps_mA2CBAC2114EC5741D32E95809ED43857C690C1D4(int32_t ___0_nestedClass, int32_t* ___1_enclosingClass) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___1_enclosingClass' to managed representation
		int32_t ____1_enclosingClass_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __thisValue = (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34*)GetManagedObjectInline();
			returnValue = SymWriterMetadataAdapter_GetNestedClassProps_mDB2F034A471DD5BF38DD7483CB0F7B42A66EF8B2(__thisValue, ___0_nestedClass, (&____1_enclosingClass_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___1_enclosingClass' back from managed representation
		*___1_enclosingClass = ____1_enclosingClass_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_GetNativeCallConvFromSig_mE3C0BF0A1AEC840781DAAEDB8CD31FC7131A012C(uint8_t* ___0_signature, int32_t ___1_signatureLength, int32_t* ___2_callingConvention) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___2_callingConvention' to managed representation
		int32_t* ____2_callingConvention_empty = NULL;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_GetNativeCallConvFromSig_mE09BD7C55C9433DAFA6954C4DBBC8A0AB9B74A02(__thisValue, ___0_signature, ___1_signatureLength, ____2_callingConvention_empty, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMetadataImport_IsGlobal_m7C2CE794918A316EA7921F433065DAE7BE852BD2(int32_t ___0_token, IL2CPP_VARIANT_BOOL ___1_value) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			returnValue = MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataImport_IsGlobal_m75F17FCF9580E762B4355A0FF62F4DB47980470F(__thisValue, ___0_token, ((___1_value) != IL2CPP_VARIANT_FALSE), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetModuleProps_mAFE1405E6F7472CF40F23D8F99043BA4735288E3() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetModuleProps_mCEB523F63C99FCDB52C8DD5858D971418285E92A(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___Save_m09006E3CF4024CFDE52BC3E99F24F93B59FF292D() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___Save_m4F43416B5B898838FDF6A34A70B6755E727C62A4(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SaveToStream_m72BD71EFB8891C44F2759296869E8D084A5F559A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SaveToStream_m1998ED7260D776FBEA48BC03206BDEBE336F354B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___GetSaveSize_m80576FD6605D3E39A3A8BB3B1BEDC1B173C9DD8E() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___GetSaveSize_mF95212A21343AEC08E51FBE9B5C764AF954C8603(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineTypeDef_mD08E4671458F390D52D0826450FF5101E5851C50() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineTypeDef_m728062B7D05C2E8B1F22BCDC0A8B192210C8005B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineNestedType_mC8178A6EC5B40E1893522E6B6158EDFC4736BDE3() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineNestedType_m7AB729AB9AB8D562C7CC6DE615995C2AA4FBCEC4(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetHandler_m955C6CA4927170960B4AC1C155D211A374261B7F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetHandler_mC955E8C21D44DD0F6EEA863EA3934975FEB91AE0(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineMethod_mDC5C0D933BA652400956175E75041307B249654F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineMethod_m3DE76FFC878B16ED9BF815A4440E93D937E9A222(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineMethodImpl_m9C56CE78FFCA02E869DA71B30B40FD6B9FB6750A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineMethodImpl_mFC973573EE6C63E9E3AF44EAA87611AB4E5E2239(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineTypeRefByName_m5671A3C35860103F8332D2B0E403068C5187BF2C() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineTypeRefByName_m83D2AF36EE8082D36D6B442C24EAA764555CFAAD(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineImportType_m753E46BAECCF79CEB93B072FAE5846A0D04A0518() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineImportType_m2AAE063814A2CD599B941681E2308B16C89FF935(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineMemberRef_m3C58076D96B6E7C0F9881FD0902DD3D49BA65C5F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineMemberRef_m4D7EF36163B14272979862F4F7566A65EC78B68B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineImportMember_mB42E6A4C1D5EEC0C6D9A8C9FDDECB86BD3A6048E() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineImportMember_m31A58C1479B9DE6016104570AF0A654409428A71(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineEvent_m82B3CD4699B3E4E2E7AB89E3CA5EDBE57E6F5BDC() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineEvent_m5E1C2A9348EAF0B85D2804D00BEDC466BD22F383(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetClassLayout_mC326A46327F044B9BF420BC47B79EBE81F1B2EAD() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetClassLayout_m6F687AF01E5183E2AAC7DBD7287B51761379B67E(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeleteClassLayout_m8C50C11F7305EF67F0C082E99540B49779CBD711() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeleteClassLayout_m401D6FD450BA22873E4215B7343B606A0099762C(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetFieldMarshal_mC282A68ECE14AD80D924BEDE5CC14B58E62D8EAE() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetFieldMarshal_m1D6E40716548DDE439872B3F5F90A6B99E610A16(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeleteFieldMarshal_mBDC95C2BCD4782D5FCE840B3B1DF2007340306B0() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeleteFieldMarshal_m0E9A54C6DCF058AC5BF3A3DCE6AD196DA2BBA49B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefinePermissionSet_m9CEE706A16751BEF773B7AD54E90E7F2372BB0B1() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefinePermissionSet_m7A4BE74A77CBEEA6C9E9FCA8C3C4EEC48365EED7(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetRVA_m1F45EA879E662BC352FB600218469871CF4BFF31() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetRVA_mAD8ACB9D03706261AED2B2A9ADDB8A6FCA217C10(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit_GetTokenFromSig_mDABB684B81648D8B0D9B844F7AEDCAF2FF368FE0(uint8_t* ___0_voidPointerSig, int32_t ___1_byteCountSig, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34* __thisValue = (SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34*)GetManagedObjectInline();
			returnValue = SymWriterMetadataAdapter_GetTokenFromSig_mD743213C17DEA8750464B89436CA79DA7C28EE94(__thisValue, ___0_voidPointerSig, ___1_byteCountSig, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineModuleRef_m9A4EB129127BED5CE7CD9A462DFE26AEF367D68A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineModuleRef_mB31410ACEE0E99AC2AA326EC45AB3D644F869DFA(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetParent_mA56BD24822C9EB4416E7FE9D2914457398442519() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetParent_m6C2BCAB1DA6AC82B8DFF8E1CC58FEA24A30E6D5E(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___GetTokenFromTypeSpec_m3AFA57B01CA2FA12ACBC36898178A35371D24138() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___GetTokenFromTypeSpec_mEFEAD0138150B0CCE639972896B52914FCBAAA17(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SaveToMemory_mB2C3513D714E2EE03A30A2428EBB6148F6E24F8F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SaveToMemory_mB9D9B9710083E7F6D1716892115AAD5346B700C7(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineUserString_mB35ECC504A81000BBB5E906FEF8888B6BE776030() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineUserString_m9ECFC87555E334F901F3BA1FAAF2449A080F8127(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeleteToken_m49C6CD3EA2FEC361F75C97756E2CCE4CD2629B7A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeleteToken_m551055BDE71002A808D9D9D7362EEB52D2E3D763(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetMethodProps_m5E06BD487F7EFC06A6F384FEAB2FEE7B96E930E9() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetMethodProps_m4130ACCD2650CAE7AB8B1BFFE1F64B564DA469E3(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetTypeDefProps_mEE308999ED171F383169D0AD3C833F4925B51AFD() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetTypeDefProps_m9E925B4AE570006C3257BD35405A658907B248CC(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetEventProps_m9ECD1FDE7D582508EE5B07274AD13A0D214428CD() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetEventProps_mF4BBD01D4CA843E697EDF7A80A6AEBAC4FBCF640(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetPermissionSetProps_mB43CDF31F347065162C77B54BF0142BA5B63010E() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetPermissionSetProps_mF8A9A9F4FDC2957C5AF790E036FBC4B717B7B10B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefinePinvokeMap_m0DD678F08E5977584FE6CEEF25147E1729F209C8() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefinePinvokeMap_m98DE7B0FEE8FCFB465626762F755AC72DDB8C9AE(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetPinvokeMap_mD583D16A1C15C1875BFEF9FFD2F8763F7CE9CC3B() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetPinvokeMap_m64672DE2BEAC7EDD3F1B457E0DDA2F2D3724BBEA(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DeletePinvokeMap_mB2830E96053E0D0BB58680F856C379201EB26746() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DeletePinvokeMap_m69E3AF92B21BADD3D914ABE027978B22295C750D(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineCustomAttribute_m9F1391E801E4B4ACBCAA48A8429A153905F84335() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineCustomAttribute_m633FF29A10714865D52FD9EA5E721CDB0864C32E(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetCustomAttributeValue_m8550F081EF4A051A561296B2008A3EDBD514A126() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetCustomAttributeValue_mBEA3FF5E5595B9FB2C94AF5E8C965927822C11EE(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineField_mE56800195E8939FD78D30E1BDBE7CB8620E14742() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineField_m9EBCB4985BE4A5E637A1763F81B096B5635DBDD2(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineProperty_mA493ECB6F90DBA24866EBE7317D29D20F58F6356() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineProperty_mD0C17F5AACEED4FFF6D684FC77B3F28C0B978D5A(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineParam_mFE9BAAFCDF3CD831D65EA006E078477CBE15CA04() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineParam_mA02A6EA65B7794E0B40C3639017505E9DF0D93C0(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetFieldProps_m1392A032B273A656A9DB6170BD43F82C98D0A426() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetFieldProps_mB9EAC700D3B6A80C2FDB1C5228707DED60822769(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetPropertyProps_m8A771699C360E7814CD1A39AB9076BF8DF99379F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetPropertyProps_m76DAF04EDFA4F14E4014D6A7B8F851DAEC369940(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetParamProps_m6DEB49C1E4B08CEE199A200B8F2E9A256438430F() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetParamProps_mBE59B653BB0767FBC43BFC84AE08B083D1841B0B(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___DefineSecurityAttributeSet_m3B5E6563D6C0307C8157FBD6E708488D6582DA9A() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___DefineSecurityAttributeSet_mDD7219420E038FCD22D6BEA61C262A9C18525808(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___ApplyEditAndContinue_m88628B3A6E59D46319599CDCAF8455BF9A524FCB() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___ApplyEditAndContinue_mF3B302C58DA56585D568C7D4D08CF9C3D99BCC58(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___TranslateSigWithScope_mE859C82A42E6E679F3B4FB9FC964758F739CDE19() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___TranslateSigWithScope_m8D7FDAFFDAEC1FFAC9E67625A161FD92A12E6818(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetMethodImplFlags_mC328A9AF6992FD67AA4917B32BB1BCC07A2F9C75() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetMethodImplFlags_m9C20240F03FEBCEA1EB2B515433C4BED8AE1FA6A(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___SetFieldRVA_m8B5474A9F496975F907A4F40D69176490A73D389() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___SetFieldRVA_mC616465B6AA84EBCDDF96E68B627B244007AD031(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___Merge_m40A0D34BFFE82FF3EC0D919455C47BA9D9B10DF0() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___Merge_m5938CF3D737166E434786FBC1117BDF65D2444ED(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetadataEmit___MergeEnd_m5BBADC57D9C3B58A5E07DBC3FE15129E13C17548() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10* __thisValue = (MetadataAdapterBase_tF161193C70121963483599468037AD25070E0B10*)GetManagedObjectInline();
			MetadataAdapterBase_Microsoft_DiaSymReader_IMetadataEmit___MergeEnd_m69131777D95B7E97F9C3392B18045CD3E3A5B6ED(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SymWriterMetadataAdapter_t581E8EB6D98C99D4E1CBF9680DC65180507A2B34_ComCallableWrapper(obj));
}
