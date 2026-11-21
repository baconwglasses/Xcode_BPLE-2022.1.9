#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// NLayer.Decoder.FrameBase
struct FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057;
// NLayer.Decoder.ID3Frame
struct ID3Frame_t1BF4A6A2EA8AD0CDE816EE21377E223647345079;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// NLayer.Decoder.MpegFrame
struct MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B;
// NLayer.Decoder.MpegStreamReader
struct MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD;
// NLayer.Decoder.RiffHeaderFrame
struct RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// NLayer.Decoder.VBRInfo
struct VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NLayer.Decoder.MpegStreamReader/ReadBuffer
struct ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral808DF11042257F134CE34DF232CD9523F589E554;
IL2CPP_EXTERN_C const RuntimeMethod* ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF8CC10BE8CCADED346ECAD8CE599494060818979  : public RuntimeObject
{
};

// NLayer.Decoder.FrameBase
struct FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057  : public RuntimeObject
{
	// System.Int64 NLayer.Decoder.FrameBase::<Offset>k__BackingField
	int64_t ___U3COffsetU3Ek__BackingField_1;
	// System.Int32 NLayer.Decoder.FrameBase::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_2;
	// NLayer.Decoder.MpegStreamReader NLayer.Decoder.FrameBase::_reader
	MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ____reader_3;
	// System.Byte[] NLayer.Decoder.FrameBase::_savedBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____savedBuffer_4;
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

// NLayer.Decoder.MpegStreamReader
struct MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD  : public RuntimeObject
{
	// NLayer.Decoder.ID3Frame NLayer.Decoder.MpegStreamReader::_id3Frame
	ID3Frame_t1BF4A6A2EA8AD0CDE816EE21377E223647345079* ____id3Frame_0;
	// NLayer.Decoder.ID3Frame NLayer.Decoder.MpegStreamReader::_id3v1Frame
	ID3Frame_t1BF4A6A2EA8AD0CDE816EE21377E223647345079* ____id3v1Frame_1;
	// NLayer.Decoder.RiffHeaderFrame NLayer.Decoder.MpegStreamReader::_riffHeaderFrame
	RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* ____riffHeaderFrame_2;
	// NLayer.Decoder.VBRInfo NLayer.Decoder.MpegStreamReader::_vbrInfo
	VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* ____vbrInfo_3;
	// NLayer.Decoder.MpegFrame NLayer.Decoder.MpegStreamReader::_first
	MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B* ____first_4;
	// NLayer.Decoder.MpegFrame NLayer.Decoder.MpegStreamReader::_current
	MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B* ____current_5;
	// NLayer.Decoder.MpegFrame NLayer.Decoder.MpegStreamReader::_last
	MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B* ____last_6;
	// NLayer.Decoder.MpegFrame NLayer.Decoder.MpegStreamReader::_lastFree
	MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B* ____lastFree_7;
	// System.Int64 NLayer.Decoder.MpegStreamReader::_readOffset
	int64_t ____readOffset_8;
	// System.Int64 NLayer.Decoder.MpegStreamReader::_eofOffset
	int64_t ____eofOffset_9;
	// System.IO.Stream NLayer.Decoder.MpegStreamReader::_source
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____source_10;
	// System.Boolean NLayer.Decoder.MpegStreamReader::_canSeek
	bool ____canSeek_11;
	// System.Boolean NLayer.Decoder.MpegStreamReader::_endFound
	bool ____endFound_12;
	// System.Boolean NLayer.Decoder.MpegStreamReader::_mixedFrameSize
	bool ____mixedFrameSize_13;
	// System.Object NLayer.Decoder.MpegStreamReader::_readLock
	RuntimeObject* ____readLock_14;
	// System.Object NLayer.Decoder.MpegStreamReader::_frameLock
	RuntimeObject* ____frameLock_15;
	// NLayer.Decoder.MpegStreamReader/ReadBuffer NLayer.Decoder.MpegStreamReader::_readBuf
	ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* ____readBuf_16;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// NLayer.Decoder.VBRInfo
struct VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD  : public RuntimeObject
{
	// System.Int32 NLayer.Decoder.VBRInfo::<SampleCount>k__BackingField
	int32_t ___U3CSampleCountU3Ek__BackingField_0;
	// System.Int32 NLayer.Decoder.VBRInfo::<SampleRate>k__BackingField
	int32_t ___U3CSampleRateU3Ek__BackingField_1;
	// System.Int32 NLayer.Decoder.VBRInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 NLayer.Decoder.VBRInfo::<VBRFrames>k__BackingField
	int32_t ___U3CVBRFramesU3Ek__BackingField_3;
	// System.Int32 NLayer.Decoder.VBRInfo::<VBRBytes>k__BackingField
	int32_t ___U3CVBRBytesU3Ek__BackingField_4;
	// System.Int32 NLayer.Decoder.VBRInfo::<VBRQuality>k__BackingField
	int32_t ___U3CVBRQualityU3Ek__BackingField_5;
	// System.Int32 NLayer.Decoder.VBRInfo::<VBRDelay>k__BackingField
	int32_t ___U3CVBRDelayU3Ek__BackingField_6;
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

// NLayer.Decoder.MpegStreamReader/ReadBuffer
struct ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F  : public RuntimeObject
{
	// System.Byte[] NLayer.Decoder.MpegStreamReader/ReadBuffer::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_0;
	// System.Int64 NLayer.Decoder.MpegStreamReader/ReadBuffer::BaseOffset
	int64_t ___BaseOffset_1;
	// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::End
	int32_t ___End_2;
	// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::DiscardCount
	int32_t ___DiscardCount_3;
	// System.Object NLayer.Decoder.MpegStreamReader/ReadBuffer::_localLock
	RuntimeObject* ____localLock_4;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// NLayer.Decoder.RiffHeaderFrame
struct RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2  : public FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022
struct __StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305__padding[1022];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_tD7AD5167A937B4CC6664E8761D6C23C221E7E61F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tD7AD5167A937B4CC6664E8761D6C23C221E7E61F__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108
struct __StaticArrayInitTypeSizeU3D108_tC79E91896879675BEC0AE66FB4CDFEAFB22F03C3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D108_tC79E91896879675BEC0AE66FB4CDFEAFB22F03C3__padding[108];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t598C60A37F2307426C210419DD1DFE08083A052E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t598C60A37F2307426C210419DD1DFE08083A052E__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tB5711A21B80DE30D3B410A0644918F388AADC947 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tB5711A21B80DE30D3B410A0644918F388AADC947__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124
struct __StaticArrayInitTypeSizeU3D124_t64F09757B114DED1D922B389438AFC0A68009CC0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_t64F09757B114DED1D922B389438AFC0A68009CC0__padding[124];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct __StaticArrayInitTypeSizeU3D14_t7B45CE1089AA8F737A994CC1E11346139913752F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t7B45CE1089AA8F737A994CC1E11346139913752F__padding[14];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=140
struct __StaticArrayInitTypeSizeU3D140_t6B0AAF2225AEC9E5723E29B960C5CBBD340920A1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D140_t6B0AAF2225AEC9E5723E29B960C5CBBD340920A1__padding[140];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142
struct __StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6__padding[142];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct __StaticArrayInitTypeSizeU3D2048_t46BED26416D167155DF964416E19F0D3CBB37C27 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t46BED26416D167155DF964416E19F0D3CBB37C27__padding[2048];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254
struct __StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C__padding[254];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t9964BE99285AE4D9552134EEE3B499A8A14CA85E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t9964BE99285AE4D9552134EEE3B499A8A14CA85E__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t90A51CCAF5D6AEB2C9D3ECC30717F37D3F1B85BD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t90A51CCAF5D6AEB2C9D3ECC30717F37D3F1B85BD__padding[28];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=34
struct __StaticArrayInitTypeSizeU3D34_tD35C3F7BB14FA0508DF4F2FDD75BAF75923ACAE1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D34_tD35C3F7BB14FA0508DF4F2FDD75BAF75923ACAE1__padding[34];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_tB698999CCEDB4F85BD29AF1331C779D1151F6653 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tB698999CCEDB4F85BD29AF1331C779D1151F6653__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_t7768010C7539F6496FA0D1C8F1D14493F391BE42 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t7768010C7539F6496FA0D1C8F1D14493F391BE42__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB__padding[56];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60
struct __StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9__padding[60];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62
struct __StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6__padding[62];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t6463BC76229C5170103BD2357054AD368E097036 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t6463BC76229C5170103BD2357054AD368E097036__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88
struct __StaticArrayInitTypeSizeU3D88_tDC1FF3C0D3646C9680E3C8CEE8BF218D64C1A973 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D88_tDC1FF3C0D3646C9680E3C8CEE8BF218D64C1A973__padding[88];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92
struct __StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808__padding[92];
	};
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF8CC10BE8CCADED346ECAD8CE599494060818979_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::02E68C9160BF270CAF19E18D3A77BC2EAA90EFCB3ECA3C454B58CD5BBA5FF7ED
	__StaticArrayInitTypeSizeU3D256_t9964BE99285AE4D9552134EEE3B499A8A14CA85E ___02E68C9160BF270CAF19E18D3A77BC2EAA90EFCB3ECA3C454B58CD5BBA5FF7ED_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::02F0B712A35696878D8AA84552F315C37A8E11F818CCB2962924A59C4DCB3925
	__StaticArrayInitTypeSizeU3D256_t9964BE99285AE4D9552134EEE3B499A8A14CA85E ___02F0B712A35696878D8AA84552F315C37A8E11F818CCB2962924A59C4DCB3925_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::047D891CAC8D4F883998ACEFD1EB63F6A679046FFD19EC1276A057F847EE37F6
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___047D891CAC8D4F883998ACEFD1EB63F6A679046FFD19EC1276A057F847EE37F6_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::0513AF8C867978A25C0E08A1C118931896FFB0B1BE6B6BEACF1B61F508D3DFBC
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___0513AF8C867978A25C0E08A1C118931896FFB0B1BE6B6BEACF1B61F508D3DFBC_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022 <PrivateImplementationDetails>::05987B46B51404690A12FD6F7F163ACAFE9466DD444EC9559BB46DDE55A9EFB4
	__StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305 ___05987B46B51404690A12FD6F7F163ACAFE9466DD444EC9559BB46DDE55A9EFB4_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=34 <PrivateImplementationDetails>::06C1AF7C60B3698143CB31ACBBB20B65B67ED72C834BCAB5D086BF2BFBF1E36D
	__StaticArrayInitTypeSizeU3D34_tD35C3F7BB14FA0508DF4F2FDD75BAF75923ACAE1 ___06C1AF7C60B3698143CB31ACBBB20B65B67ED72C834BCAB5D086BF2BFBF1E36D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::0B901CF4BE6626004DA4959A745DF465761EABE9CEC3B55FC02C16719CC38A13
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___0B901CF4BE6626004DA4959A745DF465761EABE9CEC3B55FC02C16719CC38A13_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::13BE6783CC652C89CC0161446DBD67966CAC410DEA4DE4279FC767A259EFD546
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___13BE6783CC652C89CC0161446DBD67966CAC410DEA4DE4279FC767A259EFD546_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::1547A2CE9807E9157210B89E1A3F1105D669382C5F32C6C176E4B5C2A323B9B8
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___1547A2CE9807E9157210B89E1A3F1105D669382C5F32C6C176E4B5C2A323B9B8_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142 <PrivateImplementationDetails>::17F8F2073C9B72318F1F87D6459BCC8C5D16032A7461829D44BA222631EFABEA
	__StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6 ___17F8F2073C9B72318F1F87D6459BCC8C5D16032A7461829D44BA222631EFABEA_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1B8D49F1227D3FC61644822B9FC00CE70A3B2438A1064323BFBE6A022A26F042
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___1B8D49F1227D3FC61644822B9FC00CE70A3B2438A1064323BFBE6A022A26F042_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::22E5D3D9ABC124EE0214CEF7079F24CFF9BE30FD6AF6BA5BBE15920C57497EA1
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___22E5D3D9ABC124EE0214CEF7079F24CFF9BE30FD6AF6BA5BBE15920C57497EA1_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::2A27401995524696E0F7E2B44BB507554E7692E8BBFAFF15EFE3124BA978DEE1
	__StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 ___2A27401995524696E0F7E2B44BB507554E7692E8BBFAFF15EFE3124BA978DEE1_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142 <PrivateImplementationDetails>::2B82B5A7900EBAEDC4CCA4C45EC35556E61550947DC8E19F29F8163B986C1BEC
	__StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6 ___2B82B5A7900EBAEDC4CCA4C45EC35556E61550947DC8E19F29F8163B986C1BEC_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::2BCE8E19B19AAD97CC510F21B5828CCB319639FA317FB59926A436ED3543F58D
	__StaticArrayInitTypeSizeU3D64_t6463BC76229C5170103BD2357054AD368E097036 ___2BCE8E19B19AAD97CC510F21B5828CCB319639FA317FB59926A436ED3543F58D_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62 <PrivateImplementationDetails>::2D5686A56570F267B679385EFC6844E6DEFF0FADE48178C1BB52C383C8E4CE07
	__StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 ___2D5686A56570F267B679385EFC6844E6DEFF0FADE48178C1BB52C383C8E4CE07_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254 <PrivateImplementationDetails>::2EA8E74AE335DC3376D0365CBA7F3C0C702B7AEC1032D1CCC8CFE467E0C82309
	__StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C ___2EA8E74AE335DC3376D0365CBA7F3C0C702B7AEC1032D1CCC8CFE467E0C82309_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::320B0930454D74130DD5E245B70DA1736A2C1B5E664DD5BB82B490E60F3ECA2A
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___320B0930454D74130DD5E245B70DA1736A2C1B5E664DD5BB82B490E60F3ECA2A_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::353B83F69C8D5180A7E0B2429D4AE21DDBDF230748021DA2A6FB0DF7743D64B4
	__StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 ___353B83F69C8D5180A7E0B2429D4AE21DDBDF230748021DA2A6FB0DF7743D64B4_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::3543AE0E1ED6A92350687219F717764E126E06D4FA179DE5B0CB3E2BDFE4AC9E
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___3543AE0E1ED6A92350687219F717764E126E06D4FA179DE5B0CB3E2BDFE4AC9E_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=140 <PrivateImplementationDetails>::383246DDAFDE325A7FE6A48E9886A449874E46D894ECF706711FBAB32F9535C7
	__StaticArrayInitTypeSizeU3D140_t6B0AAF2225AEC9E5723E29B960C5CBBD340920A1 ___383246DDAFDE325A7FE6A48E9886A449874E46D894ECF706711FBAB32F9535C7_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108 <PrivateImplementationDetails>::38AE8569379CDCDB2A6C629270102FE6686698413F8F373416EFF1BC701EA4F4
	__StaticArrayInitTypeSizeU3D108_tC79E91896879675BEC0AE66FB4CDFEAFB22F03C3 ___38AE8569379CDCDB2A6C629270102FE6686698413F8F373416EFF1BC701EA4F4_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3EDD050356C639DD16815E64CA19652B1B981F1BA2FF76176BB3995FF0DB860D
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___3EDD050356C639DD16815E64CA19652B1B981F1BA2FF76176BB3995FF0DB860D_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::419EB5F371A1171DBE8C085F1BB25D78AA0647C1365608E167054A37BFEAD834
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___419EB5F371A1171DBE8C085F1BB25D78AA0647C1365608E167054A37BFEAD834_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::428C5F72E1D7957EC6C378FF9BAA7FB83451CE1AB2E895592B1A78354D247166
	__StaticArrayInitTypeSizeU3D14_t7B45CE1089AA8F737A994CC1E11346139913752F ___428C5F72E1D7957EC6C378FF9BAA7FB83451CE1AB2E895592B1A78354D247166_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::4349AFFB118BBF3B3C2EAD5440EDE6A9C95BA47926FDA735FD905D0C629B215E
	__StaticArrayInitTypeSizeU3D36_tB698999CCEDB4F85BD29AF1331C779D1151F6653 ___4349AFFB118BBF3B3C2EAD5440EDE6A9C95BA47926FDA735FD905D0C629B215E_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::5CF7BD3F1944E22A14D44389108F5092C7A77217102E21BBDC75DE2C932E35A1
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___5CF7BD3F1944E22A14D44389108F5092C7A77217102E21BBDC75DE2C932E35A1_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::63EAE798E0F8B721F3C34B6F18830379CE6CA3F3CC3768F4872CA68CEBE92658
	__StaticArrayInitTypeSizeU3D36_tB698999CCEDB4F85BD29AF1331C779D1151F6653 ___63EAE798E0F8B721F3C34B6F18830379CE6CA3F3CC3768F4872CA68CEBE92658_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88 <PrivateImplementationDetails>::6547EC5EB178C3DBF6A302152A1FE3BDF747E8E5EB41343EECEA2F45D745E5D1
	__StaticArrayInitTypeSizeU3D88_tDC1FF3C0D3646C9680E3C8CEE8BF218D64C1A973 ___6547EC5EB178C3DBF6A302152A1FE3BDF747E8E5EB41343EECEA2F45D745E5D1_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::65EB192550EBAC509D7417635F61C4A119F08640767ADC58963C979B2FC2DFBF
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___65EB192550EBAC509D7417635F61C4A119F08640767ADC58963C979B2FC2DFBF_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142 <PrivateImplementationDetails>::65EC1E57E423BF3DD3724DFB02638DD5B073EED61476C932B164AF60597B70EF
	__StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6 ___65EC1E57E423BF3DD3724DFB02638DD5B073EED61476C932B164AF60597B70EF_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6810D47101B1F88C982302E36EF8DBDB344EAFDF31E058B2AE9B23522DA15D89
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___6810D47101B1F88C982302E36EF8DBDB344EAFDF31E058B2AE9B23522DA15D89_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::683133215F3906FE49DACDB11CE3F917EF1B439110BF4CE1092DB8F15D087E2F
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___683133215F3906FE49DACDB11CE3F917EF1B439110BF4CE1092DB8F15D087E2F_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::68F20C1D1F9AD9A40A6FF9C3879482F58AED8E4A58995CEB0F83B2575DCFD2BC
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___68F20C1D1F9AD9A40A6FF9C3879482F58AED8E4A58995CEB0F83B2575DCFD2BC_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::70CF9A93794FD166C020BBDF13AE34B6B43B3A2271EC768A35797C135FC62D20
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___70CF9A93794FD166C020BBDF13AE34B6B43B3A2271EC768A35797C135FC62D20_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254 <PrivateImplementationDetails>::7146B16BEAC7D0BCEB80A26369618DAF1A45D90C1DF8953F903A713331EF3DD3
	__StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C ___7146B16BEAC7D0BCEB80A26369618DAF1A45D90C1DF8953F903A713331EF3DD3_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::74F22C7E2DF332AA2DFD397AA6294F674CAE5E61E75DC03B96377FECDDC97D96
	__StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 ___74F22C7E2DF332AA2DFD397AA6294F674CAE5E61E75DC03B96377FECDDC97D96_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::76D8304F4292AF38FA5EF2219367481024685B4ADC53914E62923A4C08F561C6
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___76D8304F4292AF38FA5EF2219367481024685B4ADC53914E62923A4C08F561C6_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::79B6797C01D7827A0E35892156B642BD84A9FA528E603C743515D3822864A051
	__StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653 ___79B6797C01D7827A0E35892156B642BD84A9FA528E603C743515D3822864A051_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7A5DCFD7518F8A0A3FA422FA014FF84FE08070112345B17E00C0FB0AFC6D7461
	__StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653 ___7A5DCFD7518F8A0A3FA422FA014FF84FE08070112345B17E00C0FB0AFC6D7461_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::7AFE6664FF924458ED3CC91DC75DBE7B08131FE42122BBB7BAA6BFF93E64D000
	__StaticArrayInitTypeSizeU3D2048_t46BED26416D167155DF964416E19F0D3CBB37C27 ___7AFE6664FF924458ED3CC91DC75DBE7B08131FE42122BBB7BAA6BFF93E64D000_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::7BAB9A032FE8DEE0D2C5A1AFC5B84CF8BF299AFE8A97401A1FDC9E11B942FDCA
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___7BAB9A032FE8DEE0D2C5A1AFC5B84CF8BF299AFE8A97401A1FDC9E11B942FDCA_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
	__StaticArrayInitTypeSizeU3D12_t598C60A37F2307426C210419DD1DFE08083A052E ___8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62 <PrivateImplementationDetails>::8732ED3565DAF11D26F4148864B2334625B0C524F00F1E8626AB8B8C06D12DB8
	__StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 ___8732ED3565DAF11D26F4148864B2334625B0C524F00F1E8626AB8B8C06D12DB8_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::8A0E648F758E0FC7AFC990F725E75075D192CF76D73C000CFCBAA51C386E06F2
	__StaticArrayInitTypeSizeU3D124_t64F09757B114DED1D922B389438AFC0A68009CC0 ___8A0E648F758E0FC7AFC990F725E75075D192CF76D73C000CFCBAA51C386E06F2_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::8AFE37502A20AE6F0DCB0A21B9F9EAB04082A5059FCFD534EF26EED78E011CBC
	__StaticArrayInitTypeSizeU3D120_tB5711A21B80DE30D3B410A0644918F388AADC947 ___8AFE37502A20AE6F0DCB0A21B9F9EAB04082A5059FCFD534EF26EED78E011CBC_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::8E5B2F52A9B2354302730AB52D6A86D64AB5A320BCF4736D8990F088A5140EA5
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___8E5B2F52A9B2354302730AB52D6A86D64AB5A320BCF4736D8990F088A5140EA5_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::9553D1495E639BA308B6AC59D97F0A9395C15C7F914937F9F701CD86E5DD9784
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___9553D1495E639BA308B6AC59D97F0A9395C15C7F914937F9F701CD86E5DD9784_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254 <PrivateImplementationDetails>::9DC101AA3FA094C0FCEB8337BDF000FCF86A75896FA71C0D39D9D5D188BFF667
	__StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C ___9DC101AA3FA094C0FCEB8337BDF000FCF86A75896FA71C0D39D9D5D188BFF667_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::A0C1B6498476A42A195F612846D5014486CA0BB9EF58BB6004D38A6EA8480C33
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___A0C1B6498476A42A195F612846D5014486CA0BB9EF58BB6004D38A6EA8480C33_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A28E77C3345C5351A69C7393656A759AABE24F2E59F5BFC49A771E190D9C9FCC
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___A28E77C3345C5351A69C7393656A759AABE24F2E59F5BFC49A771E190D9C9FCC_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::AC808BDFC94A2720F9A403E96C598F28C4A82AACBF21E2A1A6347C32A66B6425
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___AC808BDFC94A2720F9A403E96C598F28C4A82AACBF21E2A1A6347C32A66B6425_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::AFA6CF48CCA2A58D1AC3CA787B8C649F8E37C68F94CDBD45D419C94AE4808712
	__StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653 ___AFA6CF48CCA2A58D1AC3CA787B8C649F8E37C68F94CDBD45D419C94AE4808712_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022 <PrivateImplementationDetails>::B0E7F742F5647AF3FF45B50ED12A130F6286579E273D59BA21D8A313286B8B95
	__StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305 ___B0E7F742F5647AF3FF45B50ED12A130F6286579E273D59BA21D8A313286B8B95_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B107577D43B15DF28D27533ADF012E72BD63868C2A2E688AC15978DC38CD5677
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___B107577D43B15DF28D27533ADF012E72BD63868C2A2E688AC15978DC38CD5677_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::B10D5342782BFD3820C0FFBD8DDCDF80BAA0ED5F0DF5746D2EA885110239AC7A
	__StaticArrayInitTypeSizeU3D64_t6463BC76229C5170103BD2357054AD368E097036 ___B10D5342782BFD3820C0FFBD8DDCDF80BAA0ED5F0DF5746D2EA885110239AC7A_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::B4FF1E1977F7DF3ECF0E3E3C7134F3FE312370173595B129138257545F30071F
	__StaticArrayInitTypeSizeU3D1024_tD7AD5167A937B4CC6664E8761D6C23C221E7E61F ___B4FF1E1977F7DF3ECF0E3E3C7134F3FE312370173595B129138257545F30071F_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::B88B0C2C022A8D5276AD2B9ECD0F2F33AFF143DBAEE7E24B81DE54D8A6F260A3
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___B88B0C2C022A8D5276AD2B9ECD0F2F33AFF143DBAEE7E24B81DE54D8A6F260A3_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B9C5D4C45600219530B355BB1786AA4E282347901A9E3BF35DC8EE98E1307DFB
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___B9C5D4C45600219530B355BB1786AA4E282347901A9E3BF35DC8EE98E1307DFB_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62 <PrivateImplementationDetails>::BA2DA31BD8D453F7C92A7A4AA09DB97AD299C21244057E3905E2D0E7DC3A1E06
	__StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 ___BA2DA31BD8D453F7C92A7A4AA09DB97AD299C21244057E3905E2D0E7DC3A1E06_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::BBDCD859D8A76172AF0C213EFB99A6F64E8AB028BECE6D313FA5B6BCF96CD15A
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___BBDCD859D8A76172AF0C213EFB99A6F64E8AB028BECE6D313FA5B6BCF96CD15A_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::C271A86BEFE71CEF20615946687F7A3A13E980C14FD4637951697CD4A6112156
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___C271A86BEFE71CEF20615946687F7A3A13E980C14FD4637951697CD4A6112156_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::C6D060549430A52150918BF2837FCCD94C6D727B74A5946A8F7EF51B940C3CF7
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___C6D060549430A52150918BF2837FCCD94C6D727B74A5946A8F7EF51B940C3CF7_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::C775F22681F0D15310756B294BB58FC4364A5DE6030B819E8D3EEC4E75454915
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___C775F22681F0D15310756B294BB58FC4364A5DE6030B819E8D3EEC4E75454915_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::C81BE9C823EEAE21EA93425C6E608123CA3F0BADCEECC99BABD7EF9EF918D91F
	__StaticArrayInitTypeSizeU3D48_t7768010C7539F6496FA0D1C8F1D14493F391BE42 ___C81BE9C823EEAE21EA93425C6E608123CA3F0BADCEECC99BABD7EF9EF918D91F_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::C842A7F36E23186A8F55DC7D0E63E781469950969CB88357227234F95C35DEA9
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___C842A7F36E23186A8F55DC7D0E63E781469950969CB88357227234F95C35DEA9_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CA4F3172723F3C05FCBCF655040DFCC4C7532C8A473CBC5F723786C85E05E7D5
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___CA4F3172723F3C05FCBCF655040DFCC4C7532C8A473CBC5F723786C85E05E7D5_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::CCC564D5CDB40E327F07151E33EF8AD040EEB5129CE505D00FE6EC11BD28C359
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___CCC564D5CDB40E327F07151E33EF8AD040EEB5129CE505D00FE6EC11BD28C359_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CFC31E7414C361FDCD9AC22AF49DE017C7C8084E8447E96A76635437B536389E
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___CFC31E7414C361FDCD9AC22AF49DE017C7C8084E8447E96A76635437B536389E_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::D3310F8730C74E00C7014874471A5E27574CD015457352EFB0373E8C5DA85FD1
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___D3310F8730C74E00C7014874471A5E27574CD015457352EFB0373E8C5DA85FD1_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::D5F7007BEC1C4CBA7579EFBF7C9B95764EEBDE708AD6A485A13AB443DBF5D9B2
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___D5F7007BEC1C4CBA7579EFBF7C9B95764EEBDE708AD6A485A13AB443DBF5D9B2_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62 <PrivateImplementationDetails>::D915BE593236020759F4FEF038CC2B63B9B002F24B2434558D66454C7D1F890B
	__StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 ___D915BE593236020759F4FEF038CC2B63B9B002F24B2434558D66454C7D1F890B_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::DD54E6E73536232DFD682C64D36E265B59ACF8AD04FC6062A2EB7225BBDDDB02
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___DD54E6E73536232DFD682C64D36E265B59ACF8AD04FC6062A2EB7225BBDDDB02_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::DE26AA4452A148F1FCFF9D95EA656766D0DC19BDCEE086F85BC3F9BD8AB7F25B
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___DE26AA4452A148F1FCFF9D95EA656766D0DC19BDCEE086F85BC3F9BD8AB7F25B_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::DF3B73F375F7D3E6E690AE6559F6EEBBE3B0BE17883D9DCBBF95AF599F898661
	__StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 ___DF3B73F375F7D3E6E690AE6559F6EEBBE3B0BE17883D9DCBBF95AF599F898661_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=34 <PrivateImplementationDetails>::E0FC33CF5F6BEE60F10DEA1CD72044DDD001DC8E5286A764438D319864C2B28C
	__StaticArrayInitTypeSizeU3D34_tD35C3F7BB14FA0508DF4F2FDD75BAF75923ACAE1 ___E0FC33CF5F6BEE60F10DEA1CD72044DDD001DC8E5286A764438D319864C2B28C_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E2AA696710083FEFF382491A86DF649DB1E8EE6AA4ECF99E8D98CFBF871BFCE4
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___E2AA696710083FEFF382491A86DF649DB1E8EE6AA4ECF99E8D98CFBF871BFCE4_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::E742063507B84161ADC4B4CB5EAC5DE64CDC24FE0A2522872F6A680A25BCE744
	__StaticArrayInitTypeSizeU3D28_t90A51CCAF5D6AEB2C9D3ECC30717F37D3F1B85BD ___E742063507B84161ADC4B4CB5EAC5DE64CDC24FE0A2522872F6A680A25BCE744_77;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::E7D28C8ABF9409F33CDDB799B3C5412A68EFFD91DA92F63C66CA090120555887
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___E7D28C8ABF9409F33CDDB799B3C5412A68EFFD91DA92F63C66CA090120555887_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022 <PrivateImplementationDetails>::E8A6F48C3BFFD60CD452A61594C8EBF54132EAA4375B9AD539D9F58393A576D8
	__StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305 ___E8A6F48C3BFFD60CD452A61594C8EBF54132EAA4375B9AD539D9F58393A576D8_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::EB58059E1068310C5171B7574A6B1303C3BF18953792EEED914BFC0E241BDF41
	__StaticArrayInitTypeSizeU3D1024_tD7AD5167A937B4CC6664E8761D6C23C221E7E61F ___EB58059E1068310C5171B7574A6B1303C3BF18953792EEED914BFC0E241BDF41_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::ED9C3E22572942276CAADCDC577C0AA076D9A6067472859B438CA79F84A3BF21
	__StaticArrayInitTypeSizeU3D28_t90A51CCAF5D6AEB2C9D3ECC30717F37D3F1B85BD ___ED9C3E22572942276CAADCDC577C0AA076D9A6067472859B438CA79F84A3BF21_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::F1B0145A5F0D3E964A90201094730422F3013B94D7B9E73B6FFDED5643D486A2
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___F1B0145A5F0D3E964A90201094730422F3013B94D7B9E73B6FFDED5643D486A2_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::F293021907A17F93B79B5DFC3B1EA628EF68EAA93847E6B22493A7B2B5F8DEAF
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___F293021907A17F93B79B5DFC3B1EA628EF68EAA93847E6B22493A7B2B5F8DEAF_83;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::F614FA3752D633B195491240AB8AA6323C05559A49E80B4537BDA80BC3C9CBC1
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___F614FA3752D633B195491240AB8AA6323C05559A49E80B4537BDA80BC3C9CBC1_84;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::F79456E5FB19B3DBD24E0C4BEDD5157B7DBD5283C615F02FB9ED21D01F89A6F7
	__StaticArrayInitTypeSizeU3D120_tB5711A21B80DE30D3B410A0644918F388AADC947 ___F79456E5FB19B3DBD24E0C4BEDD5157B7DBD5283C615F02FB9ED21D01F89A6F7_85;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::F8756C1F7B8F886752A7B73230C5AC5397F7CE2B1BFDC5C139DBED513BD228C3
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___F8756C1F7B8F886752A7B73230C5AC5397F7CE2B1BFDC5C139DBED513BD228C3_86;
};

// <PrivateImplementationDetails>

// NLayer.Decoder.FrameBase
struct FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057_StaticFields
{
	// System.Int32 NLayer.Decoder.FrameBase::_totalAllocation
	int32_t ____totalAllocation_0;
};

// NLayer.Decoder.FrameBase

// NLayer.Decoder.MpegStreamReader

// NLayer.Decoder.MpegStreamReader

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// NLayer.Decoder.VBRInfo

// NLayer.Decoder.VBRInfo

// NLayer.Decoder.MpegStreamReader/ReadBuffer

// NLayer.Decoder.MpegStreamReader/ReadBuffer

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

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// NLayer.Decoder.RiffHeaderFrame

// NLayer.Decoder.RiffHeaderFrame

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=140

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=140

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=34

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=34

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92

// System.InvalidOperationException

// System.InvalidOperationException

// System.IO.EndOfStreamException

// System.IO.EndOfStreamException
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054 (double ___0_a, double ___1_newBase, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::EnsureFilled(NLayer.Decoder.MpegStreamReader,System.Int64,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ___0_reader, int64_t ___1_offset, int32_t* ___2_count, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::Truncate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_Truncate_m93F61034FB5851456445E45A2CECA925BFCF9295 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::CommitDiscard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_CommitDiscard_m3F70F13FC46CD06EA2794FF9D8DAA9E540B3C292 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, const RuntimeMethod* method) ;
// System.Void NLayer.Decoder.RiffHeaderFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiffHeaderFrame__ctor_mCBB30A18DB9EB3DA86467982514111183D93DB3F (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* __this, const RuntimeMethod* method) ;
// System.Void NLayer.Decoder.FrameBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBase__ctor_mD2DD49A7026CCDE8C33BB1E10CFA188E7663F6E7 (FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057* __this, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.FrameBase::Read(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F (FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057* __this, int32_t ___0_offset, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.VBRInfo::get_VBRFrames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRFrames_m906DEB6619F2393D4B9E8E1E27403E0F516A14F8_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.VBRInfo::get_SampleCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleCount_m500BA1AD9443198FECC6F63E32A12C048D71E6BF_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer__ctor_mAD628916DEF042A66C9D2628983FC208A19796BE (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, int32_t ___0_initialSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____localLock_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localLock_4), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_1 = ___0_initialSize;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054(((double)L_1), (2.0), NULL);
		___0_initialSize = ((int32_t)(2<<((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_2)&((int32_t)31)))));
		int32_t L_3 = ___0_initialSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___Data_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_0), (void*)L_4);
		return;
	}
}
// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::Read(NLayer.Decoder.MpegStreamReader,System.Int64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_Read_mC0A0A4E8279818219FFB2D81C47C54215A3E910D (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ___0_reader, int64_t ___1_offset, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_buffer, int32_t ___3_index, int32_t ___4_count, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->____localLock_4;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0038;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0038:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_4 = ___0_reader;
			int64_t L_5 = ___1_offset;
			int32_t L_6;
			L_6 = ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607(__this, L_4, L_5, (&___4_count), NULL);
			V_2 = L_6;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___Data_0;
			int32_t L_8 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_buffer;
			int32_t L_10 = ___3_index;
			int32_t L_11 = ___4_count;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, L_10, L_11, NULL);
			goto IL_0039;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		int32_t L_12 = ___4_count;
		return L_12;
	}
}
// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::ReadByte(NLayer.Decoder.MpegStreamReader,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_ReadByte_m0DDD8FD25785CA1192083EF1133D3FDBDF86F55D (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ___0_reader, int64_t ___1_offset, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		RuntimeObject* L_0 = __this->____localLock_4;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				V_2 = 1;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_4 = ___0_reader;
				int64_t L_5 = ___1_offset;
				int32_t L_6;
				L_6 = ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607(__this, L_4, L_5, (&V_2), NULL);
				V_3 = L_6;
				int32_t L_7 = V_2;
				if ((!(((uint32_t)L_7) == ((uint32_t)1))))
				{
					goto IL_002e_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___Data_0;
				int32_t L_9 = V_3;
				NullCheck(L_8);
				int32_t L_10 = L_9;
				uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				V_4 = L_11;
				goto IL_003c;
			}

