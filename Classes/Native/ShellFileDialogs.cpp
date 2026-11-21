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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>
struct IReadOnlyCollection_1_t6A123C2A058C1CEBFAD8EBC5D73C769B6A3CC101;
// System.Collections.Generic.IReadOnlyList`1<System.String>
struct IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ShellFileDialogs.FilterSpec[]
struct FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t6144BF222559F5F3ED0C952784FC4FE9D7C88FD2;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C;
// ShellFileDialogs.FileOpenDialogRCW
struct FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326;
// ShellFileDialogs.Filter
struct Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A;
// ShellFileDialogs.FilterSpec
struct FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ShellFileDialogs.IFileDialog
struct IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6;
// ShellFileDialogs.IFileOpenDialog
struct IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// ShellFileDialogs.IShellItem
struct IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F;
// ShellFileDialogs.IShellItem2
struct IShellItem2_t82F85584179D524CA57FA2A1799B352E41A7588F;
// ShellFileDialogs.IShellItemArray
struct IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tC948C2210140E40A64F386061A96736D55132DCA;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tF42AE0F89AB7A100FB5A4CBD8A72CD244AA814BD;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9;
// System.__Il2CppComObject
struct Il2CppComObject;
// ShellFileDialogs.Filter/<>c
struct U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HResultFacility_tDFCCC0A0B90FD98B4BB731CE27C1B008D9DDC95C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HResult_t13E0CAA22860D465D135A7DC47BA619E6F1344BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6B8F847A15E0735E716B62FCB5475C8625AA3E53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1A1333FAE161A6F86254C5A96213A934BD81AEB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t6A123C2A058C1CEBFAD8EBC5D73C769B6A3CC101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tBA250D556D09440D4C5D53F04CABE5CE3A25D83C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeFileOpenDialog_t1EEBE8EBFCA31FA246A80CC00C4B778B2BD5D9DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2DB32C6EEC478B74836299646F64F2534846F2C6;
IL2CPP_EXTERN_C String_t* _stringLiteral366D8552AC73D2D3ED9486E4D942D62FA412F781;
IL2CPP_EXTERN_C String_t* _stringLiteral39A27C994025127DC2F3DE39E887894E5E927F39;
IL2CPP_EXTERN_C String_t* _stringLiteral571B1023DF3ABFB94C92465B365B1814FEBFAB3E;
IL2CPP_EXTERN_C String_t* _stringLiteral69BF7DF51F361FE8D22616CEF9D87B68AF10D037;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral79438F0CFC729131E811B764A2C87C953EC05998;
IL2CPP_EXTERN_C String_t* _stringLiteral79E88D091421691C53CC28304934AC732EC25429;
IL2CPP_EXTERN_C String_t* _stringLiteral872C8392F376E20FA8DCE4FAB36C100AFF4B5839;
IL2CPP_EXTERN_C String_t* _stringLiteralAC572477AC18A88D1E39050487F3AFC778BE5AB9;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDAA73D7366F31662EE5F3D7D40D7E9265203CA65;
IL2CPP_EXTERN_C String_t* _stringLiteralDF513241376CA6B5145B578BCFE7BD3DC5BDCAF0;
IL2CPP_EXTERN_C String_t* _stringLiteralE2C326188CCE633078C08E21CB1BB9C19208F5A5;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Filter__ctor_m14E05DEDBB8B5173BA4072836F3B98111B4A45A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HResults_Create_mBE0D8B4E1278A7AA91C321B1A9427D48B2DD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_0_m5E959E81AA66AFC3884C49E02EC26D50E7C5E2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_1_m72336726466D13D78810DECDD025BC8C05D2A5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_GetFileNames_mECAC4B42AAC8695E405037D6600F41ED143076D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_GetShellItemAt_mB50F7AA2A9118A06E9DA4064EB9425D6040081B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_SetFilters_m60330B1D6EEA500BFF79FA41FE3759F5D60C61A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_ValidateDialogShowHResult_m1910FC506925D9A2F9A1607FB345DB668DEB1601_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B;;
struct FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com;
struct FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com;;
struct IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400;
struct IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF612F24C3B5014AE4AF2025A3CD0A0A53A23C3FF 
{
};
// ShellFileDialogs.IShellItem2
struct NOVTABLE IShellItem2_t82F85584179D524CA57FA2A1799B352E41A7588F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped0_BindToHandler_m81AEB11A66EB8C84FFC886446080670C9E5F4BBC() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped1_GetParent_m853AC3C94A61D6865A102B6418A6806FB5262310() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped2_GetDisplayName_mAA5416BD81097C9D48C0CBD0439FE467C1E82626() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped3_GetAttributes_mDF79992006605F9F731768C4DB3E8FDFB477FA3D() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped4_Compare_mDDEF4486E28EC385E6D9100A86AA267B04455A43() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped5_GetPropertyStoreWithCreateObject_m64916D22876086A9B75ACB93A5D0AF90BF195F9E() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped6_GetPropertyDescriptionList_mEDEF8C75EA04E8D5F4284DAC8A4E234F12F262B6() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped7_Update_m1C2761FA6A546A99B4C58EE8A04D190E2B423C06() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped8_GetPropertyStore_m80FE9E678B7F29847E144A204E0AB893B488C9B5() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped9_GetProperty_m73ADF6B49350A76058BEC8A8AD7B653724AA4454() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped10_GetPropertyStoreForKeys_m504FDDE7C99BC8E4A571ECC38F6A886415D0A255() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped11_GetCLSID_mA5DF9BBEEB932AAC55D0732284CFAC3A493955D2() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped12_GetFileTime_mDC8FC7FA520E193F62AB64B462871148913C43A6() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped13_GetInt32_m6D1A7DC77B8091775E3349B13248350DCB5E175F() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped14_GetString_mA55EBE1A240DA191207053334971A955C37C16ED() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped15_GetUInt32_m5BB13FBC2684A76DF43F4C234C4EAC537F5F45E0() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped16_GetUInt64_mE683C8013223C793B57CEE966D9087C9CEEA6170() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem2_U24__Stripped17_GetBool_mC1B5703EF90EB14EDF9D5269414A22ACF6D58C80() = 0;
};
// ShellFileDialogs.NativeFileOpenDialog
struct NOVTABLE NativeFileOpenDialog_t1EEBE8EBFCA31FA246A80CC00C4B778B2BD5D9DD : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// ShellFileDialogs.FileOpenDialog
struct FileOpenDialog_t89704930932B18DF0F9EEE8929BB05547974733D  : public RuntimeObject
{
};

// ShellFileDialogs.FileOpenDialogRCW
struct FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326  : public Il2CppComObject
{
	static const Il2CppGuid CLSID;

};

// ShellFileDialogs.Filter
struct Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A  : public RuntimeObject
{
	// System.String ShellFileDialogs.Filter::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_2;
	// System.Collections.Generic.IReadOnlyList`1<System.String> ShellFileDialogs.Filter::<Extensions>k__BackingField
	RuntimeObject* ___U3CExtensionsU3Ek__BackingField_3;
};

// ShellFileDialogs.HResults
struct HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC  : public RuntimeObject
{
};

