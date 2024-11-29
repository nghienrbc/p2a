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

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E;
struct ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636;
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
struct MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E;
struct NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0;;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseStream;
	int64_t ___position;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 
{
	int32_t ___dwLowDateTime;
	int32_t ___dwHighDateTime;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
};
struct NOVTABLE IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IMediaBuffer_SetLength_m52F42D5D1ED83B49ABDEFABB0AE1AE08FEC1838F(int32_t ___0_length) = 0;
	virtual int32_t STDCALL IMediaBuffer_GetMaxLength_m38AA93B7D80CB35FADCCE175E49FF4FF5B4BADC7(int32_t* ___0_maxLength) = 0;
	virtual int32_t STDCALL IMediaBuffer_GetBufferAndLength_m3E04063C5CBEEE156D7738A400A02A0620103344(intptr_t ___0_bufferPointerPointer, intptr_t ___1_validDataLengthPointer) = 0;
};
struct NOVTABLE IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStream_Read_m2C18A70C6ECA31F767BF0CC3477B83523207A900(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Write_m670F053D42AA47C653A0EF46F51BE37FB71EDDAB(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Seek_mB2D1B0341C11684803404EA5B7D2E15178A2E8D3(int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_SetSize_mE60689A2DEAC6E1CFBA2BCF5B34F40F50AECD623(int64_t ___0_libNewSize) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m4A1FB28F5A8226242BC536D3A1DAD2A0279C3192(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Commit_m01764D26CFDDBC04417FAB93CC592E79F43D1F7E(int32_t ___0_grfCommitFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Revert_m7DF44D9E9F3C73A586132085850395B3F68CA8E6() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_mC30C8770444E0C9F3CB329146F99F0D7FED492B8(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m6F712F969C05F21E6854E72503759EAFA2909C6B(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Stat_m1F6AE8FB47EDE4B77CE22F0B1DB2FEE81FB7FB04(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___0_pstatstg, int32_t ___1_grfStatFlag) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Clone_m75F797905BA25E8CA4DFC63D35DDF5A6670E3A0E(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___0_ppstm) = 0;
};
struct MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11  : public RuntimeObject
{
	intptr_t ___buffer;
	int32_t ___length;
	int32_t ___maxLength;
};
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 
{
	String_t* ___pwcsName;
	int32_t ___type;
	int64_t ___cbSize;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime;
	int32_t ___grfMode;
	int32_t ___grfLocksSupported;
	Guid_t ___clsid;
	int32_t ___grfStateBits;
	int32_t ___reserved;
};
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_pinvoke
{
	Il2CppChar* ___pwcsName;
	int32_t ___type;
	int64_t ___cbSize;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime;
	int32_t ___grfMode;
	int32_t ___grfLocksSupported;
	Guid_t ___clsid;
	int32_t ___grfStateBits;
	int32_t ___reserved;
};
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com
{
	Il2CppChar* ___pwcsName;
	int32_t ___type;
	int64_t ___cbSize;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___mtime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___ctime;
	FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805 ___atime;
	int32_t ___grfMode;
	int32_t ___grfLocksSupported;
	Guid_t ___clsid;
	int32_t ___grfStateBits;
	int32_t ___reserved;
};
struct NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C  : public RuntimeObject
{
	intptr_t ___comInterface;
	IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E* ___managedVtable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com_back(const STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0& unmarshaled);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com_cleanup(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com& marshaled);


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Read_m4C6041146285EBE4CD5F6C206CB88B5EE7BB05B1 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Write_m79D2E6B0354200D0C2CED397807CBBA33563DFB4 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Seek_mD77B5201918637BD1B1C4BA7B43660CE851F2FED (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_SetSize_m5963DA1AACAFECE89C0D3E6444FD8820E6B6E528 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___0_libNewSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_CopyTo_mD8F3C7CF2BD6E7D0F4F638DC677E62FA8122E1F3 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, RuntimeObject* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Commit_mA184C65ECC3CA08CA69F1017EA135D3F1AC3E548 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int32_t ___0_grfCommitFlags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Revert_mE554C50B2B82C748F421209A0E85B51CA230AE71 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_LockRegion_m87A5D50216B0524D18EBBE943C6E490767A2196D (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_UnlockRegion_mA54D33844438B038945578E3280BA28C9FEAA585 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Stat_mF4035A6DF7FE59763D440145873AC8D3FB0F7F30 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___0_pstatstg, int32_t ___1_grfStatFlag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComIStreamWrapper_Clone_m1428D77572709186E8DC5BB0469517879A6372B3 (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __this, RuntimeObject** ___0_ppstm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_Read_mF78621464A998EE1A3103A43E6224741B5441BB7 (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_Write_mC882F6D6EFBA24626C295169C6CA4AA58DFC4BAA (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_Seek_m74BA86D478B6BEFB545EE02839BCB9764D785735 (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_SetSize_mD3CE3B7DA076047F88D6FA232D1512DE03148705 (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, int64_t ___0_libNewSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_CopyTo_mC0E61354D8DA2B94DBA0EC67B19D6E4BCA5E8200 (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, RuntimeObject* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_Commit_mB37A6DCF04B1848D2C450FF6C59B8D40F2FEFA12 (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, int32_t ___0_grfCommitFlags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_Revert_m0BA54124358C02B3B4CEAB343A5EB286B407ABBD (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_LockRegion_m62E17E161224B21389B311DB1742ADC9B1E14302 (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_UnlockRegion_m36ACEC67B0192E1CC627850D2AD3CD5E6DFC5C86 (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_Stat_m95401AE1E64CAA19092D7282D464DB5DAA0CE0AD (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___0_pstatstg, int32_t ___1_grfStatFlag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComStream_System_Runtime_InteropServices_ComTypes_IStream_Clone_m6ADAD0E8512EBDF272DFB6EA95A6BD6175DC90F7 (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __this, RuntimeObject** ___0_ppstm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MediaBuffer_NAudio_Dmo_IMediaBuffer_SetLength_mDCB25BF623CDC8107F13AEE21261543C505D1F9E (MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11* __this, int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MediaBuffer_NAudio_Dmo_IMediaBuffer_GetMaxLength_m5B124049E139F412D2595CF97C29FD61473B806B (MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11* __this, int32_t* ___0_maxLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MediaBuffer_NAudio_Dmo_IMediaBuffer_GetBufferAndLength_m7864A77185D5131F233F75460F1DCBFAC1555137 (MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11* __this, intptr_t ___0_bufferPointerPointer, intptr_t ___1_validDataLengthPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Read_m92D93E15422F8E7AA6FE0970A92919F39FD5E827 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Write_m2CC6ED3BBBB91C9B2DFF9312AB5CD200D8C7A236 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Seek_m3F200D92D11803B2279B860F73A8CD6EEED1A7B3 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_SetSize_m0A80C7C20A343A24628B4E047EA7951625C77EA8 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___0_libNewSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_CopyTo_mEA49498C9B6A02F18A1C45AACD09F3F1FD3D6539 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, RuntimeObject* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Commit_m1CDDE6076066A37352EC8F2E570E59E0D63C7598 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int32_t ___0_grfCommitFlags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Revert_m6CEE0B80317E4CEC07237902E8E81A076C2ACA49 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_LockRegion_m28C5D057ACE791F074CE96598BF713A24E07A3DB (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_UnlockRegion_m6A59115770B8DD8C4E6AA9A9838AA89C55FC0FDF (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Stat_m34C4C16D96E7CDEFDEFB505200A102037AD5959A (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0* ___0_pstatstg, int32_t ___1_grfStatFlag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeToManagedWrapper_Clone_m6D34867528FA20C62023BCE1E029E495BA408793 (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __this, RuntimeObject** ___0_ppstm, const RuntimeMethod* method) ;

struct ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper>, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8
{
	inline ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*>(this);
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

	virtual il2cpp_hresult_t STDCALL IStream_Read_m2C18A70C6ECA31F767BF0CC3477B83523207A900(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____0_pv_empty = NULL;
		if (___0_pv != NULL)
		{
			____0_pv_empty = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___1_cb));
		}

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Read_m4C6041146285EBE4CD5F6C206CB88B5EE7BB05B1(__thisValue, ____0_pv_empty, ___1_cb, ___2_pcbRead, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_pv_empty != NULL)
		{
			il2cpp_array_size_t _____0_pv_empty_Length = (____0_pv_empty)->max_length;
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_____0_pv_empty_Length); i++)
			{
				(___0_pv)[i] = (____0_pv_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Write_m670F053D42AA47C653A0EF46F51BE37FB71EDDAB(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____0_pv_unmarshaled = NULL;
		if (___0_pv != NULL)
		{
			____0_pv_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___1_cb));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(___1_cb); i++)
			{
				(____0_pv_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___0_pv)[i]);
			}
		}

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Write_m79D2E6B0354200D0C2CED397807CBBA33563DFB4(__thisValue, ____0_pv_unmarshaled, ___1_cb, ___2_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Seek_mB2D1B0341C11684803404EA5B7D2E15178A2E8D3(int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Seek_mD77B5201918637BD1B1C4BA7B43660CE851F2FED(__thisValue, ___0_dlibMove, ___1_dwOrigin, ___2_plibNewPosition, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_SetSize_mE60689A2DEAC6E1CFBA2BCF5B34F40F50AECD623(int64_t ___0_libNewSize) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_SetSize_m5963DA1AACAFECE89C0D3E6444FD8820E6B6E528(__thisValue, ___0_libNewSize, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m4A1FB28F5A8226242BC536D3A1DAD2A0279C3192(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

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

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_CopyTo_mD8F3C7CF2BD6E7D0F4F638DC677E62FA8122E1F3(__thisValue, ____0_pstm_unmarshaled, ___1_cb, ___2_pcbRead, ___3_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Commit_m01764D26CFDDBC04417FAB93CC592E79F43D1F7E(int32_t ___0_grfCommitFlags) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Commit_mA184C65ECC3CA08CA69F1017EA135D3F1AC3E548(__thisValue, ___0_grfCommitFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Revert_m7DF44D9E9F3C73A586132085850395B3F68CA8E6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Revert_mE554C50B2B82C748F421209A0E85B51CA230AE71(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_mC30C8770444E0C9F3CB329146F99F0D7FED492B8(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_LockRegion_m87A5D50216B0524D18EBBE943C6E490767A2196D(__thisValue, ___0_libOffset, ___1_cb, ___2_dwLockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m6F712F969C05F21E6854E72503759EAFA2909C6B(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_UnlockRegion_mA54D33844438B038945578E3280BA28C9FEAA585(__thisValue, ___0_libOffset, ___1_cb, ___2_dwLockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Stat_m1F6AE8FB47EDE4B77CE22F0B1DB2FEE81FB7FB04(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___0_pstatstg, int32_t ___1_grfStatFlag) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}


		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 ____0_pstatstg_empty;
		memset((&____0_pstatstg_empty), 0, sizeof(____0_pstatstg_empty));

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Stat_mF4035A6DF7FE59763D440145873AC8D3FB0F7F30(__thisValue, (&____0_pstatstg_empty), ___1_grfStatFlag, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(____0_pstatstg_empty, *___0_pstatstg);

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Clone_m75F797905BA25E8CA4DFC63D35DDF5A6670E3A0E(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___0_ppstm) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_ppstm_empty = NULL;

		try
		{
			ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E* __thisValue = (ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E*)GetManagedObjectInline();
			ComIStreamWrapper_Clone_m1428D77572709186E8DC5BB0469517879A6372B3(__thisValue, (&____0_ppstm_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_ComCallableWrapper(obj));
}

struct ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636_ComCallableWrapper>, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8
{
	inline ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*>(this);
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

	virtual il2cpp_hresult_t STDCALL IStream_Read_m2C18A70C6ECA31F767BF0CC3477B83523207A900(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____0_pv_empty = NULL;
		if (___0_pv != NULL)
		{
			____0_pv_empty = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___1_cb));
		}

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_Read_mF78621464A998EE1A3103A43E6224741B5441BB7(__thisValue, ____0_pv_empty, ___1_cb, ___2_pcbRead, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_pv_empty != NULL)
		{
			il2cpp_array_size_t _____0_pv_empty_Length = (____0_pv_empty)->max_length;
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_____0_pv_empty_Length); i++)
			{
				(___0_pv)[i] = (____0_pv_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Write_m670F053D42AA47C653A0EF46F51BE37FB71EDDAB(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____0_pv_unmarshaled = NULL;
		if (___0_pv != NULL)
		{
			____0_pv_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___1_cb));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(___1_cb); i++)
			{
				(____0_pv_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___0_pv)[i]);
			}
		}

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_Write_mC882F6D6EFBA24626C295169C6CA4AA58DFC4BAA(__thisValue, ____0_pv_unmarshaled, ___1_cb, ___2_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Seek_mB2D1B0341C11684803404EA5B7D2E15178A2E8D3(int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_Seek_m74BA86D478B6BEFB545EE02839BCB9764D785735(__thisValue, ___0_dlibMove, ___1_dwOrigin, ___2_plibNewPosition, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_SetSize_mE60689A2DEAC6E1CFBA2BCF5B34F40F50AECD623(int64_t ___0_libNewSize) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_SetSize_mD3CE3B7DA076047F88D6FA232D1512DE03148705(__thisValue, ___0_libNewSize, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m4A1FB28F5A8226242BC536D3A1DAD2A0279C3192(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

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

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_CopyTo_mC0E61354D8DA2B94DBA0EC67B19D6E4BCA5E8200(__thisValue, ____0_pstm_unmarshaled, ___1_cb, ___2_pcbRead, ___3_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Commit_m01764D26CFDDBC04417FAB93CC592E79F43D1F7E(int32_t ___0_grfCommitFlags) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_Commit_mB37A6DCF04B1848D2C450FF6C59B8D40F2FEFA12(__thisValue, ___0_grfCommitFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Revert_m7DF44D9E9F3C73A586132085850395B3F68CA8E6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_Revert_m0BA54124358C02B3B4CEAB343A5EB286B407ABBD(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_mC30C8770444E0C9F3CB329146F99F0D7FED492B8(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_LockRegion_m62E17E161224B21389B311DB1742ADC9B1E14302(__thisValue, ___0_libOffset, ___1_cb, ___2_dwLockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m6F712F969C05F21E6854E72503759EAFA2909C6B(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_UnlockRegion_m36ACEC67B0192E1CC627850D2AD3CD5E6DFC5C86(__thisValue, ___0_libOffset, ___1_cb, ___2_dwLockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Stat_m1F6AE8FB47EDE4B77CE22F0B1DB2FEE81FB7FB04(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___0_pstatstg, int32_t ___1_grfStatFlag) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}


		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 ____0_pstatstg_empty;
		memset((&____0_pstatstg_empty), 0, sizeof(____0_pstatstg_empty));

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_Stat_m95401AE1E64CAA19092D7282D464DB5DAA0CE0AD(__thisValue, (&____0_pstatstg_empty), ___1_grfStatFlag, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(____0_pstatstg_empty, *___0_pstatstg);

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Clone_m75F797905BA25E8CA4DFC63D35DDF5A6670E3A0E(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___0_ppstm) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_ppstm_empty = NULL;

		try
		{
			ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636* __thisValue = (ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636*)GetManagedObjectInline();
			ComStream_System_Runtime_InteropServices_ComTypes_IStream_Clone_m6ADAD0E8512EBDF272DFB6EA95A6BD6175DC90F7(__thisValue, (&____0_ppstm_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636_ComCallableWrapper(obj));
}

struct MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11_ComCallableWrapper>, IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65
{
	inline MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65*>(this);
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

	virtual int32_t STDCALL IMediaBuffer_SetLength_m52F42D5D1ED83B49ABDEFABB0AE1AE08FEC1838F(int32_t ___0_length) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11* __thisValue = (MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11*)GetManagedObjectInline();
			returnValue = MediaBuffer_NAudio_Dmo_IMediaBuffer_SetLength_mDCB25BF623CDC8107F13AEE21261543C505D1F9E(__thisValue, ___0_length, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}

	virtual int32_t STDCALL IMediaBuffer_GetMaxLength_m38AA93B7D80CB35FADCCE175E49FF4FF5B4BADC7(int32_t* ___0_maxLength) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t ____0_maxLength_empty = 0;

		int32_t returnValue;
		try
		{
			MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11* __thisValue = (MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11*)GetManagedObjectInline();
			returnValue = MediaBuffer_NAudio_Dmo_IMediaBuffer_GetMaxLength_m5B124049E139F412D2595CF97C29FD61473B806B(__thisValue, (&____0_maxLength_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		*___0_maxLength = ____0_maxLength_empty;

		return returnValue;
	}

	virtual int32_t STDCALL IMediaBuffer_GetBufferAndLength_m3E04063C5CBEEE156D7738A400A02A0620103344(intptr_t ___0_bufferPointerPointer, intptr_t ___1_validDataLengthPointer) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		int32_t returnValue;
		try
		{
			MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11* __thisValue = (MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11*)GetManagedObjectInline();
			returnValue = MediaBuffer_NAudio_Dmo_IMediaBuffer_GetBufferAndLength_m7864A77185D5131F233F75460F1DCBFAC1555137(__thisValue, ___0_bufferPointerPointer, ___1_validDataLengthPointer, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		return returnValue;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11_ComCallableWrapper(obj));
}

struct NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper>, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8
{
	inline NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8*>(this);
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

	virtual il2cpp_hresult_t STDCALL IStream_Read_m2C18A70C6ECA31F767BF0CC3477B83523207A900(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbRead) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____0_pv_empty = NULL;
		if (___0_pv != NULL)
		{
			____0_pv_empty = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___1_cb));
		}

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Read_m92D93E15422F8E7AA6FE0970A92919F39FD5E827(__thisValue, ____0_pv_empty, ___1_cb, ___2_pcbRead, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		if (____0_pv_empty != NULL)
		{
			il2cpp_array_size_t _____0_pv_empty_Length = (____0_pv_empty)->max_length;
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_____0_pv_empty_Length); i++)
			{
				(___0_pv)[i] = (____0_pv_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Write_m670F053D42AA47C653A0EF46F51BE37FB71EDDAB(uint8_t* ___0_pv, int32_t ___1_cb, intptr_t ___2_pcbWritten) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____0_pv_unmarshaled = NULL;
		if (___0_pv != NULL)
		{
			____0_pv_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, ___1_cb));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(___1_cb); i++)
			{
				(____0_pv_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___0_pv)[i]);
			}
		}

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Write_m2CC6ED3BBBB91C9B2DFF9312AB5CD200D8C7A236(__thisValue, ____0_pv_unmarshaled, ___1_cb, ___2_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Seek_mB2D1B0341C11684803404EA5B7D2E15178A2E8D3(int64_t ___0_dlibMove, int32_t ___1_dwOrigin, intptr_t ___2_plibNewPosition) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Seek_m3F200D92D11803B2279B860F73A8CD6EEED1A7B3(__thisValue, ___0_dlibMove, ___1_dwOrigin, ___2_plibNewPosition, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_SetSize_mE60689A2DEAC6E1CFBA2BCF5B34F40F50AECD623(int64_t ___0_libNewSize) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_SetSize_m0A80C7C20A343A24628B4E047EA7951625C77EA8(__thisValue, ___0_libNewSize, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m4A1FB28F5A8226242BC536D3A1DAD2A0279C3192(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___0_pstm, int64_t ___1_cb, intptr_t ___2_pcbRead, intptr_t ___3_pcbWritten) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

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

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_CopyTo_mEA49498C9B6A02F18A1C45AACD09F3F1FD3D6539(__thisValue, ____0_pstm_unmarshaled, ___1_cb, ___2_pcbRead, ___3_pcbWritten, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Commit_m01764D26CFDDBC04417FAB93CC592E79F43D1F7E(int32_t ___0_grfCommitFlags) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Commit_m1CDDE6076066A37352EC8F2E570E59E0D63C7598(__thisValue, ___0_grfCommitFlags, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Revert_m7DF44D9E9F3C73A586132085850395B3F68CA8E6() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Revert_m6CEE0B80317E4CEC07237902E8E81A076C2ACA49(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_mC30C8770444E0C9F3CB329146F99F0D7FED492B8(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_LockRegion_m28C5D057ACE791F074CE96598BF713A24E07A3DB(__thisValue, ___0_libOffset, ___1_cb, ___2_dwLockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m6F712F969C05F21E6854E72503759EAFA2909C6B(int64_t ___0_libOffset, int64_t ___1_cb, int32_t ___2_dwLockType) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_UnlockRegion_m6A59115770B8DD8C4E6AA9A9838AA89C55FC0FDF(__thisValue, ___0_libOffset, ___1_cb, ___2_dwLockType, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Stat_m1F6AE8FB47EDE4B77CE22F0B1DB2FEE81FB7FB04(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___0_pstatstg, int32_t ___1_grfStatFlag) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}


		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0 ____0_pstatstg_empty;
		memset((&____0_pstatstg_empty), 0, sizeof(____0_pstatstg_empty));

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Stat_m34C4C16D96E7CDEFDEFB505200A102037AD5959A(__thisValue, (&____0_pstatstg_empty), ___1_grfStatFlag, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_com(____0_pstatstg_empty, *___0_pstatstg);

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IStream_Clone_m75F797905BA25E8CA4DFC63D35DDF5A6670E3A0E(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___0_ppstm) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		RuntimeObject* ____0_ppstm_empty = NULL;

		try
		{
			NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C* __thisValue = (NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C*)GetManagedObjectInline();
			NativeToManagedWrapper_Clone_m6D34867528FA20C62023BCE1E029E495BA408793(__thisValue, (&____0_ppstm_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_ComCallableWrapper(obj));
}