IL_002e_1:
			{
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
		return (-1);
	}

IL_003c:
	{
		int32_t L_12 = V_4;
		return L_12;
	}
}
// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::EnsureFilled(NLayer.Decoder.MpegStreamReader,System.Int64,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ___0_reader, int64_t ___1_offset, int32_t* ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	int64_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int64_t L_0 = ___1_offset;
		int64_t L_1 = __this->___BaseOffset_1;
		V_0 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_0, L_1)));
		int32_t L_2 = V_0;
		int32_t* L_3 = ___2_count;
		int32_t L_4 = *((int32_t*)L_3);
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, L_4));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___End_2;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0420;
		}
	}

IL_001f:
	{
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_5 = ((int64_t)0);
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_9 = ___0_reader;
		NullCheck(L_9);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = L_9->____source_10;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_10);
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral808DF11042257F134CE34DF232CD9523F589E554)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607_RuntimeMethod_var)));
	}

IL_0049:
	{
		int32_t L_13 = __this->___End_2;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___Data_0;
		NullCheck(L_15);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_14, ((int32_t)(((RuntimeArray*)L_15)->max_length))))) > ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___Data_0;
		NullCheck(L_16);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_16)->max_length)), 2))) > ((int32_t)((int32_t)16384))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___Data_0;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_18)->max_length)), 2))))) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}