// ShellFileDialogs.ShellNativeMethods
struct ShellNativeMethods_t7D75D6A37746AA47368DADBDEF796736662CCCDB  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// ShellFileDialogs.Utility
struct Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6  : public RuntimeObject
{
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

// ShellFileDialogs.Filter/<>c
struct U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A  : public RuntimeObject
{
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t6144BF222559F5F3ED0C952784FC4FE9D7C88FD2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// ShellFileDialogs.FilterSpec
struct FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B 
{
	// System.String ShellFileDialogs.FilterSpec::Name
	String_t* ___Name_0;
	// System.String ShellFileDialogs.FilterSpec::Spec
	String_t* ___Spec_1;
};
// Native definition for P/Invoke marshalling of ShellFileDialogs.FilterSpec
struct FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_pinvoke
{
	Il2CppChar* ___Name_0;
	Il2CppChar* ___Spec_1;
};
// Native definition for COM marshalling of ShellFileDialogs.FilterSpec
struct FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com
{
	Il2CppChar* ___Name_0;
	Il2CppChar* ___Spec_1;
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tC948C2210140E40A64F386061A96736D55132DCA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tF42AE0F89AB7A100FB5A4CBD8A72CD244AA814BD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
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

// ShellFileDialogs.FileOpenOptions
struct FileOpenOptions_tAD93961DEB4898EC7941CEDA135E9F60F92441CA 
{
	// System.Int32 ShellFileDialogs.FileOpenOptions::value__
	int32_t ___value___2;
};

// ShellFileDialogs.HResult
struct HResult_t13E0CAA22860D465D135A7DC47BA619E6F1344BB 
{
	// System.UInt32 ShellFileDialogs.HResult::value__
	uint32_t ___value___2;
};

// ShellFileDialogs.HResultCustomer
struct HResultCustomer_t9464AD3C6FC73EE5DAB5649C915636B3DD5BAA1A 
{
	// System.Int32 ShellFileDialogs.HResultCustomer::value__
	int32_t ___value___2;
};

// ShellFileDialogs.HResultFacility
struct HResultFacility_tDFCCC0A0B90FD98B4BB731CE27C1B008D9DDC95C 
{
	// System.UInt16 ShellFileDialogs.HResultFacility::value__
	uint16_t ___value___2;
};

// ShellFileDialogs.HResultSeverity
struct HResultSeverity_tBE47FD8C8374F84A742F856D1118BE2491BC096E 
{
	// System.Int32 ShellFileDialogs.HResultSeverity::value__
	int32_t ___value___2;
};

// ShellFileDialogs.ShellItemDesignNameOptions
struct ShellItemDesignNameOptions_t555F6109FB71A6FE1FE2A978E4073055072D784A 
{
	// System.Int32 ShellFileDialogs.ShellItemDesignNameOptions::value__
	int32_t ___value___2;
};

// ShellFileDialogs.Win32ErrorCodes
struct Win32ErrorCodes_t9C15D46C41AADABD2D70924AF855B03F581F581F 
{
	// System.UInt16 ShellFileDialogs.Win32ErrorCodes::value__
	uint16_t ___value___2;
};
// ShellFileDialogs.IFileDialog
struct NOVTABLE IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual uint32_t STDCALL IFileDialog_Show_m53F82450A7CD3F1C926963ADCDF2655830D8D7C6(intptr_t ___0_parent) = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_SetFileTypes_mE6F60F0DA8BE0DD869F8F2B8ABACC982560C910F(uint32_t ___0_cFileTypes, FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com* ___1_rgFilterSpec) = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_SetFileTypeIndex_m27B4E6E1BFBB49B6EA48515697AAA8CAADAE46FB(uint32_t ___0_iFileType) = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped0_GetFileTypeIndex_mB2A307327904171CECECD93D94C8AD63F999C9F1() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped1_Advise_m18E5210FD96295E048A36E6EA9457007C982B228() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped2_Unadvise_m543D325F5FB6C81002DD6429A0E336C1252E7C15() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_SetOptions_m0A6412AEEAD1FD7F447F95A6EFFAD4204A2FA375(int32_t ___0_fos) = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped3_GetOptions_m5792D646F90BEAA2F23765561E8FB4C9B155783D() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped4_SetDefaultFolder_m6BE0268818F34446FF6376E304DB83E930B18436() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_SetFolder_m0EF2EE0412E729711623BF93EA87F5937A5095F8(IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F* ___0_psi) = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped5_GetFolder_m756C867D5C69E02E6682407A352BDF9C977E8080() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped6_GetCurrentSelection_mBB3CB97C8625CED78048BEC5829174FAD43C19D2() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_SetFileName_m8E3A7CBAB867021511A566530ABCD0483501975A(Il2CppChar* ___0_pszName) = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped7_GetFileName_mEE2D168C3E2A551ED25A5F8C2577305D9B74FD14() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_SetTitle_m280156FA9CC0D128EB86DC6DE2F0FF6093885891(Il2CppChar* ___0_pszTitle) = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped8_SetOkButtonLabel_m99C11D53BBD56CC29A3C4467C9F0B3A43597BC08() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped9_SetFileNameLabel_mBCA9EC8DD11BF44868FD2A6AB4DF40976FA34E45() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped10_GetResult_mEF13F76FA49D107C9E109F555B3943976E4E9F20() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped11_AddPlace_mE7330D52B08C6E4704256FFDFB9014FC397EC122() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped12_SetDefaultExtension_mC765C6514C575187D77261C6539CD0558BF58D25() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped13_Close_m1E941795CEE8219587ED55B3981DABDA476EE654() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped14_SetClientGuid_m23F93ADA7018DB4402C99FBAB372E7A0FFB56036() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped15_ClearClientData_m22436FE56402B2109D5B6D987FAEE47DF74CFDF2() = 0;
	virtual il2cpp_hresult_t STDCALL IFileDialog_U24__Stripped16_SetFilter_mB93010956A07BFD07E1DF66DB90B80435573FD45() = 0;
};
// ShellFileDialogs.IFileOpenDialog
struct NOVTABLE IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual uint32_t STDCALL IFileOpenDialog_Show_mEBCE75A83AFE5FF1B52B6E34BA9865549DD8C099(intptr_t ___0_parent) = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped0_SetFileTypes_mA15DA290D54B3775F1B6B30442FA73811FDB88FE() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_SetFileTypeIndex_m3ABAE36CA011556B8389C49F89DD68F17DA5E5D1(uint32_t ___0_iFileType) = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped1_GetFileTypeIndex_m4F8541D2312E7287808C71C655C6B905A067DBEF() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped2_Advise_m2A2516D59D1538878415851BAD05938BAB20B50E() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped3_Unadvise_mA6EF58F302793DB1F92B967DE4184788C5551A94() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_SetOptions_mE3CC937B537F7F77A56F336CD035BBCB00F3CF5C(int32_t ___0_fos) = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped4_GetOptions_mCD6515BA76D07608B8B74B00BA3AEABD1A5CA30A() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped5_SetDefaultFolder_m95D977E2D1D05E04FAA4C1862AF04BB976180E88() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_SetFolder_m1B526CC6AFDDA9FCF569BB98076E785254400140(IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F* ___0_psi) = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped6_GetFolder_mA4129B3E1C7E0B125726CB33C839726D23E82F14() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped7_GetCurrentSelection_m8F3F8CB82BA2A36D382C3E24F8275E417FE2781D() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_SetFileName_mE305A728B48E3AF1713A42A04A95C1FFFE1B440C(Il2CppChar* ___0_pszName) = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped8_GetFileName_m971E85A2C16BFDFDEA35315CBFF68727E16684BE() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_SetTitle_m37CAF003F5A234FB2762D1D8BD9F159D8456C30A(Il2CppChar* ___0_pszTitle) = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped9_SetOkButtonLabel_m07F66375F2270D80697C2CD21D9316D50A8A15B3() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped10_SetFileNameLabel_mB6B4B7370077BE7A0B1DD032D1F0B9D495F0097A() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped11_GetResult_mB8A05E273438F724B998943AC5ECFA8521BD67E7() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped12_AddPlace_m2A70E719024A91C4E286F6D34D6E57E0E2FC7F08() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped13_SetDefaultExtension_m163817D6D5D3572409DDDC33B1CEE28C991CEE9E() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped14_Close_m6F84F24EA701090081025A9336E0114D6DEAED41() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped15_SetClientGuid_m863EDAD7C53ABFEEA9180E3CAB21042678EB001F() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped16_ClearClientData_m3F1D37F74D452D74B06674B501B075DDE11DB26E() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped17_SetFilter_m285CA2C8AED1EE0CD66EF26E0ABB6759044426DF() = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_GetResults_m63F9552A6A9B75D93B29800D81F1179A89A4F037(IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400** ___0_ppenum) = 0;
	virtual il2cpp_hresult_t STDCALL IFileOpenDialog_U24__Stripped18_GetSelectedItems_m10E457E98F0426E87F519140566F4FB39EDACADB() = 0;
};
// ShellFileDialogs.IModalWindow
struct NOVTABLE IModalWindow_tCEEDECECEA1BD6712FA176A694D5AD3CE02E4BDE : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual uint32_t STDCALL IModalWindow_Show_mB69066E8BC457A21CAA80BB0ED9B53B2B17AD78C(intptr_t ___0_parent) = 0;
};
// ShellFileDialogs.IShellItem
struct NOVTABLE IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IShellItem_U24__Stripped0_BindToHandler_m5A88EF2628D5CBAD1FD5894D110F748308FF9B39() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem_U24__Stripped1_GetParent_m6678319017CA934A979049376FC5C5D2791E821D() = 0;
	virtual uint32_t STDCALL IShellItem_GetDisplayName_m5003AFFF04EAEB028278383F4DD871C3A82C0738(int32_t ___0_sigdnName, intptr_t* ___1_ppszName) = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem_U24__Stripped2_GetAttributes_mC81B1866B28D4147602C3D8E1605CA608E72792B() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItem_U24__Stripped3_Compare_m87D316D1E30C9D35F707DE47BE854DD1C9E045E5() = 0;
};
// ShellFileDialogs.IShellItemArray
struct NOVTABLE IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IShellItemArray_U24__Stripped0_BindToHandler_m53E6FCCE3961E765702F63DA494713CE68D5892C() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItemArray_U24__Stripped1_GetPropertyStore_mBF0085ED59B2ED6A8C8EA13D441986768D936D16() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItemArray_U24__Stripped2_GetPropertyDescriptionList_mC3C8126133F6E47B7E1EFF7A69B7FC4272DA993F() = 0;
	virtual il2cpp_hresult_t STDCALL IShellItemArray_U24__Stripped3_GetAttributes_mC8B271C79D3801026EB2C69E048B0C51C3D35D36() = 0;
	virtual uint32_t STDCALL IShellItemArray_GetCount_m23D1F49516146676448D4E8250CAF2F1EDFB3728(uint32_t* ___0_pdwNumItems) = 0;
	virtual uint32_t STDCALL IShellItemArray_GetItemAt_mCB248AD3A9E8C612E031D7636D8CD5CA05A0F05B(uint32_t ___0_dwIndex, IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F** ___1_ppsi) = 0;
	virtual il2cpp_hresult_t STDCALL IShellItemArray_U24__Stripped4_EnumItems_m7EF76B975B8AFD602D417C5EFFE9FA26B6CDADFB() = 0;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Attribute

// System.Attribute

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// ShellFileDialogs.FileOpenDialog

// ShellFileDialogs.FileOpenDialog

// ShellFileDialogs.FileOpenDialogRCW

// ShellFileDialogs.FileOpenDialogRCW

// ShellFileDialogs.Filter
struct Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_StaticFields
{
	// System.Char[] ShellFileDialogs.Filter::_semiColon
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____semiColon_0;
	// System.Char[] ShellFileDialogs.Filter::_pipe
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____pipe_1;
};

// ShellFileDialogs.Filter

// ShellFileDialogs.HResults
struct HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_StaticFields
{
	// ShellFileDialogs.HResult ShellFileDialogs.HResults::Cancelled
	uint32_t ___Cancelled_0;
};

// ShellFileDialogs.HResults

// ShellFileDialogs.ShellNativeMethods

// ShellFileDialogs.ShellNativeMethods

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// ShellFileDialogs.Utility
struct Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_StaticFields
{
	// System.Guid ShellFileDialogs.Utility::_ishellItem2Guid
	Guid_t ____ishellItem2Guid_0;
};

// ShellFileDialogs.Utility

// ShellFileDialogs.Filter/<>c
struct U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields
{
	// ShellFileDialogs.Filter/<>c ShellFileDialogs.Filter/<>c::<>9
	U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A* ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> ShellFileDialogs.Filter/<>c::<>9__3_0
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__3_0_1;
	// System.Func`2<System.String,System.Boolean> ShellFileDialogs.Filter/<>c::<>9__3_1
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__3_1_2;
};

// ShellFileDialogs.Filter/<>c

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

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

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// ShellFileDialogs.FilterSpec

// ShellFileDialogs.FilterSpec

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// ShellFileDialogs.FileOpenOptions

// ShellFileDialogs.FileOpenOptions

// ShellFileDialogs.HResult

// ShellFileDialogs.HResult

// ShellFileDialogs.HResultCustomer

// ShellFileDialogs.HResultCustomer

// ShellFileDialogs.HResultFacility

// ShellFileDialogs.HResultFacility

// ShellFileDialogs.HResultSeverity

// ShellFileDialogs.HResultSeverity

// ShellFileDialogs.ShellItemDesignNameOptions

// ShellFileDialogs.ShellItemDesignNameOptions

// ShellFileDialogs.Win32ErrorCodes

// ShellFileDialogs.Win32ErrorCodes

// System.Func`2<System.String,System.Boolean>

// System.Func`2<System.String,System.Boolean>

// System.Func`2<System.String,System.String>

// System.Func`2<System.String,System.String>

// System.ArgumentException

// System.ArgumentException

// System.Runtime.InteropServices.ExternalException

// System.Runtime.InteropServices.ExternalException

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.ComponentModel.Win32Exception

// System.ComponentModel.Win32Exception
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// ShellFileDialogs.FilterSpec[]
struct FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB  : public RuntimeArray
{
	ALIGN_FIELD (8) FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B m_Items[1];

