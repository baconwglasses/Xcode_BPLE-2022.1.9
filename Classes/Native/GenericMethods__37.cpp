#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Int32,System.Object>
struct Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166;
// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.Symbols.LabelSymbol>>
struct ArrayBuilder_1_tAC5C8C6F09C71DDACCE0079306E90555E60A4DDC;
// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.BoundStatement>
struct ArrayBuilder_1_t72C18DAFF01911B63A265D91E2EA4B5B2FEABFC8;
// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.Cci.LocalScope>
struct ArrayBuilder_1_tBB311F44C1B021ED8A06C3BA5BBEBE9E7D97EA0F;
// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.Symbols.LocalSymbol>
struct ArrayBuilder_1_tF88BC58042F67545693963B04736B7234E40679C;
// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<System.Object>
struct ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156;
// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.Debugging.StateMachineHoistedLocalScope>
struct ArrayBuilder_1_t0671810E1DA02DB0F94264A4F5AB942F100A9F17;
// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/NestedFunction>
struct ArrayBuilder_1_t7E013EC35CE2DB417BD0CA12F42F19B3DE3DCB0E;
// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope>
struct ArrayBuilder_1_t9F62C9EE46892C20E64BA3EFA2055546DDC50A77;
// Microsoft.CodeAnalysis.SmallDictionary`2/AvlNode<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.Symbol>
struct AvlNode_t3B551003C4DCB71896CDEBE2108A6B3246A90D84;
// Microsoft.CodeAnalysis.SmallDictionary`2/AvlNode<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope>
struct AvlNode_t40BBE3202725014A90F65B03A091C28686568DEE;
// System.Collections.Immutable.ImmutableArray`1/Builder<Microsoft.Cci.LocalScope>
struct Builder_t2E6F7A87881AD589DA2CE93051A526E30FD9409E;
// System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>
struct Builder_t942AD8818301E063D533998081916893FDCE50F9;
// System.Collections.Immutable.ImmutableArray`1/Builder<Microsoft.CodeAnalysis.Debugging.StateMachineHoistedLocalScope>
struct Builder_t1A3A0733F19AE761809045E10D0994035B896BA2;
// Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>
struct CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>
struct CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<Microsoft.CodeAnalysis.GreenNode,Microsoft.CodeAnalysis.DiagnosticInfo[]>
struct ConditionalWeakTable_2_tB940FD7A927A09C55983E4A6103B0381CEEDB034;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<Microsoft.CodeAnalysis.GreenNode,Microsoft.CodeAnalysis.SyntaxAnnotation[]>
struct ConditionalWeakTable_2_tF90605E162A1AED2E408015931AC2D618B81470D;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<Microsoft.CodeAnalysis.SyntaxNode,System.Collections.Generic.Dictionary`2<Microsoft.CodeAnalysis.SyntaxTrivia,System.WeakReference`1<Microsoft.CodeAnalysis.SyntaxNode>>>
struct ConditionalWeakTable_2_tFF0127EAA1159C54E8801EEF103451E79ABF5F5A;
// Roslyn.Utilities.ConsList`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Directive>
struct ConsList_1_t150879BB9558BCC698606A37D628BEBBB1263AF2;
// DependencyProperty`1<Innovation.HexColor>
struct DependencyProperty_1_t1593ED22F77C638DD854B4213CFC4F9CB0BE52B1;
// DependencyProperty`1<System.Object>
struct DependencyProperty_1_t8A49923D1A9029AD78C6DB192D3B487657974CFE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
// System.Func`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CompilationUnitSyntax>
struct Func_1_t7E5E39A9918BD468ECD14D715B017E6F4DD23241;
// System.Func`2<Microsoft.CodeAnalysis.DiagnosticInfo,System.Boolean>
struct Func_2_t3EDA4ED44BA25AD1FB94C148C94D23F6CA75E16A;
// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean>
struct Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2;
// System.Func`2<Microsoft.CodeAnalysis.CSharp.Symbol,System.Boolean>
struct Func_2_tE8D13050BF8FF0711F62BBAB0078F4AF264760E2;
// System.Func`2<Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations,System.Boolean>
struct Func_2_t710DD2A9A7666A24C110DFCD1610C277D1BFF934;
// System.Func`2<Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations,Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations>
struct Func_2_t7B93DD1CC82C8CE5A6C4015324B345A6834BBF9C;
// System.Collections.Generic.HashSet`1<Microsoft.CodeAnalysis.CSharp.Symbols.MethodSymbol>
struct HashSet_1_t9FB2776BC56CB3A68CBE841B4025A021B1BDE5A7;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEnumerable`1<Microsoft.CodeAnalysis.SyntaxAnnotation>
struct IEnumerable_1_t5F1CC977DE404B8A501EA45C88AE703912676B9B;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>
struct IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.CodeAnalysis.CSharp.Symbol>
struct IEqualityComparer_1_tBF59AC2AFE6ED35F5432B5384E6CAD04D8CF0EBB;
// System.Collections.Immutable.ImmutableHashSet`1<Microsoft.CodeAnalysis.CSharp.Symbol>
struct ImmutableHashSet_1_t17D9F269360F6B939B75F2B2B4B90C9000DCF469;
// System.Collections.Immutable.ImmutableStack`1<Microsoft.CodeAnalysis.Text.TextChangeRange>
struct ImmutableStack_1_t1BAA3080BBE3083579B2CD567B0D74DF987233C7;
// System.Collections.Generic.List`1<Tuple`2<System.Int32,System.Int32>>
struct List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C;
// System.Collections.Generic.List`1<Tuple`2<System.Int32Enum,System.Int32>>
struct List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F;
// System.Collections.Generic.List`1<Tuple`2<System.Object,System.Object>>
struct List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD;
// System.Collections.Generic.List`1<Tuple`2<BasePart/PartTier,System.Int32>>
struct List_1_tFEE01D31EE62AFEFE72F12EE1312E97FC57F54D8;
// System.Collections.Generic.List`1<Tuple`2<LootCrateRewards/Powerup,System.Int32>>
struct List_1_tC119318CB9D78238A64203A39AC35B80D195384B;
// System.Collections.Generic.List`1<Tuple`2<LootCrateRewards/Reward,System.Int32>>
struct List_1_t49D5877C5ADA7B9E00F439F1BB2D07705263F7B2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<INAddonInterface/AddonPackageItem/SettingsItem>
struct List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0;
// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.Cci.LocalScope>>
struct ObjectPool_1_t6E70DE297AD501BD386D1B46E2B4908187430109;
// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<System.Object>>
struct ObjectPool_1_t79E9E8465AD9BA02691E40DC4FE38A2EAF31E900;
// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.Debugging.StateMachineHoistedLocalScope>>
struct ObjectPool_1_t62A7E0D935795F3771662035641AF2162F3C0FC8;
// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode[]>
struct ObjectPool_1_t0143978BE12F5525F69F9E068692E9B77B22A9D8;
// Microsoft.CodeAnalysis.PooledObjects.PooledDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbols.LabelSymbol,Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope>>
struct PooledDictionary_2_tADFDC0534EA731C3090237A62DF43F7A4F36527E;
// Roslyn.Utilities.SetWithInsertionOrder`1<Microsoft.CodeAnalysis.CSharp.Symbol>
struct SetWithInsertionOrder_1_tE78C054F5C0ED70A8365FFF496C721312F3A7003;
// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<Innovation.HexColor>
struct SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A;
// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<System.Object>
struct SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0;
// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol,System.Int32>
struct SmallDictionary_2_t4C5C7B6A7724A2E3132BF571F896ABDF9D60F234;
// Microsoft.CodeAnalysis.SmallDictionary`2<System.Object,System.Object>
struct SmallDictionary_2_t224704581096727C17DA52F264EF166BBBBBA86C;
// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.Symbol>
struct SmallDictionary_2_t61F20CBCA1E44A9F1E4240C34CDCF014BE5AB464;
// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope>
struct SmallDictionary_2_tE87779D5BCF23473F3D2AE246FDCE304BDDD8A9E;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// Parsable/TryParser`1<Innovation.HexColor>
struct TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB;
// Parsable/TryParser`1<System.Object>
struct TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// Microsoft.CodeAnalysis.ArrayElement`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken>[]
struct ArrayElement_1U5BU5D_tF3825C702F5FD47209814235E6FEDBE07D023128;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// Tuple`2<System.Int32,System.Int32>[]
struct Tuple_2U5BU5D_tF88ABA1BCD3F889D14A178EC9399DA05BB3E3D31;
// Tuple`2<System.Int32Enum,System.Int32>[]
struct Tuple_2U5BU5D_t877ABC6E9B6C06DD710A333D72B8F695A3738CA7;
// Tuple`2<System.Object,System.Object>[]
struct Tuple_2U5BU5D_tA1DE2C94E1E27CDA12EE28BE507E91630C6668AF;
// Microsoft.CodeAnalysis.WellKnownMember[][]
struct WellKnownMemberU5BU5DU5BU5D_tA508D0C57E9F67420C52F519FC805FAC8FE0EC14;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode[]
struct BlendedNodeU5BU5D_tDDF416DED56FED0755C9849BCA40404676D6D6F0;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Microsoft.CodeAnalysis.DiagnosticInfo[]
struct DiagnosticInfoU5BU5D_t98A1EDE8F2E439F950024FB4AA3EEE24D16F3CB5;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol[]
struct FieldSymbolU5BU5D_t1450AAFCE658F7AA0F1C7E39CA71838E3D2C8CB7;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Microsoft.CodeAnalysis.Location[]
struct LocationU5BU5D_tF936352E7091EFA9ED2E1965A6A44DBBB3788B60;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Microsoft.CodeAnalysis.SyntaxAnnotation[]
struct SyntaxAnnotationU5BU5D_tF0999F854C21662813F0D6CBE3EF6AC2109C679E;
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations[]
struct TypeWithAnnotationsU5BU5D_tF7C8C7B1DCC5F5721431052BC989EAA2E46CE0CC;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Microsoft.CodeAnalysis.WellKnownMember[]
struct WellKnownMemberU5BU5D_t8CE8D9BB3CFCF50C7B3BCE33C60E429543B67CEB;
// Microsoft.CodeAnalysis.WellKnownType[]
struct WellKnownTypeU5BU5D_t7E8CA70954640E95BCF3AE33E678438DE44BB418;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// INAddonInterface/AddonPackageItem/SettingsItem[]
struct SettingsItemU5BU5D_tD50FD4CE086D9DA1D72C5B08112EC45408923ED4;
// Innovation.AddonPackageSettings
struct AddonPackageSettings_t4028D098AA0A018D48A0442A6734C527E1266984;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Microsoft.CodeAnalysis.CSharp.BoundExpression
struct BoundExpression_t85735CC1B63AF7F5EC37195D98DDA1FE40663EB2;
// Microsoft.CodeAnalysis.CSharp.BoundNode
struct BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED;
// Microsoft.CodeAnalysis.CSharp.CSharpSyntaxNode
struct CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxNode
struct CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.ContextAwareSyntax
struct ContextAwareSyntax_tAEE590283F1D29785449D10DD06381EA94BB65E9;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.DiagnosticBag
struct DiagnosticBag_t1E0F19A39E3F3E6FDE71511598F3EE9140F996D3;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// Microsoft.CodeAnalysis.CSharp.Syntax.ExpressionSyntax
struct ExpressionSyntax_t8D179B537BC7F2A20B35B6102FEB5CAFA55E55BF;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.ExpressionSyntax
struct ExpressionSyntax_tCCDF6E498A80E4066E73A960B706BB6452CD2B4A;
// Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol
struct FieldSymbol_tCCD061C1EA8C6911B32F56786D491A69DA8F40ED;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Microsoft.CodeAnalysis.GreenNode
struct GreenNode_tB2D7367B6C729B96916E94765BCC040257641579;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.CodeAnalysis.ISymbol
struct ISymbol_t54880346F6D9B7BC8B02C24CFBB31DC567D3B586;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t5B384C1DCF0750B44E124D640E4F041DB19B7FD1;
// Microsoft.CodeAnalysis.CSharp.Syntax.IdentifierNameSyntax
struct IdentifierNameSyntax_t5C50B000E5C6098CA25E6EBA8D7C00BFCB2ACDCD;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.IdentifierNameSyntax
struct IdentifierNameSyntax_t84F9CBEDAEC8D265DB301CDF553B714DDD47E0BF;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser
struct LanguageParser_t903901AC19BED8763E7B3160790F4B0EBEE9508E;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Lexer
struct Lexer_t343AA226AE558D51577150AD779641CE8533ED9F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.CodeAnalysis.CSharp.Symbols.MethodSymbol
struct MethodSymbol_tFDDAF188A7EDCBD96D49DDF3B98DF81EA9011373;
// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol
struct NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Microsoft.CodeAnalysis.CSharp.Symbol
struct Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E;
// Microsoft.CodeAnalysis.SymbolDisplayFormat
struct SymbolDisplayFormat_t731E5D3B12F0C00C166475DC772AB9A7BCFE786E;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxFactoryContext
struct SyntaxFactoryContext_tD192715CD87545281C59813B04506EAE61DCBB22;
// Microsoft.CodeAnalysis.Syntax.InternalSyntax.SyntaxListPool
struct SyntaxListPool_t77D1CDA9AD69C7744D46844C5DA188388211366A;
// Microsoft.CodeAnalysis.SyntaxNode
struct SyntaxNode_t90CA509576451F85185DB0F03B2998C51EB73C67;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser
struct SyntaxParser_t31755989D12224FCF0C87C082609F548153050F3;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken
struct SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD;
// Microsoft.CodeAnalysis.SyntaxTree
struct SyntaxTree_tA38E60FD5A3F203289CE3A8B38299AEAE28A52AD;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol
struct TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC;
// UITextLocale
struct UITextLocale_t8D3FE0E6E8D9DE7D7BEDFB3900C853EAA12B799D;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.CodeAnalysis.CSharp.Symbols.WrappedFieldSymbol
struct WrappedFieldSymbol_t3D19B7BAA9A16521812F943CBFAE2128A2905A99;
// System.Xml.Linq.XAttribute
struct XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF;
// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990;
// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1;
// System.Xml.Linq.XElement
struct XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909;
// System.Xml.Linq.XName
struct XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C;
// System.Xml.Linq.XNamespace
struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C;
// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30;
// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA;
// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameAttributeSyntax
struct XmlNameAttributeSyntax_tD261DB395F4CBD6F9329EC7621A18C6CEFF73FDF;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax
struct XmlNameAttributeSyntax_t73040D492E2BC83A39F8F70522ACAEEF528FC701;
// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax
struct XmlNameSyntax_tA6F440D00BCA73F4E334A122E0CCEA86A2441E13;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax
struct XmlNameSyntax_tB8722A6A5D3EEE289532ABAD7B4AECD5412225B2;
// Microsoft.CodeAnalysis.CSharp.Syntax.XmlPrefixSyntax
struct XmlPrefixSyntax_t402813138B42F39CB849FF22E595FCF6AE540B34;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlPrefixSyntax
struct XmlPrefixSyntax_t1ADB536CCAA1326F3A788EC90F1AE81C0B6E4D6F;
// Microsoft.CodeAnalysis.CSharp.Syntax.XmlProcessingInstructionSyntax
struct XmlProcessingInstructionSyntax_t6878CC638FD78DBB51C953C60ED067D982A728C2;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax
struct XmlProcessingInstructionSyntax_tC44CD7F7A0FCC08F8636258921A44EDD120CDDB9;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
// Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextAttributeSyntax
struct XmlTextAttributeSyntax_t827CE27B9E760A89AC6D921FCC0D9AA08B252B6A;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax
struct XmlTextAttributeSyntax_t751525205B497F48702536E8638C778D0EF1D70D;
// Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextSyntax
struct XmlTextSyntax_tEE6A5FCB5C1B3D269EC0C99E7636F82CD009AE1A;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextSyntax
struct XmlTextSyntax_tD99895C4A83D5823D80F2DA6830ADB9215B86CDC;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E;
// Microsoft.CodeAnalysis.CSharp.Syntax.YieldStatementSyntax
struct YieldStatementSyntax_t14BEAD3071458D4756B4F8E15C768A4FD5D382F5;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax
struct YieldStatementSyntax_tF7FB46CD1BF4C4F9CCE04D28FF4FAC331510A0A5;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c
struct U3CU3Ec_tEEBECE1186C808AC7E2D6AFE4EDDEF2D70184C07;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// LootCrateRewards/Slot
struct Slot_t6D7075E2EC5ACACD82BBB080260D408BFE52D305;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData
struct TupleExtraData_tBC6A5DF4097B0B6815A2DE8811E94EAE82088FC3;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol/InterfaceInfo
struct InterfaceInfo_t6497B28376DAE8C0C1234BD5B1FB73DA65F930B9;
// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ClosureEnvironment
struct ClosureEnvironment_t2CE6A9378FA9EAC3A7BBF04C5E0D5796EFBE3D70;
// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/NestedFunction
struct NestedFunction_t9C59AFB75B08415139A9A94D7697DA2872D87BD9;
// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope
struct Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0;
// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder
struct ScopeTreeBuilder_tF044EAD7FEAFBBDCF4064D6859D8271733838164;
// INAddonInterface/AddonPackageItem/SettingsGroup
struct SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172;
// INAddonInterface/AddonPackageItem/SettingsItem
struct SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885;
// Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState/Boxed
struct Boxed_tAF4CD55E5EFF7951DA251278D531CD660CFA0E91;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TupleElementFieldSymbol_tAE7F7540F5DC2ED5F3A39EFE5622CAA07BC14A78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBBED8C6A7DEEDE4E2B90536516BBDEE1190F7482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallDictionary_2_Add_m9615F423DFC9CFD6D82D20CD21487D52A90787DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SmallDictionary_2_TryGetValue_mAF73E0191478D73919249734137D592EC78CA796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.Cci.LocalScope>
struct ArrayBuilder_1_tBB311F44C1B021ED8A06C3BA5BBEBE9E7D97EA0F  : public RuntimeObject
{
	// System.Collections.Immutable.ImmutableArray`1/Builder<T> Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1::_builder
	Builder_t2E6F7A87881AD589DA2CE93051A526E30FD9409E* ____builder_0;
	// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<T>> Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1::_pool
	ObjectPool_1_t6E70DE297AD501BD386D1B46E2B4908187430109* ____pool_1;
};

// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<System.Object>
struct ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156  : public RuntimeObject
{
	// System.Collections.Immutable.ImmutableArray`1/Builder<T> Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1::_builder
	Builder_t942AD8818301E063D533998081916893FDCE50F9* ____builder_0;
	// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<T>> Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1::_pool
	ObjectPool_1_t79E9E8465AD9BA02691E40DC4FE38A2EAF31E900* ____pool_1;
};

// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.Debugging.StateMachineHoistedLocalScope>
struct ArrayBuilder_1_t0671810E1DA02DB0F94264A4F5AB942F100A9F17  : public RuntimeObject
{
	// System.Collections.Immutable.ImmutableArray`1/Builder<T> Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1::_builder
	Builder_t1A3A0733F19AE761809045E10D0994035B896BA2* ____builder_0;
	// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<T>> Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1::_pool
	ObjectPool_1_t62A7E0D935795F3771662035641AF2162F3C0FC8* ____pool_1;
};