IL_007f:
	{
		int32_t L_19 = __this->___End_2;
		V_1 = L_19;
	}

IL_0086:
	{
		int64_t L_20 = ___1_offset;
		V_5 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_00a7;
		}
	}
	{
		ReadBuffer_Truncate_m93F61034FB5851456445E45A2CECA925BFCF9295(__this, NULL);
		int64_t L_22 = ___1_offset;
		__this->___BaseOffset_1 = L_22;
		V_0 = 0;
		int32_t* L_23 = ___2_count;
		int32_t L_24 = *((int32_t*)L_23);
		V_1 = L_24;
		int32_t* L_25 = ___2_count;
		int32_t L_26 = *((int32_t*)L_25);
		V_3 = L_26;
		goto IL_015e;
	}

IL_00a7:
	{
		int32_t L_27 = V_1;
		V_4 = ((-L_27));
		int32_t L_28 = V_0;
		V_3 = ((-L_28));
		goto IL_015e;
	}

IL_00b3:
	{
		int32_t L_29 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___Data_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->___End_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_31, L_32));
		int32_t L_33 = __this->___End_2;
		V_2 = L_33;
		int64_t L_34 = __this->___BaseOffset_1;
		int32_t L_35 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add(L_34, ((int64_t)L_35)));
		goto IL_015e;
	}

