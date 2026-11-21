#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Text.EncodingProvider[]
struct EncodingProviderU5BU5D_t8AF06004BC5735FC9F8F753028333581DB7ACE78;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.CodePagesEncodingProvider
struct CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Text.EncodingProvider
struct EncodingProvider_t3FDEB15BBA530A31E3E5B23F46600086C330CCA5;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncodingProvider_t3FDEB15BBA530A31E3E5B23F46600086C330CCA5_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB63B7FFAC946F24F2936D2AA37EF0BDE0A9C58B2 
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

// System.Text.EncodingProvider
struct EncodingProvider_t3FDEB15BBA530A31E3E5B23F46600086C330CCA5  : public RuntimeObject
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

// System.Text.CodePagesEncodingProvider
struct CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4  : public EncodingProvider_t3FDEB15BBA530A31E3E5B23F46600086C330CCA5
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// <Module>

// <Module>

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// System.Text.EncodingProvider
struct EncodingProvider_t3FDEB15BBA530A31E3E5B23F46600086C330CCA5_StaticFields
{
	// System.Object System.Text.EncodingProvider::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_0;
	// System.Text.EncodingProvider[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncodingProvider::s_providers
	EncodingProviderU5BU5D_t8AF06004BC5735FC9F8F753028333581DB7ACE78* ___s_providers_1;
};

// System.Text.EncodingProvider

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.CodePagesEncodingProvider
struct CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_StaticFields
{
	// System.Text.CodePagesEncodingProvider System.Text.CodePagesEncodingProvider::instance
	CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4* ___instance_2;
};

// System.Text.CodePagesEncodingProvider

// System.Int32

// System.Int32

// System.Void

// System.Void
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Text.EncodingProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodingProvider__ctor_m32068E7289CCB5EE85124141169520D99F75126D (EncodingProvider_t3FDEB15BBA530A31E3E5B23F46600086C330CCA5* __this, const RuntimeMethod* method) ;
// System.Void System.Text.CodePagesEncodingProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodePagesEncodingProvider__ctor_m0F681D6E5350E06E346745FA7EE8406E89C8CFB0 (CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.CodePagesEncodingProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodePagesEncodingProvider__ctor_m0F681D6E5350E06E346745FA7EE8406E89C8CFB0 (CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodingProvider_t3FDEB15BBA530A31E3E5B23F46600086C330CCA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EncodingProvider_t3FDEB15BBA530A31E3E5B23F46600086C330CCA5_il2cpp_TypeInfo_var);
		EncodingProvider__ctor_m32068E7289CCB5EE85124141169520D99F75126D(__this, NULL);
		return;
	}
}
// System.Text.EncodingProvider System.Text.CodePagesEncodingProvider::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EncodingProvider_t3FDEB15BBA530A31E3E5B23F46600086C330CCA5* CodePagesEncodingProvider_get_Instance_m3D58758EED68FDC554BE28C71E0C7050DA186DEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_il2cpp_TypeInfo_var);
		CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4* L_0 = ((CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_StaticFields*)il2cpp_codegen_static_fields_for(CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_il2cpp_TypeInfo_var))->___instance_2;
		return L_0;
	}
}
// System.Text.Encoding System.Text.CodePagesEncodingProvider::GetEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* CodePagesEncodingProvider_GetEncoding_m6DF946898DEBED20005B7F6ADF51893995562A6E (CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		return (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL;
	}
}
// System.Text.Encoding System.Text.CodePagesEncodingProvider::GetEncoding(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* CodePagesEncodingProvider_GetEncoding_m31DC9DF8795AD94923E2FB5C9837D688DA84C386 (CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4* __this, int32_t ___0_codepage, const RuntimeMethod* method) 
{
	{
		return (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL;
	}
}
// System.Void System.Text.CodePagesEncodingProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodePagesEncodingProvider__cctor_mAABA815919B88A30A18D1830A6250363C1BFDD87 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4* L_0 = (CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4*)il2cpp_codegen_object_new(CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CodePagesEncodingProvider__ctor_m0F681D6E5350E06E346745FA7EE8406E89C8CFB0(L_0, NULL);
		((CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_StaticFields*)il2cpp_codegen_static_fields_for(CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_il2cpp_TypeInfo_var))->___instance_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_StaticFields*)il2cpp_codegen_static_fields_for(CodePagesEncodingProvider_t584BE5C59EDB9750E60C2BAECD9C5C3C7DE47ED4_il2cpp_TypeInfo_var))->___instance_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