// System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>
struct Builder_t942AD8818301E063D533998081916893FDCE50F9  : public RuntimeObject
{
	// T[] System.Collections.Immutable.ImmutableArray`1/Builder::_elements
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____elements_0;
	// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder::_count
	int32_t ____count_1;
};

// Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>
struct CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F  : public RuntimeObject
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>
struct CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428  : public RuntimeObject
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<Tuple`2<System.Int32,System.Int32>>
struct List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Tuple_2U5BU5D_tF88ABA1BCD3F889D14A178EC9399DA05BB3E3D31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Tuple`2<System.Int32Enum,System.Int32>>
struct List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Tuple_2U5BU5D_t877ABC6E9B6C06DD710A333D72B8F695A3738CA7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Tuple`2<System.Object,System.Object>>
struct List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Tuple_2U5BU5D_tA1DE2C94E1E27CDA12EE28BE507E91630C6668AF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.TimeSpan>
struct List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<INAddonInterface/AddonPackageItem/SettingsItem>
struct List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SettingsItemU5BU5D_tD50FD4CE086D9DA1D72C5B08112EC45408923ED4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.Symbol>
struct SmallDictionary_2_t61F20CBCA1E44A9F1E4240C34CDCF014BE5AB464  : public RuntimeObject
{
	// Microsoft.CodeAnalysis.SmallDictionary`2/AvlNode<K,V> Microsoft.CodeAnalysis.SmallDictionary`2::_root
	AvlNode_t3B551003C4DCB71896CDEBE2108A6B3246A90D84* ____root_0;
	// System.Collections.Generic.IEqualityComparer`1<K> Microsoft.CodeAnalysis.SmallDictionary`2::Comparer
	RuntimeObject* ___Comparer_1;
};

// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope>
struct SmallDictionary_2_tE87779D5BCF23473F3D2AE246FDCE304BDDD8A9E  : public RuntimeObject
{
	// Microsoft.CodeAnalysis.SmallDictionary`2/AvlNode<K,V> Microsoft.CodeAnalysis.SmallDictionary`2::_root
	AvlNode_t40BBE3202725014A90F65B03A091C28686568DEE* ____root_0;
	// System.Collections.Generic.IEqualityComparer`1<K> Microsoft.CodeAnalysis.SmallDictionary`2::Comparer
	RuntimeObject* ___Comparer_1;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// Tuple`2<System.Int32,System.Int32>
struct Tuple_2_tB567DF9E3879C7F28DEF8C2CE615E24002FA55CE  : public RuntimeObject
{
	// T1 Tuple`2::item1
	int32_t ___item1_0;
	// T2 Tuple`2::item2
	int32_t ___item2_1;
};