IL_00de:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = __this->___DiscardCount_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___Data_0;
		NullCheck(L_38);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_36, L_37))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_39 = __this->___DiscardCount_3;
		V_4 = L_39;
		int32_t L_40 = __this->___End_2;
		V_2 = L_40;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_41, L_42));
		int64_t L_43 = __this->___BaseOffset_1;
		int32_t L_44 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add(L_43, ((int64_t)L_44)));
		goto IL_015e;
	}

IL_0110:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___Data_0;
		NullCheck(L_45);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_45)->max_length)), 2))) > ((int32_t)((int32_t)16384))))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_46 = __this->___DiscardCount_3;
		V_4 = L_46;
		int32_t L_47 = __this->___End_2;
		V_2 = L_47;
		int32_t L_48 = V_1;
		int32_t L_49 = __this->___End_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_48, L_49));
		int64_t L_50 = __this->___BaseOffset_1;
		int32_t L_51 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)L_51)));
		goto IL_015e;
	}

IL_0146:
	{
		ReadBuffer_Truncate_m93F61034FB5851456445E45A2CECA925BFCF9295(__this, NULL);
		int64_t L_52 = ___1_offset;
		__this->___BaseOffset_1 = L_52;
		int64_t L_53 = ___1_offset;
		V_5 = L_53;
		V_0 = 0;
		int32_t* L_54 = ___2_count;
		int32_t L_55 = *((int32_t*)L_54);
		V_1 = L_55;
		int32_t* L_56 = ___2_count;
		int32_t L_57 = *((int32_t*)L_56);
		V_3 = L_57;
	}