	inline FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Spec_1), (void*)NULL);
		#endif
	}
	inline FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Spec_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_com(const FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B& unmarshaled, FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_com_back(const FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com& marshaled, FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B& unmarshaled);
IL2CPP_EXTERN_C void FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_com_cleanup(FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com& marshaled);

// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<System.String> ShellFileDialogs.FileOpenDialog::ShowDialog(System.IntPtr,System.String,System.String,System.String,System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>,System.Nullable`1<System.Int32>,ShellFileDialogs.FileOpenOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileOpenDialog_ShowDialog_mFBD6A03829C82667473385F59189725ECDB07B28 (intptr_t ___0_parentHWnd, String_t* ___1_title, String_t* ___2_initialDirectory, String_t* ___3_defaultFileName, RuntimeObject* ___4_filters, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___5_selectedFilterZeroBasedIndex, int32_t ___6_flags, const RuntimeMethod* method) ;
// System.Void ShellFileDialogs.FileOpenDialogRCW::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileOpenDialogRCW__ctor_m25AABF6AF2340B75A5B70E672A88110E48FFF5EC (FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326* __this, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::ReleaseComObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_ReleaseComObject_m427B8E86509C3B6D6797D39B1AAD6A44084F2921 (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Collections.Generic.IReadOnlyList`1<System.String> ShellFileDialogs.FileOpenDialog::ShowDialogInner(ShellFileDialogs.IFileOpenDialog,System.IntPtr,System.String,System.String,System.String,System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>,System.Int32,ShellFileDialogs.FileOpenOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileOpenDialog_ShowDialogInner_m917A963B0BBF53A4B5CFC4D228D8D2A36A4CA771 (RuntimeObject* ___0_dialog, intptr_t ___1_parentHWnd, String_t* ___2_title, String_t* ___3_initialDirectory, String_t* ___4_defaultFileName, RuntimeObject* ___5_filters, int32_t ___6_selectedFilterZeroBasedIndex, int32_t ___7_flags, const RuntimeMethod* method) ;
// ShellFileDialogs.IShellItem2 ShellFileDialogs.Utility::ParseShellItem2Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utility_ParseShellItem2Name_m9CE9F6F5BF1582BCBD5DCB026BC952709C2151AC (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void ShellFileDialogs.Utility::SetFilters(ShellFileDialogs.IFileDialog,System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetFilters_m60330B1D6EEA500BFF79FA41FE3759F5D60C61A7 (RuntimeObject* ___0_dialog, RuntimeObject* ___1_filters, int32_t ___2_selectedFilterZeroBasedIndex, const RuntimeMethod* method) ;
// System.Boolean ShellFileDialogs.Utility::ValidateDialogShowHResult(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_ValidateDialogShowHResult_m1910FC506925D9A2F9A1607FB345DB668DEB1601 (uint32_t ___0_dialogHResult, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<System.String> ShellFileDialogs.Utility::GetFileNames(ShellFileDialogs.IShellItemArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utility_GetFileNames_mECAC4B42AAC8695E405037D6600F41ED143076D3 (RuntimeObject* ___0_items, const RuntimeMethod* method) ;
// System.Void ShellFileDialogs.Filter::.ctor(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter__ctor_m14E05DEDBB8B5173BA4072836F3B98111B4A45A7 (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, String_t* ___0_displayName, RuntimeObject* ___1_extensions, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814 (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6 (RuntimeObject* ___0_source, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A (RuntimeObject* ___0_source, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Collections.Generic.IReadOnlyList`1<System.String> ShellFileDialogs.Filter::get_Extensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Filter_get_Extensions_m831628883D9DCB568E09E1F019D39527C40F7F82_inline (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String ShellFileDialogs.Filter::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Filter_get_DisplayName_m9749560E833ED0B8B994DCA22D9AEC63BDB5E1B5_inline (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) ;
// System.Void ShellFileDialogs.Filter::ToExtensionList(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_ToExtensionList_mF0CBED8BDBA7E8F1D4E634BEAEBBE9CE568733FE (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
// System.String ShellFileDialogs.Filter::ToFilterSpecString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Filter_ToFilterSpecString_m3966669183DBC57EDF8F7C53BC93520956382CA4 (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) ;
// System.Void ShellFileDialogs.FilterSpec::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterSpec__ctor_m13B549B01A9F856AF46E05EEF141D7852C2FD158 (FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B* __this, String_t* ___0_name, String_t* ___1_spec, const RuntimeMethod* method) ;
// System.Void ShellFileDialogs.Filter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDA8363472F77A49648E390F96B12FAEFED31EA25 (U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A* __this, const RuntimeMethod* method) ;
// ShellFileDialogs.HResult ShellFileDialogs.HResults::Create(System.Boolean,System.Boolean,ShellFileDialogs.HResultFacility,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HResults_Create_mBE0D8B4E1278A7AA91C321B1A9427D48B2DD8F9C (bool ___0_isFailure, bool ___1_isCustomer, uint16_t ___2_facility, uint16_t ___3_code, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
// System.UInt16 ShellFileDialogs.HResults::GetCode(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HResults_GetCode_m65EEB95917551B9AAD1712DF735DD7DD021DA700 (uint32_t ___0_hr, const RuntimeMethod* method) ;
// System.Boolean ShellFileDialogs.HResults::IsValidHResult(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HResults_IsValidHResult_m65F92DF8D134400CBFAC4DBC9B0D003DB48EB5F1 (uint32_t ___0_hr, const RuntimeMethod* method) ;
// ShellFileDialogs.HResultCustomer ShellFileDialogs.HResults::GetCustomer(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HResults_GetCustomer_m8ED5F264E1C04C69E2BD162A3AAEF7790D1A6ED6 (uint32_t ___0_hr, const RuntimeMethod* method) ;
// ShellFileDialogs.HResultFacility ShellFileDialogs.HResults::GetFacility(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HResults_GetFacility_m061B4488B3938083590B891D3E2F5A4194AFBCC2 (uint32_t ___0_hr, const RuntimeMethod* method) ;
// ShellFileDialogs.HResultSeverity ShellFileDialogs.HResults::GetSeverity(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HResults_GetSeverity_m29B67711B0BE6638A24FED6B4CB661326FA8011A (uint32_t ___0_hr, const RuntimeMethod* method) ;
// ShellFileDialogs.HResult ShellFileDialogs.HResults::CreateWin32(ShellFileDialogs.Win32ErrorCodes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HResults_CreateWin32_mFB1219D9BD63115D05E502C6816F4E05AA84A51B (uint16_t ___0_code, const RuntimeMethod* method) ;
// System.Void System.__Il2CppComObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m720B2062F661A0770A32D24B731AD4AFE314A5CD (Il2CppComObject* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// ShellFileDialogs.IShellItem ShellFileDialogs.Utility::GetShellItemAt(ShellFileDialogs.IShellItemArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utility_GetShellItemAt_mB50F7AA2A9118A06E9DA4064EB9425D6040081B8 (RuntimeObject* ___0_array, int32_t ___1_i, const RuntimeMethod* method) ;
// System.String ShellFileDialogs.Utility::GetFileNameFromShellItem(ShellFileDialogs.IShellItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utility_GetFileNameFromShellItem_m6B9A2D7DF29EC9E544EBEC199D929DB2040EBEF9 (RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// ShellFileDialogs.HResult ShellFileDialogs.ShellNativeMethods::SHCreateItemFromParsingName(System.String,System.IntPtr,System.Guid&,ShellFileDialogs.IShellItem2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ShellNativeMethods_SHCreateItemFromParsingName_mC7C3CF1B7135BCAD42CDE082CCB8B41B923B592C (String_t* ___0_path, intptr_t ___1_pbc, Guid_t* ___2_riid, RuntimeObject** ___3_shellItem, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// ShellFileDialogs.FilterSpec[] ShellFileDialogs.Utility::CreateFilterSpec(System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* Utility_CreateFilterSpec_m5963360EB4D77B5907FA42376691AD1B11D9B501 (RuntimeObject* ___0_filters, const RuntimeMethod* method) ;
// ShellFileDialogs.FilterSpec ShellFileDialogs.Filter::ToFilterSpec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B Filter_ToFilterSpec_m292C9003273537E137CB52EEE265C1A8F8FEA331 (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) ;
// System.Boolean ShellFileDialogs.HResults::TryGetWin32ErrorCode(ShellFileDialogs.HResult,ShellFileDialogs.Win32ErrorCodes&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HResults_TryGetWin32ErrorCode_m87E8FA9CE1987CFE6FC273F7C1683A09A21BA2F1 (uint32_t ___0_hr, uint16_t* ___1_win32Code, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___0_error, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559 (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* __this, String_t* ___0_message, int32_t ___1_errorCode, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t* __this, String_t* ___0_g, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_shell32_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL SHCreateItemFromParsingName(Il2CppChar*, intptr_t, Guid_t*, IShellItem2_t82F85584179D524CA57FA2A1799B352E41A7588F**);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m9CE4E1F7D959069FB6E57ADB7F29F66F2B99EA83 (EmbeddedAttribute_t6144BF222559F5F3ED0C952784FC4FE9D7C88FD2* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mCE746D0DE88044F2574C90C6053BC2B119C98FF8 (NullableAttribute_tC948C2210140E40A64F386061A96736D55132DCA* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___0_p;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_1);
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
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m01C033B419A08962C8FB0B5C0BABD24F17EF142B (NullableContextAttribute_tF42AE0F89AB7A100FB5A4CBD8A72CD244AA814BD* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = ___0_p;
		__this->___Flag_0 = L_0;
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
// System.String ShellFileDialogs.FileOpenDialog::ShowSingleSelectDialog(System.IntPtr,System.String,System.String,System.String,System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileOpenDialog_ShowSingleSelectDialog_m9F37FA3B8F472CEA4EDB29C97E7543CD691A68EA (intptr_t ___0_parentHWnd, String_t* ___1_title, String_t* ___2_initialDirectory, String_t* ___3_defaultFileName, RuntimeObject* ___4_filters, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___5_selectedFilterZeroBasedIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tBA250D556D09440D4C5D53F04CABE5CE3A25D83C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_parentHWnd;
		String_t* L_1 = ___1_title;
		String_t* L_2 = ___2_initialDirectory;
		String_t* L_3 = ___3_defaultFileName;
		RuntimeObject* L_4 = ___4_filters;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = ___5_selectedFilterZeroBasedIndex;
		RuntimeObject* L_6;
		L_6 = FileOpenDialog_ShowDialog_mFBD6A03829C82667473385F59189725ECDB07B28(L_0, L_1, L_2, L_3, L_4, L_5, 0, NULL);
		V_0 = L_6;
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.String>::get_Count() */, IReadOnlyCollection_1_tBA250D556D09440D4C5D53F04CABE5CE3A25D83C_il2cpp_TypeInfo_var, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.String>::get_Item(System.Int32) */, IReadOnlyList_1_t7BB300FE9C8B0D3BCB34B752D2516BD12EB5E8CF_il2cpp_TypeInfo_var, L_10, 0);
		return L_11;
	}

