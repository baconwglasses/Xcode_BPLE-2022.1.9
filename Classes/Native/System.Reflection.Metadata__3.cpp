#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Comparison`1<System.Int32>
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Func`1<System.Byte[]>
struct Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Reflection.Internal.ObjectPool`1<System.Byte[]>
struct ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927;
// System.Reflection.Internal.ObjectPool`1<System.Object>
struct ObjectPool_1_tAAF6D4968DE4BE22B48C469C2131BA782DA96293;
// System.Reflection.Internal.ObjectPool`1/Element<System.Byte[]>[]
struct ElementU5BU5D_tA1BBBBEE17EFAD1D69321A4182CEBC0917DCC001;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Reflection.Internal.ImmutableMemoryStream
struct ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IO.MemoryMappedFiles.MemoryMappedFile
struct MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441;
// System.IO.MemoryMappedFiles.MemoryMappedView
struct MemoryMappedView_t9A01367FF45D8DC3D4BA4B69663263D8CAA053BB;
// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor
struct MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51;
// System.Reflection.Metadata.MetadataStringDecoder
struct MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream
struct ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle
struct SafeMemoryMappedFileHandle_tFE722612D89E2FC5C5BE300C45F8B5588E598D81;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle
struct SafeMemoryMappedViewHandle_t4AF1B5F8EE03E577D267028C7BA3BF6D1507EB5F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Reflection.Internal.EncodingHelper/<>c
struct U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055;
// System.Reflection.Internal.EncodingHelper/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C;
// System.Reflection.Internal.EncodingHelper/Encoding_GetString
struct Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E;
// System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding
struct String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD;
// System.Reflection.Internal.MemoryBlock/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* AmbiguousMatchException_t74F105B42C618E39EEE32A52E79C24044604E70E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707____ImmutableArray_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B;
IL2CPP_EXTERN_C String_t* _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947;
IL2CPP_EXTERN_C String_t* _stringLiteralA4A0059CBA044F5946D17BE152E7CD02E0D1282A;
IL2CPP_EXTERN_C String_t* _stringLiteralC0DF4E97EAFA618B7EB614D740F681D5E525C7EA;
IL2CPP_EXTERN_C String_t* _stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m89052CD0450CDEC0AE040F2D1982E4DD33A12EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncodingHelper_GetStringUsingCreateStringFromEncoding_mD35B8DD4182BB621A3534232538314460B2193ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableArray_1_CopyTo_m3BFA0F90F33D23679784C28CB5E8361F8F66C063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableArray_1_get_Item_m5B8F9EE1FA79C18E7EAB44C33D0A865A4FF1B5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableMemoryStream_Seek_m9C8BA735F858886E5B3C754A0D08A1C0A5CB115B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableMemoryStream_SetLength_m1C89E8A11789E12DF441A296C37ABA9857FF1951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableMemoryStream_Write_m05ED0910BE33932A85310F6F9AB954F0734A2725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableMemoryStream_set_Position_m4E4833CC4EBB1BFAC6E16D69ED14AFE9DE25A425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMapLightUp_CreateViewAccessor_m56C3CBB62885B6A959A59617D77EFE981F8BB217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Allocate_mDE310931B75041D0A3653D6EE771AFD6D3DADC41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Free_mDBF82BC11029020B8B01E14D66B77E833AA611F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m2CA5E68F5B7F6A0E030658D0AE2710F1E3846652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyUnmanagedMemoryStream_Seek_m0A457FCA8599CED9C8B00C38442E1B4412F95B6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyUnmanagedMemoryStream_SetLength_mA639F8EC19C8F35B460076069C788D2610351268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyUnmanagedMemoryStream_Write_mA3BB0F2156829DD1B8123DAC227BB6019D3D8F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamExtensions_CopyTo_mAB508C247F7620DD48138BCB36B0924F2A6E43AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamExtensions_GetAndValidateSize_m30426B5CF90CD613518791F6995EB331DF47EDD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__16_0_m3F0C1F84A33D7D8FB47B265FCAEFF34B560C0E9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CLoadGetStringPlatformU3Eb__0_m5828AD6F707C431620DF124D633B9C4D9133064B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CBuildPtrTableU3Eb__0_m9A531D8BD92B9CFBA87BE3F8E1E185F40387C756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Internal.ObjectPool`1<System.Byte[]>
struct ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927  : public RuntimeObject
{
	// System.Reflection.Internal.ObjectPool`1/Element<T>[] System.Reflection.Internal.ObjectPool`1::_items
	ElementU5BU5D_tA1BBBBEE17EFAD1D69321A4182CEBC0917DCC001* ____items_0;
	// System.Func`1<T> System.Reflection.Internal.ObjectPool`1::_factory
	Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F* ____factory_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tFF34F35A6A69646F8F677CC3D93449E1C5990B1E  : public RuntimeObject
{
};

// System.Reflection.Internal.BitArithmetic
struct BitArithmetic_tDA82ACBCB944C832F872A817C0F55A6EA626960E  : public RuntimeObject
{
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
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

// System.Reflection.Internal.EncodingHelper
struct EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB  : public RuntimeObject
{
};

// System.Reflection.Internal.FileStreamReadLightUp
struct FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2  : public RuntimeObject
{
};

// System.Reflection.Internal.Hash
struct Hash_t32CAC9BF8DA1110C26256B6E2F0A3A4A239CBD32  : public RuntimeObject
{
};

// System.Reflection.Internal.ImmutableByteArrayInterop
struct ImmutableByteArrayInterop_tEB6AA3A7BE70832EC3FA57846314844E5F7C0FF1  : public RuntimeObject
{
};

// System.Reflection.Internal.LightUpHelper
struct LightUpHelper_t64979DE5A2C115044FF3E2D3956FC7D81B3FF644  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.Internal.MemoryMapLightUp
struct MemoryMapLightUp_t3CA0DD7762163EA35C7C860A435F6E0461FE4F62  : public RuntimeObject
{
};

// System.IO.MemoryMappedFiles.MemoryMappedFile
struct MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441  : public RuntimeObject
{
	// System.IO.FileStream System.IO.MemoryMappedFiles.MemoryMappedFile::stream
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___stream_0;
	// System.Boolean System.IO.MemoryMappedFiles.MemoryMappedFile::keepOpen
	bool ___keepOpen_1;
	// Microsoft.Win32.SafeHandles.SafeMemoryMappedFileHandle System.IO.MemoryMappedFiles.MemoryMappedFile::handle
	SafeMemoryMappedFileHandle_tFE722612D89E2FC5C5BE300C45F8B5588E598D81* ___handle_2;
};

// System.Reflection.Metadata.MetadataStringDecoder
struct MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63  : public RuntimeObject
{
	// System.Text.Encoding System.Reflection.Metadata.MetadataStringDecoder::<Encoding>k__BackingField
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CEncodingU3Ek__BackingField_0;
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

// System.Reflection.Internal.StreamExtensions
struct StreamExtensions_t2C2C2922EC8F51EEBC1D794C5A74A7E8A3B46F5F  : public RuntimeObject
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

// System.Reflection.Internal.EncodingHelper/<>c
struct U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055  : public RuntimeObject
{
};

// System.Reflection.Internal.EncodingHelper/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C  : public RuntimeObject
{
	// System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding System.Reflection.Internal.EncodingHelper/<>c__DisplayClass11_0::createStringFromEncoding
	String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* ___createStringFromEncoding_0;
};

// System.Reflection.Internal.MemoryBlock/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1  : public RuntimeObject
{
	// System.UInt32[] System.Reflection.Internal.MemoryBlock/<>c__DisplayClass42_0::unsortedReferences
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___unsortedReferences_0;
};

// System.Collections.Immutable.ImmutableArray`1<System.Byte>
struct ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 
{
	// T[] System.Collections.Immutable.ImmutableArray`1::array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.Internal.MemoryBlock
struct MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 
{
	// System.Byte* System.Reflection.Internal.MemoryBlock::Pointer
	uint8_t* ___Pointer_0;
	// System.Int32 System.Reflection.Internal.MemoryBlock::Length
	int32_t ___Length_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t4F86476AEA6EB74D4BB6593791FA544F7A72B050 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t4F86476AEA6EB74D4BB6593791FA544F7A72B050__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tECD15701B9F8855393DDC9BA2167E53BE416C61D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tECD15701B9F8855393DDC9BA2167E53BE416C61D__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160
struct __StaticArrayInitTypeSizeU3D160_t01D5228931A728FA0B1534B8AC2A8AC8E978F4EC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D160_t01D5228931A728FA0B1534B8AC2A8AC8E978F4EC__padding[160];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=22
struct __StaticArrayInitTypeSizeU3D22_t33AFEDA97A671610320183C5EA499763EEDDE1AE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D22_t33AFEDA97A671610320183C5EA499763EEDDE1AE__padding[22];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=25
struct __StaticArrayInitTypeSizeU3D25_t068B30AE9D3B5414CADB2515BDA4165349FF625D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D25_t068B30AE9D3B5414CADB2515BDA4165349FF625D__padding[25];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=27
struct __StaticArrayInitTypeSizeU3D27_t74C537A9C34E40D33A4CDAFDF72F96BEF4984D57 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D27_t74C537A9C34E40D33A4CDAFDF72F96BEF4984D57__padding[27];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_tF5EFDB2C5AC6BAAA00D32000F3DA3496A04630C7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tF5EFDB2C5AC6BAAA00D32000F3DA3496A04630C7__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
struct __StaticArrayInitTypeSizeU3D5_t8DE01FA269F07B1BD7326560AF804DB5EA6A8D6F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_t8DE01FA269F07B1BD7326560AF804DB5EA6A8D6F__padding[5];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7
struct __StaticArrayInitTypeSizeU3D7_t98B629C5FB17930AA4E3F6424A94B1911861097C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D7_t98B629C5FB17930AA4E3F6424A94B1911861097C__padding[7];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileAccess
struct FileAccess_t3992FF4CCC61971B804DD291F06F696C3CF33C30 
{
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;
};

// System.IO.HandleInheritability
struct HandleInheritability_t8D116C033AD711B537E186ABEDFE8D86391700F3 
{
	// System.Int32 System.IO.HandleInheritability::value__
	int32_t ___value___2;
};

// System.Reflection.Internal.ImmutableMemoryStream
struct ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Collections.Immutable.ImmutableArray`1<System.Byte> System.Reflection.Internal.ImmutableMemoryStream::_array
	ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ____array_5;
	// System.Int32 System.Reflection.Internal.ImmutableMemoryStream::_position
	int32_t ____position_6;
};

// System.IO.MemoryMappedFiles.MemoryMappedFileAccess
struct MemoryMappedFileAccess_t8AE8CA547316DAA0815AB4F066873B56C643CC83 
{
	// System.Int32 System.IO.MemoryMappedFiles.MemoryMappedFileAccess::value__
	int32_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_tDAEC8B3C5986B042F8F9B0845505D0FC15F92E68 
{
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;
};

// System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream
struct ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte* System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::_data
	uint8_t* ____data_5;
	// System.Int32 System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::_length
	int32_t ____length_6;
	// System.Int32 System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::_position
	int32_t ____position_7;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.IO.SeekOrigin
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;
};

// System.StringComparison
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;
};

// System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion
struct ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte[] System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion::UnderlyingArray
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___UnderlyingArray_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___UnderlyingArray_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Collections.Immutable.ImmutableArray`1<System.Byte> System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion::ImmutableArray
			ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___ImmutableArray_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___ImmutableArray_1_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion
struct ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___UnderlyingArray_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___UnderlyingArray_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___ImmutableArray_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___ImmutableArray_1_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion
struct ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___UnderlyingArray_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppSafeArray/*NONE*/* ___UnderlyingArray_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___ImmutableArray_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___ImmutableArray_1_forAlignmentOnly;
		};
	};
};

// System.Reflection.Internal.MemoryBlock/FastComparisonResult
struct FastComparisonResult_tD6121FDB7AEE54252C068D9980E93009AB32111E 
{
	// System.Int32 System.Reflection.Internal.MemoryBlock/FastComparisonResult::value__
	int32_t ___value___2;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.IO.UnmanagedMemoryAccessor
struct UnmanagedMemoryAccessor_tCECEC3E71AD982EB9040647616D5F193B8CAF0A5  : public RuntimeObject
{
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryAccessor::_buffer
	SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE* ____buffer_0;
	// System.Int64 System.IO.UnmanagedMemoryAccessor::_offset
	int64_t ____offset_1;
	// System.Int64 System.IO.UnmanagedMemoryAccessor::_capacity
	int64_t ____capacity_2;
	// System.IO.FileAccess System.IO.UnmanagedMemoryAccessor::_access
	int32_t ____access_3;
	// System.Boolean System.IO.UnmanagedMemoryAccessor::_isOpen
	bool ____isOpen_4;
	// System.Boolean System.IO.UnmanagedMemoryAccessor::_canRead
	bool ____canRead_5;
	// System.Boolean System.IO.UnmanagedMemoryAccessor::_canWrite
	bool ____canWrite_6;
};

// System.Comparison`1<System.Int32>
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89  : public MulticastDelegate_t
{
};

// System.Func`1<System.Byte[]>
struct Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F  : public MulticastDelegate_t
{
};

// System.Reflection.AmbiguousMatchException
struct AmbiguousMatchException_t74F105B42C618E39EEE32A52E79C24044604E70E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor
struct MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51  : public UnmanagedMemoryAccessor_tCECEC3E71AD982EB9040647616D5F193B8CAF0A5
{
	// System.IO.MemoryMappedFiles.MemoryMappedView System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::m_view
	MemoryMappedView_t9A01367FF45D8DC3D4BA4B69663263D8CAA053BB* ___m_view_7;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
	// System.UIntPtr System.Runtime.InteropServices.SafeBuffer::_numBytes
	uintptr_t ____numBytes_7;
};

// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.Internal.EncodingHelper/Encoding_GetString
struct Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E  : public MulticastDelegate_t
{
};

// System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding
struct String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle
struct SafeMemoryMappedViewHandle_t4AF1B5F8EE03E577D267028C7BA3BF6D1507EB5F  : public SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE
{
	// System.IntPtr Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle::mmap_handle
	intptr_t ___mmap_handle_8;
};

// System.Reflection.Internal.ObjectPool`1<System.Byte[]>

// System.Reflection.Internal.ObjectPool`1<System.Byte[]>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tFF34F35A6A69646F8F677CC3D93449E1C5990B1E_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::22E28E709DF793CE9C08BD5FD04302DD85EBBE5181309792D059E080BF5A2992
	__StaticArrayInitTypeSizeU3D3_tF5EFDB2C5AC6BAAA00D32000F3DA3496A04630C7 ___22E28E709DF793CE9C08BD5FD04302DD85EBBE5181309792D059E080BF5A2992_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=25 <PrivateImplementationDetails>::3CA755F008717485A633F20718A228E4E6655894BE2333F144A31EE7AFB5E650
	__StaticArrayInitTypeSizeU3D25_t068B30AE9D3B5414CADB2515BDA4165349FF625D ___3CA755F008717485A633F20718A228E4E6655894BE2333F144A31EE7AFB5E650_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::3D9B507B4E8B3D8B2C853E5AFBEC4F9E74A112EFFE222CFB04B34326619DCBBA
	__StaticArrayInitTypeSizeU3D5_t8DE01FA269F07B1BD7326560AF804DB5EA6A8D6F ___3D9B507B4E8B3D8B2C853E5AFBEC4F9E74A112EFFE222CFB04B34326619DCBBA_2;
	// System.Int32 <PrivateImplementationDetails>::738D99562EED8E3D24E03E90ABD33E44800967F797D4CD30D712664EA5AB6B9E
	int32_t ___738D99562EED8E3D24E03E90ABD33E44800967F797D4CD30D712664EA5AB6B9E_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::768E33C10368B83610534F464992D4C8A6A6B812EFA31CB4E9C6368E4E30D1FC
	__StaticArrayInitTypeSizeU3D3_tF5EFDB2C5AC6BAAA00D32000F3DA3496A04630C7 ___768E33C10368B83610534F464992D4C8A6A6B812EFA31CB4E9C6368E4E30D1FC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8D0C69BB9AAC20D895AEDA5E8658028CA4D3D7CDB2547AF34647088E5A86B0C0
	__StaticArrayInitTypeSizeU3D16_tECD15701B9F8855393DDC9BA2167E53BE416C61D ___8D0C69BB9AAC20D895AEDA5E8658028CA4D3D7CDB2547AF34647088E5A86B0C0_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::8F744B100D62871A398ECA17F74C5C4D8AA2D85CE1E4E7EC56D73AC51FA76EFB
	__StaticArrayInitTypeSizeU3D128_t4F86476AEA6EB74D4BB6593791FA544F7A72B050 ___8F744B100D62871A398ECA17F74C5C4D8AA2D85CE1E4E7EC56D73AC51FA76EFB_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160 <PrivateImplementationDetails>::933598639CBAA1DE502F80D2FD1DB78F13C8D7BB64A5FDC1BC73AC0B5CE4F5CA
	__StaticArrayInitTypeSizeU3D160_t01D5228931A728FA0B1534B8AC2A8AC8E978F4EC ___933598639CBAA1DE502F80D2FD1DB78F13C8D7BB64A5FDC1BC73AC0B5CE4F5CA_7;
	// System.Int64 <PrivateImplementationDetails>::971150DD73DC318E68A98CCE9B91AC7DEA2D43C562B4F5A9A2F4272C7E29477E
	int64_t ___971150DD73DC318E68A98CCE9B91AC7DEA2D43C562B4F5A9A2F4272C7E29477E_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A77401FC0BF7BF3DAC6B205E004909E685D45C43A903D9EB3C79BD8B1265D258
	__StaticArrayInitTypeSizeU3D3_tF5EFDB2C5AC6BAAA00D32000F3DA3496A04630C7 ___A77401FC0BF7BF3DAC6B205E004909E685D45C43A903D9EB3C79BD8B1265D258_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::BFDF5E72651B4EC588BD5FC6A9F17E9E0972248146BBACC10478F48D72F29B81
	__StaticArrayInitTypeSizeU3D128_t4F86476AEA6EB74D4BB6593791FA544F7A72B050 ___BFDF5E72651B4EC588BD5FC6A9F17E9E0972248146BBACC10478F48D72F29B81_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=22 <PrivateImplementationDetails>::C4FE8FBE6726012F9932E780243283A23290E8177CBBEE08F4264182A4F06398
	__StaticArrayInitTypeSizeU3D22_t33AFEDA97A671610320183C5EA499763EEDDE1AE ___C4FE8FBE6726012F9932E780243283A23290E8177CBBEE08F4264182A4F06398_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7 <PrivateImplementationDetails>::D5FA77FA22BBACFB9D9A358464A6FD2976205C8050BABCEB8DF0702EA76A60A0
	__StaticArrayInitTypeSizeU3D7_t98B629C5FB17930AA4E3F6424A94B1911861097C ___D5FA77FA22BBACFB9D9A358464A6FD2976205C8050BABCEB8DF0702EA76A60A0_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=25 <PrivateImplementationDetails>::F7FD6D20D96622C69E4780255FE389F944DC0DF4932BEB9E6C8BB5F0F0A9D15B
	__StaticArrayInitTypeSizeU3D25_t068B30AE9D3B5414CADB2515BDA4165349FF625D ___F7FD6D20D96622C69E4780255FE389F944DC0DF4932BEB9E6C8BB5F0F0A9D15B_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=27 <PrivateImplementationDetails>::FBED83E5688F001B49A3A132C6FE1BD098783C0D48577E9E168EA25043357625
	__StaticArrayInitTypeSizeU3D27_t74C537A9C34E40D33A4CDAFDF72F96BEF4984D57 ___FBED83E5688F001B49A3A132C6FE1BD098783C0D48577E9E168EA25043357625_14;
};