IL_015e:
	{
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___Data_0;
		NullCheck(L_60);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_58, L_59))) > ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length)))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_61 = V_2;
		int32_t L_62 = V_3;
		int32_t L_63 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___Data_0;
		NullCheck(L_64);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_61, L_62)), L_63))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))))
		{
			goto IL_0201;
		}
	}

IL_017f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___Data_0;
		NullCheck(L_65);
		V_6 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_65)->max_length)), 2));
		goto IL_0193;
	}

IL_018d:
	{
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_66, 2));
	}

IL_0193:
	{
		int32_t L_67 = V_6;
		int32_t L_68 = V_1;
		int32_t L_69 = V_4;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_68, L_69)))))
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_70 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_70);
		V_7 = L_71;
		int32_t L_72 = V_4;
		if ((((int32_t)L_72) >= ((int32_t)0)))
		{
			goto IL_01cc;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = __this->___Data_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_7;
		int32_t L_75 = V_4;
		int32_t L_76 = __this->___End_2;
		int32_t L_77 = V_4;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_73, 0, (RuntimeArray*)L_74, ((-L_75)), ((int32_t)il2cpp_codegen_add(L_76, L_77)), NULL);
		__this->___DiscardCount_3 = 0;
		goto IL_01f4;
	}

IL_01cc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = __this->___Data_0;
		int32_t L_79 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_7;
		int32_t L_81 = __this->___End_2;
		int32_t L_82 = V_4;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_78, L_79, (RuntimeArray*)L_80, 0, ((int32_t)il2cpp_codegen_subtract(L_81, L_82)), NULL);
		int32_t L_83 = __this->___DiscardCount_3;
		int32_t L_84 = V_4;
		__this->___DiscardCount_3 = ((int32_t)il2cpp_codegen_subtract(L_83, L_84));
	}