IL_0023:
	{
		return (String_t*)NULL;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.String> ShellFileDialogs.FileOpenDialog::ShowDialog(System.IntPtr,System.String,System.String,System.String,System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>,System.Nullable`1<System.Int32>,ShellFileDialogs.FileOpenOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileOpenDialog_ShowDialog_mFBD6A03829C82667473385F59189725ECDB07B28 (intptr_t ___0_parentHWnd, String_t* ___1_title, String_t* ___2_initialDirectory, String_t* ___3_defaultFileName, RuntimeObject* ___4_filters, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___5_selectedFilterZeroBasedIndex, int32_t ___6_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFileOpenDialog_t1EEBE8EBFCA31FA246A80CC00C4B778B2BD5D9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	RuntimeObject* G_B3_5 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	intptr_t G_B2_4;
	memset((&G_B2_4), 0, sizeof(G_B2_4));
	RuntimeObject* G_B2_5 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	intptr_t G_B4_5;
	memset((&G_B4_5), 0, sizeof(G_B4_5));
	RuntimeObject* G_B4_6 = NULL;
	{
		FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326* L_0 = (FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326*)il2cpp_codegen_object_new(FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FileOpenDialogRCW__ctor_m25AABF6AF2340B75A5B70E672A88110E48FFF5EC(L_0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, NativeFileOpenDialog_t1EEBE8EBFCA31FA246A80CC00C4B778B2BD5D9DD_il2cpp_TypeInfo_var));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				RuntimeObject* L_1 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				int32_t L_2;
				L_2 = Marshal_ReleaseComObject_m427B8E86509C3B6D6797D39B1AAD6A44084F2921(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				intptr_t L_4 = ___0_parentHWnd;
				String_t* L_5 = ___1_title;
				String_t* L_6 = ___2_initialDirectory;
				String_t* L_7 = ___3_defaultFileName;
				RuntimeObject* L_8 = ___4_filters;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9 = ___5_selectedFilterZeroBasedIndex;
				V_1 = L_9;
				bool L_10;
				L_10 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_1), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				G_B2_0 = L_8;
				G_B2_1 = L_7;
				G_B2_2 = L_6;
				G_B2_3 = L_5;
				G_B2_4 = L_4;
				G_B2_5 = L_3;
				if (L_10)
				{
					G_B3_0 = L_8;
					G_B3_1 = L_7;
					G_B3_2 = L_6;
					G_B3_3 = L_5;
					G_B3_4 = L_4;
					G_B3_5 = L_3;
					goto IL_0021_1;
				}
			}
			{
				G_B4_0 = (-1);
				G_B4_1 = G_B2_0;
				G_B4_2 = G_B2_1;
				G_B4_3 = G_B2_2;
				G_B4_4 = G_B2_3;
				G_B4_5 = G_B2_4;
				G_B4_6 = G_B2_5;
				goto IL_0028_1;
			}

IL_0021_1:
			{
				int32_t L_11;
				L_11 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_1), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				G_B4_0 = L_11;
				G_B4_1 = G_B3_0;
				G_B4_2 = G_B3_1;
				G_B4_3 = G_B3_2;
				G_B4_4 = G_B3_3;
				G_B4_5 = G_B3_4;
				G_B4_6 = G_B3_5;
			}

IL_0028_1:
			{
				int32_t L_12 = ___6_flags;
				RuntimeObject* L_13;
				L_13 = FileOpenDialog_ShowDialogInner_m917A963B0BBF53A4B5CFC4D228D8D2A36A4CA771(G_B4_6, G_B4_5, G_B4_4, G_B4_3, G_B4_2, G_B4_1, G_B4_0, L_12, NULL);
				V_2 = L_13;
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		RuntimeObject* L_14 = V_2;
		return L_14;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.String> ShellFileDialogs.FileOpenDialog::ShowDialogInner(ShellFileDialogs.IFileOpenDialog,System.IntPtr,System.String,System.String,System.String,System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>,System.Int32,ShellFileDialogs.FileOpenOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileOpenDialog_ShowDialogInner_m917A963B0BBF53A4B5CFC4D228D8D2A36A4CA771 (RuntimeObject* ___0_dialog, intptr_t ___1_parentHWnd, String_t* ___2_title, String_t* ___3_initialDirectory, String_t* ___4_defaultFileName, RuntimeObject* ___5_filters, int32_t ___6_selectedFilterZeroBasedIndex, int32_t ___7_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ___7_flags;
		___7_flags = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_0|((int32_t)65536)))|((int32_t)2048)))|((int32_t)64)));
		RuntimeObject* L_1 = ___0_dialog;
		int32_t L_2 = ___7_flags;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ShellFileDialogs.IFileOpenDialog::SetOptions(ShellFileDialogs.FileOpenOptions) */, IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D_il2cpp_TypeInfo_var, L_1, L_2);
		String_t* L_3 = ___2_title;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_4 = ___0_dialog;
		String_t* L_5 = ___2_title;
		NullCheck(L_4);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void ShellFileDialogs.IFileOpenDialog::SetTitle(System.String) */, IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0025:
	{
		String_t* L_6 = ___3_initialDirectory;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_7 = ___3_initialDirectory;
		il2cpp_codegen_runtime_class_init_inline(Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = Utility_ParseShellItem2Name_m9CE9F6F5BF1582BCBD5DCB026BC952709C2151AC(L_7, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dialog;
		RuntimeObject* L_11 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void ShellFileDialogs.IFileOpenDialog::SetFolder(ShellFileDialogs.IShellItem) */, IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D_il2cpp_TypeInfo_var, L_10, L_11);
	}

IL_0039:
	{
		String_t* L_12 = ___4_defaultFileName;
		if (!L_12)
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_13 = ___0_dialog;
		String_t* L_14 = ___4_defaultFileName;
		NullCheck(L_13);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void ShellFileDialogs.IFileOpenDialog::SetFileName(System.String) */, IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D_il2cpp_TypeInfo_var, L_13, L_14);
	}

IL_0045:
	{
		RuntimeObject* L_15 = ___0_dialog;
		RuntimeObject* L_16 = ___5_filters;
		int32_t L_17 = ___6_selectedFilterZeroBasedIndex;
		il2cpp_codegen_runtime_class_init_inline(Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		Utility_SetFilters_m60330B1D6EEA500BFF79FA41FE3759F5D60C61A7(L_15, L_16, L_17, NULL);
		RuntimeObject* L_18 = ___0_dialog;
		intptr_t L_19 = ___1_parentHWnd;
		NullCheck(L_18);
		uint32_t L_20;
		L_20 = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(0 /* ShellFileDialogs.HResult ShellFileDialogs.IFileOpenDialog::Show(System.IntPtr) */, IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D_il2cpp_TypeInfo_var, L_18, L_19);
		bool L_21;
		L_21 = Utility_ValidateDialogShowHResult_m1910FC506925D9A2F9A1607FB345DB668DEB1601(L_20, NULL);
		if (!L_21)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_22 = ___0_dialog;
		NullCheck(L_22);
		InterfaceActionInvoker1< RuntimeObject** >::Invoke(6 /* System.Void ShellFileDialogs.IFileOpenDialog::GetResults(ShellFileDialogs.IShellItemArray&) */, IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D_il2cpp_TypeInfo_var, L_22, (&V_1));
		RuntimeObject* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		RuntimeObject* L_24;
		L_24 = Utility_GetFileNames_mECAC4B42AAC8695E405037D6600F41ED143076D3(L_23, NULL);
		return L_24;
	}

IL_006c:
	{
		return (RuntimeObject*)NULL;
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
// System.Void ShellFileDialogs.Filter::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter__ctor_m1C11578DDAC1F83C8E4225162308CAA4A56B5C4F (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, String_t* ___0_displayName, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_extensions, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_displayName;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_extensions;
		Filter__ctor_m14E05DEDBB8B5173BA4072836F3B98111B4A45A7(__this, L_0, (RuntimeObject*)L_1, NULL);
		return;
	}
}
// System.Void ShellFileDialogs.Filter::.ctor(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter__ctor_m14E05DEDBB8B5173BA4072836F3B98111B4A45A7 (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, String_t* ___0_displayName, RuntimeObject* ___1_extensions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tBA250D556D09440D4C5D53F04CABE5CE3A25D83C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_0_m5E959E81AA66AFC3884C49E02EC26D50E7C5E2EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_1_m72336726466D13D78810DECDD025BC8C05D2A5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* G_B6_2 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* G_B5_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* G_B8_2 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* G_B7_2 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_displayName;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral571B1023DF3ABFB94C92465B365B1814FEBFAB3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Filter__ctor_m14E05DEDBB8B5173BA4072836F3B98111B4A45A7_RuntimeMethod_var)));
	}

IL_0019:
	{
		RuntimeObject* L_3 = ___1_extensions;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79E88D091421691C53CC28304934AC732EC25429)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Filter__ctor_m14E05DEDBB8B5173BA4072836F3B98111B4A45A7_RuntimeMethod_var)));
	}

IL_0027:
	{
		String_t* L_5 = ___0_displayName;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_5, NULL);
		__this->___U3CDisplayNameU3Ek__BackingField_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_2), (void*)L_6);
		RuntimeObject* L_7 = ___1_extensions;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_8 = ((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_9 = L_8;
		G_B5_0 = L_9;
		G_B5_1 = L_7;
		G_B5_2 = __this;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = L_7;
			G_B6_2 = __this;
			goto IL_0054;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var);
		U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A* L_10 = ((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_11 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_0_m5E959E81AA66AFC3884C49E02EC26D50E7C5E2EB_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_12 = L_11;
		((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_12);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0054:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6(G_B6_1, G_B6_0, Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_14 = ((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_2;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_15 = L_14;
		G_B7_0 = L_15;
		G_B7_1 = L_13;
		G_B7_2 = G_B6_2;
		if (L_15)
		{
			G_B8_0 = L_15;
			G_B8_1 = L_13;
			G_B8_2 = G_B6_2;
			goto IL_0078;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var);
		U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A* L_16 = ((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_17 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_1_m72336726466D13D78810DECDD025BC8C05D2A5A4_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_18 = L_17;
		((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_2), (void*)L_18);
		G_B8_0 = L_18;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0078:
	{
		RuntimeObject* L_19;
		L_19 = Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A(G_B8_1, G_B8_0, Enumerable_Where_TisString_t_m023A6F9F603FD87F583C617CEAD9C3288A048D0A_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20;
		L_20 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_19, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		NullCheck(G_B8_2);
		G_B8_2->___U3CExtensionsU3Ek__BackingField_3 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___U3CExtensionsU3Ek__BackingField_3), (void*)L_20);
		RuntimeObject* L_21;
		L_21 = Filter_get_Extensions_m831628883D9DCB568E09E1F019D39527C40F7F82_inline(__this, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.String>::get_Count() */, IReadOnlyCollection_1_tBA250D556D09440D4C5D53F04CABE5CE3A25D83C_il2cpp_TypeInfo_var, L_21);
		if (L_22)
		{
			goto IL_00a4;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF513241376CA6B5145B578BCFE7BD3DC5BDCAF0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79E88D091421691C53CC28304934AC732EC25429)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Filter__ctor_m14E05DEDBB8B5173BA4072836F3B98111B4A45A7_RuntimeMethod_var)));
	}

IL_00a4:
	{
		return;
	}
}
// System.String ShellFileDialogs.Filter::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Filter_get_DisplayName_m9749560E833ED0B8B994DCA22D9AEC63BDB5E1B5 (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyList`1<System.String> ShellFileDialogs.Filter::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Filter_get_Extensions_m831628883D9DCB568E09E1F019D39527C40F7F82 (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CExtensionsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String ShellFileDialogs.Filter::ToFilterSpecString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Filter_ToFilterSpecString_m3966669183DBC57EDF8F7C53BC93520956382CA4 (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAA73D7366F31662EE5F3D7D40D7E9265203CA65);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = (bool)1;
		RuntimeObject* L_1;
		L_1 = Filter_get_Extensions_m831628883D9DCB568E09E1F019D39527C40F7F82_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0052;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0052:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003f_1;
			}

IL_0016_1:
			{
				RuntimeObject* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_5);
				V_3 = L_6;
				bool L_7 = V_1;
				if (L_7)
				{
					goto IL_0029_1;
				}
			}
			{
				StringBuilder_t* L_8 = V_0;
				NullCheck(L_8);
				StringBuilder_t* L_9;
				L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)59), NULL);
			}

IL_0029_1:
			{
				V_1 = (bool)0;
				StringBuilder_t* L_10 = V_0;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteralDAA73D7366F31662EE5F3D7D40D7E9265203CA65, NULL);
				StringBuilder_t* L_12 = V_0;
				String_t* L_13 = V_3;
				NullCheck(L_12);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_13, NULL);
			}

IL_003f_1:
			{
				RuntimeObject* L_15 = V_2;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0053;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		return L_18;
	}
}
// System.Void ShellFileDialogs.Filter::ToExtensionList(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter_ToExtensionList_mF0CBED8BDBA7E8F1D4E634BEAEBBE9CE568733FE (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAA73D7366F31662EE5F3D7D40D7E9265203CA65);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		V_0 = (bool)1;
		RuntimeObject* L_0;
		L_0 = Filter_get_Extensions_m831628883D9DCB568E09E1F019D39527C40F7F82_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_004f;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003c_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				String_t* L_5;
				L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_4);
				V_2 = L_5;
				bool L_6 = V_0;
				if (L_6)
				{
					goto IL_0026_1;
				}
			}
			{
				StringBuilder_t* L_7 = ___0_sb;
				NullCheck(L_7);
				StringBuilder_t* L_8;
				L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
			}