// <PrivateImplementationDetails>

// System.Reflection.Internal.BitArithmetic

// System.Reflection.Internal.BitArithmetic

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.BitConverter

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

// System.Reflection.Internal.EncodingHelper
struct EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_StaticFields
{
	// System.Reflection.Internal.ObjectPool`1<System.Byte[]> System.Reflection.Internal.EncodingHelper::s_pool
	ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927* ___s_pool_0;
	// System.Reflection.Internal.EncodingHelper/Encoding_GetString System.Reflection.Internal.EncodingHelper::s_getStringPlatform
	Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* ___s_getStringPlatform_1;
};

// System.Reflection.Internal.EncodingHelper

// System.Reflection.Internal.FileStreamReadLightUp
struct FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_StaticFields
{
	// System.Boolean System.Reflection.Internal.FileStreamReadLightUp::readFileNotAvailable
	bool ___readFileNotAvailable_0;
};

// System.Reflection.Internal.FileStreamReadLightUp

// System.Reflection.Internal.Hash

// System.Reflection.Internal.Hash

// System.Reflection.Internal.ImmutableByteArrayInterop

// System.Reflection.Internal.ImmutableByteArrayInterop

// System.Reflection.Internal.LightUpHelper

// System.Reflection.Internal.LightUpHelper

// System.Reflection.Internal.MemoryMapLightUp

// System.Reflection.Internal.MemoryMapLightUp

// System.IO.MemoryMappedFiles.MemoryMappedFile

// System.IO.MemoryMappedFiles.MemoryMappedFile

// System.Reflection.Metadata.MetadataStringDecoder
struct MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63_StaticFields
{
	// System.Reflection.Metadata.MetadataStringDecoder System.Reflection.Metadata.MetadataStringDecoder::<DefaultUTF8>k__BackingField
	MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___U3CDefaultUTF8U3Ek__BackingField_1;
};

// System.Reflection.Metadata.MetadataStringDecoder

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// System.IO.Path

// System.Reflection.Internal.StreamExtensions

// System.Reflection.Internal.StreamExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Reflection.Internal.EncodingHelper/<>c
struct U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_StaticFields
{
	// System.Reflection.Internal.EncodingHelper/<>c System.Reflection.Internal.EncodingHelper/<>c::<>9
	U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055* ___U3CU3E9_0;
};

// System.Reflection.Internal.EncodingHelper/<>c

// System.Reflection.Internal.EncodingHelper/<>c__DisplayClass11_0

// System.Reflection.Internal.EncodingHelper/<>c__DisplayClass11_0

// System.Reflection.Internal.MemoryBlock/<>c__DisplayClass42_0

// System.Reflection.Internal.MemoryBlock/<>c__DisplayClass42_0

// System.Collections.Immutable.ImmutableArray`1<System.Byte>
struct ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_StaticFields
{
	// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1::Empty
	ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___Empty_0;
};

// System.Collections.Immutable.ImmutableArray`1<System.Byte>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.Internal.MemoryBlock

// System.Reflection.Internal.MemoryBlock

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=22

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=22

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=25

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=25

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=27

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=27

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=7

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.HandleInheritability

// System.IO.HandleInheritability

// System.Reflection.Internal.ImmutableMemoryStream

// System.Reflection.Internal.ImmutableMemoryStream

// System.IO.MemoryMappedFiles.MemoryMappedFileAccess

// System.IO.MemoryMappedFiles.MemoryMappedFileAccess

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream

// System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Runtime.InteropServices.SafeHandle

// System.Runtime.InteropServices.SafeHandle

// System.IO.SeekOrigin

// System.IO.SeekOrigin

// System.StringComparison

// System.StringComparison

// System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion

// System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion

// System.Reflection.Internal.MemoryBlock/FastComparisonResult

// System.Reflection.Internal.MemoryBlock/FastComparisonResult

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_6;
};

// System.IO.FileStream

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Comparison`1<System.Int32>

// System.Comparison`1<System.Int32>

// System.Func`1<System.Byte[]>

// System.Func`1<System.Byte[]>

// System.Reflection.AmbiguousMatchException

// System.Reflection.AmbiguousMatchException

// System.ArgumentException

// System.ArgumentException

// System.IO.IOException

// System.IO.IOException

// System.InvalidOperationException

// System.InvalidOperationException

// System.MemberAccessException

// System.MemberAccessException

// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor

// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor

// System.NotSupportedException

// System.NotSupportedException

// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE_StaticFields
{
	// System.UIntPtr System.Runtime.InteropServices.SafeBuffer::Uninitialized
	uintptr_t ___Uninitialized_6;
};

// System.Runtime.InteropServices.SafeBuffer

// Microsoft.Win32.SafeHandles.SafeFileHandle

// Microsoft.Win32.SafeHandles.SafeFileHandle

// System.Reflection.TypeInfo

// System.Reflection.TypeInfo

// System.UnauthorizedAccessException

// System.UnauthorizedAccessException

// System.Reflection.Internal.EncodingHelper/Encoding_GetString

// System.Reflection.Internal.EncodingHelper/Encoding_GetString

// System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding

// System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.OverflowException

// System.OverflowException

// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle

// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// T System.Reflection.Internal.ObjectPool`1<System.Object>::Allocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Allocate_mE5379B372614827EE6340D544EECD67C7ED09CF8_gshared (ObjectPool_1_tAAF6D4968DE4BE22B48C469C2131BA782DA96293* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.ObjectPool`1<System.Object>::Free(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Free_m1E74B69C0F89C3F84F7249F8D9C020E7162A3279_gshared (ObjectPool_1_tAAF6D4968DE4BE22B48C469C2131BA782DA96293* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.ObjectPool`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_mAA0CC8F7BB14A5F8B54EF13F1ACD3EC4E5157BC9_gshared (ObjectPool_1_tAAF6D4968DE4BE22B48C469C2131BA782DA96293* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_factory, const RuntimeMethod* method) ;
// T System.Collections.Immutable.ImmutableArray`1<System.Byte>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ImmutableArray_1_get_Item_m5B8F9EE1FA79C18E7EAB44C33D0A865A4FF1B5B3_gshared (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_gshared (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Byte>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableArray_1_CopyTo_m3BFA0F90F33D23679784C28CB5E8361F8F66C063_gshared (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43* __this, int32_t ___0_sourceIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_destinationIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C_gshared (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Int32>(T[],System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m89052CD0450CDEC0AE040F2D1982E4DD33A12EF8_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___1_comparison, const RuntimeMethod* method) ;