IL_01f4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = V_7;
		__this->___Data_0 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_0), (void*)L_85);
		goto IL_028c;
	}

IL_0201:
	{
		int32_t L_86 = V_4;
		if (!L_86)
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_87 = V_4;
		if ((((int32_t)L_87) <= ((int32_t)0)))
		{
			goto IL_023b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___Data_0;
		int32_t L_89 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = __this->___Data_0;
		int32_t L_91 = __this->___End_2;
		int32_t L_92 = V_4;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_88, L_89, (RuntimeArray*)L_90, 0, ((int32_t)il2cpp_codegen_subtract(L_91, L_92)), NULL);
		int32_t L_93 = __this->___DiscardCount_3;
		int32_t L_94 = V_4;
		__this->___DiscardCount_3 = ((int32_t)il2cpp_codegen_subtract(L_93, L_94));
		goto IL_028c;
	}

IL_023b:
	{
		V_8 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = __this->___Data_0;
		NullCheck(L_95);
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_95)->max_length)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = __this->___Data_0;
		NullCheck(L_96);
		int32_t L_97 = V_4;
		V_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_96)->max_length)), 1)), L_97));
		goto IL_027f;
	}

IL_025b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = __this->___Data_0;
		int32_t L_99 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = __this->___Data_0;
		int32_t L_101 = V_9;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		uint8_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (uint8_t)L_103);
		int32_t L_104 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		int32_t L_105 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_105, 1));
		int32_t L_106 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_106, 1));
	}

IL_027f:
	{
		int32_t L_107 = V_8;
		int32_t L_108 = V_4;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_025b;
		}
	}
	{
		__this->___DiscardCount_3 = 0;
	}