IL_0026_1:
			{
				V_0 = (bool)0;
				StringBuilder_t* L_9 = ___0_sb;
				NullCheck(L_9);
				StringBuilder_t* L_10;
				L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteralDAA73D7366F31662EE5F3D7D40D7E9265203CA65, NULL);
				StringBuilder_t* L_11 = ___0_sb;
				String_t* L_12 = V_2;
				NullCheck(L_11);
				StringBuilder_t* L_13;
				L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_12, NULL);
			}

IL_003c_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		return;
	}
}
// System.String ShellFileDialogs.Filter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Filter_ToString_m56B37B78ECC8F0D27816DFCE42B635F1111986E6 (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		String_t* L_2;
		L_2 = Filter_get_DisplayName_m9749560E833ED0B8B994DCA22D9AEC63BDB5E1B5_inline(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_2, NULL);
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		StringBuilder_t* L_6 = V_0;
		Filter_ToExtensionList_mF0CBED8BDBA7E8F1D4E634BEAEBBE9CE568733FE(__this, L_6, NULL);
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)41), NULL);
		StringBuilder_t* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}
}
// ShellFileDialogs.FilterSpec ShellFileDialogs.Filter::ToFilterSpec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B Filter_ToFilterSpec_m292C9003273537E137CB52EEE265C1A8F8FEA331 (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Filter_ToFilterSpecString_m3966669183DBC57EDF8F7C53BC93520956382CA4(__this, NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Filter_get_DisplayName_m9749560E833ED0B8B994DCA22D9AEC63BDB5E1B5_inline(__this, NULL);
		String_t* L_2 = V_0;
		FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B L_3;
		memset((&L_3), 0, sizeof(L_3));
		FilterSpec__ctor_m13B549B01A9F856AF46E05EEF141D7852C2FD158((&L_3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void ShellFileDialogs.Filter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Filter__cctor_m2D67EFFCA38CFCB70B337B72788F6D0E96992BE5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		((Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_StaticFields*)il2cpp_codegen_static_fields_for(Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_il2cpp_TypeInfo_var))->____semiColon_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_StaticFields*)il2cpp_codegen_static_fields_for(Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_il2cpp_TypeInfo_var))->____semiColon_0), (void*)L_1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)124));
		((Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_StaticFields*)il2cpp_codegen_static_fields_for(Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_il2cpp_TypeInfo_var))->____pipe_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_StaticFields*)il2cpp_codegen_static_fields_for(Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A_il2cpp_TypeInfo_var))->____pipe_1), (void*)L_3);
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
// System.Void ShellFileDialogs.Filter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1DCD5A9B0C3B24511EE7FA2C504D7D944E295203 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A* L_0 = (U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A*)il2cpp_codegen_object_new(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mDA8363472F77A49648E390F96B12FAEFED31EA25(L_0, NULL);
		((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ShellFileDialogs.Filter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDA8363472F77A49648E390F96B12FAEFED31EA25 (U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String ShellFileDialogs.Filter/<>c::<.ctor>b__3_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__3_0_m5E959E81AA66AFC3884C49E02EC26D50E7C5E2EB (U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_s;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ShellFileDialogs.Filter/<>c::<.ctor>b__3_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__3_1_m72336726466D13D78810DECDD025BC8C05D2A5A4 (U3CU3Ec_t0C7F1A12D4FD1C0EF43D4C57DBC093D1B2C7DC2A* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_s;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// ShellFileDialogs.HResult ShellFileDialogs.HResults::CreateWin32(ShellFileDialogs.Win32ErrorCodes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HResults_CreateWin32_mFB1219D9BD63115D05E502C6816F4E05AA84A51B (uint16_t ___0_code, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___0_code;
		il2cpp_codegen_runtime_class_init_inline(HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = HResults_Create_mBE0D8B4E1278A7AA91C321B1A9427D48B2DD8F9C((bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0), (bool)0, 7, (uint16_t)((int32_t)1223), NULL);
		return L_1;
	}
}
// ShellFileDialogs.HResult ShellFileDialogs.HResults::Create(System.Boolean,System.Boolean,ShellFileDialogs.HResultFacility,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HResults_Create_mBE0D8B4E1278A7AA91C321B1A9427D48B2DD8F9C (bool ___0_isFailure, bool ___1_isCustomer, uint16_t ___2_facility, uint16_t ___3_code, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint16_t L_0 = ___2_facility;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)2048))))
		{
			goto IL_001e;
		}
	}
	{
		uint16_t L_1 = ___2_facility;
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HResultFacility_tDFCCC0A0B90FD98B4BB731CE27C1B008D9DDC95C_il2cpp_TypeInfo_var)), &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69BF7DF51F361FE8D22616CEF9D87B68AF10D037)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2C326188CCE633078C08E21CB1BB9C19208F5A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HResults_Create_mBE0D8B4E1278A7AA91C321B1A9427D48B2DD8F9C_RuntimeMethod_var)));
	}

IL_001e:
	{
		V_0 = 0;
		bool L_5 = ___0_isFailure;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6|((int32_t)-2147483648LL)));
	}

IL_002b:
	{
		bool L_7 = ___1_isCustomer;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		uint32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8|((int32_t)536870912)));
	}