// System.Int32 System.Reflection.Internal.BitArithmetic::CountBits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitArithmetic_CountBits_m020600494F6F49EDA32F24B9E5FA005CD31F9CB6 (uint32_t ___0_v, const RuntimeMethod* method) ;
// System.String System.Reflection.Internal.EncodingHelper::DecodeUtf8Prefixed(System.Byte*,System.Int32,System.Byte[],System.Reflection.Metadata.MetadataStringDecoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncodingHelper_DecodeUtf8Prefixed_m40141BFC52DF55BF1868B5D2E6A742227F326CCD (uint8_t* ___0_bytes, int32_t ___1_byteCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_prefix, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___3_utf8Decoder, const RuntimeMethod* method) ;
// System.Byte[] System.Reflection.Internal.EncodingHelper::AcquireBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncodingHelper_AcquireBuffer_mAA099BD54B43D19BDD75429B94F202541926AA6F (int32_t ___0_byteCount, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.EncodingHelper::ReleaseBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodingHelper_ReleaseBuffer_m0168671D34C72306F3050936AECDD4E6CE410B9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// T System.Reflection.Internal.ObjectPool`1<System.Byte[]>::Allocate()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ObjectPool_1_Allocate_mDE310931B75041D0A3653D6EE771AFD6D3DADC41 (ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927*, const RuntimeMethod*))ObjectPool_1_Allocate_mE5379B372614827EE6340D544EECD67C7ED09CF8_gshared)(__this, method);
}
// System.Void System.Reflection.Internal.ObjectPool`1<System.Byte[]>::Free(T)
inline void ObjectPool_1_Free_mDBF82BC11029020B8B01E14D66B77E833AA611F4 (ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ObjectPool_1_Free_m1E74B69C0F89C3F84F7249F8D9C020E7162A3279_gshared)(__this, ___0_obj, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.Internal.LightUpHelper::GetMethod(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* LightUpHelper_GetMethod_m6C40B666CFAA471BB24341DD0AE8B54ACDF9CA49 (Type_t* ___0_type, String_t* ___1_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_parameterTypes, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.EncodingHelper/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mE86FAFED08810C08FEDA549E0B81B6D5529C0A1C (U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.EncodingHelper/Encoding_GetString::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoding_GetString__ctor_m773319E2D85C4551AC342554018ACA4595F86C37 (Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding::Invoke(System.Byte*,System.Int32,System.Text.Encoding)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_inline (String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* __this, uint8_t* ___0_bytes, int32_t ___1_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mAA48933D49DC42717DD08485E7465CFCE054D498 (Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Reflection.Internal.ObjectPool`1<System.Byte[]>::.ctor(System.Func`1<T>)
inline void ObjectPool_1__ctor_m2CA5E68F5B7F6A0E030658D0AE2710F1E3846652 (ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927* __this, Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F* ___0_factory, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927*, Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F*, const RuntimeMethod*))ObjectPool_1__ctor_mAA0CC8F7BB14A5F8B54EF13F1ACD3EC4E5157BC9_gshared)(__this, ___0_factory, method);
}
// System.Reflection.Internal.EncodingHelper/Encoding_GetString System.Reflection.Internal.EncodingHelper::LoadGetStringPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* EncodingHelper_LoadGetStringPlatform_m84C59973E8A40795547A6813EF9C3E86FA690329 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Reflection.Internal.EncodingHelper::GetStringUsingCreateStringFromEncoding(System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding,System.Byte*,System.Int32,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncodingHelper_GetStringUsingCreateStringFromEncoding_mD35B8DD4182BB621A3534232538314460B2193ED (String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* ___0_createStringFromEncoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___3_encoding, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.EncodingHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m50251AD851C14B882389FDBE07B461F23148D21E (U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.SafeHandle System.Reflection.Internal.FileStreamReadLightUp::GetSafeFileHandle(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* FileStreamReadLightUp_GetSafeFileHandle_m386F3C272BE85A9DB3B27B9240A5B404A341C64C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Int32 Interop/Kernel32::ReadFile(System.Runtime.InteropServices.SafeHandle,System.Byte*,System.Int32,System.Int32&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kernel32_ReadFile_m3208597565E31C4525FD15B35F66DFB18B6BD973 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* ___0_handle, uint8_t* ___1_bytes, int32_t ___2_numBytesToRead, int32_t* ___3_numBytesRead, intptr_t ___4_mustBeZero, const RuntimeMethod* method) ;
// T System.Collections.Immutable.ImmutableArray`1<System.Byte>::get_Item(System.Int32)
inline uint8_t ImmutableArray_1_get_Item_m5B8F9EE1FA79C18E7EAB44C33D0A865A4FF1B5B3 (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43*, int32_t, const RuntimeMethod*))ImmutableArray_1_get_Item_m5B8F9EE1FA79C18E7EAB44C33D0A865A4FF1B5B3_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Byte>::get_Length()
inline int32_t ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87 (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43*, const RuntimeMethod*))ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_gshared)(__this, method);
}
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Byte>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
inline void ImmutableArray_1_CopyTo_m3BFA0F90F33D23679784C28CB5E8361F8F66C063 (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43* __this, int32_t ___0_sourceIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_destinationIndex, int32_t ___3_length, const RuntimeMethod* method)
{
	((  void (*) (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ImmutableArray_1_CopyTo_m3BFA0F90F33D23679784C28CB5E8361F8F66C063_gshared)(__this, ___0_sourceIndex, ___1_destination, ___2_destinationIndex, ___3_length, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.RuntimeReflectionExtensions::GetRuntimeMethod(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* RuntimeReflectionExtensions_GetRuntimeMethod_m4759237A7FCCC75A536DB354345AFB0E44687B3D (Type_t* ___0_type, String_t* ___1_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_parameters, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.MemoryBlock::.ctor(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock__ctor_m8330CA8C4F3EF646DDBEF453060F91762AE1EF1E (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, uint8_t* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Reflection.Throw::OutOfBounds()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Throw_OutOfBounds_mA9594949C36427E7EA8194E19C96DBC7E1D47859 (const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.MemoryBlock::CheckBounds(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method) ;
// System.Reflection.Internal.MemoryBlock System.Reflection.Internal.MemoryBlock::GetMemoryBlockAt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 MemoryBlock_GetMemoryBlockAt_mED806FBD911E80CAB31DD69D0D0609A7656C21A7 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Byte System.Reflection.Internal.MemoryBlock::PeekByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MemoryBlock_PeekByte_m928ABFC51CBB22B83AA6C26AC39C8F65CCD5D9BF (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.UInt32 System.Reflection.Internal.MemoryBlock::PeekUInt32(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryBlock_PeekUInt32_m9A9BC388B26AD5D3C6AB202D80C0B97AD5C479D0_inline (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.Void System.Reflection.Throw::ValueOverflow()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Throw_ValueOverflow_m816A4EDEDBD0CF7C043D0D99545EAEA0D20C70F6 (const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::PeekInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_PeekInt32_m25966E85A7FF24823F7F02BA5313BD3DC1DEF77D (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::PeekCompressedInteger(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_PeekCompressedInteger_m4D4F6570A2013AE787E31AC46DCC58B8F3593096 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t* ___1_numberOfBytesRead, const RuntimeMethod* method) ;
// System.UInt16 System.Reflection.Internal.MemoryBlock::PeekUInt16(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t MemoryBlock_PeekUInt16_m747FC62519D3F342CD5272CD7F056898008C8E60_inline (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.UInt32 System.Reflection.Internal.MemoryBlock::PeekReferenceUnchecked(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method) ;
// System.UInt32 System.Reflection.Internal.MemoryBlock::PeekTaggedReference(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MemoryBlock_PeekTaggedReference_m40B9D9B6887258EA3DDAC67AE97894AFF02E34B5 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Metadata.Ecma335.TokenTypeIds::IsValidRowId(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TokenTypeIds_IsValidRowId_mB6BB88FC1197DCC8EA83C23C6A5E9C9B942BDB18 (uint32_t ___0_rowId, const RuntimeMethod* method) ;
// System.Void System.Reflection.Throw::ReferenceOverflow()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Throw_ReferenceOverflow_mCEFBC69F94ACD64C5CE4FD9AFEDEE8DA05B8FED0 (const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::PeekReference(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_PeekReference_mB5C3E17B3BE51AA991015CCAF12D2C45158B298A (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Metadata.Ecma335.HeapHandleType::IsValidHeapOffset(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HeapHandleType_IsValidHeapOffset_mC721331E5DE37AF4FA11122D5A27C862425152C1 (uint32_t ___0_offset, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::PeekHeapReference(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_PeekHeapReference_m3E79F40CAF025B95DCCA20751E5BCAF7B262D505 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130 (Guid_t* __this, int32_t ___0_a, int16_t ___1_b, int16_t ___2_c, uint8_t ___3_d, uint8_t ___4_e, uint8_t ___5_f, uint8_t ___6_g, uint8_t ___7_h, uint8_t ___8_i, uint8_t ___9_j, uint8_t ___10_k, const RuntimeMethod* method) ;
// System.Guid System.Reflection.Internal.MemoryBlock::PeekGuid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t MemoryBlock_PeekGuid_mF9739B53598DE9B13CA1BD31E72D45ED3B7DF5B8 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0 (const RuntimeMethod* method) ;
// System.String System.Text.Encoding::GetString(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Encoding_GetString_m42BFF0862341DCD5289A7D75B5D7A22CE9690EAD (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* __this, uint8_t* ___0_bytes, int32_t ___1_byteCount, const RuntimeMethod* method) ;
// System.String System.Reflection.Internal.MemoryBlock::PeekUtf16(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemoryBlock_PeekUtf16_m442BB94B90F23191004327C56EDE6963B0550AA2 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.Reflection.Internal.MemoryBlock::PeekUtf8(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemoryBlock_PeekUtf8_m01823F029D4B2D0C2891D9636FBCBDEE194C5EFC (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::GetUtf8NullTerminatedLength(System.Int32,System.Int32&,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_GetUtf8NullTerminatedLength_m8C8FCB04C8C773CB6B39792D09FAC2ED1FF3FEC4 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t* ___1_numberOfBytesRead, Il2CppChar ___2_terminator, const RuntimeMethod* method) ;
// System.String System.Reflection.Internal.EncodingHelper::DecodeUtf8(System.Byte*,System.Int32,System.Byte[],System.Reflection.Metadata.MetadataStringDecoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncodingHelper_DecodeUtf8_m4E030FA9BFE6BE043D7F064B1200820C6A19C781 (uint8_t* ___0_bytes, int32_t ___1_byteCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_prefix, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___3_utf8Decoder, const RuntimeMethod* method) ;
// System.String System.Reflection.Internal.MemoryBlock::PeekUtf8NullTerminated(System.Int32,System.Byte[],System.Reflection.Metadata.MetadataStringDecoder,System.Int32&,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemoryBlock_PeekUtf8NullTerminated_m8D2E894C3A38E18A61A3430F1AACFAC4A8CCFC7C (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_prefix, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___2_utf8Decoder, int32_t* ___3_numberOfBytesRead, Il2CppChar ___4_terminator, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::Utf8NullTerminatedOffsetOfAsciiChar(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_Utf8NullTerminatedOffsetOfAsciiChar_m90CD4AAE28673214C793369A555CA50DBEE62B8D (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_startOffset, Il2CppChar ___1_asciiChar, const RuntimeMethod* method) ;
// System.Reflection.Internal.MemoryBlock/FastComparisonResult System.Reflection.Internal.MemoryBlock::Utf8NullTerminatedFastCompare(System.Int32,System.String,System.Int32,System.Int32&,System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_Utf8NullTerminatedFastCompare_m0923AF65E727F81548966A0E95CC7603BBAB04A9 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, String_t* ___1_text, int32_t ___2_textStart, int32_t* ___3_firstDifferenceIndex, Il2CppChar ___4_terminator, bool ___5_ignoreCase, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Internal.MemoryBlock::Utf8NullTerminatedEquals(System.Int32,System.String,System.Reflection.Metadata.MetadataStringDecoder,System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_Utf8NullTerminatedEquals_mC3B93A7B117844AE4361C7E5C834945316702435 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, String_t* ___1_text, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___2_utf8Decoder, Il2CppChar ___3_terminator, bool ___4_ignoreCase, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Metadata.StringUtils::IgnoreCaseMask(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringUtils_IgnoreCaseMask_m6AEB828C2DDE72DC8E0543ECDCBCEF92474540C3 (bool ___0_ignoreCase, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Metadata.StringUtils::IsEqualAscii(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_IsEqualAscii_m10F76912502C6CCF81FAC8147E75753C0AB5E3DC (int32_t ___0_a, int32_t ___1_b, int32_t ___2_ignoreCaseMask, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Internal.MemoryBlock::Utf8NullTerminatedStringStartsWithAsciiPrefix(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_Utf8NullTerminatedStringStartsWithAsciiPrefix_m245CACC78EA8973ED6C6C5B71A82B02A1818A062 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, String_t* ___1_asciiPrefix, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::CompareUtf8NullTerminatedStringWithAsciiString(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_CompareUtf8NullTerminatedStringWithAsciiString_m0020C40B09BC4F107B47059F7372910EB4E023E7 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, String_t* ___1_asciiString, const RuntimeMethod* method) ;
// System.Byte[] System.Reflection.BlobUtilities::ReadBytes(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BlobUtilities_ReadBytes_mF54BF60093D10F01E9F2A8743F78EA9502B13813 (uint8_t* ___0_buffer, int32_t ___1_byteCount, const RuntimeMethod* method) ;
// System.Byte[] System.Reflection.Internal.MemoryBlock::PeekBytes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MemoryBlock_PeekBytes_m2EC98DC2D81CD5B272F31D5835E52C4B06E80A25 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::BinarySearch(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_BinarySearch_m7D6F9AA42B6B14C5F1C1166FA5E90E7CF595E3C5 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_asciiKeys, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::BinarySearchForSlot(System.Int32,System.Int32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_BinarySearchForSlot_mF6E11B78D2ABD2FFDAC449D2F329FF3D4F1D2F1F (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowCount, int32_t ___1_rowSize, int32_t ___2_referenceListOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::BinarySearchReference(System.Int32,System.Int32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_BinarySearchReference_mD20B9698AA5F6849B89045930A17FC67E3252C12 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowCount, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::BinarySearchReference(System.Int32[],System.Int32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_BinarySearchReference_m7B4072D398081A770E58DABC7E4EF90C54A308F1 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_ptrTable, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.MemoryBlock::BinarySearchReferenceRange(System.Int32,System.Int32,System.Int32,System.UInt32,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_BinarySearchReferenceRange_m2BB005FBF66690F9DAA746AF33BB393DD62AFBC3 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowCount, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, int32_t* ___5_startRowNumber, int32_t* ___6_endRowNumber, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.MemoryBlock::BinarySearchReferenceRange(System.Int32[],System.Int32,System.Int32,System.UInt32,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_BinarySearchReferenceRange_mC95400CD0D3AB0FF23439756A9355FB7E37221B4 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_ptrTable, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, int32_t* ___5_startRowNumber, int32_t* ___6_endRowNumber, const RuntimeMethod* method) ;
// System.Int32 System.Reflection.Internal.MemoryBlock::LinearSearchReference(System.Int32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_LinearSearchReference_m0A39B4C919226A13382B30D51ECF32C76321A368 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowSize, int32_t ___1_referenceOffset, uint32_t ___2_referenceValue, bool ___3_isReferenceSmall, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Internal.MemoryBlock::IsOrderedByReferenceAscending(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_IsOrderedByReferenceAscending_mA7E19DA78301C6997CBA2D762F466469A4949A48 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowSize, int32_t ___1_referenceOffset, bool ___2_isReferenceSmall, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.MemoryBlock/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_m1C2BD97CBE389B69E266F4C0710A422908BBAE41 (U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.Internal.MemoryBlock::ReadColumn(System.UInt32[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_ReadColumn_mA00D7CD0686A19E3ADFD7C0F579AD34F1037E6DD (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_result, int32_t ___1_rowSize, int32_t ___2_referenceOffset, bool ___3_isReferenceSmall, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Array::Sort<System.Int32>(T[],System.Comparison`1<T>)
inline void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m89052CD0450CDEC0AE040F2D1982E4DD33A12EF8 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___1_comparison, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*, const RuntimeMethod*))Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m89052CD0450CDEC0AE040F2D1982E4DD33A12EF8_gshared)(___0_array, ___1_comparison, method);
}
// System.Int32[] System.Reflection.Internal.MemoryBlock::BuildPtrTable(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* MemoryBlock_BuildPtrTable_mCEEB9BA7FB84D9BE7D013E11B1331AAEF4066CEC (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_numberOfRows, int32_t ___1_rowSize, int32_t ___2_referenceOffset, bool ___3_isReferenceSmall, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Internal.MemoryBlock::PeekHeapValueOffsetAndSize(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_PeekHeapValueOffsetAndSize_m4A151214840A8B6F124AD282329300E0DD0A8546 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_index, int32_t* ___1_offset, int32_t* ___2_size, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::CompareTo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mC96F15BE2B06C0268AD1D110D3251CE4DBA43907 (uint32_t* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.IO.MemoryMappedFiles.MemoryMappedFile System.IO.MemoryMappedFiles.MemoryMappedFile::CreateFromFile(System.IO.FileStream,System.String,System.Int64,System.IO.MemoryMappedFiles.MemoryMappedFileAccess,System.IO.HandleInheritability,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441* MemoryMappedFile_CreateFromFile_m858E57D20FAEF69E7D73E520A3D70669C940C6EC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___0_fileStream, String_t* ___1_mapName, int64_t ___2_capacity, int32_t ___3_access, int32_t ___4_inheritability, bool ___5_leaveOpen, const RuntimeMethod* method) ;
// System.IO.MemoryMappedFiles.MemoryMappedViewAccessor System.IO.MemoryMappedFiles.MemoryMappedFile::CreateViewAccessor(System.Int64,System.Int64,System.IO.MemoryMappedFiles.MemoryMappedFileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51* MemoryMappedFile_CreateViewAccessor_m39379226511F7E8344FE61D7696E64B454E0523C (MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441* __this, int64_t ___0_offset, int64_t ___1_size, int32_t ___2_access, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// Microsoft.Win32.SafeHandles.SafeMemoryMappedViewHandle System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::get_SafeMemoryMappedViewHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeMemoryMappedViewHandle_t4AF1B5F8EE03E577D267028C7BA3BF6D1507EB5F* MemoryMappedViewAccessor_get_SafeMemoryMappedViewHandle_m189BA8E33FB68481A2C0899A1B44CDCB278A032C (MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.MemoryMappedFiles.MemoryMappedViewAccessor::get_PointerOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MemoryMappedViewAccessor_get_PointerOffset_mC79ECF7D095DCCBA6A9EC01187B87FDCE4C56E82 (MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51* __this, const RuntimeMethod* method) ;
// System.String System.SR::get_UnexpectedStreamEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_UnexpectedStreamEnd_m41D78D957A499561C7B42F02868B3297931CC33B (const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// System.String System.SR::get_StreamTooLarge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_StreamTooLarge_m6C8FC4D21595727E92E69B517B964735BF2F5EDB (const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Reflection.Internal.BitArithmetic::CountBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitArithmetic_CountBits_mB0366ECC05D99EB77C2E955802A4C0546E33DA53 (int32_t ___0_v, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_v;
		int32_t L_1;
		L_1 = BitArithmetic_CountBits_m020600494F6F49EDA32F24B9E5FA005CD31F9CB6(L_0, NULL);
		return L_1;
	}
}
// System.Int32 System.Reflection.Internal.BitArithmetic::CountBits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitArithmetic_CountBits_m020600494F6F49EDA32F24B9E5FA005CD31F9CB6 (uint32_t ___0_v, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_v;
		uint32_t L_1 = ___0_v;
		___0_v = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)(((int32_t)((uint32_t)L_1>>1))&((int32_t)1431655765)))));
		uint32_t L_2 = ___0_v;
		uint32_t L_3 = ___0_v;
		___0_v = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_2&((int32_t)858993459))), ((int32_t)(((int32_t)((uint32_t)L_3>>2))&((int32_t)858993459)))));
		uint32_t L_4 = ___0_v;
		uint32_t L_5 = ___0_v;
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)((uint32_t)L_5>>4))))&((int32_t)252645135))), ((int32_t)16843009)))>>((int32_t)24)));
	}
}
// System.Int32 System.Reflection.Internal.BitArithmetic::CountBits(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitArithmetic_CountBits_m36058C246E58D17FD6F316D7F5836F84B1A5F145 (uint64_t ___0_v, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_v;
		uint64_t L_1 = ___0_v;
		___0_v = ((int64_t)il2cpp_codegen_subtract((int64_t)L_0, ((int64_t)(((int64_t)((uint64_t)L_1>>1))&((int64_t)6148914691236517205LL)))));
		uint64_t L_2 = ___0_v;
		uint64_t L_3 = ___0_v;
		___0_v = ((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_2&((int64_t)3689348814741910323LL))), ((int64_t)(((int64_t)((uint64_t)L_3>>2))&((int64_t)3689348814741910323LL)))));
		uint64_t L_4 = ___0_v;
		uint64_t L_5 = ___0_v;
		return ((int32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)L_4, ((int64_t)((uint64_t)L_5>>4))))&((int64_t)1085102592571150095LL))), ((int64_t)72340172838076673LL)))>>((int32_t)56))));
	}
}
// System.Int32 System.Reflection.Internal.BitArithmetic::Align(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitArithmetic_Align_mADDD8F8945CBA1BB32C02B7ACCC48DBC6F7FA6C7 (int32_t ___0_position, int32_t ___1_alignment, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_position;
		int32_t L_1 = ___1_alignment;
		V_0 = ((int32_t)(L_0&((~((int32_t)il2cpp_codegen_subtract(L_1, 1))))));
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_position;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_000d:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_alignment;
		return ((int32_t)il2cpp_codegen_add(L_5, L_6));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Reflection.Internal.EncodingHelper::DecodeUtf8(System.Byte*,System.Int32,System.Byte[],System.Reflection.Metadata.MetadataStringDecoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncodingHelper_DecodeUtf8_m4E030FA9BFE6BE043D7F064B1200820C6A19C781 (uint8_t* ___0_bytes, int32_t ___1_byteCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_prefix, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___3_utf8Decoder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_prefix;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		uint8_t* L_1 = ___0_bytes;
		int32_t L_2 = ___1_byteCount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_prefix;
		MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* L_4 = ___3_utf8Decoder;
		il2cpp_codegen_runtime_class_init_inline(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = EncodingHelper_DecodeUtf8Prefixed_m40141BFC52DF55BF1868B5D2E6A742227F326CCD(L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_000d:
	{
		int32_t L_6 = ___1_byteCount;
		if (L_6)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_7;
	}

IL_0016:
	{
		MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* L_8 = ___3_utf8Decoder;
		uint8_t* L_9 = ___0_bytes;
		int32_t L_10 = ___1_byteCount;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = VirtualFuncInvoker2< String_t*, uint8_t*, int32_t >::Invoke(4 /* System.String System.Reflection.Metadata.MetadataStringDecoder::GetString(System.Byte*,System.Int32) */, L_8, L_9, L_10);
		return L_11;
	}
}
// System.String System.Reflection.Internal.EncodingHelper::DecodeUtf8Prefixed(System.Byte*,System.Int32,System.Byte[],System.Reflection.Metadata.MetadataStringDecoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncodingHelper_DecodeUtf8Prefixed_m40141BFC52DF55BF1868B5D2E6A742227F326CCD (uint8_t* ___0_bytes, int32_t ___1_byteCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_prefix, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___3_utf8Decoder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	{
		int32_t L_0 = ___1_byteCount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___2_prefix;
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length))));
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_000f:
	{
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = EncodingHelper_AcquireBuffer_mAA099BD54B43D19BDD75429B94F202541926AA6F(L_4, NULL);
		V_1 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_prefix;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck((RuntimeArray*)L_6);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_6, (RuntimeArray*)L_7, 0, NULL);
		uint8_t* L_8 = ___0_bytes;
		intptr_t L_9;
		L_9 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_prefix;
		NullCheck(L_11);
		int32_t L_12 = ___1_byteCount;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		uint8_t* L_14 = V_4;
		V_3 = (uint8_t*)((uintptr_t)L_14);
		MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* L_15 = ___3_utf8Decoder;
		uint8_t* L_16 = V_3;
		int32_t L_17 = V_0;
		NullCheck(L_15);
		String_t* L_18;
		L_18 = VirtualFuncInvoker2< String_t*, uint8_t*, int32_t >::Invoke(4 /* System.String System.Reflection.Metadata.MetadataStringDecoder::GetString(System.Byte*,System.Int32) */, L_15, L_16, L_17);
		V_2 = L_18;
		V_4 = (uint8_t*)((uintptr_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		EncodingHelper_ReleaseBuffer_m0168671D34C72306F3050936AECDD4E6CE410B9F(L_19, NULL);
		String_t* L_20 = V_2;
		return L_20;
	}
}
// System.Byte[] System.Reflection.Internal.EncodingHelper::AcquireBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EncodingHelper_AcquireBuffer_mAA099BD54B43D19BDD75429B94F202541926AA6F (int32_t ___0_byteCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Allocate_mDE310931B75041D0A3653D6EE771AFD6D3DADC41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_byteCount;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)200))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_byteCount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		return L_2;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927* L_3 = ((EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_StaticFields*)il2cpp_codegen_static_fields_for(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var))->___s_pool_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ObjectPool_1_Allocate_mDE310931B75041D0A3653D6EE771AFD6D3DADC41(L_3, ObjectPool_1_Allocate_mDE310931B75041D0A3653D6EE771AFD6D3DADC41_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void System.Reflection.Internal.EncodingHelper::ReleaseBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodingHelper_ReleaseBuffer_m0168671D34C72306F3050936AECDD4E6CE410B9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Free_mDBF82BC11029020B8B01E14D66B77E833AA611F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		NullCheck(L_0);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)((int32_t)200)))))
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927* L_1 = ((EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_StaticFields*)il2cpp_codegen_static_fields_for(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var))->___s_pool_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_buffer;
		NullCheck(L_1);
		ObjectPool_1_Free_mDBF82BC11029020B8B01E14D66B77E833AA611F4(L_1, L_2, ObjectPool_1_Free_mDBF82BC11029020B8B01E14D66B77E833AA611F4_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Reflection.Internal.EncodingHelper/Encoding_GetString System.Reflection.Internal.EncodingHelper::LoadGetStringPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* EncodingHelper_LoadGetStringPlatform_m84C59973E8A40795547A6813EF9C3E86FA690329 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CLoadGetStringPlatformU3Eb__0_m5828AD6F707C431620DF124D633B9C4D9133064B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4A0059CBA044F5946D17BE152E7CD02E0D1282A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0DF4E97EAFA618B7EB614D740F681D5E525C7EA);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	MethodInfo_t* V_4 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_5 = NULL;
	U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_5);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = L_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_8);
		MethodInfo_t* L_9;
		L_9 = LightUpHelper_GetMethod_m6C40B666CFAA471BB24341DD0AE8B54ACDF9CA49(L_1, _stringLiteralA4A0059CBA044F5946D17BE152E7CD02E0D1282A, L_6, NULL);
		V_0 = L_9;
		MethodInfo_t* L_10 = V_0;
		bool L_11;
		L_11 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_10, (MethodInfo_t*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0077;
		}
	}
	{
		MethodInfo_t* L_12 = V_0;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(40 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	try
	{// begin try (depth: 1)
		MethodInfo_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_17);
		Delegate_t* L_20;
		L_20 = VirtualFuncInvoker2< Delegate_t*, Type_t*, RuntimeObject* >::Invoke(45 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type,System.Object) */, L_17, L_19, NULL);
		V_2 = ((Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E*)CastclassSealed((RuntimeObject*)L_20, Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E_il2cpp_TypeInfo_var));
		goto IL_0175;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0074;
		}
		throw e;
	}

CATCH_0071:
	{// begin catch(System.MemberAccessException)
		MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC* L_21 = ((MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC*)IL2CPP_GET_ACTIVE_EXCEPTION(MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0077;
	}// end catch (depth: 1)

CATCH_0074:
	{// begin catch(System.InvalidOperationException)
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = ((InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0077;
	}// end catch (depth: 1)

IL_0077:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_25;
		L_25 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_24, NULL);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker1< RuntimeObject*, String_t* >::Invoke(137 /* System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> System.Reflection.TypeInfo::GetDeclaredMethods(System.String) */, L_25, _stringLiteralC0DF4E97EAFA618B7EB614D740F681D5E525C7EA);
		V_1 = L_26;
		RuntimeObject* L_27 = V_1;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C_il2cpp_TypeInfo_var, L_27);
		V_3 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0169:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_29 = V_3;
					if (!L_29)
					{
						goto IL_0172;
					}
				}
				{
					RuntimeObject* L_30 = V_3;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_0172:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_015c_1;
			}

IL_009d_1:
			{
				RuntimeObject* L_31 = V_3;
				NullCheck(L_31);
				MethodInfo_t* L_32;
				L_32 = InterfaceFuncInvoker0< MethodInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6_il2cpp_TypeInfo_var, L_31);
				V_4 = L_32;
				MethodInfo_t* L_33 = V_4;
				NullCheck(L_33);
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_34;
				L_34 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_33);
				V_5 = L_34;
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_35 = V_5;
				NullCheck(L_35);
				if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))) == ((uint32_t)3))))
				{
					goto IL_015c_1;
				}
			}
			{
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_36 = V_5;
				NullCheck(L_36);
				int32_t L_37 = 0;
				ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
				NullCheck(L_38);
				Type_t* L_39;
				L_39 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_38);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_41;
				L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
				bool L_42;
				L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
				if (!L_42)
				{
					goto IL_015c_1;
				}
			}
			{
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_43 = V_5;
				NullCheck(L_43);
				int32_t L_44 = 1;
				ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
				NullCheck(L_45);
				Type_t* L_46;
				L_46 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_45);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_48;
				L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
				bool L_49;
				L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
				if (!L_49)
				{
					goto IL_015c_1;
				}
			}
			{
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_50 = V_5;
				NullCheck(L_50);
				int32_t L_51 = 2;
				ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
				NullCheck(L_52);
				Type_t* L_53;
				L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_52);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_55;
				L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
				bool L_56;
				L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
				if (!L_56)
				{
					goto IL_015c_1;
				}
			}
			{
				MethodInfo_t* L_57 = V_4;
				NullCheck(L_57);
				Type_t* L_58;
				L_58 = VirtualFuncInvoker0< Type_t* >::Invoke(40 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_57);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				bool L_61;
				L_61 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_58, L_60, NULL);
				if (!L_61)
				{
					goto IL_015c_1;
				}
			}
			try
			{// begin try (depth: 2)
				U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C* L_62 = (U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C_il2cpp_TypeInfo_var);
				NullCheck(L_62);
				U3CU3Ec__DisplayClass11_0__ctor_mE86FAFED08810C08FEDA549E0B81B6D5529C0A1C(L_62, NULL);
				V_6 = L_62;
				U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C* L_63 = V_6;
				MethodInfo_t* L_64 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_66;
				L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
				NullCheck(L_64);
				Delegate_t* L_67;
				L_67 = VirtualFuncInvoker2< Delegate_t*, Type_t*, RuntimeObject* >::Invoke(45 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type,System.Object) */, L_64, L_66, NULL);
				NullCheck(L_63);
				L_63->___createStringFromEncoding_0 = ((String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD*)CastclassSealed((RuntimeObject*)L_67, String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&L_63->___createStringFromEncoding_0), (void*)((String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD*)CastclassSealed((RuntimeObject*)L_67, String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD_il2cpp_TypeInfo_var)));
				U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C* L_68 = V_6;
				Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* L_69 = (Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E*)il2cpp_codegen_object_new(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E_il2cpp_TypeInfo_var);
				NullCheck(L_69);
				Encoding_GetString__ctor_m773319E2D85C4551AC342554018ACA4595F86C37(L_69, L_68, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CLoadGetStringPlatformU3Eb__0_m5828AD6F707C431620DF124D633B9C4D9133064B_RuntimeMethod_var), NULL);
				V_2 = L_69;
				goto IL_0175;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0156_1;
				}
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0159_1;
				}
				throw e;
			}

CATCH_0156_1:
			{// begin catch(System.MemberAccessException)
				MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC* L_70 = ((MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC*)IL2CPP_GET_ACTIVE_EXCEPTION(MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC*));;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_015c_1;
			}// end catch (depth: 2)