// Tuple`2<System.Object,System.Object>
struct Tuple_2_t9A9133B09D0169DACED4F3B7A0A6DBADC329CF58  : public RuntimeObject
{
	// T1 Tuple`2::item1
	RuntimeObject* ___item1_0;
	// T2 Tuple`2::item2
	RuntimeObject* ___item2_1;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// Microsoft.CodeAnalysis.CSharp.BoundTreeVisitor
struct BoundTreeVisitor_tEB4FA1101F168E8BB40818CF58B8C0CDEB8993AA  : public RuntimeObject
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

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Microsoft.CodeAnalysis.CSharp.Symbol
struct Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E  : public RuntimeObject
{
	// Microsoft.CodeAnalysis.ISymbol Microsoft.CodeAnalysis.CSharp.Symbol::_lazyISymbol
	RuntimeObject* ____lazyISymbol_0;
};

// Microsoft.CodeAnalysis.SyntaxNode
struct SyntaxNode_t90CA509576451F85185DB0F03B2998C51EB73C67  : public RuntimeObject
{
	// Microsoft.CodeAnalysis.SyntaxNode Microsoft.CodeAnalysis.SyntaxNode::_parent
	SyntaxNode_t90CA509576451F85185DB0F03B2998C51EB73C67* ____parent_0;
	// Microsoft.CodeAnalysis.SyntaxTree Microsoft.CodeAnalysis.SyntaxNode::_syntaxTree
	SyntaxTree_tA38E60FD5A3F203289CE3A8B38299AEAE28A52AD* ____syntaxTree_1;
	// Microsoft.CodeAnalysis.GreenNode Microsoft.CodeAnalysis.SyntaxNode::<Green>k__BackingField
	GreenNode_tB2D7367B6C729B96916E94765BCC040257641579* ___U3CGreenU3Ek__BackingField_2;
	// System.Int32 Microsoft.CodeAnalysis.SyntaxNode::<Position>k__BackingField
	int32_t ___U3CPositionU3Ek__BackingField_3;
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

// System.Xml.Linq.XName
struct XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C  : public RuntimeObject
{
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::_ns
	XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* ____ns_0;
	// System.String System.Xml.Linq.XName::_localName
	String_t* ____localName_1;
	// System.Int32 System.Xml.Linq.XName::_hashCode
	int32_t ____hashCode_2;
};

// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29  : public RuntimeObject
{
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject* ___annotations_1;
};

// Roslyn.Utilities.XmlUtilities
struct XmlUtilities_tDF28328B277798314FF4F33AF6BE62692492BEA0  : public RuntimeObject
{
};

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeInfo
struct ScopeInfo_t96AA0DD6C6DB222A82F94B483A25AA7CC5EC619F  : public RuntimeObject
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c
struct U3CU3Ec_tEEBECE1186C808AC7E2D6AFE4EDDEF2D70184C07  : public RuntimeObject
{
};

// LootCrateRewards/Slot
struct Slot_t6D7075E2EC5ACACD82BBB080260D408BFE52D305  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Tuple`2<BasePart/PartTier,System.Int32>> LootCrateRewards/Slot::partChances
	List_1_tFEE01D31EE62AFEFE72F12EE1312E97FC57F54D8* ___partChances_13;
	// System.Collections.Generic.List`1<Tuple`2<LootCrateRewards/Powerup,System.Int32>> LootCrateRewards/Slot::powerupChances
	List_1_tC119318CB9D78238A64203A39AC35B80D195384B* ___powerupChances_14;
	// System.Collections.Generic.List`1<Tuple`2<System.Int32,System.Int32>> LootCrateRewards/Slot::dessertChances
	List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* ___dessertChances_15;
	// System.Collections.Generic.List`1<Tuple`2<System.Int32,System.Int32>> LootCrateRewards/Slot::scrapChances
	List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* ___scrapChances_16;
	// System.Collections.Generic.List`1<Tuple`2<System.Int32,System.Int32>> LootCrateRewards/Slot::coinChances
	List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* ___coinChances_17;
	// System.Collections.Generic.List`1<Tuple`2<LootCrateRewards/Reward,System.Int32>> LootCrateRewards/Slot::chances
	List_1_t49D5877C5ADA7B9E00F439F1BB2D07705263F7B2* ___chances_18;
	// System.Collections.Generic.List`1<Tuple`2<LootCrateRewards/Reward,System.Int32>> LootCrateRewards/Slot::noDessertChances
	List_1_t49D5877C5ADA7B9E00F439F1BB2D07705263F7B2* ___noDessertChances_19;
	// System.Int32 LootCrateRewards/Slot::scrapVariation
	int32_t ___scrapVariation_20;
	// System.Int32 LootCrateRewards/Slot::lootBoxMask
	int32_t ___lootBoxMask_21;
};

// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope
struct Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0  : public RuntimeObject
{
	// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope::Parent
	Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0* ___Parent_0;
	// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope> Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope::NestedScopes
	ArrayBuilder_1_t9F62C9EE46892C20E64BA3EFA2055546DDC50A77* ___NestedScopes_1;
	// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/NestedFunction> Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope::NestedFunctions
	ArrayBuilder_1_t7E013EC35CE2DB417BD0CA12F42F19B3DE3DCB0E* ___NestedFunctions_2;
	// Roslyn.Utilities.SetWithInsertionOrder`1<Microsoft.CodeAnalysis.CSharp.Symbol> Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope::DeclaredVariables
	SetWithInsertionOrder_1_tE78C054F5C0ED70A8365FFF496C721312F3A7003* ___DeclaredVariables_3;
	// Microsoft.CodeAnalysis.CSharp.BoundNode Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope::BoundNode
	BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED* ___BoundNode_4;
	// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/NestedFunction Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope::ContainingFunctionOpt
	NestedFunction_t9C59AFB75B08415139A9A94D7697DA2872D87BD9* ___ContainingFunctionOpt_5;
	// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ClosureEnvironment Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope::DeclaredEnvironment
	ClosureEnvironment_t2CE6A9378FA9EAC3A7BBF04C5E0D5796EFBE3D70* ___DeclaredEnvironment_6;
	// System.Boolean Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope::<CanMergeWithParent>k__BackingField
	bool ___U3CCanMergeWithParentU3Ek__BackingField_7;
};

// INAddonInterface/AddonPackageItem/SettingsGroup
struct SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172  : public RuntimeObject
{
	// Innovation.AddonPackageSettings INAddonInterface/AddonPackageItem/SettingsGroup::m_source
	AddonPackageSettings_t4028D098AA0A018D48A0442A6734C527E1266984* ___m_source_0;
	// UnityEngine.GameObject INAddonInterface/AddonPackageItem/SettingsGroup::m_gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_gameObject_1;
	// UnityEngine.GameObject INAddonInterface/AddonPackageItem/SettingsGroup::m_itemTemplate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_itemTemplate_2;
	// System.Collections.Generic.List`1<INAddonInterface/AddonPackageItem/SettingsItem> INAddonInterface/AddonPackageItem/SettingsGroup::m_items
	List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0* ___m_items_3;
};

// INAddonInterface/AddonPackageItem/SettingsItem
struct SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885  : public RuntimeObject
{
	// INAddonInterface/AddonPackageItem/SettingsGroup INAddonInterface/AddonPackageItem/SettingsItem::m_group
	SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* ___m_group_0;
	// UnityEngine.GameObject INAddonInterface/AddonPackageItem/SettingsItem::m_gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_gameObject_1;
	// UnityEngine.UI.Text INAddonInterface/AddonPackageItem/SettingsItem::m_name
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_name_2;
	// UITextLocale INAddonInterface/AddonPackageItem/SettingsItem::m_nameLocale
	UITextLocale_t8D3FE0E6E8D9DE7D7BEDFB3900C853EAA12B799D* ___m_nameLocale_3;
};

// System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>
struct Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F 
{
	// T[] System.Collections.Immutable.ImmutableArray`1/Enumerator::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Immutable.ImmutableArray`1/Enumerator::_index
	int32_t ____index_1;
};

// System.Collections.Immutable.ImmutableArray`1<System.Boolean>
struct ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025 
{
	// T[] System.Collections.Immutable.ImmutableArray`1::array
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___array_1;
};

// System.Collections.Immutable.ImmutableArray`1<Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol>
struct ImmutableArray_1_t7C6C55D4C6C28084A38ED891459100FC241122EB 
{
	// T[] System.Collections.Immutable.ImmutableArray`1::array
	FieldSymbolU5BU5D_t1450AAFCE658F7AA0F1C7E39CA71838E3D2C8CB7* ___array_1;
};

// System.Collections.Immutable.ImmutableArray`1<Microsoft.CodeAnalysis.Location>
struct ImmutableArray_1_t7F3C6A7CACA1BC1220B5810A121AA9F7F1825B44 
{
	// T[] System.Collections.Immutable.ImmutableArray`1::array
	LocationU5BU5D_tF936352E7091EFA9ED2E1965A6A44DBBB3788B60* ___array_1;
};

// System.Collections.Immutable.ImmutableArray`1<System.Object>
struct ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 
{
	// T[] System.Collections.Immutable.ImmutableArray`1::array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array_1;
};

// System.Collections.Immutable.ImmutableArray`1<System.String>
struct ImmutableArray_1_t2024A2F442847A9E3E12E0F00CE2FE372B2F301C 
{
	// T[] System.Collections.Immutable.ImmutableArray`1::array
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array_1;
};

// System.Collections.Immutable.ImmutableArray`1<Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations>
struct ImmutableArray_1_t9779403D34AD7D3C8C7943B8DA727C5B11B5885D 
{
	// T[] System.Collections.Immutable.ImmutableArray`1::array
	TypeWithAnnotationsU5BU5D_tF7C8C7B1DCC5F5721431052BC989EAA2E46CE0CC* ___array_1;
};

// INAddonInterface/AddonPackageItem/SettingsItem`1<Innovation.HexColor>
struct SettingsItem_1_t1F2D01923048EE17D65C0F41509B36DFAB5C6BCE  : public SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885
{
	// DependencyProperty`1<T> INAddonInterface/AddonPackageItem/SettingsItem`1::m_property
	DependencyProperty_1_t1593ED22F77C638DD854B4213CFC4F9CB0BE52B1* ___m_property_4;
};

// INAddonInterface/AddonPackageItem/SettingsItem`1<System.Object>
struct SettingsItem_1_tB986E59B98972877462EB56E8B59A2EECAEBC699  : public SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885
{
	// DependencyProperty`1<T> INAddonInterface/AddonPackageItem/SettingsItem`1::m_property
	DependencyProperty_1_t8A49923D1A9029AD78C6DB192D3B487657974CFE* ___m_property_4;
};

// Microsoft.CodeAnalysis.BitVector
struct BitVector_tDACA4D1EAD4489A7B28FAC83AE8FAB0DF0C3192A 
{
	// System.UInt64 Microsoft.CodeAnalysis.BitVector::_bits0
	uint64_t ____bits0_5;
	// System.UInt64[] Microsoft.CodeAnalysis.BitVector::_bits
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____bits_6;
	// System.Int32 Microsoft.CodeAnalysis.BitVector::_capacity
	int32_t ____capacity_7;
};
// Native definition for P/Invoke marshalling of Microsoft.CodeAnalysis.BitVector
struct BitVector_tDACA4D1EAD4489A7B28FAC83AE8FAB0DF0C3192A_marshaled_pinvoke
{
	uint64_t ____bits0_5;
	Il2CppSafeArray/*NONE*/* ____bits_6;
	int32_t ____capacity_7;
};
// Native definition for COM marshalling of Microsoft.CodeAnalysis.BitVector
struct BitVector_tDACA4D1EAD4489A7B28FAC83AE8FAB0DF0C3192A_marshaled_com
{
	uint64_t ____bits0_5;
	Il2CppSafeArray/*NONE*/* ____bits_6;
	int32_t ____capacity_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Microsoft.CodeAnalysis.CSharp.BoundTreeWalker
struct BoundTreeWalker_tA452740B5614F2A953898AED74C7A74C3F69748E  : public BoundTreeVisitor_tEB4FA1101F168E8BB40818CF58B8C0CDEB8993AA
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Microsoft.CodeAnalysis.CSharp.CSharpSyntaxNode
struct CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC  : public SyntaxNode_t90CA509576451F85185DB0F03B2998C51EB73C67
{
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.DirectiveStack
struct DirectiveStack_tDF71F033C6F61B3987C26B62036C4F7711C7C275 
{
	// Roslyn.Utilities.ConsList`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Directive> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.DirectiveStack::_directives
	ConsList_1_t150879BB9558BCC698606A37D628BEBBB1263AF2* ____directives_2;
};
// Native definition for P/Invoke marshalling of Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.DirectiveStack
struct DirectiveStack_tDF71F033C6F61B3987C26B62036C4F7711C7C275_marshaled_pinvoke
{
	ConsList_1_t150879BB9558BCC698606A37D628BEBBB1263AF2* ____directives_2;
};
// Native definition for COM marshalling of Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.DirectiveStack
struct DirectiveStack_tDF71F033C6F61B3987C26B62036C4F7711C7C275_marshaled_com
{
	ConsList_1_t150879BB9558BCC698606A37D628BEBBB1263AF2* ____directives_2;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol
struct FieldSymbol_tCCD061C1EA8C6911B32F56786D491A69DA8F40ED  : public Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E
{
};

// Innovation.HexColor
struct HexColor_t8E60DC9B1FD0624FA9B082CE2D801A7F0C0E40C4 
{
	// System.UInt32 Innovation.HexColor::m_rgba
	uint32_t ___m_rgba_0;
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

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// Microsoft.CodeAnalysis.CSharp.Symbols.NamespaceOrTypeSymbol
struct NamespaceOrTypeSymbol_t9D62F5A279B3E392B45CE880DCD5951F586B0A92  : public Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E
{
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Microsoft.CodeAnalysis.SyntaxNodeOrToken
struct SyntaxNodeOrToken_tF5F56125C20FF6FA8BCBB39109E3E297E74A7F1A 
{
	// Microsoft.CodeAnalysis.SyntaxNode Microsoft.CodeAnalysis.SyntaxNodeOrToken::_nodeOrParent
	SyntaxNode_t90CA509576451F85185DB0F03B2998C51EB73C67* ____nodeOrParent_0;
	// Microsoft.CodeAnalysis.GreenNode Microsoft.CodeAnalysis.SyntaxNodeOrToken::_token
	GreenNode_tB2D7367B6C729B96916E94765BCC040257641579* ____token_1;
	// System.Int32 Microsoft.CodeAnalysis.SyntaxNodeOrToken::_position
	int32_t ____position_2;
	// System.Int32 Microsoft.CodeAnalysis.SyntaxNodeOrToken::_tokenIndex
	int32_t ____tokenIndex_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// System.Xml.Linq.XAttribute
struct XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::next
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___next_2;
	// System.Xml.Linq.XName System.Xml.Linq.XAttribute::name
	XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name_3;
	// System.String System.Xml.Linq.XAttribute::value
	String_t* ___value_4;
};

// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* ___next_2;
};

// Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds
struct ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED 
{
	// System.Int32 Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds::Begin
	int32_t ___Begin_0;
	// System.Int32 Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds::End
	int32_t ___End_1;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<Innovation.HexColor>
struct SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A  : public SettingsItem_1_t1F2D01923048EE17D65C0F41509B36DFAB5C6BCE
{
	// UnityEngine.UI.InputField INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1::m_inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___m_inputField_5;
	// Parsable/TryParser`1<T> INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1::m_parser
	TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB* ___m_parser_6;
};

// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<System.Object>
struct SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0  : public SettingsItem_1_tB986E59B98972877462EB56E8B59A2EECAEBC699
{
	// UnityEngine.UI.InputField INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1::m_inputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___m_inputField_5;
	// Parsable/TryParser`1<T> INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1::m_parser
	TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709* ___m_parser_6;
};

// Microsoft.CodeAnalysis.CSharp.BoundKind
struct BoundKind_t5A632E1FFFE90143FDBCDA21F35BC8A995F31634 
{
	// System.Byte Microsoft.CodeAnalysis.CSharp.BoundKind::value__
	uint8_t ___value___2;
};

// Microsoft.CodeAnalysis.CSharp.BoundTreeWalkerWithStackGuard
struct BoundTreeWalkerWithStackGuard_t510F96B7A8B1850F3844C667AE33452AE27B0156  : public BoundTreeWalker_tA452740B5614F2A953898AED74C7A74C3F69748E
{
	// System.Int32 Microsoft.CodeAnalysis.CSharp.BoundTreeWalkerWithStackGuard::_recursionDepth
	int32_t ____recursionDepth_0;
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

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LexerMode
struct LexerMode_tE679550AEEF064446E9EE0CFB0CD408F9AD27509 
{
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LexerMode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.StatementSyntax
struct StatementSyntax_t99A54A235103A009D3DF831C0D3E97F2406C2760  : public CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC
{
};

// Microsoft.CodeAnalysis.CSharp.SyntaxKind
struct SyntaxKind_t184CE32CC46CF85DF82FC8DC6D024D43CC7462B9 
{
	// System.UInt16 Microsoft.CodeAnalysis.CSharp.SyntaxKind::value__
	uint16_t ___value___2;
};

// Microsoft.CodeAnalysis.TypeCompareKind
struct TypeCompareKind_tB003C37DDD6FD31394397573F4A638D180362C28 
{
	// System.Int32 Microsoft.CodeAnalysis.TypeCompareKind::value__
	int32_t ___value___2;
};

// Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol
struct TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC  : public NamespaceOrTypeSymbol_t9D62F5A279B3E392B45CE880DCD5951F586B0A92
{
	// System.Collections.Immutable.ImmutableHashSet`1<Microsoft.CodeAnalysis.CSharp.Symbol> Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol::_lazyAbstractMembers
	ImmutableHashSet_1_t17D9F269360F6B939B75F2B2B4B90C9000DCF469* ____lazyAbstractMembers_4;
	// Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol/InterfaceInfo Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol::_lazyInterfaceInfo
	InterfaceInfo_t6497B28376DAE8C0C1234BD5B1FB73DA65F930B9* ____lazyInterfaceInfo_5;
};

// Microsoft.CodeAnalysis.CSharp.Symbols.WrappedFieldSymbol
struct WrappedFieldSymbol_t3D19B7BAA9A16521812F943CBFAE2128A2905A99  : public FieldSymbol_tCCD061C1EA8C6911B32F56786D491A69DA8F40ED
{
	// Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol Microsoft.CodeAnalysis.CSharp.Symbols.WrappedFieldSymbol::_underlyingField
	FieldSymbol_tCCD061C1EA8C6911B32F56786D491A69DA8F40ED* ____underlyingField_2;
};

// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject* ___content_3;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlAttributeSyntax
struct XmlAttributeSyntax_t5BF2BFE0F3D2EACF4919A7F2386EE5B69D772435  : public CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax
struct XmlNameSyntax_tA6F440D00BCA73F4E334A122E0CCEA86A2441E13  : public CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.XmlPrefixSyntax Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax::prefix
	XmlPrefixSyntax_t402813138B42F39CB849FF22E595FCF6AE540B34* ___prefix_4;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNodeSyntax
struct XmlNodeSyntax_t6E789EA60108BF6FDC760CC995369FD063C83DB4  : public CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC
{
};

// System.Xml.XmlNodeType
struct XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95 
{
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlPrefixSyntax
struct XmlPrefixSyntax_t402813138B42F39CB849FF22E595FCF6AE540B34  : public CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC
{
};

// System.Xml.Schema.XmlTypeCode
struct XmlTypeCode_tCA027FC382F4E2DBDF63CB305D942DDFC072E064 
{
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___2;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender/Cursor
struct Cursor_t32E704CC614CBC594E6490D310CC95F1C3FAD3CC 
{
	// Microsoft.CodeAnalysis.SyntaxNodeOrToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender/Cursor::CurrentNodeOrToken
	SyntaxNodeOrToken_tF5F56125C20FF6FA8BCBB39109E3E297E74A7F1A ___CurrentNodeOrToken_0;
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender/Cursor::_indexInParent
	int32_t ____indexInParent_1;
};
// Native definition for P/Invoke marshalling of Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender/Cursor
struct Cursor_t32E704CC614CBC594E6490D310CC95F1C3FAD3CC_marshaled_pinvoke
{
	SyntaxNodeOrToken_tF5F56125C20FF6FA8BCBB39109E3E297E74A7F1A ___CurrentNodeOrToken_0;
	int32_t ____indexInParent_1;
};
// Native definition for COM marshalling of Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender/Cursor
struct Cursor_t32E704CC614CBC594E6490D310CC95F1C3FAD3CC_marshaled_com
{
	SyntaxNodeOrToken_tF5F56125C20FF6FA8BCBB39109E3E297E74A7F1A ___CurrentNodeOrToken_0;
	int32_t ____indexInParent_1;
};

// Microsoft.CodeAnalysis.CSharp.BoundNode/BoundNodeAttributes
struct BoundNodeAttributes_t376DEF5DC4BFBE190976695E9ABE1E230852B9F9 
{
	// System.Int16 Microsoft.CodeAnalysis.CSharp.BoundNode/BoundNodeAttributes::value__
	int16_t ___value___2;
};

// Microsoft.CodeAnalysis.GreenNode/NodeFlags
struct NodeFlags_t392EE36A60090FA18BE66563DEAF2DA9DC7B83D9 
{
	// System.Byte Microsoft.CodeAnalysis.GreenNode/NodeFlags::value__
	uint8_t ___value___2;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/TerminatorState
struct TerminatorState_t91EBD7BB4A0E26A85E69EBEECF598D52D777AF19 
{
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/TerminatorState::value__
	int32_t ___value___2;
};

// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData
struct TupleExtraData_tBC6A5DF4097B0B6815A2DE8811E94EAE82088FC3  : public RuntimeObject
{
	// System.Collections.Immutable.ImmutableArray`1<System.String> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::<ElementNames>k__BackingField
	ImmutableArray_1_t2024A2F442847A9E3E12E0F00CE2FE372B2F301C ___U3CElementNamesU3Ek__BackingField_0;
	// System.Collections.Immutable.ImmutableArray`1<Microsoft.CodeAnalysis.Location> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::<ElementLocations>k__BackingField
	ImmutableArray_1_t7F3C6A7CACA1BC1220B5810A121AA9F7F1825B44 ___U3CElementLocationsU3Ek__BackingField_1;
	// System.Collections.Immutable.ImmutableArray`1<System.Boolean> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::<ErrorPositions>k__BackingField
	ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025 ___U3CErrorPositionsU3Ek__BackingField_2;
	// System.Collections.Immutable.ImmutableArray`1<Microsoft.CodeAnalysis.Location> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::<Locations>k__BackingField
	ImmutableArray_1_t7F3C6A7CACA1BC1220B5810A121AA9F7F1825B44 ___U3CLocationsU3Ek__BackingField_3;
	// System.Collections.Immutable.ImmutableArray`1<Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::_lazyElementTypes
	ImmutableArray_1_t9779403D34AD7D3C8C7943B8DA727C5B11B5885D ____lazyElementTypes_4;
	// System.Collections.Immutable.ImmutableArray`1<Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::_lazyDefaultElementFields
	ImmutableArray_1_t7C6C55D4C6C28084A38ED891459100FC241122EB ____lazyDefaultElementFields_5;
	// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol,System.Int32> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::_lazyFieldDefinitionsToIndexMap
	SmallDictionary_2_t4C5C7B6A7724A2E3132BF571F896ABDF9D60F234* ____lazyFieldDefinitionsToIndexMap_6;
	// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.Symbol> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::_lazyUnderlyingDefinitionToMemberMap
	SmallDictionary_2_t61F20CBCA1E44A9F1E4240C34CDCF014BE5AB464* ____lazyUnderlyingDefinitionToMemberMap_7;
	// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::<TupleUnderlyingType>k__BackingField
	NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* ___U3CTupleUnderlyingTypeU3Ek__BackingField_8;
};

// Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState
struct LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D 
{
	// System.Int32 Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState::Id
	int32_t ___Id_0;
	// Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState/Boxed Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState::_container
	Boxed_tAF4CD55E5EFF7951DA251278D531CD660CFA0E91* ____container_1;
	// Microsoft.CodeAnalysis.BitVector Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState::_state
	BitVector_tDACA4D1EAD4489A7B28FAC83AE8FAB0DF0C3192A ____state_2;
};
// Native definition for P/Invoke marshalling of Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState
struct LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D_marshaled_pinvoke
{
	int32_t ___Id_0;
	Boxed_tAF4CD55E5EFF7951DA251278D531CD660CFA0E91* ____container_1;
	BitVector_tDACA4D1EAD4489A7B28FAC83AE8FAB0DF0C3192A_marshaled_pinvoke ____state_2;
};
// Native definition for COM marshalling of Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState
struct LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D_marshaled_com
{
	int32_t ___Id_0;
	Boxed_tAF4CD55E5EFF7951DA251278D531CD660CFA0E91* ____container_1;
	BitVector_tDACA4D1EAD4489A7B28FAC83AE8FAB0DF0C3192A_marshaled_com ____state_2;
};

// Tuple`2<System.Int32Enum,System.Int32>
struct Tuple_2_t59E60D9F8F3473C96F5BE446F8E49FDF53C753C1  : public RuntimeObject
{
	// T1 Tuple`2::item1
	int32_t ___item1_0;
	// T2 Tuple`2::item2
	int32_t ___item2_1;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender
struct Blender_tC5DC3B0EEF53667425E33C0D81E1929A30AA5477 
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Lexer Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender::_lexer
	Lexer_t343AA226AE558D51577150AD779641CE8533ED9F* ____lexer_0;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender/Cursor Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender::_oldTreeCursor
	Cursor_t32E704CC614CBC594E6490D310CC95F1C3FAD3CC ____oldTreeCursor_1;
	// System.Collections.Immutable.ImmutableStack`1<Microsoft.CodeAnalysis.Text.TextChangeRange> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender::_changes
	ImmutableStack_1_t1BAA3080BBE3083579B2CD567B0D74DF987233C7* ____changes_2;
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender::_newPosition
	int32_t ____newPosition_3;
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender::_changeDelta
	int32_t ____changeDelta_4;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.DirectiveStack Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender::_newDirectives
	DirectiveStack_tDF71F033C6F61B3987C26B62036C4F7711C7C275 ____newDirectives_5;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.DirectiveStack Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender::_oldDirectives
	DirectiveStack_tDF71F033C6F61B3987C26B62036C4F7711C7C275 ____oldDirectives_6;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LexerMode Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender::_newLexerDrivenMode
	int32_t ____newLexerDrivenMode_7;
};
// Native definition for P/Invoke marshalling of Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender
struct Blender_tC5DC3B0EEF53667425E33C0D81E1929A30AA5477_marshaled_pinvoke
{
	Lexer_t343AA226AE558D51577150AD779641CE8533ED9F* ____lexer_0;
	Cursor_t32E704CC614CBC594E6490D310CC95F1C3FAD3CC_marshaled_pinvoke ____oldTreeCursor_1;
	ImmutableStack_1_t1BAA3080BBE3083579B2CD567B0D74DF987233C7* ____changes_2;
	int32_t ____newPosition_3;
	int32_t ____changeDelta_4;
	DirectiveStack_tDF71F033C6F61B3987C26B62036C4F7711C7C275_marshaled_pinvoke ____newDirectives_5;
	DirectiveStack_tDF71F033C6F61B3987C26B62036C4F7711C7C275_marshaled_pinvoke ____oldDirectives_6;
	int32_t ____newLexerDrivenMode_7;
};
// Native definition for COM marshalling of Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender
struct Blender_tC5DC3B0EEF53667425E33C0D81E1929A30AA5477_marshaled_com
{
	Lexer_t343AA226AE558D51577150AD779641CE8533ED9F* ____lexer_0;
	Cursor_t32E704CC614CBC594E6490D310CC95F1C3FAD3CC_marshaled_com ____oldTreeCursor_1;
	ImmutableStack_1_t1BAA3080BBE3083579B2CD567B0D74DF987233C7* ____changes_2;
	int32_t ____newPosition_3;
	int32_t ____changeDelta_4;
	DirectiveStack_tDF71F033C6F61B3987C26B62036C4F7711C7C275_marshaled_com ____newDirectives_5;
	DirectiveStack_tDF71F033C6F61B3987C26B62036C4F7711C7C275_marshaled_com ____oldDirectives_6;
	int32_t ____newLexerDrivenMode_7;
};

// Microsoft.CodeAnalysis.CSharp.BoundNode
struct BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED  : public RuntimeObject
{
	// Microsoft.CodeAnalysis.CSharp.BoundKind Microsoft.CodeAnalysis.CSharp.BoundNode::_kind
	uint8_t ____kind_0;
	// Microsoft.CodeAnalysis.CSharp.BoundNode/BoundNodeAttributes Microsoft.CodeAnalysis.CSharp.BoundNode::_attributes
	int16_t ____attributes_1;
	// Microsoft.CodeAnalysis.SyntaxNode Microsoft.CodeAnalysis.CSharp.BoundNode::Syntax
	SyntaxNode_t90CA509576451F85185DB0F03B2998C51EB73C67* ___Syntax_2;
};

// Microsoft.CodeAnalysis.CSharp.BoundTreeWalkerWithStackGuardWithoutRecursionOnTheLeftOfBinaryOperator
struct BoundTreeWalkerWithStackGuardWithoutRecursionOnTheLeftOfBinaryOperator_t06E4641F53930A4658E2FF702BAEBCFD6E769D0C  : public BoundTreeWalkerWithStackGuard_t510F96B7A8B1850F3844C667AE33452AE27B0156
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.CodeAnalysis.GreenNode
struct GreenNode_tB2D7367B6C729B96916E94765BCC040257641579  : public RuntimeObject
{
	// System.UInt16 Microsoft.CodeAnalysis.GreenNode::_kind
	uint16_t ____kind_1;
	// Microsoft.CodeAnalysis.GreenNode/NodeFlags Microsoft.CodeAnalysis.GreenNode::flags
	uint8_t ___flags_2;
	// System.Byte Microsoft.CodeAnalysis.GreenNode::_slotCount
	uint8_t ____slotCount_3;
	// System.Int32 Microsoft.CodeAnalysis.GreenNode::_fullWidth
	int32_t ____fullWidth_4;
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

// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol
struct NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304  : public TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC
{
	// System.Boolean Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol::_hasNoBaseCycles
	bool ____hasNoBaseCycles_7;
	// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol::_lazyTupleData
	TupleExtraData_tBC6A5DF4097B0B6815A2DE8811E94EAE82088FC3* ____lazyTupleData_15;
};

// Microsoft.CodeAnalysis.CSharp.Symbols.TupleElementFieldSymbol
struct TupleElementFieldSymbol_tAE7F7540F5DC2ED5F3A39EFE5622CAA07BC14A78  : public WrappedFieldSymbol_t3D19B7BAA9A16521812F943CBFAE2128A2905A99
{
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Symbols.TupleElementFieldSymbol::_tupleElementIndex
	int32_t ____tupleElementIndex_3;
	// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol Microsoft.CodeAnalysis.CSharp.Symbols.TupleElementFieldSymbol::_containingTuple
	NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* ____containingTuple_4;
	// System.Collections.Immutable.ImmutableArray`1<Microsoft.CodeAnalysis.Location> Microsoft.CodeAnalysis.CSharp.Symbols.TupleElementFieldSymbol::_locations
	ImmutableArray_1_t7F3C6A7CACA1BC1220B5810A121AA9F7F1825B44 ____locations_5;
	// Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol Microsoft.CodeAnalysis.CSharp.Symbols.TupleElementFieldSymbol::_correspondingDefaultField
	FieldSymbol_tCCD061C1EA8C6911B32F56786D491A69DA8F40ED* ____correspondingDefaultField_6;
	// System.Boolean Microsoft.CodeAnalysis.CSharp.Symbols.TupleElementFieldSymbol::_isImplicitlyDeclared
	bool ____isImplicitlyDeclared_7;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::_declaration
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ____declaration_4;
};

// System.Xml.Linq.XElement
struct XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name_4;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::lastAttr
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___lastAttr_5;
};

// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D  : public XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E
{
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t* ___clrTypeDefault_2;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameAttributeSyntax
struct XmlNameAttributeSyntax_tD261DB395F4CBD6F9329EC7621A18C6CEFF73FDF  : public XmlAttributeSyntax_t5BF2BFE0F3D2EACF4919A7F2386EE5B69D772435
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameAttributeSyntax::name
	XmlNameSyntax_tA6F440D00BCA73F4E334A122E0CCEA86A2441E13* ___name_4;
	// Microsoft.CodeAnalysis.CSharp.Syntax.IdentifierNameSyntax Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameAttributeSyntax::identifier
	IdentifierNameSyntax_t5C50B000E5C6098CA25E6EBA8D7C00BFCB2ACDCD* ___identifier_5;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlProcessingInstructionSyntax
struct XmlProcessingInstructionSyntax_t6878CC638FD78DBB51C953C60ED067D982A728C2  : public XmlNodeSyntax_t6E789EA60108BF6FDC760CC995369FD063C83DB4
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax Microsoft.CodeAnalysis.CSharp.Syntax.XmlProcessingInstructionSyntax::name
	XmlNameSyntax_tA6F440D00BCA73F4E334A122E0CCEA86A2441E13* ___name_4;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextAttributeSyntax
struct XmlTextAttributeSyntax_t827CE27B9E760A89AC6D921FCC0D9AA08B252B6A  : public XmlAttributeSyntax_t5BF2BFE0F3D2EACF4919A7F2386EE5B69D772435
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextAttributeSyntax::name
	XmlNameSyntax_tA6F440D00BCA73F4E334A122E0CCEA86A2441E13* ___name_4;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextSyntax
struct XmlTextSyntax_tEE6A5FCB5C1B3D269EC0C99E7636F82CD009AE1A  : public XmlNodeSyntax_t6E789EA60108BF6FDC760CC995369FD063C83DB4
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.YieldStatementSyntax
struct YieldStatementSyntax_t14BEAD3071458D4756B4F8E15C768A4FD5D382F5  : public StatementSyntax_t99A54A235103A009D3DF831C0D3E97F2406C2760
{
	// Microsoft.CodeAnalysis.SyntaxNode Microsoft.CodeAnalysis.CSharp.Syntax.YieldStatementSyntax::attributeLists
	SyntaxNode_t90CA509576451F85185DB0F03B2998C51EB73C67* ___attributeLists_4;
	// Microsoft.CodeAnalysis.CSharp.Syntax.ExpressionSyntax Microsoft.CodeAnalysis.CSharp.Syntax.YieldStatementSyntax::expression
	ExpressionSyntax_t8D179B537BC7F2A20B35B6102FEB5CAFA55E55BF* ___expression_5;
};

// Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState/Boxed
struct Boxed_tAF4CD55E5EFF7951DA251278D531CD660CFA0E91  : public RuntimeObject
{
	// Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState/Boxed::Value
	LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D ___Value_0;
};

// System.Action`2<System.Int32,System.Object>
struct Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166  : public MulticastDelegate_t
{
};

// Parsable/TryParser`1<Innovation.HexColor>
struct TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB  : public MulticastDelegate_t
{
};

// Parsable/TryParser`1<System.Object>
struct TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode
struct BlendedNode_t3A56041B2ACBEB849210607881466515E694EFE3 
{
	// Microsoft.CodeAnalysis.CSharp.CSharpSyntaxNode Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode::Node
	CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC* ___Node_0;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode::Token
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___Token_1;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode::Blender
	Blender_tC5DC3B0EEF53667425E33C0D81E1929A30AA5477 ___Blender_2;
};
// Native definition for P/Invoke marshalling of Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode
struct BlendedNode_t3A56041B2ACBEB849210607881466515E694EFE3_marshaled_pinvoke
{
	CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC* ___Node_0;
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___Token_1;
	Blender_tC5DC3B0EEF53667425E33C0D81E1929A30AA5477_marshaled_pinvoke ___Blender_2;
};
// Native definition for COM marshalling of Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode
struct BlendedNode_t3A56041B2ACBEB849210607881466515E694EFE3_marshaled_com
{
	CSharpSyntaxNode_tF0AAA000CA479ADFD8FC2339D3A5D65391E74AEC* ___Node_0;
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___Token_1;
	Blender_tC5DC3B0EEF53667425E33C0D81E1929A30AA5477_marshaled_com ___Blender_2;
};

// Microsoft.CodeAnalysis.CSharp.BoundExpression
struct BoundExpression_t85735CC1B63AF7F5EC37195D98DDA1FE40663EB2  : public BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED
{
	// Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol Microsoft.CodeAnalysis.CSharp.BoundExpression::<Type>k__BackingField
	TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC* ___U3CTypeU3Ek__BackingField_3;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxNode
struct CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8  : public GreenNode_tB2D7367B6C729B96916E94765BCC040257641579
{
};

// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter_32;
};

// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder
struct ScopeTreeBuilder_tF044EAD7FEAFBBDCF4064D6859D8271733838164  : public BoundTreeWalkerWithStackGuardWithoutRecursionOnTheLeftOfBinaryOperator_t06E4641F53930A4658E2FF702BAEBCFD6E769D0C
{
	// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::_currentScope
	Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0* ____currentScope_1;
	// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/NestedFunction Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::_currentFunction
	NestedFunction_t9C59AFB75B08415139A9A94D7697DA2872D87BD9* ____currentFunction_2;
	// System.Boolean Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::_inExpressionTree
	bool ____inExpressionTree_3;
	// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope> Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::_localToScope
	SmallDictionary_2_tE87779D5BCF23473F3D2AE246FDCE304BDDD8A9E* ____localToScope_4;
	// Microsoft.CodeAnalysis.CSharp.Symbols.MethodSymbol Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::_topLevelMethod
	MethodSymbol_tFDDAF188A7EDCBD96D49DDF3B98DF81EA9011373* ____topLevelMethod_5;
	// System.Collections.Generic.HashSet`1<Microsoft.CodeAnalysis.CSharp.Symbols.MethodSymbol> Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::_methodsConvertedToDelegates
	HashSet_1_t9FB2776BC56CB3A68CBE841B4025A021B1BDE5A7* ____methodsConvertedToDelegates_6;
	// Microsoft.CodeAnalysis.DiagnosticBag Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::_diagnostics
	DiagnosticBag_t1E0F19A39E3F3E6FDE71511598F3EE9140F996D3* ____diagnostics_7;
	// Microsoft.CodeAnalysis.PooledObjects.PooledDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbols.LabelSymbol,Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope>> Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::_scopesAfterLabel
	PooledDictionary_2_tADFDC0534EA731C3090237A62DF43F7A4F36527E* ____scopesAfterLabel_8;
	// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.Symbols.LabelSymbol>> Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::_labelsInScope
	ArrayBuilder_1_tAC5C8C6F09C71DDACCE0079306E90555E60A4DDC* ____labelsInScope_9;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.StatementSyntax
struct StatementSyntax_tCCD4A4AF311FD9AAF118072126E45C71FD9D6B32  : public CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser
struct SyntaxParser_t31755989D12224FCF0C87C082609F548153050F3  : public RuntimeObject
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Lexer Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::lexer
	Lexer_t343AA226AE558D51577150AD779641CE8533ED9F* ___lexer_0;
	// System.Boolean Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_isIncremental
	bool ____isIncremental_1;
	// System.Boolean Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_allowModeReset
	bool ____allowModeReset_2;
	// System.Threading.CancellationToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LexerMode Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_mode
	int32_t ____mode_4;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.Blender Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_firstBlender
	Blender_tC5DC3B0EEF53667425E33C0D81E1929A30AA5477 ____firstBlender_5;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_currentNode
	BlendedNode_t3A56041B2ACBEB849210607881466515E694EFE3 ____currentNode_6;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_currentToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ____currentToken_7;
	// Microsoft.CodeAnalysis.ArrayElement`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken>[] Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_lexedTokens
	ArrayElement_1U5BU5D_tF3825C702F5FD47209814235E6FEDBE07D023128* ____lexedTokens_8;
	// Microsoft.CodeAnalysis.GreenNode Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_prevTokenTrailingTrivia
	GreenNode_tB2D7367B6C729B96916E94765BCC040257641579* ____prevTokenTrailingTrivia_9;
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_firstToken
	int32_t ____firstToken_10;
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_tokenOffset
	int32_t ____tokenOffset_11;
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_tokenCount
	int32_t ____tokenCount_12;
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_resetCount
	int32_t ____resetCount_13;
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_resetStart
	int32_t ____resetStart_14;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode[] Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::_blendedTokens
	BlendedNodeU5BU5D_tDDF416DED56FED0755C9849BCA40404676D6D6F0* ____blendedTokens_16;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken
struct SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD  : public CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlAttributeSyntax
struct XmlAttributeSyntax_tAB14F513C232125B1F7F6C332AED7418FA3E807B  : public CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax
struct XmlNameSyntax_tB8722A6A5D3EEE289532ABAD7B4AECD5412225B2  : public CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlPrefixSyntax Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax::prefix
	XmlPrefixSyntax_t1ADB536CCAA1326F3A788EC90F1AE81C0B6E4D6F* ___prefix_13;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax::localName
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___localName_14;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNodeSyntax
struct XmlNodeSyntax_t54D2AD015F21A000CBA2D1AD43882E0CDAF42BD7  : public CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlPrefixSyntax
struct XmlPrefixSyntax_t1ADB536CCAA1326F3A788EC90F1AE81C0B6E4D6F  : public CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlPrefixSyntax::prefix
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___prefix_13;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlPrefixSyntax::colonToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___colonToken_14;
};

// Microsoft.CodeAnalysis.CSharp.SpillSequenceSpiller/BoundSpillSequenceBuilder
struct BoundSpillSequenceBuilder_tB2E4018EF21520A34BA7C5D3EF3ADA0194C1172E  : public BoundExpression_t85735CC1B63AF7F5EC37195D98DDA1FE40663EB2
{
	// Microsoft.CodeAnalysis.CSharp.BoundExpression Microsoft.CodeAnalysis.CSharp.SpillSequenceSpiller/BoundSpillSequenceBuilder::Value
	BoundExpression_t85735CC1B63AF7F5EC37195D98DDA1FE40663EB2* ___Value_4;
	// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.Symbols.LocalSymbol> Microsoft.CodeAnalysis.CSharp.SpillSequenceSpiller/BoundSpillSequenceBuilder::_locals
	ArrayBuilder_1_tF88BC58042F67545693963B04736B7234E40679C* ____locals_5;
	// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.CSharp.BoundStatement> Microsoft.CodeAnalysis.CSharp.SpillSequenceSpiller/BoundSpillSequenceBuilder::_statements
	ArrayBuilder_1_t72C18DAFF01911B63A265D91E2EA4B5B2FEABFC8* ____statements_6;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser
struct LanguageParser_t903901AC19BED8763E7B3160790F4B0EBEE9508E  : public SyntaxParser_t31755989D12224FCF0C87C082609F548153050F3
{
	// Microsoft.CodeAnalysis.Syntax.InternalSyntax.SyntaxListPool Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser::_pool
	SyntaxListPool_t77D1CDA9AD69C7744D46844C5DA188388211366A* ____pool_17;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxFactoryContext Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser::_syntaxFactoryContext
	SyntaxFactoryContext_tD192715CD87545281C59813B04506EAE61DCBB22* ____syntaxFactoryContext_18;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.ContextAwareSyntax Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser::_syntaxFactory
	ContextAwareSyntax_tAEE590283F1D29785449D10DD06381EA94BB65E9* ____syntaxFactory_19;
	// System.Int32 Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser::_recursionDepth
	int32_t ____recursionDepth_20;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/TerminatorState Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser::_termState
	int32_t ____termState_21;
	// System.Boolean Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser::_isInTry
	bool ____isInTry_22;
	// System.Boolean Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser::_checkedTopLevelStatementsFeatureAvailability
	bool ____checkedTopLevelStatementsFeatureAvailability_23;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax
struct XmlNameAttributeSyntax_t73040D492E2BC83A39F8F70522ACAEEF528FC701  : public XmlAttributeSyntax_tAB14F513C232125B1F7F6C332AED7418FA3E807B
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax::name
	XmlNameSyntax_tB8722A6A5D3EEE289532ABAD7B4AECD5412225B2* ___name_13;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax::equalsToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___equalsToken_14;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax::startQuoteToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___startQuoteToken_15;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.IdentifierNameSyntax Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax::identifier
	IdentifierNameSyntax_t84F9CBEDAEC8D265DB301CDF553B714DDD47E0BF* ___identifier_16;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax::endQuoteToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___endQuoteToken_17;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax
struct XmlProcessingInstructionSyntax_tC44CD7F7A0FCC08F8636258921A44EDD120CDDB9  : public XmlNodeSyntax_t54D2AD015F21A000CBA2D1AD43882E0CDAF42BD7
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax::startProcessingInstructionToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___startProcessingInstructionToken_13;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax::name
	XmlNameSyntax_tB8722A6A5D3EEE289532ABAD7B4AECD5412225B2* ___name_14;
	// Microsoft.CodeAnalysis.GreenNode Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax::textTokens
	GreenNode_tB2D7367B6C729B96916E94765BCC040257641579* ___textTokens_15;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax::endProcessingInstructionToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___endProcessingInstructionToken_16;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax
struct XmlTextAttributeSyntax_t751525205B497F48702536E8638C778D0EF1D70D  : public XmlAttributeSyntax_tAB14F513C232125B1F7F6C332AED7418FA3E807B
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax::name
	XmlNameSyntax_tB8722A6A5D3EEE289532ABAD7B4AECD5412225B2* ___name_13;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax::equalsToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___equalsToken_14;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax::startQuoteToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___startQuoteToken_15;
	// Microsoft.CodeAnalysis.GreenNode Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax::textTokens
	GreenNode_tB2D7367B6C729B96916E94765BCC040257641579* ___textTokens_16;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax::endQuoteToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___endQuoteToken_17;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextSyntax
struct XmlTextSyntax_tD99895C4A83D5823D80F2DA6830ADB9215B86CDC  : public XmlNodeSyntax_t54D2AD015F21A000CBA2D1AD43882E0CDAF42BD7
{
	// Microsoft.CodeAnalysis.GreenNode Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextSyntax::textTokens
	GreenNode_tB2D7367B6C729B96916E94765BCC040257641579* ___textTokens_13;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax
struct YieldStatementSyntax_tF7FB46CD1BF4C4F9CCE04D28FF4FAC331510A0A5  : public StatementSyntax_tCCD4A4AF311FD9AAF118072126E45C71FD9D6B32
{
	// Microsoft.CodeAnalysis.GreenNode Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax::attributeLists
	GreenNode_tB2D7367B6C729B96916E94765BCC040257641579* ___attributeLists_13;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax::yieldKeyword
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___yieldKeyword_14;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax::returnOrBreakKeyword
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___returnOrBreakKeyword_15;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.ExpressionSyntax Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax::expression
	ExpressionSyntax_tCCDF6E498A80E4066E73A960B706BB6452CD2B4A* ___expression_16;
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax::semicolonToken
	SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* ___semicolonToken_17;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.Cci.LocalScope>
struct ArrayBuilder_1_tBB311F44C1B021ED8A06C3BA5BBEBE9E7D97EA0F_StaticFields
{
	// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<T>> Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1::s_poolInstance
	ObjectPool_1_t6E70DE297AD501BD386D1B46E2B4908187430109* ___s_poolInstance_2;
};

// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.Cci.LocalScope>

// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<System.Object>
struct ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156_StaticFields
{
	// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<T>> Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1::s_poolInstance
	ObjectPool_1_t79E9E8465AD9BA02691E40DC4FE38A2EAF31E900* ___s_poolInstance_2;
};

// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<System.Object>

// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.Debugging.StateMachineHoistedLocalScope>
struct ArrayBuilder_1_t0671810E1DA02DB0F94264A4F5AB942F100A9F17_StaticFields
{
	// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<T>> Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1::s_poolInstance
	ObjectPool_1_t62A7E0D935795F3771662035641AF2162F3C0FC8* ___s_poolInstance_2;
};

// Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.Debugging.StateMachineHoistedLocalScope>

// System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>

// System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>

// Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>

// Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.List`1<Tuple`2<System.Int32,System.Int32>>
struct List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Tuple_2U5BU5D_tF88ABA1BCD3F889D14A178EC9399DA05BB3E3D31* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Tuple`2<System.Int32,System.Int32>>

// System.Collections.Generic.List`1<Tuple`2<System.Int32Enum,System.Int32>>
struct List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Tuple_2U5BU5D_t877ABC6E9B6C06DD710A333D72B8F695A3738CA7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Tuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.List`1<Tuple`2<System.Object,System.Object>>
struct List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Tuple_2U5BU5D_tA1DE2C94E1E27CDA12EE28BE507E91630C6668AF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Tuple`2<System.Object,System.Object>>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.SByte>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>

// System.Collections.Generic.List`1<System.TimeSpan>
struct List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.TimeSpan>

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt16>

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt32>

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt64>

// System.Collections.Generic.List`1<INAddonInterface/AddonPackageItem/SettingsItem>
struct List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SettingsItemU5BU5D_tD50FD4CE086D9DA1D72C5B08112EC45408923ED4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<INAddonInterface/AddonPackageItem/SettingsItem>

// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.Symbol>
struct SmallDictionary_2_t61F20CBCA1E44A9F1E4240C34CDCF014BE5AB464_StaticFields
{
	// Microsoft.CodeAnalysis.SmallDictionary`2<K,V> Microsoft.CodeAnalysis.SmallDictionary`2::Empty
	SmallDictionary_2_t61F20CBCA1E44A9F1E4240C34CDCF014BE5AB464* ___Empty_2;
};

// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.Symbol>

// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope>
struct SmallDictionary_2_tE87779D5BCF23473F3D2AE246FDCE304BDDD8A9E_StaticFields
{
	// Microsoft.CodeAnalysis.SmallDictionary`2<K,V> Microsoft.CodeAnalysis.SmallDictionary`2::Empty
	SmallDictionary_2_tE87779D5BCF23473F3D2AE246FDCE304BDDD8A9E* ___Empty_2;
};

// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// Tuple`2<System.Int32,System.Int32>

// Tuple`2<System.Int32,System.Int32>

// Tuple`2<System.Object,System.Object>

// Tuple`2<System.Object,System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

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

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.Expression

// System.Linq.Expressions.ExpressionVisitor

// System.Linq.Expressions.ExpressionVisitor

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Hashtable

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Microsoft.CodeAnalysis.CSharp.Symbol
struct Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E_StaticFields
{
	// Microsoft.CodeAnalysis.SymbolDisplayFormat Microsoft.CodeAnalysis.CSharp.Symbol::s_debuggerDisplayFormat
	SymbolDisplayFormat_t731E5D3B12F0C00C166475DC772AB9A7BCFE786E* ___s_debuggerDisplayFormat_1;
};

// Microsoft.CodeAnalysis.CSharp.Symbol

// System.Xml.Linq.XName

// System.Xml.Linq.XName

// System.Xml.Linq.XObject

// System.Xml.Linq.XObject

// Roslyn.Utilities.XmlUtilities

// Roslyn.Utilities.XmlUtilities

// System.Xml.Schema.XmlValueConverter

// System.Xml.Schema.XmlValueConverter

// UnityEngine._AndroidJNIHelper

// UnityEngine._AndroidJNIHelper

// Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeInfo

// Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeInfo

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c
struct U3CU3Ec_tEEBECE1186C808AC7E2D6AFE4EDDEF2D70184C07_StaticFields
{
	// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9
	U3CU3Ec_tEEBECE1186C808AC7E2D6AFE4EDDEF2D70184C07* ___U3CU3E9_0;
	// System.Func`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CompilationUnitSyntax> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__14_0
	Func_1_t7E5E39A9918BD468ECD14D715B017E6F4DD23241* ___U3CU3E9__14_0_1;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__43_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__43_0_2;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__43_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__43_1_3;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__47_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__47_0_4;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__47_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__47_1_5;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__66_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__66_0_6;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__66_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__66_1_7;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__72_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__72_0_8;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__72_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__72_1_9;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__110_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__110_0_10;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__110_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__110_1_11;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__129_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__129_0_12;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__144_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__144_0_13;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__144_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__144_1_14;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__159_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__159_0_15;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__159_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__159_1_16;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__174_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__174_0_17;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__174_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__174_1_18;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__182_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__182_0_19;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__182_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__182_1_20;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__203_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__203_1_21;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__203_2
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__203_2_22;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__215_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__215_0_23;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__215_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__215_1_24;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__247_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__247_0_25;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__247_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__247_1_26;
	// System.Func`2<Microsoft.CodeAnalysis.DiagnosticInfo,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__251_1
	Func_2_t3EDA4ED44BA25AD1FB94C148C94D23F6CA75E16A* ___U3CU3E9__251_1_27;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__267_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__267_0_28;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__267_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__267_1_29;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__336_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__336_0_30;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__379_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__379_0_31;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__379_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__379_1_32;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__391_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__391_0_33;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__407_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__407_0_34;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__407_1
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__407_1_35;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser,System.Boolean> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<>9__458_0
	Func_2_t2C29F1D1BF7FFC92E1122041B1B0DF0653952EB2* ___U3CU3E9__458_0_36;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c

// LootCrateRewards/Slot

// LootCrateRewards/Slot

// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope

// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope

// INAddonInterface/AddonPackageItem/SettingsGroup

// INAddonInterface/AddonPackageItem/SettingsGroup

// INAddonInterface/AddonPackageItem/SettingsItem

// INAddonInterface/AddonPackageItem/SettingsItem

// System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>

// System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>

// System.Collections.Immutable.ImmutableArray`1<System.Boolean>
struct ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025_StaticFields
{
	// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1::Empty
	ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025 ___Empty_0;
};

// System.Collections.Immutable.ImmutableArray`1<System.Boolean>

// System.Collections.Immutable.ImmutableArray`1<System.Object>
struct ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2_StaticFields
{
	// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1::Empty
	ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 ___Empty_0;
};

// System.Collections.Immutable.ImmutableArray`1<System.Object>

// INAddonInterface/AddonPackageItem/SettingsItem`1<Innovation.HexColor>

// INAddonInterface/AddonPackageItem/SettingsItem`1<Innovation.HexColor>

// INAddonInterface/AddonPackageItem/SettingsItem`1<System.Object>

// INAddonInterface/AddonPackageItem/SettingsItem`1<System.Object>

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

// System.Double

// System.Double

// Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol

// Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol

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

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.ParameterExpression

// System.Linq.Expressions.ParameterExpression

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// System.Xml.Linq.XAttribute

// System.Xml.Linq.XAttribute

// System.Xml.Linq.XNode

// System.Xml.Linq.XNode

// Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds

// Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// System.Linq.Expressions.Expression`1<System.Object>

// System.Linq.Expressions.Expression`1<System.Object>

// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<Innovation.HexColor>

// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<Innovation.HexColor>

// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<System.Object>

// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<System.Object>

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Int32Enum

// System.Int32Enum

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Microsoft.CodeAnalysis.CSharp.SyntaxKind

// Microsoft.CodeAnalysis.CSharp.SyntaxKind

// Microsoft.CodeAnalysis.TypeCompareKind

// Microsoft.CodeAnalysis.TypeCompareKind

// Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol
struct TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC_StaticFields
{
	// Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol/InterfaceInfo Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol::s_noInterfaces
	InterfaceInfo_t6497B28376DAE8C0C1234BD5B1FB73DA65F930B9* ___s_noInterfaces_3;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations,Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations> Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol::s_setUnknownNullability
	Func_2_t7B93DD1CC82C8CE5A6C4015324B345A6834BBF9C* ___s_setUnknownNullability_6;
};

// Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol

// Microsoft.CodeAnalysis.CSharp.Symbols.WrappedFieldSymbol

// Microsoft.CodeAnalysis.CSharp.Symbols.WrappedFieldSymbol

// System.Xml.Linq.XContainer

// System.Xml.Linq.XContainer

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax

// System.Xml.XmlNodeType

// System.Xml.XmlNodeType

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlPrefixSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlPrefixSyntax

// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData

// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData

// Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState

// Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState

// Tuple`2<System.Int32Enum,System.Int32>

// Tuple`2<System.Int32Enum,System.Int32>

// Microsoft.CodeAnalysis.CSharp.BoundNode

// Microsoft.CodeAnalysis.CSharp.BoundNode

// UnityEngine.GameObject

// UnityEngine.GameObject

// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol
struct NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304_StaticFields
{
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Symbol,System.Boolean> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol::IsInstanceFieldOrEvent
	Func_2_tE8D13050BF8FF0711F62BBAB0078F4AF264760E2* ___IsInstanceFieldOrEvent_8;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations,System.Boolean> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol::TypeWithAnnotationsIsNullFunction
	Func_2_t710DD2A9A7666A24C110DFCD1610C277D1BFF934* ___TypeWithAnnotationsIsNullFunction_9;
	// System.Func`2<Microsoft.CodeAnalysis.CSharp.Symbols.TypeWithAnnotations,System.Boolean> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol::TypeWithAnnotationsIsErrorType
	Func_2_t710DD2A9A7666A24C110DFCD1610C277D1BFF934* ___TypeWithAnnotationsIsErrorType_10;
	// Microsoft.CodeAnalysis.WellKnownType[] Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol::tupleTypes
	WellKnownTypeU5BU5D_t7E8CA70954640E95BCF3AE33E678438DE44BB418* ___tupleTypes_16;
	// Microsoft.CodeAnalysis.WellKnownMember[] Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol::tupleCtors
	WellKnownMemberU5BU5D_t8CE8D9BB3CFCF50C7B3BCE33C60E429543B67CEB* ___tupleCtors_17;
	// Microsoft.CodeAnalysis.WellKnownMember[][] Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol::tupleMembers
	WellKnownMemberU5BU5DU5BU5D_tA508D0C57E9F67420C52F519FC805FAC8FE0EC14* ___tupleMembers_18;
};

// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol

// Microsoft.CodeAnalysis.CSharp.Symbols.TupleElementFieldSymbol

// Microsoft.CodeAnalysis.CSharp.Symbols.TupleElementFieldSymbol

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

// System.Xml.Linq.XDocument

// System.Xml.Linq.XDocument

// System.Xml.Linq.XElement

// System.Xml.Linq.XElement

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameAttributeSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameAttributeSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlProcessingInstructionSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlProcessingInstructionSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextAttributeSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextAttributeSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.YieldStatementSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.YieldStatementSyntax

// Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState/Boxed

// Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState/Boxed

// System.Action`2<System.Int32,System.Object>

// System.Action`2<System.Int32,System.Object>

// Parsable/TryParser`1<Innovation.HexColor>

// Parsable/TryParser`1<Innovation.HexColor>

// Parsable/TryParser`1<System.Object>

// Parsable/TryParser`1<System.Object>

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxNode
struct CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<Microsoft.CodeAnalysis.SyntaxNode,System.Collections.Generic.Dictionary`2<Microsoft.CodeAnalysis.SyntaxTrivia,System.WeakReference`1<Microsoft.CodeAnalysis.SyntaxNode>>> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxNode::s_structuresTable
	ConditionalWeakTable_2_tFF0127EAA1159C54E8801EEF103451E79ABF5F5A* ___s_structuresTable_12;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxNode

// System.Xml.Schema.XmlListConverter

// System.Xml.Schema.XmlListConverter

// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder

// Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser
struct SyntaxParser_t31755989D12224FCF0C87C082609F548153050F3_StaticFields
{
	// Microsoft.CodeAnalysis.PooledObjects.ObjectPool`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.BlendedNode[]> Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::s_blendedNodesPool
	ObjectPool_1_t0143978BE12F5525F69F9E068692E9B77B22A9D8* ___s_blendedNodesPool_15;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken
struct SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD_StaticFields
{
	// Microsoft.CodeAnalysis.ArrayElement`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken>[] Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken::s_tokensWithNoTrivia
	ArrayElement_1U5BU5D_tF3825C702F5FD47209814235E6FEDBE07D023128* ___s_tokensWithNoTrivia_13;
	// Microsoft.CodeAnalysis.ArrayElement`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken>[] Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken::s_tokensWithElasticTrivia
	ArrayElement_1U5BU5D_tF3825C702F5FD47209814235E6FEDBE07D023128* ___s_tokensWithElasticTrivia_14;
	// Microsoft.CodeAnalysis.ArrayElement`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken>[] Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken::s_tokensWithSingleTrailingSpace
	ArrayElement_1U5BU5D_tF3825C702F5FD47209814235E6FEDBE07D023128* ___s_tokensWithSingleTrailingSpace_15;
	// Microsoft.CodeAnalysis.ArrayElement`1<Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken>[] Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken::s_tokensWithSingleTrailingCRLF
	ArrayElement_1U5BU5D_tF3825C702F5FD47209814235E6FEDBE07D023128* ___s_tokensWithSingleTrailingCRLF_16;
};

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlPrefixSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlPrefixSyntax

// Microsoft.CodeAnalysis.CSharp.SpillSequenceSpiller/BoundSpillSequenceBuilder

// Microsoft.CodeAnalysis.CSharp.SpillSequenceSpiller/BoundSpillSequenceBuilder

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax

// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A m_Items[1];

	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
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
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
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
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
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
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
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
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Boolean>::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableArray_1_get_IsDefault_m2A66F229297AA37E6208A7F828EC63EE61D6189E_gshared (ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableArray_1_get_IsDefault_m27C12A911E603D55B887C0FEEA307BA649B96391_gshared (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.CodeAnalysis.SmallDictionary`2<System.Object,System.Object>::TryGetValue(K,V&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SmallDictionary_2_TryGetValue_m73CD1347EC832F5C28AF1DCEDDC36E2E992C5552_gshared (SmallDictionary_2_t224704581096727C17DA52F264EF166BBBBBA86C* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState::ForEach<System.Object>(System.Action`2<System.Int32,TArg>,TArg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalState_ForEach_TisRuntimeObject_m7CAD638FCF9D1EE2693A209353564FF39C9235ED_gshared (LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D* __this, Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* ___0_action, RuntimeObject* ___1_arg, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Collections.Immutable.ImmutableArray`1/Enumerator<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::GetEnumerator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F ImmutableArray_1_GetEnumerator_mF1D50F57167F1E371A46A1036C5C4C792E1D96D5_gshared_inline (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2* __this, const RuntimeMethod* method) ;
// T System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m72FE648FF889091793EEC5D4BD0A1C30011D3DAD_gshared (Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.CodeAnalysis.SmallDictionary`2<System.Object,System.Object>::Add(K,V)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SmallDictionary_2_Add_mAA6F2949F60ACEB66DFBC3F5E7235E2AA1D231B7_gshared (SmallDictionary_2_t224704581096727C17DA52F264EF166BBBBBA86C* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDCE5861379C3C15F9459D42ACCC5FD67BA0BEAB4_gshared (Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableArray_1_get_IsEmpty_m89FFF230A0A1C2236C65AB8BD6E7479F948E570D_gshared (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::ThrowNullRefIfNotInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableArray_1_ThrowNullRefIfNotInitialized_m5C925DC0B34DC79B01AB8F4828D96E395FD94E54_gshared (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA3904190A1F7BE933692A6C39B80C35BE7DB8827_gshared (Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDocument::.ctor(System.Xml.Linq.XDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument__ctor_m495825983EF7F4A3E92F9B6334E7C488474C36EF (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* ___0_other, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XName::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736 (String_t* ___0_expandedName, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement__ctor_mFDCA9C62F1562D0E005F47D0298A49C57DBC126C (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___0_name, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XContainer::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_Add_m26111A020919619F03525ED30091D4501090075B (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, RuntimeObject* ___0_content, const RuntimeMethod* method) ;
// System.Xml.Linq.XNode System.Xml.Linq.XContainer::get_LastNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* XContainer_get_LastNode_mA0896FBB61341D138E2F48F032D6C8169DEEED5E (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XContainer::RemoveNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_RemoveNodes_m4AEA5FE86A02C530F24A6662ED5559E65C77CAE5 (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, const RuntimeMethod* method) ;
// System.Void Roslyn.Utilities.XmlUtilities::CopyAnnotations(System.Xml.Linq.XObject,System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlUtilities_CopyAnnotations_m7362968E746CE1A8A9FC5E60CA88B13EBB193C9A (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___0_source, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___1_target, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement::Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeBounds__ctor_m6D8869AE248561FFFD879894165008F3757DDEBA (ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED* __this, int32_t ___0_begin, int32_t ___1_end, const RuntimeMethod* method) ;
// Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxToken Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.SyntaxParser::get_CurrentToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* SyntaxParser_get_CurrentToken_m1BC3B17A7F41F7EAC11B47D0447EE6F2D3C846DC (SyntaxParser_t31755989D12224FCF0C87C082609F548153050F3* __this, const RuntimeMethod* method) ;
// Microsoft.CodeAnalysis.CSharp.SyntaxKind Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxNode::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CSharpSyntaxNode_get_Kind_mCB71438D3861290273BC1781E3DEF697E42A94CC (CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser::IsTerminator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LanguageParser_IsTerminator_m0B9930DD51BE5CA57269581729C88F9669ACB586 (LanguageParser_t903901AC19BED8763E7B3160790F4B0EBEE9508E* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mD1B67560310D4E9CC1EA31177CA1CB2CFDFE5D57 (String_t* ___0_s, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Boolean>::get_IsDefault()
inline bool ImmutableArray_1_get_IsDefault_m2A66F229297AA37E6208A7F828EC63EE61D6189E (ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025*, const RuntimeMethod*))ImmutableArray_1_get_IsDefault_m2A66F229297AA37E6208A7F828EC63EE61D6189E_gshared)(__this, method);
}
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::get_IsDefault()
inline bool ImmutableArray_1_get_IsDefault_m27C12A911E603D55B887C0FEEA307BA649B96391 (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2*, const RuntimeMethod*))ImmutableArray_1_get_IsDefault_m27C12A911E603D55B887C0FEEA307BA649B96391_gshared)(__this, method);
}
// Microsoft.CodeAnalysis.CSharp.Symbol Microsoft.CodeAnalysis.CSharp.Symbol::get_OriginalDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* Symbol_get_OriginalDefinition_m255A2A995B396C130D7AC757E075F210DA97CC02 (Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* __this, const RuntimeMethod* method) ;
// Microsoft.CodeAnalysis.CSharp.Symbols.FieldSymbol Microsoft.CodeAnalysis.CSharp.Symbols.WrappedFieldSymbol::get_UnderlyingField()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldSymbol_tCCD061C1EA8C6911B32F56786D491A69DA8F40ED* WrappedFieldSymbol_get_UnderlyingField_mDDF74B5CF1B10A26CE142DFAB6836F2F3074235B_inline (WrappedFieldSymbol_t3D19B7BAA9A16521812F943CBFAE2128A2905A99* __this, const RuntimeMethod* method) ;
// Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::get_TupleUnderlyingType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* TupleExtraData_get_TupleUnderlyingType_mDF597F9D7F9520AD5DF934343002144770335B77_inline (TupleExtraData_tBC6A5DF4097B0B6815A2DE8811E94EAE82088FC3* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol::Equals(Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol,Microsoft.CodeAnalysis.CSharp.Symbols.TypeSymbol,Microsoft.CodeAnalysis.TypeCompareKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeSymbol_Equals_mB40DE1C67369B2053CA71025D3A6009D736EC879 (TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC* ___0_left, TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC* ___1_right, int32_t ___2_comparison, const RuntimeMethod* method) ;
// Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.Symbol> Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::get_UnderlyingDefinitionToMemberMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmallDictionary_2_t61F20CBCA1E44A9F1E4240C34CDCF014BE5AB464* TupleExtraData_get_UnderlyingDefinitionToMemberMap_m98CD03E52AF94B02A1EB225B119FBB2F95BA8A98 (TupleExtraData_tBC6A5DF4097B0B6815A2DE8811E94EAE82088FC3* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.Symbol>::TryGetValue(K,V&)
inline bool SmallDictionary_2_TryGetValue_mAF73E0191478D73919249734137D592EC78CA796 (SmallDictionary_2_t61F20CBCA1E44A9F1E4240C34CDCF014BE5AB464* __this, Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* ___0_key, Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (SmallDictionary_2_t61F20CBCA1E44A9F1E4240C34CDCF014BE5AB464*, Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E*, Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E**, const RuntimeMethod*))SmallDictionary_2_TryGetValue_m73CD1347EC832F5C28AF1DCEDDC36E2E992C5552_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState::ForEach<System.Object>(System.Action`2<System.Int32,TArg>,TArg)
inline void LocalState_ForEach_TisRuntimeObject_m7CAD638FCF9D1EE2693A209353564FF39C9235ED (LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D* __this, Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* ___0_action, RuntimeObject* ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D*, Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166*, RuntimeObject*, const RuntimeMethod*))LocalState_ForEach_TisRuntimeObject_m7CAD638FCF9D1EE2693A209353564FF39C9235ED_gshared)(__this, ___0_action, ___1_arg, method);
}
// System.Int32 Microsoft.CodeAnalysis.CSharp.NullableWalker/Variables::ConstructSlot(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Variables_ConstructSlot_m18859764D1BF9A34C33BE2CFE2E7CB92AF49909D (int32_t ___0_id, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Int32 Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocalState_get_Capacity_m0416F6861F0D5AAF44565C1315E5DC3DD53C2A6A (LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Collections.Immutable.ImmutableArray`1/Enumerator<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::GetEnumerator()
inline Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F ImmutableArray_1_GetEnumerator_mF1D50F57167F1E371A46A1036C5C4C792E1D96D5_inline (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F (*) (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2*, const RuntimeMethod*))ImmutableArray_1_GetEnumerator_mF1D50F57167F1E371A46A1036C5C4C792E1D96D5_gshared_inline)(__this, method);
}
// T System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m72FE648FF889091793EEC5D4BD0A1C30011D3DAD (Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F*, const RuntimeMethod*))Enumerator_get_Current_m72FE648FF889091793EEC5D4BD0A1C30011D3DAD_gshared)(__this, method);
}
// System.Void Microsoft.CodeAnalysis.SmallDictionary`2<Microsoft.CodeAnalysis.CSharp.Symbol,Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope>::Add(K,V)
inline void SmallDictionary_2_Add_m9615F423DFC9CFD6D82D20CD21487D52A90787DB (SmallDictionary_2_tE87779D5BCF23473F3D2AE246FDCE304BDDD8A9E* __this, Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* ___0_key, Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SmallDictionary_2_tE87779D5BCF23473F3D2AE246FDCE304BDDD8A9E*, Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E*, Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0*, const RuntimeMethod*))SmallDictionary_2_Add_mAA6F2949F60ACEB66DFBC3F5E7235E2AA1D231B7_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mDCE5861379C3C15F9459D42ACCC5FD67BA0BEAB4 (Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F*, const RuntimeMethod*))Enumerator_MoveNext_mDCE5861379C3C15F9459D42ACCC5FD67BA0BEAB4_gshared)(__this, method);
}
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::get_IsEmpty()
inline bool ImmutableArray_1_get_IsEmpty_m89FFF230A0A1C2236C65AB8BD6E7479F948E570D (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2*, const RuntimeMethod*))ImmutableArray_1_get_IsEmpty_m89FFF230A0A1C2236C65AB8BD6E7479F948E570D_gshared)(__this, method);
}
// System.Void Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::CreateAndPushScope(Microsoft.CodeAnalysis.CSharp.BoundNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTreeBuilder_CreateAndPushScope_m1702FC39DF9C5AB047DF8A70F439645164060F54 (ScopeTreeBuilder_tF044EAD7FEAFBBDCF4064D6859D8271733838164* __this, BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED* ___0_node, const RuntimeMethod* method) ;
// UnityEngine.GameObject INAddonInterface/AddonPackageItem/SettingsGroup::GenerateItem(INAddonInterface/AddonPackageItem/SettingsGroup,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SettingsGroup_GenerateItem_m735D24B06DE049965AE78C82FF1E1E325A49928C (SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* __this, SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* ___0_group, String_t* ___1_name, const RuntimeMethod* method) ;
// UnityEngine.UI.Text INAddonInterface/AddonPackageItem/SettingsItem::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* SettingsItem_get_Name_mB1F696A4C685760143ECDB9462DCA43841F52065_inline (SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<INAddonInterface/AddonPackageItem/SettingsItem> INAddonInterface/AddonPackageItem/SettingsGroup::get_Items()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0* SettingsGroup_get_Items_mB55A5B41AD2C0DB972945983212AC61886CFC68B_inline (SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<INAddonInterface/AddonPackageItem/SettingsItem>::Add(T)
inline void List_1_Add_mBBED8C6A7DEEDE4E2B90536516BBDEE1190F7482_inline (List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0* __this, SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0*, SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::ThrowNullRefIfNotInitialized()
inline void ImmutableArray_1_ThrowNullRefIfNotInitialized_m5C925DC0B34DC79B01AB8F4828D96E395FD94E54 (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2* __this, const RuntimeMethod* method)
{
	((  void (*) (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2*, const RuntimeMethod*))ImmutableArray_1_ThrowNullRefIfNotInitialized_m5C925DC0B34DC79B01AB8F4828D96E395FD94E54_gshared)(__this, method);
}
// System.Void System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>::.ctor(T[])
inline void Enumerator__ctor_mA3904190A1F7BE933692A6C39B80C35BE7DB8827 (Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))Enumerator__ctor_mA3904190A1F7BE933692A6C39B80C35BE7DB8827_gshared)(__this, ___0_array, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.SByte>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* V_1 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int8_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* L_21 = (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* L_37 = V_1;
		NullCheck(L_37);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_38;
		L_38 = ((  SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Single>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (float)((*(float*)((float*)(float*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_21 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(float*)((float*)(float*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_37 = V_1;
		NullCheck(L_37);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38;
		L_38 = ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.TimeSpan>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* V_1 = NULL;
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = (TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* L_21 = (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* L_37 = V_1;
		NullCheck(L_37);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_38;
		L_38 = ((  TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint16_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_21 = (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_37 = V_1;
		NullCheck(L_37);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38;
		L_38 = ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_21 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_37 = V_1;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38;
		L_38 = ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___0_list;
		List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_21 = (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = __this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				RuntimeObject* L_33 = ___1_nsResolver;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_37 = V_1;
		NullCheck(L_37);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38;
		L_38 = ((  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameAttributeSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNameAttributeSyntax_Accept_TisRuntimeObject_m819BE238CCF48EAEFA937D93434A090149B2E247_gshared (XmlNameAttributeSyntax_tD261DB395F4CBD6F9329EC7621A18C6CEFF73FDF* __this, CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlNameAttributeSyntax_tD261DB395F4CBD6F9329EC7621A18C6CEFF73FDF* >::Invoke(216 /* TResult Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>::VisitXmlNameAttribute(Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameAttributeSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNameAttributeSyntax_Accept_TisRuntimeObject_m82B7FC81499F6B237404D3DAD1BE6290D7F46702_gshared (XmlNameAttributeSyntax_t73040D492E2BC83A39F8F70522ACAEEF528FC701* __this, CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlNameAttributeSyntax_t73040D492E2BC83A39F8F70522ACAEEF528FC701* >::Invoke(218 /* TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>::VisitXmlNameAttribute(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameAttributeSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNameSyntax_Accept_TisRuntimeObject_mF738C36F54C1FC72132D069FFDEA2C8E84C5CDB1_gshared (XmlNameSyntax_tA6F440D00BCA73F4E334A122E0CCEA86A2441E13* __this, CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlNameSyntax_tA6F440D00BCA73F4E334A122E0CCEA86A2441E13* >::Invoke(212 /* TResult Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>::VisitXmlName(Microsoft.CodeAnalysis.CSharp.Syntax.XmlNameSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNameSyntax_Accept_TisRuntimeObject_m39FB99E0AAB30513EEC0AD59881166CE71C2D456_gshared (XmlNameSyntax_tB8722A6A5D3EEE289532ABAD7B4AECD5412225B2* __this, CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlNameSyntax_tB8722A6A5D3EEE289532ABAD7B4AECD5412225B2* >::Invoke(214 /* TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>::VisitXmlName(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlNameSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.XmlPrefixSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlPrefixSyntax_Accept_TisRuntimeObject_m398506BB5E65B699E997587896C73AC76B0BD56C_gshared (XmlPrefixSyntax_t402813138B42F39CB849FF22E595FCF6AE540B34* __this, CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlPrefixSyntax_t402813138B42F39CB849FF22E595FCF6AE540B34* >::Invoke(213 /* TResult Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>::VisitXmlPrefix(Microsoft.CodeAnalysis.CSharp.Syntax.XmlPrefixSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlPrefixSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlPrefixSyntax_Accept_TisRuntimeObject_mA7334BCD5226927E190764A326725217C3B41FE8_gshared (XmlPrefixSyntax_t1ADB536CCAA1326F3A788EC90F1AE81C0B6E4D6F* __this, CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlPrefixSyntax_t1ADB536CCAA1326F3A788EC90F1AE81C0B6E4D6F* >::Invoke(215 /* TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>::VisitXmlPrefix(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlPrefixSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.XmlProcessingInstructionSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlProcessingInstructionSyntax_Accept_TisRuntimeObject_mAE6D8B18CC063F370800991CA0DB29F96B96990C_gshared (XmlProcessingInstructionSyntax_t6878CC638FD78DBB51C953C60ED067D982A728C2* __this, CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlProcessingInstructionSyntax_t6878CC638FD78DBB51C953C60ED067D982A728C2* >::Invoke(219 /* TResult Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>::VisitXmlProcessingInstruction(Microsoft.CodeAnalysis.CSharp.Syntax.XmlProcessingInstructionSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlProcessingInstructionSyntax_Accept_TisRuntimeObject_mB9A50972A767511EC04C5FBD47F0C4A472C389A2_gshared (XmlProcessingInstructionSyntax_tC44CD7F7A0FCC08F8636258921A44EDD120CDDB9* __this, CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlProcessingInstructionSyntax_tC44CD7F7A0FCC08F8636258921A44EDD120CDDB9* >::Invoke(221 /* TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>::VisitXmlProcessingInstruction(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlProcessingInstructionSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextAttributeSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlTextAttributeSyntax_Accept_TisRuntimeObject_mA398E71353AAE730BBE5904D8F4A6B4DC73DAD92_gshared (XmlTextAttributeSyntax_t827CE27B9E760A89AC6D921FCC0D9AA08B252B6A* __this, CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlTextAttributeSyntax_t827CE27B9E760A89AC6D921FCC0D9AA08B252B6A* >::Invoke(214 /* TResult Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>::VisitXmlTextAttribute(Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextAttributeSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlTextAttributeSyntax_Accept_TisRuntimeObject_mDB6FA7493AB9EB59E27C8FE416685F66EC596972_gshared (XmlTextAttributeSyntax_t751525205B497F48702536E8638C778D0EF1D70D* __this, CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlTextAttributeSyntax_t751525205B497F48702536E8638C778D0EF1D70D* >::Invoke(216 /* TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>::VisitXmlTextAttribute(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextAttributeSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlTextSyntax_Accept_TisRuntimeObject_mC00320E4C9A33F0F85E6E702F45A70A883D3AF86_gshared (XmlTextSyntax_tEE6A5FCB5C1B3D269EC0C99E7636F82CD009AE1A* __this, CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlTextSyntax_tEE6A5FCB5C1B3D269EC0C99E7636F82CD009AE1A* >::Invoke(217 /* TResult Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>::VisitXmlText(Microsoft.CodeAnalysis.CSharp.Syntax.XmlTextSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlTextSyntax_Accept_TisRuntimeObject_m8D37459283B286808BEF3ADB87FF88ADA8F0392E_gshared (XmlTextSyntax_tD99895C4A83D5823D80F2DA6830ADB9215B86CDC* __this, CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, XmlTextSyntax_tD99895C4A83D5823D80F2DA6830ADB9215B86CDC* >::Invoke(219 /* TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>::VisitXmlText(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.XmlTextSyntax) */, L_0, __this);
		return L_1;
	}
}
// TNode Roslyn.Utilities.XmlUtilities::Copy<System.Object>(TNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlUtilities_Copy_TisRuntimeObject_m93ADFC2956A25012E02E55C2CD1686B0776F0531_gshared (RuntimeObject* ___0_node, bool ___1_copyAttributeAnnotations, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5);
		s_Il2CppMethodInitialized = true;
	}
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* V_0 = NULL;
	XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___0_node;
		NullCheck((XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___0_node;
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_3 = (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)il2cpp_codegen_object_new(XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XDocument__ctor_m495825983EF7F4A3E92F9B6334E7C488474C36EF(L_3, ((XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)CastclassClass((RuntimeObject*)L_2, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var)), NULL);
		V_0 = (XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_3;
		goto IL_0049;
	}

IL_0022:
	{
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_4;
		L_4 = XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736(_stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5, NULL);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_5 = (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)il2cpp_codegen_object_new(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XElement__ctor_mFDCA9C62F1562D0E005F47D0298A49C57DBC126C(L_5, L_4, NULL);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_6 = L_5;
		RuntimeObject* L_7 = ___0_node;
		NullCheck((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)L_6);
		XContainer_Add_m26111A020919619F03525ED30091D4501090075B((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)L_6, L_7, NULL);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_8 = L_6;
		NullCheck((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)L_8);
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_9;
		L_9 = XContainer_get_LastNode_mA0896FBB61341D138E2F48F032D6C8169DEEED5E((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)L_8, NULL);
		V_0 = L_9;
		NullCheck((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)L_8);
		XContainer_RemoveNodes_m4AEA5FE86A02C530F24A6662ED5559E65C77CAE5((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)L_8, NULL);
	}

IL_0049:
	{
		RuntimeObject* L_10 = ___0_node;
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_11 = V_0;
		XmlUtilities_CopyAnnotations_m7362968E746CE1A8A9FC5E60CA88B13EBB193C9A((XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)L_10, (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)L_11, NULL);
		bool L_12 = ___1_copyAttributeAnnotations;
		if (!L_12)
		{
			goto IL_00b2;
		}
	}
	{
		RuntimeObject* L_13 = ___0_node;
		NullCheck((XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_00b2;
		}
	}
	{
		RuntimeObject* L_15 = ___0_node;
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_16 = V_0;
		V_1 = ((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)CastclassClass((RuntimeObject*)L_16, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var));
		NullCheck(((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)CastclassClass((RuntimeObject*)L_15, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var)));
		RuntimeObject* L_17;
		L_17 = XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37(((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)CastclassClass((RuntimeObject*)L_15, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var, L_17);
		V_2 = L_18;
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_19 = V_1;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37(L_19, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var, L_20);
		V_3 = L_21;
		goto IL_00a2;
	}

IL_0091:
	{
		RuntimeObject* L_22 = V_2;
		NullCheck(L_22);
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_23;
		L_23 = InterfaceFuncInvoker0< XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var, L_22);
		RuntimeObject* L_24 = V_3;
		NullCheck(L_24);
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_25;
		L_25 = InterfaceFuncInvoker0< XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var, L_24);
		XmlUtilities_CopyAnnotations_m7362968E746CE1A8A9FC5E60CA88B13EBB193C9A((XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)L_23, (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)L_25, NULL);
	}

IL_00a2:
	{
		RuntimeObject* L_26 = V_2;
		NullCheck((RuntimeObject*)L_26);
		bool L_27;
		L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		RuntimeObject* L_28 = V_3;
		NullCheck((RuntimeObject*)L_28);
		bool L_29;
		L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
		if (L_29)
		{
			goto IL_0091;
		}
	}

IL_00b2:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_30 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.YieldStatementSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YieldStatementSyntax_Accept_TisRuntimeObject_m3F9D5B7E3EF006DC4F29EAFD72C95E6CD2CC262C_gshared (YieldStatementSyntax_t14BEAD3071458D4756B4F8E15C768A4FD5D382F5* __this, CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t229E091559FBC994A31037EDBF33F66FACBF574F* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, YieldStatementSyntax_t14BEAD3071458D4756B4F8E15C768A4FD5D382F5* >::Invoke(124 /* TResult Microsoft.CodeAnalysis.CSharp.CSharpSyntaxVisitor`1<System.Object>::VisitYieldStatement(Microsoft.CodeAnalysis.CSharp.Syntax.YieldStatementSyntax) */, L_0, __this);
		return L_1;
	}
}
// TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax::Accept<System.Object>(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YieldStatementSyntax_Accept_TisRuntimeObject_m80434D511D6A5F2B9F8388476FAA6F833EA67BBA_gshared (YieldStatementSyntax_tF7FB46CD1BF4C4F9CCE04D28FF4FAC331510A0A5* __this, CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* ___0_visitor, const RuntimeMethod* method) 
{
	{
		CSharpSyntaxVisitor_1_t530C87D6394640CC64ED257F7C9B4AE3F66EA428* L_0 = ___0_visitor;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, YieldStatementSyntax_tF7FB46CD1BF4C4F9CCE04D28FF4FAC331510A0A5* >::Invoke(126 /* TResult Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.CSharpSyntaxVisitor`1<System.Object>::VisitYieldStatement(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.YieldStatementSyntax) */, L_0, __this);
		return L_1;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(bool));
		bool L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		bool L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppChar V_24 = 0x0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(Il2CppChar));
		Il2CppChar L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		Il2CppChar L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	double V_3 = 0.0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	double V_24 = 0.0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(double));
		double L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		double L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int16_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int16_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int16_t));
		int16_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int16_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int32_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int32_t));
		int32_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int32_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int64_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int64_t));
		int64_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int64_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	RuntimeObject* V_24 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(RuntimeObject*));
		RuntimeObject* L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		RuntimeObject* L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int8_t V_24 = 0x0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int8_t));
		int8_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int8_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		float L_108 = V_3;
		return L_108;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeInfo::GetHoistedLocalScopes<System.Object>(Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.Debugging.StateMachineHoistedLocalScope>,System.Collections.Immutable.ImmutableArray`1/Builder<TScopeInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED ScopeInfo_GetHoistedLocalScopes_TisRuntimeObject_mF8E74E5C76AAC9192A759CC46C4DDB9C503C09B7_gshared (ArrayBuilder_1_t0671810E1DA02DB0F94264A4F5AB942F100A9F17* ___0_result, Builder_t942AD8818301E063D533998081916893FDCE50F9* ___1_scopes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = ((int32_t)2147483647LL);
		V_1 = 0;
		Builder_t942AD8818301E063D533998081916893FDCE50F9* L_0 = ___1_scopes;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (Builder_t942AD8818301E063D533998081916893FDCE50F9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_2;
					if (!L_2)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_3 = V_2;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_0011_1:
			{
				RuntimeObject* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 2), L_4);
				ArrayBuilder_1_t0671810E1DA02DB0F94264A4F5AB942F100A9F17* L_6 = ___0_result;
				NullCheck((ScopeInfo_t96AA0DD6C6DB222A82F94B483A25AA7CC5EC619F*)L_5);
				ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED L_7;
				L_7 = VirtualFuncInvoker1< ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED, ArrayBuilder_1_t0671810E1DA02DB0F94264A4F5AB942F100A9F17* >::Invoke(11 /* Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeInfo::GetHoistedLocalScopes(Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.CodeAnalysis.Debugging.StateMachineHoistedLocalScope>) */, (ScopeInfo_t96AA0DD6C6DB222A82F94B483A25AA7CC5EC619F*)L_5, L_6);
				V_3 = L_7;
				int32_t L_8 = V_0;
				ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED L_9 = V_3;
				int32_t L_10 = L_9.___Begin_0;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_11;
				L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_8, L_10, NULL);
				V_0 = L_11;
				int32_t L_12 = V_1;
				ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED L_13 = V_3;
				int32_t L_14 = L_13.___End_1;
				int32_t L_15;
				L_15 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_12, L_14, NULL);
				V_1 = L_15;
			}

IL_003d_1:
			{
				RuntimeObject* L_16 = V_2;
				NullCheck((RuntimeObject*)L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED L_20;
		memset((&L_20), 0, sizeof(L_20));
		ScopeBounds__ctor_m6D8869AE248561FFFD879894165008F3757DDEBA((&L_20), L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeInfo::GetLocalScopes<System.Object>(Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.Cci.LocalScope>,System.Collections.Immutable.ImmutableArray`1/Builder<TScopeInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED ScopeInfo_GetLocalScopes_TisRuntimeObject_mB1F1BC47C81DC6606FB26251ED3E73FE91361101_gshared (ArrayBuilder_1_tBB311F44C1B021ED8A06C3BA5BBEBE9E7D97EA0F* ___0_result, Builder_t942AD8818301E063D533998081916893FDCE50F9* ___1_scopes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = ((int32_t)2147483647LL);
		V_1 = 0;
		Builder_t942AD8818301E063D533998081916893FDCE50F9* L_0 = ___1_scopes;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (Builder_t942AD8818301E063D533998081916893FDCE50F9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_2;
					if (!L_2)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_3 = V_2;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_0011_1:
			{
				RuntimeObject* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 2), L_4);
				ArrayBuilder_1_tBB311F44C1B021ED8A06C3BA5BBEBE9E7D97EA0F* L_6 = ___0_result;
				NullCheck((ScopeInfo_t96AA0DD6C6DB222A82F94B483A25AA7CC5EC619F*)L_5);
				ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED L_7;
				L_7 = VirtualFuncInvoker1< ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED, ArrayBuilder_1_tBB311F44C1B021ED8A06C3BA5BBEBE9E7D97EA0F* >::Invoke(10 /* Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeBounds Microsoft.CodeAnalysis.CodeGen.ILBuilder/ScopeInfo::GetLocalScopes(Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<Microsoft.Cci.LocalScope>) */, (ScopeInfo_t96AA0DD6C6DB222A82F94B483A25AA7CC5EC619F*)L_5, L_6);
				V_3 = L_7;
				int32_t L_8 = V_0;
				ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED L_9 = V_3;
				int32_t L_10 = L_9.___Begin_0;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_11;
				L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_8, L_10, NULL);
				V_0 = L_11;
				int32_t L_12 = V_1;
				ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED L_13 = V_3;
				int32_t L_14 = L_13.___End_1;
				int32_t L_15;
				L_15 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_12, L_14, NULL);
				V_1 = L_15;
			}

IL_003d_1:
			{
				RuntimeObject* L_16 = V_2;
				NullCheck((RuntimeObject*)L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		ScopeBounds_tE32A73DF2B189FF4602B9AFBCE9F43780A2B66ED L_20;
		memset((&L_20), 0, sizeof(L_20));
		ScopeBounds__ctor_m6D8869AE248561FFFD879894165008F3757DDEBA((&L_20), L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<ParseFunctionPointerTypeSyntax>b__217_2<System.Object>(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CParseFunctionPointerTypeSyntaxU3Eb__217_2_TisRuntimeObject_m815555BAC0939EEC2DE43865D38048CC57F44EE9_gshared (U3CU3Ec_tEEBECE1186C808AC7E2D6AFE4EDDEF2D70184C07* __this, LanguageParser_t903901AC19BED8763E7B3160790F4B0EBEE9508E* ___0_p, const RuntimeMethod* method) 
{
	{
		LanguageParser_t903901AC19BED8763E7B3160790F4B0EBEE9508E* L_0 = ___0_p;
		NullCheck((SyntaxParser_t31755989D12224FCF0C87C082609F548153050F3*)L_0);
		SyntaxToken_t18EE41EC523C025B89C9A50597889108CC6808CD* L_1;
		L_1 = SyntaxParser_get_CurrentToken_m1BC3B17A7F41F7EAC11B47D0447EE6F2D3C846DC((SyntaxParser_t31755989D12224FCF0C87C082609F548153050F3*)L_0, NULL);
		NullCheck((CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8*)L_1);
		uint16_t L_2;
		L_2 = CSharpSyntaxNode_get_Kind_mCB71438D3861290273BC1781E3DEF697E42A94CC((CSharpSyntaxNode_t18E2A7A9E2CC4867719A6CBFE7A05D0AD9498DE8*)L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)8216)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser/<>c::<ParseFunctionPointerTypeSyntax>b__217_3<System.Object>(Microsoft.CodeAnalysis.CSharp.Syntax.InternalSyntax.LanguageParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CParseFunctionPointerTypeSyntaxU3Eb__217_3_TisRuntimeObject_mB539DAA35F9680A2B9E8C5CF2D5803963F08B08F_gshared (U3CU3Ec_tEEBECE1186C808AC7E2D6AFE4EDDEF2D70184C07* __this, LanguageParser_t903901AC19BED8763E7B3160790F4B0EBEE9508E* ___0_p, const RuntimeMethod* method) 
{
	{
		LanguageParser_t903901AC19BED8763E7B3160790F4B0EBEE9508E* L_0 = ___0_p;
		NullCheck(L_0);
		bool L_1;
		L_1 = LanguageParser_IsTerminator_m0B9930DD51BE5CA57269581729C88F9669ACB586(L_0, NULL);
		return L_1;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Collections.Generic.List`1<Tuple`2<T1,T2>> LootCrateRewards/Slot::FromHashtable<System.Int32,System.Int32>(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* Slot_FromHashtable_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3F7D8233BCFDF663739E195F986CC6F2759AB5B5_gshared (Slot_t6D7075E2EC5ACACD82BBB080260D408BFE52D305* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	int32_t G_B6_0 = 0;
	{
		// List<Tuple<T1, T2>> list = new List<Tuple<T1, T2>>();
		List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* L_0 = (List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		// int num = 0;
		V_1 = 0;
		// foreach (object key in data.Keys)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___0_data;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_1);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_2;
					V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_7;
					if (!L_5)
					{
						goto IL_00fb;
					}
				}
				{
					RuntimeObject* L_6 = V_7;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00fb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00db_1;
			}

IL_0019_1:
			{
				// foreach (object key in data.Keys)
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				// int num2 = (int)Convert.ChangeType(data[key], typeof(int));
				Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_9 = ___0_data;
				RuntimeObject* L_10 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_11;
				L_11 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(27 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_9, L_10);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_14;
				L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
				V_4 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_14, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
				// if (num2 > 0)
				int32_t L_15 = V_4;
				if ((((int32_t)L_15) <= ((int32_t)0)))
				{
					goto IL_00db_1;
				}
			}
			{
				// string text = (string)Convert.ChangeType(key, typeof(string));
				RuntimeObject* L_16 = V_3;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_19;
				L_19 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_16, L_18, NULL);
				V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var));
				// T1 item = ((!typeof(T1).IsEnum) ? ((T1)Convert.ChangeType(int.Parse(text, CultureInfo.InvariantCulture), typeof(T1))) : ((T1)Enum.Parse(typeof(T1), text)));
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				NullCheck(L_21);
				bool L_22;
				L_22 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_21);
				if (!L_22)
				{
					goto IL_0085_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				String_t* L_25 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				RuntimeObject* L_26;
				L_26 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_24, L_25, NULL);
				G_B6_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_26, il2cpp_rgctx_data(method->rgctx_data, 3)))));
				goto IL_00aa_1;
			}

IL_0085_1:
			{
				String_t* L_27 = V_5;
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_28;
				L_28 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				int32_t L_29;
				L_29 = Int32_Parse_mD1B67560310D4E9CC1EA31177CA1CB2CFDFE5D57(L_27, (RuntimeObject*)L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_34;
				L_34 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_31, L_33, NULL);
				G_B6_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 3)))));
			}

IL_00aa_1:
			{
				V_6 = G_B6_0;
				// list.Add(new Tuple<T1, T2>(item, (T2)Convert.ChangeType(num2 + num, typeof(T2))));
				List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* L_35 = V_0;
				int32_t L_36 = V_6;
				int32_t L_37 = V_4;
				int32_t L_38 = V_1;
				int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
				RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_43;
				L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_40, L_42, NULL);
				Tuple_2_tB567DF9E3879C7F28DEF8C2CE615E24002FA55CE* L_44 = (Tuple_2_tB567DF9E3879C7F28DEF8C2CE615E24002FA55CE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
				NullCheck(L_44);
				((  void (*) (Tuple_2_tB567DF9E3879C7F28DEF8C2CE615E24002FA55CE*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_44, L_36, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_43, il2cpp_rgctx_data(method->rgctx_data, 5))))), il2cpp_rgctx_method(method->rgctx_data, 7));
				NullCheck(L_35);
				((  void (*) (List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C*, Tuple_2_tB567DF9E3879C7F28DEF8C2CE615E24002FA55CE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_35, L_44, il2cpp_rgctx_method(method->rgctx_data, 8));
				// num += num2;
				int32_t L_45 = V_1;
				int32_t L_46 = V_4;
				V_1 = ((int32_t)il2cpp_codegen_add(L_45, L_46));
			}

IL_00db_1:
			{
				// foreach (object key in data.Keys)
				RuntimeObject* L_47 = V_2;
				NullCheck(L_47);
				bool L_48;
				L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_47);
				if (L_48)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_00fc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fc:
	{
		// return list;
		List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* L_49 = V_0;
		return L_49;
	}
}
// System.Collections.Generic.List`1<Tuple`2<T1,T2>> LootCrateRewards/Slot::FromHashtable<System.Int32Enum,System.Int32>(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F* Slot_FromHashtable_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD60162ED60A46DC16B0189EB59A74F9605399391_gshared (Slot_t6D7075E2EC5ACACD82BBB080260D408BFE52D305* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	int32_t G_B6_0 = 0;
	{
		// List<Tuple<T1, T2>> list = new List<Tuple<T1, T2>>();
		List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F* L_0 = (List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		// int num = 0;
		V_1 = 0;
		// foreach (object key in data.Keys)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___0_data;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_1);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_2;
					V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_7;
					if (!L_5)
					{
						goto IL_00fb;
					}
				}
				{
					RuntimeObject* L_6 = V_7;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00fb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00db_1;
			}

IL_0019_1:
			{
				// foreach (object key in data.Keys)
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				// int num2 = (int)Convert.ChangeType(data[key], typeof(int));
				Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_9 = ___0_data;
				RuntimeObject* L_10 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_11;
				L_11 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(27 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_9, L_10);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_14;
				L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
				V_4 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_14, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
				// if (num2 > 0)
				int32_t L_15 = V_4;
				if ((((int32_t)L_15) <= ((int32_t)0)))
				{
					goto IL_00db_1;
				}
			}
			{
				// string text = (string)Convert.ChangeType(key, typeof(string));
				RuntimeObject* L_16 = V_3;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_19;
				L_19 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_16, L_18, NULL);
				V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var));
				// T1 item = ((!typeof(T1).IsEnum) ? ((T1)Convert.ChangeType(int.Parse(text, CultureInfo.InvariantCulture), typeof(T1))) : ((T1)Enum.Parse(typeof(T1), text)));
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				NullCheck(L_21);
				bool L_22;
				L_22 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_21);
				if (!L_22)
				{
					goto IL_0085_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				String_t* L_25 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				RuntimeObject* L_26;
				L_26 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_24, L_25, NULL);
				G_B6_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_26, il2cpp_rgctx_data(method->rgctx_data, 3)))));
				goto IL_00aa_1;
			}

IL_0085_1:
			{
				String_t* L_27 = V_5;
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_28;
				L_28 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				int32_t L_29;
				L_29 = Int32_Parse_mD1B67560310D4E9CC1EA31177CA1CB2CFDFE5D57(L_27, (RuntimeObject*)L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_34;
				L_34 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_31, L_33, NULL);
				G_B6_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 3)))));
			}

IL_00aa_1:
			{
				V_6 = G_B6_0;
				// list.Add(new Tuple<T1, T2>(item, (T2)Convert.ChangeType(num2 + num, typeof(T2))));
				List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F* L_35 = V_0;
				int32_t L_36 = V_6;
				int32_t L_37 = V_4;
				int32_t L_38 = V_1;
				int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
				RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_43;
				L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_40, L_42, NULL);
				Tuple_2_t59E60D9F8F3473C96F5BE446F8E49FDF53C753C1* L_44 = (Tuple_2_t59E60D9F8F3473C96F5BE446F8E49FDF53C753C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
				NullCheck(L_44);
				((  void (*) (Tuple_2_t59E60D9F8F3473C96F5BE446F8E49FDF53C753C1*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_44, L_36, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_43, il2cpp_rgctx_data(method->rgctx_data, 5))))), il2cpp_rgctx_method(method->rgctx_data, 7));
				NullCheck(L_35);
				((  void (*) (List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F*, Tuple_2_t59E60D9F8F3473C96F5BE446F8E49FDF53C753C1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_35, L_44, il2cpp_rgctx_method(method->rgctx_data, 8));
				// num += num2;
				int32_t L_45 = V_1;
				int32_t L_46 = V_4;
				V_1 = ((int32_t)il2cpp_codegen_add(L_45, L_46));
			}

IL_00db_1:
			{
				// foreach (object key in data.Keys)
				RuntimeObject* L_47 = V_2;
				NullCheck(L_47);
				bool L_48;
				L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_47);
				if (L_48)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_00fc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fc:
	{
		// return list;
		List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F* L_49 = V_0;
		return L_49;
	}
}
// System.Collections.Generic.List`1<Tuple`2<T1,T2>> LootCrateRewards/Slot::FromHashtable<System.Object,System.Object>(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD* Slot_FromHashtable_TisRuntimeObject_TisRuntimeObject_m2DC051186CE188E37CC3FD7F986CE06B764F8BDF_gshared (Slot_t6D7075E2EC5ACACD82BBB080260D408BFE52D305* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		// List<Tuple<T1, T2>> list = new List<Tuple<T1, T2>>();
		List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD* L_0 = (List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		// int num = 0;
		V_1 = 0;
		// foreach (object key in data.Keys)
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___0_data;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(33 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_1);
		NullCheck((RuntimeObject*)L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_2;
					V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_7;
					if (!L_5)
					{
						goto IL_00fb;
					}
				}
				{
					RuntimeObject* L_6 = V_7;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_00fb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00db_1;
			}

IL_0019_1:
			{
				// foreach (object key in data.Keys)
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				// int num2 = (int)Convert.ChangeType(data[key], typeof(int));
				Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_9 = ___0_data;
				RuntimeObject* L_10 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_11;
				L_11 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(27 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_9, L_10);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_13;
				L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_14;
				L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_11, L_13, NULL);
				V_4 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_14, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
				// if (num2 > 0)
				int32_t L_15 = V_4;
				if ((((int32_t)L_15) <= ((int32_t)0)))
				{
					goto IL_00db_1;
				}
			}
			{
				// string text = (string)Convert.ChangeType(key, typeof(string));
				RuntimeObject* L_16 = V_3;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_19;
				L_19 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_16, L_18, NULL);
				V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var));
				// T1 item = ((!typeof(T1).IsEnum) ? ((T1)Convert.ChangeType(int.Parse(text, CultureInfo.InvariantCulture), typeof(T1))) : ((T1)Enum.Parse(typeof(T1), text)));
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
				Type_t* L_21;
				L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
				NullCheck(L_21);
				bool L_22;
				L_22 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_21);
				if (!L_22)
				{
					goto IL_0085_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_24;
				L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
				String_t* L_25 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				RuntimeObject* L_26;
				L_26 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_24, L_25, NULL);
				G_B6_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3)));
				goto IL_00aa_1;
			}