IL_0036:
	{
		uint16_t L_9 = ___2_facility;
		V_1 = L_9;
		uint32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10<<((int32_t)16)));
		uint32_t L_11 = V_0;
		uint32_t L_12 = V_1;
		V_0 = ((int32_t)((int32_t)L_11|(int32_t)L_12));
		uint32_t L_13 = V_0;
		uint16_t L_14 = ___3_code;
		V_0 = ((int32_t)((int32_t)L_13|(int32_t)L_14));
		uint32_t L_15 = V_0;
		return (uint32_t)(L_15);
	}
}
// ShellFileDialogs.HResultSeverity ShellFileDialogs.HResults::GetSeverity(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HResults_GetSeverity_m29B67711B0BE6638A24FED6B4CB661326FA8011A (uint32_t ___0_hr, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_hr;
		if (!((int32_t)((int32_t)L_0&((int32_t)-2147483648LL))))
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		return (int32_t)(0);
	}
}
// ShellFileDialogs.HResultCustomer ShellFileDialogs.HResults::GetCustomer(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HResults_GetCustomer_m8ED5F264E1C04C69E2BD162A3AAEF7790D1A6ED6 (uint32_t ___0_hr, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_hr;
		if (!((int32_t)((int32_t)L_0&((int32_t)536870912))))
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		return (int32_t)(0);
	}
}
// ShellFileDialogs.HResultFacility ShellFileDialogs.HResults::GetFacility(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HResults_GetFacility_m061B4488B3938083590B891D3E2F5A4194AFBCC2 (uint32_t ___0_hr, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_hr;
		return (uint16_t)(((int32_t)(uint16_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_0&((int32_t)134152192)))>>((int32_t)16)))));
	}
}
// System.UInt16 ShellFileDialogs.HResults::GetCode(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t HResults_GetCode_m65EEB95917551B9AAD1712DF735DD7DD021DA700 (uint32_t ___0_hr, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_hr;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_0&((int32_t)65535))));
	}
}
// System.Boolean ShellFileDialogs.HResults::IsValidHResult(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HResults_IsValidHResult_m65F92DF8D134400CBFAC4DBC9B0D003DB48EB5F1 (uint32_t ___0_hr, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_hr;
		if (!((int32_t)((int32_t)L_0&((int32_t)268435456))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		uint32_t L_1 = ___0_hr;
		if (!((int32_t)((int32_t)L_1&((int32_t)1073741824))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		uint32_t L_2 = ___0_hr;
		if (!((int32_t)((int32_t)L_2&((int32_t)134217728))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		return (bool)1;
	}
}
// System.Boolean ShellFileDialogs.HResults::TryGetWin32ErrorCode(ShellFileDialogs.HResult,ShellFileDialogs.Win32ErrorCodes&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HResults_TryGetWin32ErrorCode_m87E8FA9CE1987CFE6FC273F7C1683A09A21BA2F1 (uint32_t ___0_hr, uint16_t* ___1_win32Code, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	int32_t G_B10_0 = 0;
	{
		uint32_t L_0 = ___0_hr;
		il2cpp_codegen_runtime_class_init_inline(HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = HResults_GetCode_m65EEB95917551B9AAD1712DF735DD7DD021DA700(L_0, NULL);
		V_0 = L_1;
		uint16_t* L_2 = ___1_win32Code;
		uint16_t L_3 = V_0;
		*((int16_t*)L_2) = (int16_t)L_3;
		uint32_t L_4 = ___0_hr;
		bool L_5;
		L_5 = HResults_IsValidHResult_m65F92DF8D134400CBFAC4DBC9B0D003DB48EB5F1(L_4, NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_6 = ___0_hr;
		il2cpp_codegen_runtime_class_init_inline(HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = HResults_GetCustomer_m8ED5F264E1C04C69E2BD162A3AAEF7790D1A6ED6(L_6, NULL);
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		uint32_t L_8 = ___0_hr;
		il2cpp_codegen_runtime_class_init_inline(HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		uint16_t L_9;
		L_9 = HResults_GetFacility_m061B4488B3938083590B891D3E2F5A4194AFBCC2(L_8, NULL);
		if ((((int32_t)L_9) == ((int32_t)7)))
		{
			goto IL_002b;
		}
	}
	{
		uint32_t L_10 = ___0_hr;
		il2cpp_codegen_runtime_class_init_inline(HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		uint16_t L_11;
		L_11 = HResults_GetFacility_m061B4488B3938083590B891D3E2F5A4194AFBCC2(L_10, NULL);
		if (L_11)
		{
			goto IL_004f;
		}
	}

IL_002b:
	{
		uint32_t L_12 = ___0_hr;
		il2cpp_codegen_runtime_class_init_inline(HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = HResults_GetSeverity_m29B67711B0BE6638A24FED6B4CB661326FA8011A(L_12, NULL);
		if (L_13)
		{
			goto IL_0037;
		}
	}
	{
		uint16_t* L_14 = ___1_win32Code;
		int32_t L_15 = *((uint16_t*)L_14);
		if (!L_15)
		{
			goto IL_004a;
		}
	}

IL_0037:
	{
		uint32_t L_16 = ___0_hr;
		il2cpp_codegen_runtime_class_init_inline(HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = HResults_GetSeverity_m29B67711B0BE6638A24FED6B4CB661326FA8011A(L_16, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		uint16_t* L_18 = ___1_win32Code;
		int32_t L_19 = *((uint16_t*)L_18);
		G_B10_0 = ((!(((uint32_t)L_19) <= ((uint32_t)0)))? 1 : 0);
		goto IL_004b;
	}

IL_0047:
	{
		G_B10_0 = 0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B10_0 = 1;
	}

IL_004b:
	{
		if (!G_B10_0)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)1;
	}

IL_004f:
	{
		return (bool)0;
	}
}
// System.Void ShellFileDialogs.HResults::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HResults__cctor_mFB6BF3C31A11A0CF0A0BE6E45C731232790711A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = HResults_CreateWin32_mFB1219D9BD63115D05E502C6816F4E05AA84A51B(((int32_t)1223), NULL);
		((HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_StaticFields*)il2cpp_codegen_static_fields_for(HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var))->___Cancelled_0 = L_0;
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
// System.Void ShellFileDialogs.FileOpenDialogRCW::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileOpenDialogRCW__ctor_m25AABF6AF2340B75A5B70E672A88110E48FFF5EC (FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326* __this, const RuntimeMethod* method) 
{
	il2cpp_codegen_com_create_instance(FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326::CLSID, &__this->identity);
	il2cpp_codegen_com_register_rcw(__this);
}
// System.Void ShellFileDialogs.FileOpenDialogRCW::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileOpenDialogRCW_Finalize_m91E3FF4FAD546F7916FCBD8A5E5D03E9145B44B1 (FileOpenDialogRCW_t686ADEB0CD3B38C5F6AF167B1AA676C826E7F326* __this, const RuntimeMethod* method) 
{
	__Il2CppComObject_Finalize_m720B2062F661A0770A32D24B731AD4AFE314A5CD(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ShellFileDialogs.FilterSpec
IL2CPP_EXTERN_C void FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_pinvoke(const FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B& unmarshaled, FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_pinvoke& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_wstring(unmarshaled.___Name_0);
	marshaled.___Spec_1 = il2cpp_codegen_marshal_wstring(unmarshaled.___Spec_1);
}
IL2CPP_EXTERN_C void FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_pinvoke_back(const FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_pinvoke& marshaled, FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B& unmarshaled)
{
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_wstring_result(marshaled.___Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_0), (void*)il2cpp_codegen_marshal_wstring_result(marshaled.___Name_0));
	unmarshaled.___Spec_1 = il2cpp_codegen_marshal_wstring_result(marshaled.___Spec_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Spec_1), (void*)il2cpp_codegen_marshal_wstring_result(marshaled.___Spec_1));
}
// Conversion method for clean up from marshalling of: ShellFileDialogs.FilterSpec
IL2CPP_EXTERN_C void FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_pinvoke_cleanup(FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Spec_1);
	marshaled.___Spec_1 = NULL;
}
// Conversion methods for marshalling of: ShellFileDialogs.FilterSpec
IL2CPP_EXTERN_C void FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_com(const FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B& unmarshaled, FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_wstring(unmarshaled.___Name_0);
	marshaled.___Spec_1 = il2cpp_codegen_marshal_wstring(unmarshaled.___Spec_1);
}
IL2CPP_EXTERN_C void FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_com_back(const FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com& marshaled, FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B& unmarshaled)
{
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_wstring_result(marshaled.___Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Name_0), (void*)il2cpp_codegen_marshal_wstring_result(marshaled.___Name_0));
	unmarshaled.___Spec_1 = il2cpp_codegen_marshal_wstring_result(marshaled.___Spec_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Spec_1), (void*)il2cpp_codegen_marshal_wstring_result(marshaled.___Spec_1));
}
// Conversion method for clean up from marshalling of: ShellFileDialogs.FilterSpec
IL2CPP_EXTERN_C void FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_com_cleanup(FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Spec_1);
	marshaled.___Spec_1 = NULL;
}
// System.Void ShellFileDialogs.FilterSpec::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterSpec__ctor_m13B549B01A9F856AF46E05EEF141D7852C2FD158 (FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B* __this, String_t* ___0_name, String_t* ___1_spec, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		__this->___Name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_0);
		String_t* L_1 = ___1_spec;
		__this->___Spec_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Spec_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void FilterSpec__ctor_m13B549B01A9F856AF46E05EEF141D7852C2FD158_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, String_t* ___1_spec, const RuntimeMethod* method)
{
	FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B*>(__this + _offset);
	FilterSpec__ctor_m13B549B01A9F856AF46E05EEF141D7852C2FD158(_thisAdjusted, ___0_name, ___1_spec, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ShellFileDialogs.HResult ShellFileDialogs.IFileDialog::Show(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IFileDialog_Show_m53F82450A7CD3F1C926963ADCDF2655830D8D7C6 (RuntimeObject* __this, intptr_t ___0_parent, const RuntimeMethod* method) 
{
	IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6* ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6 = il2cpp_codegen_com_query_interface<IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint32_t returnValue = 0;
	returnValue = ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6->IFileDialog_Show_m53F82450A7CD3F1C926963ADCDF2655830D8D7C6(___0_parent);

	return returnValue;
}
// System.Void ShellFileDialogs.IFileDialog::SetFileTypes(System.UInt32,ShellFileDialogs.FilterSpec[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileDialog_SetFileTypes_mE6F60F0DA8BE0DD869F8F2B8ABACC982560C910F (RuntimeObject* __this, uint32_t ___0_cFileTypes, FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* ___1_rgFilterSpec, const RuntimeMethod* method) 
{


	IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6* ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6 = il2cpp_codegen_com_query_interface<IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___1_rgFilterSpec' to native representation
	FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com* ____1_rgFilterSpec_marshaled = NULL;
	if (___1_rgFilterSpec != NULL)
	{
		il2cpp_array_size_t ____1_rgFilterSpec_Length = (___1_rgFilterSpec)->max_length;
		____1_rgFilterSpec_marshaled = il2cpp_codegen_marshal_allocate_array<FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshaled_com>(____1_rgFilterSpec_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_rgFilterSpec_Length); i++)
		{
			FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_com((___1_rgFilterSpec)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (____1_rgFilterSpec_marshaled)[i]);
		}
	}
	else
	{
		____1_rgFilterSpec_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6->IFileDialog_SetFileTypes_mE6F60F0DA8BE0DD869F8F2B8ABACC982560C910F(___0_cFileTypes, ____1_rgFilterSpec_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Marshaling cleanup of parameter '___1_rgFilterSpec' native representation
	if (____1_rgFilterSpec_marshaled != NULL)
	{
		const il2cpp_array_size_t ____1_rgFilterSpec_marshaled_CleanupLoopCount = (___1_rgFilterSpec != NULL) ? (___1_rgFilterSpec)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_rgFilterSpec_marshaled_CleanupLoopCount); i++)
		{
			FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B_marshal_com_cleanup((____1_rgFilterSpec_marshaled)[i]);
		}
		il2cpp_codegen_marshal_free(____1_rgFilterSpec_marshaled);
		____1_rgFilterSpec_marshaled = NULL;
	}

}
// System.Void ShellFileDialogs.IFileDialog::SetFileTypeIndex(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileDialog_SetFileTypeIndex_m27B4E6E1BFBB49B6EA48515697AAA8CAADAE46FB (RuntimeObject* __this, uint32_t ___0_iFileType, const RuntimeMethod* method) 
{
	IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6* ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6 = il2cpp_codegen_com_query_interface<IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6->IFileDialog_SetFileTypeIndex_m27B4E6E1BFBB49B6EA48515697AAA8CAADAE46FB(___0_iFileType);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void ShellFileDialogs.IFileDialog::SetOptions(ShellFileDialogs.FileOpenOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileDialog_SetOptions_m0A6412AEEAD1FD7F447F95A6EFFAD4204A2FA375 (RuntimeObject* __this, int32_t ___0_fos, const RuntimeMethod* method) 
{
	IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6* ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6 = il2cpp_codegen_com_query_interface<IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6->IFileDialog_SetOptions_m0A6412AEEAD1FD7F447F95A6EFFAD4204A2FA375(___0_fos);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void ShellFileDialogs.IFileDialog::SetFolder(ShellFileDialogs.IShellItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileDialog_SetFolder_m0EF2EE0412E729711623BF93EA87F5937A5095F8 (RuntimeObject* __this, RuntimeObject* ___0_psi, const RuntimeMethod* method) 
{
	IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6* ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6 = il2cpp_codegen_com_query_interface<IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___0_psi' to native representation
	IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F* ____0_psi_marshaled = NULL;
	if (___0_psi != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___0_psi))
		{
			____0_psi_marshaled = il2cpp_codegen_com_query_interface<IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F>(static_cast<Il2CppComObject*>(___0_psi));
			(____0_psi_marshaled)->AddRef();
		}
		else
		{
			____0_psi_marshaled = il2cpp_codegen_com_get_or_create_ccw<IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F>(___0_psi);
		}
	}
	else
	{
		____0_psi_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6->IFileDialog_SetFolder_m0EF2EE0412E729711623BF93EA87F5937A5095F8(____0_psi_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Marshaling cleanup of parameter '___0_psi' native representation
	if (____0_psi_marshaled != NULL)
	{
		(____0_psi_marshaled)->Release();
		____0_psi_marshaled = NULL;
	}

}
// System.Void ShellFileDialogs.IFileDialog::SetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileDialog_SetFileName_m8E3A7CBAB867021511A566530ABCD0483501975A (RuntimeObject* __this, String_t* ___0_pszName, const RuntimeMethod* method) 
{
	IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6* ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6 = il2cpp_codegen_com_query_interface<IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___0_pszName' to native representation
	Il2CppChar* ____0_pszName_marshaled = NULL;
	if (___0_pszName != NULL)
	{
		____0_pszName_marshaled = &___0_pszName->____firstChar_5;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6->IFileDialog_SetFileName_m8E3A7CBAB867021511A566530ABCD0483501975A(____0_pszName_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void ShellFileDialogs.IFileDialog::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileDialog_SetTitle_m280156FA9CC0D128EB86DC6DE2F0FF6093885891 (RuntimeObject* __this, String_t* ___0_pszTitle, const RuntimeMethod* method) 
{
	IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6* ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6 = il2cpp_codegen_com_query_interface<IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___0_pszTitle' to native representation
	Il2CppChar* ____0_pszTitle_marshaled = NULL;
	if (___0_pszTitle != NULL)
	{
		____0_pszTitle_marshaled = &___0_pszTitle->____firstChar_5;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6->IFileDialog_SetTitle_m280156FA9CC0D128EB86DC6DE2F0FF6093885891(____0_pszTitle_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ShellFileDialogs.HResult ShellFileDialogs.IFileOpenDialog::Show(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IFileOpenDialog_Show_mEBCE75A83AFE5FF1B52B6E34BA9865549DD8C099 (RuntimeObject* __this, intptr_t ___0_parent, const RuntimeMethod* method) 
{
	IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D* ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D = il2cpp_codegen_com_query_interface<IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint32_t returnValue = 0;
	returnValue = ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D->IFileOpenDialog_Show_mEBCE75A83AFE5FF1B52B6E34BA9865549DD8C099(___0_parent);

	return returnValue;
}
// System.Void ShellFileDialogs.IFileOpenDialog::SetFileTypeIndex(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileOpenDialog_SetFileTypeIndex_m3ABAE36CA011556B8389C49F89DD68F17DA5E5D1 (RuntimeObject* __this, uint32_t ___0_iFileType, const RuntimeMethod* method) 
{
	IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D* ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D = il2cpp_codegen_com_query_interface<IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D->IFileOpenDialog_SetFileTypeIndex_m3ABAE36CA011556B8389C49F89DD68F17DA5E5D1(___0_iFileType);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void ShellFileDialogs.IFileOpenDialog::SetOptions(ShellFileDialogs.FileOpenOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileOpenDialog_SetOptions_mE3CC937B537F7F77A56F336CD035BBCB00F3CF5C (RuntimeObject* __this, int32_t ___0_fos, const RuntimeMethod* method) 
{
	IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D* ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D = il2cpp_codegen_com_query_interface<IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D->IFileOpenDialog_SetOptions_mE3CC937B537F7F77A56F336CD035BBCB00F3CF5C(___0_fos);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void ShellFileDialogs.IFileOpenDialog::SetFolder(ShellFileDialogs.IShellItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileOpenDialog_SetFolder_m1B526CC6AFDDA9FCF569BB98076E785254400140 (RuntimeObject* __this, RuntimeObject* ___0_psi, const RuntimeMethod* method) 
{
	IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D* ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D = il2cpp_codegen_com_query_interface<IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___0_psi' to native representation
	IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F* ____0_psi_marshaled = NULL;
	if (___0_psi != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___0_psi))
		{
			____0_psi_marshaled = il2cpp_codegen_com_query_interface<IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F>(static_cast<Il2CppComObject*>(___0_psi));
			(____0_psi_marshaled)->AddRef();
		}
		else
		{
			____0_psi_marshaled = il2cpp_codegen_com_get_or_create_ccw<IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F>(___0_psi);
		}
	}
	else
	{
		____0_psi_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D->IFileOpenDialog_SetFolder_m1B526CC6AFDDA9FCF569BB98076E785254400140(____0_psi_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Marshaling cleanup of parameter '___0_psi' native representation
	if (____0_psi_marshaled != NULL)
	{
		(____0_psi_marshaled)->Release();
		____0_psi_marshaled = NULL;
	}

}
// System.Void ShellFileDialogs.IFileOpenDialog::SetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileOpenDialog_SetFileName_mE305A728B48E3AF1713A42A04A95C1FFFE1B440C (RuntimeObject* __this, String_t* ___0_pszName, const RuntimeMethod* method) 
{
	IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D* ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D = il2cpp_codegen_com_query_interface<IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___0_pszName' to native representation
	Il2CppChar* ____0_pszName_marshaled = NULL;
	if (___0_pszName != NULL)
	{
		____0_pszName_marshaled = &___0_pszName->____firstChar_5;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D->IFileOpenDialog_SetFileName_mE305A728B48E3AF1713A42A04A95C1FFFE1B440C(____0_pszName_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void ShellFileDialogs.IFileOpenDialog::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileOpenDialog_SetTitle_m37CAF003F5A234FB2762D1D8BD9F159D8456C30A (RuntimeObject* __this, String_t* ___0_pszTitle, const RuntimeMethod* method) 
{
	IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D* ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D = il2cpp_codegen_com_query_interface<IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___0_pszTitle' to native representation
	Il2CppChar* ____0_pszTitle_marshaled = NULL;
	if (___0_pszTitle != NULL)
	{
		____0_pszTitle_marshaled = &___0_pszTitle->____firstChar_5;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D->IFileOpenDialog_SetTitle_m37CAF003F5A234FB2762D1D8BD9F159D8456C30A(____0_pszTitle_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void ShellFileDialogs.IFileOpenDialog::GetResults(ShellFileDialogs.IShellItemArray&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IFileOpenDialog_GetResults_m63F9552A6A9B75D93B29800D81F1179A89A4F037 (RuntimeObject* __this, RuntimeObject** ___0_ppenum, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D* ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D = il2cpp_codegen_com_query_interface<IFileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___0_ppenum' to native representation
	IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400* ____0_ppenum_empty = NULL;
	IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400** ____0_ppenum_marshaled = &____0_ppenum_empty;

	// Native function invocation
	const il2cpp_hresult_t hr = ____ifileOpenDialog_tDC22DD60373A5533A9CA1E403E1A2356FB714C1D->IFileOpenDialog_GetResults_m63F9552A6A9B75D93B29800D81F1179A89A4F037(____0_ppenum_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Marshaling of parameter '___0_ppenum' back from native representation
	RuntimeObject* _____0_ppenum_marshaled_unmarshaled_dereferenced = NULL;
	if (*____0_ppenum_marshaled != NULL)
	{
		_____0_ppenum_marshaled_unmarshaled_dereferenced = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(*____0_ppenum_marshaled, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(_____0_ppenum_marshaled_unmarshaled_dereferenced))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(_____0_ppenum_marshaled_unmarshaled_dereferenced), IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400::IID, *____0_ppenum_marshaled);
		}
	}
	else
	{
		_____0_ppenum_marshaled_unmarshaled_dereferenced = NULL;
	}
	*___0_ppenum = _____0_ppenum_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___0_ppenum, (void*)____0_ppenum_marshaled);

	// Marshaling cleanup of parameter '___0_ppenum' native representation
	if (*____0_ppenum_marshaled != NULL)
	{
		(*____0_ppenum_marshaled)->Release();
		*____0_ppenum_marshaled = NULL;
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
// ShellFileDialogs.HResult ShellFileDialogs.IModalWindow::Show(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IModalWindow_Show_mB69066E8BC457A21CAA80BB0ED9B53B2B17AD78C (RuntimeObject* __this, intptr_t ___0_parent, const RuntimeMethod* method) 
{
	IModalWindow_tCEEDECECEA1BD6712FA176A694D5AD3CE02E4BDE* ____imodalWindow_tCEEDECECEA1BD6712FA176A694D5AD3CE02E4BDE = il2cpp_codegen_com_query_interface<IModalWindow_tCEEDECECEA1BD6712FA176A694D5AD3CE02E4BDE>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint32_t returnValue = 0;
	returnValue = ____imodalWindow_tCEEDECECEA1BD6712FA176A694D5AD3CE02E4BDE->IModalWindow_Show_mB69066E8BC457A21CAA80BB0ED9B53B2B17AD78C(___0_parent);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ShellFileDialogs.HResult ShellFileDialogs.IShellItem::GetDisplayName(ShellFileDialogs.ShellItemDesignNameOptions,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IShellItem_GetDisplayName_m5003AFFF04EAEB028278383F4DD871C3A82C0738 (RuntimeObject* __this, int32_t ___0_sigdnName, intptr_t* ___1_ppszName, const RuntimeMethod* method) 
{
	IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F* ____ishellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F = il2cpp_codegen_com_query_interface<IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint32_t returnValue = 0;
	returnValue = ____ishellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F->IShellItem_GetDisplayName_m5003AFFF04EAEB028278383F4DD871C3A82C0738(___0_sigdnName, ___1_ppszName);

	return returnValue;
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
// ShellFileDialogs.HResult ShellFileDialogs.IShellItemArray::GetCount(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IShellItemArray_GetCount_m23D1F49516146676448D4E8250CAF2F1EDFB3728 (RuntimeObject* __this, uint32_t* ___0_pdwNumItems, const RuntimeMethod* method) 
{
	IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400* ____ishellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400 = il2cpp_codegen_com_query_interface<IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint32_t returnValue = 0;
	returnValue = ____ishellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400->IShellItemArray_GetCount_m23D1F49516146676448D4E8250CAF2F1EDFB3728(___0_pdwNumItems);

	return returnValue;
}
// ShellFileDialogs.HResult ShellFileDialogs.IShellItemArray::GetItemAt(System.UInt32,ShellFileDialogs.IShellItem&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IShellItemArray_GetItemAt_mCB248AD3A9E8C612E031D7636D8CD5CA05A0F05B (RuntimeObject* __this, uint32_t ___0_dwIndex, RuntimeObject** ___1_ppsi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400* ____ishellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400 = il2cpp_codegen_com_query_interface<IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___1_ppsi' to native representation
	IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F* ____1_ppsi_empty = NULL;
	IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F** ____1_ppsi_marshaled = &____1_ppsi_empty;

	// Native function invocation
	uint32_t returnValue = 0;
	returnValue = ____ishellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400->IShellItemArray_GetItemAt_mCB248AD3A9E8C612E031D7636D8CD5CA05A0F05B(___0_dwIndex, ____1_ppsi_marshaled);

	// Marshaling of parameter '___1_ppsi' back from native representation
	RuntimeObject* _____1_ppsi_marshaled_unmarshaled_dereferenced = NULL;
	if (*____1_ppsi_marshaled != NULL)
	{
		_____1_ppsi_marshaled_unmarshaled_dereferenced = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(*____1_ppsi_marshaled, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(_____1_ppsi_marshaled_unmarshaled_dereferenced))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(_____1_ppsi_marshaled_unmarshaled_dereferenced), IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F::IID, *____1_ppsi_marshaled);
		}
	}
	else
	{
		_____1_ppsi_marshaled_unmarshaled_dereferenced = NULL;
	}
	*___1_ppsi = _____1_ppsi_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___1_ppsi, (void*)____1_ppsi_marshaled);

	// Marshaling cleanup of parameter '___1_ppsi' native representation
	if (*____1_ppsi_marshaled != NULL)
	{
		(*____1_ppsi_marshaled)->Release();
		*____1_ppsi_marshaled = NULL;
	}

	return returnValue;
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
// ShellFileDialogs.HResult ShellFileDialogs.ShellNativeMethods::SHCreateItemFromParsingName(System.String,System.IntPtr,System.Guid&,ShellFileDialogs.IShellItem2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ShellNativeMethods_SHCreateItemFromParsingName_mC7C3CF1B7135BCAD42CDE082CCB8B41B923B592C (String_t* ___0_path, intptr_t ___1_pbc, Guid_t* ___2_riid, RuntimeObject** ___3_shellItem, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, intptr_t, Guid_t*, IShellItem2_t82F85584179D524CA57FA2A1799B352E41A7588F**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_shell32_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t) + sizeof(Guid_t*) + sizeof(IShellItem2_t82F85584179D524CA57FA2A1799B352E41A7588F**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("shell32.dll"), "SHCreateItemFromParsingName", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_path' to native representation
	Il2CppChar* ____0_path_marshaled = NULL;
	if (___0_path != NULL)
	{
		____0_path_marshaled = &___0_path->____firstChar_5;
	}

	// Marshaling of parameter '___3_shellItem' to native representation
	IShellItem2_t82F85584179D524CA57FA2A1799B352E41A7588F* ____3_shellItem_empty = NULL;
	IShellItem2_t82F85584179D524CA57FA2A1799B352E41A7588F** ____3_shellItem_marshaled = &____3_shellItem_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_shell32_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(SHCreateItemFromParsingName)(____0_path_marshaled, ___1_pbc, ___2_riid, ____3_shellItem_marshaled);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(____0_path_marshaled, ___1_pbc, ___2_riid, ____3_shellItem_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___3_shellItem' back from native representation
	RuntimeObject* _____3_shellItem_marshaled_unmarshaled_dereferenced = NULL;
	if (*____3_shellItem_marshaled != NULL)
	{
		_____3_shellItem_marshaled_unmarshaled_dereferenced = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(*____3_shellItem_marshaled, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(_____3_shellItem_marshaled_unmarshaled_dereferenced))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(_____3_shellItem_marshaled_unmarshaled_dereferenced), IShellItem2_t82F85584179D524CA57FA2A1799B352E41A7588F::IID, *____3_shellItem_marshaled);
		}
	}
	else
	{
		_____3_shellItem_marshaled_unmarshaled_dereferenced = NULL;
	}
	*___3_shellItem = _____3_shellItem_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___3_shellItem, (void*)____3_shellItem_marshaled);

	// Marshaling cleanup of parameter '___3_shellItem' native representation
	if (*____3_shellItem_marshaled != NULL)
	{
		(*____3_shellItem_marshaled)->Release();
		*____3_shellItem_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<System.String> ShellFileDialogs.Utility::GetFileNames(ShellFileDialogs.IShellItemArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utility_GetFileNames_mECAC4B42AAC8695E405037D6600F41ED143076D3 (RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___0_items;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = InterfaceFuncInvoker1< uint32_t, uint32_t* >::Invoke(0 /* ShellFileDialogs.HResult ShellFileDialogs.IShellItemArray::GetCount(System.UInt32&) */, IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400_il2cpp_TypeInfo_var, L_0, (&V_1));
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Il2CppFakeBox<uint32_t> L_3(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HResult_t13E0CAA22860D465D135A7DC47BA619E6F1344BB_il2cpp_TypeInfo_var)), (&V_0));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral39A27C994025127DC2F3DE39E887894E5E927F39)), L_4, NULL);
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utility_GetFileNames_mECAC4B42AAC8695E405037D6600F41ED143076D3_RuntimeMethod_var)));
	}

IL_0029:
	{
		uint32_t L_7 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_8, L_7, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		V_2 = L_8;
		V_3 = 0;
		goto IL_0052;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_items;
		int32_t L_10 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Utility_GetShellItemAt_mB50F7AA2A9118A06E9DA4064EB9425D6040081B8(L_9, L_10, NULL);
		String_t* L_12;
		L_12 = Utility_GetFileNameFromShellItem_m6B9A2D7DF29EC9E544EBEC199D929DB2040EBEF9(L_11, NULL);
		V_4 = L_12;
		String_t* L_13 = V_4;
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_2;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_004e:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0052:
	{
		int32_t L_17 = V_3;
		uint32_t L_18 = V_1;
		if ((((int64_t)((int64_t)L_17)) < ((int64_t)((int64_t)(uint64_t)L_18))))
		{
			goto IL_0034;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = V_2;
		return L_19;
	}
}
// ShellFileDialogs.IShellItem2 ShellFileDialogs.Utility::ParseShellItem2Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utility_ParseShellItem2Name_m9CE9F6F5BF1582BCBD5DCB026BC952709C2151AC (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		Guid_t L_0 = ((Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var))->____ishellItem2Guid_0;
		V_0 = L_0;
		String_t* L_1 = ___0_value;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		uint32_t L_3;
		L_3 = ShellNativeMethods_SHCreateItemFromParsingName_mC7C3CF1B7135BCAD42CDE082CCB8B41B923B592C(L_1, L_2, (&V_0), (&V_1), NULL);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}

IL_0019:
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String ShellFileDialogs.Utility::GetFileNameFromShellItem(ShellFileDialogs.IShellItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utility_GetFileNameFromShellItem_m6B9A2D7DF29EC9E544EBEC199D929DB2040EBEF9 (RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_item;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker2< uint32_t, int32_t, intptr_t* >::Invoke(0 /* ShellFileDialogs.HResult ShellFileDialogs.IShellItem::GetDisplayName(ShellFileDialogs.ShellItemDesignNameOptions,System.IntPtr&) */, IShellItem_t42036CAAA9295D56CD5BF7E25A255BE42E91671F_il2cpp_TypeInfo_var, L_1, ((int32_t)-2147319808), (&V_0));
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275(L_6, NULL);
		intptr_t L_8 = V_0;
		Marshal_FreeCoTaskMem_mBCD7084667AE44C50938947CF5C22345A118C944(L_8, NULL);
		return L_7;
	}

IL_002e:
	{
		return (String_t*)NULL;
	}
}
// ShellFileDialogs.IShellItem ShellFileDialogs.Utility::GetShellItemAt(ShellFileDialogs.IShellItemArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utility_GetShellItemAt_mB50F7AA2A9118A06E9DA4064EB9425D6040081B8 (RuntimeObject* ___0_array, int32_t ___1_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utility_GetShellItemAt_mB50F7AA2A9118A06E9DA4064EB9425D6040081B8_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_array;
		int32_t L_3 = ___1_i;
		NullCheck(L_2);
		uint32_t L_4;
		L_4 = InterfaceFuncInvoker2< uint32_t, uint32_t, RuntimeObject** >::Invoke(1 /* ShellFileDialogs.HResult ShellFileDialogs.IShellItemArray::GetItemAt(System.UInt32,ShellFileDialogs.IShellItem&) */, IShellItemArray_t54BB347204BF9ED6027F1B22AD96DC39B67B7400_il2cpp_TypeInfo_var, L_2, L_3, (&V_0));
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}

IL_001b:
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Void ShellFileDialogs.Utility::SetFilters(ShellFileDialogs.IFileDialog,System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetFilters_m60330B1D6EEA500BFF79FA41FE3759F5D60C61A7 (RuntimeObject* ___0_dialog, RuntimeObject* ___1_filters, int32_t ___2_selectedFilterZeroBasedIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t6A123C2A058C1CEBFAD8EBC5D73C769B6A3CC101_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_dialog;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral366D8552AC73D2D3ED9486E4D942D62FA412F781)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utility_SetFilters_m60330B1D6EEA500BFF79FA41FE3759F5D60C61A7_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___1_filters;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_3 = ___1_filters;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>::get_Count() */, IReadOnlyCollection_1_t6A123C2A058C1CEBFAD8EBC5D73C769B6A3CC101_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		return;
	}

IL_001a:
	{
		RuntimeObject* L_5 = ___1_filters;
		il2cpp_codegen_runtime_class_init_inline(Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* L_6;
		L_6 = Utility_CreateFilterSpec_m5963360EB4D77B5907FA42376691AD1B11D9B501(L_5, NULL);
		V_0 = L_6;
		RuntimeObject* L_7 = ___0_dialog;
		FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* L_8 = V_0;
		NullCheck(L_8);
		FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* L_9 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker2< uint32_t, FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* >::Invoke(1 /* System.Void ShellFileDialogs.IFileDialog::SetFileTypes(System.UInt32,ShellFileDialogs.FilterSpec[]) */, IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6_il2cpp_TypeInfo_var, L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9);
		int32_t L_10 = ___2_selectedFilterZeroBasedIndex;
		if ((((int32_t)L_10) <= ((int32_t)(-1))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_11 = ___2_selectedFilterZeroBasedIndex;
		RuntimeObject* L_12 = ___1_filters;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>::get_Count() */, IReadOnlyCollection_1_t6A123C2A058C1CEBFAD8EBC5D73C769B6A3CC101_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_14 = ___0_dialog;
		int32_t L_15 = ___2_selectedFilterZeroBasedIndex;
		NullCheck(L_14);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void ShellFileDialogs.IFileDialog::SetFileTypeIndex(System.UInt32) */, IFileDialog_t9713146F28198F77E70D631519E49ACDFE130DD6_il2cpp_TypeInfo_var, L_14, ((int32_t)il2cpp_codegen_add(1, L_15)));
	}

IL_0041:
	{
		return;
	}
}
// ShellFileDialogs.FilterSpec[] ShellFileDialogs.Utility::CreateFilterSpec(System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* Utility_CreateFilterSpec_m5963360EB4D77B5907FA42376691AD1B11D9B501 (RuntimeObject* ___0_filters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6B8F847A15E0735E716B62FCB5475C8625AA3E53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1A1333FAE161A6F86254C5A96213A934BD81AEB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t6A123C2A058C1CEBFAD8EBC5D73C769B6A3CC101_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___0_filters;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<ShellFileDialogs.Filter>::get_Count() */, IReadOnlyCollection_1_t6A123C2A058C1CEBFAD8EBC5D73C769B6A3CC101_il2cpp_TypeInfo_var, L_0);
		FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* L_2 = (FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB*)(FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB*)SZArrayNew(FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		RuntimeObject* L_3 = ___0_filters;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ShellFileDialogs.Filter>::GetEnumerator() */, IEnumerable_1_t6B8F847A15E0735E716B62FCB5475C8625AA3E53_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002f_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* L_8;
				L_8 = InterfaceFuncInvoker0< Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<ShellFileDialogs.Filter>::get_Current() */, IEnumerator_1_t1A1333FAE161A6F86254C5A96213A934BD81AEB0_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* L_9 = V_0;
				int32_t L_10 = V_1;
				Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* L_11 = V_3;
				NullCheck(L_11);
				FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B L_12;
				L_12 = Filter_ToFilterSpec_m292C9003273537E137CB52EEE265C1A8F8FEA331(L_11, NULL);
				NullCheck(L_9);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (FilterSpec_tB746E5BCBD8D5E097DB4A4643B39586C8F8F286B)L_12);
				int32_t L_13 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_002f_1:
			{
				RuntimeObject* L_14 = V_2;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		FilterSpecU5BU5D_tD69FF0EACA0EC2FF2F110F2467FE9D54579BF2CB* L_16 = V_0;
		return L_16;
	}
}
// System.Boolean ShellFileDialogs.Utility::ValidateDialogShowHResult(ShellFileDialogs.HResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_ValidateDialogShowHResult_m1910FC506925D9A2F9A1607FB345DB668DEB1601 (uint32_t ___0_dialogHResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		uint32_t L_0 = ___0_dialogHResult;
		il2cpp_codegen_runtime_class_init_inline(HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HResults_TryGetWin32ErrorCode_m87E8FA9CE1987CFE6FC273F7C1683A09A21BA2F1(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		uint16_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}

IL_000f:
	{
		uint16_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)1223)))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		uint16_t L_5 = V_0;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		uint32_t L_8 = ___0_dialogHResult;
		int32_t L_9 = ((int32_t)L_8);
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC572477AC18A88D1E39050487F3AFC778BE5AB9)), L_7, L_10, NULL);
		V_1 = L_11;
		uint16_t L_12 = V_0;
		String_t* L_13 = V_1;
		Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* L_14 = (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4(L_14, L_12, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utility_ValidateDialogShowHResult_m1910FC506925D9A2F9A1607FB345DB668DEB1601_RuntimeMethod_var)));
	}

IL_003d:
	{
		uint32_t L_15 = ___0_dialogHResult;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var)));
		bool L_16;
		L_16 = HResults_IsValidHResult_m65F92DF8D134400CBFAC4DBC9B0D003DB48EB5F1(L_15, NULL);
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_17 = ___0_dialogHResult;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var)));
		uint16_t L_18;
		L_18 = HResults_GetFacility_m061B4488B3938083590B891D3E2F5A4194AFBCC2(L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		uint32_t L_19 = ___0_dialogHResult;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HResults_t70D65269903D150FFDCECCFA2F2E892F2B0E73CC_il2cpp_TypeInfo_var)));
		uint16_t L_20;
		L_20 = HResults_GetCode_m65EEB95917551B9AAD1712DF735DD7DD021DA700(L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)261)))))
		{
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_21;
		L_21 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		uint32_t L_22 = ___0_dialogHResult;
		int32_t L_23 = ((int32_t)L_22);
		RuntimeObject* L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_23);
		uint16_t L_25 = ((uint16_t)((int32_t)261));
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)), &L_25);
		String_t* L_27;
		L_27 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79438F0CFC729131E811B764A2C87C953EC05998)), L_24, L_26, NULL);
		uint32_t L_28 = ___0_dialogHResult;
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_29 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_29, L_27, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utility_ValidateDialogShowHResult_m1910FC506925D9A2F9A1607FB345DB668DEB1601_RuntimeMethod_var)));
	}