CATCH_0159_1:
			{// begin catch(System.InvalidOperationException)
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_71 = ((InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*));;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_015c_1;
			}// end catch (depth: 2)

IL_015c_1:
			{
				RuntimeObject* L_72 = V_3;
				NullCheck(L_72);
				bool L_73;
				L_73 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_72);
				if (L_73)
				{
					goto IL_009d_1;
				}
			}
			{
				goto IL_0173;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0173:
	{
		return (Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E*)NULL;
	}

IL_0175:
	{
		Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* L_74 = V_2;
		return L_74;
	}
}
// System.String System.Reflection.Internal.EncodingHelper::GetStringUsingCreateStringFromEncoding(System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding,System.Byte*,System.Int32,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncodingHelper_GetStringUsingCreateStringFromEncoding_mD35B8DD4182BB621A3534232538314460B2193ED (String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* ___0_createStringFromEncoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___3_encoding, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___1_bytes;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncodingHelper_GetStringUsingCreateStringFromEncoding_mD35B8DD4182BB621A3534232538314460B2193ED_RuntimeMethod_var)));
	}

IL_0010:
	{
		int32_t L_2 = ___2_byteCount;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EncodingHelper_GetStringUsingCreateStringFromEncoding_mD35B8DD4182BB621A3534232538314460B2193ED_RuntimeMethod_var)));
	}

IL_001f:
	{
		String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* L_4 = ___0_createStringFromEncoding;
		uint8_t* L_5 = ___1_bytes;
		int32_t L_6 = ___2_byteCount;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ___3_encoding;
		NullCheck(L_4);
		String_t* L_8;
		L_8 = String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_inline(L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Void System.Reflection.Internal.EncodingHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodingHelper__cctor_m9F06B7237B340506ED8830048117BECFD633D952 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m2CA5E68F5B7F6A0E030658D0AE2710F1E3846652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__16_0_m3F0C1F84A33D7D8FB47B265FCAEFF34B560C0E9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_il2cpp_TypeInfo_var);
		U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055* L_0 = ((U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F* L_1 = (Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F*)il2cpp_codegen_object_new(Func_1_t1BFC7C2F19F56CD3E2110931FD2A06C06902B80F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mAA48933D49DC42717DD08485E7465CFCE054D498(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__16_0_m3F0C1F84A33D7D8FB47B265FCAEFF34B560C0E9A_RuntimeMethod_var), NULL);
		ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927* L_2 = (ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927*)il2cpp_codegen_object_new(ObjectPool_1_t6ADA5BE2FA047CB8663195805BD7A2E867F83927_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ObjectPool_1__ctor_m2CA5E68F5B7F6A0E030658D0AE2710F1E3846652(L_2, L_1, ObjectPool_1__ctor_m2CA5E68F5B7F6A0E030658D0AE2710F1E3846652_RuntimeMethod_var);
		((EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_StaticFields*)il2cpp_codegen_static_fields_for(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var))->___s_pool_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_StaticFields*)il2cpp_codegen_static_fields_for(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var))->___s_pool_0), (void*)L_2);
		Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* L_3;
		L_3 = EncodingHelper_LoadGetStringPlatform_m84C59973E8A40795547A6813EF9C3E86FA690329(NULL);
		((EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_StaticFields*)il2cpp_codegen_static_fields_for(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var))->___s_getStringPlatform_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_StaticFields*)il2cpp_codegen_static_fields_for(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var))->___s_getStringPlatform_1), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_Multicast(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* currentDelegate = reinterpret_cast<Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, uint8_t*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_encoding, ___1_bytes, ___2_byteCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenInst(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method)
{
	NullCheck(___0_encoding);
	typedef String_t* (*FunctionPointerType) (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, uint8_t*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_encoding, ___1_bytes, ___2_byteCount, method);
}
String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenStatic(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, uint8_t*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_encoding, ___1_bytes, ___2_byteCount, method);
}
String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenStaticInvoker(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< String_t*, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, uint8_t*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_encoding, ___1_bytes, ___2_byteCount);
}
String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_ClosedStaticInvoker(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< String_t*, RuntimeObject*, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, uint8_t*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_encoding, ___1_bytes, ___2_byteCount);
}
String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenVirtual(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method)
{
	NullCheck(___0_encoding);
	return VirtualFuncInvoker2< String_t*, uint8_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_encoding, ___1_bytes, ___2_byteCount);
}
String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenInterface(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method)
{
	NullCheck(___0_encoding);
	return InterfaceFuncInvoker2< String_t*, uint8_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_encoding, ___1_bytes, ___2_byteCount);
}
String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenGenericVirtual(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method)
{
	NullCheck(___0_encoding);
	return GenericVirtualFuncInvoker2< String_t*, uint8_t*, int32_t >::Invoke(method, ___0_encoding, ___1_bytes, ___2_byteCount);
}
String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenGenericInterface(Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method)
{
	NullCheck(___0_encoding);
	return GenericInterfaceFuncInvoker2< String_t*, uint8_t*, int32_t >::Invoke(method, ___0_encoding, ___1_bytes, ___2_byteCount);
}
// System.Void System.Reflection.Internal.EncodingHelper/Encoding_GetString::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoding_GetString__ctor_m773319E2D85C4551AC342554018ACA4595F86C37 (Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3_Multicast;
}
// System.String System.Reflection.Internal.EncodingHelper/Encoding_GetString::Invoke(System.Text.Encoding,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Encoding_GetString_Invoke_m26648ECF328E6B12ABAF00AE5AC31B80AA12C3F3 (Encoding_GetString_tF5E32410A3ADD683019680ABA5056446909DF45E* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, uint8_t*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_encoding, ___1_bytes, ___2_byteCount, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
String_t* String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_Multicast(String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* __this, uint8_t* ___0_bytes, int32_t ___1_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* currentDelegate = reinterpret_cast<String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, uint8_t*, int32_t, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_bytes, ___1_byteCount, ___2_encoding, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_OpenInst(String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* __this, uint8_t* ___0_bytes, int32_t ___1_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	NullCheck(___0_bytes);
	typedef String_t* (*FunctionPointerType) (uint8_t*, int32_t, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_bytes, ___1_byteCount, ___2_encoding, method);
}
String_t* String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_OpenStatic(String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* __this, uint8_t* ___0_bytes, int32_t ___1_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (uint8_t*, int32_t, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_bytes, ___1_byteCount, ___2_encoding, method);
}
String_t* String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_OpenStaticInvoker(String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* __this, uint8_t* ___0_bytes, int32_t ___1_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< String_t*, uint8_t*, int32_t, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_bytes, ___1_byteCount, ___2_encoding);
}
String_t* String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_ClosedStaticInvoker(String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* __this, uint8_t* ___0_bytes, int32_t ___1_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< String_t*, RuntimeObject*, uint8_t*, int32_t, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_bytes, ___1_byteCount, ___2_encoding);
}
// System.Void System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void String_CreateStringFromEncoding__ctor_m7472520187F83DBBC2EF7F14C57CBCAE0FDBD6BE (String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_Multicast;
}
// System.String System.Reflection.Internal.EncodingHelper/String_CreateStringFromEncoding::Invoke(System.Byte*,System.Int32,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C (String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* __this, uint8_t* ___0_bytes, int32_t ___1_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, uint8_t*, int32_t, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_bytes, ___1_byteCount, ___2_encoding, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.Internal.EncodingHelper/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mE86FAFED08810C08FEDA549E0B81B6D5529C0A1C (U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String System.Reflection.Internal.EncodingHelper/<>c__DisplayClass11_0::<LoadGetStringPlatform>b__0(System.Text.Encoding,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass11_0_U3CLoadGetStringPlatformU3Eb__0_m5828AD6F707C431620DF124D633B9C4D9133064B (U3CU3Ec__DisplayClass11_0_t5C9F74023482BF1E12A7CDA0633B8DC65166540C* __this, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___0_encoding, uint8_t* ___1_bytes, int32_t ___2_byteCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* L_0 = __this->___createStringFromEncoding_0;
		uint8_t* L_1 = ___1_bytes;
		int32_t L_2 = ___2_byteCount;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3 = ___0_encoding;
		il2cpp_codegen_runtime_class_init_inline(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = EncodingHelper_GetStringUsingCreateStringFromEncoding_mD35B8DD4182BB621A3534232538314460B2193ED(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.Internal.EncodingHelper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1E6FE2C2A9C8538145AF163F00AD9D91D648F02C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055* L_0 = (U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055*)il2cpp_codegen_object_new(U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m50251AD851C14B882389FDBE07B461F23148D21E(L_0, NULL);
		((U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.Reflection.Internal.EncodingHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m50251AD851C14B882389FDBE07B461F23148D21E (U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Byte[] System.Reflection.Internal.EncodingHelper/<>c::<.cctor>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CU3Ec_U3C_cctorU3Eb__16_0_m3F0C1F84A33D7D8FB47B265FCAEFF34B560C0E9A (U3CU3Ec_tB0C0117BD7372CC2BD235B902C13ACAD02ED6055* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)200));
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Reflection.Internal.FileStreamReadLightUp::IsFileStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileStreamReadLightUp_IsFileStream_mE506AD4D9A73A3CCBED81580875F9F64B3815FD5 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		return (bool)((!(((RuntimeObject*)(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)((FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)IsInstClass((RuntimeObject*)L_0, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Runtime.InteropServices.SafeHandle System.Reflection.Internal.FileStreamReadLightUp::GetSafeFileHandle(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* FileStreamReadLightUp_GetSafeFileHandle_m386F3C272BE85A9DB3B27B9240A5B404A341C64C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* V_0 = NULL;
	SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		NullCheck(((FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)CastclassClass((RuntimeObject*)L_0, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var)));
		SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* L_1;
		L_1 = VirtualFuncInvoker0< SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* >::Invoke(41 /* Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::get_SafeFileHandle() */, ((FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)CastclassClass((RuntimeObject*)L_0, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var)));
		V_0 = L_1;
		goto IL_0013;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Object)
		RuntimeObject* L_2 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_1 = (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0022;
	}// end catch (depth: 1)

IL_0013:
	{
		SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_4);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)NULL;
	}

IL_0020:
	{
		SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_6 = V_0;
		return L_6;
	}

IL_0022:
	{
		SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_7 = V_1;
		return L_7;
	}
}
// System.Boolean System.Reflection.Internal.FileStreamReadLightUp::TryReadFile(System.IO.Stream,System.Byte*,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileStreamReadLightUp_TryReadFile_mA402B6F85B84952952D353B5AA935CB1DF686FDB (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, uint8_t* ___1_buffer, int64_t ___2_start, int32_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_il2cpp_TypeInfo_var);
		bool L_0 = ((FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_StaticFields*)il2cpp_codegen_static_fields_for(FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_il2cpp_TypeInfo_var))->___readFileNotAvailable_0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		il2cpp_codegen_runtime_class_init_inline(FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_il2cpp_TypeInfo_var);
		SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_2;
		L_2 = FileStreamReadLightUp_GetSafeFileHandle_m386F3C272BE85A9DB3B27B9240A5B404A341C64C(L_1, NULL);
		V_0 = L_2;
		SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_3 = V_0;
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
	}
	try
	{// begin try (depth: 1)
		SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* L_4 = V_0;
		uint8_t* L_5 = ___1_buffer;
		int32_t L_6 = ___3_size;
		intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		int32_t L_8;
		L_8 = Kernel32_ReadFile_m3208597565E31C4525FD15B35F66DFB18B6BD973(L_4, L_5, L_6, (&V_2), L_7, NULL);
		V_1 = L_8;
		goto IL_0033;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.Object)
		RuntimeObject* L_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_il2cpp_TypeInfo_var)));
		((FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_il2cpp_TypeInfo_var))))->___readFileNotAvailable_0 = (bool)1;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003e;
	}// end catch (depth: 1)

IL_0033:
	{
		int32_t L_10 = V_1;
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_11 = V_2;
		int32_t L_12 = ___3_size;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_003c;
		}
	}

IL_003a:
	{
		return (bool)0;
	}

IL_003c:
	{
		return (bool)1;
	}

IL_003e:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Void System.Reflection.Internal.FileStreamReadLightUp::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStreamReadLightUp__cctor_m8CF5ACA1369D8FDDA20100BDC990F78D2414C240 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_0 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		((FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_StaticFields*)il2cpp_codegen_static_fields_for(FileStreamReadLightUp_tA1E9162C6C00A026A0586B0B013E72F4536CF1B2_il2cpp_TypeInfo_var))->___readFileNotAvailable_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)92)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Reflection.Internal.Hash::Combine(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash_Combine_m309D87D4BC81A5F97B7373156CB7523166852282 (uint32_t ___0_newKey, int32_t ___1_currentKey, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_currentKey;
		uint32_t L_1 = ___0_newKey;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)-1521134295))), (int32_t)L_1));
	}
}
// System.Int32 System.Reflection.Internal.Hash::GetFNVHashCode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash_GetFNVHashCode_mDFDE6A02CC565E31A04EBBD1DAB3B0DB38115D9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_001a;
	}