IL_0085_1:
			{
				String_t* L_27 = V_5;
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_28;
				L_28 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				int32_t L_29;
				L_29 = Int32_Parse_mD1B67560310D4E9CC1EA31177CA1CB2CFDFE5D57(L_27, (RuntimeObject*)L_28, NULL);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_33;
				L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_34;
				L_34 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_31, L_33, NULL);
				G_B6_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 3)));
			}

IL_00aa_1:
			{
				V_6 = G_B6_0;
				// list.Add(new Tuple<T1, T2>(item, (T2)Convert.ChangeType(num2 + num, typeof(T2))));
				List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD* L_35 = V_0;
				RuntimeObject* L_36 = V_6;
				int32_t L_37 = V_4;
				int32_t L_38 = V_1;
				int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
				RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_42;
				L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				RuntimeObject* L_43;
				L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_40, L_42, NULL);
				Tuple_2_t9A9133B09D0169DACED4F3B7A0A6DBADC329CF58* L_44 = (Tuple_2_t9A9133B09D0169DACED4F3B7A0A6DBADC329CF58*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
				NullCheck(L_44);
				((  void (*) (Tuple_2_t9A9133B09D0169DACED4F3B7A0A6DBADC329CF58*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_44, L_36, ((RuntimeObject*)Castclass((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 5))), il2cpp_rgctx_method(method->rgctx_data, 7));
				NullCheck(L_35);
				((  void (*) (List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD*, Tuple_2_t9A9133B09D0169DACED4F3B7A0A6DBADC329CF58*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_35, L_44, il2cpp_rgctx_method(method->rgctx_data, 8));
				// num += num2;
				int32_t L_45 = V_1;
				int32_t L_46 = V_4;
				V_1 = ((int32_t)il2cpp_codegen_add(L_45, L_46));
			}

IL_00db_1:
			{
				// foreach (object key in data.Keys)
				RuntimeObject* L_47 = V_2;
				NullCheck(L_47);
				bool L_48;
				L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_47);
				if (L_48)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_00fc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fc:
	{
		// return list;
		List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD* L_49 = V_0;
		return L_49;
	}
}
// System.Int32 LootCrateRewards/Slot::GetRewardIndex<System.Int32,System.Int32>(System.Collections.Generic.List`1<Tuple`2<T1,T2>>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Slot_GetRewardIndex_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m09403E3B58D70B14D9801136B7920903C126AAFD_gshared (Slot_t6D7075E2EC5ACACD82BBB080260D408BFE52D305* __this, List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* ___0_list, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// int num = Convert.ToInt32(list[i].Item2);
		List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* L_0 = ___0_list;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Tuple_2_tB567DF9E3879C7F28DEF8C2CE615E24002FA55CE* L_2;
		L_2 = ((  Tuple_2_tB567DF9E3879C7F28DEF8C2CE615E24002FA55CE* (*) (List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Tuple_2_tB567DF9E3879C7F28DEF8C2CE615E24002FA55CE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_4);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_5, NULL);
		V_1 = L_6;
		// if (value < num)
		int32_t L_7 = ___1_value;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0021;
		}
	}
	{
		// return i;
		int32_t L_9 = V_0;
		return L_9;
	}

IL_0021:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_11 = V_0;
		List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C* L_12 = ___0_list;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = ((  int32_t (*) (List_1_tFAE9D0CBC71BB143B93391BFB61537C20DD1820C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_12, il2cpp_rgctx_method(method->rgctx_data, 5));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		// return 0;
		return 0;
	}
}
// System.Int32 LootCrateRewards/Slot::GetRewardIndex<System.Int32Enum,System.Int32>(System.Collections.Generic.List`1<Tuple`2<T1,T2>>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Slot_GetRewardIndex_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5943263597FAE8DF92C746FF401C88B6AF297558_gshared (Slot_t6D7075E2EC5ACACD82BBB080260D408BFE52D305* __this, List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F* ___0_list, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// int num = Convert.ToInt32(list[i].Item2);
		List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F* L_0 = ___0_list;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Tuple_2_t59E60D9F8F3473C96F5BE446F8E49FDF53C753C1* L_2;
		L_2 = ((  Tuple_2_t59E60D9F8F3473C96F5BE446F8E49FDF53C753C1* (*) (List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Tuple_2_t59E60D9F8F3473C96F5BE446F8E49FDF53C753C1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_4);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_5, NULL);
		V_1 = L_6;
		// if (value < num)
		int32_t L_7 = ___1_value;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0021;
		}
	}
	{
		// return i;
		int32_t L_9 = V_0;
		return L_9;
	}

IL_0021:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_11 = V_0;
		List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F* L_12 = ___0_list;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = ((  int32_t (*) (List_1_t24BFF4E1FF8C41EE3B715BCA2539A3D83AC15A4F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_12, il2cpp_rgctx_method(method->rgctx_data, 5));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		// return 0;
		return 0;
	}
}
// System.Int32 LootCrateRewards/Slot::GetRewardIndex<System.Object,System.Object>(System.Collections.Generic.List`1<Tuple`2<T1,T2>>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Slot_GetRewardIndex_TisRuntimeObject_TisRuntimeObject_m3AA3392CCBA0B94AAC92926200D21E401207FB0B_gshared (Slot_t6D7075E2EC5ACACD82BBB080260D408BFE52D305* __this, List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD* ___0_list, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// int num = Convert.ToInt32(list[i].Item2);
		List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD* L_0 = ___0_list;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Tuple_2_t9A9133B09D0169DACED4F3B7A0A6DBADC329CF58* L_2;
		L_2 = ((  Tuple_2_t9A9133B09D0169DACED4F3B7A0A6DBADC329CF58* (*) (List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Tuple_2_t9A9133B09D0169DACED4F3B7A0A6DBADC329CF58*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Convert_ToInt32_m9FEA65DB96264479B5268014F10754787382D297(L_3, NULL);
		V_1 = L_4;
		// if (value < num)
		int32_t L_5 = ___1_value;
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0021;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0021:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_9 = V_0;
		List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD* L_10 = ___0_list;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ((  int32_t (*) (List_1_t4B595CDB8C6C99639F74B6D44F4CE55BB5EC01CD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_10, il2cpp_rgctx_method(method->rgctx_data, 5));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// return 0;
		return 0;
	}
}
// System.Boolean Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::<EqualsIgnoringTupleUnderlyingType>g__areEqual|21_0<System.Boolean>(System.Collections.Immutable.ImmutableArray`1<T>,System.Collections.Immutable.ImmutableArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TupleExtraData_U3CEqualsIgnoringTupleUnderlyingTypeU3Eg__areEqualU7C21_0_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8F86F37EAA4A1A0F0E74BE1AD168C212594A18EC_gshared (ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025 ___0_one, ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025 ___1_other, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = ImmutableArray_1_get_IsDefault_m2A66F229297AA37E6208A7F828EC63EE61D6189E((&___0_one), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_1;
		L_1 = ImmutableArray_1_get_IsDefault_m2A66F229297AA37E6208A7F828EC63EE61D6189E((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_2;
		L_2 = ImmutableArray_1_get_IsDefault_m2A66F229297AA37E6208A7F828EC63EE61D6189E((&___0_one), il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_3;
		L_3 = ImmutableArray_1_get_IsDefault_m2A66F229297AA37E6208A7F828EC63EE61D6189E((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025 L_4 = ___0_one;
		ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025 L_5 = ___1_other;
		bool L_6;
		L_6 = ((  bool (*) (ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025, ImmutableArray_1_tDD7906C65F2420D1422130051B2D96CE1FF44025, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_6;
	}
}
// System.Boolean Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::<EqualsIgnoringTupleUnderlyingType>g__areEqual|21_0<System.Object>(System.Collections.Immutable.ImmutableArray`1<T>,System.Collections.Immutable.ImmutableArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TupleExtraData_U3CEqualsIgnoringTupleUnderlyingTypeU3Eg__areEqualU7C21_0_TisRuntimeObject_m4F704B86AD41024151C4811902658A7EEBF7EFBD_gshared (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 ___0_one, ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 ___1_other, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = ImmutableArray_1_get_IsDefault_m27C12A911E603D55B887C0FEEA307BA649B96391((&___0_one), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_1;
		L_1 = ImmutableArray_1_get_IsDefault_m27C12A911E603D55B887C0FEEA307BA649B96391((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_2;
		L_2 = ImmutableArray_1_get_IsDefault_m27C12A911E603D55B887C0FEEA307BA649B96391((&___0_one), il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_3;
		L_3 = ImmutableArray_1_get_IsDefault_m27C12A911E603D55B887C0FEEA307BA649B96391((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 L_4 = ___0_one;
		ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 L_5 = ___1_other;
		bool L_6;
		L_6 = ((  bool (*) (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2, ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_6;
	}
}
// TMember Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol/TupleExtraData::GetTupleMemberSymbolForUnderlyingMember<System.Object>(TMember)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TupleExtraData_GetTupleMemberSymbolForUnderlyingMember_TisRuntimeObject_m166224875EE26BDBC87624DAC709181B03F1DED4_gshared (TupleExtraData_tBC6A5DF4097B0B6815A2DE8811E94EAE82088FC3* __this, RuntimeObject* ___0_underlyingMemberOpt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallDictionary_2_TryGetValue_mAF73E0191478D73919249734137D592EC78CA796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TupleElementFieldSymbol_tAE7F7540F5DC2ED5F3A39EFE5622CAA07BC14A78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* V_0 = NULL;
	TupleElementFieldSymbol_tAE7F7540F5DC2ED5F3A39EFE5622CAA07BC14A78* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___0_underlyingMemberOpt;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_2;
		return L_1;
	}

IL_0012:
	{
		RuntimeObject* L_2 = ___0_underlyingMemberOpt;
		NullCheck((Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E*)L_2);
		Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* L_3;
		L_3 = Symbol_get_OriginalDefinition_m255A2A995B396C130D7AC757E075F210DA97CC02((Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E*)L_2, NULL);
		V_0 = L_3;
		Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* L_4 = V_0;
		V_1 = ((TupleElementFieldSymbol_tAE7F7540F5DC2ED5F3A39EFE5622CAA07BC14A78*)IsInstClass((RuntimeObject*)L_4, TupleElementFieldSymbol_tAE7F7540F5DC2ED5F3A39EFE5622CAA07BC14A78_il2cpp_TypeInfo_var));
		TupleElementFieldSymbol_tAE7F7540F5DC2ED5F3A39EFE5622CAA07BC14A78* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		TupleElementFieldSymbol_tAE7F7540F5DC2ED5F3A39EFE5622CAA07BC14A78* L_6 = V_1;
		NullCheck((WrappedFieldSymbol_t3D19B7BAA9A16521812F943CBFAE2128A2905A99*)L_6);
		FieldSymbol_tCCD061C1EA8C6911B32F56786D491A69DA8F40ED* L_7;
		L_7 = WrappedFieldSymbol_get_UnderlyingField_mDDF74B5CF1B10A26CE142DFAB6836F2F3074235B_inline((WrappedFieldSymbol_t3D19B7BAA9A16521812F943CBFAE2128A2905A99*)L_6, NULL);
		V_0 = (Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E*)L_7;
	}

IL_002f:
	{
		Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* L_8 = V_0;
		NullCheck(L_8);
		NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* L_9;
		L_9 = VirtualFuncInvoker0< NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* >::Invoke(23 /* Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol Microsoft.CodeAnalysis.CSharp.Symbol::get_ContainingType() */, L_8);
		NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* L_10;
		L_10 = TupleExtraData_get_TupleUnderlyingType_mDF597F9D7F9520AD5DF934343002144770335B77_inline(__this, NULL);
		NullCheck(L_10);
		NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* L_11;
		L_11 = VirtualFuncInvoker0< NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* >::Invoke(189 /* Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol Microsoft.CodeAnalysis.CSharp.Symbols.NamedTypeSymbol::get_OriginalDefinition() */, L_10);
		il2cpp_codegen_runtime_class_init_inline(TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = TypeSymbol_Equals_mB40DE1C67369B2053CA71025D3A6009D736EC879((TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC*)L_9, (TypeSymbol_tB427B1E72DBA60931033168EF52798854569B1AC*)L_11, (int32_t)0, NULL);
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		SmallDictionary_2_t61F20CBCA1E44A9F1E4240C34CDCF014BE5AB464* L_13;
		L_13 = TupleExtraData_get_UnderlyingDefinitionToMemberMap_m98CD03E52AF94B02A1EB225B119FBB2F95BA8A98(__this, NULL);
		Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* L_14 = V_0;
		NullCheck(L_13);
		bool L_15;
		L_15 = SmallDictionary_2_TryGetValue_mAF73E0191478D73919249734137D592EC78CA796(L_13, L_14, (&V_3), SmallDictionary_2_TryGetValue_mAF73E0191478D73919249734137D592EC78CA796_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E* L_16 = V_3;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_005f:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_17 = V_2;
		return L_17;
	}
}
// System.Void Microsoft.CodeAnalysis.CSharp.NullableWalker/LocalState::ForEach<System.Object>(System.Action`2<System.Int32,TArg>,TArg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalState_ForEach_TisRuntimeObject_m7CAD638FCF9D1EE2693A209353564FF39C9235ED_gshared (LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D* __this, Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* ___0_action, RuntimeObject* ___1_arg, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Boxed_tAF4CD55E5EFF7951DA251278D531CD660CFA0E91* G_B2_0 = NULL;
	Boxed_tAF4CD55E5EFF7951DA251278D531CD660CFA0E91* G_B1_0 = NULL;
	{
		Boxed_tAF4CD55E5EFF7951DA251278D531CD660CFA0E91* L_0 = __this->____container_1;
		Boxed_tAF4CD55E5EFF7951DA251278D531CD660CFA0E91* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0018;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D* L_2 = (LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D*)(&G_B2_0->___Value_0);
		Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* L_3 = ___0_action;
		RuntimeObject* L_4 = ___1_arg;
		LocalState_ForEach_TisRuntimeObject_m7CAD638FCF9D1EE2693A209353564FF39C9235ED(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0018:
	{
		V_0 = 1;
		goto IL_0033;
	}

IL_001c:
	{
		Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* L_5 = ___0_action;
		int32_t L_6 = __this->___Id_0;
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Variables_ConstructSlot_m18859764D1BF9A34C33BE2CFE2E7CB92AF49909D(L_6, L_7, NULL);
		RuntimeObject* L_9 = ___1_arg;
		NullCheck(L_5);
		((  void (*) (Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = LocalState_get_Capacity_m0416F6861F0D5AAF44565C1315E5DC3DD53C2A6A(__this, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void LocalState_ForEach_TisRuntimeObject_m7CAD638FCF9D1EE2693A209353564FF39C9235ED_AdjustorThunk (RuntimeObject* __this, Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* ___0_action, RuntimeObject* ___1_arg, const RuntimeMethod* method)
{
	LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalState_t00AC9A1A4F2BC5C51C9DAD5E8DEB7EAB5770608D*>(__this + _offset);
	LocalState_ForEach_TisRuntimeObject_m7CAD638FCF9D1EE2693A209353564FF39C9235ED(_thisAdjusted, ___0_action, ___1_arg, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
// System.Void Microsoft.CodeAnalysis.CSharp.SpillSequenceSpiller/BoundSpillSequenceBuilder::IncludeAndFree<System.Object>(Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<T>&,Microsoft.CodeAnalysis.PooledObjects.ArrayBuilder`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundSpillSequenceBuilder_IncludeAndFree_TisRuntimeObject_mF53903AA71AABB3891F52B72DF90E7A1BBD6F6EF_gshared (ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156** ___0_left, ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156** ___1_right, const RuntimeMethod* method) 
{
	{
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156** L_0 = ___1_right;
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156* L_1 = *((ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156**)L_0);
		if (L_1)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156** L_2 = ___0_left;
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156* L_3 = *((ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156**)L_2);
		if (L_3)
		{
			goto IL_000e;
		}
	}
	{
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156** L_4 = ___0_left;
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156** L_5 = ___1_right;
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156* L_6 = *((ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156**)L_5);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		return;
	}

IL_000e:
	{
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156** L_7 = ___0_left;
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156* L_8 = *((ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156**)L_7);
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156** L_9 = ___1_right;
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156* L_10 = *((ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156**)L_9);
		NullCheck(L_8);
		((  void (*) (ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156*, ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156** L_11 = ___1_right;
		ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156* L_12 = *((ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156**)L_11);
		NullCheck(L_12);
		((  void (*) (ArrayBuilder_1_tAF07BCE22CDC7BED2B863C89B2AF7AEFB7D2B156*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// System.Void Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::DeclareLocals<System.Object>(Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/Scope,System.Collections.Immutable.ImmutableArray`1<TSymbol>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTreeBuilder_DeclareLocals_TisRuntimeObject_mA02EAEBCE17DF9B9E64C3DDD26B10E2FA4A0FB8F_gshared (ScopeTreeBuilder_tF044EAD7FEAFBBDCF4064D6859D8271733838164* __this, Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0* ___0_scope, ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 ___1_locals, bool ___2_declareAsFree, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmallDictionary_2_Add_m9615F423DFC9CFD6D82D20CD21487D52A90787DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F L_0;
		L_0 = ImmutableArray_1_GetEnumerator_mF1D50F57167F1E371A46A1036C5C4C792E1D96D5_inline((&___1_locals), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		goto IL_0027;
	}

IL_000a:
	{
		RuntimeObject* L_1;
		L_1 = Enumerator_get_Current_m72FE648FF889091793EEC5D4BD0A1C30011D3DAD((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_1;
		bool L_2 = ___2_declareAsFree;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		SmallDictionary_2_tE87779D5BCF23473F3D2AE246FDCE304BDDD8A9E* L_3 = __this->____localToScope_4;
		RuntimeObject* L_4 = V_1;
		Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0* L_5 = ___0_scope;
		NullCheck(L_3);
		SmallDictionary_2_Add_m9615F423DFC9CFD6D82D20CD21487D52A90787DB(L_3, (Symbol_tC384D2191A6696E7159DF1301044E5BB7DF5B05E*)L_4, L_5, SmallDictionary_2_Add_m9615F423DFC9CFD6D82D20CD21487D52A90787DB_RuntimeMethod_var);
	}

IL_0027:
	{
		bool L_6;
		L_6 = Enumerator_MoveNext_mDCE5861379C3C15F9459D42ACCC5FD67BA0BEAB4((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		if (L_6)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CodeAnalysis.CSharp.ClosureConversion/Analysis/ScopeTreeBuilder::PushOrReuseScope<System.Object>(Microsoft.CodeAnalysis.CSharp.BoundNode,System.Collections.Immutable.ImmutableArray`1<TSymbol>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeTreeBuilder_PushOrReuseScope_TisRuntimeObject_mF74EF4C51C2CE64B1848DE76E1B94577AA866C75_gshared (ScopeTreeBuilder_tF044EAD7FEAFBBDCF4064D6859D8271733838164* __this, BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED* ___0_node, ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 ___1_locals, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0;
		L_0 = ImmutableArray_1_get_IsEmpty_m89FFF230A0A1C2236C65AB8BD6E7479F948E570D((&___1_locals), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0* L_1 = __this->____currentScope_1;
		NullCheck(L_1);
		BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED* L_2 = L_1->___BoundNode_4;
		BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED* L_3 = ___0_node;
		if ((((RuntimeObject*)(BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED*)L_2) == ((RuntimeObject*)(BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED*)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		BoundNode_t832FF6C9A2613FB840CA51C5A09ED72FCD8789ED* L_4 = ___0_node;
		ScopeTreeBuilder_CreateAndPushScope_m1702FC39DF9C5AB047DF8A70F439645164060F54(__this, L_4, NULL);
	}

IL_001e:
	{
		Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0* L_5 = __this->____currentScope_1;
		ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 L_6 = ___1_locals;
		((  void (*) (ScopeTreeBuilder_tF044EAD7FEAFBBDCF4064D6859D8271733838164*, Scope_t3BA89455C708C45F5AC6E6A777F267EB2D1DFBD0*, ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_5, L_6, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<T> INAddonInterface/AddonPackageItem/SettingsGroup::GenerateItemWithInputField<Innovation.HexColor>(INAddonInterface/AddonPackageItem/SettingsGroup,System.String,System.Reflection.PropertyInfo,Parsable/TryParser`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A* SettingsGroup_GenerateItemWithInputField_TisHexColor_t8E60DC9B1FD0624FA9B082CE2D801A7F0C0E40C4_mFBBC037E8FAAF97E767D0AD9CAEFA7C14CDB1237_gshared (SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* __this, SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* ___0_group, String_t* ___1_name, PropertyInfo_t* ___2_property, TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB* ___3_converter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBBED8C6A7DEEDE4E2B90536516BBDEE1190F7482_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A* V_1 = NULL;
	{
		// if (converter == null)
		TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB* L_0 = ___3_converter;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// converter = Parsable.GetTryParser<T>();
		TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB* L_1;
		L_1 = ((  TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		___3_converter = L_1;
	}

IL_000b:
	{
		// if (converter == null)
		TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB* L_2 = ___3_converter;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A*)NULL;
	}

IL_0011:
	{
		// GameObject gameObject = GenerateItem(group, name);
		SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* L_3 = ___0_group;
		String_t* L_4 = ___1_name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = SettingsGroup_GenerateItem_m735D24B06DE049965AE78C82FF1E1E325A49928C(__this, L_3, L_4, NULL);
		V_0 = L_5;
		// SettingsItemWithInputField<T> settingsItemWithInputField = new SettingsItemWithInputField<T>(group, gameObject, converter);
		SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* L_6 = ___0_group;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB* L_8 = ___3_converter;
		SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A* L_9 = (SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_9);
		((  void (*) (SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A*, SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, TryParser_1_tA5674FB98239596150EEE3E0FE871970A3DDE2FB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_9, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_9;
		// settingsItemWithInputField.Name.text = name;
		SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A* L_10 = V_1;
		NullCheck((SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885*)L_10);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11;
		L_11 = SettingsItem_get_Name_mB1F696A4C685760143ECDB9462DCA43841F52065_inline((SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885*)L_10, NULL);
		String_t* L_12 = ___1_name;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
		// settingsItemWithInputField.Bind(property);
		SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A* L_13 = V_1;
		PropertyInfo_t* L_14 = ___2_property;
		NullCheck((SettingsItem_1_t1F2D01923048EE17D65C0F41509B36DFAB5C6BCE*)L_13);
		((  void (*) (SettingsItem_1_t1F2D01923048EE17D65C0F41509B36DFAB5C6BCE*, PropertyInfo_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((SettingsItem_1_t1F2D01923048EE17D65C0F41509B36DFAB5C6BCE*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		// group.Items.Add(settingsItemWithInputField);
		SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* L_15 = ___0_group;
		NullCheck(L_15);
		List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0* L_16;
		L_16 = SettingsGroup_get_Items_mB55A5B41AD2C0DB972945983212AC61886CFC68B_inline(L_15, NULL);
		SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A* L_17 = V_1;
		NullCheck(L_16);
		List_1_Add_mBBED8C6A7DEEDE4E2B90536516BBDEE1190F7482_inline(L_16, (SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885*)L_17, List_1_Add_mBBED8C6A7DEEDE4E2B90536516BBDEE1190F7482_RuntimeMethod_var);
		// return settingsItemWithInputField;
		SettingsItemWithInputField_1_tB976076915957D880E0EB3AFA2A68AE82418386A* L_18 = V_1;
		return L_18;
	}
}
// INAddonInterface/AddonPackageItem/SettingsItemWithInputField`1<T> INAddonInterface/AddonPackageItem/SettingsGroup::GenerateItemWithInputField<System.Object>(INAddonInterface/AddonPackageItem/SettingsGroup,System.String,System.Reflection.PropertyInfo,Parsable/TryParser`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0* SettingsGroup_GenerateItemWithInputField_TisRuntimeObject_mDA15C6F61A68B038CDC6D3A995FFD4BB175642DD_gshared (SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* __this, SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* ___0_group, String_t* ___1_name, PropertyInfo_t* ___2_property, TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709* ___3_converter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBBED8C6A7DEEDE4E2B90536516BBDEE1190F7482_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0* V_1 = NULL;
	{
		// if (converter == null)
		TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709* L_0 = ___3_converter;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// converter = Parsable.GetTryParser<T>();
		TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709* L_1;
		L_1 = ((  TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		___3_converter = L_1;
	}

IL_000b:
	{
		// if (converter == null)
		TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709* L_2 = ___3_converter;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0*)NULL;
	}

IL_0011:
	{
		// GameObject gameObject = GenerateItem(group, name);
		SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* L_3 = ___0_group;
		String_t* L_4 = ___1_name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = SettingsGroup_GenerateItem_m735D24B06DE049965AE78C82FF1E1E325A49928C(__this, L_3, L_4, NULL);
		V_0 = L_5;
		// SettingsItemWithInputField<T> settingsItemWithInputField = new SettingsItemWithInputField<T>(group, gameObject, converter);
		SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* L_6 = ___0_group;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709* L_8 = ___3_converter;
		SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0* L_9 = (SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_9);
		((  void (*) (SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0*, SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, TryParser_1_t558A01A8595F9F19DA38316DAA06A432D5FF0709*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_9, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_9;
		// settingsItemWithInputField.Name.text = name;
		SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0* L_10 = V_1;
		NullCheck((SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885*)L_10);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11;
		L_11 = SettingsItem_get_Name_mB1F696A4C685760143ECDB9462DCA43841F52065_inline((SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885*)L_10, NULL);
		String_t* L_12 = ___1_name;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
		// settingsItemWithInputField.Bind(property);
		SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0* L_13 = V_1;
		PropertyInfo_t* L_14 = ___2_property;
		NullCheck((SettingsItem_1_tB986E59B98972877462EB56E8B59A2EECAEBC699*)L_13);
		((  void (*) (SettingsItem_1_tB986E59B98972877462EB56E8B59A2EECAEBC699*, PropertyInfo_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((SettingsItem_1_tB986E59B98972877462EB56E8B59A2EECAEBC699*)L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		// group.Items.Add(settingsItemWithInputField);
		SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* L_15 = ___0_group;
		NullCheck(L_15);
		List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0* L_16;
		L_16 = SettingsGroup_get_Items_mB55A5B41AD2C0DB972945983212AC61886CFC68B_inline(L_15, NULL);
		SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0* L_17 = V_1;
		NullCheck(L_16);
		List_1_Add_mBBED8C6A7DEEDE4E2B90536516BBDEE1190F7482_inline(L_16, (SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885*)L_17, List_1_Add_mBBED8C6A7DEEDE4E2B90536516BBDEE1190F7482_RuntimeMethod_var);
		// return settingsItemWithInputField;
		SettingsItemWithInputField_1_t3A41D997896A162FC136B2097BCDAE7F52E57DE0* L_18 = V_1;
		return L_18;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldSymbol_tCCD061C1EA8C6911B32F56786D491A69DA8F40ED* WrappedFieldSymbol_get_UnderlyingField_mDDF74B5CF1B10A26CE142DFAB6836F2F3074235B_inline (WrappedFieldSymbol_t3D19B7BAA9A16521812F943CBFAE2128A2905A99* __this, const RuntimeMethod* method) 
{
	{
		FieldSymbol_tCCD061C1EA8C6911B32F56786D491A69DA8F40ED* L_0 = __this->____underlyingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* TupleExtraData_get_TupleUnderlyingType_mDF597F9D7F9520AD5DF934343002144770335B77_inline (TupleExtraData_tBC6A5DF4097B0B6815A2DE8811E94EAE82088FC3* __this, const RuntimeMethod* method) 
{
	{
		NamedTypeSymbol_t24E5A3D409F22E863BE43AADB8B319C6DC612304* L_0 = __this->___U3CTupleUnderlyingTypeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* SettingsItem_get_Name_mB1F696A4C685760143ECDB9462DCA43841F52065_inline (SettingsItem_t90DE4BFE98A2F2199A0B533A3219F26D84792885* __this, const RuntimeMethod* method) 
{
	{
		// public Text Name => m_name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_name_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0* SettingsGroup_get_Items_mB55A5B41AD2C0DB972945983212AC61886CFC68B_inline (SettingsGroup_t62E80578C004F1A1084615CFCBDEE402D0B37172* __this, const RuntimeMethod* method) 
{
	{
		// public List<SettingsItem> Items => m_items;
		List_1_t4A548680EB0C144EE8A44C78DA581AE9BAA48FA0* L_0 = __this->___m_items_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F ImmutableArray_1_GetEnumerator_mF1D50F57167F1E371A46A1036C5C4C792E1D96D5_gshared_inline (ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2* __this, const RuntimeMethod* method) 
{
	ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 L_0 = (*(ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2*)__this);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ImmutableArray_1_ThrowNullRefIfNotInitialized_m5C925DC0B34DC79B01AB8F4828D96E395FD94E54((&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ImmutableArray_1_t6A80142ED3723910D4D1C2AFC380D443BB1C1CC2 L_1 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1.___array_1;
		Enumerator_t1AB1E754BEC3ACF09DB236AC474D567A4F3EE00F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Enumerator__ctor_mA3904190A1F7BE933692A6C39B80C35BE7DB8827((&L_3), L_2, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 50));
		return L_3;
	}
}