IL_028c:
	{
		int64_t L_109 = __this->___BaseOffset_1;
		int32_t L_110 = V_4;
		__this->___BaseOffset_1 = ((int64_t)il2cpp_codegen_add(L_109, ((int64_t)L_110)));
		int32_t L_111 = V_2;
		int32_t L_112 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_111, L_112));
		int32_t L_113 = V_0;
		int32_t L_114 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_113, L_114));
		int32_t L_115 = V_1;
		int32_t L_116 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_115, L_116));
		int32_t L_117 = __this->___End_2;
		int32_t L_118 = V_4;
		__this->___End_2 = ((int32_t)il2cpp_codegen_subtract(L_117, L_118));
		MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_119 = ___0_reader;
		NullCheck(L_119);
		RuntimeObject* L_120 = L_119->____readLock_14;
		V_11 = L_120;
		V_12 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0414:
			{// begin finally (depth: 1)
				{
					bool L_121 = V_12;
					if (!L_121)
					{
						goto IL_041f;
					}
				}
				{
					RuntimeObject* L_122 = V_11;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_122, NULL);
				}

IL_041f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_123 = V_11;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_123, (&V_12), NULL);
				int32_t L_124 = V_3;
				if ((((int32_t)L_124) <= ((int32_t)0)))
				{
					goto IL_0392_1;
				}
			}
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_125 = ___0_reader;
				NullCheck(L_125);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_126 = L_125->____source_10;
				NullCheck(L_126);
				int64_t L_127;
				L_127 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_126);
				int64_t L_128 = V_5;
				if ((((int64_t)L_127) == ((int64_t)L_128)))
				{
					goto IL_0392_1;
				}
			}
			{
				int64_t L_129 = V_5;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_130 = ___0_reader;
				NullCheck(L_130);
				int64_t L_131 = L_130->____eofOffset_9;
				if ((((int64_t)L_129) >= ((int64_t)L_131)))
				{
					goto IL_0392_1;
				}
			}
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_132 = ___0_reader;
				NullCheck(L_132);
				bool L_133 = L_132->____canSeek_11;
				if (!L_133)
				{
					goto IL_0324_1;
				}
			}
			try
			{// begin try (depth: 2)
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_134 = ___0_reader;
				NullCheck(L_134);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_135 = L_134->____source_10;
				int64_t L_136 = V_5;
				NullCheck(L_135);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_135, L_136);
				goto IL_0392_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_030e_1;
				}
				throw e;
			}

CATCH_030e_1:
			{// begin catch(System.IO.EndOfStreamException)
				EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_137 = ((EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)IL2CPP_GET_ACTIVE_EXCEPTION(EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*));;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_138 = ___0_reader;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_139 = ___0_reader;
				NullCheck(L_139);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_140 = L_139->____source_10;
				NullCheck(L_140);
				int64_t L_141;
				L_141 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_140);
				NullCheck(L_138);
				L_138->____eofOffset_9 = L_141;
				V_3 = 0;
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0392_1;
			}// end catch (depth: 2)

IL_0324_1:
			{
				int64_t L_142 = V_5;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_143 = ___0_reader;
				NullCheck(L_143);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_144 = L_143->____source_10;
				NullCheck(L_144);
				int64_t L_145;
				L_145 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_144);
				V_13 = ((int64_t)il2cpp_codegen_subtract(L_142, L_145));
				goto IL_0359_1;
			}

IL_0336_1:
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_146 = ___0_reader;
				NullCheck(L_146);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_147 = L_146->____source_10;
				NullCheck(L_147);
				int32_t L_148;
				L_148 = VirtualFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.IO.Stream::ReadByte() */, L_147);
				if ((!(((uint32_t)L_148) == ((uint32_t)(-1)))))
				{
					goto IL_0359_1;
				}
			}
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_149 = ___0_reader;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_150 = ___0_reader;
				NullCheck(L_150);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_151 = L_150->____source_10;
				NullCheck(L_151);
				int64_t L_152;
				L_152 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_151);
				NullCheck(L_149);
				L_149->____eofOffset_9 = L_152;
				V_3 = 0;
				goto IL_0392_1;
			}

IL_0359_1:
			{
				int64_t L_153 = V_13;
				int64_t L_154 = ((int64_t)il2cpp_codegen_subtract(L_153, ((int64_t)1)));
				V_13 = L_154;
				if ((((int64_t)L_154) >= ((int64_t)((int64_t)0))))
				{
					goto IL_0336_1;
				}
			}
			{
				goto IL_0392_1;
			}

IL_0367_1:
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_155 = ___0_reader;
				NullCheck(L_155);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_156 = L_155->____source_10;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = __this->___Data_0;
				int32_t L_158 = V_2;
				int32_t L_159 = V_3;
				NullCheck(L_156);
				int32_t L_160;
				L_160 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_156, L_157, L_158, L_159);
				V_14 = L_160;
				int32_t L_161 = V_14;
				if (!L_161)
				{
					goto IL_03a0_1;
				}
			}
			{
				int32_t L_162 = V_2;
				int32_t L_163 = V_14;
				V_2 = ((int32_t)il2cpp_codegen_add(L_162, L_163));
				int64_t L_164 = V_5;
				int32_t L_165 = V_14;
				V_5 = ((int64_t)il2cpp_codegen_add(L_164, ((int64_t)L_165)));
				int32_t L_166 = V_3;
				int32_t L_167 = V_14;
				V_3 = ((int32_t)il2cpp_codegen_subtract(L_166, L_167));
			}

IL_0392_1:
			{
				int32_t L_168 = V_3;
				if ((((int32_t)L_168) <= ((int32_t)0)))
				{
					goto IL_03a0_1;
				}
			}
			{
				int64_t L_169 = V_5;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_170 = ___0_reader;
				NullCheck(L_170);
				int64_t L_171 = L_170->____eofOffset_9;
				if ((((int64_t)L_169) < ((int64_t)L_171)))
				{
					goto IL_0367_1;
				}
			}

IL_03a0_1:
			{
				int32_t L_172 = V_2;
				int32_t L_173 = __this->___End_2;
				if ((((int32_t)L_172) <= ((int32_t)L_173)))
				{
					goto IL_03b0_1;
				}
			}
			{
				int32_t L_174 = V_2;
				__this->___End_2 = L_174;
			}

IL_03b0_1:
			{
				int32_t L_175 = __this->___End_2;
				int32_t L_176 = V_1;
				if ((((int32_t)L_175) >= ((int32_t)L_176)))
				{
					goto IL_03cb_1;
				}
			}
			{
				int32_t* L_177 = ___2_count;
				int32_t L_178 = __this->___End_2;
				int32_t L_179 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_180;
				L_180 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(L_178, L_179)), NULL);
				*((int32_t*)L_177) = (int32_t)L_180;
				goto IL_0420;
			}

IL_03cb_1:
			{
				int32_t L_181 = __this->___End_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_182 = __this->___Data_0;
				NullCheck(L_182);
				if ((((int32_t)L_181) >= ((int32_t)((int32_t)(((RuntimeArray*)L_182)->max_length)))))
				{
					goto IL_0412_1;
				}
			}
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_183 = ___0_reader;
				NullCheck(L_183);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_184 = L_183->____source_10;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_185 = __this->___Data_0;
				int32_t L_186 = __this->___End_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_187 = __this->___Data_0;
				NullCheck(L_187);
				int32_t L_188 = __this->___End_2;
				NullCheck(L_184);
				int32_t L_189;
				L_189 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_184, L_185, L_186, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_187)->max_length)), L_188)));
				V_15 = L_189;
				int32_t L_190 = __this->___End_2;
				int32_t L_191 = V_15;
				__this->___End_2 = ((int32_t)il2cpp_codegen_add(L_190, L_191));
			}