IL_000a:
	{
		int32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_0^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001a:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_data;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 System.Reflection.Internal.Hash::GetFNVHashCode(System.Collections.Immutable.ImmutableArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash_GetFNVHashCode_mADCF480C49603821D88EAD0BD7572045110F2108 (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_get_Item_m5B8F9EE1FA79C18E7EAB44C33D0A865A4FF1B5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_001f;
	}

IL_000a:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		uint8_t L_2;
		L_2 = ImmutableArray_1_get_Item_m5B8F9EE1FA79C18E7EAB44C33D0A865A4FF1B5B3((&___0_data), L_1, ImmutableArray_1_get_Item_m5B8F9EE1FA79C18E7EAB44C33D0A865A4FF1B5B3_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_0^(int32_t)L_2)), ((int32_t)16777619)));
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87((&___0_data), ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Immutable.ImmutableArray`1<System.Byte> System.Reflection.Internal.ImmutableByteArrayInterop::DangerousCreateFromUnderlyingArray(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ImmutableByteArrayInterop_DangerousCreateFromUnderlyingArray_mE802493FD0EBA61ABC3D1E7F272FF2481B9AE63A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_2 = ___0_array;
		*((RuntimeObject**)L_2) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		(&V_1)->___UnderlyingArray_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___UnderlyingArray_0), (void*)L_3);
		ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707 L_4 = V_1;
		ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 L_5 = L_4.___ImmutableArray_1;
		return L_5;
	}
}
// System.Byte[] System.Reflection.Internal.ImmutableByteArrayInterop::DangerousGetUnderlyingArray(System.Collections.Immutable.ImmutableArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImmutableByteArrayInterop_DangerousGetUnderlyingArray_mDDAEBF12EEC366524BB5306FACCD96BBECA0325E (ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___0_array, const RuntimeMethod* method) 
{
	ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707));
		ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 L_0 = ___0_array;
		(&V_0)->___ImmutableArray_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___ImmutableArray_1))->___array_1), (void*)NULL);
		ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707 L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1.___UnderlyingArray_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion
IL2CPP_EXTERN_C void ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshal_pinvoke(const ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707& unmarshaled, ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707____ImmutableArray_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___ImmutableArray_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707____ImmutableArray_1_FieldInfo_var, ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ImmutableArray_1Exception, NULL);
}
IL2CPP_EXTERN_C void ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshal_pinvoke_back(const ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshaled_pinvoke& marshaled, ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707____ImmutableArray_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___ImmutableArray_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707____ImmutableArray_1_FieldInfo_var, ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ImmutableArray_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion
IL2CPP_EXTERN_C void ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshal_pinvoke_cleanup(ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion
IL2CPP_EXTERN_C void ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshal_com(const ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707& unmarshaled, ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707____ImmutableArray_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___ImmutableArray_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707____ImmutableArray_1_FieldInfo_var, ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ImmutableArray_1Exception, NULL);
}
IL2CPP_EXTERN_C void ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshal_com_back(const ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshaled_com& marshaled, ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707____ImmutableArray_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___ImmutableArray_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707____ImmutableArray_1_FieldInfo_var, ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ImmutableArray_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Reflection.Internal.ImmutableByteArrayInterop/ByteArrayUnion
IL2CPP_EXTERN_C void ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshal_com_cleanup(ByteArrayUnion_tF65B4A4981AFECFB29C4012851865BCB8001D707_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.Internal.ImmutableMemoryStream::.ctor(System.Collections.Immutable.ImmutableArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableMemoryStream__ctor_mAC29FAA0898D2F57C5C482D7A7A2C58D9E1A65D3 (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 L_0 = ___0_array;
		__this->____array_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____array_5))->___array_1), (void*)NULL);
		return;
	}
}
// System.Boolean System.Reflection.Internal.ImmutableMemoryStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableMemoryStream_get_CanRead_m2ECB4E196C2F26870E5619F4852FA752F08E071A (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Reflection.Internal.ImmutableMemoryStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableMemoryStream_get_CanSeek_m576AC954910B4EF2BCA60ACDF8C7E32E9343D5D3 (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Reflection.Internal.ImmutableMemoryStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableMemoryStream_get_CanWrite_m829B87274A33D992CB04E6EA434AB97D42E76ECD (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int64 System.Reflection.Internal.ImmutableMemoryStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ImmutableMemoryStream_get_Length_m496DAFC3D767F042BB215E22C3F0C0710890E72D (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 L_0 = __this->____array_5;
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87((&V_0), ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		return ((int64_t)L_1);
	}
}
// System.Int64 System.Reflection.Internal.ImmutableMemoryStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ImmutableMemoryStream_get_Position_m27154493369202E7775E53E0A0DC80A96C771F40 (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____position_6;
		return ((int64_t)L_0);
	}
}
// System.Void System.Reflection.Internal.ImmutableMemoryStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableMemoryStream_set_Position_m4E4833CC4EBB1BFAC6E16D69ED14AFE9DE25A425 (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int64_t L_0 = ___0_value;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_0017;
		}
	}
	{
		int64_t L_1 = ___0_value;
		ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 L_2 = __this->____array_5;
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87((&V_0), ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		if ((((int64_t)L_1) < ((int64_t)((int64_t)L_3))))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableMemoryStream_set_Position_m4E4833CC4EBB1BFAC6E16D69ED14AFE9DE25A425_RuntimeMethod_var)));
	}

IL_0022:
	{
		int64_t L_5 = ___0_value;
		__this->____position_6 = ((int32_t)L_5);
		return;
	}
}
// System.Void System.Reflection.Internal.ImmutableMemoryStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableMemoryStream_Flush_m8135C22235766AAB46A2E5B2742B9236585E63AC (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 System.Reflection.Internal.ImmutableMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableMemoryStream_Read_m193BDDC3CCD3A82ACB4F9202902B74E15D819111 (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_CopyTo_m3BFA0F90F33D23679784C28CB5E8361F8F66C063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___2_count;
		ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 L_1 = __this->____array_5;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87((&V_1), ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		int32_t L_3 = __this->____position_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		V_0 = L_4;
		ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 L_5 = __this->____array_5;
		V_1 = L_5;
		int32_t L_6 = __this->____position_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_buffer;
		int32_t L_8 = ___1_offset;
		int32_t L_9 = V_0;
		ImmutableArray_1_CopyTo_m3BFA0F90F33D23679784C28CB5E8361F8F66C063((&V_1), L_6, L_7, L_8, L_9, ImmutableArray_1_CopyTo_m3BFA0F90F33D23679784C28CB5E8361F8F66C063_RuntimeMethod_var);
		int32_t L_10 = __this->____position_6;
		int32_t L_11 = V_0;
		__this->____position_6 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int64 System.Reflection.Internal.ImmutableMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ImmutableMemoryStream_Seek_m9C8BA735F858886E5B3C754A0D08A1C0A5CB115B (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmutableMemoryStream_Seek_m9C8BA735F858886E5B3C754A0D08A1C0A5CB115B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 V_2;
	memset((&V_2), 0, sizeof(V_2));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___1_origin;
			switch (L_0)
			{
				case 0:
				{
					goto IL_0014_1;
				}
				case 1:
				{
					goto IL_0018_1;
				}
				case 2:
				{
					goto IL_0024_1;
				}
			}
		}
		{
			goto IL_0038_1;
		}

IL_0014_1:
		{
			int64_t L_1 = ___0_offset;
			V_1 = L_1;
			goto IL_0043_1;
		}

IL_0018_1:
		{
			int64_t L_2 = ___0_offset;
			int32_t L_3 = __this->____position_6;
			if (il2cpp_codegen_check_add_overflow((int64_t)L_2, (int64_t)((int64_t)L_3)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ImmutableMemoryStream_Seek_m9C8BA735F858886E5B3C754A0D08A1C0A5CB115B_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add(L_2, ((int64_t)L_3)));
			goto IL_0043_1;
		}

IL_0024_1:
		{
			int64_t L_4 = ___0_offset;
			ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 L_5 = __this->____array_5;
			V_2 = L_5;
			il2cpp_codegen_runtime_class_init_inline(ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
			int32_t L_6;
			L_6 = ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87((&V_2), ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
			if (il2cpp_codegen_check_add_overflow((int64_t)L_4, (int64_t)((int64_t)L_6)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ImmutableMemoryStream_Seek_m9C8BA735F858886E5B3C754A0D08A1C0A5CB115B_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)L_6)));
			goto IL_0043_1;
		}

IL_0038_1:
		{
			ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
			NullCheck(L_7);
			ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableMemoryStream_Seek_m9C8BA735F858886E5B3C754A0D08A1C0A5CB115B_RuntimeMethod_var)));
		}

IL_0043_1:
		{
			int64_t L_8 = V_1;
			V_0 = L_8;
			goto IL_0053;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{// begin catch(System.OverflowException)
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_9 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableMemoryStream_Seek_m9C8BA735F858886E5B3C754A0D08A1C0A5CB115B_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0053:
	{
		int64_t L_11 = V_0;
		if ((((int64_t)L_11) < ((int64_t)((int64_t)0))))
		{
			goto IL_006a;
		}
	}
	{
		int64_t L_12 = V_0;
		ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43 L_13 = __this->____array_5;
		V_2 = L_13;
		il2cpp_codegen_runtime_class_init_inline(ImmutableArray_1_tD227222C1907C411C07042F566F2C034BCE1FC43_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87((&V_2), ImmutableArray_1_get_Length_mA69A07F9524F8482D6855A04B33F9ADBA96F9F87_RuntimeMethod_var);
		if ((((int64_t)L_12) < ((int64_t)((int64_t)L_14))))
		{
			goto IL_0075;
		}
	}

IL_006a:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableMemoryStream_Seek_m9C8BA735F858886E5B3C754A0D08A1C0A5CB115B_RuntimeMethod_var)));
	}

IL_0075:
	{
		int64_t L_16 = V_0;
		__this->____position_6 = ((int32_t)L_16);
		int64_t L_17 = V_0;
		return L_17;
	}
}
// System.Void System.Reflection.Internal.ImmutableMemoryStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableMemoryStream_SetLength_m1C89E8A11789E12DF441A296C37ABA9857FF1951 (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableMemoryStream_SetLength_m1C89E8A11789E12DF441A296C37ABA9857FF1951_RuntimeMethod_var)));
	}
}
// System.Void System.Reflection.Internal.ImmutableMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableMemoryStream_Write_m05ED0910BE33932A85310F6F9AB954F0734A2725 (ImmutableMemoryStream_t86A824CA8CBB23D1B72B02E86DC0358DA49CDA54* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableMemoryStream_Write_m05ED0910BE33932A85310F6F9AB954F0734A2725_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.MethodInfo System.Reflection.Internal.LightUpHelper::GetMethod(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* LightUpHelper_GetMethod_m6C40B666CFAA471BB24341DD0AE8B54ACDF9CA49 (Type_t* ___0_type, String_t* ___1_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_parameterTypes, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Type_t* L_0 = ___0_type;
		String_t* L_1 = ___1_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___2_parameterTypes;
		MethodInfo_t* L_3;
		L_3 = RuntimeReflectionExtensions_GetRuntimeMethod_m4759237A7FCCC75A536DB354345AFB0E44687B3D(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AmbiguousMatchException_t74F105B42C618E39EEE32A52E79C24044604E70E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.Reflection.AmbiguousMatchException)
		AmbiguousMatchException_t74F105B42C618E39EEE32A52E79C24044604E70E* L_4 = ((AmbiguousMatchException_t74F105B42C618E39EEE32A52E79C24044604E70E*)IL2CPP_GET_ACTIVE_EXCEPTION(AmbiguousMatchException_t74F105B42C618E39EEE32A52E79C24044604E70E*));;
		V_0 = (MethodInfo_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0010;
	}// end catch (depth: 1)

IL_0010:
	{
		MethodInfo_t* L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.Internal.MemoryBlock::.ctor(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock__ctor_m8330CA8C4F3EF646DDBEF453060F91762AE1EF1E (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, uint8_t* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_buffer;
		__this->___Pointer_0 = L_0;
		int32_t L_1 = ___1_length;
		__this->___Length_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryBlock__ctor_m8330CA8C4F3EF646DDBEF453060F91762AE1EF1E_AdjustorThunk (RuntimeObject* __this, uint8_t* ___0_buffer, int32_t ___1_length, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	MemoryBlock__ctor_m8330CA8C4F3EF646DDBEF453060F91762AE1EF1E(_thisAdjusted, ___0_buffer, ___1_length, method);
}
// System.Void System.Reflection.Internal.MemoryBlock::CheckBounds(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		int32_t L_1 = ___1_byteCount;
		int32_t L_2 = __this->___Length_1;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_0)), ((int64_t)(uint64_t)((uint32_t)L_1))))) > ((uint64_t)((int64_t)L_2)))))
		{
			goto IL_0013;
		}
	}
	{
		Throw_OutOfBounds_mA9594949C36427E7EA8194E19C96DBC7E1D47859(NULL);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(_thisAdjusted, ___0_offset, ___1_byteCount, method);
}
// System.Reflection.Internal.MemoryBlock System.Reflection.Internal.MemoryBlock::GetMemoryBlockAt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 MemoryBlock_GetMemoryBlockAt_mED806FBD911E80CAB31DD69D0D0609A7656C21A7 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		int32_t L_1 = ___1_length;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, L_1, NULL);
		uint8_t* L_2 = __this->___Pointer_0;
		int32_t L_3 = ___0_offset;
		int32_t L_4 = ___1_length;
		MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		MemoryBlock__ctor_m8330CA8C4F3EF646DDBEF453060F91762AE1EF1E((&L_5), ((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 MemoryBlock_GetMemoryBlockAt_mED806FBD911E80CAB31DD69D0D0609A7656C21A7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4 _returnValue;
	_returnValue = MemoryBlock_GetMemoryBlockAt_mED806FBD911E80CAB31DD69D0D0609A7656C21A7(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
// System.Byte System.Reflection.Internal.MemoryBlock::PeekByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MemoryBlock_PeekByte_m928ABFC51CBB22B83AA6C26AC39C8F65CCD5D9BF (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 1, NULL);
		uint8_t* L_1 = __this->___Pointer_0;
		int32_t L_2 = ___0_offset;
		int32_t L_3 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2))));
		return (uint8_t)L_3;
	}
}
IL2CPP_EXTERN_C  uint8_t MemoryBlock_PeekByte_m928ABFC51CBB22B83AA6C26AC39C8F65CCD5D9BF_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = MemoryBlock_PeekByte_m928ABFC51CBB22B83AA6C26AC39C8F65CCD5D9BF(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::PeekInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_PeekInt32_m25966E85A7FF24823F7F02BA5313BD3DC1DEF77D (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___0_offset;
		uint32_t L_1;
		L_1 = MemoryBlock_PeekUInt32_m9A9BC388B26AD5D3C6AB202D80C0B97AD5C479D0_inline(__this, L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		if ((((int64_t)((int64_t)((int32_t)L_2))) == ((int64_t)((int64_t)(uint64_t)L_3))))
		{
			goto IL_0013;
		}
	}
	{
		Throw_ValueOverflow_m816A4EDEDBD0CF7C043D0D99545EAEA0D20C70F6(NULL);
	}

IL_0013:
	{
		uint32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_PeekInt32_m25966E85A7FF24823F7F02BA5313BD3DC1DEF77D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_PeekInt32_m25966E85A7FF24823F7F02BA5313BD3DC1DEF77D(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
// System.UInt32 System.Reflection.Internal.MemoryBlock::PeekUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MemoryBlock_PeekUInt32_m9A9BC388B26AD5D3C6AB202D80C0B97AD5C479D0 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 4, NULL);
		uint8_t* L_1 = __this->___Pointer_0;
		int32_t L_2 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		uint8_t* L_3 = V_0;
		int32_t L_4 = (*(L_3));
		uint8_t* L_5 = V_0;
		int32_t L_6 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, 1))));
		uint8_t* L_7 = V_0;
		int32_t L_8 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 2))));
		uint8_t* L_9 = V_0;
		int32_t L_10 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 3))));
		return ((int32_t)(((int32_t)(((int32_t)(L_4|((int32_t)(L_6<<8))))|((int32_t)(L_8<<((int32_t)16)))))|((int32_t)(L_10<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C  uint32_t MemoryBlock_PeekUInt32_m9A9BC388B26AD5D3C6AB202D80C0B97AD5C479D0_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = MemoryBlock_PeekUInt32_m9A9BC388B26AD5D3C6AB202D80C0B97AD5C479D0_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::PeekCompressedInteger(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_PeekCompressedInteger_m4D4F6570A2013AE787E31AC46DCC58B8F3593096 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t* ___1_numberOfBytesRead, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	int64_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 0, NULL);
		uint8_t* L_1 = __this->___Pointer_0;
		int32_t L_2 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		int32_t L_3 = __this->___Length_1;
		int32_t L_4 = ___0_offset;
		V_1 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)));
		int64_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_6 = ___1_numberOfBytesRead;
		*((int32_t*)L_6) = (int32_t)0;
		return ((int32_t)2147483647LL);
	}

IL_0027:
	{
		uint8_t* L_7 = V_0;
		int32_t L_8 = (*(L_7));
		V_2 = (uint8_t)L_8;
		uint8_t L_9 = V_2;
		if (((int32_t)((int32_t)L_9&((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t* L_10 = ___1_numberOfBytesRead;
		*((int32_t*)L_10) = (int32_t)1;
		uint8_t L_11 = V_2;
		return L_11;
	}

IL_0038:
	{
		uint8_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12&((int32_t)64))))
		{
			goto IL_0052;
		}
	}
	{
		int64_t L_13 = V_1;
		if ((((int64_t)L_13) < ((int64_t)((int64_t)2))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t* L_14 = ___1_numberOfBytesRead;
		*((int32_t*)L_14) = (int32_t)2;
		uint8_t L_15 = V_2;
		uint8_t* L_16 = V_0;
		int32_t L_17 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, 1))));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_15&((int32_t)63)))<<8))|L_17));
	}

IL_0052:
	{
		uint8_t L_18 = V_2;
		if (((int32_t)((int32_t)L_18&((int32_t)32))))
		{
			goto IL_007c;
		}
	}
	{
		int64_t L_19 = V_1;
		if ((((int64_t)L_19) < ((int64_t)((int64_t)4))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t* L_20 = ___1_numberOfBytesRead;
		*((int32_t*)L_20) = (int32_t)4;
		uint8_t L_21 = V_2;
		uint8_t* L_22 = V_0;
		int32_t L_23 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, 1))));
		uint8_t* L_24 = V_0;
		int32_t L_25 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, 2))));
		uint8_t* L_26 = V_0;
		int32_t L_27 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, 3))));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_21&((int32_t)31)))<<((int32_t)24)))|((int32_t)(L_23<<((int32_t)16)))))|((int32_t)(L_25<<8))))|L_27));
	}

IL_007c:
	{
		int32_t* L_28 = ___1_numberOfBytesRead;
		*((int32_t*)L_28) = (int32_t)0;
		return ((int32_t)2147483647LL);
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_PeekCompressedInteger_m4D4F6570A2013AE787E31AC46DCC58B8F3593096_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t* ___1_numberOfBytesRead, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_PeekCompressedInteger_m4D4F6570A2013AE787E31AC46DCC58B8F3593096(_thisAdjusted, ___0_offset, ___1_numberOfBytesRead, method);
	return _returnValue;
}
// System.UInt16 System.Reflection.Internal.MemoryBlock::PeekUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MemoryBlock_PeekUInt16_m747FC62519D3F342CD5272CD7F056898008C8E60 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 2, NULL);
		uint8_t* L_1 = __this->___Pointer_0;
		int32_t L_2 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		uint8_t* L_3 = V_0;
		int32_t L_4 = (*(L_3));
		uint8_t* L_5 = V_0;
		int32_t L_6 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, 1))));
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(L_4|((int32_t)(L_6<<8)))));
	}
}
IL2CPP_EXTERN_C  uint16_t MemoryBlock_PeekUInt16_m747FC62519D3F342CD5272CD7F056898008C8E60_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = MemoryBlock_PeekUInt16_m747FC62519D3F342CD5272CD7F056898008C8E60_inline(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
// System.UInt32 System.Reflection.Internal.MemoryBlock::PeekTaggedReference(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MemoryBlock_PeekTaggedReference_m40B9D9B6887258EA3DDAC67AE97894AFF02E34B5 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		bool L_1 = ___1_smallRefSize;
		uint32_t L_2;
		L_2 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  uint32_t MemoryBlock_PeekTaggedReference_m40B9D9B6887258EA3DDAC67AE97894AFF02E34B5_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = MemoryBlock_PeekTaggedReference_m40B9D9B6887258EA3DDAC67AE97894AFF02E34B5(_thisAdjusted, ___0_offset, ___1_smallRefSize, method);
	return _returnValue;
}
// System.UInt32 System.Reflection.Internal.MemoryBlock::PeekReferenceUnchecked(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_smallRefSize;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_offset;
		uint32_t L_2;
		L_2 = MemoryBlock_PeekUInt32_m9A9BC388B26AD5D3C6AB202D80C0B97AD5C479D0_inline(__this, L_1, NULL);
		return L_2;
	}

IL_000b:
	{
		int32_t L_3 = ___0_offset;
		uint16_t L_4;
		L_4 = MemoryBlock_PeekUInt16_m747FC62519D3F342CD5272CD7F056898008C8E60_inline(__this, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  uint32_t MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(_thisAdjusted, ___0_offset, ___1_smallRefSize, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::PeekReference(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_PeekReference_mB5C3E17B3BE51AA991015CCAF12D2C45158B298A (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		bool L_0 = ___1_smallRefSize;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_offset;
		uint16_t L_2;
		L_2 = MemoryBlock_PeekUInt16_m747FC62519D3F342CD5272CD7F056898008C8E60_inline(__this, L_1, NULL);
		return L_2;
	}

IL_000b:
	{
		int32_t L_3 = ___0_offset;
		uint32_t L_4;
		L_4 = MemoryBlock_PeekUInt32_m9A9BC388B26AD5D3C6AB202D80C0B97AD5C479D0_inline(__this, L_3, NULL);
		V_0 = L_4;
		uint32_t L_5 = V_0;
		bool L_6;
		L_6 = TokenTypeIds_IsValidRowId_mB6BB88FC1197DCC8EA83C23C6A5E9C9B942BDB18(L_5, NULL);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		Throw_ReferenceOverflow_mCEFBC69F94ACD64C5CE4FD9AFEDEE8DA05B8FED0(NULL);
	}

IL_0020:
	{
		uint32_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_PeekReference_mB5C3E17B3BE51AA991015CCAF12D2C45158B298A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_PeekReference_mB5C3E17B3BE51AA991015CCAF12D2C45158B298A(_thisAdjusted, ___0_offset, ___1_smallRefSize, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::PeekHeapReference(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_PeekHeapReference_m3E79F40CAF025B95DCCA20751E5BCAF7B262D505 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		bool L_0 = ___1_smallRefSize;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_offset;
		uint16_t L_2;
		L_2 = MemoryBlock_PeekUInt16_m747FC62519D3F342CD5272CD7F056898008C8E60_inline(__this, L_1, NULL);
		return L_2;
	}

IL_000b:
	{
		int32_t L_3 = ___0_offset;
		uint32_t L_4;
		L_4 = MemoryBlock_PeekUInt32_m9A9BC388B26AD5D3C6AB202D80C0B97AD5C479D0_inline(__this, L_3, NULL);
		V_0 = L_4;
		uint32_t L_5 = V_0;
		bool L_6;
		L_6 = HeapHandleType_IsValidHeapOffset_mC721331E5DE37AF4FA11122D5A27C862425152C1(L_5, NULL);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		Throw_ReferenceOverflow_mCEFBC69F94ACD64C5CE4FD9AFEDEE8DA05B8FED0(NULL);
	}

IL_0020:
	{
		uint32_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_PeekHeapReference_m3E79F40CAF025B95DCCA20751E5BCAF7B262D505_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, bool ___1_smallRefSize, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_PeekHeapReference_m3E79F40CAF025B95DCCA20751E5BCAF7B262D505(_thisAdjusted, ___0_offset, ___1_smallRefSize, method);
	return _returnValue;
}
// System.Guid System.Reflection.Internal.MemoryBlock::PeekGuid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t MemoryBlock_PeekGuid_mF9739B53598DE9B13CA1BD31E72D45ED3B7DF5B8 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_offset;
		uint32_t L_1 = sizeof(Guid_t);
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, L_1, NULL);
		uint8_t* L_2 = __this->___Pointer_0;
		int32_t L_3 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3));
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_4 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		uint8_t* L_5 = V_0;
		Guid_t L_6 = (*(Guid_t*)L_5);
		return L_6;
	}

IL_0024:
	{
		uint8_t* L_7 = V_0;
		int32_t L_8 = (*(L_7));
		uint8_t* L_9 = V_0;
		int32_t L_10 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 1))));
		uint8_t* L_11 = V_0;
		int32_t L_12 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 2))));
		uint8_t* L_13 = V_0;
		int32_t L_14 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 3))));
		uint8_t* L_15 = V_0;
		int32_t L_16 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, 4))));
		uint8_t* L_17 = V_0;
		int32_t L_18 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, 5))));
		uint8_t* L_19 = V_0;
		int32_t L_20 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, 6))));
		uint8_t* L_21 = V_0;
		int32_t L_22 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, 7))));
		uint8_t* L_23 = V_0;
		int32_t L_24 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, 8))));
		uint8_t* L_25 = V_0;
		int32_t L_26 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_25, ((int32_t)9)))));
		uint8_t* L_27 = V_0;
		int32_t L_28 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, ((int32_t)10)))));
		uint8_t* L_29 = V_0;
		int32_t L_30 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, ((int32_t)11)))));
		uint8_t* L_31 = V_0;
		int32_t L_32 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_31, ((int32_t)12)))));
		uint8_t* L_33 = V_0;
		int32_t L_34 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_33, ((int32_t)13)))));
		uint8_t* L_35 = V_0;
		int32_t L_36 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, ((int32_t)14)))));
		uint8_t* L_37 = V_0;
		int32_t L_38 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, ((int32_t)15)))));
		Guid_t L_39;
		memset((&L_39), 0, sizeof(L_39));
		Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130((&L_39), ((int32_t)(((int32_t)(((int32_t)(L_8|((int32_t)(L_10<<8))))|((int32_t)(L_12<<((int32_t)16)))))|((int32_t)(L_14<<((int32_t)24))))), ((int16_t)((int32_t)(L_16|((int32_t)(L_18<<8))))), ((int16_t)((int32_t)(L_20|((int32_t)(L_22<<8))))), (uint8_t)L_24, (uint8_t)L_26, (uint8_t)L_28, (uint8_t)L_30, (uint8_t)L_32, (uint8_t)L_34, (uint8_t)L_36, (uint8_t)L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
IL2CPP_EXTERN_C  Guid_t MemoryBlock_PeekGuid_mF9739B53598DE9B13CA1BD31E72D45ED3B7DF5B8_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	Guid_t _returnValue;
	_returnValue = MemoryBlock_PeekGuid_mF9739B53598DE9B13CA1BD31E72D45ED3B7DF5B8(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
// System.String System.Reflection.Internal.MemoryBlock::PeekUtf16(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemoryBlock_PeekUtf16_m442BB94B90F23191004327C56EDE6963B0550AA2 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_offset;
		int32_t L_1 = ___1_byteCount;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, L_1, NULL);
		uint8_t* L_2 = __this->___Pointer_0;
		int32_t L_3 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3));
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_4 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___1_byteCount;
		String_t* L_7;
		L_7 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)L_5, 0, ((int32_t)(L_6/2)), NULL);
		return L_7;
	}

IL_0023:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		uint8_t* L_9 = V_0;
		int32_t L_10 = ___1_byteCount;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = Encoding_GetString_m42BFF0862341DCD5289A7D75B5D7A22CE9690EAD(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  String_t* MemoryBlock_PeekUtf16_m442BB94B90F23191004327C56EDE6963B0550AA2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MemoryBlock_PeekUtf16_m442BB94B90F23191004327C56EDE6963B0550AA2(_thisAdjusted, ___0_offset, ___1_byteCount, method);
	return _returnValue;
}
// System.String System.Reflection.Internal.MemoryBlock::PeekUtf8(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemoryBlock_PeekUtf8_m01823F029D4B2D0C2891D9636FBCBDEE194C5EFC (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		int32_t L_1 = ___1_byteCount;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, L_1, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		uint8_t* L_3 = __this->___Pointer_0;
		int32_t L_4 = ___0_offset;
		int32_t L_5 = ___1_byteCount;
		NullCheck(L_2);
		String_t* L_6;
		L_6 = Encoding_GetString_m42BFF0862341DCD5289A7D75B5D7A22CE9690EAD(L_2, ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)), L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* MemoryBlock_PeekUtf8_m01823F029D4B2D0C2891D9636FBCBDEE194C5EFC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MemoryBlock_PeekUtf8_m01823F029D4B2D0C2891D9636FBCBDEE194C5EFC(_thisAdjusted, ___0_offset, ___1_byteCount, method);
	return _returnValue;
}
// System.String System.Reflection.Internal.MemoryBlock::PeekUtf8NullTerminated(System.Int32,System.Byte[],System.Reflection.Metadata.MetadataStringDecoder,System.Int32&,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemoryBlock_PeekUtf8NullTerminated_m8D2E894C3A38E18A61A3430F1AACFAC4A8CCFC7C (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_prefix, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___2_utf8Decoder, int32_t* ___3_numberOfBytesRead, Il2CppChar ___4_terminator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 0, NULL);
		int32_t L_1 = ___0_offset;
		int32_t* L_2 = ___3_numberOfBytesRead;
		Il2CppChar L_3 = ___4_terminator;
		int32_t L_4;
		L_4 = MemoryBlock_GetUtf8NullTerminatedLength_m8C8FCB04C8C773CB6B39792D09FAC2ED1FF3FEC4(__this, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		uint8_t* L_5 = __this->___Pointer_0;
		int32_t L_6 = ___0_offset;
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_prefix;
		MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* L_9 = ___2_utf8Decoder;
		il2cpp_codegen_runtime_class_init_inline(EncodingHelper_t19A967EC61A1ED945A3A5842EE6D9C0D32DC2DBB_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = EncodingHelper_DecodeUtf8_m4E030FA9BFE6BE043D7F064B1200820C6A19C781(((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), L_7, L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* MemoryBlock_PeekUtf8NullTerminated_m8D2E894C3A38E18A61A3430F1AACFAC4A8CCFC7C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_prefix, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___2_utf8Decoder, int32_t* ___3_numberOfBytesRead, Il2CppChar ___4_terminator, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MemoryBlock_PeekUtf8NullTerminated_m8D2E894C3A38E18A61A3430F1AACFAC4A8CCFC7C(_thisAdjusted, ___0_offset, ___1_prefix, ___2_utf8Decoder, ___3_numberOfBytesRead, ___4_terminator, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::GetUtf8NullTerminatedLength(System.Int32,System.Int32&,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_GetUtf8NullTerminatedLength_m8C8FCB04C8C773CB6B39792D09FAC2ED1FF3FEC4 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t* ___1_numberOfBytesRead, Il2CppChar ___2_terminator, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 0, NULL);
		uint8_t* L_1 = __this->___Pointer_0;
		int32_t L_2 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		uint8_t* L_3 = __this->___Pointer_0;
		int32_t L_4 = __this->___Length_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4));
		uint8_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0034;
	}

IL_0023:
	{
		uint8_t* L_6 = V_2;
		int32_t L_7 = (*(L_6));
		V_4 = (uint8_t)L_7;
		uint8_t L_8 = V_4;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		uint8_t L_9 = V_4;
		Il2CppChar L_10 = ___2_terminator;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0038;
		}
	}
	{
		uint8_t* L_11 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, 1));
	}

IL_0034:
	{
		uint8_t* L_12 = V_2;
		uint8_t* L_13 = V_1;
		if ((!(((uintptr_t)L_12) >= ((uintptr_t)L_13))))
		{
			goto IL_0023;
		}
	}

IL_0038:
	{
		uint8_t* L_14 = V_2;
		uint8_t* L_15 = V_0;
		V_3 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_14, (intptr_t)L_15))/1))));
		int32_t* L_16 = ___1_numberOfBytesRead;
		int32_t L_17 = V_3;
		*((int32_t*)L_16) = (int32_t)L_17;
		uint8_t* L_18 = V_2;
		uint8_t* L_19 = V_1;
		if ((!(((uintptr_t)L_18) < ((uintptr_t)L_19))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t* L_20 = ___1_numberOfBytesRead;
		int32_t* L_21 = ___1_numberOfBytesRead;
		int32_t L_22 = *((int32_t*)L_21);
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_004d:
	{
		int32_t L_23 = V_3;
		return L_23;
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_GetUtf8NullTerminatedLength_m8C8FCB04C8C773CB6B39792D09FAC2ED1FF3FEC4_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t* ___1_numberOfBytesRead, Il2CppChar ___2_terminator, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_GetUtf8NullTerminatedLength_m8C8FCB04C8C773CB6B39792D09FAC2ED1FF3FEC4(_thisAdjusted, ___0_offset, ___1_numberOfBytesRead, ___2_terminator, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::Utf8NullTerminatedOffsetOfAsciiChar(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_Utf8NullTerminatedOffsetOfAsciiChar_m90CD4AAE28673214C793369A555CA50DBEE62B8D (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_startOffset, Il2CppChar ___1_asciiChar, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = ___0_startOffset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 0, NULL);
		int32_t L_1 = ___0_startOffset;
		V_0 = L_1;
		goto IL_0023;
	}

IL_000c:
	{
		uint8_t* L_2 = __this->___Pointer_0;
		int32_t L_3 = V_0;
		int32_t L_4 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3))));
		V_1 = (uint8_t)L_4;
		uint8_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		uint8_t L_6 = V_1;
		Il2CppChar L_7 = ___1_asciiChar;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_001f:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___Length_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000c;
		}
	}

IL_002c:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_Utf8NullTerminatedOffsetOfAsciiChar_m90CD4AAE28673214C793369A555CA50DBEE62B8D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_startOffset, Il2CppChar ___1_asciiChar, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_Utf8NullTerminatedOffsetOfAsciiChar_m90CD4AAE28673214C793369A555CA50DBEE62B8D(_thisAdjusted, ___0_startOffset, ___1_asciiChar, method);
	return _returnValue;
}
// System.Boolean System.Reflection.Internal.MemoryBlock::Utf8NullTerminatedEquals(System.Int32,System.String,System.Reflection.Metadata.MetadataStringDecoder,System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_Utf8NullTerminatedEquals_mC3B93A7B117844AE4361C7E5C834945316702435 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, String_t* ___1_text, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___2_utf8Decoder, Il2CppChar ___3_terminator, bool ___4_ignoreCase, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	{
		int32_t L_0 = ___0_offset;
		String_t* L_1 = ___1_text;
		Il2CppChar L_2 = ___3_terminator;
		bool L_3 = ___4_ignoreCase;
		int32_t L_4;
		L_4 = MemoryBlock_Utf8NullTerminatedFastCompare_m0923AF65E727F81548966A0E95CC7603BBAB04A9(__this, L_0, L_1, 0, (&V_0), L_2, L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = ___0_offset;
		MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* L_7 = ___2_utf8Decoder;
		Il2CppChar L_8 = ___3_terminator;
		String_t* L_9;
		L_9 = MemoryBlock_PeekUtf8NullTerminated_m8D2E894C3A38E18A61A3430F1AACFAC4A8CCFC7C(__this, L_6, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_7, (&V_2), L_8, NULL);
		V_3 = L_9;
		String_t* L_10 = V_3;
		String_t* L_11 = ___1_text;
		bool L_12 = ___4_ignoreCase;
		G_B2_0 = L_11;
		G_B2_1 = L_10;
		if (L_12)
		{
			G_B3_0 = L_11;
			G_B3_1 = L_10;
			goto IL_002b;
		}
	}
	{
		G_B4_0 = 4;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 5;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_002c:
	{
		NullCheck(G_B4_2);
		bool L_13;
		L_13 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(G_B4_2, G_B4_1, G_B4_0, NULL);
		return L_13;
	}

IL_0032:
	{
		int32_t L_14 = V_1;
		return (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool MemoryBlock_Utf8NullTerminatedEquals_mC3B93A7B117844AE4361C7E5C834945316702435_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, String_t* ___1_text, MetadataStringDecoder_tCCDD7DFDCA99920C9379DEBD9BD6BE307071BD63* ___2_utf8Decoder, Il2CppChar ___3_terminator, bool ___4_ignoreCase, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	bool _returnValue;
	_returnValue = MemoryBlock_Utf8NullTerminatedEquals_mC3B93A7B117844AE4361C7E5C834945316702435(_thisAdjusted, ___0_offset, ___1_text, ___2_utf8Decoder, ___3_terminator, ___4_ignoreCase, method);
	return _returnValue;
}
// System.Reflection.Internal.MemoryBlock/FastComparisonResult System.Reflection.Internal.MemoryBlock::Utf8NullTerminatedFastCompare(System.Int32,System.String,System.Int32,System.Int32&,System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_Utf8NullTerminatedFastCompare_m0923AF65E727F81548966A0E95CC7603BBAB04A9 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, String_t* ___1_text, int32_t ___2_textStart, int32_t* ___3_firstDifferenceIndex, Il2CppChar ___4_terminator, bool ___5_ignoreCase, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	int32_t G_B15_0 = 0;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 0, NULL);
		uint8_t* L_1 = __this->___Pointer_0;
		int32_t L_2 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		uint8_t* L_3 = __this->___Pointer_0;
		int32_t L_4 = __this->___Length_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4));
		uint8_t* L_5 = V_0;
		V_2 = L_5;
		bool L_6 = ___5_ignoreCase;
		int32_t L_7;
		L_7 = StringUtils_IgnoreCaseMask_m6AEB828C2DDE72DC8E0543ECDCBCEF92474540C3(L_6, NULL);
		V_3 = L_7;
		int32_t L_8 = ___2_textStart;
		V_4 = L_8;
		goto IL_0077;
	}

IL_002e:
	{
		uint8_t* L_9 = V_2;
		int32_t L_10 = (*(L_9));
		V_7 = (uint8_t)L_10;
		uint8_t L_11 = V_7;
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		uint8_t L_12 = V_7;
		Il2CppChar L_13 = ___4_terminator;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_14 = ___1_text;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_15, NULL);
		V_8 = L_16;
		uint8_t L_17 = V_7;
		if (((int32_t)((int32_t)L_17&((int32_t)128))))
		{
			goto IL_0068;
		}
	}
	{
		Il2CppChar L_18 = V_8;
		uint8_t L_19 = V_7;
		int32_t L_20 = V_3;
		bool L_21;
		L_21 = StringUtils_IsEqualAscii_m10F76912502C6CCF81FAC8147E75753C0AB5E3DC(L_18, L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint8_t* L_23 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, 1));
		goto IL_0077;
	}

IL_0068:
	{
		int32_t* L_24 = ___3_firstDifferenceIndex;
		int32_t L_25 = V_4;
		*((int32_t*)L_24) = (int32_t)L_25;
		Il2CppChar L_26 = V_8;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)127))))
		{
			goto IL_0075;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0075:
	{
		return (int32_t)(4);
	}

IL_0077:
	{
		int32_t L_27 = V_4;
		String_t* L_28 = ___1_text;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		if ((((int32_t)L_27) >= ((int32_t)L_29)))
		{
			goto IL_0085;
		}
	}
	{
		uint8_t* L_30 = V_2;
		uint8_t* L_31 = V_1;
		if ((!(((uintptr_t)L_30) == ((uintptr_t)L_31))))
		{
			goto IL_002e;
		}
	}

IL_0085:
	{
		int32_t* L_32 = ___3_firstDifferenceIndex;
		int32_t L_33 = V_4;
		*((int32_t*)L_32) = (int32_t)L_33;
		int32_t L_34 = V_4;
		String_t* L_35 = ___1_text;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_35, NULL);
		V_5 = (bool)((((int32_t)L_34) == ((int32_t)L_36))? 1 : 0);
		uint8_t* L_37 = V_2;
		uint8_t* L_38 = V_1;
		if ((((intptr_t)L_37) == ((intptr_t)L_38)))
		{
			goto IL_00a6;
		}
	}
	{
		uint8_t* L_39 = V_2;
		int32_t L_40 = (*(L_39));
		if (!L_40)
		{
			goto IL_00a6;
		}
	}
	{
		uint8_t* L_41 = V_2;
		int32_t L_42 = (*(L_41));
		Il2CppChar L_43 = ___4_terminator;
		G_B15_0 = ((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B15_0 = 1;
	}

IL_00a7:
	{
		V_6 = (bool)G_B15_0;
		bool L_44 = V_5;
		bool L_45 = V_6;
		if (!((int32_t)((int32_t)L_44&(int32_t)L_45)))
		{
			goto IL_00b2;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00b2:
	{
		bool L_46 = V_5;
		if (L_46)
		{
			goto IL_00b8;
		}
	}
	{
		return (int32_t)(2);
	}

IL_00b8:
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_Utf8NullTerminatedFastCompare_m0923AF65E727F81548966A0E95CC7603BBAB04A9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, String_t* ___1_text, int32_t ___2_textStart, int32_t* ___3_firstDifferenceIndex, Il2CppChar ___4_terminator, bool ___5_ignoreCase, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_Utf8NullTerminatedFastCompare_m0923AF65E727F81548966A0E95CC7603BBAB04A9(_thisAdjusted, ___0_offset, ___1_text, ___2_textStart, ___3_firstDifferenceIndex, ___4_terminator, ___5_ignoreCase, method);
	return _returnValue;
}
// System.Boolean System.Reflection.Internal.MemoryBlock::Utf8NullTerminatedStringStartsWithAsciiPrefix(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_Utf8NullTerminatedStringStartsWithAsciiPrefix_m245CACC78EA8973ED6C6C5B71A82B02A1818A062 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, String_t* ___1_asciiPrefix, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 0, NULL);
		String_t* L_1 = ___1_asciiPrefix;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		int32_t L_3 = __this->___Length_1;
		int32_t L_4 = ___0_offset;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		uint8_t* L_5 = __this->___Pointer_0;
		int32_t L_6 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6));
		V_1 = 0;
		goto IL_003c;
	}

IL_0027:
	{
		String_t* L_7 = ___1_asciiPrefix;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		uint8_t* L_10 = V_0;
		int32_t L_11 = (*(L_10));
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		uint8_t* L_12 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, 1));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003c:
	{
		int32_t L_14 = V_1;
		String_t* L_15 = ___1_asciiPrefix;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool MemoryBlock_Utf8NullTerminatedStringStartsWithAsciiPrefix_m245CACC78EA8973ED6C6C5B71A82B02A1818A062_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, String_t* ___1_asciiPrefix, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	bool _returnValue;
	_returnValue = MemoryBlock_Utf8NullTerminatedStringStartsWithAsciiPrefix_m245CACC78EA8973ED6C6C5B71A82B02A1818A062(_thisAdjusted, ___0_offset, ___1_asciiPrefix, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::CompareUtf8NullTerminatedStringWithAsciiString(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_CompareUtf8NullTerminatedStringWithAsciiString_m0020C40B09BC4F107B47059F7372910EB4E023E7 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, String_t* ___1_asciiString, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 0, NULL);
		uint8_t* L_1 = __this->___Pointer_0;
		int32_t L_2 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		int32_t L_3 = __this->___Length_1;
		int32_t L_4 = ___0_offset;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
		V_2 = 0;
		goto IL_0042;
	}

IL_001e:
	{
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0024;
		}
	}
	{
		return (-1);
	}

IL_0024:
	{
		uint8_t* L_7 = V_0;
		int32_t L_8 = (*(L_7));
		String_t* L_9 = ___1_asciiString;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		if ((((int32_t)L_8) == ((int32_t)L_11)))
		{
			goto IL_003a;
		}
	}
	{
		uint8_t* L_12 = V_0;
		int32_t L_13 = (*(L_12));
		String_t* L_14 = ___1_asciiString;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_15, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_13, (int32_t)L_16));
	}

IL_003a:
	{
		uint8_t* L_17 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, 1));
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0042:
	{
		int32_t L_19 = V_2;
		String_t* L_20 = ___1_asciiString;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_001e;
		}
	}
	{
		uint8_t* L_22 = V_0;
		int32_t L_23 = (*(L_22));
		if (!L_23)
		{
			goto IL_0051;
		}
	}
	{
		return 1;
	}

IL_0051:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_CompareUtf8NullTerminatedStringWithAsciiString_m0020C40B09BC4F107B47059F7372910EB4E023E7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, String_t* ___1_asciiString, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_CompareUtf8NullTerminatedStringWithAsciiString_m0020C40B09BC4F107B47059F7372910EB4E023E7(_thisAdjusted, ___0_offset, ___1_asciiString, method);
	return _returnValue;
}
// System.Byte[] System.Reflection.Internal.MemoryBlock::PeekBytes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MemoryBlock_PeekBytes_m2EC98DC2D81CD5B272F31D5835E52C4B06E80A25 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		int32_t L_1 = ___1_byteCount;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, L_1, NULL);
		uint8_t* L_2 = __this->___Pointer_0;
		int32_t L_3 = ___0_offset;
		int32_t L_4 = ___1_byteCount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BlobUtilities_ReadBytes_mF54BF60093D10F01E9F2A8743F78EA9502B13813(((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3)), L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MemoryBlock_PeekBytes_m2EC98DC2D81CD5B272F31D5835E52C4B06E80A25_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = MemoryBlock_PeekBytes_m2EC98DC2D81CD5B272F31D5835E52C4B06E80A25(_thisAdjusted, ___0_offset, ___1_byteCount, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::BinarySearch(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_BinarySearch_m7D6F9AA42B6B14C5F1C1166FA5E90E7CF595E3C5 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_asciiKeys, int32_t ___1_offset, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_asciiKeys;
		NullCheck(L_0);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_0035;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_2, L_3))>>1))));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___0_asciiKeys;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		int32_t L_8 = ___1_offset;
		String_t* L_9 = V_3;
		int32_t L_10;
		L_10 = MemoryBlock_CompareUtf8NullTerminatedStringWithAsciiString_m0020C40B09BC4F107B47059F7372910EB4E023E7(__this, L_8, L_9, NULL);
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0026:
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_14 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0035;
	}

IL_0031:
	{
		int32_t L_15 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0035:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_18 = V_0;
		return ((~L_18));
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_BinarySearch_m7D6F9AA42B6B14C5F1C1166FA5E90E7CF595E3C5_AdjustorThunk (RuntimeObject* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_asciiKeys, int32_t ___1_offset, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_BinarySearch_m7D6F9AA42B6B14C5F1C1166FA5E90E7CF595E3C5(_thisAdjusted, ___0_asciiKeys, ___1_offset, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::BinarySearchForSlot(System.Int32,System.Int32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_BinarySearchForSlot_mF6E11B78D2ABD2FFDAC449D2F329FF3D4F1D2F1F (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowCount, int32_t ___1_rowSize, int32_t ___2_referenceListOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___0_rowCount;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___1_rowSize;
		int32_t L_3 = ___2_referenceListOffset;
		bool L_4 = ___4_isReferenceSmall;
		uint32_t L_5;
		L_5 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3)), L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = ___1_rowSize;
		int32_t L_8 = ___2_referenceListOffset;
		bool L_9 = ___4_isReferenceSmall;
		uint32_t L_10;
		L_10 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, L_7)), L_8)), L_9, NULL);
		V_3 = L_10;
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0085;
		}
	}
	{
		uint32_t L_12 = ___3_referenceValue;
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_12) >= ((uint32_t)L_13))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_14 = V_1;
		return L_14;
	}

IL_002d:
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_002f:
	{
		uint32_t L_16 = ___3_referenceValue;
		uint32_t L_17 = V_2;
		if ((!(((uint32_t)L_16) <= ((uint32_t)L_17))))
		{
			goto IL_003f;
		}
	}
	{
		uint32_t L_18 = ___3_referenceValue;
		uint32_t L_19 = V_2;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_20 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_003d:
	{
		int32_t L_21 = V_0;
		return L_21;
	}

IL_003f:
	{
		uint32_t L_22 = ___3_referenceValue;
		uint32_t L_23 = V_3;
		if ((!(((uint32_t)L_22) >= ((uint32_t)L_23))))
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_24 = ___3_referenceValue;
		uint32_t L_25 = V_3;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_26 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_004d:
	{
		int32_t L_27 = V_1;
		return L_27;
	}

IL_004f:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_28, L_29))/2));
		int32_t L_30 = V_4;
		int32_t L_31 = ___1_rowSize;
		int32_t L_32 = ___2_referenceListOffset;
		bool L_33 = ___4_isReferenceSmall;
		uint32_t L_34;
		L_34 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_30, L_31)), L_32)), L_33, NULL);
		V_5 = L_34;
		uint32_t L_35 = ___3_referenceValue;
		uint32_t L_36 = V_5;
		if ((!(((uint32_t)L_35) > ((uint32_t)L_36))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_37 = V_4;
		V_0 = L_37;
		uint32_t L_38 = V_5;
		V_2 = L_38;
		goto IL_0085;
	}

IL_0074:
	{
		uint32_t L_39 = ___3_referenceValue;
		uint32_t L_40 = V_5;
		if ((!(((uint32_t)L_39) < ((uint32_t)L_40))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_41 = V_4;
		V_1 = L_41;
		uint32_t L_42 = V_5;
		V_3 = L_42;
		goto IL_0085;
	}

IL_0082:
	{
		int32_t L_43 = V_4;
		return L_43;
	}

IL_0085:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_44, L_45))) > ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_46 = V_0;
		return L_46;
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_BinarySearchForSlot_mF6E11B78D2ABD2FFDAC449D2F329FF3D4F1D2F1F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_rowCount, int32_t ___1_rowSize, int32_t ___2_referenceListOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_BinarySearchForSlot_mF6E11B78D2ABD2FFDAC449D2F329FF3D4F1D2F1F(_thisAdjusted, ___0_rowCount, ___1_rowSize, ___2_referenceListOffset, ___3_referenceValue, ___4_isReferenceSmall, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::BinarySearchReference(System.Int32,System.Int32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_BinarySearchReference_mD20B9698AA5F6849B89045930A17FC67E3252C12 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowCount, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___0_rowCount;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0034;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))/2));
		int32_t L_3 = V_2;
		int32_t L_4 = ___1_rowSize;
		int32_t L_5 = ___2_referenceOffset;
		bool L_6 = ___4_isReferenceSmall;
		uint32_t L_7;
		L_7 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, L_4)), L_5)), L_6, NULL);
		V_3 = L_7;
		uint32_t L_8 = ___3_referenceValue;
		uint32_t L_9 = V_3;
		if ((!(((uint32_t)L_8) > ((uint32_t)L_9))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_0034;
	}

IL_0027:
	{
		uint32_t L_11 = ___3_referenceValue;
		uint32_t L_12 = V_3;
		if ((!(((uint32_t)L_11) < ((uint32_t)L_12))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_13 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0034;
	}

IL_0032:
	{
		int32_t L_14 = V_2;
		return L_14;
	}

IL_0034:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_BinarySearchReference_mD20B9698AA5F6849B89045930A17FC67E3252C12_AdjustorThunk (RuntimeObject* __this, int32_t ___0_rowCount, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_BinarySearchReference_mD20B9698AA5F6849B89045930A17FC67E3252C12(_thisAdjusted, ___0_rowCount, ___1_rowSize, ___2_referenceOffset, ___3_referenceValue, ___4_isReferenceSmall, method);
	return _returnValue;
}
// System.Int32 System.Reflection.Internal.MemoryBlock::BinarySearchReference(System.Int32[],System.Int32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_BinarySearchReference_m7B4072D398081A770E58DABC7E4EF90C54A308F1 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_ptrTable, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		V_0 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_ptrTable;
		NullCheck(L_0);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_003a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))/2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_ptrTable;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = ___1_rowSize;
		int32_t L_8 = ___2_referenceOffset;
		bool L_9 = ___4_isReferenceSmall;
		uint32_t L_10;
		L_10 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_6, 1)), L_7)), L_8)), L_9, NULL);
		V_3 = L_10;
		uint32_t L_11 = ___3_referenceValue;
		uint32_t L_12 = V_3;
		if ((!(((uint32_t)L_11) > ((uint32_t)L_12))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_13 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_003a;
	}

IL_002d:
	{
		uint32_t L_14 = ___3_referenceValue;
		uint32_t L_15 = V_3;
		if ((!(((uint32_t)L_14) < ((uint32_t)L_15))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_16 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		goto IL_003a;
	}

IL_0038:
	{
		int32_t L_17 = V_2;
		return L_17;
	}

IL_003a:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_BinarySearchReference_m7B4072D398081A770E58DABC7E4EF90C54A308F1_AdjustorThunk (RuntimeObject* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_ptrTable, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_BinarySearchReference_m7B4072D398081A770E58DABC7E4EF90C54A308F1(_thisAdjusted, ___0_ptrTable, ___1_rowSize, ___2_referenceOffset, ___3_referenceValue, ___4_isReferenceSmall, method);
	return _returnValue;
}
// System.Void System.Reflection.Internal.MemoryBlock::BinarySearchReferenceRange(System.Int32,System.Int32,System.Int32,System.UInt32,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_BinarySearchReferenceRange_m2BB005FBF66690F9DAA746AF33BB393DD62AFBC3 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowCount, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, int32_t* ___5_startRowNumber, int32_t* ___6_endRowNumber, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_rowCount;
		int32_t L_1 = ___1_rowSize;
		int32_t L_2 = ___2_referenceOffset;
		uint32_t L_3 = ___3_referenceValue;
		bool L_4 = ___4_isReferenceSmall;
		int32_t L_5;
		L_5 = MemoryBlock_BinarySearchReference_mD20B9698AA5F6849B89045930A17FC67E3252C12(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t* L_7 = ___5_startRowNumber;
		*((int32_t*)L_7) = (int32_t)(-1);
		int32_t* L_8 = ___6_endRowNumber;
		*((int32_t*)L_8) = (int32_t)(-1);
		return;
	}

IL_001b:
	{
		int32_t* L_9 = ___5_startRowNumber;
		int32_t L_10 = V_0;
		*((int32_t*)L_9) = (int32_t)L_10;
		goto IL_0029;
	}

IL_0021:
	{
		int32_t* L_11 = ___5_startRowNumber;
		int32_t* L_12 = ___5_startRowNumber;
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0029:
	{
		int32_t* L_14 = ___5_startRowNumber;
		int32_t L_15 = *((int32_t*)L_14);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_16 = ___5_startRowNumber;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18 = ___1_rowSize;
		int32_t L_19 = ___2_referenceOffset;
		bool L_20 = ___4_isReferenceSmall;
		uint32_t L_21;
		L_21 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_17, 1)), L_18)), L_19)), L_20, NULL);
		uint32_t L_22 = ___3_referenceValue;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0021;
		}
	}

IL_0044:
	{
		int32_t* L_23 = ___6_endRowNumber;
		int32_t L_24 = V_0;
		*((int32_t*)L_23) = (int32_t)L_24;
		goto IL_0052;
	}

IL_004a:
	{
		int32_t* L_25 = ___6_endRowNumber;
		int32_t* L_26 = ___6_endRowNumber;
		int32_t L_27 = *((int32_t*)L_26);
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0052:
	{
		int32_t* L_28 = ___6_endRowNumber;
		int32_t L_29 = *((int32_t*)L_28);
		int32_t L_30 = ___0_rowCount;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_29, 1))) >= ((int32_t)L_30)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t* L_31 = ___6_endRowNumber;
		int32_t L_32 = *((int32_t*)L_31);
		int32_t L_33 = ___1_rowSize;
		int32_t L_34 = ___2_referenceOffset;
		bool L_35 = ___4_isReferenceSmall;
		uint32_t L_36;
		L_36 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_32, 1)), L_33)), L_34)), L_35, NULL);
		uint32_t L_37 = ___3_referenceValue;
		if ((((int32_t)L_36) == ((int32_t)L_37)))
		{
			goto IL_004a;
		}
	}

IL_006f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryBlock_BinarySearchReferenceRange_m2BB005FBF66690F9DAA746AF33BB393DD62AFBC3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_rowCount, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, int32_t* ___5_startRowNumber, int32_t* ___6_endRowNumber, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	MemoryBlock_BinarySearchReferenceRange_m2BB005FBF66690F9DAA746AF33BB393DD62AFBC3(_thisAdjusted, ___0_rowCount, ___1_rowSize, ___2_referenceOffset, ___3_referenceValue, ___4_isReferenceSmall, ___5_startRowNumber, ___6_endRowNumber, method);
}
// System.Void System.Reflection.Internal.MemoryBlock::BinarySearchReferenceRange(System.Int32[],System.Int32,System.Int32,System.UInt32,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_BinarySearchReferenceRange_mC95400CD0D3AB0FF23439756A9355FB7E37221B4 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_ptrTable, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, int32_t* ___5_startRowNumber, int32_t* ___6_endRowNumber, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_ptrTable;
		int32_t L_1 = ___1_rowSize;
		int32_t L_2 = ___2_referenceOffset;
		uint32_t L_3 = ___3_referenceValue;
		bool L_4 = ___4_isReferenceSmall;
		int32_t L_5;
		L_5 = MemoryBlock_BinarySearchReference_m7B4072D398081A770E58DABC7E4EF90C54A308F1(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t* L_7 = ___5_startRowNumber;
		*((int32_t*)L_7) = (int32_t)(-1);
		int32_t* L_8 = ___6_endRowNumber;
		*((int32_t*)L_8) = (int32_t)(-1);
		return;
	}

IL_001b:
	{
		int32_t* L_9 = ___5_startRowNumber;
		int32_t L_10 = V_0;
		*((int32_t*)L_9) = (int32_t)L_10;
		goto IL_0029;
	}

IL_0021:
	{
		int32_t* L_11 = ___5_startRowNumber;
		int32_t* L_12 = ___5_startRowNumber;
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0029:
	{
		int32_t* L_14 = ___5_startRowNumber;
		int32_t L_15 = *((int32_t*)L_14);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___0_ptrTable;
		int32_t* L_17 = ___5_startRowNumber;
		int32_t L_18 = *((int32_t*)L_17);
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		int32_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = ___1_rowSize;
		int32_t L_22 = ___2_referenceOffset;
		bool L_23 = ___4_isReferenceSmall;
		uint32_t L_24;
		L_24 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21)), L_22)), L_23, NULL);
		uint32_t L_25 = ___3_referenceValue;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_0021;
		}
	}

IL_0048:
	{
		int32_t* L_26 = ___6_endRowNumber;
		int32_t L_27 = V_0;
		*((int32_t*)L_26) = (int32_t)L_27;
		goto IL_0056;
	}

IL_004e:
	{
		int32_t* L_28 = ___6_endRowNumber;
		int32_t* L_29 = ___6_endRowNumber;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0056:
	{
		int32_t* L_31 = ___6_endRowNumber;
		int32_t L_32 = *((int32_t*)L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ___0_ptrTable;
		NullCheck(L_33);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_32, 1))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0079;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = ___0_ptrTable;
		int32_t* L_35 = ___6_endRowNumber;
		int32_t L_36 = *((int32_t*)L_35);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = ___1_rowSize;
		int32_t L_40 = ___2_referenceOffset;
		bool L_41 = ___4_isReferenceSmall;
		uint32_t L_42;
		L_42 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_38, 1)), L_39)), L_40)), L_41, NULL);
		uint32_t L_43 = ___3_referenceValue;
		if ((((int32_t)L_42) == ((int32_t)L_43)))
		{
			goto IL_004e;
		}
	}

IL_0079:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryBlock_BinarySearchReferenceRange_mC95400CD0D3AB0FF23439756A9355FB7E37221B4_AdjustorThunk (RuntimeObject* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_ptrTable, int32_t ___1_rowSize, int32_t ___2_referenceOffset, uint32_t ___3_referenceValue, bool ___4_isReferenceSmall, int32_t* ___5_startRowNumber, int32_t* ___6_endRowNumber, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	MemoryBlock_BinarySearchReferenceRange_mC95400CD0D3AB0FF23439756A9355FB7E37221B4(_thisAdjusted, ___0_ptrTable, ___1_rowSize, ___2_referenceOffset, ___3_referenceValue, ___4_isReferenceSmall, ___5_startRowNumber, ___6_endRowNumber, method);
}
// System.Int32 System.Reflection.Internal.MemoryBlock::LinearSearchReference(System.Int32,System.Int32,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryBlock_LinearSearchReference_m0A39B4C919226A13382B30D51ECF32C76321A368 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowSize, int32_t ___1_referenceOffset, uint32_t ___2_referenceValue, bool ___3_isReferenceSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = ___1_referenceOffset;
		V_0 = L_0;
		int32_t L_1 = __this->___Length_1;
		V_1 = L_1;
		goto IL_0021;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		bool L_3 = ___3_isReferenceSmall;
		uint32_t L_4;
		L_4 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, L_2, L_3, NULL);
		V_2 = L_4;
		uint32_t L_5 = V_2;
		uint32_t L_6 = ___2_referenceValue;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_rowSize;
		return ((int32_t)(L_7/L_8));
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___0_rowSize;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0021:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t MemoryBlock_LinearSearchReference_m0A39B4C919226A13382B30D51ECF32C76321A368_AdjustorThunk (RuntimeObject* __this, int32_t ___0_rowSize, int32_t ___1_referenceOffset, uint32_t ___2_referenceValue, bool ___3_isReferenceSmall, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MemoryBlock_LinearSearchReference_m0A39B4C919226A13382B30D51ECF32C76321A368(_thisAdjusted, ___0_rowSize, ___1_referenceOffset, ___2_referenceValue, ___3_isReferenceSmall, method);
	return _returnValue;
}
// System.Boolean System.Reflection.Internal.MemoryBlock::IsOrderedByReferenceAscending(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_IsOrderedByReferenceAscending_mA7E19DA78301C6997CBA2D762F466469A4949A48 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_rowSize, int32_t ___1_referenceOffset, bool ___2_isReferenceSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = ___1_referenceOffset;
		V_0 = L_0;
		int32_t L_1 = __this->___Length_1;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0022;
	}

IL_000d:
	{
		int32_t L_2 = V_0;
		bool L_3 = ___2_isReferenceSmall;
		uint32_t L_4;
		L_4 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, L_2, L_3, NULL);
		V_3 = L_4;
		uint32_t L_5 = V_3;
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_5) < ((uint32_t)L_6))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		uint32_t L_7 = V_3;
		V_2 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = ___0_rowSize;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_0022:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool MemoryBlock_IsOrderedByReferenceAscending_mA7E19DA78301C6997CBA2D762F466469A4949A48_AdjustorThunk (RuntimeObject* __this, int32_t ___0_rowSize, int32_t ___1_referenceOffset, bool ___2_isReferenceSmall, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	bool _returnValue;
	_returnValue = MemoryBlock_IsOrderedByReferenceAscending_mA7E19DA78301C6997CBA2D762F466469A4949A48(_thisAdjusted, ___0_rowSize, ___1_referenceOffset, ___2_isReferenceSmall, method);
	return _returnValue;
}
// System.Int32[] System.Reflection.Internal.MemoryBlock::BuildPtrTable(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* MemoryBlock_BuildPtrTable_mCEEB9BA7FB84D9BE7D013E11B1331AAEF4066CEC (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_numberOfRows, int32_t ___1_rowSize, int32_t ___2_referenceOffset, bool ___3_isReferenceSmall, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m89052CD0450CDEC0AE040F2D1982E4DD33A12EF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass42_0_U3CBuildPtrTableU3Eb__0_m9A531D8BD92B9CFBA87BE3F8E1E185F40387C756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1* L_0 = (U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass42_0__ctor_m1C2BD97CBE389B69E266F4C0710A422908BBAE41(L_0, NULL);
		V_0 = L_0;
		int32_t L_1 = ___0_numberOfRows;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1* L_3 = V_0;
		int32_t L_4 = ___0_numberOfRows;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		NullCheck(L_3);
		L_3->___unsortedReferences_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___unsortedReferences_0), (void*)L_5);
		V_2 = 0;
		goto IL_0027;
	}

IL_001d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = V_2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0027:
	{
		int32_t L_10 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___unsortedReferences_0;
		int32_t L_14 = ___1_rowSize;
		int32_t L_15 = ___2_referenceOffset;
		bool L_16 = ___3_isReferenceSmall;
		MemoryBlock_ReadColumn_mA00D7CD0686A19E3ADFD7C0F579AD34F1037E6DD(__this, L_13, L_14, L_15, L_16, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_1;
		U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1* L_18 = V_0;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_19 = (Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*)il2cpp_codegen_object_new(Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Comparison_1__ctor_m7E05FE21370A028EA8A2792D028FFDAD83F24F6C(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass42_0_U3CBuildPtrTableU3Eb__0_m9A531D8BD92B9CFBA87BE3F8E1E185F40387C756_RuntimeMethod_var), NULL);
		Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m89052CD0450CDEC0AE040F2D1982E4DD33A12EF8(L_17, L_19, Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m89052CD0450CDEC0AE040F2D1982E4DD33A12EF8_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* MemoryBlock_BuildPtrTable_mCEEB9BA7FB84D9BE7D013E11B1331AAEF4066CEC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_numberOfRows, int32_t ___1_rowSize, int32_t ___2_referenceOffset, bool ___3_isReferenceSmall, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* _returnValue;
	_returnValue = MemoryBlock_BuildPtrTable_mCEEB9BA7FB84D9BE7D013E11B1331AAEF4066CEC(_thisAdjusted, ___0_numberOfRows, ___1_rowSize, ___2_referenceOffset, ___3_isReferenceSmall, method);
	return _returnValue;
}
// System.Void System.Reflection.Internal.MemoryBlock::ReadColumn(System.UInt32[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryBlock_ReadColumn_mA00D7CD0686A19E3ADFD7C0F579AD34F1037E6DD (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_result, int32_t ___1_rowSize, int32_t ___2_referenceOffset, bool ___3_isReferenceSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_referenceOffset;
		V_0 = L_0;
		int32_t L_1 = __this->___Length_1;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_result;
		int32_t L_3 = V_2;
		int32_t L_4 = V_0;
		bool L_5 = ___3_isReferenceSmall;
		uint32_t L_6;
		L_6 = MemoryBlock_PeekReferenceUnchecked_m10539714FB1A35C1097EA327F3AB69171A8BBED7(__this, L_4, L_5, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_6);
		int32_t L_7 = V_0;
		int32_t L_8 = ___1_rowSize;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0021:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryBlock_ReadColumn_mA00D7CD0686A19E3ADFD7C0F579AD34F1037E6DD_AdjustorThunk (RuntimeObject* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_result, int32_t ___1_rowSize, int32_t ___2_referenceOffset, bool ___3_isReferenceSmall, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	MemoryBlock_ReadColumn_mA00D7CD0686A19E3ADFD7C0F579AD34F1037E6DD(_thisAdjusted, ___0_result, ___1_rowSize, ___2_referenceOffset, ___3_isReferenceSmall, method);
}
// System.Boolean System.Reflection.Internal.MemoryBlock::PeekHeapValueOffsetAndSize(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryBlock_PeekHeapValueOffsetAndSize_m4A151214840A8B6F124AD282329300E0DD0A8546 (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_index, int32_t* ___1_offset, int32_t* ___2_size, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = MemoryBlock_PeekCompressedInteger_m4D4F6570A2013AE787E31AC46DCC58B8F3593096(__this, L_0, (&V_0), NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_3 = ___1_offset;
		*((int32_t*)L_3) = (int32_t)0;
		int32_t* L_4 = ___2_size;
		*((int32_t*)L_4) = (int32_t)0;
		return (bool)0;
	}

IL_001a:
	{
		int32_t* L_5 = ___1_offset;
		int32_t L_6 = ___0_index;
		int32_t L_7 = V_0;
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7));
		int32_t* L_8 = ___2_size;
		int32_t L_9 = V_1;
		*((int32_t*)L_8) = (int32_t)L_9;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool MemoryBlock_PeekHeapValueOffsetAndSize_m4A151214840A8B6F124AD282329300E0DD0A8546_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, int32_t* ___1_offset, int32_t* ___2_size, const RuntimeMethod* method)
{
	MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4*>(__this + _offset);
	bool _returnValue;
	_returnValue = MemoryBlock_PeekHeapValueOffsetAndSize_m4A151214840A8B6F124AD282329300E0DD0A8546(_thisAdjusted, ___0_index, ___1_offset, ___2_size, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void System.Reflection.Internal.MemoryBlock/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_m1C2BD97CBE389B69E266F4C0710A422908BBAE41 (U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 System.Reflection.Internal.MemoryBlock/<>c__DisplayClass42_0::<BuildPtrTable>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass42_0_U3CBuildPtrTableU3Eb__0_m9A531D8BD92B9CFBA87BE3F8E1E185F40387C756 (U3CU3Ec__DisplayClass42_0_tD22E823E4C0582D71BB128B9291FCFF5864B43A1* __this, int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___unsortedReferences_0;
		int32_t L_1 = ___0_a;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___unsortedReferences_0;
		int32_t L_3 = ___1_b;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = UInt32_CompareTo_mC96F15BE2B06C0268AD1D110D3251CE4DBA43907(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_1, 1))))), L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Reflection.Internal.MemoryMapLightUp::get_IsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryMapLightUp_get_IsAvailable_mEEF5B8BF893F20AE4BE5A9E7177A7D68DA098967 (const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.IDisposable System.Reflection.Internal.MemoryMapLightUp::CreateMemoryMap(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemoryMapLightUp_CreateMemoryMap_m16B99AB1C1AA4C4996717876E91DFB23506C4133 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441* L_1;
		L_1 = MemoryMappedFile_CreateFromFile_m858E57D20FAEF69E7D73E520A3D70669C940C6EC(((FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)CastclassClass((RuntimeObject*)L_0, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var)), (String_t*)NULL, ((int64_t)0), 1, 0, (bool)1, NULL);
		return L_1;
	}
}
// System.IDisposable System.Reflection.Internal.MemoryMapLightUp::CreateViewAccessor(System.Object,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemoryMapLightUp_CreateViewAccessor_m56C3CBB62885B6A959A59617D77EFE981F8BB217 (RuntimeObject* ___0_memoryMap, int64_t ___1_start, int32_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		RuntimeObject* L_0 = ___0_memoryMap;
		int64_t L_1 = ___1_start;
		int32_t L_2 = ___2_size;
		NullCheck(((MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441*)CastclassClass((RuntimeObject*)L_0, MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441_il2cpp_TypeInfo_var)));
		MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51* L_3;
		L_3 = MemoryMappedFile_CreateViewAccessor_m39379226511F7E8344FE61D7696E64B454E0523C(((MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441*)CastclassClass((RuntimeObject*)L_0, MemoryMappedFile_tBF4087F55084B3727E6419A1254F4865AED22441_il2cpp_TypeInfo_var)), L_1, ((int64_t)L_2), 1, NULL);
		V_0 = L_3;
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.UnauthorizedAccessException)
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_4 = ((UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*)IL2CPP_GET_ACTIVE_EXCEPTION(UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*));;
		V_1 = L_4;
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_7 = V_1;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_8 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_8, L_6, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoryMapLightUp_CreateViewAccessor_m56C3CBB62885B6A959A59617D77EFE981F8BB217_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0020:
	{
		RuntimeObject* L_9 = V_0;
		return L_9;
	}
}
// System.Boolean System.Reflection.Internal.MemoryMapLightUp::TryGetSafeBufferAndPointerOffset(System.Object,System.Runtime.InteropServices.SafeBuffer&,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryMapLightUp_TryGetSafeBufferAndPointerOffset_m127FF4B12A2BF3CE1D2D1FF622B231BF91796CD7 (RuntimeObject* ___0_accessor, SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE** ___1_safeBuffer, int64_t* ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_accessor;
		V_0 = ((MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51*)CastclassSealed((RuntimeObject*)L_0, MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51_il2cpp_TypeInfo_var));
		SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE** L_1 = ___1_safeBuffer;
		MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51* L_2 = V_0;
		NullCheck(L_2);
		SafeMemoryMappedViewHandle_t4AF1B5F8EE03E577D267028C7BA3BF6D1507EB5F* L_3;
		L_3 = MemoryMappedViewAccessor_get_SafeMemoryMappedViewHandle_m189BA8E33FB68481A2C0899A1B44CDCB278A032C(L_2, NULL);
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_3);
		int64_t* L_4 = ___2_offset;
		MemoryMappedViewAccessor_t29B733DAFACC7F2DFEFCAA38C399D2442D951C51* L_5 = V_0;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = MemoryMappedViewAccessor_get_PointerOffset_mC79ECF7D095DCCBA6A9EC01187B87FDCE4C56E82(L_5, NULL);
		*((int64_t*)L_4) = (int64_t)L_6;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::.ctor(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyUnmanagedMemoryStream__ctor_mC6A0E9412A06424F91C136273A6330C80622F024 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, uint8_t* ___0_data, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		uint8_t* L_0 = ___0_data;
		__this->____data_5 = L_0;
		int32_t L_1 = ___1_length;
		__this->____length_6 = L_1;
		return;
	}
}
// System.Int32 System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyUnmanagedMemoryStream_ReadByte_m659A974DA7E7C5C2CB1373F735B76C3B1BB3AAE4 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____position_7;
		int32_t L_1 = __this->____length_6;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (-1);
	}

IL_0010:
	{
		uint8_t* L_2 = __this->____data_5;
		int32_t L_3 = __this->____position_7;
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->____position_7 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		int32_t L_6 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_5))));
		return L_6;
	}
}
// System.Int32 System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyUnmanagedMemoryStream_Read_mCE964F5D34D592A79C3B984A8689B58FA477B3C4 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___2_count;
		int32_t L_1 = __this->____length_6;
		int32_t L_2 = __this->____position_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, L_2)), NULL);
		V_0 = L_3;
		uint8_t* L_4 = __this->____data_5;
		int32_t L_5 = __this->____position_7;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_5)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_buffer;
		int32_t L_8 = ___1_offset;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_6, L_7, L_8, L_9, NULL);
		int32_t L_10 = __this->____position_7;
		int32_t L_11 = V_0;
		__this->____position_7 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Void System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyUnmanagedMemoryStream_Flush_mB9F674192E912DD6D6AF06B03A7480CFC45FDA6F (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyUnmanagedMemoryStream_get_CanRead_m4BBC76C771E7E9CFEE03B929BA784C19028AEBA0 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyUnmanagedMemoryStream_get_CanSeek_mE3FAE2B83656A0DC79555F5DC5C5793E1E19C0B7 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyUnmanagedMemoryStream_get_CanWrite_mD35EE357AFC80B679A8C89D768E4AB7182415F88 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int64 System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ReadOnlyUnmanagedMemoryStream_get_Length_m4ED81D5F5EDEC1B2FCB3F96CD39ED16E44487518 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length_6;
		return ((int64_t)L_0);
	}
}
// System.Int64 System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ReadOnlyUnmanagedMemoryStream_get_Position_mB504329AF7AB5E2420E3986E655749E1005A6AC3 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____position_7;
		return ((int64_t)L_0);
	}
}
// System.Void System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyUnmanagedMemoryStream_set_Position_m5C8D34F4164E3B1143C48DF903425A4D582FA740 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		int64_t L_1;
		L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, __this, L_0, 0);
		return;
	}
}
// System.Int64 System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ReadOnlyUnmanagedMemoryStream_Seek_m0A457FCA8599CED9C8B00C38442E1B4412F95B6B (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyUnmanagedMemoryStream_Seek_m0A457FCA8599CED9C8B00C38442E1B4412F95B6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___1_origin;
			switch (L_0)
			{
				case 0:
				{
					goto IL_0014_1;
				}
				case 1:
				{
					goto IL_0018_1;
				}
				case 2:
				{
					goto IL_0024_1;
				}
			}
		}
		{
			goto IL_0030_1;
		}

IL_0014_1:
		{
			int64_t L_1 = ___0_offset;
			V_1 = L_1;
			goto IL_003b_1;
		}

IL_0018_1:
		{
			int64_t L_2 = ___0_offset;
			int32_t L_3 = __this->____position_7;
			if (il2cpp_codegen_check_add_overflow((int64_t)L_2, (int64_t)((int64_t)L_3)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ReadOnlyUnmanagedMemoryStream_Seek_m0A457FCA8599CED9C8B00C38442E1B4412F95B6B_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add(L_2, ((int64_t)L_3)));
			goto IL_003b_1;
		}

IL_0024_1:
		{
			int64_t L_4 = ___0_offset;
			int32_t L_5 = __this->____length_6;
			if (il2cpp_codegen_check_add_overflow((int64_t)L_4, (int64_t)((int64_t)L_5)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ReadOnlyUnmanagedMemoryStream_Seek_m0A457FCA8599CED9C8B00C38442E1B4412F95B6B_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)L_5)));
			goto IL_003b_1;
		}

IL_0030_1:
		{
			ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
			NullCheck(L_6);
			ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyUnmanagedMemoryStream_Seek_m0A457FCA8599CED9C8B00C38442E1B4412F95B6B_RuntimeMethod_var)));
		}

IL_003b_1:
		{
			int64_t L_7 = V_1;
			V_0 = L_7;
			goto IL_004b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003f;
		}
		throw e;
	}

CATCH_003f:
	{// begin catch(System.OverflowException)
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_8 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyUnmanagedMemoryStream_Seek_m0A457FCA8599CED9C8B00C38442E1B4412F95B6B_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_004b:
	{
		int64_t L_10 = V_0;
		if ((((int64_t)L_10) < ((int64_t)((int64_t)0))))
		{
			goto IL_0059;
		}
	}
	{
		int64_t L_11 = V_0;
		if ((((int64_t)L_11) <= ((int64_t)((int64_t)((int32_t)2147483647LL)))))
		{
			goto IL_0064;
		}
	}

IL_0059:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyUnmanagedMemoryStream_Seek_m0A457FCA8599CED9C8B00C38442E1B4412F95B6B_RuntimeMethod_var)));
	}

IL_0064:
	{
		int64_t L_13 = V_0;
		__this->____position_7 = ((int32_t)L_13);
		int64_t L_14 = V_0;
		return L_14;
	}
}
// System.Void System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyUnmanagedMemoryStream_SetLength_mA639F8EC19C8F35B460076069C788D2610351268 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyUnmanagedMemoryStream_SetLength_mA639F8EC19C8F35B460076069C788D2610351268_RuntimeMethod_var)));
	}
}
// System.Void System.Reflection.Internal.ReadOnlyUnmanagedMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyUnmanagedMemoryStream_Write_mA3BB0F2156829DD1B8123DAC227BB6019D3D8F86 (ReadOnlyUnmanagedMemoryStream_t48E65289184AC503AEA78CFFE643FDC2510E6357* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyUnmanagedMemoryStream_Write_mA3BB0F2156829DD1B8123DAC227BB6019D3D8F86_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Reflection.Internal.StreamExtensions::CopyTo(System.IO.Stream,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamExtensions_CopyTo_mAB508C247F7620DD48138BCB36B0924F2A6E43AB (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_source, uint8_t* ___1_destination, int32_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_size;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)81920), L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		goto IL_0052;
	}

IL_0013:
	{
		int32_t L_3 = ___2_size;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		V_1 = L_5;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_source;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int32_t L_9;
		L_9 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, L_8);
		V_2 = L_9;
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var)));
		String_t* L_13;
		L_13 = SR_get_UnexpectedStreamEnd_m41D78D957A499561C7B42F02868B3297931CC33B(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_14 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamExtensions_CopyTo_mAB508C247F7620DD48138BCB36B0924F2A6E43AB_RuntimeMethod_var)));
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		uint8_t* L_16 = ___1_destination;
		intptr_t L_17;
		L_17 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_16, NULL);
		int32_t L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_15, 0, L_17, L_18, NULL);
		uint8_t* L_19 = ___1_destination;
		int32_t L_20 = V_2;
		___1_destination = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, L_20));
		int32_t L_21 = ___2_size;
		int32_t L_22 = V_2;
		___2_size = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0052:
	{
		int32_t L_23 = ___2_size;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Reflection.Internal.StreamExtensions::TryReadAll(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamExtensions_TryReadAll_mD01A8989BE7935968B864B141AC79D2FEC835EF4 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_offset, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		V_0 = 0;
		goto IL_001b;
	}

IL_0006:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		int32_t L_2 = ___2_offset;
		int32_t L_3 = V_0;
		int32_t L_4 = ___3_count;
		int32_t L_5 = V_0;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)), ((int32_t)il2cpp_codegen_subtract(L_4, L_5)));
		V_1 = L_6;
		int32_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___3_count;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0006;
		}
	}

IL_001f:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 System.Reflection.Internal.StreamExtensions::GetAndValidateSize(System.IO.Stream,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamExtensions_GetAndValidateSize_m30426B5CF90CD613518791F6995EB331DF47EDD7 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_size, String_t* ___2_streamParameterName, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_1, L_3));
		int32_t L_4 = ___1_size;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_5 = ___1_size;
		int64_t L_6 = V_0;
		if ((((int64_t)((int64_t)L_5)) <= ((int64_t)L_6)))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamExtensions_GetAndValidateSize_m30426B5CF90CD613518791F6995EB331DF47EDD7_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_8 = ___1_size;
		if (!L_8)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_9 = ___1_size;
		return L_9;
	}

IL_0027:
	{
		int64_t L_10 = V_0;
		if ((((int64_t)L_10) <= ((int64_t)((int64_t)((int32_t)2147483647LL)))))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t16A5FFF876D63D6E3093E6B7109AF6739D858B10_il2cpp_TypeInfo_var)));
		String_t* L_11;
		L_11 = SR_get_StreamTooLarge_m6C8FC4D21595727E92E69B517B964735BF2F5EDB(NULL);
		String_t* L_12 = ___2_streamParameterName;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_11, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamExtensions_GetAndValidateSize_m30426B5CF90CD613518791F6995EB331DF47EDD7_RuntimeMethod_var)));
	}

IL_003c:
	{
		int64_t L_14 = V_0;
		return ((int32_t)L_14);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m5D5EC55FC25543B7485B36A8A63E3AE393651156 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* String_CreateStringFromEncoding_Invoke_m614A1A1641C64E8345A3D78FAA1920AAD47B357C_inline (String_CreateStringFromEncoding_t27DB17864E34696522DD8E8EE419299B8BE0BFBD* __this, uint8_t* ___0_bytes, int32_t ___1_byteCount, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_encoding, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, uint8_t*, int32_t, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_bytes, ___1_byteCount, ___2_encoding, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, int32_t ___1_byteCount, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_offset;
		int32_t L_1 = ___1_byteCount;
		int32_t L_2 = __this->___Length_1;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_0)), ((int64_t)(uint64_t)((uint32_t)L_1))))) > ((uint64_t)((int64_t)L_2)))))
		{
			goto IL_0013;
		}
	}
	{
		Throw_OutOfBounds_mA9594949C36427E7EA8194E19C96DBC7E1D47859(NULL);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MemoryBlock_PeekUInt32_m9A9BC388B26AD5D3C6AB202D80C0B97AD5C479D0_inline (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 4, NULL);
		uint8_t* L_1 = __this->___Pointer_0;
		int32_t L_2 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		uint8_t* L_3 = V_0;
		int32_t L_4 = (*(L_3));
		uint8_t* L_5 = V_0;
		int32_t L_6 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, 1))));
		uint8_t* L_7 = V_0;
		int32_t L_8 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 2))));
		uint8_t* L_9 = V_0;
		int32_t L_10 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, 3))));
		return ((int32_t)(((int32_t)(((int32_t)(L_4|((int32_t)(L_6<<8))))|((int32_t)(L_8<<((int32_t)16)))))|((int32_t)(L_10<<((int32_t)24)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t MemoryBlock_PeekUInt16_m747FC62519D3F342CD5272CD7F056898008C8E60_inline (MemoryBlock_t0EE42E46D8DEE5401A8DD94FD367FDBC5135D3B4* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		int32_t L_0 = ___0_offset;
		MemoryBlock_CheckBounds_mA050F72A4724E27092E87F67010C931EC3C33F0A_inline(__this, L_0, 2, NULL);
		uint8_t* L_1 = __this->___Pointer_0;
		int32_t L_2 = ___0_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		uint8_t* L_3 = V_0;
		int32_t L_4 = (*(L_3));
		uint8_t* L_5 = V_0;
		int32_t L_6 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, 1))));
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(L_4|((int32_t)(L_6<<8)))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