IL_0081:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_30;
		L_30 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		uint32_t L_31 = ___0_dialogHResult;
		int32_t L_32 = ((int32_t)L_31);
		RuntimeObject* L_33 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_32);
		String_t* L_34;
		L_34 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DB32C6EEC478B74836299646F64F2534846F2C6)), L_33, NULL);
		uint32_t L_35 = ___0_dialogHResult;
		ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* L_36 = (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		ExternalException__ctor_mECDB72144D1A392F71985EA1278F7752AEEEA559(L_36, L_34, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utility_ValidateDialogShowHResult_m1910FC506925D9A2F9A1607FB345DB668DEB1601_RuntimeMethod_var)));
	}
}
// System.Void ShellFileDialogs.Utility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility__cctor_mDE60401170015FF12E314B57889642036458729E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872C8392F376E20FA8DCE4FAB36C100AFF4B5839);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830((&L_0), _stringLiteral872C8392F376E20FA8DCE4FAB36C100AFF4B5839, /*hidden argument*/NULL);
		((Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t94564F48217EFF2262AB9162AE40F8B116A4EEB6_il2cpp_TypeInfo_var))->____ishellItem2Guid_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Filter_get_Extensions_m831628883D9DCB568E09E1F019D39527C40F7F82_inline (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CExtensionsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Filter_get_DisplayName_m9749560E833ED0B8B994DCA22D9AEC63BDB5E1B5_inline (Filter_t7D44908EFA44AD0476DBB80C0537C7087273F40A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