IL_0412_1:
			{
				goto IL_0420;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0420:
	{
		int32_t L_192 = V_0;
		return L_192;
	}
}
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::DiscardThrough(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_DiscardThrough_m483A9DFE3F83D3333BA9525A370EAED0334C0DDD (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, int64_t ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->____localLock_4;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int64_t L_4 = ___0_offset;
				int64_t L_5 = __this->___BaseOffset_1;
				V_2 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_4, L_5)));
				int32_t L_6 = V_2;
				int32_t L_7 = __this->___DiscardCount_3;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_8;
				L_8 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_6, L_7, NULL);
				__this->___DiscardCount_3 = L_8;
				int32_t L_9 = __this->___DiscardCount_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___Data_0;
				NullCheck(L_10);
				if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
				{
					goto IL_0043_1;
				}
			}
			{
				ReadBuffer_CommitDiscard_m3F70F13FC46CD06EA2794FF9D8DAA9E540B3C292(__this, NULL);
			}

IL_0043_1:
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return;
	}
}
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::Truncate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_Truncate_m93F61034FB5851456445E45A2CECA925BFCF9295 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, const RuntimeMethod* method) 
{
	{
		__this->___End_2 = 0;
		__this->___DiscardCount_3 = 0;
		return;
	}
}
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::CommitDiscard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_CommitDiscard_m3F70F13FC46CD06EA2794FF9D8DAA9E540B3C292 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___DiscardCount_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___Data_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->___DiscardCount_3;
		int32_t L_3 = __this->___End_2;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_003b;
		}
	}

IL_001e:
	{
		int64_t L_4 = __this->___BaseOffset_1;
		int32_t L_5 = __this->___DiscardCount_3;
		__this->___BaseOffset_1 = ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)L_5)));
		__this->___End_2 = 0;
		goto IL_0087;
	}

IL_003b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___Data_0;
		int32_t L_7 = __this->___DiscardCount_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___Data_0;
		int32_t L_9 = __this->___End_2;
		int32_t L_10 = __this->___DiscardCount_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		int64_t L_11 = __this->___BaseOffset_1;
		int32_t L_12 = __this->___DiscardCount_3;
		__this->___BaseOffset_1 = ((int64_t)il2cpp_codegen_add(L_11, ((int64_t)L_12)));
		int32_t L_13 = __this->___End_2;
		int32_t L_14 = __this->___DiscardCount_3;
		__this->___End_2 = ((int32_t)il2cpp_codegen_subtract(L_13, L_14));
	}

IL_0087:
	{
		__this->___DiscardCount_3 = 0;
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
// NLayer.Decoder.RiffHeaderFrame NLayer.Decoder.RiffHeaderFrame::TrySync(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* RiffHeaderFrame_TrySync_mB4F89B0DF1E81A4129A7159D7EE1067D701CDDD2 (uint32_t ___0_syncMark, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_syncMark;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)1380533830)))))
		{
			goto IL_000e;
		}
	}
	{
		RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* L_1 = (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2*)il2cpp_codegen_object_new(RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RiffHeaderFrame__ctor_mCBB30A18DB9EB3DA86467982514111183D93DB3F(L_1, NULL);
		return L_1;
	}

IL_000e:
	{
		return (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2*)NULL;
	}
}
// System.Void NLayer.Decoder.RiffHeaderFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiffHeaderFrame__ctor_mCBB30A18DB9EB3DA86467982514111183D93DB3F (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* __this, const RuntimeMethod* method) 
{
	{
		FrameBase__ctor_mD2DD49A7026CCDE8C33BB1E10CFA188E7663F6E7(__this, NULL);
		return;
	}
}
// System.Int32 NLayer.Decoder.RiffHeaderFrame::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RiffHeaderFrame_Validate_mA2F5EA8529AAB8DC5C5766A742A184F62010FE04 (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		int32_t L_2;
		L_2 = FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F(__this, 8, L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		return (-1);
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)87)))))
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)86)))))
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_14) == ((int32_t)((int32_t)69))))
		{
			goto IL_0032;
		}
	}

IL_0030:
	{
		return (-1);
	}

IL_0032:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		int32_t L_16;
		L_16 = FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F(__this, ((int32_t)12), L_15, NULL);
		if ((((int32_t)L_16) == ((int32_t)4)))
		{
			goto IL_0040;
		}
	}
	{
		return (-1);
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)109)))))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = 2;
		uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = 3;
		uint8_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_28) == ((int32_t)((int32_t)32))))
		{
			goto IL_005e;
		}
	}

IL_005c:
	{
		return (-1);
	}

IL_005e:
	{
		V_1 = ((int32_t)16);
	}

IL_0061:
	{
		int32_t L_29 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		int32_t L_31;
		L_31 = FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F(__this, L_29, L_30, NULL);
		if ((((int32_t)L_31) == ((int32_t)4)))
		{
			goto IL_006e;
		}
	}
	{
		return (-1);
	}

IL_006e:
	{
		int32_t L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_33, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, ((int32_t)il2cpp_codegen_add(4, L_34))));
		int32_t L_35 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37;
		L_37 = FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F(__this, L_35, L_36, NULL);
		if ((((int32_t)L_37) == ((int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		return (-1);
	}

IL_0087:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 0;
		uint8_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = 1;
		uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = 2;
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = 3;
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_51 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_51, 4));
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
// System.Void NLayer.Decoder.VBRInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo__ctor_mA8334700F9C551380A6EEF0512B1461FB790F989 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_SampleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleCount_m500BA1AD9443198FECC6F63E32A12C048D71E6BF (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleCountU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_SampleCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_SampleCount_m66366C99623C9E6621D5EEC62D22396F5E9D29D2 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleCountU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_SampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleRate_mE9E1A537690E9BA07F38BD9B375B2C0D10E070A4 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleRateU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_SampleRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_SampleRate_m6A3A6C0A743960B13A0F13D9CCE37CF20A932542 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CSampleRateU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_Channels_m44D42B2086A8BC69DCFA63C9A84EDFF0B989A408 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_Channels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_Channels_mCDD7E25C06B745F40951362A3F86DB301967667D (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CChannelsU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_VBRFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRFrames_m906DEB6619F2393D4B9E8E1E27403E0F516A14F8 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVBRFramesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_VBRFrames(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_VBRFrames_mF5DD6C14E108077A6F6DECEFBB0873E550A8F4C7 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CVBRFramesU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_VBRBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_VBRBytes_m7F671B9D59A296B1FE7CDC9CEB71FBA2542FBB2D (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CVBRBytesU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_VBRQuality(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_VBRQuality_m59BE8B5D38B2995C7D22B6DA2F013378471A9DBE (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CVBRQualityU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_VBRDelay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_VBRDelay_mCC2C140644E9459294894A314D6B0842D91944EF (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CVBRDelayU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int64 NLayer.Decoder.VBRInfo::get_VBRStreamSampleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VBRInfo_get_VBRStreamSampleCount_mDD4F937F59686963C4904F5A539FE3675BFAF14E (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VBRInfo_get_VBRFrames_m906DEB6619F2393D4B9E8E1E27403E0F516A14F8_inline(__this, NULL);
		int32_t L_1;
		L_1 = VBRInfo_get_SampleCount_m500BA1AD9443198FECC6F63E32A12C048D71E6BF_inline(__this, NULL);
		return ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRFrames_m906DEB6619F2393D4B9E8E1E27403E0F516A14F8_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVBRFramesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleCount_m500BA1AD9443198FECC6F63E32A12C048D71E6BF_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleCountU3Ek__BackingField_0;
		return L_0;
	}
}
