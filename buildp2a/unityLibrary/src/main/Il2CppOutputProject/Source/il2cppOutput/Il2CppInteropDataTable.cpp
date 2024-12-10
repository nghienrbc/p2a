#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif





struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_marshaled_com;
struct BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_marshaled_com;
struct DirectSoundBufferPositionNotify_tDCE3618B8B69019F737F99910B3E400A1C77FA68;
struct DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshaled_com;
struct DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t;
struct IDirectSoundBuffer_tE22AE55E2066D72020EE7CF7309E16C901F8FB2E;
struct IDirectSound_tE8DB80367829DCBD961343333FBCA0F8C1D04E8F;
struct IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1;
struct IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724;
struct IMFMediaEvent_tEFE6188C434FA7B01103156FFC32275E29F2ADD7;
struct IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC;
struct IMFSample_t98025FCA3C4558D068B5C5A4419116A40C8CC48D;
struct IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65;
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
struct MFT_INPUT_STREAM_INFO_t715090738BAB776F93B0E21B0B4CC3FA2E4B775F;
struct MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_marshaled_com;
struct MFT_OUTPUT_STREAM_INFO_tAF70BE60574D87AD91661E690DA9D8F16C01742A;
struct MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_marshaled_com;
struct MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_marshaled_com;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;
struct WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IAudioRenderClient_t3208BFD9A483D8F9A1A2256D5745BCD7DFD55350 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAudioRenderClient_GetBuffer_mA9ECF7A7FEBCAC52E809FEE7C042C218710063A8(int32_t ___0_numFramesRequested, intptr_t* ___1_dataBufferPointer, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioRenderClient_ReleaseBuffer_m45564FD51BCE86E091D7AF8EB849B7ED9A4664BF(int32_t ___0_numFramesWritten, int32_t ___1_bufferFlags, int32_t* comReturnValue) = 0;
};
struct NOVTABLE IMFCollection_t76869D1E25A90CBD800B52A998C02D99786F2C18 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFCollection_GetElementCount_m17681087E207BE2D9C54B3728E993F80832EC75F(int32_t* ___0_pcElements) = 0;
	virtual il2cpp_hresult_t STDCALL IMFCollection_GetElement_m2BFF0467AC1F5E56D4ED66D7F6612529C44E8951(int32_t ___0_dwElementIndex, Il2CppIUnknown** ___1_ppUnkElement) = 0;
	virtual il2cpp_hresult_t STDCALL IMFCollection_AddElement_m6D99294A696F7F75341E6ED6F9D4D6019A78E673(Il2CppIUnknown* ___0_pUnkElement) = 0;
	virtual il2cpp_hresult_t STDCALL IMFCollection_RemoveElement_mFB8F16326F7BCD9488B118D7E33D7EFC2549B723(int32_t ___0_dwElementIndex, Il2CppIUnknown** ___1_ppUnkElement) = 0;
	virtual il2cpp_hresult_t STDCALL IMFCollection_InsertElementAt_m1625117E3D8B821088D0604166810ACF980CD5F5(int32_t ___0_dwIndex, Il2CppIUnknown* ___1_pUnknown) = 0;
	virtual il2cpp_hresult_t STDCALL IMFCollection_RemoveAllElements_m2252AF07905DA660F1ED580BF7E6A59D5180BF42() = 0;
};
struct NOVTABLE IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFMediaBuffer_Lock_m92ABB24F136D18EF807B89630B9299B99FAC66CA(intptr_t* ___0_ppbBuffer, int32_t* ___1_pcbMaxLength, int32_t* ___2_pcbCurrentLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaBuffer_Unlock_m0B7A3D86B7F2DADC2F7774C5250279D0B5E96038() = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaBuffer_GetCurrentLength_m62311E9A15441DAA69286BA41DF84E3615EDBF29(int32_t* ___0_pcbCurrentLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaBuffer_SetCurrentLength_m6AA824492885BD8BACB47DC0BE1EB830EC6F0477(int32_t ___0_cbCurrentLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaBuffer_GetMaxLength_m8A92C1C6136C6A3998D5A7B7CC88676F37DDEEC9(int32_t* ___0_pcbMaxLength) = 0;
};
struct NOVTABLE IMediaObject_tEF793988BAC48C921BDDA98FB2EC5480CED50971 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IMediaObject_GetStreamCount_mF1D89557AAAEFE316E5245E00EBD1132B6D155BE(int32_t* ___0_inputStreams, int32_t* ___1_outputStreams) = 0;
	virtual int32_t STDCALL IMediaObject_GetInputStreamInfo_m52FE99D196E069DD3AA26D17688E5DC6F0C151D7(int32_t ___0_inputStreamIndex, int32_t* ___1_flags) = 0;
	virtual int32_t STDCALL IMediaObject_GetOutputStreamInfo_m8624DB2450F81DC51A12AF6CB3DCF0FA445AC527(int32_t ___0_outputStreamIndex, int32_t* ___1_flags) = 0;
	virtual int32_t STDCALL IMediaObject_GetInputType_m0A3EDC718E9E62EDFAD601D2AD3CD4196BA80101(int32_t ___0_inputStreamIndex, int32_t ___1_typeIndex, DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshaled_com* ___2_mediaType) = 0;
	virtual int32_t STDCALL IMediaObject_GetOutputType_m5BCB9EE13EB4EE2B967B1A8AA6EF232F321CD93E(int32_t ___0_outputStreamIndex, int32_t ___1_typeIndex, DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshaled_com* ___2_mediaType) = 0;
	virtual int32_t STDCALL IMediaObject_SetInputType_m870F4DADAFC4B4DDDC52822C4902AB43B541F02C(int32_t ___0_inputStreamIndex, DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshaled_com* ___1_mediaType, int32_t ___2_flags) = 0;
	virtual int32_t STDCALL IMediaObject_SetOutputType_m90C3E45E143C576595A732A60628DFC59D142FE3(int32_t ___0_outputStreamIndex, DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshaled_com* ___1_mediaType, int32_t ___2_flags) = 0;
	virtual int32_t STDCALL IMediaObject_GetInputCurrentType_mA2F8F402157AF67BBFAA32EB001472CF51EAFD31(int32_t ___0_inputStreamIndex, DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshaled_com* ___1_mediaType) = 0;
	virtual int32_t STDCALL IMediaObject_GetOutputCurrentType_mBD5112C3E85383B0B6F4FF647063027F2AFC4033(int32_t ___0_outputStreamIndex, DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshaled_com* ___1_mediaType) = 0;
	virtual int32_t STDCALL IMediaObject_GetInputSizeInfo_mEFC3E4ADEA675704D0C49D9CFA5960767316F34E(int32_t ___0_inputStreamIndex, int32_t* ___1_size, int32_t* ___2_maxLookahead, int32_t* ___3_alignment) = 0;
	virtual int32_t STDCALL IMediaObject_GetOutputSizeInfo_m7D160A62D2B32FD9F03EEEBE1CEFDE762968B464(int32_t ___0_outputStreamIndex, int32_t* ___1_size, int32_t* ___2_alignment) = 0;
	virtual int32_t STDCALL IMediaObject_GetInputMaxLatency_mA2D1329E535B745D77DF669E5615EA712E20E4A2(int32_t ___0_inputStreamIndex, int64_t* ___1_referenceTimeMaxLatency) = 0;
	virtual int32_t STDCALL IMediaObject_SetInputMaxLatency_mD1F9A41F3621DE2CA519A48DB8960FCBB9BEF730(int32_t ___0_inputStreamIndex, int64_t ___1_referenceTimeMaxLatency) = 0;
	virtual int32_t STDCALL IMediaObject_Flush_mC531E05DD9869F8769C8C3416E0BA318F1BEEFDE() = 0;
	virtual int32_t STDCALL IMediaObject_Discontinuity_mF7276B552011CC606B9724AE1F8FD0C375A13778(int32_t ___0_inputStreamIndex) = 0;
	virtual int32_t STDCALL IMediaObject_AllocateStreamingResources_mE19161B01C91A1E06728C465D995FE2F564EC62F() = 0;
	virtual int32_t STDCALL IMediaObject_FreeStreamingResources_mE4114BB8F83F04FF408782DAD7325A19AF12C549() = 0;
	virtual int32_t STDCALL IMediaObject_GetInputStatus_mAC2E47089BAD65080E7F2176A3B11E98D9D7E633(int32_t ___0_inputStreamIndex, int32_t* ___1_flags) = 0;
	virtual int32_t STDCALL IMediaObject_ProcessInput_mB6123D91CA34DDFBC6021F59E7DD5F8EF92D7D6A(int32_t ___0_inputStreamIndex, IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65* ___1_mediaBuffer, int32_t ___2_flags, int64_t ___3_referenceTimeTimestamp, int64_t ___4_referenceTimeDuration) = 0;
	virtual int32_t STDCALL IMediaObject_ProcessOutput_m20A0DD04E87F65FA5494CABFB506BFD2355AF3FA(int32_t ___0_flags, int32_t ___1_outputBufferCount, DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_marshaled_com* ___2_outputBuffers, int32_t* ___3_statusReserved) = 0;
	virtual int32_t STDCALL IMediaObject_Lock_m1E13BD4F1CF5B43DAB20747C668984F3F2CF84B5(IL2CPP_VARIANT_BOOL ___0_acquireLock) = 0;
};
struct NOVTABLE IMediaParamInfo_t90A5142555AD5180D7F0D0BA68D3E92AA58C09EF : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IMediaParamInfo_GetParamCount_m5D424DF61F7D6FDD6CD5091108C36FD20291D55A(int32_t* ___0_paramCount) = 0;
	virtual int32_t STDCALL IMediaParamInfo_GetParamInfo_m95816341396E70F0D39ECD89C669A2F3E77095C2(int32_t ___0_paramIndex, MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_marshaled_com* ___1_paramInfo) = 0;
	virtual int32_t STDCALL IMediaParamInfo_GetParamText_m446E3EAEBF5358806164415CEEAEAF23B9775233(int32_t ___0_paramIndex, intptr_t* ___1_paramText) = 0;
	virtual int32_t STDCALL IMediaParamInfo_GetNumTimeFormats_m7B190061DFD8E6DE22749DCA9F8AF3E167243FBB(int32_t* ___0_numTimeFormats) = 0;
	virtual int32_t STDCALL IMediaParamInfo_GetSupportedTimeFormat_m0A930CE64BBD87F8396C2E055B1904CD58953D32(int32_t ___0_formatIndex, Guid_t* ___1_guidTimeFormat) = 0;
	virtual int32_t STDCALL IMediaParamInfo_GetCurrentTimeFormat_mC7BB54F2A368CF8AE870280DC5879469221505CA(Guid_t* ___0_guidTimeFormat, int32_t* ___1_mediaTimeData) = 0;
};
struct NOVTABLE IDirectSoundNotify_tCDF8118BF3AB8E0BFEA7994E34A8CDED9F12297A : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDirectSoundNotify_SetNotificationPositions_m699F41AEFF3D94E472350CEEE84C96EDE2C099FE(uint32_t ___0_dwPositionNotifies, DirectSoundBufferPositionNotify_tDCE3618B8B69019F737F99910B3E400A1C77FA68* ___1_pcPositionNotifies) = 0;
};
struct MFReadWriteClassFactory_t9FEF2D130205A307AFED6185EC2055DC2EB7F0E7  : public Il2CppComObject
{
	static const Il2CppGuid CLSID;

};
struct MMDeviceEnumeratorComObject_tD4348BCE0AF39CF1BA437F43F8C04CF9A74DD311  : public Il2CppComObject
{
	static const Il2CppGuid CLSID;

};
struct ResamplerMediaComObject_t25182DDB5BB0ED8A6B4C48EB09DD28C6905C22E0  : public Il2CppComObject
{
	static const Il2CppGuid CLSID;

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
struct WindowsMediaMp3DecoderComObject_tDACD69384AEFFEF628C4C3CF36AAD6CB19A56286  : public Il2CppComObject
{
	static const Il2CppGuid CLSID;

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
struct IntPtr_t 
{
	void* ___m_value;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct NOVTABLE IAudioClient_t1384A4582F24FB6726D65F4B8D113834103B614F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IAudioClient_Initialize_m95F8C5F82307C311707B53BDE506E017F95737CC(int32_t ___0_shareMode, int32_t ___1_streamFlags, int64_t ___2_hnsBufferDuration, int64_t ___3_hnsPeriodicity, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com* ___4_pFormat, Guid_t* ___5_audioSessionGuid) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioClient_GetBufferSize_mDD6B4C8C3A82E7A7754685E054B856028FCD362F(uint32_t* ___0_bufferSize, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioClient_GetStreamLatency_m6DCF5DB5F348675E809F1F76F89F4216C9692D6D(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioClient_GetCurrentPadding_m5FD6D941C6AFBE0D8C011FE7469156D93D7B4B01(int32_t* ___0_currentPadding, int32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IAudioClient_IsFormatSupported_m48C7CDBB04C71681AD05EED13F4B8DA346A39A21(int32_t ___0_shareMode, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com* ___1_pFormat, intptr_t ___2_closestMatchFormat) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioClient_GetMixFormat_m5129530146F3934D34D457DFFE8FE1A2F1976406(intptr_t* ___0_deviceFormatPointer, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioClient_GetDevicePeriod_m483DE0D64EA1434C4BDB2EE8ADA1F45DCCA50609(int64_t* ___0_defaultDevicePeriod, int64_t* ___1_minimumDevicePeriod, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioClient_Start_m04BF79619B09B9EB6D8D4956FEC45F532B510C2A(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioClient_Stop_m44AB82C52F0EC8E7F9851600051CB67CDA282E10(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioClient_Reset_m7D9CF7D2AFDE146C4AC4DE5B88A78D5C67B86D63(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioClient_SetEventHandle_mC00601E0E38C174107216DF9983DEE02F231D13B(intptr_t ___0_eventHandle, int32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IAudioClient_GetService_m13E297FC30A89662843065A6E0A76C1F85A9B069(Guid_t* ___0_interfaceId, Il2CppIUnknown** ___1_interfacePointer) = 0;
};
struct NOVTABLE IMFActivate_t94D8357A879D3ACAC5C322B1F05D4AC63A5EB5A7 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetItem_m2DB6A4044D235687FAB0D8038F8928385D26042C(Guid_t* ___0_guidKey, intptr_t ___1_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetItemType_m01D97BAF9B701A8FF3AE640F665905CC2827160B(Guid_t* ___0_guidKey, int32_t* ___1_pType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_CompareItem_mC981D16E26DE270281722D8A7345F54DF5E8387E(Guid_t* ___0_guidKey, intptr_t ___1_value, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_Compare_m626B1630F859B9FFA8C3B271B2C661C4C3B49CA3(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pTheirs, int32_t ___1_matchType, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetUINT32_mB1762E6F5E2F4C381F7B11517867D5F6792446F9(Guid_t* ___0_guidKey, int32_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetUINT64_m245876B3CD8EF7960C9A069A3C4E998F8041EC51(Guid_t* ___0_guidKey, int64_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetDouble_m83FAA2490B2D7781948EF7268737B07C13242579(Guid_t* ___0_guidKey, double* ___1_pfValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetGUID_mEF862CD0B4BEC5EE4618E4908840F6FD7E2044DA(Guid_t* ___0_guidKey, Guid_t* ___1_pguidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetStringLength_m7196DF01B09006DFFFED33D9B272A5349A13C328(Guid_t* ___0_guidKey, int32_t* ___1_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetString_m2BDAA8D3CDDF3043094B1124E4540BE9A467EA98(Guid_t* ___0_guidKey, Il2CppChar* ___1_pwszValue, int32_t ___2_cchBufSize, int32_t* ___3_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetAllocatedString_mD13EA807BCC61F17588102BE5ED69AE41613DBBE(Guid_t* ___0_guidKey, Il2CppChar** ___1_ppwszValue, int32_t* ___2_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetBlobSize_mD51267883D0C1CD628B095BB1B696C22F4595EAE(Guid_t* ___0_guidKey, int32_t* ___1_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetBlob_m5D0206EA2605C21B6A0D2D83DA2ABB2F2E9C5772(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize, int32_t* ___3_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetAllocatedBlob_mB8734638487C27C0AA375F4E6649A9B301510BBF(Guid_t* ___0_guidKey, intptr_t* ___1_ip, int32_t* ___2_pcbSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetUnknown_m13889B93C7B28192C823B9F013FA84FC5450FB79(Guid_t* ___0_guidKey, Guid_t* ___1_riid, Il2CppIUnknown** ___2_ppv) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_SetItem_m0106E21AE0F264A5752A89D76046D80C4FDE8192(Guid_t* ___0_guidKey, intptr_t ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_DeleteItem_m7B0C32CE50E871B441CA2D6158D3028434E97DCA(Guid_t* ___0_guidKey) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_DeleteAllItems_m7B8493A8486322E2A35B963DA347ABA3EF42EE19() = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_SetUINT32_mB5649E856548270DB4009428F6468D8C481D867A(Guid_t* ___0_guidKey, int32_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_SetUINT64_m78FDC10F668189BDDAEC0B61F6B4D2E0B347500F(Guid_t* ___0_guidKey, int64_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_SetDouble_m818D193C0EB5E9D17D0E17787A44442837E990FB(Guid_t* ___0_guidKey, double ___1_fValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_SetGUID_m455212BF7396E4079A4A95766C7488A3BA983C18(Guid_t* ___0_guidKey, Guid_t* ___1_guidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_SetString_m29C6876DCBDACDF70BDCAE60B86E33EC34C7209A(Guid_t* ___0_guidKey, Il2CppChar* ___1_wszValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_SetBlob_mA0EB51823A94E635BC1D359652DF24699C5AE296(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_SetUnknown_m9196745DB12673DA4E519860FC8F2781215B3DC7(Guid_t* ___0_guidKey, Il2CppIUnknown* ___1_pUnknown) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_LockStore_m21BB96D1DBD11AE8FC07603A8B7D69B1A5E50005() = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_UnlockStore_m80E9C719D3EFA45B48E36949D1209124770455DA() = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetCount_m08FD369B2486C1F22436FDB5CF8BD7E75ED980AD(int32_t* ___0_pcItems) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_GetItemByIndex_mC32758A898F2B90FF230F7E6AE533A2AC07CD48C(int32_t ___0_unIndex, Guid_t* ___1_pGuidKey, intptr_t ___2_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_CopyAllItems_mAD113C7B57D8D2A2BDC9A658368CDAF6D7546B21(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pDest) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_ActivateObject_mC0BA81E7C123DEF2565AAD18A7EF3964CE4BD442(Guid_t* ___0_riid, Il2CppIUnknown** ___1_ppv) = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_ShutdownObject_m5AF4A84CBDD6279D9BF9490DC46D2719A60CCF0B() = 0;
	virtual il2cpp_hresult_t STDCALL IMFActivate_DetachObject_m850F450197C70E9BBABD4B0F3A25601A813745FE() = 0;
};
struct NOVTABLE IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetItem_m2EDC0014F18CF4FE15B5AFB8E8BCAF200ABCE5D2(Guid_t* ___0_guidKey, intptr_t ___1_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetItemType_m1E9F428FCC686F986C68A320E7A6023D0544F380(Guid_t* ___0_guidKey, int32_t* ___1_pType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_CompareItem_m2B1E9BAF90077F4CE3C71166E1DF7BD945179521(Guid_t* ___0_guidKey, intptr_t ___1_value, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_Compare_m1AB32A1CC66441BDEBA9AFA1AD6BCD430CC2DA2D(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pTheirs, int32_t ___1_matchType, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetUINT32_mE9E304FBDA62A3A70767A0903E623C27B46DD700(Guid_t* ___0_guidKey, int32_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetUINT64_mB657F508DB97D6F7AF0AE7D94C336E19F79F417F(Guid_t* ___0_guidKey, int64_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetDouble_m81CC6B5D34200AFC8333B684AD3C652094659247(Guid_t* ___0_guidKey, double* ___1_pfValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetGUID_m55BEFBC30479C2A65E1A3DAE4C1E14839A6A7C48(Guid_t* ___0_guidKey, Guid_t* ___1_pguidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetStringLength_mC72BDA3BED32A446276B7CC02E9227C7045C3819(Guid_t* ___0_guidKey, int32_t* ___1_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetString_mA175468EAFA55780FB8CD7792A3B14BE5D78A5BE(Guid_t* ___0_guidKey, Il2CppChar* ___1_pwszValue, int32_t ___2_cchBufSize, int32_t* ___3_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetAllocatedString_m05AD4FB0722BE5D4575309923255D81595F0D9FB(Guid_t* ___0_guidKey, Il2CppChar** ___1_ppwszValue, int32_t* ___2_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetBlobSize_mFD1D467C50EB9727B6BE2E6EF2D0B4B536AD73B5(Guid_t* ___0_guidKey, int32_t* ___1_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetBlob_m72EF8A4F1E86B57A1368D45FC6B36135F7564893(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize, int32_t* ___3_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetAllocatedBlob_m4477CE4159AF0BB21ECDBF33F1166E0CEFCFFD0E(Guid_t* ___0_guidKey, intptr_t* ___1_ip, int32_t* ___2_pcbSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetUnknown_m0778A7A2A9417AE2CED1BDF4AE81AF50B640F32A(Guid_t* ___0_guidKey, Guid_t* ___1_riid, Il2CppIUnknown** ___2_ppv) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_SetItem_m90B87DA04C642E2E66F7E6F4F2ABDA9C64B8D902(Guid_t* ___0_guidKey, intptr_t ___1_Value) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_DeleteItem_mA7C314B547A825C015F1CC575ADD2043D509FE06(Guid_t* ___0_guidKey) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_DeleteAllItems_m88952F634923D55F1B46217A117A2BD10FD0A1FD() = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_SetUINT32_mC03E7A674D428E9F5A3EE4CE1B904E0A6AC43179(Guid_t* ___0_guidKey, int32_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_SetUINT64_mE768B403DE1D6F3CCB1433C6AF167A6C7739E8B3(Guid_t* ___0_guidKey, int64_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_SetDouble_mB33AF44E92DF42C708DCD5AC0F31145492AC3BEE(Guid_t* ___0_guidKey, double ___1_fValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_SetGUID_m4F226922CBF8153A53F87C66698DC4FD735038F5(Guid_t* ___0_guidKey, Guid_t* ___1_guidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_SetString_m3BA0C3A0E80B28EFE9FA84172698E147FA77ED23(Guid_t* ___0_guidKey, Il2CppChar* ___1_wszValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_SetBlob_m467931103AC2D418F6D4FD2E26A6D2C1A506D920(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_SetUnknown_mAE7C0639E1F74C63C12E2B49A1364C17366B2FF4(Guid_t* ___0_guidKey, Il2CppIUnknown* ___1_pUnknown) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_LockStore_mA2A35463D562722C5AD51AEFAFD7F941CD08B8EB() = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_UnlockStore_mF31255E751A3689E4BE410146121446FCBBBCFBD() = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetCount_m397B150A2266AFDD0D17BA9893FCE0B2460B4C8A(int32_t* ___0_pcItems) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_GetItemByIndex_m2060271954104C3AE21FDB7D7829D861240D849B(int32_t ___0_unIndex, Guid_t* ___1_pGuidKey, intptr_t ___2_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFAttributes_CopyAllItems_m77215870BD1796604CF0150C0CF554E399C9B0BF(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pDest) = 0;
};
struct NOVTABLE IMFByteStream_tEE5E9EF3FCF36A94489A937E141E1DADBD141269 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_GetCapabilities_m06FD812893E39122DF05E7687AFD01F0C4A1B3B0(int32_t* ___0_pdwCapabiities) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_GetLength_mBA9552E0A7DF9EB83057439D461FC24CE032B859(int64_t* ___0_pqwLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_SetLength_m857A7B8E7C1E20C75ECCEFBD2DE5AD750779BC0C(int64_t ___0_qwLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_GetCurrentPosition_m0FFA5CD6A3FC3EF370153FCAEA78BC789A0FCE4E(int64_t* ___0_pqwPosition) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_SetCurrentPosition_m56A7A77EB8F627EA59429CD601CA4CAA30A7718E(int64_t ___0_qwPosition) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_IsEndOfStream_m419AF15766E4C9116B2B672F6E72125D2F3D3C78(int32_t* ___0_pfEndOfStream) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_Read_mC3F012B1B60CC8ADE56880DA0E0C8BF4A09429B6(intptr_t ___0_pb, int32_t ___1_cb, int32_t* ___2_pcbRead) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_BeginRead_m5DE98251652899920D354DB816C23BC1B14E8442(intptr_t ___0_pb, int32_t ___1_cb, intptr_t ___2_pCallback, intptr_t ___3_punkState) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_EndRead_mD4165645AC34ED7A0C5030B656A558762209ED87(intptr_t ___0_pResult, int32_t* ___1_pcbRead) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_Write_m61BE8BEBA3C5EC83B517A4BD1AF500E446B9E6FF(intptr_t ___0_pb, int32_t ___1_cb, int32_t* ___2_pcbWritten) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_BeginWrite_m12C36801453BD3E50AD74247927EF97F468A8BE1(intptr_t ___0_pb, int32_t ___1_cb, intptr_t ___2_pCallback, intptr_t ___3_punkState) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_EndWrite_mC09305A1E027E3F4411DC650E3FE74D64194712D(intptr_t ___0_pResult, int32_t* ___1_pcbWritten) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_Seek_m88B09A3E4067A4E89CCD71A8937FCCEA9CFC75A8(int32_t ___0_SeekOrigin, int64_t ___1_llSeekOffset, int32_t ___2_dwSeekFlags, int64_t* ___3_pqwCurrentPosition) = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_Flush_m0FF084D0EFCA0A977B401C5E12ADF5D16BFFF8CD() = 0;
	virtual il2cpp_hresult_t STDCALL IMFByteStream_Close_m810CCE2CC745D3E42717B242F10820CD5A90E855() = 0;
};
struct NOVTABLE IMFMediaEvent_tEFE6188C434FA7B01103156FFC32275E29F2ADD7 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetItem_m5A63742C2C70AB913D2A19E7D97F03E571DDC0BF(Guid_t* ___0_guidKey, intptr_t ___1_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetItemType_m7CAF96089AA17FF288A9AB1C5AAEAFF27B1FB6D3(Guid_t* ___0_guidKey, int32_t* ___1_pType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_CompareItem_mE54F7135D4517081260E4BFEAE69C9F0E8C3D96C(Guid_t* ___0_guidKey, intptr_t ___1_value, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_Compare_mB123A1B4BC5CB8540B158C457880FAF77D617881(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pTheirs, int32_t ___1_matchType, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetUINT32_mC28B732B7CFA7016CA35EE42B15BC01322FB9AF6(Guid_t* ___0_guidKey, int32_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetUINT64_m8CFC35DFCF72CBDE0ADF6BFD72609194B4E56FCE(Guid_t* ___0_guidKey, int64_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetDouble_mC45B88F8005603F5C59B263DF8EEAB12BB74170F(Guid_t* ___0_guidKey, double* ___1_pfValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetGUID_mECCC3D28A1159340C2A31E7719F50D7ED859A6FB(Guid_t* ___0_guidKey, Guid_t* ___1_pguidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetStringLength_m666530EC4F3769BC2930D9A4606DA7A96CE7C912(Guid_t* ___0_guidKey, int32_t* ___1_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetString_m092D32AC14AB930A4F2DB8E076E854BB112F46FB(Guid_t* ___0_guidKey, Il2CppChar* ___1_pwszValue, int32_t ___2_cchBufSize, int32_t* ___3_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetAllocatedString_m3E68B8FACC84BA09FBDCD18D5B44D44D4F1967BD(Guid_t* ___0_guidKey, Il2CppChar** ___1_ppwszValue, int32_t* ___2_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetBlobSize_m32D30019031486E28FB19FC33B41E76975A66CFE(Guid_t* ___0_guidKey, int32_t* ___1_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetBlob_mA9B15058E9DC65C4F034AB5EDEE85877CC0463F1(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize, int32_t* ___3_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetAllocatedBlob_mA3E220B69DC7891E25DB3D4C89BE68F6C24CE66D(Guid_t* ___0_guidKey, intptr_t* ___1_ip, int32_t* ___2_pcbSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetUnknown_m4C478C7F241DC56B73DF9CD54B7B475D2F9F5E1A(Guid_t* ___0_guidKey, Guid_t* ___1_riid, Il2CppIUnknown** ___2_ppv) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_SetItem_m7803A23CA401482F3F3D0E8BF584D085F3A0BE46(Guid_t* ___0_guidKey, intptr_t ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_DeleteItem_mAFAC620628B8F6053FE311B1FE7C771E9B2B8928(Guid_t* ___0_guidKey) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_DeleteAllItems_m2F642D88CA60FD185D450CD5C8E6840AAA4A957C() = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_SetUINT32_mA55C949A94A362E66CE9CFE72E4A32B1C6B7C09D(Guid_t* ___0_guidKey, int32_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_SetUINT64_mF556CFC902196C85C90EC14CC361A3DB7A87BFC4(Guid_t* ___0_guidKey, int64_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_SetDouble_m72F170583B755ADA98CCAD3DF7A5F98460F8A495(Guid_t* ___0_guidKey, double ___1_fValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_SetGUID_m29EA4B94C1058AB43CEE327CD40FD0F33254E7A4(Guid_t* ___0_guidKey, Guid_t* ___1_guidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_SetString_mE7FDBB9ED46F4018090B04807BC35655BC059090(Guid_t* ___0_guidKey, Il2CppChar* ___1_wszValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_SetBlob_mFD070528F7ED4FE69ED073138673D711DBB1D47D(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_SetUnknown_mC6C2E5F30D72539B03D7C72BB78DDB41D3C98426(Guid_t* ___0_guidKey, Il2CppIUnknown* ___1_pUnknown) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_LockStore_mF0F4F77D2F6190036A5A5506021FC7B158DE1BEA() = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_UnlockStore_mF4CEE3785DEC62AF5C1FCBDBFBD130ED77F29855() = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetCount_m97CF15EB25A158100742EFE9B02602E22274D99E(int32_t* ___0_pcItems) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetItemByIndex_m83A51653FBB69CDCE9B33B77B4D93039DF546D8F(int32_t ___0_unIndex, Guid_t* ___1_pGuidKey, intptr_t ___2_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_CopyAllItems_m58745F39986D429F8E0F90660EC8FE8BBE35BC3E(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pDest) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetType_mC22286406BE8EF56B7EF5FC0E5C0C4EC987DF257(int32_t* ___0_pmet) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetExtendedType_m660AB9F4333A85C5F494F2F4804CBBE8743AD099(Guid_t* ___0_pguidExtendedType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetStatus_m42801A0F9AD78F0EC04C9103EA1EC1892227623F(int32_t* ___0_phrStatus) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaEvent_GetValue_m31237397B3727C7A7A320645D65D01C5BF02B0F8(intptr_t ___0_pvValue) = 0;
};
struct NOVTABLE IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetItem_mFFB02D7DAB7AC17D9C7299E9E61FB2B033368575(Guid_t* ___0_guidKey, intptr_t ___1_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetItemType_m293856CABD4D8D446F326E51BD11F72E6C9C8263(Guid_t* ___0_guidKey, int32_t* ___1_pType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_CompareItem_m8BCF01DA581474E0F758F55F9590E775096A0E62(Guid_t* ___0_guidKey, intptr_t ___1_value, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_Compare_m9A8FA3371F6939F2B527D8072271DE6771FF278A(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pTheirs, int32_t ___1_matchType, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetUINT32_mC88D06CC330E8782E749B6DB57B14E79677CDD51(Guid_t* ___0_guidKey, int32_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetUINT64_m60748F1E832D63C5E9AB8AD4F049B0F7C1C62911(Guid_t* ___0_guidKey, int64_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetDouble_m73CC2413D1BADF28BF1FA6570C5B3AE5E420A1B9(Guid_t* ___0_guidKey, double* ___1_pfValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetGUID_m1F75431A319B9CA55F332ECE7A44223339EF0118(Guid_t* ___0_guidKey, Guid_t* ___1_pguidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetStringLength_mA2F1B50EF468250271405904748C6BE854DED7B8(Guid_t* ___0_guidKey, int32_t* ___1_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetString_mDFC89759F2E773111C8BE50C0C4F01C904CB2C47(Guid_t* ___0_guidKey, Il2CppChar* ___1_pwszValue, int32_t ___2_cchBufSize, int32_t* ___3_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetAllocatedString_m9E0AC6FD4D4F68D0E0076863770B578C1C72A557(Guid_t* ___0_guidKey, Il2CppChar** ___1_ppwszValue, int32_t* ___2_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetBlobSize_m28A0536B04FBCE66822A8FEF4521C32E74B24D7B(Guid_t* ___0_guidKey, int32_t* ___1_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetBlob_mDCE06728519677E8FBB158C850218FDE0A0E8325(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize, int32_t* ___3_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetAllocatedBlob_m4A6720BBB9A12A941C1112D4E29379DE5547FA2E(Guid_t* ___0_guidKey, intptr_t* ___1_ip, int32_t* ___2_pcbSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetUnknown_m7A2CA5D2B3DF2FA6DD93B531BF754301ABFFF600(Guid_t* ___0_guidKey, Guid_t* ___1_riid, Il2CppIUnknown** ___2_ppv) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_SetItem_m11B28F9AB3EF67C14503D4A8B0F4934D81BE27CE(Guid_t* ___0_guidKey, intptr_t ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_DeleteItem_m3C71F42F444D6BE8884E4C0970158FFDA10D47EC(Guid_t* ___0_guidKey) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_DeleteAllItems_mE310BCB5E9656573BC8C645AD51D2EF71AA6F891() = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_SetUINT32_m42F6988CD2D23CE7A4ACC3AC17BF89F817378701(Guid_t* ___0_guidKey, int32_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_SetUINT64_m719494ABB5A5319312B5EA5B0E20E499E956E98B(Guid_t* ___0_guidKey, int64_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_SetDouble_m4ACC516399FBA75AE94D284E354CE68A0932B678(Guid_t* ___0_guidKey, double ___1_fValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_SetGUID_mEF9CD66436036E73A1AAE8FC1A4711EBD98CAE31(Guid_t* ___0_guidKey, Guid_t* ___1_guidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_SetString_mEFA003D24BD28D22706B281AAB43DDB6CF17F120(Guid_t* ___0_guidKey, Il2CppChar* ___1_wszValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_SetBlob_m1A78129FB05766B9806D0A5E9061A59B74BEEF68(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_SetUnknown_mFEBC901328653DDA224D55ED01BB8374EDCEEE35(Guid_t* ___0_guidKey, Il2CppIUnknown* ___1_pUnknown) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_LockStore_mE1EF0922768EA4612FC74CD3715AABCEDB17DE78() = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_UnlockStore_m229475A58A10F12165ED8FAE8C4488D1F2E74783() = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetCount_mFAB045D74588028310FA51BDF761DE2F42F92A1F(int32_t* ___0_pcItems) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetItemByIndex_mBB55537439D344C32A12409301F7AC30F864D1F1(int32_t ___0_unIndex, Guid_t* ___1_pGuidKey, intptr_t ___2_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_CopyAllItems_m6C1C19EBED9371FC129EC7B712DA5788F60377F2(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pDest) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetMajorType_m4EF6BC87618201036B85B4CF4148FCBBF57A47C4(Guid_t* ___0_pguidMajorType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_IsCompressedFormat_m3753FFC3C38A2A4F2D925D28794C2CE19F6106AF(int32_t* ___0_pfCompressed) = 0;
	virtual int32_t STDCALL IMFMediaType_IsEqual_m5623A68B3549CEA4CB45D9DFDBF2C320744F3F3B(IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC* ___0_pIMediaType, int32_t* ___1_pdwFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_GetRepresentation_m765D7E3C71BEDE05BCB2D98F8EE6A2A1ED89D02B(Guid_t ___0_guidRepresentation, intptr_t* ___1_ppvRepresentation) = 0;
	virtual il2cpp_hresult_t STDCALL IMFMediaType_FreeRepresentation_m7B31727888DCA8F610C8D82787C650C0DDADB908(Guid_t ___0_guidRepresentation, intptr_t ___1_pvRepresentation) = 0;
};
struct NOVTABLE IMFReadWriteClassFactory_t2188A2AFE4914E253D6F7B8A5B8EA6757F36C93A : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFReadWriteClassFactory_CreateInstanceFromURL_m3BEB0212C852A47DC7F04C7C87B4F0DAC4AEBE09(Guid_t* ___0_clsid, Il2CppChar* ___1_pwszURL, IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___2_pAttributes, Guid_t* ___3_riid, Il2CppIUnknown** ___4_ppvObject) = 0;
	virtual il2cpp_hresult_t STDCALL IMFReadWriteClassFactory_CreateInstanceFromObject_mA7ED74134F135FE9264F6F5EE034253DC1E367B8(Guid_t* ___0_clsid, Il2CppIUnknown* ___1_punkObject, IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___2_pAttributes, Guid_t* ___3_riid, Il2CppIUnknown** ___4_ppvObject) = 0;
};
struct NOVTABLE IMFSample_t98025FCA3C4558D068B5C5A4419116A40C8CC48D : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetItem_mA22D646901F51D354C28730976F2CD34D2AF16A0(Guid_t* ___0_guidKey, intptr_t ___1_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetItemType_mD876C5BFFB867EE98B949162A1F4D7DDD38FD3C8(Guid_t* ___0_guidKey, int32_t* ___1_pType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_CompareItem_m515D17B9695FEA2700131DB78A619B6F26321FB7(Guid_t* ___0_guidKey, intptr_t ___1_value, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_Compare_m054F850248E5A95F3ACCD9799FB14EC580BEBD01(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pTheirs, int32_t ___1_matchType, int32_t* ___2_pbResult) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetUINT32_m98CC88A18749F20F4B8087630291126A480FAE2E(Guid_t* ___0_guidKey, int32_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetUINT64_mB4489050144509A04AE3B5C16102A58920B6CD53(Guid_t* ___0_guidKey, int64_t* ___1_punValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetDouble_mF6D6759FA6049C4B27906EB7C3AA581E7E657B6F(Guid_t* ___0_guidKey, double* ___1_pfValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetGUID_m639D5656254576993AE6E02F203CD5AA63FF87FF(Guid_t* ___0_guidKey, Guid_t* ___1_pguidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetStringLength_m3FCF90735BEAF41B1975884D861B497E7989489A(Guid_t* ___0_guidKey, int32_t* ___1_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetString_m7331D67AF9E555706B97526C83FB35518866383B(Guid_t* ___0_guidKey, Il2CppChar* ___1_pwszValue, int32_t ___2_cchBufSize, int32_t* ___3_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetAllocatedString_m866918BCF5A160C6086CE88ACA0BC14C24D76BED(Guid_t* ___0_guidKey, Il2CppChar** ___1_ppwszValue, int32_t* ___2_pcchLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetBlobSize_m7B4B32C4CC3C4A5827E84F65A62B232F2F5BCBC4(Guid_t* ___0_guidKey, int32_t* ___1_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetBlob_mF2FAE28FF77822D7D63E28AD15C9D2BABCB974A0(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize, int32_t* ___3_pcbBlobSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetAllocatedBlob_mE97C8510C8E7DC1BC9158769B6ED748DEAC09F10(Guid_t* ___0_guidKey, intptr_t* ___1_ip, int32_t* ___2_pcbSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetUnknown_mA2C1247D6B21115B1D2A4302ABE4696A5D0DFD35(Guid_t* ___0_guidKey, Guid_t* ___1_riid, Il2CppIUnknown** ___2_ppv) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetItem_mED8E646476724C7FEEB1ED349248E11478C873C7(Guid_t* ___0_guidKey, intptr_t ___1_value) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_DeleteItem_m7949C4A911945DEA563A8FE1F68ED78B9C26072C(Guid_t* ___0_guidKey) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_DeleteAllItems_m634127534645CA473EBB6C6C0B5B2C87A149D0FC() = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetUINT32_m875372E2DE5888DA515DB5DCECBA9D917355FA17(Guid_t* ___0_guidKey, int32_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetUINT64_mA957D5D11439A233E14E20C6A53F43E9FD993A04(Guid_t* ___0_guidKey, int64_t ___1_unValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetDouble_m408C7E8125515855DE7918507B05E15B514854F2(Guid_t* ___0_guidKey, double ___1_fValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetGUID_mE0483B28057D25E0278B316F7C70306D4736BEC5(Guid_t* ___0_guidKey, Guid_t* ___1_guidValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetString_m2DC0C75F19AB288C87A30CE484B5AD67C0D1345F(Guid_t* ___0_guidKey, Il2CppChar* ___1_wszValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetBlob_m76A6E0F8755B9E10B868AC07EFA7B6054A47EDFF(Guid_t* ___0_guidKey, uint8_t* ___1_pBuf, int32_t ___2_cbBufSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetUnknown_m8598E9D23417865299F532A2077D977E4D200B14(Guid_t* ___0_guidKey, Il2CppIUnknown* ___1_pUnknown) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_LockStore_mD6163269249DD003D631DC9B7B43D5E221389ECD() = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_UnlockStore_m2C70A31CCB22818732C291B7B7660D615E3FF0B3() = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetCount_m0DC5BAE864A13F824BF44D7C2701FEEB93C03F2E(int32_t* ___0_pcItems) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetItemByIndex_mB9F4FD9EC1807312AF8370EEB76C4332EC3B7FA6(int32_t ___0_unIndex, Guid_t* ___1_pGuidKey, intptr_t ___2_pValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_CopyAllItems_mC190FDA3859AE7DFA497217D76CF2949FB063CFC(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___0_pDest) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetSampleFlags_m9B3B8D56ABE84978EF1D936469784A947451D6DF(int32_t* ___0_pdwSampleFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetSampleFlags_m34A7BAFD8FC7E5D5CBCBE8DBEF09BA0A01FC68B5(int32_t ___0_dwSampleFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetSampleTime_m2622389DEE55DC1485B3A00C0C0DF38ADE98A497(int64_t* ___0_phnsSampletime) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetSampleTime_mB3851BA582A6BFC4D026332842454ED24879DC62(int64_t ___0_hnsSampleTime) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetSampleDuration_mF70012444B2B52AC6EC2DB72D7F33D579C8CE397(int64_t* ___0_phnsSampleDuration) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_SetSampleDuration_m56667816D9B8D9A81642B08B4672F8A8810691CC(int64_t ___0_hnsSampleDuration) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetBufferCount_mCBA9A58DDD1D3E1C3A21CE332CF2CEA113B4334D(int32_t* ___0_pdwBufferCount) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetBufferByIndex_mF4097378DBABEDD606BF2749C159DCB9100B7C4C(int32_t ___0_dwIndex, IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724** ___1_ppBuffer) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_ConvertToContiguousBuffer_mC0878194C12BBC719D17E680FD760943717928C9(IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724** ___0_ppBuffer) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_AddBuffer_mAA0832115F1C9D87D7AE621CE3067F0B90623DE5(IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724* ___0_pBuffer) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_RemoveBufferByIndex_mDC6B2553378AC2A9C5BDC37A9575443F0296172C(int32_t ___0_dwIndex) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_RemoveAllBuffers_m525C232D742FDB023E6C52D7714C6BB14EECDAB0() = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_GetTotalLength_m573C7FC3DD4304657B4B34FBCF2A1AEB92B637F7(int32_t* ___0_pcbTotalLength) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSample_CopyToBuffer_m6F935A102A6A20857B7F37887303333668AD04C5(IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724* ___0_pBuffer) = 0;
};
struct NOVTABLE IMFSinkWriter_t612D4866594867B7A4EF00C3C2CD858130B928F0 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_AddStream_mF395844F8849D91E593DAFCFB0CCCA83E2740EEC(IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC* ___0_pTargetMediaType, int32_t* ___1_pdwStreamIndex) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_SetInputMediaType_m7A6EBF78DAB53F93313035E2B65DEFBF92218A15(int32_t ___0_dwStreamIndex, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC* ___1_pInputMediaType, IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1* ___2_pEncodingParameters) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_BeginWriting_m969F2BB7D47D95C27555876E04AE16B2B5715A12() = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_WriteSample_mBE6439C3632D0BA112E5EFAE1F51ADC688FEF87D(int32_t ___0_dwStreamIndex, IMFSample_t98025FCA3C4558D068B5C5A4419116A40C8CC48D* ___1_pSample) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_SendStreamTick_m35553085A0A42D013D9EBB589BAC0548D0E9B1F5(int32_t ___0_dwStreamIndex, int64_t ___1_llTimestamp) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_PlaceMarker_mA4FA49F8DDCCF71D309B76E5D4E5732F23ADE034(int32_t ___0_dwStreamIndex, intptr_t ___1_pvContext) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_NotifyEndOfSegment_mA637A0F408D65F3401CB56FC8FF1BEA8B395AF6D(int32_t ___0_dwStreamIndex) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_Flush_mC03215E2F9266C776E485B81FE95FF87E89E2C18(int32_t ___0_dwStreamIndex) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_DoFinalize_m579A88ADE5E2FC47D282DB77794A4E2B67829902() = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_GetServiceForStream_m2B9AB95014F1B378C1349264DE5B7E3E73CDF539(int32_t ___0_dwStreamIndex, Guid_t* ___1_guidService, Guid_t* ___2_riid, intptr_t* ___3_ppvObject) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSinkWriter_GetStatistics_m8069B887C1E6B4AF2223470AFDAA3D39B03094DC(int32_t ___0_dwStreamIndex, MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_marshaled_com* ___1_pStats) = 0;
};
struct NOVTABLE IMFSourceReader_t4620D92DE02E7E43A344CD4F4948EB27B3149085 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFSourceReader_GetStreamSelection_m344447059A7CAEEC361F488934D79B05DF434B67(int32_t ___0_dwStreamIndex, int32_t* ___1_pSelected) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSourceReader_SetStreamSelection_mE690B51B86BC90EA13DAAE5CDCBF6E77269294C7(int32_t ___0_dwStreamIndex, int32_t ___1_pSelected) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSourceReader_GetNativeMediaType_m14835C2341777B5A978A5CFCA461C8A609711C20(int32_t ___0_dwStreamIndex, int32_t ___1_dwMediaTypeIndex, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC** ___2_ppMediaType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSourceReader_GetCurrentMediaType_m7FB805A8460ADC004DCACE8AE4DB60377ECCA508(int32_t ___0_dwStreamIndex, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC** ___1_ppMediaType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSourceReader_SetCurrentMediaType_m0C08E2FBD11B87422202A2BE1C046B4B369CAAC3(int32_t ___0_dwStreamIndex, intptr_t ___1_pdwReserved, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC* ___2_pMediaType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSourceReader_SetCurrentPosition_m71C8AF904B99A7CF9A6BA0CF7FB4A10219CA103E(Guid_t* ___0_guidTimeFormat, intptr_t ___1_varPosition) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSourceReader_ReadSample_m178DA44305C0C38ACCEC5FCAEA03962228A48789(int32_t ___0_dwStreamIndex, int32_t ___1_dwControlFlags, int32_t* ___2_pdwActualStreamIndex, int32_t* ___3_pdwStreamFlags, uint64_t* ___4_pllTimestamp, IMFSample_t98025FCA3C4558D068B5C5A4419116A40C8CC48D** ___5_ppSample) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSourceReader_Flush_m5FBBE9F6568E02CC9933AC539FB05EA40275A791(int32_t ___0_dwStreamIndex) = 0;
	virtual il2cpp_hresult_t STDCALL IMFSourceReader_GetServiceForStream_mE1FA55E5840239554B5CA29C61FB5B23AE429E7A(int32_t ___0_dwStreamIndex, Guid_t* ___1_guidService, Guid_t* ___2_riid, intptr_t* ___3_ppvObject) = 0;
	virtual int32_t STDCALL IMFSourceReader_GetPresentationAttribute_m1CCD018CCDF655F1673A5D59F45E3E1CF0FEFDBD(int32_t ___0_dwStreamIndex, Guid_t* ___1_guidAttribute, intptr_t ___2_pvarAttribute) = 0;
};
struct NOVTABLE IMFTransform_t5CA42C4409B0962D27EADF854065F1F69DDDFB1E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetStreamLimits_m86FE32C5066E0C9442D7C841EDD9378B30464CA0(int32_t* ___0_pdwInputMinimum, int32_t* ___1_pdwInputMaximum, int32_t* ___2_pdwOutputMinimum, int32_t* ___3_pdwOutputMaximum) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetStreamCount_m31C1BEE835F225EA2E1BB3D7202CC6D7A7A060BF(int32_t* ___0_pcInputStreams, int32_t* ___1_pcOutputStreams) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetStreamIds_mFA3732411DDF6C95042959F721495DE85B7B94E8(int32_t ___0_dwInputIdArraySize, intptr_t ___1_pdwInputIDs, int32_t ___2_dwOutputIdArraySize, intptr_t ___3_pdwOutputIDs) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetInputStreamInfo_mDB74FD0CF3B994454605F4BEB17497ED89B4FD6E(int32_t ___0_dwInputStreamId, MFT_INPUT_STREAM_INFO_t715090738BAB776F93B0E21B0B4CC3FA2E4B775F* ___1_pStreamInfo) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetOutputStreamInfo_mBACC4589DC8DA983E17A4D277A05CA0E343B1266(int32_t ___0_dwOutputStreamId, MFT_OUTPUT_STREAM_INFO_tAF70BE60574D87AD91661E690DA9D8F16C01742A* ___1_pStreamInfo) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetAttributes_mB793420AC83D0649AC15790D82F568CFF4802044(IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1** ___0_pAttributes) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetInputStreamAttributes_mFAA7F049D949EEF1D93BF2441634525CF144E225(int32_t ___0_dwInputStreamId, IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1** ___1_pAttributes) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetOutputStreamAttributes_m314CD40546EE5A3265F77F55EEC2B70CA59761A7(int32_t ___0_dwOutputStreamId, IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1** ___1_pAttributes) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_DeleteInputStream_mD67D0ABC90A6820CA1844B7BDCB284984511B83F(int32_t ___0_dwOutputStreamId) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_AddInputStreams_mA4BBE6AABFBD70152ADB859F1D3BEE5F7A32B6B9(int32_t ___0_cStreams, intptr_t ___1_adwStreamIDs) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetInputAvailableType_mBE45753C197954DC99CE741CFA7B12FA333FE6F9(int32_t ___0_dwInputStreamId, int32_t ___1_dwTypeIndex, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC** ___2_ppType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetOutputAvailableType_m0053A8D76536ADDB58347DAD22BB4B85B045C7FB(int32_t ___0_dwOutputStreamId, int32_t ___1_dwTypeIndex, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC** ___2_ppType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_SetInputType_mA42CAA999C80C3439CFF7BC75331773658DDEB32(int32_t ___0_dwInputStreamId, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC* ___1_pType, int32_t ___2_dwFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_SetOutputType_mBB832F2BB2EE25B6ABF80D75AE72387C979A4526(int32_t ___0_dwOutputStreamId, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC* ___1_pType, int32_t ___2_dwFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetInputCurrentType_mEC4608723DA60A8497801F5E652B8051519DF54A(int32_t ___0_dwInputStreamId, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC** ___1_ppType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetOutputCurrentType_m5E32B7453F43D35EF932BF88F10483C518CE9767(int32_t ___0_dwOutputStreamId, IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC** ___1_ppType) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetInputStatus_mDB4E997D8983A0D5B9E1FA82F5D10DB14092BF46(int32_t ___0_dwInputStreamId, int32_t* ___1_pdwFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_GetOutputStatus_mFC1FC882FD960ECC81416529BA10688C428CCE23(int32_t ___0_dwInputStreamId, int32_t* ___1_pdwFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_SetOutputBounds_mF96AACE7BABE349D2793B8911E9DA34E5F4BD146(int64_t ___0_hnsLowerBound, int64_t ___1_hnsUpperBound) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_ProcessEvent_mA7997A9DCE3B310E1C103331DBC5DC5EA195B525(int32_t ___0_dwInputStreamId, IMFMediaEvent_tEFE6188C434FA7B01103156FFC32275E29F2ADD7* ___1_pEvent) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_ProcessMessage_m890E0AF9FEC192FB43DE87B5039763E21675F545(int32_t ___0_eMessage, intptr_t ___1_ulParam) = 0;
	virtual il2cpp_hresult_t STDCALL IMFTransform_ProcessInput_m6E1D519E9783F76AAABF72543D824162EC0AAAB8(int32_t ___0_dwInputStreamId, IMFSample_t98025FCA3C4558D068B5C5A4419116A40C8CC48D* ___1_pSample, int32_t ___2_dwFlags) = 0;
	virtual int32_t STDCALL IMFTransform_ProcessOutput_mD778EAEB6DF4BDE8818D51CF9940E7BE5D962A4F(int32_t ___0_dwFlags, int32_t ___1_cOutputBufferCount, MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_marshaled_com* ___2_pOutputSamples, int32_t* ___3_pdwStatus) = 0;
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
struct NOVTABLE IDirectSound_tE8DB80367829DCBD961343333FBCA0F8C1D04E8F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDirectSound_CreateSoundBuffer_m9289809405848AEF992B2AF3935616BA8798F3EA(BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_marshaled_com* ___0_desc, Il2CppIUnknown** ___1_dsDSoundBuffer, intptr_t ___2_pUnkOuter) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSound_GetCaps_m4143923CF36F5D0CD4999F9C8A8067A8323E7B7B(intptr_t ___0_caps) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSound_DuplicateSoundBuffer_m06D5329AA21FF419C1AC2A9A239E9BFD8C977E62(IDirectSoundBuffer_tE22AE55E2066D72020EE7CF7309E16C901F8FB2E* ___0_bufferOriginal, IDirectSoundBuffer_tE22AE55E2066D72020EE7CF7309E16C901F8FB2E* ___1_bufferDuplicate) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSound_SetCooperativeLevel_m2B44B47988343D70E8E4D166F9B4DD45439981D8(intptr_t ___0_HWND, uint32_t ___1_dwLevel) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSound_Compact_mC0EA866F8B5C912C17FAE8FAC83431832B5956A0() = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSound_GetSpeakerConfig_mF71CE95917052A9E7F40BCC3E72AC6E5C3A88BD5(intptr_t ___0_pdwSpeakerConfig) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSound_SetSpeakerConfig_m216B49B78039429453C8694DC117AE1F60021E54(uint32_t ___0_pdwSpeakerConfig) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSound_Initialize_m32C675604E3C9DE9C52017B39F6860FCB030AFF4(Guid_t* ___0_guid) = 0;
};
struct NOVTABLE IDirectSoundBuffer_tE22AE55E2066D72020EE7CF7309E16C901F8FB2E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_GetCaps_m70FD48ECA792632D797AD96B20DE0BB3A46D2274(BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_marshaled_com* ___0_pBufferCaps) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_GetCurrentPosition_m9F729BCD0FAF951C7AED4CBEB20C35113785BE12(uint32_t* ___0_currentPlayCursor, uint32_t* ___1_currentWriteCursor) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_GetFormat_mFBDA08A86E47024DFA78E9D6F95ACADD9FF9E816() = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_GetVolume_m50462A78F943998AF67BA9454E5F9C6F020B9A7A(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_GetPan_m4463C0CE8579368F4F7A70FCE5E25BCD4CBA0B3D(uint32_t* ___0_pan) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_GetFrequency_m6382AB221610ABEDF1307DEF5B68FA9BC3435825(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_GetStatus_mC47EF4F54A6039505DB0A45954E8678378CB3303(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_Initialize_m4FAFBDBAB9CBD48DFDCFFED4E53AEBBF701EA9E5(IDirectSound_tE8DB80367829DCBD961343333FBCA0F8C1D04E8F* ___0_directSound, BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_marshaled_com* ___1_desc) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_Lock_m3366285C80187112D3F060A20ED252F7A7A1FA2D(int32_t ___0_dwOffset, uint32_t ___1_dwBytes, intptr_t* ___2_audioPtr1, int32_t* ___3_audioBytes1, intptr_t* ___4_audioPtr2, int32_t* ___5_audioBytes2, uint32_t ___6_dwFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_Play_mD3E042A65241FE93270A7D5AC5BCCF039A85D171(uint32_t ___0_dwReserved1, uint32_t ___1_dwPriority, uint32_t ___2_dwFlags) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_SetCurrentPosition_mD316145503456AF55D4AE7DFD0177C85E18E9F23(uint32_t ___0_dwNewPosition) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_SetFormat_mEDD600D858D70012B02F557F260002AEBF966D7B(WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshaled_com* ___0_pcfxFormat) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_SetVolume_m4AF4C4A2A9158CD7E60BF57EEAD73AE54B01AE39(int32_t ___0_volume) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_SetPan_m7F0C283FBCEC3B63AA9A70D33FA110453DD76EFA(uint32_t ___0_pan) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_SetFrequency_mD9EC8066F3F63ADC1901839B8D70D6DE3880741C(uint32_t ___0_frequency) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_Stop_m4CC73B5AAA4E40E0B39C0F228986B2D8A83B7B03() = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_Unlock_m2F70B2647C59BE513FF1F0C6BE429EEED73B0645(intptr_t ___0_pvAudioPtr1, int32_t ___1_dwAudioBytes1, intptr_t ___2_pvAudioPtr2, int32_t ___3_dwAudioBytes2) = 0;
	virtual il2cpp_hresult_t STDCALL IDirectSoundBuffer_Restore_mDB7E47F966DD1DD5F3D5096E729816693399DDDA() = 0;
};
struct ZlibException_tE60ACF8A3EE60E5FC7752546ACD1BEDFA8A4FF93  : public Exception_t
{
	static const Il2CppGuid CLSID;

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C void AcmDriverDetails_t7D54F87CDCA5B7BF61AB326F9EA83F7386D032A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AcmDriverDetails_t7D54F87CDCA5B7BF61AB326F9EA83F7386D032A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AcmDriverDetails_t7D54F87CDCA5B7BF61AB326F9EA83F7386D032A2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AcmDriverDetails_t7D54F87CDCA5B7BF61AB326F9EA83F7386D032A2_0_0_0;
IL2CPP_EXTERN_C void AcmFormatChoose_tA04D194E0BCE74B96923A0FCDDDFE203B137FF18_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AcmFormatChoose_tA04D194E0BCE74B96923A0FCDDDFE203B137FF18_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AcmFormatChoose_tA04D194E0BCE74B96923A0FCDDDFE203B137FF18_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AcmFormatChoose_tA04D194E0BCE74B96923A0FCDDDFE203B137FF18_0_0_0;
IL2CPP_EXTERN_C void AcmFormatDetails_t43289E7C679ABFCA7DB006ACA1FFB3C2990596D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AcmFormatDetails_t43289E7C679ABFCA7DB006ACA1FFB3C2990596D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AcmFormatDetails_t43289E7C679ABFCA7DB006ACA1FFB3C2990596D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AcmFormatDetails_t43289E7C679ABFCA7DB006ACA1FFB3C2990596D4_0_0_0;
IL2CPP_EXTERN_C void AcmFormatTagDetails_t1EDEC96A26C87947D363120ADF43D2EB68AA0D21_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AcmFormatTagDetails_t1EDEC96A26C87947D363120ADF43D2EB68AA0D21_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AcmFormatTagDetails_t1EDEC96A26C87947D363120ADF43D2EB68AA0D21_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AcmFormatTagDetails_t1EDEC96A26C87947D363120ADF43D2EB68AA0D21_0_0_0;
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07();
IL2CPP_EXTERN_C_CONST RuntimeType Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0;
IL2CPP_EXTERN_C void AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_0_0_0;
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F();
IL2CPP_EXTERN_C_CONST RuntimeType AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0;
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_0_0_0;
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_0_0_0;
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_0_0_0;
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_0_0_0;
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_0_0_0;
IL2CPP_EXTERN_C void ArchiveFileInfo_t051019338FB580F17B7DA49693024E09572EF9CC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArchiveFileInfo_t051019338FB580F17B7DA49693024E09572EF9CC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArchiveFileInfo_t051019338FB580F17B7DA49693024E09572EF9CC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArchiveFileInfo_t051019338FB580F17B7DA49693024E09572EF9CC_0_0_0;
IL2CPP_EXTERN_C void ArrayMetadata_tBEFB514CF36C7DB76B6E2EF87665D7F1675D846B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayMetadata_tBEFB514CF36C7DB76B6E2EF87665D7F1675D846B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayMetadata_tBEFB514CF36C7DB76B6E2EF87665D7F1675D846B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayMetadata_tBEFB514CF36C7DB76B6E2EF87665D7F1675D846B_0_0_0;
IL2CPP_EXTERN_C void ArrayMetadata_t10B29288F922769F73AEAB30D0F8BF422D2894FA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayMetadata_t10B29288F922769F73AEAB30D0F8BF422D2894FA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayMetadata_t10B29288F922769F73AEAB30D0F8BF422D2894FA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayMetadata_t10B29288F922769F73AEAB30D0F8BF422D2894FA_0_0_0;
IL2CPP_EXTERN_C void AsioBufferInfo_tD2A0DBE875DF688E9C8D38FEEA87644E4E222CF2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsioBufferInfo_tD2A0DBE875DF688E9C8D38FEEA87644E4E222CF2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsioBufferInfo_tD2A0DBE875DF688E9C8D38FEEA87644E4E222CF2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsioBufferInfo_tD2A0DBE875DF688E9C8D38FEEA87644E4E222CF2_0_0_0;
IL2CPP_EXTERN_C void AsioCallbacks_tAE73946A12DA94E2D724D8239E6C22E2A9E439B6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsioCallbacks_tAE73946A12DA94E2D724D8239E6C22E2A9E439B6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsioCallbacks_tAE73946A12DA94E2D724D8239E6C22E2A9E439B6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsioCallbacks_tAE73946A12DA94E2D724D8239E6C22E2A9E439B6_0_0_0;
IL2CPP_EXTERN_C void AsioChannelInfo_t6BBE1E54394C9FA2F38998BD2A3232A8F6DE24C4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsioChannelInfo_t6BBE1E54394C9FA2F38998BD2A3232A8F6DE24C4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsioChannelInfo_t6BBE1E54394C9FA2F38998BD2A3232A8F6DE24C4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsioChannelInfo_t6BBE1E54394C9FA2F38998BD2A3232A8F6DE24C4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AsioFillBufferCallback_t35E4E18AF68CF9F1B98877787A70A06A3D648377();
IL2CPP_EXTERN_C_CONST RuntimeType AsioFillBufferCallback_t35E4E18AF68CF9F1B98877787A70A06A3D648377_0_0_0;
IL2CPP_EXTERN_C void AsioTime_t9B95DA2923AE07F48F2E81285E5015B55158CC49_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsioTime_t9B95DA2923AE07F48F2E81285E5015B55158CC49_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsioTime_t9B95DA2923AE07F48F2E81285E5015B55158CC49_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsioTime_t9B95DA2923AE07F48F2E81285E5015B55158CC49_0_0_0;
IL2CPP_EXTERN_C void AsioTimeCode_t5A361ECABCC1BB617D2DAEE34CCEF70F5C77C1D5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsioTimeCode_t5A361ECABCC1BB617D2DAEE34CCEF70F5C77C1D5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsioTimeCode_t5A361ECABCC1BB617D2DAEE34CCEF70F5C77C1D5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsioTimeCode_t5A361ECABCC1BB617D2DAEE34CCEF70F5C77C1D5_0_0_0;
IL2CPP_EXTERN_C void AsioTimeInfo_t0D9268F8940F3C5237EE8937D822DF9C3A71BD49_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsioTimeInfo_t0D9268F8940F3C5237EE8937D822DF9C3A71BD49_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsioTimeInfo_t0D9268F8940F3C5237EE8937D822DF9C3A71BD49_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsioTimeInfo_t0D9268F8940F3C5237EE8937D822DF9C3A71BD49_0_0_0;
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Assembly_t_0_0_0;
IL2CPP_EXTERN_C void AssemblyFullName_tD4F2721197802F920A651A4460AB8FA432ED6F2B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyFullName_tD4F2721197802F920A651A4460AB8FA432ED6F2B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyFullName_tD4F2721197802F920A651A4460AB8FA432ED6F2B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyFullName_tD4F2721197802F920A651A4460AB8FA432ED6F2B_0_0_0;
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_0_0_0;
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_0_0_0;
IL2CPP_EXTERN_C void AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_0_0_0;
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_0_0_0;
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_0_0_0;
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_0_0_0;
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_0_0_0;
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_0_0_0;
IL2CPP_EXTERN_C void AudioVolumeNotificationDataStruct_tDFDE397406901650D1B9FDE03465DF6E41F18B40_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AudioVolumeNotificationDataStruct_tDFDE397406901650D1B9FDE03465DF6E41F18B40_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AudioVolumeNotificationDataStruct_tDFDE397406901650D1B9FDE03465DF6E41F18B40_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AudioVolumeNotificationDataStruct_tDFDE397406901650D1B9FDE03465DF6E41F18B40_0_0_0;
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_0_0_0;
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0;
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0;
IL2CPP_EXTERN_C void BitTreeDecoder_t1926657A0A3AFB2F3534A563DED4468002998382_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BitTreeDecoder_t1926657A0A3AFB2F3534A563DED4468002998382_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BitTreeDecoder_t1926657A0A3AFB2F3534A563DED4468002998382_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BitTreeDecoder_t1926657A0A3AFB2F3534A563DED4468002998382_0_0_0;
IL2CPP_EXTERN_C void BitTreeEncoder_t164B27A0A82627E0639F40241F60840DD559B09E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BitTreeEncoder_t164B27A0A82627E0639F40241F60840DD559B09E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BitTreeEncoder_t164B27A0A82627E0639F40241F60840DD559B09E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BitTreeEncoder_t164B27A0A82627E0639F40241F60840DD559B09E_0_0_0;
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_0_0_0;
IL2CPP_EXTERN_C void BufferDesc_tD9CD6BC395AEAFDE6FC97CAB6933F5BC9C0559A7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BufferDesc_tD9CD6BC395AEAFDE6FC97CAB6933F5BC9C0559A7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BufferDesc_tD9CD6BC395AEAFDE6FC97CAB6933F5BC9C0559A7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BufferDesc_tD9CD6BC395AEAFDE6FC97CAB6933F5BC9C0559A7_0_0_0;
IL2CPP_EXTERN_C void BufferSegment_t3B766B555791F8BE558F53ACD0661A027BE1C29C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BufferSegment_t3B766B555791F8BE558F53ACD0661A027BE1C29C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BufferSegment_t3B766B555791F8BE558F53ACD0661A027BE1C29C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BufferSegment_t3B766B555791F8BE558F53ACD0661A027BE1C29C_0_0_0;
IL2CPP_EXTERN_C void BufferStore_t281534342F2BCDCE873B847857D11B7B9CD3B984_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BufferStore_t281534342F2BCDCE873B847857D11B7B9CD3B984_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BufferStore_t281534342F2BCDCE873B847857D11B7B9CD3B984_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BufferStore_t281534342F2BCDCE873B847857D11B7B9CD3B984_0_0_0;
IL2CPP_EXTERN_C void CStreamSwitch_tDB3469F5195C1DA9546CC76F2C8B39E163554048_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CStreamSwitch_tDB3469F5195C1DA9546CC76F2C8B39E163554048_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CStreamSwitch_tDB3469F5195C1DA9546CC76F2C8B39E163554048_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CStreamSwitch_tDB3469F5195C1DA9546CC76F2C8B39E163554048_0_0_0;
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_0_0_0;
IL2CPP_EXTERN_C void CallbackDescriptor_tBBD905817625AD0C493384F7AC3B7F0C97775743_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CallbackDescriptor_tBBD905817625AD0C493384F7AC3B7F0C97775743_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CallbackDescriptor_tBBD905817625AD0C493384F7AC3B7F0C97775743_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CallbackDescriptor_tBBD905817625AD0C493384F7AC3B7F0C97775743_0_0_0;
IL2CPP_EXTERN_C void CallbackDescriptor_t8DE2456607B38580A2C223D9E26900A6053A2F8A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CallbackDescriptor_t8DE2456607B38580A2C223D9E26900A6053A2F8A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CallbackDescriptor_t8DE2456607B38580A2C223D9E26900A6053A2F8A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CallbackDescriptor_t8DE2456607B38580A2C223D9E26900A6053A2F8A_0_0_0;
IL2CPP_EXTERN_C void CanStartDragArgs_tABF4E0D7A89F6C14BE4E8308C18129670E80DFEF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CanStartDragArgs_tABF4E0D7A89F6C14BE4E8308C18129670E80DFEF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CanStartDragArgs_tABF4E0D7A89F6C14BE4E8308C18129670E80DFEF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CanStartDragArgs_tABF4E0D7A89F6C14BE4E8308C18129670E80DFEF_0_0_0;
IL2CPP_EXTERN_C void CancelInvocationMessage_tC2DEA405D8E283E99F2EFFE4904B19F59EB839A5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancelInvocationMessage_tC2DEA405D8E283E99F2EFFE4904B19F59EB839A5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancelInvocationMessage_tC2DEA405D8E283E99F2EFFE4904B19F59EB839A5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancelInvocationMessage_tC2DEA405D8E283E99F2EFFE4904B19F59EB839A5_0_0_0;
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_0_0_0;
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_0_0_0;
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_0_0_0;
IL2CPP_EXTERN_C void CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_0_0_0;
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_0_0_0;
IL2CPP_EXTERN_C void ClientMessage_t731C7C73FE93742E194805EC21D8C4AE6D2DDB0A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ClientMessage_t731C7C73FE93742E194805EC21D8C4AE6D2DDB0A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ClientMessage_t731C7C73FE93742E194805EC21D8C4AE6D2DDB0A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ClientMessage_t731C7C73FE93742E194805EC21D8C4AE6D2DDB0A_0_0_0;
IL2CPP_EXTERN_C void CloseWithErrorMessage_t99248644734251052FC06ABDBC285C3B246F45BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CloseWithErrorMessage_t99248644734251052FC06ABDBC285C3B246F45BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CloseWithErrorMessage_t99248644734251052FC06ABDBC285C3B246F45BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CloseWithErrorMessage_t99248644734251052FC06ABDBC285C3B246F45BB_0_0_0;
IL2CPP_EXTERN_C void Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_0_0_0;
IL2CPP_EXTERN_C void Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_0_0_0;
IL2CPP_EXTERN_C void ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_0_0_0;
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_0_0_0;
IL2CPP_EXTERN_C void ColorTween_tB6EEC666DA063367652ECCB92C46C0C5186F38C5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_tB6EEC666DA063367652ECCB92C46C0C5186F38C5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_tB6EEC666DA063367652ECCB92C46C0C5186F38C5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_tB6EEC666DA063367652ECCB92C46C0C5186F38C5_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_0_0_0;
IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E(RuntimeObject* obj);
IL2CPP_EXTERN_C_CONST RuntimeType ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_0_0_0;
IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636(RuntimeObject* obj);
IL2CPP_EXTERN_C_CONST RuntimeType ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636_0_0_0;
IL2CPP_EXTERN_C void Completion_tA97B52BD2F31F247CCBD449D19F5407A15567635_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Completion_tA97B52BD2F31F247CCBD449D19F5407A15567635_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Completion_tA97B52BD2F31F247CCBD449D19F5407A15567635_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Completion_tA97B52BD2F31F247CCBD449D19F5407A15567635_0_0_0;
IL2CPP_EXTERN_C void CompletionWithError_t0AA851C74BE16E1E390CAE192E0FB4E082B7CCD1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompletionWithError_t0AA851C74BE16E1E390CAE192E0FB4E082B7CCD1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompletionWithError_t0AA851C74BE16E1E390CAE192E0FB4E082B7CCD1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompletionWithError_t0AA851C74BE16E1E390CAE192E0FB4E082B7CCD1_0_0_0;
IL2CPP_EXTERN_C void CompletionWithResult_tDC8D964C901EADD61C51C57885317DBD7210028C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompletionWithResult_tDC8D964C901EADD61C51C57885317DBD7210028C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompletionWithResult_tDC8D964C901EADD61C51C57885317DBD7210028C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompletionWithResult_tDC8D964C901EADD61C51C57885317DBD7210028C_0_0_0;
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_0_0_0;
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_0_0_0;
IL2CPP_EXTERN_C void ConnectionEventInfo_tEB8255D38B174BDE6959C615DBFFA3328D281D46_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConnectionEventInfo_tEB8255D38B174BDE6959C615DBFFA3328D281D46_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConnectionEventInfo_tEB8255D38B174BDE6959C615DBFFA3328D281D46_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConnectionEventInfo_tEB8255D38B174BDE6959C615DBFFA3328D281D46_0_0_0;
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_0_0_0;
IL2CPP_EXTERN_C void ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_0_0_0;
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_0_0_0;
IL2CPP_EXTERN_C void ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_0_0_0;
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_0_0_0;
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3();
IL2CPP_EXTERN_C_CONST RuntimeType CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3_0_0_0;
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_0_0_0;
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_0_0_0;
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_0_0_0;
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_0_0_0;
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_0_0_0;
IL2CPP_EXTERN_C void DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_0_0_0;
IL2CPP_EXTERN_C void DateTimeParser_tBDDA41C4734ACD3EAF17233DBFC7B26E0AAFE246_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeParser_tBDDA41C4734ACD3EAF17233DBFC7B26E0AAFE246_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeParser_tBDDA41C4734ACD3EAF17233DBFC7B26E0AAFE246_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeParser_tBDDA41C4734ACD3EAF17233DBFC7B26E0AAFE246_0_0_0;
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_0_0_0;
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_0_0_0;
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_0_0_0;
IL2CPP_EXTERN_C void DecompressedData_tE72195319199AB4AA5C941E9A30E7F78AB6EC8BC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DecompressedData_tE72195319199AB4AA5C941E9A30E7F78AB6EC8BC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DecompressedData_tE72195319199AB4AA5C941E9A30E7F78AB6EC8BC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DecompressedData_tE72195319199AB4AA5C941E9A30E7F78AB6EC8BC_0_0_0;
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Delegate_t_0_0_0;
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_0_0_0;
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_0_0_0;
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_0_0_0;
IL2CPP_EXTERN_C void DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_0_0_0;
IL2CPP_EXTERN_C void DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_0_0_0;
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_0_0_0;
IL2CPP_EXTERN_C void DragAndDropArgs_t5D3B6A3AB96D87DB0C2840230EEA8C8426EBCA9C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DragAndDropArgs_t5D3B6A3AB96D87DB0C2840230EEA8C8426EBCA9C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DragAndDropArgs_t5D3B6A3AB96D87DB0C2840230EEA8C8426EBCA9C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DragAndDropArgs_t5D3B6A3AB96D87DB0C2840230EEA8C8426EBCA9C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04();
IL2CPP_EXTERN_C_CONST RuntimeType EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04_0_0_0;
IL2CPP_EXTERN_C void ElementWriter_t8A2F575C32A5E65A6A4AA13994BCB24D1CB4CC3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ElementWriter_t8A2F575C32A5E65A6A4AA13994BCB24D1CB4CC3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ElementWriter_t8A2F575C32A5E65A6A4AA13994BCB24D1CB4CC3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ElementWriter_t8A2F575C32A5E65A6A4AA13994BCB24D1CB4CC3E_0_0_0;
IL2CPP_EXTERN_C void EmitBuilder_t905BDF810552D478F546279A717ED58657ADCB12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EmitBuilder_t905BDF810552D478F546279A717ED58657ADCB12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EmitBuilder_t905BDF810552D478F546279A717ED58657ADCB12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EmitBuilder_t905BDF810552D478F546279A717ED58657ADCB12_0_0_0;
IL2CPP_EXTERN_C void EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_0_0_0;
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0;
IL2CPP_EXTERN_C void EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_0_0_0;
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_0_0_0;
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_0_0_0;
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_0_0_0;
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_0_0_0;
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Exception_t_0_0_0;
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_0_0_0;
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_0_0_0;
IL2CPP_EXTERN_C void ExtensionResult_tC0AB04939620F11E8C264D7079BA0C149048F884_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExtensionResult_tC0AB04939620F11E8C264D7079BA0C149048F884_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExtensionResult_tC0AB04939620F11E8C264D7079BA0C149048F884_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExtensionResult_tC0AB04939620F11E8C264D7079BA0C149048F884_0_0_0;
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0;
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_0_0_0;
IL2CPP_EXTERN_C void FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_0_0_0;
IL2CPP_EXTERN_C void FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_0_0_0;
IL2CPP_EXTERN_C void FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_0_0_0;
IL2CPP_EXTERN_C void FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t4C8556CF15FBE087E984078052F7BB96F9DD2D10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t4C8556CF15FBE087E984078052F7BB96F9DD2D10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t4C8556CF15FBE087E984078052F7BB96F9DD2D10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t4C8556CF15FBE087E984078052F7BB96F9DD2D10_0_0_0;
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_0_0_0;
IL2CPP_EXTERN_C void FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_0_0_0;
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_0_0_0;
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_0_0_0;
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_0_0_0;
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_0_0_0;
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0;
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0;
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0;
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0;
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_0_0_0;
IL2CPP_EXTERN_C void Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_0_0_0;
IL2CPP_EXTERN_C void HTTP2AltSVCFrame_tA4B46A9E7D0E2929EA410F333547F734296EA8E3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2AltSVCFrame_tA4B46A9E7D0E2929EA410F333547F734296EA8E3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2AltSVCFrame_tA4B46A9E7D0E2929EA410F333547F734296EA8E3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2AltSVCFrame_tA4B46A9E7D0E2929EA410F333547F734296EA8E3_0_0_0;
IL2CPP_EXTERN_C void HTTP2ContinuationFrame_t6A550FA2A54AECC03D49952CB587182860888B72_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2ContinuationFrame_t6A550FA2A54AECC03D49952CB587182860888B72_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2ContinuationFrame_t6A550FA2A54AECC03D49952CB587182860888B72_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2ContinuationFrame_t6A550FA2A54AECC03D49952CB587182860888B72_0_0_0;
IL2CPP_EXTERN_C void HTTP2DataFrame_t2C4634C38CD8831E7419113917961836AEC0A818_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2DataFrame_t2C4634C38CD8831E7419113917961836AEC0A818_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2DataFrame_t2C4634C38CD8831E7419113917961836AEC0A818_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2DataFrame_t2C4634C38CD8831E7419113917961836AEC0A818_0_0_0;
IL2CPP_EXTERN_C void HTTP2FrameHeaderAndPayload_t75098A3B911FBD96BD5C635686E1C4575C68C155_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2FrameHeaderAndPayload_t75098A3B911FBD96BD5C635686E1C4575C68C155_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2FrameHeaderAndPayload_t75098A3B911FBD96BD5C635686E1C4575C68C155_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2FrameHeaderAndPayload_t75098A3B911FBD96BD5C635686E1C4575C68C155_0_0_0;
IL2CPP_EXTERN_C void HTTP2GoAwayFrame_t7ADE3A0339E99C0A9FD111B20D1F28DE921606AC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2GoAwayFrame_t7ADE3A0339E99C0A9FD111B20D1F28DE921606AC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2GoAwayFrame_t7ADE3A0339E99C0A9FD111B20D1F28DE921606AC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2GoAwayFrame_t7ADE3A0339E99C0A9FD111B20D1F28DE921606AC_0_0_0;
IL2CPP_EXTERN_C void HTTP2HeadersFrame_t27E4A8CA76BAB5CDBA4F8236707097CF8862211A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2HeadersFrame_t27E4A8CA76BAB5CDBA4F8236707097CF8862211A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2HeadersFrame_t27E4A8CA76BAB5CDBA4F8236707097CF8862211A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2HeadersFrame_t27E4A8CA76BAB5CDBA4F8236707097CF8862211A_0_0_0;
IL2CPP_EXTERN_C void HTTP2PingFrame_t3BB3EA4010325DA4324CDBCC4A8E3334F2818BCD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2PingFrame_t3BB3EA4010325DA4324CDBCC4A8E3334F2818BCD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2PingFrame_t3BB3EA4010325DA4324CDBCC4A8E3334F2818BCD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2PingFrame_t3BB3EA4010325DA4324CDBCC4A8E3334F2818BCD_0_0_0;
IL2CPP_EXTERN_C void HTTP2PriorityFrame_tFABAA35FE8C7A9DA1243470A6070C1274E3739BC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2PriorityFrame_tFABAA35FE8C7A9DA1243470A6070C1274E3739BC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2PriorityFrame_tFABAA35FE8C7A9DA1243470A6070C1274E3739BC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2PriorityFrame_tFABAA35FE8C7A9DA1243470A6070C1274E3739BC_0_0_0;
IL2CPP_EXTERN_C void HTTP2PushPromiseFrame_tD67C169B05C0F76DF1C35892D99B5A76FC3657FD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2PushPromiseFrame_tD67C169B05C0F76DF1C35892D99B5A76FC3657FD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2PushPromiseFrame_tD67C169B05C0F76DF1C35892D99B5A76FC3657FD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2PushPromiseFrame_tD67C169B05C0F76DF1C35892D99B5A76FC3657FD_0_0_0;
IL2CPP_EXTERN_C void HTTP2RSTStreamFrame_tB8A2AB97A6EE28D585EF9816C62C8128E86F1A58_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2RSTStreamFrame_tB8A2AB97A6EE28D585EF9816C62C8128E86F1A58_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2RSTStreamFrame_tB8A2AB97A6EE28D585EF9816C62C8128E86F1A58_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2RSTStreamFrame_tB8A2AB97A6EE28D585EF9816C62C8128E86F1A58_0_0_0;
IL2CPP_EXTERN_C void HTTP2SettingsFrame_t336E2E334513AA62F5859E96F5725EBEB52D2381_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2SettingsFrame_t336E2E334513AA62F5859E96F5725EBEB52D2381_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2SettingsFrame_t336E2E334513AA62F5859E96F5725EBEB52D2381_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2SettingsFrame_t336E2E334513AA62F5859E96F5725EBEB52D2381_0_0_0;
IL2CPP_EXTERN_C void HTTP2WindowUpdateFrame_t429C1E3EC76C172B4013D09BE1D177CCE83316A5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HTTP2WindowUpdateFrame_t429C1E3EC76C172B4013D09BE1D177CCE83316A5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HTTP2WindowUpdateFrame_t429C1E3EC76C172B4013D09BE1D177CCE83316A5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HTTP2WindowUpdateFrame_t429C1E3EC76C172B4013D09BE1D177CCE83316A5_0_0_0;
IL2CPP_EXTERN_C void HandleDragAndDropArgs_t14222F5271A86F1FE692EDBFD99ABA3FF1430F9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HandleDragAndDropArgs_t14222F5271A86F1FE692EDBFD99ABA3FF1430F9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HandleDragAndDropArgs_t14222F5271A86F1FE692EDBFD99ABA3FF1430F9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HandleDragAndDropArgs_t14222F5271A86F1FE692EDBFD99ABA3FF1430F9D_0_0_0;
IL2CPP_EXTERN_C void HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67();
IL2CPP_EXTERN_C_CONST RuntimeType HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67_0_0_0;
IL2CPP_EXTERN_C void HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_0_0_0;
IL2CPP_EXTERN_C void HostConnectionKey_tD0152F99605DAA00B6F118ED5B6E21393F8548B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HostConnectionKey_tD0152F99605DAA00B6F118ED5B6E21393F8548B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HostConnectionKey_tD0152F99605DAA00B6F118ED5B6E21393F8548B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HostConnectionKey_tD0152F99605DAA00B6F118ED5B6E21393F8548B5_0_0_0;
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_0_0_0;
const Il2CppGuid IAudioClient_t1384A4582F24FB6726D65F4B8D113834103B614F::IID = { 0x1cb9ad4c, 0xdbfa, 0x4c32, 0xb1, 0x78, 0xc2, 0xf5, 0x68, 0xa7, 0x3, 0xb2 };
IL2CPP_EXTERN_C_CONST RuntimeType IAudioClient_t1384A4582F24FB6726D65F4B8D113834103B614F_0_0_0;
const Il2CppGuid IAudioRenderClient_t3208BFD9A483D8F9A1A2256D5745BCD7DFD55350::IID = { 0xf294acfc, 0x3146, 0x4483, 0xa7, 0xbf, 0xad, 0xdc, 0xa7, 0xc2, 0x60, 0xe2 };
IL2CPP_EXTERN_C_CONST RuntimeType IAudioRenderClient_t3208BFD9A483D8F9A1A2256D5745BCD7DFD55350_0_0_0;
const Il2CppGuid IMFActivate_t94D8357A879D3ACAC5C322B1F05D4AC63A5EB5A7::IID = { 0x7fee9e9a, 0x4a89, 0x47a6, 0x89, 0x9c, 0xb6, 0xa5, 0x3a, 0x70, 0xfb, 0x67 };
IL2CPP_EXTERN_C_CONST RuntimeType IMFActivate_t94D8357A879D3ACAC5C322B1F05D4AC63A5EB5A7_0_0_0;
const Il2CppGuid IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1::IID = { 0x2cd2d921, 0xc447, 0x44a7, 0xa1, 0x3c, 0x4a, 0xda, 0xbf, 0xc2, 0x47, 0xe3 };
IL2CPP_EXTERN_C_CONST RuntimeType IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1_0_0_0;
const Il2CppGuid IMFByteStream_tEE5E9EF3FCF36A94489A937E141E1DADBD141269::IID = { 0xad4c1b00, 0x4bf7, 0x422f, 0x91, 0x75, 0x75, 0x66, 0x93, 0xd9, 0x13, 0xd };
IL2CPP_EXTERN_C_CONST RuntimeType IMFByteStream_tEE5E9EF3FCF36A94489A937E141E1DADBD141269_0_0_0;
const Il2CppGuid IMFCollection_t76869D1E25A90CBD800B52A998C02D99786F2C18::IID = { 0x5bc8a76b, 0x869a, 0x46a3, 0x9b, 0x3, 0xfa, 0x21, 0x8a, 0x66, 0xae, 0xbe };
IL2CPP_EXTERN_C_CONST RuntimeType IMFCollection_t76869D1E25A90CBD800B52A998C02D99786F2C18_0_0_0;
const Il2CppGuid IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724::IID = { 0x45fa593, 0x8799, 0x42b8, 0xbc, 0x8d, 0x89, 0x68, 0xc6, 0x45, 0x35, 0x7 };
IL2CPP_EXTERN_C_CONST RuntimeType IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724_0_0_0;
const Il2CppGuid IMFMediaEvent_tEFE6188C434FA7B01103156FFC32275E29F2ADD7::IID = { 0xdf598932, 0xf10c, 0x4e39, 0xbb, 0xa2, 0xc3, 0x8, 0xf1, 0x1, 0xda, 0xa3 };
IL2CPP_EXTERN_C_CONST RuntimeType IMFMediaEvent_tEFE6188C434FA7B01103156FFC32275E29F2ADD7_0_0_0;
const Il2CppGuid IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC::IID = { 0x44ae0fa8, 0xea31, 0x4109, 0x8d, 0x2e, 0x4c, 0xae, 0x49, 0x97, 0xc5, 0x55 };
IL2CPP_EXTERN_C_CONST RuntimeType IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC_0_0_0;
const Il2CppGuid IMFReadWriteClassFactory_t2188A2AFE4914E253D6F7B8A5B8EA6757F36C93A::IID = { 0xe7fe2e12, 0x661c, 0x40da, 0x92, 0xf9, 0x4f, 0x0, 0x2a, 0xb6, 0x76, 0x27 };
IL2CPP_EXTERN_C_CONST RuntimeType IMFReadWriteClassFactory_t2188A2AFE4914E253D6F7B8A5B8EA6757F36C93A_0_0_0;
const Il2CppGuid IMFSample_t98025FCA3C4558D068B5C5A4419116A40C8CC48D::IID = { 0xc40a00f2, 0xb93a, 0x4d80, 0xae, 0x8c, 0x5a, 0x1c, 0x63, 0x4f, 0x58, 0xe4 };
IL2CPP_EXTERN_C_CONST RuntimeType IMFSample_t98025FCA3C4558D068B5C5A4419116A40C8CC48D_0_0_0;
const Il2CppGuid IMFSinkWriter_t612D4866594867B7A4EF00C3C2CD858130B928F0::IID = { 0x3137f1cd, 0xfe5e, 0x4805, 0xa5, 0xd8, 0xfb, 0x47, 0x74, 0x48, 0xcb, 0x3d };
IL2CPP_EXTERN_C_CONST RuntimeType IMFSinkWriter_t612D4866594867B7A4EF00C3C2CD858130B928F0_0_0_0;
const Il2CppGuid IMFSourceReader_t4620D92DE02E7E43A344CD4F4948EB27B3149085::IID = { 0x70ae66f2, 0xc809, 0x4e4f, 0x89, 0x15, 0xbd, 0xcb, 0x40, 0x6b, 0x79, 0x93 };
IL2CPP_EXTERN_C_CONST RuntimeType IMFSourceReader_t4620D92DE02E7E43A344CD4F4948EB27B3149085_0_0_0;
const Il2CppGuid IMFTransform_t5CA42C4409B0962D27EADF854065F1F69DDDFB1E::IID = { 0xbf94c121, 0x5b05, 0x4e6f, 0x80, 0x0, 0xba, 0x59, 0x89, 0x61, 0x41, 0x4d };
IL2CPP_EXTERN_C_CONST RuntimeType IMFTransform_t5CA42C4409B0962D27EADF854065F1F69DDDFB1E_0_0_0;
const Il2CppGuid IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65::IID = { 0x59eff8b9, 0x938c, 0x4a26, 0x82, 0xf2, 0x95, 0xcb, 0x84, 0xcd, 0xc8, 0x37 };
IL2CPP_EXTERN_C_CONST RuntimeType IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65_0_0_0;
const Il2CppGuid IMediaObject_tEF793988BAC48C921BDDA98FB2EC5480CED50971::IID = { 0xd8ad0f58, 0x5494, 0x4102, 0x97, 0xc5, 0xec, 0x79, 0x8e, 0x59, 0xbc, 0xf4 };
IL2CPP_EXTERN_C_CONST RuntimeType IMediaObject_tEF793988BAC48C921BDDA98FB2EC5480CED50971_0_0_0;
const Il2CppGuid IMediaParamInfo_t90A5142555AD5180D7F0D0BA68D3E92AA58C09EF::IID = { 0x6d6cbb60, 0xa223, 0x44aa, 0x84, 0x2f, 0xa2, 0xf0, 0x67, 0x50, 0xbe, 0x6d };
IL2CPP_EXTERN_C_CONST RuntimeType IMediaParamInfo_t90A5142555AD5180D7F0D0BA68D3E92AA58C09EF_0_0_0;
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_0_0_0;
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_0_0_0;
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_0_0_0;
const Il2CppGuid IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID = { 0xc, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_0_0_0;
IL2CPP_EXTERN_C void ImaAdpcmWaveFormat_t6317D1D0F73891B51FBC3EB83011694743C79504_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImaAdpcmWaveFormat_t6317D1D0F73891B51FBC3EB83011694743C79504_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImaAdpcmWaveFormat_t6317D1D0F73891B51FBC3EB83011694743C79504_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImaAdpcmWaveFormat_t6317D1D0F73891B51FBC3EB83011694743C79504_0_0_0;
IL2CPP_EXTERN_C void ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_0_0_0;
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_0_0_0;
IL2CPP_EXTERN_C void IncomingPacket_t41BD0DFA0528D46782F44FA18AEF7E8C50B7B840_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IncomingPacket_t41BD0DFA0528D46782F44FA18AEF7E8C50B7B840_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IncomingPacket_t41BD0DFA0528D46782F44FA18AEF7E8C50B7B840_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IncomingPacket_t41BD0DFA0528D46782F44FA18AEF7E8C50B7B840_0_0_0;
IL2CPP_EXTERN_C void IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_0_0_0;
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_0_0_0;
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_0_0_0;
IL2CPP_EXTERN_C void InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_0_0_0;
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_0_0_0;
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_0_0_0;
IL2CPP_EXTERN_C void InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_0_0_0;
IL2CPP_EXTERN_C void InvocationDefinition_t2719209C7DF20D97C7BAD38EEDEDA249737EBFBF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InvocationDefinition_t2719209C7DF20D97C7BAD38EEDEDA249737EBFBF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InvocationDefinition_t2719209C7DF20D97C7BAD38EEDEDA249737EBFBF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InvocationDefinition_t2719209C7DF20D97C7BAD38EEDEDA249737EBFBF_0_0_0;
IL2CPP_EXTERN_C void InvocationMessage_t185773F6188A50BFB71D8E23CFA1FF03FDD08FA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InvocationMessage_t185773F6188A50BFB71D8E23CFA1FF03FDD08FA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InvocationMessage_t185773F6188A50BFB71D8E23CFA1FF03FDD08FA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InvocationMessage_t185773F6188A50BFB71D8E23CFA1FF03FDD08FA7_0_0_0;
IL2CPP_EXTERN_C void JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_0_0_0;
IL2CPP_EXTERN_C void JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType JsonPosition_t7788656A280615072710710E8C15D23285850E8E_0_0_0;
IL2CPP_EXTERN_C void LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_0_0_0;
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_0_0_0;
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_0_0_0;
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_0_0_0;
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_0_0_0;
IL2CPP_EXTERN_C void LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_0_0_0;
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_0_0_0;
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_0_0_0;
IL2CPP_EXTERN_C void LogJob_tBB5AE886C0C727005B0DED619A1A9ACD81A7F231_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LogJob_tBB5AE886C0C727005B0DED619A1A9ACD81A7F231_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LogJob_tBB5AE886C0C727005B0DED619A1A9ACD81A7F231_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LogJob_tBB5AE886C0C727005B0DED619A1A9ACD81A7F231_0_0_0;
const Il2CppGuid MFReadWriteClassFactory_t9FEF2D130205A307AFED6185EC2055DC2EB7F0E7::CLSID = { 0x48e2ed0f, 0x98c2, 0x4a37, 0xbe, 0xd5, 0x16, 0x63, 0x12, 0xdd, 0xd8, 0x3f };
IL2CPP_EXTERN_C_CONST RuntimeType MFReadWriteClassFactory_t9FEF2D130205A307AFED6185EC2055DC2EB7F0E7_0_0_0;
IL2CPP_EXTERN_C void MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_0_0_0;
IL2CPP_EXTERN_C void MFT_REGISTER_TYPE_INFO_tA6537F9FAD8E7C32FAEBDCE9CAD40BE255701E30_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MFT_REGISTER_TYPE_INFO_tA6537F9FAD8E7C32FAEBDCE9CAD40BE255701E30_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MFT_REGISTER_TYPE_INFO_tA6537F9FAD8E7C32FAEBDCE9CAD40BE255701E30_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MFT_REGISTER_TYPE_INFO_tA6537F9FAD8E7C32FAEBDCE9CAD40BE255701E30_0_0_0;
IL2CPP_EXTERN_C void MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_0_0_0;
const Il2CppGuid MMDeviceEnumeratorComObject_tD4348BCE0AF39CF1BA437F43F8C04CF9A74DD311::CLSID = { 0xbcde0395, 0xe52f, 0x467c, 0x8e, 0x3d, 0xc4, 0x57, 0x92, 0x91, 0x69, 0x2e };
IL2CPP_EXTERN_C_CONST RuntimeType MMDeviceEnumeratorComObject_tD4348BCE0AF39CF1BA437F43F8C04CF9A74DD311_0_0_0;
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_0_0_0;
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_0_0_0;
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_0_0_0;
IL2CPP_EXTERN_C void MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_0_0_0;
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_0_0_0;
IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11(RuntimeObject* obj);
IL2CPP_EXTERN_C_CONST RuntimeType MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11_0_0_0;
IL2CPP_EXTERN_C void MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_0_0_0;
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_0_0_0;
IL2CPP_EXTERN_C void MemoryNode_tC053ECC9FF410528E4243CC29B73110214F1688D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MemoryNode_tC053ECC9FF410528E4243CC29B73110214F1688D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MemoryNode_tC053ECC9FF410528E4243CC29B73110214F1688D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MemoryNode_tC053ECC9FF410528E4243CC29B73110214F1688D_0_0_0;
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_0_0_0;
IL2CPP_EXTERN_C void Message_t42162F2256D657929471F3678C970E726A9873D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Message_t42162F2256D657929471F3678C970E726A9873D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Message_t42162F2256D657929471F3678C970E726A9873D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Message_t42162F2256D657929471F3678C970E726A9873D4_0_0_0;
IL2CPP_EXTERN_C void MidiInCapabilities_t9FAB7C5E35F542A95600201440823C0495BFFD84_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MidiInCapabilities_t9FAB7C5E35F542A95600201440823C0495BFFD84_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MidiInCapabilities_t9FAB7C5E35F542A95600201440823C0495BFFD84_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MidiInCapabilities_t9FAB7C5E35F542A95600201440823C0495BFFD84_0_0_0;
IL2CPP_EXTERN_C void MidiOutCapabilities_t16C852E9BA6F46F339EF7D531ED49CDB6ADC4E86_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MidiOutCapabilities_t16C852E9BA6F46F339EF7D531ED49CDB6ADC4E86_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MidiOutCapabilities_t16C852E9BA6F46F339EF7D531ED49CDB6ADC4E86_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MidiOutCapabilities_t16C852E9BA6F46F339EF7D531ED49CDB6ADC4E86_0_0_0;
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_0_0_0;
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_0_0_0;
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_0_0_0;
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_0_0_0;
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_0_0_0;
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_0_0_0;
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_0_0_0;
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_0_0_0;
IL2CPP_EXTERN_C void Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_0_0_0;
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MulticastDelegate_t_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60();
IL2CPP_EXTERN_C_CONST RuntimeType MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60_0_0_0;
IL2CPP_EXTERN_C void MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_0_0_0;
IL2CPP_EXTERN_C void NamespaceCache_tA4C61EA86BE904343F818AF0B22EC00A2A272B5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NamespaceCache_tA4C61EA86BE904343F818AF0B22EC00A2A272B5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NamespaceCache_tA4C61EA86BE904343F818AF0B22EC00A2A272B5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NamespaceCache_tA4C61EA86BE904343F818AF0B22EC00A2A272B5E_0_0_0;
IL2CPP_EXTERN_C void NamespaceResolver_tD689E47F9BD1966D743E2401E5C7D387FC5A4E46_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NamespaceResolver_tD689E47F9BD1966D743E2401E5C7D387FC5A4E46_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NamespaceResolver_tD689E47F9BD1966D743E2401E5C7D387FC5A4E46_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NamespaceResolver_tD689E47F9BD1966D743E2401E5C7D387FC5A4E46_0_0_0;
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_0_0_0;
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0;
IL2CPP_EXTERN_C void ObjectMetadata_t714BF6F2F36AFC880BE00DF5CBEEC924FD828D0B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t714BF6F2F36AFC880BE00DF5CBEEC924FD828D0B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t714BF6F2F36AFC880BE00DF5CBEEC924FD828D0B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ObjectMetadata_t714BF6F2F36AFC880BE00DF5CBEEC924FD828D0B_0_0_0;
IL2CPP_EXTERN_C void ObjectMetadata_t68141D2AC9CC28F90775553FC42FB956190289B3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t68141D2AC9CC28F90775553FC42FB956190289B3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ObjectMetadata_t68141D2AC9CC28F90775553FC42FB956190289B3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ObjectMetadata_t68141D2AC9CC28F90775553FC42FB956190289B3_0_0_0;
IL2CPP_EXTERN_C void OggWaveFormat_tF2B20E4788E13E692B5FDB1E87F85C96ECC86193_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OggWaveFormat_tF2B20E4788E13E692B5FDB1E87F85C96ECC86193_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OggWaveFormat_tF2B20E4788E13E692B5FDB1E87F85C96ECC86193_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OggWaveFormat_tF2B20E4788E13E692B5FDB1E87F85C96ECC86193_0_0_0;
IL2CPP_EXTERN_C void OutgoingPacket_t6E6464FDFEE9FD7DD12ECF82250CC4BC654B4FA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OutgoingPacket_t6E6464FDFEE9FD7DD12ECF82250CC4BC654B4FA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OutgoingPacket_t6E6464FDFEE9FD7DD12ECF82250CC4BC654B4FA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OutgoingPacket_t6E6464FDFEE9FD7DD12ECF82250CC4BC654B4FA0_0_0_0;
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_0_0_0;
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0;
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_0_0_0;
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_0_0_0;
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_0_0_0;
IL2CPP_EXTERN_C void PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_0_0_0;
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_0_0_0;
IL2CPP_EXTERN_C void PluginEventInfo_tBA086F2D7EC8746900F536D1EF352F7898A8A5E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PluginEventInfo_tBA086F2D7EC8746900F536D1EF352F7898A8A5E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PluginEventInfo_tBA086F2D7EC8746900F536D1EF352F7898A8A5E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PluginEventInfo_tBA086F2D7EC8746900F536D1EF352F7898A8A5E9_0_0_0;
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointLight_tD01A1428DC1015D98A527136034187F732433EA7_0_0_0;
IL2CPP_EXTERN_C void Pointer_t6436AAA1EFA69FBA61BBEAA7CED4880054F1D316_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Pointer_t6436AAA1EFA69FBA61BBEAA7CED4880054F1D316_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Pointer_t6436AAA1EFA69FBA61BBEAA7CED4880054F1D316_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Pointer_t6436AAA1EFA69FBA61BBEAA7CED4880054F1D316_0_0_0;
IL2CPP_EXTERN_C void PooledBuffer_tEE191A4805CD8C67EC45FC477256D6294097D02A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PooledBuffer_tEE191A4805CD8C67EC45FC477256D6294097D02A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PooledBuffer_tEE191A4805CD8C67EC45FC477256D6294097D02A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PooledBuffer_tEE191A4805CD8C67EC45FC477256D6294097D02A_0_0_0;
IL2CPP_EXTERN_C void Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_0_0_0;
IL2CPP_EXTERN_C void PpmState_tE4C6215B7FD917C7DEA961D8A017F179DBD2EA0A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PpmState_tE4C6215B7FD917C7DEA961D8A017F179DBD2EA0A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PpmState_tE4C6215B7FD917C7DEA961D8A017F179DBD2EA0A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PpmState_tE4C6215B7FD917C7DEA961D8A017F179DBD2EA0A_0_0_0;
IL2CPP_EXTERN_C void PropVariant_tB7833D471B5F54260EB40A04B89F24D01CA2C3B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PropVariant_tB7833D471B5F54260EB40A04B89F24D01CA2C3B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PropVariant_tB7833D471B5F54260EB40A04B89F24D01CA2C3B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PropVariant_tB7833D471B5F54260EB40A04B89F24D01CA2C3B4_0_0_0;
IL2CPP_EXTERN_C void PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_0_0_0;
IL2CPP_EXTERN_C void PropertyMetadata_t15139A4CB43C1A35CFBFC63E543FD50C3A11D39F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PropertyMetadata_t15139A4CB43C1A35CFBFC63E543FD50C3A11D39F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PropertyMetadata_t15139A4CB43C1A35CFBFC63E543FD50C3A11D39F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PropertyMetadata_t15139A4CB43C1A35CFBFC63E543FD50C3A11D39F_0_0_0;
IL2CPP_EXTERN_C void PropertyMetadata_tF046A6EDD989883549EF37EC9FD63C626F18D7DF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PropertyMetadata_tF046A6EDD989883549EF37EC9FD63C626F18D7DF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PropertyMetadata_tF046A6EDD989883549EF37EC9FD63C626F18D7DF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PropertyMetadata_tF046A6EDD989883549EF37EC9FD63C626F18D7DF_0_0_0;
IL2CPP_EXTERN_C void ProtocolEventInfo_tB00EEA919E72664AEC13E03AD5CB419FF47F4D04_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProtocolEventInfo_tB00EEA919E72664AEC13E03AD5CB419FF47F4D04_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProtocolEventInfo_tB00EEA919E72664AEC13E03AD5CB419FF47F4D04_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProtocolEventInfo_tB00EEA919E72664AEC13E03AD5CB419FF47F4D04_0_0_0;
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_0_0_0;
IL2CPP_EXTERN_C void Range_t9EC5E2092369BE26B499D5A6583CFAA391DDBACB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Range_t9EC5E2092369BE26B499D5A6583CFAA391DDBACB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Range_t9EC5E2092369BE26B499D5A6583CFAA391DDBACB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Range_t9EC5E2092369BE26B499D5A6583CFAA391DDBACB_0_0_0;
IL2CPP_EXTERN_C void RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_0_0_0;
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_0_0_0;
IL2CPP_EXTERN_C void RawFrameData_tD0F5E7EB9E7836E6EAD36E9337BCB6B180437538_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawFrameData_tD0F5E7EB9E7836E6EAD36E9337BCB6B180437538_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawFrameData_tD0F5E7EB9E7836E6EAD36E9337BCB6B180437538_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawFrameData_tD0F5E7EB9E7836E6EAD36E9337BCB6B180437538_0_0_0;
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_0_0_0;
IL2CPP_EXTERN_C void ReadLock_t0098D76A71D75851040273CC7B4270408F40ED38_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReadLock_t0098D76A71D75851040273CC7B4270408F40ED38_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReadLock_t0098D76A71D75851040273CC7B4270408F40ED38_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReadLock_t0098D76A71D75851040273CC7B4270408F40ED38_0_0_0;
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_0_0_0;
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0;
IL2CPP_EXTERN_C void RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_0_0_0;
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_0_0_0;
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_0_0_0;
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_0_0_0;
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_0_0_0;
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_0_0_0;
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_0_0_0;
IL2CPP_EXTERN_C void RequestEventInfo_t7E84F90C4FDD1DEDD8695351C8C870BD2B7A5C3D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RequestEventInfo_t7E84F90C4FDD1DEDD8695351C8C870BD2B7A5C3D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RequestEventInfo_t7E84F90C4FDD1DEDD8695351C8C870BD2B7A5C3D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RequestEventInfo_t7E84F90C4FDD1DEDD8695351C8C870BD2B7A5C3D_0_0_0;
const Il2CppGuid ResamplerMediaComObject_t25182DDB5BB0ED8A6B4C48EB09DD28C6905C22E0::CLSID = { 0xf447b69e, 0x1884, 0x4a7e, 0x80, 0x55, 0x34, 0x6f, 0x74, 0xd6, 0xed, 0xb3 };
IL2CPP_EXTERN_C_CONST RuntimeType ResamplerMediaComObject_t25182DDB5BB0ED8A6B4C48EB09DD28C6905C22E0_0_0_0;
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_0_0_0;
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_0_0_0;
IL2CPP_EXTERN_C void RetryContext_tF74A3153457C4591A40B1211C15B7E6977AFFB14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RetryContext_tF74A3153457C4591A40B1211C15B7E6977AFFB14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RetryContext_tF74A3153457C4591A40B1211C15B7E6977AFFB14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RetryContext_tF74A3153457C4591A40B1211C15B7E6977AFFB14_0_0_0;
IL2CPP_EXTERN_C void RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_0_0_0;
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_0_0_0;
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_0_0_0;
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_0_0_0;
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_0_0_0;
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_0_0_0;
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716();
IL2CPP_EXTERN_C_CONST RuntimeType SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716_0_0_0;
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_0_0_0;
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_0_0_0;
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0;
IL2CPP_EXTERN_C void SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_0_0_0;
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_0_0_0;
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F();
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F_0_0_0;
IL2CPP_EXTERN_C void SetupDragAndDropArgs_t3D6B6745EDF8BA073395EFEFA50B007FE94190F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SetupDragAndDropArgs_t3D6B6745EDF8BA073395EFEFA50B007FE94190F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SetupDragAndDropArgs_t3D6B6745EDF8BA073395EFEFA50B007FE94190F2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SetupDragAndDropArgs_t3D6B6745EDF8BA073395EFEFA50B007FE94190F2_0_0_0;
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_0_0_0;
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_0_0_0;
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_0_0_0;
IL2CPP_EXTERN_C void SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_0_0_0;
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_0_0_0;
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_0_0_0;
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_0_0_0;
IL2CPP_EXTERN_C void SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_0_0_0;
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_0_0_0;
IL2CPP_EXTERN_C void SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_0_0_0;
IL2CPP_EXTERN_C void SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_0_0_0;
IL2CPP_EXTERN_C void SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_0_0_0;
IL2CPP_EXTERN_C void SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_0_0_0;
IL2CPP_EXTERN_C void SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_0_0_0;
IL2CPP_EXTERN_C void SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_0_0_0;
IL2CPP_EXTERN_C void SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_0_0_0;
IL2CPP_EXTERN_C void SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_0_0_0;
IL2CPP_EXTERN_C void SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_0_0_0;
IL2CPP_EXTERN_C void SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_0_0_0;
IL2CPP_EXTERN_C void SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_0_0_0;
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_0_0_0;
IL2CPP_EXTERN_C void StartDragArgs_tF1E3C0A058F6E7B936541CFCCFB42965A2B452C9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StartDragArgs_tF1E3C0A058F6E7B936541CFCCFB42965A2B452C9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StartDragArgs_tF1E3C0A058F6E7B936541CFCCFB42965A2B452C9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StartDragArgs_tF1E3C0A058F6E7B936541CFCCFB42965A2B452C9_0_0_0;
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType State_tC241510131965D8DE1919EB16A3650E397E5AEAB_0_0_0;
IL2CPP_EXTERN_C void StreamItemMessage_tA26B1E24875B9C701927F1D4780BD6AE16252956_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StreamItemMessage_tA26B1E24875B9C701927F1D4780BD6AE16252956_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StreamItemMessage_tA26B1E24875B9C701927F1D4780BD6AE16252956_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StreamItemMessage_tA26B1E24875B9C701927F1D4780BD6AE16252956_0_0_0;
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_0_0_0;
IL2CPP_EXTERN_C void StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_0_0_0;
IL2CPP_EXTERN_C void StringConcat_t8995382764BCE27EF906F99F1235E172D02C6FB9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringConcat_t8995382764BCE27EF906F99F1235E172D02C6FB9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringConcat_t8995382764BCE27EF906F99F1235E172D02C6FB9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringConcat_t8995382764BCE27EF906F99F1235E172D02C6FB9_0_0_0;
IL2CPP_EXTERN_C void StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_0_0_0;
IL2CPP_EXTERN_C void StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_0_0_0;
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_0_0_0;
IL2CPP_EXTERN_C void StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_0_0_0;
IL2CPP_EXTERN_C void StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_0_0_0;
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_0_0_0;
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_0_0_0;
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0;
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_0_0_0;
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_0_0_0;
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_0_0_0;
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_0_0_0;
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_0_0_0;
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_0_0_0;
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_0_0_0;
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_0_0_0;
IL2CPP_EXTERN_C void TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_0_0_0;
IL2CPP_EXTERN_C void TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_0_0_0;
IL2CPP_EXTERN_C void TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_0_0_0;
IL2CPP_EXTERN_C void TMP_MaterialReference_t7E8E30A468A008784635737654F6248AE4120D56_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_MaterialReference_t7E8E30A468A008784635737654F6248AE4120D56_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_MaterialReference_t7E8E30A468A008784635737654F6248AE4120D56_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_MaterialReference_t7E8E30A468A008784635737654F6248AE4120D56_0_0_0;
IL2CPP_EXTERN_C void TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_0_0_0;
IL2CPP_EXTERN_C void TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_0_0_0;
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0;
IL2CPP_EXTERN_C void TextBackingContainer_t72D97EE144D48752E621D2AA89DEA62AB7D037CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextBackingContainer_t72D97EE144D48752E621D2AA89DEA62AB7D037CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextBackingContainer_t72D97EE144D48752E621D2AA89DEA62AB7D037CE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextBackingContainer_t72D97EE144D48752E621D2AA89DEA62AB7D037CE_0_0_0;
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_0_0_0;
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_0_0_0;
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_0_0_0;
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2();
IL2CPP_EXTERN_C_CONST RuntimeType ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B();
IL2CPP_EXTERN_C_CONST RuntimeType TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B_0_0_0;
IL2CPP_EXTERN_C void TimerData_tAD297E7A229F450DD1D089603A9D44BCDD10D43D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimerData_tAD297E7A229F450DD1D089603A9D44BCDD10D43D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimerData_tAD297E7A229F450DD1D089603A9D44BCDD10D43D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimerData_tAD297E7A229F450DD1D089603A9D44BCDD10D43D_0_0_0;
IL2CPP_EXTERN_C void TimingEvent_t69A9B074F7E66D68EB92E06938E3B1B600B47A90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimingEvent_t69A9B074F7E66D68EB92E06938E3B1B600B47A90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimingEvent_t69A9B074F7E66D68EB92E06938E3B1B600B47A90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimingEvent_t69A9B074F7E66D68EB92E06938E3B1B600B47A90_0_0_0;
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_0_0_0;
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_0_0_0;
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_0_0_0;
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_0_0_0;
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_0_0_0;
IL2CPP_EXTERN_C void TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_0_0_0;
IL2CPP_EXTERN_C void TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_0_0_0;
IL2CPP_EXTERN_C void TrueSpeechWaveFormat_t667489CE6BD6FC43E93AD44F12966A65200045D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TrueSpeechWaveFormat_t667489CE6BD6FC43E93AD44F12966A65200045D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TrueSpeechWaveFormat_t667489CE6BD6FC43E93AD44F12966A65200045D9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TrueSpeechWaveFormat_t667489CE6BD6FC43E93AD44F12966A65200045D9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24();
IL2CPP_EXTERN_C_CONST RuntimeType TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_0_0_0;
IL2CPP_EXTERN_C void TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_0_0_0;
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_0_0_0;
IL2CPP_EXTERN_C void UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7();
IL2CPP_EXTERN_C_CONST RuntimeType UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_0_0_0;
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_0_0_0;
IL2CPP_EXTERN_C void UnpackBlockHeader_tAA8CD8EC0018F04C1597FC8DA78114214D9A2B6E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnpackBlockHeader_tAA8CD8EC0018F04C1597FC8DA78114214D9A2B6E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnpackBlockHeader_tAA8CD8EC0018F04C1597FC8DA78114214D9A2B6E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnpackBlockHeader_tAA8CD8EC0018F04C1597FC8DA78114214D9A2B6E_0_0_0;
IL2CPP_EXTERN_C void UnpackBlockTables_tAF53A21C08FDBA349A51FE424CEA191E7EB63806_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnpackBlockTables_tAF53A21C08FDBA349A51FE424CEA191E7EB63806_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnpackBlockTables_tAF53A21C08FDBA349A51FE424CEA191E7EB63806_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnpackBlockTables_tAF53A21C08FDBA349A51FE424CEA191E7EB63806_0_0_0;
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_0_0_0;
IL2CPP_EXTERN_C void UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_0_0_0;
IL2CPP_EXTERN_C void UploadInvocationMessage_t2A9F5C59567B9A9BBEF6A26B736F40B2897FEABE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadInvocationMessage_t2A9F5C59567B9A9BBEF6A26B736F40B2897FEABE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadInvocationMessage_t2A9F5C59567B9A9BBEF6A26B736F40B2897FEABE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadInvocationMessage_t2A9F5C59567B9A9BBEF6A26B736F40B2897FEABE_0_0_0;
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_0_0_0;
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_0_0_0;
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_0_0_0;
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0;
IL2CPP_EXTERN_C void ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_0_0_0;
IL2CPP_EXTERN_C void Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_0_0_0;
IL2CPP_EXTERN_C void VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_0_0_0;
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_0_0_0;
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_0_0_0;
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_0_0_0;
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_0_0_0;
IL2CPP_EXTERN_C void WaveBuffer_t21C08B7848029BDEC66FB9816556342FB5E5CC67_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaveBuffer_t21C08B7848029BDEC66FB9816556342FB5E5CC67_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaveBuffer_t21C08B7848029BDEC66FB9816556342FB5E5CC67_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaveBuffer_t21C08B7848029BDEC66FB9816556342FB5E5CC67_0_0_0;
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_0_0_0;
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_0_0_0;
IL2CPP_EXTERN_C void WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_0_0_0;
IL2CPP_EXTERN_C void WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_0_0_0;
IL2CPP_EXTERN_C void WaveHeader_t5122233D4F3D7122A04C0180DEA438E753CEF925_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaveHeader_t5122233D4F3D7122A04C0180DEA438E753CEF925_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaveHeader_t5122233D4F3D7122A04C0180DEA438E753CEF925_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaveHeader_t5122233D4F3D7122A04C0180DEA438E753CEF925_0_0_0;
IL2CPP_EXTERN_C void WaveInCapabilities_tEA7EF7DF557B6A5351AC3FBC5098B667D0F7F567_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaveInCapabilities_tEA7EF7DF557B6A5351AC3FBC5098B667D0F7F567_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaveInCapabilities_tEA7EF7DF557B6A5351AC3FBC5098B667D0F7F567_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaveInCapabilities_tEA7EF7DF557B6A5351AC3FBC5098B667D0F7F567_0_0_0;
IL2CPP_EXTERN_C void WaveOutCapabilities_t92E8595D3FDDD32704BFDA95E9E0FAC738ABC1D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaveOutCapabilities_t92E8595D3FDDD32704BFDA95E9E0FAC738ABC1D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaveOutCapabilities_t92E8595D3FDDD32704BFDA95E9E0FAC738ABC1D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaveOutCapabilities_t92E8595D3FDDD32704BFDA95E9E0FAC738ABC1D8_0_0_0;
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_0_0_0;
IL2CPP_EXTERN_C void WebSocketFrameReader_t7D2DC431E5B33DF6B860B5A8171D435570B6F560_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WebSocketFrameReader_t7D2DC431E5B33DF6B860B5A8171D435570B6F560_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WebSocketFrameReader_t7D2DC431E5B33DF6B860B5A8171D435570B6F560_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WebSocketFrameReader_t7D2DC431E5B33DF6B860B5A8171D435570B6F560_0_0_0;
const Il2CppGuid WindowsMediaMp3DecoderComObject_tDACD69384AEFFEF628C4C3CF36AAD6CB19A56286::CLSID = { 0xbbeea841, 0xa63, 0x4f52, 0xa7, 0xab, 0xa9, 0xb3, 0xa8, 0x4e, 0xd3, 0x8a };
IL2CPP_EXTERN_C_CONST RuntimeType WindowsMediaMp3DecoderComObject_tDACD69384AEFFEF628C4C3CF36AAD6CB19A56286_0_0_0;
IL2CPP_EXTERN_C void WmaWaveFormat_tAF5911ED018EEBDC5AA3A70E3AB03A1784C229B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WmaWaveFormat_tAF5911ED018EEBDC5AA3A70E3AB03A1784C229B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WmaWaveFormat_tAF5911ED018EEBDC5AA3A70E3AB03A1784C229B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WmaWaveFormat_tAF5911ED018EEBDC5AA3A70E3AB03A1784C229B4_0_0_0;
IL2CPP_EXTERN_C void WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_0_0_0;
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_0_0_0;
IL2CPP_EXTERN_C void WriteLock_t1B18D940643FF6CC4433FD1A76BF9C3A02337A70_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WriteLock_t1B18D940643FF6CC4433FD1A76BF9C3A02337A70_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WriteLock_t1B18D940643FF6CC4433FD1A76BF9C3A02337A70_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WriteLock_t1B18D940643FF6CC4433FD1A76BF9C3A02337A70_0_0_0;
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_0_0_0;
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_0_0_0;
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_0_0_0;
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_0_0_0;
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_0_0_0;
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_0_0_0;
const Il2CppGuid ZlibException_tE60ACF8A3EE60E5FC7752546ACD1BEDFA8A4FF93::CLSID = { 0xebc25cf6, 0x9120, 0x4283, 0xb9, 0x72, 0xe, 0x55, 0x20, 0xd0, 0x0, 0xe };
IL2CPP_EXTERN_C_CONST RuntimeType ZlibException_tE60ACF8A3EE60E5FC7752546ACD1BEDFA8A4FF93_0_0_0;
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_0_0_0;
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AcmDriverEnumCallback_t3134965B60B471D23A03FF6483BBE6D7BCE42171();
IL2CPP_EXTERN_C_CONST RuntimeType AcmDriverEnumCallback_t3134965B60B471D23A03FF6483BBE6D7BCE42171_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AcmFormatChooseHookProc_t5F18B682C90E4265035A641F568C0FBAD564B433();
IL2CPP_EXTERN_C_CONST RuntimeType AcmFormatChooseHookProc_t5F18B682C90E4265035A641F568C0FBAD564B433_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AcmFormatEnumCallback_tA2103557D293F5587A7A886D8F76F563F8827364();
IL2CPP_EXTERN_C_CONST RuntimeType AcmFormatEnumCallback_tA2103557D293F5587A7A886D8F76F563F8827364_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AcmFormatTagEnumCallback_t6DEC528E785BAB55496137B3254CA18742251BC7();
IL2CPP_EXTERN_C_CONST RuntimeType AcmFormatTagEnumCallback_t6DEC528E785BAB55496137B3254CA18742251BC7_0_0_0;
IL2CPP_EXTERN_C void AiffChunk_tB32C341F8B5D0770A9E9BEB3F0CCCF48995EB009_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AiffChunk_tB32C341F8B5D0770A9E9BEB3F0CCCF48995EB009_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AiffChunk_tB32C341F8B5D0770A9E9BEB3F0CCCF48995EB009_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AiffChunk_tB32C341F8B5D0770A9E9BEB3F0CCCF48995EB009_0_0_0;
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA();
IL2CPP_EXTERN_C_CONST RuntimeType TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5();
IL2CPP_EXTERN_C_CONST RuntimeType OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413();
IL2CPP_EXTERN_C_CONST RuntimeType LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F();
IL2CPP_EXTERN_C_CONST RuntimeType LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MemoryUsageChangedCallback_t2C3B85C19E7620327958BA77A7B603C544AD1188();
IL2CPP_EXTERN_C_CONST RuntimeType MemoryUsageChangedCallback_t2C3B85C19E7620327958BA77A7B603C544AD1188_0_0_0;
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_0_0_0;
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_0_0_0;
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AsioAsioMessageCallBack_t8051648DA736C66766063EAFC5599204F13E8949();
IL2CPP_EXTERN_C_CONST RuntimeType AsioAsioMessageCallBack_t8051648DA736C66766063EAFC5599204F13E8949_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AsioBufferSwitchCallBack_t258910DFABB1FC03FBE6EB793D808F18558E1289();
IL2CPP_EXTERN_C_CONST RuntimeType AsioBufferSwitchCallBack_t258910DFABB1FC03FBE6EB793D808F18558E1289_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AsioBufferSwitchTimeInfoCallBack_tB4EA29F22CCCF178C45DECC0F4CC83C98405C598();
IL2CPP_EXTERN_C_CONST RuntimeType AsioBufferSwitchTimeInfoCallBack_tB4EA29F22CCCF178C45DECC0F4CC83C98405C598_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AsioSampleRateDidChangeCallBack_t6C33721710059C31086334A6BFBE905B7281E835();
IL2CPP_EXTERN_C_CONST RuntimeType AsioSampleRateDidChangeCallBack_t6C33721710059C31086334A6BFBE905B7281E835_0_0_0;
IL2CPP_EXTERN_C void AsioDriverVTable_t450D1A3F5015BB06D4F98414AC2A77D1FD6950ED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsioDriverVTable_t450D1A3F5015BB06D4F98414AC2A77D1FD6950ED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsioDriverVTable_t450D1A3F5015BB06D4F98414AC2A77D1FD6950ED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsioDriverVTable_t450D1A3F5015BB06D4F98414AC2A77D1FD6950ED_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SampleConvertor_t46381D1F80FBB88BCC810A787805D379D117D75C();
IL2CPP_EXTERN_C_CONST RuntimeType SampleConvertor_t46381D1F80FBB88BCC810A787805D379D117D75C_0_0_0;
IL2CPP_EXTERN_C void AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E();
IL2CPP_EXTERN_C_CONST RuntimeType PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072();
IL2CPP_EXTERN_C_CONST RuntimeType PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177();
IL2CPP_EXTERN_C_CONST RuntimeType AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_0_0_0;
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_0_0_0;
IL2CPP_EXTERN_C void BigNumberBuffer_tDFB089D05A25ECBB9B5251EFB55C93D16C37C339_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BigNumberBuffer_tDFB089D05A25ECBB9B5251EFB55C93D16C37C339_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BigNumberBuffer_tDFB089D05A25ECBB9B5251EFB55C93D16C37C339_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BigNumberBuffer_tDFB089D05A25ECBB9B5251EFB55C93D16C37C339_0_0_0;
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ValidateBoneWeights_00000116U24PostfixBurstDelegate_tA5DD301A516885745B6C1CD2345B7837CB6E23E3();
IL2CPP_EXTERN_C_CONST RuntimeType ValidateBoneWeights_00000116U24PostfixBurstDelegate_tA5DD301A516885745B6C1CD2345B7837CB6E23E3_0_0_0;
IL2CPP_EXTERN_C void Entry_t39F343C9DF50958B6CB0CC4C05208796E8898549_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Entry_t39F343C9DF50958B6CB0CC4C05208796E8898549_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Entry_t39F343C9DF50958B6CB0CC4C05208796E8898549_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Entry_t39F343C9DF50958B6CB0CC4C05208796E8898549_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC();
IL2CPP_EXTERN_C_CONST RuntimeType WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_0_0_0;
IL2CPP_EXTERN_C void AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70();
IL2CPP_EXTERN_C_CONST RuntimeType AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E();
IL2CPP_EXTERN_C_CONST RuntimeType CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B();
IL2CPP_EXTERN_C_CONST RuntimeType CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31();
IL2CPP_EXTERN_C_CONST RuntimeType CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_0_0_0;
IL2CPP_EXTERN_C void IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_0_0_0;
IL2CPP_EXTERN_C void IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED();
IL2CPP_EXTERN_C_CONST RuntimeType LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_0_0_0;
IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C(RuntimeObject* obj);
IL2CPP_EXTERN_C_CONST RuntimeType NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3();
IL2CPP_EXTERN_C_CONST RuntimeType QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA();
IL2CPP_EXTERN_C_CONST RuntimeType ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD();
IL2CPP_EXTERN_C_CONST RuntimeType RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559();
IL2CPP_EXTERN_C_CONST RuntimeType SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE();
IL2CPP_EXTERN_C_CONST RuntimeType SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453();
IL2CPP_EXTERN_C_CONST RuntimeType StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6();
IL2CPP_EXTERN_C_CONST RuntimeType UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_0_0_0;
IL2CPP_EXTERN_C void RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_0_0_0;
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F();
IL2CPP_EXTERN_C_CONST RuntimeType StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F_0_0_0;
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A();
IL2CPP_EXTERN_C_CONST RuntimeType OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A_0_0_0;
IL2CPP_EXTERN_C void ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_0_0_0;
IL2CPP_EXTERN_C void DSRowDiffIdUsageSection_tAA85427FBBFA116FDA0BD0EA17A579EF777C716A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DSRowDiffIdUsageSection_tAA85427FBBFA116FDA0BD0EA17A579EF777C716A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DSRowDiffIdUsageSection_tAA85427FBBFA116FDA0BD0EA17A579EF777C716A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DSRowDiffIdUsageSection_tAA85427FBBFA116FDA0BD0EA17A579EF777C716A_0_0_0;
IL2CPP_EXTERN_C void RowDiffIdUsageSection_t157154888DA88AD7D8A00E97657B47BCFEE3AF0D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RowDiffIdUsageSection_t157154888DA88AD7D8A00E97657B47BCFEE3AF0D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RowDiffIdUsageSection_t157154888DA88AD7D8A00E97657B47BCFEE3AF0D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RowDiffIdUsageSection_t157154888DA88AD7D8A00E97657B47BCFEE3AF0D_0_0_0;
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_t959FACC867970114DBF8DC7D4C649240E819940E_0_0_0;
IL2CPP_EXTERN_C void FocusBasedEventSequenceContext_tA9E2ED024CB3E4EC3C41F5B432AB56D892D69BF0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FocusBasedEventSequenceContext_tA9E2ED024CB3E4EC3C41F5B432AB56D892D69BF0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FocusBasedEventSequenceContext_tA9E2ED024CB3E4EC3C41F5B432AB56D892D69BF0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FocusBasedEventSequenceContext_tA9E2ED024CB3E4EC3C41F5B432AB56D892D69BF0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CompressFunc_tE252CCF3C0FAF930A5784104E8B592836B8780F6();
IL2CPP_EXTERN_C_CONST RuntimeType CompressFunc_tE252CCF3C0FAF930A5784104E8B592836B8780F6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CompressFunc_t25B4A18E8989D05668450401EAD65000F767B7F9();
IL2CPP_EXTERN_C_CONST RuntimeType CompressFunc_t25B4A18E8989D05668450401EAD65000F767B7F9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6();
IL2CPP_EXTERN_C_CONST RuntimeType ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9();
IL2CPP_EXTERN_C_CONST RuntimeType WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA();
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_0_0_0;
IL2CPP_EXTERN_C void BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_0_0_0;
IL2CPP_EXTERN_C void BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DSEnumCallback_t9CAE2A42E249E5C9E4C4E17B0BD5818949BE6B43();
IL2CPP_EXTERN_C_CONST RuntimeType DSEnumCallback_t9CAE2A42E249E5C9E4C4E17B0BD5818949BE6B43_0_0_0;
const Il2CppGuid IDirectSound_tE8DB80367829DCBD961343333FBCA0F8C1D04E8F::IID = { 0x279afa83, 0x4981, 0x11ce, 0xa5, 0x21, 0x0, 0x20, 0xaf, 0xb, 0xe5, 0x60 };
IL2CPP_EXTERN_C_CONST RuntimeType IDirectSound_tE8DB80367829DCBD961343333FBCA0F8C1D04E8F_0_0_0;
const Il2CppGuid IDirectSoundBuffer_tE22AE55E2066D72020EE7CF7309E16C901F8FB2E::IID = { 0x279afa85, 0x4981, 0x11ce, 0xa5, 0x21, 0x0, 0x20, 0xaf, 0xb, 0xe5, 0x60 };
IL2CPP_EXTERN_C_CONST RuntimeType IDirectSoundBuffer_tE22AE55E2066D72020EE7CF7309E16C901F8FB2E_0_0_0;
const Il2CppGuid IDirectSoundNotify_tCDF8118BF3AB8E0BFEA7994E34A8CDED9F12297A::IID = { 0xb0210783, 0x89cd, 0x11d0, 0xaf, 0x8, 0x0, 0xa0, 0xc9, 0x25, 0xcd, 0x16 };
IL2CPP_EXTERN_C_CONST RuntimeType IDirectSoundNotify_tCDF8118BF3AB8E0BFEA7994E34A8CDED9F12297A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68();
IL2CPP_EXTERN_C_CONST RuntimeType DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68_0_0_0;
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_0_0_0;
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_0_0_0;
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_0_0_0;
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_0_0_0;
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_0_0_0;
IL2CPP_EXTERN_C void ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SymbolicLinkWriterDelegate_t3C98E35E7ECAD625ACAFBEBFEB73F5099499444A();
IL2CPP_EXTERN_C_CONST RuntimeType SymbolicLinkWriterDelegate_t3C98E35E7ECAD625ACAFBEBFEB73F5099499444A_0_0_0;
IL2CPP_EXTERN_C void FacetsCompiler_t65A6917F6CE74E049E1914BB6CB0BEE4BF463663_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FacetsCompiler_t65A6917F6CE74E049E1914BB6CB0BEE4BF463663_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FacetsCompiler_t65A6917F6CE74E049E1914BB6CB0BEE4BF463663_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FacetsCompiler_t65A6917F6CE74E049E1914BB6CB0BEE4BF463663_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA_0_0_0;
IL2CPP_EXTERN_C void U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_0_0_0;
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1();
IL2CPP_EXTERN_C_CONST RuntimeType FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0();
IL2CPP_EXTERN_C_CONST RuntimeType StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0();
IL2CPP_EXTERN_C_CONST RuntimeType StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B();
IL2CPP_EXTERN_C_CONST RuntimeType StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD();
IL2CPP_EXTERN_C_CONST RuntimeType StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3();
IL2CPP_EXTERN_C_CONST RuntimeType StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA();
IL2CPP_EXTERN_C_CONST RuntimeType StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550();
IL2CPP_EXTERN_C_CONST RuntimeType WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_0_0_0;
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98();
IL2CPP_EXTERN_C_CONST RuntimeType SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98_0_0_0;
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Margins_t710D98C860962372C9323F82DD766A3977353F85_0_0_0;
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_0_0_0;
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_0_0_0;
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_0_0_0;
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_0_0_0;
IL2CPP_EXTERN_C void UploadStreamInfo_tF2CDB2AE79085BEC0562A27EEC0E29CFB75E4297_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadStreamInfo_tF2CDB2AE79085BEC0562A27EEC0E29CFB75E4297_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadStreamInfo_tF2CDB2AE79085BEC0562A27EEC0E29CFB75E4297_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadStreamInfo_tF2CDB2AE79085BEC0562A27EEC0E29CFB75E4297_0_0_0;
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_0_0_0;
IL2CPP_EXTERN_C void AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_0_0_0;
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_0_0_0;
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02();
IL2CPP_EXTERN_C_CONST RuntimeType PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02_0_0_0;
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_0_0_0;
IL2CPP_EXTERN_C void LoggingContextField_tAF65B7EBB2B40A0C0EA363CD0D2BD39CA7C2245E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LoggingContextField_tAF65B7EBB2B40A0C0EA363CD0D2BD39CA7C2245E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LoggingContextField_tAF65B7EBB2B40A0C0EA363CD0D2BD39CA7C2245E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LoggingContextField_tAF65B7EBB2B40A0C0EA363CD0D2BD39CA7C2245E_0_0_0;
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44();
IL2CPP_EXTERN_C_CONST RuntimeType SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44_0_0_0;
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_0_0_0;
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_0_0_0;
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_0_0_0;
IL2CPP_EXTERN_C void MIDIHDR_tB1F8DA26D819105B2046273A6C3DAF134A11D894_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MIDIHDR_tB1F8DA26D819105B2046273A6C3DAF134A11D894_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MIDIHDR_tB1F8DA26D819105B2046273A6C3DAF134A11D894_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MIDIHDR_tB1F8DA26D819105B2046273A6C3DAF134A11D894_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MidiInCallback_t50EF6C6197ED0CABA2B63CC618EAAF9E8AA422F0();
IL2CPP_EXTERN_C_CONST RuntimeType MidiInCallback_t50EF6C6197ED0CABA2B63CC618EAAF9E8AA422F0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MidiOutCallback_tAF171FDFBF3B4D4196C21AC0B923E631F0B3A8D2();
IL2CPP_EXTERN_C_CONST RuntimeType MidiOutCallback_tAF171FDFBF3B4D4196C21AC0B923E631F0B3A8D2_0_0_0;
IL2CPP_EXTERN_C void MIXERCAPS_t05644243E2890024F370E4662B1AF37F34194F61_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MIXERCAPS_t05644243E2890024F370E4662B1AF37F34194F61_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MIXERCAPS_t05644243E2890024F370E4662B1AF37F34194F61_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MIXERCAPS_t05644243E2890024F370E4662B1AF37F34194F61_0_0_0;
IL2CPP_EXTERN_C void MIXERCONTROL_t3E702CB86A802BFCCD84171EF81AA6FBAD852D5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MIXERCONTROL_t3E702CB86A802BFCCD84171EF81AA6FBAD852D5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MIXERCONTROL_t3E702CB86A802BFCCD84171EF81AA6FBAD852D5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MIXERCONTROL_t3E702CB86A802BFCCD84171EF81AA6FBAD852D5E_0_0_0;
IL2CPP_EXTERN_C void MIXERCONTROLDETAILS_LISTTEXT_t0B6339EF268559CAFCF21956C342A3316FBA3B17_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MIXERCONTROLDETAILS_LISTTEXT_t0B6339EF268559CAFCF21956C342A3316FBA3B17_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MIXERCONTROLDETAILS_LISTTEXT_t0B6339EF268559CAFCF21956C342A3316FBA3B17_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MIXERCONTROLDETAILS_LISTTEXT_t0B6339EF268559CAFCF21956C342A3316FBA3B17_0_0_0;
IL2CPP_EXTERN_C void MIXERLINE_t625A211D6B8609D8248FA434D13B29DD881D9E1A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MIXERLINE_t625A211D6B8609D8248FA434D13B29DD881D9E1A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MIXERLINE_t625A211D6B8609D8248FA434D13B29DD881D9E1A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MIXERLINE_t625A211D6B8609D8248FA434D13B29DD881D9E1A_0_0_0;
IL2CPP_EXTERN_C void PpmContext_t05279755DD2FD15EE06305E51B0D3F23756DA35A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PpmContext_t05279755DD2FD15EE06305E51B0D3F23756DA35A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PpmContext_t05279755DD2FD15EE06305E51B0D3F23756DA35A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PpmContext_t05279755DD2FD15EE06305E51B0D3F23756DA35A_0_0_0;
IL2CPP_EXTERN_C void SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C();
IL2CPP_EXTERN_C_CONST RuntimeType ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C_0_0_0;
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3();
IL2CPP_EXTERN_C_CONST RuntimeType InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3_0_0_0;
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_0_0_0;
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_0_0_0;
IL2CPP_EXTERN_C void MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_0_0_0;
IL2CPP_EXTERN_C void TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ContactEventDelegate_t0C12A4C4BCCBB815C830E63B3AE93E420C0ADB32();
IL2CPP_EXTERN_C_CONST RuntimeType ContactEventDelegate_t0C12A4C4BCCBB815C830E63B3AE93E420C0ADB32_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509();
IL2CPP_EXTERN_C_CONST RuntimeType CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4();
IL2CPP_EXTERN_C_CONST RuntimeType UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_0_0_0;
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ClearLogDelegate_tA09FCDE1BCA7B21E2C53CA5463EEC2BB2A587EDB();
IL2CPP_EXTERN_C_CONST RuntimeType ClearLogDelegate_tA09FCDE1BCA7B21E2C53CA5463EEC2BB2A587EDB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogMessageDelegate_tB7EBEDDF3DD3DDD6DBFCBC4475B4BC702CE23345();
IL2CPP_EXTERN_C_CONST RuntimeType LogMessageDelegate_tB7EBEDDF3DD3DDD6DBFCBC4475B4BC702CE23345_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC();
IL2CPP_EXTERN_C_CONST RuntimeType GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A();
IL2CPP_EXTERN_C_CONST RuntimeType RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A_0_0_0;
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_0_0_0;
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_0_0_0;
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_0_0_0;
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_0_0_0;
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_0_0_0;
IL2CPP_EXTERN_C void ReorderableListEventStruct_t68B0937EFFD16BA41C6FE4C378AA3FEE816EE2C0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReorderableListEventStruct_t68B0937EFFD16BA41C6FE4C378AA3FEE816EE2C0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReorderableListEventStruct_t68B0937EFFD16BA41C6FE4C378AA3FEE816EE2C0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReorderableListEventStruct_t68B0937EFFD16BA41C6FE4C378AA3FEE816EE2C0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Try_000006E8U24PostfixBurstDelegate_tA30F9C73EB615DF5E109DC3D5F7AAFE2941B331D();
IL2CPP_EXTERN_C_CONST RuntimeType Try_000006E8U24PostfixBurstDelegate_tA30F9C73EB615DF5E109DC3D5F7AAFE2941B331D_0_0_0;
IL2CPP_EXTERN_C void IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_0_0_0;
IL2CPP_EXTERN_C void IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1();
IL2CPP_EXTERN_C_CONST RuntimeType TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F();
IL2CPP_EXTERN_C_CONST RuntimeType TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PageSnapChange_t8666CF0A3DE35673182279738A45EF457F5FC4C9();
IL2CPP_EXTERN_C_CONST RuntimeType PageSnapChange_t8666CF0A3DE35673182279738A45EF457F5FC4C9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046();
IL2CPP_EXTERN_C_CONST RuntimeType HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_0_0_0;
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_0_0_0;
IL2CPP_EXTERN_C void SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_0_0_0;
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_0_0_0;
IL2CPP_EXTERN_C void CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_0_0_0;
IL2CPP_EXTERN_C void TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_0_0_0;
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_0_0_0;
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_0_0_0;
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_0_0_0;
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_0_0_0;
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_0_0_0;
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_0_0_0;
IL2CPP_EXTERN_C void Resources_t4AE7997B2F280AD6E14AA8EA7963A42A66A1648B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_t4AE7997B2F280AD6E14AA8EA7963A42A66A1648B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_t4AE7997B2F280AD6E14AA8EA7963A42A66A1648B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_t4AE7997B2F280AD6E14AA8EA7963A42A66A1648B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530_0_0_0;
IL2CPP_EXTERN_C void SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_0_0_0;
IL2CPP_EXTERN_C void TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_0_0_0;
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_0_0_0;
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_0_0_0;
IL2CPP_EXTERN_C void IconName_tBCA4C696FFEC8647D761120E0B5E5AF85E4ECB24_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IconName_tBCA4C696FFEC8647D761120E0B5E5AF85E4ECB24_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IconName_tBCA4C696FFEC8647D761120E0B5E5AF85E4ECB24_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IconName_tBCA4C696FFEC8647D761120E0B5E5AF85E4ECB24_0_0_0;
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_0_0_0;
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_0_0_0;
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_0_0_0;
IL2CPP_EXTERN_C void Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_0_0_0;
IL2CPP_EXTERN_C void Meta_tCCCCDDA9D2E4CBAC052062C6FBE9029798702B47_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Meta_tCCCCDDA9D2E4CBAC052062C6FBE9029798702B47_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Meta_tCCCCDDA9D2E4CBAC052062C6FBE9029798702B47_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Meta_tCCCCDDA9D2E4CBAC052062C6FBE9029798702B47_0_0_0;
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_0_0_0;
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_0_0_0;
IL2CPP_EXTERN_C void StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_0_0_0;
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_0_0_0;
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_0_0_0;
IL2CPP_EXTERN_C void TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_0_0_0;
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_0_0_0;
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_0_0_0;
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Entry_tB8765CA56422E2C92887314844384843688DCB9F_0_0_0;
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_0_0_0;
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_0_0_0;
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_0_0_0;
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_0_0_0;
IL2CPP_EXTERN_C void Comparison_t8926BD187CC7CEF468E3592AD18DFFB21C62C487_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Comparison_t8926BD187CC7CEF468E3592AD18DFFB21C62C487_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Comparison_t8926BD187CC7CEF468E3592AD18DFFB21C62C487_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Comparison_t8926BD187CC7CEF468E3592AD18DFFB21C62C487_0_0_0;
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_tBBC8FD8F40D716A1C8B4F9D883D3B121E356881C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_tBBC8FD8F40D716A1C8B4F9D883D3B121E356881C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_tBBC8FD8F40D716A1C8B4F9D883D3B121E356881C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_tBBC8FD8F40D716A1C8B4F9D883D3B121E356881C_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t3D5A25DC08492EA2ADCEA359C2240CC0F481D91C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t3D5A25DC08492EA2ADCEA359C2240CC0F481D91C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t3D5A25DC08492EA2ADCEA359C2240CC0F481D91C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t3D5A25DC08492EA2ADCEA359C2240CC0F481D91C_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t9FE40F8A50A6C374FD4C5CB3542BAD4F406CA0CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t9FE40F8A50A6C374FD4C5CB3542BAD4F406CA0CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t9FE40F8A50A6C374FD4C5CB3542BAD4F406CA0CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t9FE40F8A50A6C374FD4C5CB3542BAD4F406CA0CB_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t4F2AB24BC02A7052E6B9EED48D1A83B0A2F7F97F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t4F2AB24BC02A7052E6B9EED48D1A83B0A2F7F97F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t4F2AB24BC02A7052E6B9EED48D1A83B0A2F7F97F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t4F2AB24BC02A7052E6B9EED48D1A83B0A2F7F97F_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t2513809E5905A2EC3232C9FCAE5A95B601B92AFF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t2513809E5905A2EC3232C9FCAE5A95B601B92AFF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t2513809E5905A2EC3232C9FCAE5A95B601B92AFF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t2513809E5905A2EC3232C9FCAE5A95B601B92AFF_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t4D9701A8A24E14F65FEFA10A3020AE19F6207116_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t4D9701A8A24E14F65FEFA10A3020AE19F6207116_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t4D9701A8A24E14F65FEFA10A3020AE19F6207116_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t4D9701A8A24E14F65FEFA10A3020AE19F6207116_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_tD1323384D598EA599822B1740DA713F0D50A1E2D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_tD1323384D598EA599822B1740DA713F0D50A1E2D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_tD1323384D598EA599822B1740DA713F0D50A1E2D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_tD1323384D598EA599822B1740DA713F0D50A1E2D_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t7C1EFF89409588A65507FDF01648DD5646A1DA3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t7C1EFF89409588A65507FDF01648DD5646A1DA3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t7C1EFF89409588A65507FDF01648DD5646A1DA3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t7C1EFF89409588A65507FDF01648DD5646A1DA3E_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t587C66C8AF89A0540B6359696E328E4A89037F8C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t587C66C8AF89A0540B6359696E328E4A89037F8C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t587C66C8AF89A0540B6359696E328E4A89037F8C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t587C66C8AF89A0540B6359696E328E4A89037F8C_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_t27D1EFFFFDD5EF6B03B5BF989E710CA8FCF1931C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_t27D1EFFFFDD5EF6B03B5BF989E710CA8FCF1931C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_t27D1EFFFFDD5EF6B03B5BF989E710CA8FCF1931C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_t27D1EFFFFDD5EF6B03B5BF989E710CA8FCF1931C_0_0_0;
IL2CPP_EXTERN_C void MonoScriptData_tB059CCA3190E32B529A7BD00019BA695252B3F2D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoScriptData_tB059CCA3190E32B529A7BD00019BA695252B3F2D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoScriptData_tB059CCA3190E32B529A7BD00019BA695252B3F2D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoScriptData_tB059CCA3190E32B529A7BD00019BA695252B3F2D_0_0_0;
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_0_0_0;
IL2CPP_EXTERN_C void unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_0_0_0;
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09_0_0_0;
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0;
IL2CPP_EXTERN_C void AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_0_0_0;
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_0_0_0;
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_0_0_0;
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_0_0_0;
IL2CPP_EXTERN_C void UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_0_0_0;
IL2CPP_EXTERN_C void VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_0_0_0;
IL2CPP_EXTERN_C void VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_0_0_0;
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WaveCallback_t1899C3EA361805229F7571CBEE20BDF8A45DC9B1();
IL2CPP_EXTERN_C_CONST RuntimeType WaveCallback_t1899C3EA361805229F7571CBEE20BDF8A45DC9B1_0_0_0;
IL2CPP_EXTERN_C void Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_0_0_0;
IL2CPP_EXTERN_C void XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_0_0_0;
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_0_0_0;
IL2CPP_EXTERN_C void NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_0_0_0;
IL2CPP_EXTERN_C void VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA();
IL2CPP_EXTERN_C_CONST RuntimeType HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA_0_0_0;
IL2CPP_EXTERN_C void XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_0_0_0;
IL2CPP_EXTERN_C void AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_0_0_0;
IL2CPP_EXTERN_C void ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_0_0_0;
IL2CPP_EXTERN_C void QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_0_0_0;
IL2CPP_EXTERN_C void SymbolTables_tBFFFF1A52BAAB8C6D52F8B28AB963DC625ECB177_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SymbolTables_tBFFFF1A52BAAB8C6D52F8B28AB963DC625ECB177_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SymbolTables_tBFFFF1A52BAAB8C6D52F8B28AB963DC625ECB177_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SymbolTables_tBFFFF1A52BAAB8C6D52F8B28AB963DC625ECB177_0_0_0;
IL2CPP_EXTERN_C void ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_0_0_0;
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_0_0_0;
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_0_0_0;
IL2CPP_EXTERN_C void AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_0_0_0;
IL2CPP_EXTERN_C void ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_0_0_0;
IL2CPP_EXTERN_C void Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_0_0_0;
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Hash128Long_00000726U24PostfixBurstDelegate_tDCFEBF017B234053E20733EE5D672798D4729FFD();
IL2CPP_EXTERN_C_CONST RuntimeType Hash128Long_00000726U24PostfixBurstDelegate_tDCFEBF017B234053E20733EE5D672798D4729FFD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Hash64Long_0000071FU24PostfixBurstDelegate_tAFFFD862200972D45B81F5803E2F182B4AC91DAA();
IL2CPP_EXTERN_C_CONST RuntimeType Hash64Long_0000071FU24PostfixBurstDelegate_tAFFFD862200972D45B81F5803E2F182B4AC91DAA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Try_0000098EU24PostfixBurstDelegate_tD75442236C1C50A7FC708F09AA8022D1407BB102();
IL2CPP_EXTERN_C_CONST RuntimeType Try_0000098EU24PostfixBurstDelegate_tD75442236C1C50A7FC708F09AA8022D1407BB102_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Try_00000980U24PostfixBurstDelegate_tB323B9595B050940232579C962823E084FF96338();
IL2CPP_EXTERN_C_CONST RuntimeType Try_00000980U24PostfixBurstDelegate_tB323B9595B050940232579C962823E084FF96338_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOInit_t19DEED3FDD7A8C4755F496D4D981C21CA14D6EC8();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOInit_t19DEED3FDD7A8C4755F496D4D981C21CA14D6EC8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOcanSampleRate_t21D1E4247254C359F241D10C18C7FF0DE54DE7D7();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOcanSampleRate_t21D1E4247254C359F241D10C18C7FF0DE54DE7D7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOcontrolPanel_t9899B91E08D28520E3001BD7FC720175C6F11583();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOcontrolPanel_t9899B91E08D28520E3001BD7FC720175C6F11583_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOcreateBuffers_t03A43846C2964A10D7E6B2366740DEBF4A5CD500();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOcreateBuffers_t03A43846C2964A10D7E6B2366740DEBF4A5CD500_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOdisposeBuffers_tE2615FD1025C68603CB92F152300175C2DB2F5C6();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOdisposeBuffers_tE2615FD1025C68603CB92F152300175C2DB2F5C6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOfuture_t4EF9368AF82036C3D4931A2A5E8D343BADC5256B();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOfuture_t4EF9368AF82036C3D4931A2A5E8D343BADC5256B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetBufferSize_t136A7544D886EF729346C5CE18EF9CFECA389310();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetBufferSize_t136A7544D886EF729346C5CE18EF9CFECA389310_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetChannelInfo_tF5B3ED2BC7D80F817A6784CA9CCD98F598ECE25E();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetChannelInfo_tF5B3ED2BC7D80F817A6784CA9CCD98F598ECE25E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetChannels_t943685D74017C0F57144BE66509AB2B3D73B8FAD();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetChannels_t943685D74017C0F57144BE66509AB2B3D73B8FAD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetClockSources_t2F0DB47647C1E0821E8FD5D6574AC6CBC3A538A8();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetClockSources_t2F0DB47647C1E0821E8FD5D6574AC6CBC3A538A8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetDriverName_tCC2F74395C1ED60929D18D814DE3179E77DB08B6();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetDriverName_tCC2F74395C1ED60929D18D814DE3179E77DB08B6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetDriverVersion_t205BEE4ADE4CD6A2E046F680FBAAE1A07FE84AC9();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetDriverVersion_t205BEE4ADE4CD6A2E046F680FBAAE1A07FE84AC9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetErrorMessage_tD2276FF34BDD585DFAE0EFAB159101CA180D4329();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetErrorMessage_tD2276FF34BDD585DFAE0EFAB159101CA180D4329_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetLatencies_t5D93BE805DC10554D2A013256E7E4FF48A4F7A81();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetLatencies_t5D93BE805DC10554D2A013256E7E4FF48A4F7A81_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetSamplePosition_t634828F8CA534853A6923CF82EB50795F2C948FF();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetSamplePosition_t634828F8CA534853A6923CF82EB50795F2C948FF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOgetSampleRate_t9CBA6B18ADC51CB0A5FA31A5B5F14E4E96BB26CF();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOgetSampleRate_t9CBA6B18ADC51CB0A5FA31A5B5F14E4E96BB26CF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOoutputReady_t7E03F56A46BEB5A001B1A4B481BFEB5DAA0A611A();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOoutputReady_t7E03F56A46BEB5A001B1A4B481BFEB5DAA0A611A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOsetClockSource_t56DD29D333CF6569C0BCC5B87C172763C019F11F();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOsetClockSource_t56DD29D333CF6569C0BCC5B87C172763C019F11F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOsetSampleRate_t2BABCE8C7BBCE5962F4DDEABD5EB1543568D7A86();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOsetSampleRate_t2BABCE8C7BBCE5962F4DDEABD5EB1543568D7A86_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOstart_tB4210299CB98EB60BEF82086C67BB50A0EAD7270();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOstart_tB4210299CB98EB60BEF82086C67BB50A0EAD7270_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ASIOstop_tC4A297C39899E989A0DF5C053FD2E397359D7FB5();
IL2CPP_EXTERN_C_CONST RuntimeType ASIOstop_tC4A297C39899E989A0DF5C053FD2E397359D7FB5_0_0_0;
IL2CPP_EXTERN_C void AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C();
IL2CPP_EXTERN_C_CONST RuntimeType IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_0_0_0;
IL2CPP_EXTERN_C void ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4();
IL2CPP_EXTERN_C_CONST RuntimeType WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4_0_0_0;
IL2CPP_EXTERN_C void Decoder2_t34D054C2FFAC9BCEB4A8CB54CD188880A69983D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Decoder2_t34D054C2FFAC9BCEB4A8CB54CD188880A69983D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Decoder2_t34D054C2FFAC9BCEB4A8CB54CD188880A69983D9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Decoder2_t34D054C2FFAC9BCEB4A8CB54CD188880A69983D9_0_0_0;
IL2CPP_EXTERN_C void Encoder2_t4174E50F10BB54D676C9635D2EABA78453675479_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Encoder2_t4174E50F10BB54D676C9635D2EABA78453675479_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Encoder2_t4174E50F10BB54D676C9635D2EABA78453675479_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Encoder2_t4174E50F10BB54D676C9635D2EABA78453675479_0_0_0;
IL2CPP_EXTERN_C void Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_0_0_0;
IL2CPP_EXTERN_C void InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_0_0_0;
IL2CPP_EXTERN_C void ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_0_0_0;
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_0_0_0;
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D_0_0_0;
IL2CPP_EXTERN_C Il2CppInteropData g_Il2CppInteropData[];
Il2CppInteropData g_Il2CppInteropData[723] = 
{
	{ NULL, AcmDriverDetails_t7D54F87CDCA5B7BF61AB326F9EA83F7386D032A2_marshal_pinvoke, AcmDriverDetails_t7D54F87CDCA5B7BF61AB326F9EA83F7386D032A2_marshal_pinvoke_back, AcmDriverDetails_t7D54F87CDCA5B7BF61AB326F9EA83F7386D032A2_marshal_pinvoke_cleanup, NULL, NULL, &AcmDriverDetails_t7D54F87CDCA5B7BF61AB326F9EA83F7386D032A2_0_0_0 },
	{ NULL, AcmFormatChoose_tA04D194E0BCE74B96923A0FCDDDFE203B137FF18_marshal_pinvoke, AcmFormatChoose_tA04D194E0BCE74B96923A0FCDDDFE203B137FF18_marshal_pinvoke_back, AcmFormatChoose_tA04D194E0BCE74B96923A0FCDDDFE203B137FF18_marshal_pinvoke_cleanup, NULL, NULL, &AcmFormatChoose_tA04D194E0BCE74B96923A0FCDDDFE203B137FF18_0_0_0 },
	{ NULL, AcmFormatDetails_t43289E7C679ABFCA7DB006ACA1FFB3C2990596D4_marshal_pinvoke, AcmFormatDetails_t43289E7C679ABFCA7DB006ACA1FFB3C2990596D4_marshal_pinvoke_back, AcmFormatDetails_t43289E7C679ABFCA7DB006ACA1FFB3C2990596D4_marshal_pinvoke_cleanup, NULL, NULL, &AcmFormatDetails_t43289E7C679ABFCA7DB006ACA1FFB3C2990596D4_0_0_0 },
	{ NULL, AcmFormatTagDetails_t1EDEC96A26C87947D363120ADF43D2EB68AA0D21_marshal_pinvoke, AcmFormatTagDetails_t1EDEC96A26C87947D363120ADF43D2EB68AA0D21_marshal_pinvoke_back, AcmFormatTagDetails_t1EDEC96A26C87947D363120ADF43D2EB68AA0D21_marshal_pinvoke_cleanup, NULL, NULL, &AcmFormatTagDetails_t1EDEC96A26C87947D363120ADF43D2EB68AA0D21_0_0_0 },
	{ NULL, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke_back, AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_marshal_pinvoke_cleanup, NULL, NULL, &AcmStreamHeaderStruct_t71D3A2BE3904398F717E0E3C79A7B33B4B77DFA5_0_0_0 },
	{ DelegatePInvokeWrapper_Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07, NULL, NULL, NULL, NULL, NULL, &Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0 },
	{ NULL, AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_pinvoke, AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_pinvoke_back, AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_marshal_pinvoke_cleanup, NULL, NULL, &AdpcmWaveFormat_tDD7FCF1D2E4E8E06CCE055AC648FB02E5B25DAC6_0_0_0 },
	{ NULL, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_back, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_cleanup, NULL, NULL, &Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_0_0_0 },
	{ DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F, NULL, NULL, NULL, NULL, NULL, &AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0 },
	{ NULL, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_0_0_0 },
	{ NULL, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_0_0_0 },
	{ NULL, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_0_0_0 },
	{ NULL, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_back, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_0_0_0 },
	{ NULL, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_back, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_0_0_0 },
	{ NULL, ArchiveFileInfo_t051019338FB580F17B7DA49693024E09572EF9CC_marshal_pinvoke, ArchiveFileInfo_t051019338FB580F17B7DA49693024E09572EF9CC_marshal_pinvoke_back, ArchiveFileInfo_t051019338FB580F17B7DA49693024E09572EF9CC_marshal_pinvoke_cleanup, NULL, NULL, &ArchiveFileInfo_t051019338FB580F17B7DA49693024E09572EF9CC_0_0_0 },
	{ NULL, ArrayMetadata_tBEFB514CF36C7DB76B6E2EF87665D7F1675D846B_marshal_pinvoke, ArrayMetadata_tBEFB514CF36C7DB76B6E2EF87665D7F1675D846B_marshal_pinvoke_back, ArrayMetadata_tBEFB514CF36C7DB76B6E2EF87665D7F1675D846B_marshal_pinvoke_cleanup, NULL, NULL, &ArrayMetadata_tBEFB514CF36C7DB76B6E2EF87665D7F1675D846B_0_0_0 },
	{ NULL, ArrayMetadata_t10B29288F922769F73AEAB30D0F8BF422D2894FA_marshal_pinvoke, ArrayMetadata_t10B29288F922769F73AEAB30D0F8BF422D2894FA_marshal_pinvoke_back, ArrayMetadata_t10B29288F922769F73AEAB30D0F8BF422D2894FA_marshal_pinvoke_cleanup, NULL, NULL, &ArrayMetadata_t10B29288F922769F73AEAB30D0F8BF422D2894FA_0_0_0 },
	{ NULL, AsioBufferInfo_tD2A0DBE875DF688E9C8D38FEEA87644E4E222CF2_marshal_pinvoke, AsioBufferInfo_tD2A0DBE875DF688E9C8D38FEEA87644E4E222CF2_marshal_pinvoke_back, AsioBufferInfo_tD2A0DBE875DF688E9C8D38FEEA87644E4E222CF2_marshal_pinvoke_cleanup, NULL, NULL, &AsioBufferInfo_tD2A0DBE875DF688E9C8D38FEEA87644E4E222CF2_0_0_0 },
	{ NULL, AsioCallbacks_tAE73946A12DA94E2D724D8239E6C22E2A9E439B6_marshal_pinvoke, AsioCallbacks_tAE73946A12DA94E2D724D8239E6C22E2A9E439B6_marshal_pinvoke_back, AsioCallbacks_tAE73946A12DA94E2D724D8239E6C22E2A9E439B6_marshal_pinvoke_cleanup, NULL, NULL, &AsioCallbacks_tAE73946A12DA94E2D724D8239E6C22E2A9E439B6_0_0_0 },
	{ NULL, AsioChannelInfo_t6BBE1E54394C9FA2F38998BD2A3232A8F6DE24C4_marshal_pinvoke, AsioChannelInfo_t6BBE1E54394C9FA2F38998BD2A3232A8F6DE24C4_marshal_pinvoke_back, AsioChannelInfo_t6BBE1E54394C9FA2F38998BD2A3232A8F6DE24C4_marshal_pinvoke_cleanup, NULL, NULL, &AsioChannelInfo_t6BBE1E54394C9FA2F38998BD2A3232A8F6DE24C4_0_0_0 },
	{ DelegatePInvokeWrapper_AsioFillBufferCallback_t35E4E18AF68CF9F1B98877787A70A06A3D648377, NULL, NULL, NULL, NULL, NULL, &AsioFillBufferCallback_t35E4E18AF68CF9F1B98877787A70A06A3D648377_0_0_0 },
	{ NULL, AsioTime_t9B95DA2923AE07F48F2E81285E5015B55158CC49_marshal_pinvoke, AsioTime_t9B95DA2923AE07F48F2E81285E5015B55158CC49_marshal_pinvoke_back, AsioTime_t9B95DA2923AE07F48F2E81285E5015B55158CC49_marshal_pinvoke_cleanup, NULL, NULL, &AsioTime_t9B95DA2923AE07F48F2E81285E5015B55158CC49_0_0_0 },
	{ NULL, AsioTimeCode_t5A361ECABCC1BB617D2DAEE34CCEF70F5C77C1D5_marshal_pinvoke, AsioTimeCode_t5A361ECABCC1BB617D2DAEE34CCEF70F5C77C1D5_marshal_pinvoke_back, AsioTimeCode_t5A361ECABCC1BB617D2DAEE34CCEF70F5C77C1D5_marshal_pinvoke_cleanup, NULL, NULL, &AsioTimeCode_t5A361ECABCC1BB617D2DAEE34CCEF70F5C77C1D5_0_0_0 },
	{ NULL, AsioTimeInfo_t0D9268F8940F3C5237EE8937D822DF9C3A71BD49_marshal_pinvoke, AsioTimeInfo_t0D9268F8940F3C5237EE8937D822DF9C3A71BD49_marshal_pinvoke_back, AsioTimeInfo_t0D9268F8940F3C5237EE8937D822DF9C3A71BD49_marshal_pinvoke_cleanup, NULL, NULL, &AsioTimeInfo_t0D9268F8940F3C5237EE8937D822DF9C3A71BD49_0_0_0 },
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 },
	{ NULL, AssemblyFullName_tD4F2721197802F920A651A4460AB8FA432ED6F2B_marshal_pinvoke, AssemblyFullName_tD4F2721197802F920A651A4460AB8FA432ED6F2B_marshal_pinvoke_back, AssemblyFullName_tD4F2721197802F920A651A4460AB8FA432ED6F2B_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyFullName_tD4F2721197802F920A651A4460AB8FA432ED6F2B_0_0_0 },
	{ NULL, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_back, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_0_0_0 },
	{ NULL, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_back, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_0_0_0 },
	{ NULL, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_back, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_0_0_0 },
	{ NULL, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_back, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_0_0_0 },
	{ NULL, AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_pinvoke, AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_pinvoke_back, AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_0_0_0 },
	{ NULL, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_back, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_0_0_0 },
	{ NULL, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_0_0_0 },
	{ NULL, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_back, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_0_0_0 },
	{ NULL, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_back, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_0_0_0 },
	{ NULL, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_back, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_0_0_0 },
	{ NULL, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_back, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_cleanup, NULL, NULL, &AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_0_0_0 },
	{ NULL, AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke, AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_back, AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_cleanup, NULL, NULL, &AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_0_0_0 },
	{ NULL, AudioVolumeNotificationDataStruct_tDFDE397406901650D1B9FDE03465DF6E41F18B40_marshal_pinvoke, AudioVolumeNotificationDataStruct_tDFDE397406901650D1B9FDE03465DF6E41F18B40_marshal_pinvoke_back, AudioVolumeNotificationDataStruct_tDFDE397406901650D1B9FDE03465DF6E41F18B40_marshal_pinvoke_cleanup, NULL, NULL, &AudioVolumeNotificationDataStruct_tDFDE397406901650D1B9FDE03465DF6E41F18B40_0_0_0 },
	{ NULL, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_back, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_cleanup, NULL, NULL, &Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_0_0_0 },
	{ NULL, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup, NULL, NULL, &BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0 },
	{ NULL, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup, NULL, NULL, &BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0 },
	{ NULL, BitTreeDecoder_t1926657A0A3AFB2F3534A563DED4468002998382_marshal_pinvoke, BitTreeDecoder_t1926657A0A3AFB2F3534A563DED4468002998382_marshal_pinvoke_back, BitTreeDecoder_t1926657A0A3AFB2F3534A563DED4468002998382_marshal_pinvoke_cleanup, NULL, NULL, &BitTreeDecoder_t1926657A0A3AFB2F3534A563DED4468002998382_0_0_0 },
	{ NULL, BitTreeEncoder_t164B27A0A82627E0639F40241F60840DD559B09E_marshal_pinvoke, BitTreeEncoder_t164B27A0A82627E0639F40241F60840DD559B09E_marshal_pinvoke_back, BitTreeEncoder_t164B27A0A82627E0639F40241F60840DD559B09E_marshal_pinvoke_cleanup, NULL, NULL, &BitTreeEncoder_t164B27A0A82627E0639F40241F60840DD559B09E_0_0_0 },
	{ NULL, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_back, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_cleanup, NULL, NULL, &BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_0_0_0 },
	{ NULL, BufferDesc_tD9CD6BC395AEAFDE6FC97CAB6933F5BC9C0559A7_marshal_pinvoke, BufferDesc_tD9CD6BC395AEAFDE6FC97CAB6933F5BC9C0559A7_marshal_pinvoke_back, BufferDesc_tD9CD6BC395AEAFDE6FC97CAB6933F5BC9C0559A7_marshal_pinvoke_cleanup, NULL, NULL, &BufferDesc_tD9CD6BC395AEAFDE6FC97CAB6933F5BC9C0559A7_0_0_0 },
	{ NULL, BufferSegment_t3B766B555791F8BE558F53ACD0661A027BE1C29C_marshal_pinvoke, BufferSegment_t3B766B555791F8BE558F53ACD0661A027BE1C29C_marshal_pinvoke_back, BufferSegment_t3B766B555791F8BE558F53ACD0661A027BE1C29C_marshal_pinvoke_cleanup, NULL, NULL, &BufferSegment_t3B766B555791F8BE558F53ACD0661A027BE1C29C_0_0_0 },
	{ NULL, BufferStore_t281534342F2BCDCE873B847857D11B7B9CD3B984_marshal_pinvoke, BufferStore_t281534342F2BCDCE873B847857D11B7B9CD3B984_marshal_pinvoke_back, BufferStore_t281534342F2BCDCE873B847857D11B7B9CD3B984_marshal_pinvoke_cleanup, NULL, NULL, &BufferStore_t281534342F2BCDCE873B847857D11B7B9CD3B984_0_0_0 },
	{ NULL, CStreamSwitch_tDB3469F5195C1DA9546CC76F2C8B39E163554048_marshal_pinvoke, CStreamSwitch_tDB3469F5195C1DA9546CC76F2C8B39E163554048_marshal_pinvoke_back, CStreamSwitch_tDB3469F5195C1DA9546CC76F2C8B39E163554048_marshal_pinvoke_cleanup, NULL, NULL, &CStreamSwitch_tDB3469F5195C1DA9546CC76F2C8B39E163554048_0_0_0 },
	{ NULL, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_back, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_0_0_0 },
	{ NULL, CallbackDescriptor_tBBD905817625AD0C493384F7AC3B7F0C97775743_marshal_pinvoke, CallbackDescriptor_tBBD905817625AD0C493384F7AC3B7F0C97775743_marshal_pinvoke_back, CallbackDescriptor_tBBD905817625AD0C493384F7AC3B7F0C97775743_marshal_pinvoke_cleanup, NULL, NULL, &CallbackDescriptor_tBBD905817625AD0C493384F7AC3B7F0C97775743_0_0_0 },
	{ NULL, CallbackDescriptor_t8DE2456607B38580A2C223D9E26900A6053A2F8A_marshal_pinvoke, CallbackDescriptor_t8DE2456607B38580A2C223D9E26900A6053A2F8A_marshal_pinvoke_back, CallbackDescriptor_t8DE2456607B38580A2C223D9E26900A6053A2F8A_marshal_pinvoke_cleanup, NULL, NULL, &CallbackDescriptor_t8DE2456607B38580A2C223D9E26900A6053A2F8A_0_0_0 },
	{ NULL, CanStartDragArgs_tABF4E0D7A89F6C14BE4E8308C18129670E80DFEF_marshal_pinvoke, CanStartDragArgs_tABF4E0D7A89F6C14BE4E8308C18129670E80DFEF_marshal_pinvoke_back, CanStartDragArgs_tABF4E0D7A89F6C14BE4E8308C18129670E80DFEF_marshal_pinvoke_cleanup, NULL, NULL, &CanStartDragArgs_tABF4E0D7A89F6C14BE4E8308C18129670E80DFEF_0_0_0 },
	{ NULL, CancelInvocationMessage_tC2DEA405D8E283E99F2EFFE4904B19F59EB839A5_marshal_pinvoke, CancelInvocationMessage_tC2DEA405D8E283E99F2EFFE4904B19F59EB839A5_marshal_pinvoke_back, CancelInvocationMessage_tC2DEA405D8E283E99F2EFFE4904B19F59EB839A5_marshal_pinvoke_cleanup, NULL, NULL, &CancelInvocationMessage_tC2DEA405D8E283E99F2EFFE4904B19F59EB839A5_0_0_0 },
	{ NULL, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_0_0_0 },
	{ NULL, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_back, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_0_0_0 },
	{ NULL, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_back, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_0_0_0 },
	{ NULL, CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke, CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_back, CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_cleanup, NULL, NULL, &CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_0_0_0 },
	{ NULL, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_0_0_0 },
	{ NULL, ClientMessage_t731C7C73FE93742E194805EC21D8C4AE6D2DDB0A_marshal_pinvoke, ClientMessage_t731C7C73FE93742E194805EC21D8C4AE6D2DDB0A_marshal_pinvoke_back, ClientMessage_t731C7C73FE93742E194805EC21D8C4AE6D2DDB0A_marshal_pinvoke_cleanup, NULL, NULL, &ClientMessage_t731C7C73FE93742E194805EC21D8C4AE6D2DDB0A_0_0_0 },
	{ NULL, CloseWithErrorMessage_t99248644734251052FC06ABDBC285C3B246F45BB_marshal_pinvoke, CloseWithErrorMessage_t99248644734251052FC06ABDBC285C3B246F45BB_marshal_pinvoke_back, CloseWithErrorMessage_t99248644734251052FC06ABDBC285C3B246F45BB_marshal_pinvoke_cleanup, NULL, NULL, &CloseWithErrorMessage_t99248644734251052FC06ABDBC285C3B246F45BB_0_0_0 },
	{ NULL, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_back, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_0_0_0 },
	{ NULL, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshal_pinvoke, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshal_pinvoke_back, Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_marshal_pinvoke_cleanup, NULL, NULL, &Color_t677510AC0B9290AFBF973DC2AD88ABBD71691661_0_0_0 },
	{ NULL, ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshal_pinvoke, ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshal_pinvoke_back, ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshal_pinvoke_cleanup, NULL, NULL, &ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_0_0_0 },
	{ NULL, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_back, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_cleanup, NULL, NULL, &ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_0_0_0 },
	{ NULL, ColorTween_tB6EEC666DA063367652ECCB92C46C0C5186F38C5_marshal_pinvoke, ColorTween_tB6EEC666DA063367652ECCB92C46C0C5186F38C5_marshal_pinvoke_back, ColorTween_tB6EEC666DA063367652ECCB92C46C0C5186F38C5_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_tB6EEC666DA063367652ECCB92C46C0C5186F38C5_0_0_0 },
	{ NULL, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_back, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_0_0_0 },
	{ NULL, NULL, NULL, NULL, CreateComCallableWrapperFor_ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E, NULL, &ComIStreamWrapper_t1EC7F239EE4898398E8C187BF24ADECF7B01715E_0_0_0 },
	{ NULL, NULL, NULL, NULL, CreateComCallableWrapperFor_ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636, NULL, &ComStream_t0DC731A9DF8F7B390B781EC9720B6E635F64E636_0_0_0 },
	{ NULL, Completion_tA97B52BD2F31F247CCBD449D19F5407A15567635_marshal_pinvoke, Completion_tA97B52BD2F31F247CCBD449D19F5407A15567635_marshal_pinvoke_back, Completion_tA97B52BD2F31F247CCBD449D19F5407A15567635_marshal_pinvoke_cleanup, NULL, NULL, &Completion_tA97B52BD2F31F247CCBD449D19F5407A15567635_0_0_0 },
	{ NULL, CompletionWithError_t0AA851C74BE16E1E390CAE192E0FB4E082B7CCD1_marshal_pinvoke, CompletionWithError_t0AA851C74BE16E1E390CAE192E0FB4E082B7CCD1_marshal_pinvoke_back, CompletionWithError_t0AA851C74BE16E1E390CAE192E0FB4E082B7CCD1_marshal_pinvoke_cleanup, NULL, NULL, &CompletionWithError_t0AA851C74BE16E1E390CAE192E0FB4E082B7CCD1_0_0_0 },
	{ NULL, CompletionWithResult_tDC8D964C901EADD61C51C57885317DBD7210028C_marshal_pinvoke, CompletionWithResult_tDC8D964C901EADD61C51C57885317DBD7210028C_marshal_pinvoke_back, CompletionWithResult_tDC8D964C901EADD61C51C57885317DBD7210028C_marshal_pinvoke_cleanup, NULL, NULL, &CompletionWithResult_tDC8D964C901EADD61C51C57885317DBD7210028C_0_0_0 },
	{ NULL, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_back, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_cleanup, NULL, NULL, &ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_0_0_0 },
	{ NULL, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_back, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_cleanup, NULL, NULL, &ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_0_0_0 },
	{ NULL, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_back, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_0_0_0 },
	{ NULL, ConnectionEventInfo_tEB8255D38B174BDE6959C615DBFFA3328D281D46_marshal_pinvoke, ConnectionEventInfo_tEB8255D38B174BDE6959C615DBFFA3328D281D46_marshal_pinvoke_back, ConnectionEventInfo_tEB8255D38B174BDE6959C615DBFFA3328D281D46_marshal_pinvoke_cleanup, NULL, NULL, &ConnectionEventInfo_tEB8255D38B174BDE6959C615DBFFA3328D281D46_0_0_0 },
	{ NULL, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_back, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_0_0_0 },
	{ NULL, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_back, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_0_0_0 },
	{ NULL, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_back, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_cleanup, NULL, NULL, &Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_0_0_0 },
	{ NULL, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_back, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_0_0_0 },
	{ NULL, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_back, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_0_0_0 },
	{ NULL, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_back, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_cleanup, NULL, NULL, &CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_0_0_0 },
	{ DelegatePInvokeWrapper_CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3_0_0_0 },
	{ NULL, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_back, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_0_0_0 },
	{ NULL, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_back, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_0_0_0 },
	{ NULL, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_back, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_0_0_0 },
	{ NULL, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_back, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_cleanup, NULL, NULL, &Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_0_0_0 },
	{ NULL, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_back, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_0_0_0 },
	{ NULL, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_back, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_0_0_0 },
	{ NULL, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_back, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_0_0_0 },
	{ NULL, DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_marshal_pinvoke, DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_marshal_pinvoke_back, DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_marshal_pinvoke_cleanup, NULL, NULL, &DataKey_tC6DF14FCD651ACE82D9C872CFC449847B000F73A_0_0_0 },
	{ NULL, DateTimeParser_tBDDA41C4734ACD3EAF17233DBFC7B26E0AAFE246_marshal_pinvoke, DateTimeParser_tBDDA41C4734ACD3EAF17233DBFC7B26E0AAFE246_marshal_pinvoke_back, DateTimeParser_tBDDA41C4734ACD3EAF17233DBFC7B26E0AAFE246_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeParser_tBDDA41C4734ACD3EAF17233DBFC7B26E0AAFE246_0_0_0 },
	{ NULL, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_back, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_0_0_0 },
	{ NULL, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_back, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_0_0_0 },
	{ NULL, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_back, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_cleanup, NULL, NULL, &DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_0_0_0 },
	{ NULL, DecompressedData_tE72195319199AB4AA5C941E9A30E7F78AB6EC8BC_marshal_pinvoke, DecompressedData_tE72195319199AB4AA5C941E9A30E7F78AB6EC8BC_marshal_pinvoke_back, DecompressedData_tE72195319199AB4AA5C941E9A30E7F78AB6EC8BC_marshal_pinvoke_cleanup, NULL, NULL, &DecompressedData_tE72195319199AB4AA5C941E9A30E7F78AB6EC8BC_0_0_0 },
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 },
	{ NULL, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_0_0_0 },
	{ NULL, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup, NULL, NULL, &DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_0_0_0 },
	{ NULL, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup, NULL, NULL, &DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_0_0_0 },
	{ NULL, DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshal_pinvoke, DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshal_pinvoke_back, DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_marshal_pinvoke_cleanup, NULL, NULL, &DmoMediaType_tE9DFD8E4BF8D1D2BAA695278E98FD8B5FC68B587_0_0_0 },
	{ NULL, DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_marshal_pinvoke, DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_marshal_pinvoke_back, DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_marshal_pinvoke_cleanup, NULL, NULL, &DmoOutputDataBuffer_t3B8B487C755842D49675554BE8273EA9F6464EF6_0_0_0 },
	{ NULL, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_0_0_0 },
	{ NULL, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_back, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_0_0_0 },
	{ NULL, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_pinvoke, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_pinvoke_back, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_0_0_0 },
	{ NULL, DragAndDropArgs_t5D3B6A3AB96D87DB0C2840230EEA8C8426EBCA9C_marshal_pinvoke, DragAndDropArgs_t5D3B6A3AB96D87DB0C2840230EEA8C8426EBCA9C_marshal_pinvoke_back, DragAndDropArgs_t5D3B6A3AB96D87DB0C2840230EEA8C8426EBCA9C_marshal_pinvoke_cleanup, NULL, NULL, &DragAndDropArgs_t5D3B6A3AB96D87DB0C2840230EEA8C8426EBCA9C_0_0_0 },
	{ DelegatePInvokeWrapper_EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04, NULL, NULL, NULL, NULL, NULL, &EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04_0_0_0 },
	{ NULL, ElementWriter_t8A2F575C32A5E65A6A4AA13994BCB24D1CB4CC3E_marshal_pinvoke, ElementWriter_t8A2F575C32A5E65A6A4AA13994BCB24D1CB4CC3E_marshal_pinvoke_back, ElementWriter_t8A2F575C32A5E65A6A4AA13994BCB24D1CB4CC3E_marshal_pinvoke_cleanup, NULL, NULL, &ElementWriter_t8A2F575C32A5E65A6A4AA13994BCB24D1CB4CC3E_0_0_0 },
	{ NULL, EmitBuilder_t905BDF810552D478F546279A717ED58657ADCB12_marshal_pinvoke, EmitBuilder_t905BDF810552D478F546279A717ED58657ADCB12_marshal_pinvoke_back, EmitBuilder_t905BDF810552D478F546279A717ED58657ADCB12_marshal_pinvoke_cleanup, NULL, NULL, &EmitBuilder_t905BDF810552D478F546279A717ED58657ADCB12_0_0_0 },
	{ NULL, EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_pinvoke, EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_pinvoke_back, EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_marshal_pinvoke_cleanup, NULL, NULL, &EncoderParameter_t90303190BA580BED88B61AE1EE166CE4C2C58947_0_0_0 },
	{ NULL, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_back, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0 },
	{ NULL, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke_back, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke_cleanup, NULL, NULL, &EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_0_0_0 },
	{ NULL, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_back, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_0_0_0 },
	{ NULL, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup, NULL, NULL, &Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_0_0_0 },
	{ NULL, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_back, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_cleanup, NULL, NULL, &EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_0_0_0 },
	{ NULL, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup, NULL, NULL, &EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_0_0_0 },
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 },
	{ NULL, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_back, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_0_0_0 },
	{ NULL, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_back, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_0_0_0 },
	{ NULL, ExtensionResult_tC0AB04939620F11E8C264D7079BA0C149048F884_marshal_pinvoke, ExtensionResult_tC0AB04939620F11E8C264D7079BA0C149048F884_marshal_pinvoke_back, ExtensionResult_tC0AB04939620F11E8C264D7079BA0C149048F884_marshal_pinvoke_cleanup, NULL, NULL, &ExtensionResult_tC0AB04939620F11E8C264D7079BA0C149048F884_0_0_0 },
	{ NULL, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_back, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_cleanup, NULL, NULL, &FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0 },
	{ NULL, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_back, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_0_0_0 },
	{ NULL, FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshal_pinvoke, FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshal_pinvoke_back, FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshal_pinvoke_cleanup, NULL, NULL, &FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_0_0_0 },
	{ NULL, FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke, FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke_back, FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke_cleanup, NULL, NULL, &FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_0_0_0 },
	{ NULL, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke_back, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke_cleanup, NULL, NULL, &FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_0_0_0 },
	{ NULL, FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshal_pinvoke, FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshal_pinvoke_back, FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshal_pinvoke_cleanup, NULL, NULL, &FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_0_0_0 },
	{ NULL, FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshal_pinvoke, FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshal_pinvoke_back, FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_0_0_0 },
	{ NULL, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_back, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_0_0_0 },
	{ NULL, FloatTween_t4C8556CF15FBE087E984078052F7BB96F9DD2D10_marshal_pinvoke, FloatTween_t4C8556CF15FBE087E984078052F7BB96F9DD2D10_marshal_pinvoke_back, FloatTween_t4C8556CF15FBE087E984078052F7BB96F9DD2D10_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t4C8556CF15FBE087E984078052F7BB96F9DD2D10_0_0_0 },
	{ NULL, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_back, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_0_0_0 },
	{ NULL, FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshal_pinvoke, FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshal_pinvoke_back, FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_0_0_0 },
	{ NULL, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_back, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_cleanup, NULL, NULL, &FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_0_0_0 },
	{ NULL, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_back, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_cleanup, NULL, NULL, &FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_0_0_0 },
	{ NULL, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_back, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_cleanup, NULL, NULL, &FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_0_0_0 },
	{ NULL, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_back, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_cleanup, NULL, NULL, &ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_0_0_0 },
	{ NULL, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0 },
	{ NULL, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0 },
	{ NULL, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0 },
	{ NULL, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_back, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_cleanup, NULL, NULL, &Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0 },
	{ NULL, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_back, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_0_0_0 },
	{ NULL, Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_pinvoke, Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_pinvoke_back, Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_marshal_pinvoke_cleanup, NULL, NULL, &Gsm610WaveFormat_t9C8B0FD8132A7A299B816C28DF61BC90B48507AB_0_0_0 },
	{ NULL, HTTP2AltSVCFrame_tA4B46A9E7D0E2929EA410F333547F734296EA8E3_marshal_pinvoke, HTTP2AltSVCFrame_tA4B46A9E7D0E2929EA410F333547F734296EA8E3_marshal_pinvoke_back, HTTP2AltSVCFrame_tA4B46A9E7D0E2929EA410F333547F734296EA8E3_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2AltSVCFrame_tA4B46A9E7D0E2929EA410F333547F734296EA8E3_0_0_0 },
	{ NULL, HTTP2ContinuationFrame_t6A550FA2A54AECC03D49952CB587182860888B72_marshal_pinvoke, HTTP2ContinuationFrame_t6A550FA2A54AECC03D49952CB587182860888B72_marshal_pinvoke_back, HTTP2ContinuationFrame_t6A550FA2A54AECC03D49952CB587182860888B72_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2ContinuationFrame_t6A550FA2A54AECC03D49952CB587182860888B72_0_0_0 },
	{ NULL, HTTP2DataFrame_t2C4634C38CD8831E7419113917961836AEC0A818_marshal_pinvoke, HTTP2DataFrame_t2C4634C38CD8831E7419113917961836AEC0A818_marshal_pinvoke_back, HTTP2DataFrame_t2C4634C38CD8831E7419113917961836AEC0A818_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2DataFrame_t2C4634C38CD8831E7419113917961836AEC0A818_0_0_0 },
	{ NULL, HTTP2FrameHeaderAndPayload_t75098A3B911FBD96BD5C635686E1C4575C68C155_marshal_pinvoke, HTTP2FrameHeaderAndPayload_t75098A3B911FBD96BD5C635686E1C4575C68C155_marshal_pinvoke_back, HTTP2FrameHeaderAndPayload_t75098A3B911FBD96BD5C635686E1C4575C68C155_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2FrameHeaderAndPayload_t75098A3B911FBD96BD5C635686E1C4575C68C155_0_0_0 },
	{ NULL, HTTP2GoAwayFrame_t7ADE3A0339E99C0A9FD111B20D1F28DE921606AC_marshal_pinvoke, HTTP2GoAwayFrame_t7ADE3A0339E99C0A9FD111B20D1F28DE921606AC_marshal_pinvoke_back, HTTP2GoAwayFrame_t7ADE3A0339E99C0A9FD111B20D1F28DE921606AC_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2GoAwayFrame_t7ADE3A0339E99C0A9FD111B20D1F28DE921606AC_0_0_0 },
	{ NULL, HTTP2HeadersFrame_t27E4A8CA76BAB5CDBA4F8236707097CF8862211A_marshal_pinvoke, HTTP2HeadersFrame_t27E4A8CA76BAB5CDBA4F8236707097CF8862211A_marshal_pinvoke_back, HTTP2HeadersFrame_t27E4A8CA76BAB5CDBA4F8236707097CF8862211A_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2HeadersFrame_t27E4A8CA76BAB5CDBA4F8236707097CF8862211A_0_0_0 },
	{ NULL, HTTP2PingFrame_t3BB3EA4010325DA4324CDBCC4A8E3334F2818BCD_marshal_pinvoke, HTTP2PingFrame_t3BB3EA4010325DA4324CDBCC4A8E3334F2818BCD_marshal_pinvoke_back, HTTP2PingFrame_t3BB3EA4010325DA4324CDBCC4A8E3334F2818BCD_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2PingFrame_t3BB3EA4010325DA4324CDBCC4A8E3334F2818BCD_0_0_0 },
	{ NULL, HTTP2PriorityFrame_tFABAA35FE8C7A9DA1243470A6070C1274E3739BC_marshal_pinvoke, HTTP2PriorityFrame_tFABAA35FE8C7A9DA1243470A6070C1274E3739BC_marshal_pinvoke_back, HTTP2PriorityFrame_tFABAA35FE8C7A9DA1243470A6070C1274E3739BC_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2PriorityFrame_tFABAA35FE8C7A9DA1243470A6070C1274E3739BC_0_0_0 },
	{ NULL, HTTP2PushPromiseFrame_tD67C169B05C0F76DF1C35892D99B5A76FC3657FD_marshal_pinvoke, HTTP2PushPromiseFrame_tD67C169B05C0F76DF1C35892D99B5A76FC3657FD_marshal_pinvoke_back, HTTP2PushPromiseFrame_tD67C169B05C0F76DF1C35892D99B5A76FC3657FD_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2PushPromiseFrame_tD67C169B05C0F76DF1C35892D99B5A76FC3657FD_0_0_0 },
	{ NULL, HTTP2RSTStreamFrame_tB8A2AB97A6EE28D585EF9816C62C8128E86F1A58_marshal_pinvoke, HTTP2RSTStreamFrame_tB8A2AB97A6EE28D585EF9816C62C8128E86F1A58_marshal_pinvoke_back, HTTP2RSTStreamFrame_tB8A2AB97A6EE28D585EF9816C62C8128E86F1A58_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2RSTStreamFrame_tB8A2AB97A6EE28D585EF9816C62C8128E86F1A58_0_0_0 },
	{ NULL, HTTP2SettingsFrame_t336E2E334513AA62F5859E96F5725EBEB52D2381_marshal_pinvoke, HTTP2SettingsFrame_t336E2E334513AA62F5859E96F5725EBEB52D2381_marshal_pinvoke_back, HTTP2SettingsFrame_t336E2E334513AA62F5859E96F5725EBEB52D2381_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2SettingsFrame_t336E2E334513AA62F5859E96F5725EBEB52D2381_0_0_0 },
	{ NULL, HTTP2WindowUpdateFrame_t429C1E3EC76C172B4013D09BE1D177CCE83316A5_marshal_pinvoke, HTTP2WindowUpdateFrame_t429C1E3EC76C172B4013D09BE1D177CCE83316A5_marshal_pinvoke_back, HTTP2WindowUpdateFrame_t429C1E3EC76C172B4013D09BE1D177CCE83316A5_marshal_pinvoke_cleanup, NULL, NULL, &HTTP2WindowUpdateFrame_t429C1E3EC76C172B4013D09BE1D177CCE83316A5_0_0_0 },
	{ NULL, HandleDragAndDropArgs_t14222F5271A86F1FE692EDBFD99ABA3FF1430F9D_marshal_pinvoke, HandleDragAndDropArgs_t14222F5271A86F1FE692EDBFD99ABA3FF1430F9D_marshal_pinvoke_back, HandleDragAndDropArgs_t14222F5271A86F1FE692EDBFD99ABA3FF1430F9D_marshal_pinvoke_cleanup, NULL, NULL, &HandleDragAndDropArgs_t14222F5271A86F1FE692EDBFD99ABA3FF1430F9D_0_0_0 },
	{ NULL, HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke, HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_back, HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_cleanup, NULL, NULL, &HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_0_0_0 },
	{ DelegatePInvokeWrapper_HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67, NULL, NULL, NULL, NULL, NULL, &HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67_0_0_0 },
	{ NULL, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_back, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_cleanup, NULL, NULL, &HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_0_0_0 },
	{ NULL, HostConnectionKey_tD0152F99605DAA00B6F118ED5B6E21393F8548B5_marshal_pinvoke, HostConnectionKey_tD0152F99605DAA00B6F118ED5B6E21393F8548B5_marshal_pinvoke_back, HostConnectionKey_tD0152F99605DAA00B6F118ED5B6E21393F8548B5_marshal_pinvoke_cleanup, NULL, NULL, &HostConnectionKey_tD0152F99605DAA00B6F118ED5B6E21393F8548B5_0_0_0 },
	{ NULL, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IAudioClient_t1384A4582F24FB6726D65F4B8D113834103B614F::IID, &IAudioClient_t1384A4582F24FB6726D65F4B8D113834103B614F_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IAudioRenderClient_t3208BFD9A483D8F9A1A2256D5745BCD7DFD55350::IID, &IAudioRenderClient_t3208BFD9A483D8F9A1A2256D5745BCD7DFD55350_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFActivate_t94D8357A879D3ACAC5C322B1F05D4AC63A5EB5A7::IID, &IMFActivate_t94D8357A879D3ACAC5C322B1F05D4AC63A5EB5A7_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1::IID, &IMFAttributes_t76DD783909E34D5F0304FFF49DA463643349AFD1_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFByteStream_tEE5E9EF3FCF36A94489A937E141E1DADBD141269::IID, &IMFByteStream_tEE5E9EF3FCF36A94489A937E141E1DADBD141269_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFCollection_t76869D1E25A90CBD800B52A998C02D99786F2C18::IID, &IMFCollection_t76869D1E25A90CBD800B52A998C02D99786F2C18_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724::IID, &IMFMediaBuffer_tDC6A0E5076707E2F8D6C0109C7E7B7578F5F1724_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFMediaEvent_tEFE6188C434FA7B01103156FFC32275E29F2ADD7::IID, &IMFMediaEvent_tEFE6188C434FA7B01103156FFC32275E29F2ADD7_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC::IID, &IMFMediaType_t2AA4C07CBFF051CE156AA602224661883C12BDFC_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFReadWriteClassFactory_t2188A2AFE4914E253D6F7B8A5B8EA6757F36C93A::IID, &IMFReadWriteClassFactory_t2188A2AFE4914E253D6F7B8A5B8EA6757F36C93A_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFSample_t98025FCA3C4558D068B5C5A4419116A40C8CC48D::IID, &IMFSample_t98025FCA3C4558D068B5C5A4419116A40C8CC48D_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFSinkWriter_t612D4866594867B7A4EF00C3C2CD858130B928F0::IID, &IMFSinkWriter_t612D4866594867B7A4EF00C3C2CD858130B928F0_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFSourceReader_t4620D92DE02E7E43A344CD4F4948EB27B3149085::IID, &IMFSourceReader_t4620D92DE02E7E43A344CD4F4948EB27B3149085_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMFTransform_t5CA42C4409B0962D27EADF854065F1F69DDDFB1E::IID, &IMFTransform_t5CA42C4409B0962D27EADF854065F1F69DDDFB1E_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65::IID, &IMediaBuffer_t3093B80BC7D715417DE590749B11A261F01C1E65_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMediaObject_tEF793988BAC48C921BDDA98FB2EC5480CED50971::IID, &IMediaObject_tEF793988BAC48C921BDDA98FB2EC5480CED50971_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IMediaParamInfo_t90A5142555AD5180D7F0D0BA68D3E92AA58C09EF::IID, &IMediaParamInfo_t90A5142555AD5180D7F0D0BA68D3E92AA58C09EF_0_0_0 },
	{ NULL, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_back, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_0_0_0 },
	{ NULL, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_back, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_0_0_0 },
	{ NULL, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_back, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_cleanup, NULL, NULL, &IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_0_0_0 },
	{ NULL, ImaAdpcmWaveFormat_t6317D1D0F73891B51FBC3EB83011694743C79504_marshal_pinvoke, ImaAdpcmWaveFormat_t6317D1D0F73891B51FBC3EB83011694743C79504_marshal_pinvoke_back, ImaAdpcmWaveFormat_t6317D1D0F73891B51FBC3EB83011694743C79504_marshal_pinvoke_cleanup, NULL, NULL, &ImaAdpcmWaveFormat_t6317D1D0F73891B51FBC3EB83011694743C79504_0_0_0 },
	{ NULL, ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_pinvoke, ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_pinvoke_back, ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_marshal_pinvoke_cleanup, NULL, NULL, &ImageCodecInfoPrivate_tC52EA10FB90529A8B2A77ECF0FD1F1364599D483_0_0_0 },
	{ NULL, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_back, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_cleanup, NULL, NULL, &ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_0_0_0 },
	{ NULL, IncomingPacket_t41BD0DFA0528D46782F44FA18AEF7E8C50B7B840_marshal_pinvoke, IncomingPacket_t41BD0DFA0528D46782F44FA18AEF7E8C50B7B840_marshal_pinvoke_back, IncomingPacket_t41BD0DFA0528D46782F44FA18AEF7E8C50B7B840_marshal_pinvoke_cleanup, NULL, NULL, &IncomingPacket_t41BD0DFA0528D46782F44FA18AEF7E8C50B7B840_0_0_0 },
	{ NULL, IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshal_pinvoke, IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshal_pinvoke_back, IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_marshal_pinvoke_cleanup, NULL, NULL, &IndexField_t6285D0782FB7D55EC60F7DFB20AF7D3E7D37B795_0_0_0 },
	{ NULL, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_back, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_cleanup, NULL, NULL, &InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_0_0_0 },
	{ NULL, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_back, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_0_0_0 },
	{ NULL, InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke, InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_back, InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_cleanup, NULL, NULL, &InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_0_0_0 },
	{ NULL, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_back, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_0_0_0 },
	{ NULL, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_back, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_0_0_0 },
	{ NULL, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_back, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_cleanup, NULL, NULL, &InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_0_0_0 },
	{ NULL, InvocationDefinition_t2719209C7DF20D97C7BAD38EEDEDA249737EBFBF_marshal_pinvoke, InvocationDefinition_t2719209C7DF20D97C7BAD38EEDEDA249737EBFBF_marshal_pinvoke_back, InvocationDefinition_t2719209C7DF20D97C7BAD38EEDEDA249737EBFBF_marshal_pinvoke_cleanup, NULL, NULL, &InvocationDefinition_t2719209C7DF20D97C7BAD38EEDEDA249737EBFBF_0_0_0 },
	{ NULL, InvocationMessage_t185773F6188A50BFB71D8E23CFA1FF03FDD08FA7_marshal_pinvoke, InvocationMessage_t185773F6188A50BFB71D8E23CFA1FF03FDD08FA7_marshal_pinvoke_back, InvocationMessage_t185773F6188A50BFB71D8E23CFA1FF03FDD08FA7_marshal_pinvoke_cleanup, NULL, NULL, &InvocationMessage_t185773F6188A50BFB71D8E23CFA1FF03FDD08FA7_0_0_0 },
	{ NULL, JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_marshal_pinvoke, JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_marshal_pinvoke_back, JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_marshal_pinvoke_cleanup, NULL, NULL, &JNINativeMethod_t92A9F760CD913D55613C0CD5A8CB4CB3F4722F59_0_0_0 },
	{ NULL, JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshal_pinvoke, JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshal_pinvoke_back, JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshal_pinvoke_cleanup, NULL, NULL, &JsonPosition_t7788656A280615072710710E8C15D23285850E8E_0_0_0 },
	{ NULL, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshal_pinvoke, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshal_pinvoke_back, LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_marshal_pinvoke_cleanup, NULL, NULL, &LigatureSubstitutionRecord_t8660DC6B1D65C655D698216F72BFB3C85DDCAB94_0_0_0 },
	{ NULL, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_back, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_cleanup, NULL, NULL, &LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_0_0_0 },
	{ NULL, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_back, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_cleanup, NULL, NULL, &LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_0_0_0 },
	{ NULL, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_back, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_cleanup, NULL, NULL, &LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_0_0_0 },
	{ NULL, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_back, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_0_0_0 },
	{ NULL, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_back, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_cleanup, NULL, NULL, &LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_0_0_0 },
	{ NULL, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_back, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_0_0_0 },
	{ NULL, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_back, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_cleanup, NULL, NULL, &LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_0_0_0 },
	{ NULL, LogJob_tBB5AE886C0C727005B0DED619A1A9ACD81A7F231_marshal_pinvoke, LogJob_tBB5AE886C0C727005B0DED619A1A9ACD81A7F231_marshal_pinvoke_back, LogJob_tBB5AE886C0C727005B0DED619A1A9ACD81A7F231_marshal_pinvoke_cleanup, NULL, NULL, &LogJob_tBB5AE886C0C727005B0DED619A1A9ACD81A7F231_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &MFReadWriteClassFactory_t9FEF2D130205A307AFED6185EC2055DC2EB7F0E7::CLSID, &MFReadWriteClassFactory_t9FEF2D130205A307AFED6185EC2055DC2EB7F0E7_0_0_0 },
	{ NULL, MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_marshal_pinvoke, MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_marshal_pinvoke_back, MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_marshal_pinvoke_cleanup, NULL, NULL, &MFT_OUTPUT_DATA_BUFFER_t5F85328B9645339BD400BFE4544366D28F695D69_0_0_0 },
	{ NULL, MFT_REGISTER_TYPE_INFO_tA6537F9FAD8E7C32FAEBDCE9CAD40BE255701E30_marshal_pinvoke, MFT_REGISTER_TYPE_INFO_tA6537F9FAD8E7C32FAEBDCE9CAD40BE255701E30_marshal_pinvoke_back, MFT_REGISTER_TYPE_INFO_tA6537F9FAD8E7C32FAEBDCE9CAD40BE255701E30_marshal_pinvoke_cleanup, NULL, NULL, &MFT_REGISTER_TYPE_INFO_tA6537F9FAD8E7C32FAEBDCE9CAD40BE255701E30_0_0_0 },
	{ NULL, MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_marshal_pinvoke, MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_marshal_pinvoke_back, MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_marshal_pinvoke_cleanup, NULL, NULL, &MF_SINK_WRITER_STATISTICS_t7886F1EF066AD4B61E7A1F339F1E57E76D481C54_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &MMDeviceEnumeratorComObject_tD4348BCE0AF39CF1BA437F43F8C04CF9A74DD311::CLSID, &MMDeviceEnumeratorComObject_tD4348BCE0AF39CF1BA437F43F8C04CF9A74DD311_0_0_0 },
	{ NULL, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_back, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_0_0_0 },
	{ NULL, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_back, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_cleanup, NULL, NULL, &MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_0_0_0 },
	{ NULL, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_back, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_cleanup, NULL, NULL, &MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_0_0_0 },
	{ NULL, MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshal_pinvoke, MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshal_pinvoke_back, MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_0_0_0 },
	{ NULL, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_back, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_0_0_0 },
	{ NULL, NULL, NULL, NULL, CreateComCallableWrapperFor_MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11, NULL, &MediaBuffer_t0C094DCD67D2C7E8398561E0B905D21015A2FE11_0_0_0 },
	{ NULL, MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_marshal_pinvoke, MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_marshal_pinvoke_back, MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_marshal_pinvoke_cleanup, NULL, NULL, &MediaParamInfo_tB9382D7CE65F59A464804DE5A17C0AE74D281E5D_0_0_0 },
	{ NULL, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_back, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_cleanup, NULL, NULL, &MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_0_0_0 },
	{ NULL, MemoryNode_tC053ECC9FF410528E4243CC29B73110214F1688D_marshal_pinvoke, MemoryNode_tC053ECC9FF410528E4243CC29B73110214F1688D_marshal_pinvoke_back, MemoryNode_tC053ECC9FF410528E4243CC29B73110214F1688D_marshal_pinvoke_cleanup, NULL, NULL, &MemoryNode_tC053ECC9FF410528E4243CC29B73110214F1688D_0_0_0 },
	{ NULL, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_back, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_cleanup, NULL, NULL, &MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_0_0_0 },
	{ NULL, Message_t42162F2256D657929471F3678C970E726A9873D4_marshal_pinvoke, Message_t42162F2256D657929471F3678C970E726A9873D4_marshal_pinvoke_back, Message_t42162F2256D657929471F3678C970E726A9873D4_marshal_pinvoke_cleanup, NULL, NULL, &Message_t42162F2256D657929471F3678C970E726A9873D4_0_0_0 },
	{ NULL, MidiInCapabilities_t9FAB7C5E35F542A95600201440823C0495BFFD84_marshal_pinvoke, MidiInCapabilities_t9FAB7C5E35F542A95600201440823C0495BFFD84_marshal_pinvoke_back, MidiInCapabilities_t9FAB7C5E35F542A95600201440823C0495BFFD84_marshal_pinvoke_cleanup, NULL, NULL, &MidiInCapabilities_t9FAB7C5E35F542A95600201440823C0495BFFD84_0_0_0 },
	{ NULL, MidiOutCapabilities_t16C852E9BA6F46F339EF7D531ED49CDB6ADC4E86_marshal_pinvoke, MidiOutCapabilities_t16C852E9BA6F46F339EF7D531ED49CDB6ADC4E86_marshal_pinvoke_back, MidiOutCapabilities_t16C852E9BA6F46F339EF7D531ED49CDB6ADC4E86_marshal_pinvoke_cleanup, NULL, NULL, &MidiOutCapabilities_t16C852E9BA6F46F339EF7D531ED49CDB6ADC4E86_0_0_0 },
	{ NULL, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_back, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_cleanup, NULL, NULL, &Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_0_0_0 },
	{ NULL, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_back, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_0_0_0 },
	{ NULL, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_back, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_0_0_0 },
	{ NULL, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_back, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_0_0_0 },
	{ NULL, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_back, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_0_0_0 },
	{ NULL, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_back, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_0_0_0 },
	{ NULL, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_back, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_0_0_0 },
	{ NULL, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup, NULL, NULL, &MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_0_0_0 },
	{ NULL, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_pinvoke, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_pinvoke_back, Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_marshal_pinvoke_cleanup, NULL, NULL, &Mp3WaveFormat_t23AEA1FFD645EF805BC8793E15D6A01E9E74E154_0_0_0 },
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 },
	{ DelegatePInvokeWrapper_MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60, NULL, NULL, NULL, NULL, NULL, &MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60_0_0_0 },
	{ NULL, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshal_pinvoke, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshal_pinvoke_back, MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_marshal_pinvoke_cleanup, NULL, NULL, &MultipleSubstitutionRecord_t668A640AFADBD46E3D4EC3A8417D0A02764DF87B_0_0_0 },
	{ NULL, NamespaceCache_tA4C61EA86BE904343F818AF0B22EC00A2A272B5E_marshal_pinvoke, NamespaceCache_tA4C61EA86BE904343F818AF0B22EC00A2A272B5E_marshal_pinvoke_back, NamespaceCache_tA4C61EA86BE904343F818AF0B22EC00A2A272B5E_marshal_pinvoke_cleanup, NULL, NULL, &NamespaceCache_tA4C61EA86BE904343F818AF0B22EC00A2A272B5E_0_0_0 },
	{ NULL, NamespaceResolver_tD689E47F9BD1966D743E2401E5C7D387FC5A4E46_marshal_pinvoke, NamespaceResolver_tD689E47F9BD1966D743E2401E5C7D387FC5A4E46_marshal_pinvoke_back, NamespaceResolver_tD689E47F9BD1966D743E2401E5C7D387FC5A4E46_marshal_pinvoke_cleanup, NULL, NULL, &NamespaceResolver_tD689E47F9BD1966D743E2401E5C7D387FC5A4E46_0_0_0 },
	{ NULL, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_back, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_0_0_0 },
	{ NULL, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup, NULL, NULL, &Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0 },
	{ NULL, ObjectMetadata_t714BF6F2F36AFC880BE00DF5CBEEC924FD828D0B_marshal_pinvoke, ObjectMetadata_t714BF6F2F36AFC880BE00DF5CBEEC924FD828D0B_marshal_pinvoke_back, ObjectMetadata_t714BF6F2F36AFC880BE00DF5CBEEC924FD828D0B_marshal_pinvoke_cleanup, NULL, NULL, &ObjectMetadata_t714BF6F2F36AFC880BE00DF5CBEEC924FD828D0B_0_0_0 },
	{ NULL, ObjectMetadata_t68141D2AC9CC28F90775553FC42FB956190289B3_marshal_pinvoke, ObjectMetadata_t68141D2AC9CC28F90775553FC42FB956190289B3_marshal_pinvoke_back, ObjectMetadata_t68141D2AC9CC28F90775553FC42FB956190289B3_marshal_pinvoke_cleanup, NULL, NULL, &ObjectMetadata_t68141D2AC9CC28F90775553FC42FB956190289B3_0_0_0 },
	{ NULL, OggWaveFormat_tF2B20E4788E13E692B5FDB1E87F85C96ECC86193_marshal_pinvoke, OggWaveFormat_tF2B20E4788E13E692B5FDB1E87F85C96ECC86193_marshal_pinvoke_back, OggWaveFormat_tF2B20E4788E13E692B5FDB1E87F85C96ECC86193_marshal_pinvoke_cleanup, NULL, NULL, &OggWaveFormat_tF2B20E4788E13E692B5FDB1E87F85C96ECC86193_0_0_0 },
	{ NULL, OutgoingPacket_t6E6464FDFEE9FD7DD12ECF82250CC4BC654B4FA0_marshal_pinvoke, OutgoingPacket_t6E6464FDFEE9FD7DD12ECF82250CC4BC654B4FA0_marshal_pinvoke_back, OutgoingPacket_t6E6464FDFEE9FD7DD12ECF82250CC4BC654B4FA0_marshal_pinvoke_cleanup, NULL, NULL, &OutgoingPacket_t6E6464FDFEE9FD7DD12ECF82250CC4BC654B4FA0_0_0_0 },
	{ NULL, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_back, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_cleanup, NULL, NULL, &PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_0_0_0 },
	{ NULL, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_back, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0 },
	{ NULL, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_back, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_0_0_0 },
	{ NULL, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_back, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_0_0_0 },
	{ NULL, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_back, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_cleanup, NULL, NULL, &ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_0_0_0 },
	{ NULL, PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshal_pinvoke, PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshal_pinvoke_back, PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshal_pinvoke_cleanup, NULL, NULL, &PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_0_0_0 },
	{ NULL, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_0_0_0 },
	{ NULL, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0 },
	{ NULL, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_0_0_0 },
	{ NULL, PluginEventInfo_tBA086F2D7EC8746900F536D1EF352F7898A8A5E9_marshal_pinvoke, PluginEventInfo_tBA086F2D7EC8746900F536D1EF352F7898A8A5E9_marshal_pinvoke_back, PluginEventInfo_tBA086F2D7EC8746900F536D1EF352F7898A8A5E9_marshal_pinvoke_cleanup, NULL, NULL, &PluginEventInfo_tBA086F2D7EC8746900F536D1EF352F7898A8A5E9_0_0_0 },
	{ NULL, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup, NULL, NULL, &PointLight_tD01A1428DC1015D98A527136034187F732433EA7_0_0_0 },
	{ NULL, Pointer_t6436AAA1EFA69FBA61BBEAA7CED4880054F1D316_marshal_pinvoke, Pointer_t6436AAA1EFA69FBA61BBEAA7CED4880054F1D316_marshal_pinvoke_back, Pointer_t6436AAA1EFA69FBA61BBEAA7CED4880054F1D316_marshal_pinvoke_cleanup, NULL, NULL, &Pointer_t6436AAA1EFA69FBA61BBEAA7CED4880054F1D316_0_0_0 },
	{ NULL, PooledBuffer_tEE191A4805CD8C67EC45FC477256D6294097D02A_marshal_pinvoke, PooledBuffer_tEE191A4805CD8C67EC45FC477256D6294097D02A_marshal_pinvoke_back, PooledBuffer_tEE191A4805CD8C67EC45FC477256D6294097D02A_marshal_pinvoke_cleanup, NULL, NULL, &PooledBuffer_tEE191A4805CD8C67EC45FC477256D6294097D02A_0_0_0 },
	{ NULL, Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke, Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke_back, Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke_cleanup, NULL, NULL, &Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_0_0_0 },
	{ NULL, PpmState_tE4C6215B7FD917C7DEA961D8A017F179DBD2EA0A_marshal_pinvoke, PpmState_tE4C6215B7FD917C7DEA961D8A017F179DBD2EA0A_marshal_pinvoke_back, PpmState_tE4C6215B7FD917C7DEA961D8A017F179DBD2EA0A_marshal_pinvoke_cleanup, NULL, NULL, &PpmState_tE4C6215B7FD917C7DEA961D8A017F179DBD2EA0A_0_0_0 },
	{ NULL, PropVariant_tB7833D471B5F54260EB40A04B89F24D01CA2C3B4_marshal_pinvoke, PropVariant_tB7833D471B5F54260EB40A04B89F24D01CA2C3B4_marshal_pinvoke_back, PropVariant_tB7833D471B5F54260EB40A04B89F24D01CA2C3B4_marshal_pinvoke_cleanup, NULL, NULL, &PropVariant_tB7833D471B5F54260EB40A04B89F24D01CA2C3B4_0_0_0 },
	{ NULL, PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshal_pinvoke, PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshal_pinvoke_back, PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshal_pinvoke_cleanup, NULL, NULL, &PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_0_0_0 },
	{ NULL, PropertyMetadata_t15139A4CB43C1A35CFBFC63E543FD50C3A11D39F_marshal_pinvoke, PropertyMetadata_t15139A4CB43C1A35CFBFC63E543FD50C3A11D39F_marshal_pinvoke_back, PropertyMetadata_t15139A4CB43C1A35CFBFC63E543FD50C3A11D39F_marshal_pinvoke_cleanup, NULL, NULL, &PropertyMetadata_t15139A4CB43C1A35CFBFC63E543FD50C3A11D39F_0_0_0 },
	{ NULL, PropertyMetadata_tF046A6EDD989883549EF37EC9FD63C626F18D7DF_marshal_pinvoke, PropertyMetadata_tF046A6EDD989883549EF37EC9FD63C626F18D7DF_marshal_pinvoke_back, PropertyMetadata_tF046A6EDD989883549EF37EC9FD63C626F18D7DF_marshal_pinvoke_cleanup, NULL, NULL, &PropertyMetadata_tF046A6EDD989883549EF37EC9FD63C626F18D7DF_0_0_0 },
	{ NULL, ProtocolEventInfo_tB00EEA919E72664AEC13E03AD5CB419FF47F4D04_marshal_pinvoke, ProtocolEventInfo_tB00EEA919E72664AEC13E03AD5CB419FF47F4D04_marshal_pinvoke_back, ProtocolEventInfo_tB00EEA919E72664AEC13E03AD5CB419FF47F4D04_marshal_pinvoke_cleanup, NULL, NULL, &ProtocolEventInfo_tB00EEA919E72664AEC13E03AD5CB419FF47F4D04_0_0_0 },
	{ NULL, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_back, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_0_0_0 },
	{ NULL, Range_t9EC5E2092369BE26B499D5A6583CFAA391DDBACB_marshal_pinvoke, Range_t9EC5E2092369BE26B499D5A6583CFAA391DDBACB_marshal_pinvoke_back, Range_t9EC5E2092369BE26B499D5A6583CFAA391DDBACB_marshal_pinvoke_cleanup, NULL, NULL, &Range_t9EC5E2092369BE26B499D5A6583CFAA391DDBACB_0_0_0 },
	{ NULL, RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshal_pinvoke, RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshal_pinvoke_back, RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_marshal_pinvoke_cleanup, NULL, NULL, &RangePositionInfo_t27BA7EB1EC12061DD5ACFD24BD71A915D412223F_0_0_0 },
	{ NULL, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_back, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_cleanup, NULL, NULL, &RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_0_0_0 },
	{ NULL, RawFrameData_tD0F5E7EB9E7836E6EAD36E9337BCB6B180437538_marshal_pinvoke, RawFrameData_tD0F5E7EB9E7836E6EAD36E9337BCB6B180437538_marshal_pinvoke_back, RawFrameData_tD0F5E7EB9E7836E6EAD36E9337BCB6B180437538_marshal_pinvoke_cleanup, NULL, NULL, &RawFrameData_tD0F5E7EB9E7836E6EAD36E9337BCB6B180437538_0_0_0 },
	{ NULL, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_back, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_0_0_0 },
	{ NULL, ReadLock_t0098D76A71D75851040273CC7B4270408F40ED38_marshal_pinvoke, ReadLock_t0098D76A71D75851040273CC7B4270408F40ED38_marshal_pinvoke_back, ReadLock_t0098D76A71D75851040273CC7B4270408F40ED38_marshal_pinvoke_cleanup, NULL, NULL, &ReadLock_t0098D76A71D75851040273CC7B4270408F40ED38_0_0_0 },
	{ NULL, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_back, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_0_0_0 },
	{ NULL, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0 },
	{ NULL, RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshal_pinvoke, RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshal_pinvoke_back, RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshal_pinvoke_cleanup, NULL, NULL, &RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_0_0_0 },
	{ NULL, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup, NULL, NULL, &RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_0_0_0 },
	{ NULL, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_back, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_cleanup, NULL, NULL, &RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_0_0_0 },
	{ NULL, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_back, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_cleanup, NULL, NULL, &RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_0_0_0 },
	{ NULL, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_back, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_cleanup, NULL, NULL, &RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_0_0_0 },
	{ NULL, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_back, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_0_0_0 },
	{ NULL, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_back, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_cleanup, NULL, NULL, &RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_0_0_0 },
	{ NULL, RequestEventInfo_t7E84F90C4FDD1DEDD8695351C8C870BD2B7A5C3D_marshal_pinvoke, RequestEventInfo_t7E84F90C4FDD1DEDD8695351C8C870BD2B7A5C3D_marshal_pinvoke_back, RequestEventInfo_t7E84F90C4FDD1DEDD8695351C8C870BD2B7A5C3D_marshal_pinvoke_cleanup, NULL, NULL, &RequestEventInfo_t7E84F90C4FDD1DEDD8695351C8C870BD2B7A5C3D_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &ResamplerMediaComObject_t25182DDB5BB0ED8A6B4C48EB09DD28C6905C22E0::CLSID, &ResamplerMediaComObject_t25182DDB5BB0ED8A6B4C48EB09DD28C6905C22E0_0_0_0 },
	{ NULL, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_back, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_0_0_0 },
	{ NULL, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_back, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_0_0_0 },
	{ NULL, RetryContext_tF74A3153457C4591A40B1211C15B7E6977AFFB14_marshal_pinvoke, RetryContext_tF74A3153457C4591A40B1211C15B7E6977AFFB14_marshal_pinvoke_back, RetryContext_tF74A3153457C4591A40B1211C15B7E6977AFFB14_marshal_pinvoke_cleanup, NULL, NULL, &RetryContext_tF74A3153457C4591A40B1211C15B7E6977AFFB14_0_0_0 },
	{ NULL, RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_pinvoke, RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_pinvoke_back, RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_marshal_pinvoke_cleanup, NULL, NULL, &RewindableAllocator_tB18F8ADC8F2EE36E1F51FCCCFF0AC093108EF254_0_0_0 },
	{ NULL, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_back, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_cleanup, NULL, NULL, &Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_0_0_0 },
	{ NULL, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_back, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_cleanup, NULL, NULL, &RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_0_0_0 },
	{ NULL, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_back, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_cleanup, NULL, NULL, &RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_0_0_0 },
	{ NULL, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_back, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_cleanup, NULL, NULL, &RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_0_0_0 },
	{ NULL, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_back, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_cleanup, NULL, NULL, &STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_0_0_0 },
	{ NULL, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_back, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_0_0_0 },
	{ DelegatePInvokeWrapper_SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716, NULL, NULL, NULL, NULL, NULL, &SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716_0_0_0 },
	{ NULL, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_back, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_cleanup, NULL, NULL, &ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_0_0_0 },
	{ NULL, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_back, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_cleanup, NULL, NULL, &Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_0_0_0 },
	{ NULL, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_back, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0 },
	{ NULL, SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke, SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke_back, SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke_cleanup, NULL, NULL, &SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_0_0_0 },
	{ NULL, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_back, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_cleanup, NULL, NULL, &SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_0_0_0 },
	{ NULL, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_back, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_0_0_0 },
	{ DelegatePInvokeWrapper_SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F_0_0_0 },
	{ NULL, SetupDragAndDropArgs_t3D6B6745EDF8BA073395EFEFA50B007FE94190F2_marshal_pinvoke, SetupDragAndDropArgs_t3D6B6745EDF8BA073395EFEFA50B007FE94190F2_marshal_pinvoke_back, SetupDragAndDropArgs_t3D6B6745EDF8BA073395EFEFA50B007FE94190F2_marshal_pinvoke_cleanup, NULL, NULL, &SetupDragAndDropArgs_t3D6B6745EDF8BA073395EFEFA50B007FE94190F2_0_0_0 },
	{ NULL, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_0_0_0 },
	{ NULL, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_0_0_0 },
	{ NULL, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_back, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_0_0_0 },
	{ NULL, SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke, SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke_back, SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_marshal_pinvoke_cleanup, NULL, NULL, &SpinLock_t0826FB2BDD25012485F35D6D33A1FE1E1752E816_0_0_0 },
	{ NULL, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup, NULL, NULL, &SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_0_0_0 },
	{ NULL, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_0_0_0 },
	{ NULL, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup, NULL, NULL, &SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_0_0_0 },
	{ NULL, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshal_pinvoke, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshal_pinvoke_back, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshal_pinvoke_cleanup, NULL, NULL, &SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_0_0_0 },
	{ NULL, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_back, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_0_0_0 },
	{ NULL, SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshal_pinvoke, SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshal_pinvoke_back, SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_marshal_pinvoke_cleanup, NULL, NULL, &SqlBinary_tEFB13C14B44E4388798A2F7DB48438E16DE4E347_0_0_0 },
	{ NULL, SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshal_pinvoke, SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshal_pinvoke_back, SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_marshal_pinvoke_cleanup, NULL, NULL, &SqlByte_t39089DB566BD0047D5ED18807B145019FB0F0B46_0_0_0 },
	{ NULL, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_pinvoke, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_pinvoke_back, SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_marshal_pinvoke_cleanup, NULL, NULL, &SqlDateTime_tFB5902479382E8A61934E274E7BBF3280A3D25B2_0_0_0 },
	{ NULL, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshal_pinvoke, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshal_pinvoke_back, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshal_pinvoke_cleanup, NULL, NULL, &SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_0_0_0 },
	{ NULL, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshal_pinvoke, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshal_pinvoke_back, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshal_pinvoke_cleanup, NULL, NULL, &SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_0_0_0 },
	{ NULL, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshal_pinvoke, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshal_pinvoke_back, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshal_pinvoke_cleanup, NULL, NULL, &SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_0_0_0 },
	{ NULL, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshal_pinvoke, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshal_pinvoke_back, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshal_pinvoke_cleanup, NULL, NULL, &SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_0_0_0 },
	{ NULL, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshal_pinvoke, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshal_pinvoke_back, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshal_pinvoke_cleanup, NULL, NULL, &SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_0_0_0 },
	{ NULL, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshal_pinvoke, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshal_pinvoke_back, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshal_pinvoke_cleanup, NULL, NULL, &SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_0_0_0 },
	{ NULL, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshal_pinvoke, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshal_pinvoke_back, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshal_pinvoke_cleanup, NULL, NULL, &SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_0_0_0 },
	{ NULL, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshal_pinvoke, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshal_pinvoke_back, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshal_pinvoke_cleanup, NULL, NULL, &SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_0_0_0 },
	{ NULL, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_0_0_0 },
	{ NULL, StartDragArgs_tF1E3C0A058F6E7B936541CFCCFB42965A2B452C9_marshal_pinvoke, StartDragArgs_tF1E3C0A058F6E7B936541CFCCFB42965A2B452C9_marshal_pinvoke_back, StartDragArgs_tF1E3C0A058F6E7B936541CFCCFB42965A2B452C9_marshal_pinvoke_cleanup, NULL, NULL, &StartDragArgs_tF1E3C0A058F6E7B936541CFCCFB42965A2B452C9_0_0_0 },
	{ NULL, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_back, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_cleanup, NULL, NULL, &State_tC241510131965D8DE1919EB16A3650E397E5AEAB_0_0_0 },
	{ NULL, StreamItemMessage_tA26B1E24875B9C701927F1D4780BD6AE16252956_marshal_pinvoke, StreamItemMessage_tA26B1E24875B9C701927F1D4780BD6AE16252956_marshal_pinvoke_back, StreamItemMessage_tA26B1E24875B9C701927F1D4780BD6AE16252956_marshal_pinvoke_cleanup, NULL, NULL, &StreamItemMessage_tA26B1E24875B9C701927F1D4780BD6AE16252956_0_0_0 },
	{ NULL, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_back, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_0_0_0 },
	{ NULL, StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_marshal_pinvoke, StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_marshal_pinvoke_back, StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_marshal_pinvoke_cleanup, NULL, NULL, &StringBuffer_tCDD0DF688243FC93296397311678087BDC2FDEEB_0_0_0 },
	{ NULL, StringConcat_t8995382764BCE27EF906F99F1235E172D02C6FB9_marshal_pinvoke, StringConcat_t8995382764BCE27EF906F99F1235E172D02C6FB9_marshal_pinvoke_back, StringConcat_t8995382764BCE27EF906F99F1235E172D02C6FB9_marshal_pinvoke_cleanup, NULL, NULL, &StringConcat_t8995382764BCE27EF906F99F1235E172D02C6FB9_0_0_0 },
	{ NULL, StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshal_pinvoke, StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshal_pinvoke_back, StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshal_pinvoke_cleanup, NULL, NULL, &StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_0_0_0 },
	{ NULL, StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_marshal_pinvoke, StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_marshal_pinvoke_back, StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_marshal_pinvoke_cleanup, NULL, NULL, &StringReference_t699448489ADA552CAB49087CA0E213D0554EFE3C_0_0_0 },
	{ NULL, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_back, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_cleanup, NULL, NULL, &StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_0_0_0 },
	{ NULL, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshal_pinvoke, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshal_pinvoke_back, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshal_pinvoke_cleanup, NULL, NULL, &StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_0_0_0 },
	{ NULL, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshal_pinvoke, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshal_pinvoke_back, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshal_pinvoke_cleanup, NULL, NULL, &StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_0_0_0 },
	{ NULL, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_back, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_0_0_0 },
	{ NULL, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_back, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_0_0_0 },
	{ NULL, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_back, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0 },
	{ NULL, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_back, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_cleanup, NULL, NULL, &StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_0_0_0 },
	{ NULL, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_back, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_cleanup, NULL, NULL, &StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_0_0_0 },
	{ NULL, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_back, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_cleanup, NULL, NULL, &StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_0_0_0 },
	{ NULL, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_back, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_cleanup, NULL, NULL, &StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_0_0_0 },
	{ NULL, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_back, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_cleanup, NULL, NULL, &StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_0_0_0 },
	{ NULL, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_back, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_cleanup, NULL, NULL, &StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_0_0_0 },
	{ NULL, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_back, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_cleanup, NULL, NULL, &StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_0_0_0 },
	{ NULL, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_back, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_cleanup, NULL, NULL, &StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_0_0_0 },
	{ NULL, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshal_pinvoke, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshal_pinvoke_back, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshal_pinvoke_cleanup, NULL, NULL, &TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_0_0_0 },
	{ NULL, TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshal_pinvoke, TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshal_pinvoke_back, TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_marshal_pinvoke_cleanup, NULL, NULL, &TMP_FontWeightPair_t2835DA6BF1309AC6C817ECF878232CCF9DDB703E_0_0_0 },
	{ NULL, TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshal_pinvoke, TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshal_pinvoke_back, TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_marshal_pinvoke_cleanup, NULL, NULL, &TMP_LinkInfo_t9DC08E8BF8C5E8094AFF8C9FB3C251AF88B92DA6_0_0_0 },
	{ NULL, TMP_MaterialReference_t7E8E30A468A008784635737654F6248AE4120D56_marshal_pinvoke, TMP_MaterialReference_t7E8E30A468A008784635737654F6248AE4120D56_marshal_pinvoke_back, TMP_MaterialReference_t7E8E30A468A008784635737654F6248AE4120D56_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MaterialReference_t7E8E30A468A008784635737654F6248AE4120D56_0_0_0 },
	{ NULL, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_pinvoke, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_pinvoke_back, TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MeshInfo_t320C52212E9D672EBB5F5C18C3E0700AA33DD76B_0_0_0 },
	{ NULL, TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshal_pinvoke, TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshal_pinvoke_back, TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_marshal_pinvoke_cleanup, NULL, NULL, &TMP_WordInfo_t825112AF0B76E4461F9C7DD336A02CC6A090A983_0_0_0 },
	{ NULL, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_back, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0 },
	{ NULL, TextBackingContainer_t72D97EE144D48752E621D2AA89DEA62AB7D037CE_marshal_pinvoke, TextBackingContainer_t72D97EE144D48752E621D2AA89DEA62AB7D037CE_marshal_pinvoke_back, TextBackingContainer_t72D97EE144D48752E621D2AA89DEA62AB7D037CE_marshal_pinvoke_cleanup, NULL, NULL, &TextBackingContainer_t72D97EE144D48752E621D2AA89DEA62AB7D037CE_0_0_0 },
	{ NULL, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_back, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_cleanup, NULL, NULL, &TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_0_0_0 },
	{ NULL, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_back, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_0_0_0 },
	{ NULL, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_back, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_0_0_0 },
	{ NULL, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_back, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_cleanup, NULL, NULL, &TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_0_0_0 },
	{ DelegatePInvokeWrapper_ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_0_0_0 },
	{ DelegatePInvokeWrapper_TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B, NULL, NULL, NULL, NULL, NULL, &TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B_0_0_0 },
	{ NULL, TimerData_tAD297E7A229F450DD1D089603A9D44BCDD10D43D_marshal_pinvoke, TimerData_tAD297E7A229F450DD1D089603A9D44BCDD10D43D_marshal_pinvoke_back, TimerData_tAD297E7A229F450DD1D089603A9D44BCDD10D43D_marshal_pinvoke_cleanup, NULL, NULL, &TimerData_tAD297E7A229F450DD1D089603A9D44BCDD10D43D_0_0_0 },
	{ NULL, TimingEvent_t69A9B074F7E66D68EB92E06938E3B1B600B47A90_marshal_pinvoke, TimingEvent_t69A9B074F7E66D68EB92E06938E3B1B600B47A90_marshal_pinvoke_back, TimingEvent_t69A9B074F7E66D68EB92E06938E3B1B600B47A90_marshal_pinvoke_cleanup, NULL, NULL, &TimingEvent_t69A9B074F7E66D68EB92E06938E3B1B600B47A90_0_0_0 },
	{ NULL, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_back, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_0_0_0 },
	{ NULL, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_back, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_cleanup, NULL, NULL, &TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_0_0_0 },
	{ NULL, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_back, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_cleanup, NULL, NULL, &TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_0_0_0 },
	{ NULL, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_back, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_cleanup, NULL, NULL, &Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_0_0_0 },
	{ NULL, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_back, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_0_0_0 },
	{ NULL, TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshal_pinvoke, TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshal_pinvoke_back, TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_marshal_pinvoke_cleanup, NULL, NULL, &TreeItem_t6B0F84E487FB869A51E1DA4987183127271F4F90_0_0_0 },
	{ NULL, TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshal_pinvoke, TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshal_pinvoke_back, TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_marshal_pinvoke_cleanup, NULL, NULL, &TreeViewItemWrapper_t4475B9923345B2D51C29E1E5285A4F92FA65C839_0_0_0 },
	{ NULL, TrueSpeechWaveFormat_t667489CE6BD6FC43E93AD44F12966A65200045D9_marshal_pinvoke, TrueSpeechWaveFormat_t667489CE6BD6FC43E93AD44F12966A65200045D9_marshal_pinvoke_back, TrueSpeechWaveFormat_t667489CE6BD6FC43E93AD44F12966A65200045D9_marshal_pinvoke_cleanup, NULL, NULL, &TrueSpeechWaveFormat_t667489CE6BD6FC43E93AD44F12966A65200045D9_0_0_0 },
	{ DelegatePInvokeWrapper_TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24, NULL, NULL, NULL, NULL, NULL, &TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_0_0_0 },
	{ NULL, TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshal_pinvoke, TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshal_pinvoke_back, TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshal_pinvoke_cleanup, NULL, NULL, &TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_0_0_0 },
	{ NULL, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_back, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_cleanup, NULL, NULL, &UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_0_0_0 },
	{ NULL, UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_marshal_pinvoke, UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_marshal_pinvoke_back, UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_marshal_pinvoke_cleanup, NULL, NULL, &UintOptions_t06BB035A1F0801FF6D4721F6F98F36DDD93E53A3_0_0_0 },
	{ DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7, NULL, NULL, NULL, NULL, NULL, &UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0 },
	{ NULL, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0 },
	{ NULL, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_back, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_0_0_0 },
	{ NULL, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_back, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_cleanup, NULL, NULL, &UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_0_0_0 },
	{ NULL, UnpackBlockHeader_tAA8CD8EC0018F04C1597FC8DA78114214D9A2B6E_marshal_pinvoke, UnpackBlockHeader_tAA8CD8EC0018F04C1597FC8DA78114214D9A2B6E_marshal_pinvoke_back, UnpackBlockHeader_tAA8CD8EC0018F04C1597FC8DA78114214D9A2B6E_marshal_pinvoke_cleanup, NULL, NULL, &UnpackBlockHeader_tAA8CD8EC0018F04C1597FC8DA78114214D9A2B6E_0_0_0 },
	{ NULL, UnpackBlockTables_tAF53A21C08FDBA349A51FE424CEA191E7EB63806_marshal_pinvoke, UnpackBlockTables_tAF53A21C08FDBA349A51FE424CEA191E7EB63806_marshal_pinvoke_back, UnpackBlockTables_tAF53A21C08FDBA349A51FE424CEA191E7EB63806_marshal_pinvoke_cleanup, NULL, NULL, &UnpackBlockTables_tAF53A21C08FDBA349A51FE424CEA191E7EB63806_0_0_0 },
	{ NULL, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_0_0_0 },
	{ NULL, UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_pinvoke, UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_pinvoke_back, UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_0_0_0 },
	{ NULL, UploadInvocationMessage_t2A9F5C59567B9A9BBEF6A26B736F40B2897FEABE_marshal_pinvoke, UploadInvocationMessage_t2A9F5C59567B9A9BBEF6A26B736F40B2897FEABE_marshal_pinvoke_back, UploadInvocationMessage_t2A9F5C59567B9A9BBEF6A26B736F40B2897FEABE_marshal_pinvoke_cleanup, NULL, NULL, &UploadInvocationMessage_t2A9F5C59567B9A9BBEF6A26B736F40B2897FEABE_0_0_0 },
	{ NULL, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_back, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_cleanup, NULL, NULL, &ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_0_0_0 },
	{ NULL, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_back, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_cleanup, NULL, NULL, &ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_0_0_0 },
	{ NULL, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_back, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_cleanup, NULL, NULL, &ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_0_0_0 },
	{ NULL, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_back, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0 },
	{ NULL, ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke, ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_back, ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_cleanup, NULL, NULL, &ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_0_0_0 },
	{ NULL, Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshal_pinvoke, Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshal_pinvoke_back, Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_marshal_pinvoke_cleanup, NULL, NULL, &Vector3ArrayOptions_t0F50A7A54A860E4604486511E285C952557C6644_0_0_0 },
	{ NULL, VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshal_pinvoke, VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshal_pinvoke_back, VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshal_pinvoke_cleanup, NULL, NULL, &VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_0_0_0 },
	{ NULL, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_back, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_cleanup, NULL, NULL, &VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_0_0_0 },
	{ NULL, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_back, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_cleanup, NULL, NULL, &VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_0_0_0 },
	{ NULL, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_back, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_0_0_0 },
	{ NULL, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_back, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_0_0_0 },
	{ NULL, WaveBuffer_t21C08B7848029BDEC66FB9816556342FB5E5CC67_marshal_pinvoke, WaveBuffer_t21C08B7848029BDEC66FB9816556342FB5E5CC67_marshal_pinvoke_back, WaveBuffer_t21C08B7848029BDEC66FB9816556342FB5E5CC67_marshal_pinvoke_cleanup, NULL, NULL, &WaveBuffer_t21C08B7848029BDEC66FB9816556342FB5E5CC67_0_0_0 },
	{ NULL, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke_back, WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_marshal_pinvoke_cleanup, NULL, NULL, &WaveFilter_t4FAAD2ECBCD2FC16177B614EE36B4DAEBB2D7B75_0_0_0 },
	{ NULL, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke_back, WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_marshal_pinvoke_cleanup, NULL, NULL, &WaveFormat_t05610D52255A6B38672291A5C006F674943B90E4_0_0_0 },
	{ NULL, WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_pinvoke, WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_pinvoke_back, WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_marshal_pinvoke_cleanup, NULL, NULL, &WaveFormatExtensible_t90FFA19D9951D00002A4A43D1E60957813C24809_0_0_0 },
	{ NULL, WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_pinvoke, WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_pinvoke_back, WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_marshal_pinvoke_cleanup, NULL, NULL, &WaveFormatExtraData_t23BE1BE52599E6ED9E2EDC6BDF909D6674CD021C_0_0_0 },
	{ NULL, WaveHeader_t5122233D4F3D7122A04C0180DEA438E753CEF925_marshal_pinvoke, WaveHeader_t5122233D4F3D7122A04C0180DEA438E753CEF925_marshal_pinvoke_back, WaveHeader_t5122233D4F3D7122A04C0180DEA438E753CEF925_marshal_pinvoke_cleanup, NULL, NULL, &WaveHeader_t5122233D4F3D7122A04C0180DEA438E753CEF925_0_0_0 },
	{ NULL, WaveInCapabilities_tEA7EF7DF557B6A5351AC3FBC5098B667D0F7F567_marshal_pinvoke, WaveInCapabilities_tEA7EF7DF557B6A5351AC3FBC5098B667D0F7F567_marshal_pinvoke_back, WaveInCapabilities_tEA7EF7DF557B6A5351AC3FBC5098B667D0F7F567_marshal_pinvoke_cleanup, NULL, NULL, &WaveInCapabilities_tEA7EF7DF557B6A5351AC3FBC5098B667D0F7F567_0_0_0 },
	{ NULL, WaveOutCapabilities_t92E8595D3FDDD32704BFDA95E9E0FAC738ABC1D8_marshal_pinvoke, WaveOutCapabilities_t92E8595D3FDDD32704BFDA95E9E0FAC738ABC1D8_marshal_pinvoke_back, WaveOutCapabilities_t92E8595D3FDDD32704BFDA95E9E0FAC738ABC1D8_marshal_pinvoke_cleanup, NULL, NULL, &WaveOutCapabilities_t92E8595D3FDDD32704BFDA95E9E0FAC738ABC1D8_0_0_0 },
	{ NULL, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_back, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_cleanup, NULL, NULL, &WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_0_0_0 },
	{ NULL, WebSocketFrameReader_t7D2DC431E5B33DF6B860B5A8171D435570B6F560_marshal_pinvoke, WebSocketFrameReader_t7D2DC431E5B33DF6B860B5A8171D435570B6F560_marshal_pinvoke_back, WebSocketFrameReader_t7D2DC431E5B33DF6B860B5A8171D435570B6F560_marshal_pinvoke_cleanup, NULL, NULL, &WebSocketFrameReader_t7D2DC431E5B33DF6B860B5A8171D435570B6F560_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &WindowsMediaMp3DecoderComObject_tDACD69384AEFFEF628C4C3CF36AAD6CB19A56286::CLSID, &WindowsMediaMp3DecoderComObject_tDACD69384AEFFEF628C4C3CF36AAD6CB19A56286_0_0_0 },
	{ NULL, WmaWaveFormat_tAF5911ED018EEBDC5AA3A70E3AB03A1784C229B4_marshal_pinvoke, WmaWaveFormat_tAF5911ED018EEBDC5AA3A70E3AB03A1784C229B4_marshal_pinvoke_back, WmaWaveFormat_tAF5911ED018EEBDC5AA3A70E3AB03A1784C229B4_marshal_pinvoke_cleanup, NULL, NULL, &WmaWaveFormat_tAF5911ED018EEBDC5AA3A70E3AB03A1784C229B4_0_0_0 },
	{ NULL, WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshal_pinvoke, WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshal_pinvoke_back, WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_0_0_0 },
	{ NULL, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_back, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_0_0_0 },
	{ NULL, WriteLock_t1B18D940643FF6CC4433FD1A76BF9C3A02337A70_marshal_pinvoke, WriteLock_t1B18D940643FF6CC4433FD1A76BF9C3A02337A70_marshal_pinvoke_back, WriteLock_t1B18D940643FF6CC4433FD1A76BF9C3A02337A70_marshal_pinvoke_cleanup, NULL, NULL, &WriteLock_t1B18D940643FF6CC4433FD1A76BF9C3A02337A70_0_0_0 },
	{ NULL, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_0_0_0 },
	{ NULL, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_back, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_cleanup, NULL, NULL, &XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_0_0_0 },
	{ NULL, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_back, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_cleanup, NULL, NULL, &XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_0_0_0 },
	{ NULL, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_back, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_cleanup, NULL, NULL, &XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_0_0_0 },
	{ NULL, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_back, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_cleanup, NULL, NULL, &XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_0_0_0 },
	{ NULL, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_back, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_tE60ACF8A3EE60E5FC7752546ACD1BEDFA8A4FF93::CLSID, &ZlibException_tE60ACF8A3EE60E5FC7752546ACD1BEDFA8A4FF93_0_0_0 },
	{ NULL, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_back, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_0_0_0 },
	{ NULL, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup, NULL, NULL, &jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_0_0_0 },
	{ DelegatePInvokeWrapper_AcmDriverEnumCallback_t3134965B60B471D23A03FF6483BBE6D7BCE42171, NULL, NULL, NULL, NULL, NULL, &AcmDriverEnumCallback_t3134965B60B471D23A03FF6483BBE6D7BCE42171_0_0_0 },
	{ DelegatePInvokeWrapper_AcmFormatChooseHookProc_t5F18B682C90E4265035A641F568C0FBAD564B433, NULL, NULL, NULL, NULL, NULL, &AcmFormatChooseHookProc_t5F18B682C90E4265035A641F568C0FBAD564B433_0_0_0 },
	{ DelegatePInvokeWrapper_AcmFormatEnumCallback_tA2103557D293F5587A7A886D8F76F563F8827364, NULL, NULL, NULL, NULL, NULL, &AcmFormatEnumCallback_tA2103557D293F5587A7A886D8F76F563F8827364_0_0_0 },
	{ DelegatePInvokeWrapper_AcmFormatTagEnumCallback_t6DEC528E785BAB55496137B3254CA18742251BC7, NULL, NULL, NULL, NULL, NULL, &AcmFormatTagEnumCallback_t6DEC528E785BAB55496137B3254CA18742251BC7_0_0_0 },
	{ NULL, AiffChunk_tB32C341F8B5D0770A9E9BEB3F0CCCF48995EB009_marshal_pinvoke, AiffChunk_tB32C341F8B5D0770A9E9BEB3F0CCCF48995EB009_marshal_pinvoke_back, AiffChunk_tB32C341F8B5D0770A9E9BEB3F0CCCF48995EB009_marshal_pinvoke_cleanup, NULL, NULL, &AiffChunk_tB32C341F8B5D0770A9E9BEB3F0CCCF48995EB009_0_0_0 },
	{ NULL, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_back, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_cleanup, NULL, NULL, &Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_0_0_0 },
	{ DelegatePInvokeWrapper_TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA, NULL, NULL, NULL, NULL, NULL, &TryFunction_tC277E17D1D6AD4EF20C1FC1D8F91A559208AA5CA_0_0_0 },
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5_0_0_0 },
	{ DelegatePInvokeWrapper_LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413, NULL, NULL, NULL, NULL, NULL, &LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_0_0_0 },
	{ DelegatePInvokeWrapper_LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F_0_0_0 },
	{ DelegatePInvokeWrapper_MemoryUsageChangedCallback_t2C3B85C19E7620327958BA77A7B603C544AD1188, NULL, NULL, NULL, NULL, NULL, &MemoryUsageChangedCallback_t2C3B85C19E7620327958BA77A7B603C544AD1188_0_0_0 },
	{ NULL, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_back, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_cleanup, NULL, NULL, &RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_0_0_0 },
	{ NULL, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_back, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_0_0_0 },
	{ NULL, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_back, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_0_0_0 },
	{ DelegatePInvokeWrapper_AsioAsioMessageCallBack_t8051648DA736C66766063EAFC5599204F13E8949, NULL, NULL, NULL, NULL, NULL, &AsioAsioMessageCallBack_t8051648DA736C66766063EAFC5599204F13E8949_0_0_0 },
	{ DelegatePInvokeWrapper_AsioBufferSwitchCallBack_t258910DFABB1FC03FBE6EB793D808F18558E1289, NULL, NULL, NULL, NULL, NULL, &AsioBufferSwitchCallBack_t258910DFABB1FC03FBE6EB793D808F18558E1289_0_0_0 },
	{ DelegatePInvokeWrapper_AsioBufferSwitchTimeInfoCallBack_tB4EA29F22CCCF178C45DECC0F4CC83C98405C598, NULL, NULL, NULL, NULL, NULL, &AsioBufferSwitchTimeInfoCallBack_tB4EA29F22CCCF178C45DECC0F4CC83C98405C598_0_0_0 },
	{ DelegatePInvokeWrapper_AsioSampleRateDidChangeCallBack_t6C33721710059C31086334A6BFBE905B7281E835, NULL, NULL, NULL, NULL, NULL, &AsioSampleRateDidChangeCallBack_t6C33721710059C31086334A6BFBE905B7281E835_0_0_0 },
	{ NULL, AsioDriverVTable_t450D1A3F5015BB06D4F98414AC2A77D1FD6950ED_marshal_pinvoke, AsioDriverVTable_t450D1A3F5015BB06D4F98414AC2A77D1FD6950ED_marshal_pinvoke_back, AsioDriverVTable_t450D1A3F5015BB06D4F98414AC2A77D1FD6950ED_marshal_pinvoke_cleanup, NULL, NULL, &AsioDriverVTable_t450D1A3F5015BB06D4F98414AC2A77D1FD6950ED_0_0_0 },
	{ DelegatePInvokeWrapper_SampleConvertor_t46381D1F80FBB88BCC810A787805D379D117D75C, NULL, NULL, NULL, NULL, NULL, &SampleConvertor_t46381D1F80FBB88BCC810A787805D379D117D75C_0_0_0 },
	{ NULL, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_back, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_cleanup, NULL, NULL, &AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_0_0_0 },
	{ DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_0_0_0 },
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_0_0_0 },
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_0_0_0 },
	{ NULL, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_back, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_0_0_0 },
	{ NULL, BigNumberBuffer_tDFB089D05A25ECBB9B5251EFB55C93D16C37C339_marshal_pinvoke, BigNumberBuffer_tDFB089D05A25ECBB9B5251EFB55C93D16C37C339_marshal_pinvoke_back, BigNumberBuffer_tDFB089D05A25ECBB9B5251EFB55C93D16C37C339_marshal_pinvoke_cleanup, NULL, NULL, &BigNumberBuffer_tDFB089D05A25ECBB9B5251EFB55C93D16C37C339_0_0_0 },
	{ NULL, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_back, FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_marshal_pinvoke_cleanup, NULL, NULL, &FormatOptions_tBD49C0C9CC14282D1249620565FC537D4D4AFB84_0_0_0 },
	{ NULL, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_back, NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_tF09E8463D840202ECA50F50BE6D57729C18213B4_0_0_0 },
	{ DelegatePInvokeWrapper_ValidateBoneWeights_00000116U24PostfixBurstDelegate_tA5DD301A516885745B6C1CD2345B7837CB6E23E3, NULL, NULL, NULL, NULL, NULL, &ValidateBoneWeights_00000116U24PostfixBurstDelegate_tA5DD301A516885745B6C1CD2345B7837CB6E23E3_0_0_0 },
	{ NULL, Entry_t39F343C9DF50958B6CB0CC4C05208796E8898549_marshal_pinvoke, Entry_t39F343C9DF50958B6CB0CC4C05208796E8898549_marshal_pinvoke_back, Entry_t39F343C9DF50958B6CB0CC4C05208796E8898549_marshal_pinvoke_cleanup, NULL, NULL, &Entry_t39F343C9DF50958B6CB0CC4C05208796E8898549_0_0_0 },
	{ DelegatePInvokeWrapper_WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_0_0_0 },
	{ NULL, AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke, AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_back, AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_cleanup, NULL, NULL, &AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_0_0_0 },
	{ DelegatePInvokeWrapper_AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70, NULL, NULL, NULL, NULL, NULL, &AddRefDelegate_t99EED2808BBB5BC28FBB609C5CEE3721D6DA3E70_0_0_0 },
	{ DelegatePInvokeWrapper_CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E, NULL, NULL, NULL, NULL, NULL, &CloneDelegate_tB4478A6687C5C0D68387EF11AC52F0AE364C369E_0_0_0 },
	{ DelegatePInvokeWrapper_CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B, NULL, NULL, NULL, NULL, NULL, &CommitDelegate_tC6A95F5A9B0AC4C6FDE02BD8BECB006EE22BA77B_0_0_0 },
	{ DelegatePInvokeWrapper_CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31, NULL, NULL, NULL, NULL, NULL, &CopyToDelegate_tE35DECEB969CA46A1AC2135850850F3B707ACC31_0_0_0 },
	{ NULL, IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_pinvoke, IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_pinvoke_back, IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_marshal_pinvoke_cleanup, NULL, NULL, &IStreamInterface_tD1ED299B8DCC0D8BEEB8DB3A0EE6EFA750FBDC78_0_0_0 },
	{ NULL, IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_pinvoke, IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_pinvoke_back, IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_marshal_pinvoke_cleanup, NULL, NULL, &IStreamVtbl_tD05F6AEE954BF9EA8E6F8CC9E89F96904E0B278E_0_0_0 },
	{ DelegatePInvokeWrapper_LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED, NULL, NULL, NULL, NULL, NULL, &LockRegionDelegate_t7399D059E8510376292E8A4ED9272F66682C4AED_0_0_0 },
	{ NULL, NULL, NULL, NULL, CreateComCallableWrapperFor_NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C, NULL, &NativeToManagedWrapper_tA7DF03CEDA3A720A7A9E8E3870D3CA43C85ABB2C_0_0_0 },
	{ DelegatePInvokeWrapper_QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3, NULL, NULL, NULL, NULL, NULL, &QueryInterfaceDelegate_t58523DF3211CD4C576284300AA023AC2CBD581B3_0_0_0 },
	{ DelegatePInvokeWrapper_ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t4A68B0D41CF9ACCF6B39100DD1E09E77360D9F20_0_0_0 },
	{ DelegatePInvokeWrapper_ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA, NULL, NULL, NULL, NULL, NULL, &ReleaseDelegate_t1907D2E62C714674A5B2253D0FD5835928D1D3DA_0_0_0 },
	{ DelegatePInvokeWrapper_RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD, NULL, NULL, NULL, NULL, NULL, &RevertDelegate_t50E47965C923F0C4E8BF90C15667EFD611E9F3AD_0_0_0 },
	{ DelegatePInvokeWrapper_SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559, NULL, NULL, NULL, NULL, NULL, &SeekDelegate_t27CDB8BCC42C842156E5CD25AB3E7265A6BB2559_0_0_0 },
	{ DelegatePInvokeWrapper_SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE, NULL, NULL, NULL, NULL, NULL, &SetSizeDelegate_tF1DC7978D4D35954E22DBFFD005B543859C5F1EE_0_0_0 },
	{ DelegatePInvokeWrapper_StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453, NULL, NULL, NULL, NULL, NULL, &StatDelegate_t12ACE906033618194347F9EBA73F15DFEEB8A453_0_0_0 },
	{ DelegatePInvokeWrapper_UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6, NULL, NULL, NULL, NULL, NULL, &UnlockRegionDelegate_t097CDA69A2E7BCA6992BD9192A78A81476B923B6_0_0_0 },
	{ DelegatePInvokeWrapper_WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t06A5A1D91C944B7BF4313C54CCF3B646EDB4E5AF_0_0_0 },
	{ NULL, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_back, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_0_0_0 },
	{ NULL, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_back, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_cleanup, NULL, NULL, &RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_0_0_0 },
	{ NULL, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_back, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_0_0_0 },
	{ DelegatePInvokeWrapper_StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F, NULL, NULL, NULL, NULL, NULL, &StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F_0_0_0 },
	{ NULL, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_back, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_cleanup, NULL, NULL, &Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_0_0_0 },
	{ DelegatePInvokeWrapper_OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A, NULL, NULL, NULL, NULL, NULL, &OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A_0_0_0 },
	{ NULL, ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshal_pinvoke, ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshal_pinvoke_back, ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshal_pinvoke_cleanup, NULL, NULL, &ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_0_0_0 },
	{ NULL, DSRowDiffIdUsageSection_tAA85427FBBFA116FDA0BD0EA17A579EF777C716A_marshal_pinvoke, DSRowDiffIdUsageSection_tAA85427FBBFA116FDA0BD0EA17A579EF777C716A_marshal_pinvoke_back, DSRowDiffIdUsageSection_tAA85427FBBFA116FDA0BD0EA17A579EF777C716A_marshal_pinvoke_cleanup, NULL, NULL, &DSRowDiffIdUsageSection_tAA85427FBBFA116FDA0BD0EA17A579EF777C716A_0_0_0 },
	{ NULL, RowDiffIdUsageSection_t157154888DA88AD7D8A00E97657B47BCFEE3AF0D_marshal_pinvoke, RowDiffIdUsageSection_t157154888DA88AD7D8A00E97657B47BCFEE3AF0D_marshal_pinvoke_back, RowDiffIdUsageSection_t157154888DA88AD7D8A00E97657B47BCFEE3AF0D_marshal_pinvoke_cleanup, NULL, NULL, &RowDiffIdUsageSection_t157154888DA88AD7D8A00E97657B47BCFEE3AF0D_0_0_0 },
	{ NULL, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_back, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t959FACC867970114DBF8DC7D4C649240E819940E_0_0_0 },
	{ NULL, FocusBasedEventSequenceContext_tA9E2ED024CB3E4EC3C41F5B432AB56D892D69BF0_marshal_pinvoke, FocusBasedEventSequenceContext_tA9E2ED024CB3E4EC3C41F5B432AB56D892D69BF0_marshal_pinvoke_back, FocusBasedEventSequenceContext_tA9E2ED024CB3E4EC3C41F5B432AB56D892D69BF0_marshal_pinvoke_cleanup, NULL, NULL, &FocusBasedEventSequenceContext_tA9E2ED024CB3E4EC3C41F5B432AB56D892D69BF0_0_0_0 },
	{ DelegatePInvokeWrapper_CompressFunc_tE252CCF3C0FAF930A5784104E8B592836B8780F6, NULL, NULL, NULL, NULL, NULL, &CompressFunc_tE252CCF3C0FAF930A5784104E8B592836B8780F6_0_0_0 },
	{ DelegatePInvokeWrapper_CompressFunc_t25B4A18E8989D05668450401EAD65000F767B7F9, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t25B4A18E8989D05668450401EAD65000F767B7F9_0_0_0 },
	{ DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6, NULL, NULL, NULL, NULL, NULL, &ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_0_0_0 },
	{ DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9, NULL, NULL, NULL, NULL, NULL, &WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_0_0_0 },
	{ DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA, NULL, NULL, NULL, NULL, NULL, &UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_0_0_0 },
	{ NULL, BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_marshal_pinvoke, BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_marshal_pinvoke_back, BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_marshal_pinvoke_cleanup, NULL, NULL, &BufferCaps_t49B0231871716A29E4FC21FECCAFA2617CF666A1_0_0_0 },
	{ NULL, BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_marshal_pinvoke, BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_marshal_pinvoke_back, BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_marshal_pinvoke_cleanup, NULL, NULL, &BufferDescription_t9F4369AF0FCBD13EBBBB5399488639DC5F4EF6CB_0_0_0 },
	{ DelegatePInvokeWrapper_DSEnumCallback_t9CAE2A42E249E5C9E4C4E17B0BD5818949BE6B43, NULL, NULL, NULL, NULL, NULL, &DSEnumCallback_t9CAE2A42E249E5C9E4C4E17B0BD5818949BE6B43_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IDirectSound_tE8DB80367829DCBD961343333FBCA0F8C1D04E8F::IID, &IDirectSound_tE8DB80367829DCBD961343333FBCA0F8C1D04E8F_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IDirectSoundBuffer_tE22AE55E2066D72020EE7CF7309E16C901F8FB2E::IID, &IDirectSoundBuffer_tE22AE55E2066D72020EE7CF7309E16C901F8FB2E_0_0_0 },
	{ NULL, NULL, NULL, NULL, NULL, &IDirectSoundNotify_tCDF8118BF3AB8E0BFEA7994E34A8CDED9F12297A::IID, &IDirectSoundNotify_tCDF8118BF3AB8E0BFEA7994E34A8CDED9F12297A_0_0_0 },
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68_0_0_0 },
	{ NULL, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_back, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_0_0_0 },
	{ NULL, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_back, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_cleanup, NULL, NULL, &DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_0_0_0 },
	{ NULL, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_back, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_cleanup, NULL, NULL, &EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_0_0_0 },
	{ NULL, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_back, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_cleanup, NULL, NULL, &UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_0_0_0 },
	{ NULL, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_back, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_cleanup, NULL, NULL, &Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_0_0_0 },
	{ NULL, ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshal_pinvoke, ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshal_pinvoke_back, ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshal_pinvoke_cleanup, NULL, NULL, &ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_0_0_0 },
	{ DelegatePInvokeWrapper_SymbolicLinkWriterDelegate_t3C98E35E7ECAD625ACAFBEBFEB73F5099499444A, NULL, NULL, NULL, NULL, NULL, &SymbolicLinkWriterDelegate_t3C98E35E7ECAD625ACAFBEBFEB73F5099499444A_0_0_0 },
	{ NULL, FacetsCompiler_t65A6917F6CE74E049E1914BB6CB0BEE4BF463663_marshal_pinvoke, FacetsCompiler_t65A6917F6CE74E049E1914BB6CB0BEE4BF463663_marshal_pinvoke_back, FacetsCompiler_t65A6917F6CE74E049E1914BB6CB0BEE4BF463663_marshal_pinvoke_cleanup, NULL, NULL, &FacetsCompiler_t65A6917F6CE74E049E1914BB6CB0BEE4BF463663_0_0_0 },
	{ DelegatePInvokeWrapper_ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98_0_0_0 },
	{ DelegatePInvokeWrapper_WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA_0_0_0 },
	{ NULL, U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke, U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke_back, U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke_cleanup, NULL, NULL, &U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_0_0_0 },
	{ NULL, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_back, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_cleanup, NULL, NULL, &FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_0_0_0 },
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1_0_0_0 },
	{ DelegatePInvokeWrapper_StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0, NULL, NULL, NULL, NULL, NULL, &StreamCloseDelegate_tC314C3938DC9DCF881FC4086B73D0B74173F90B0_0_0_0 },
	{ DelegatePInvokeWrapper_StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0, NULL, NULL, NULL, NULL, NULL, &StreamGetBytesDelegate_t3EBCC1980B93A376D82199E38C14E454A9C48BD0_0_0_0 },
	{ DelegatePInvokeWrapper_StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B, NULL, NULL, NULL, NULL, NULL, &StreamGetHeaderDelegate_t7EAE5BE5F3A692566DDF895CA25CF98B59400A1B_0_0_0 },
	{ DelegatePInvokeWrapper_StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD, NULL, NULL, NULL, NULL, NULL, &StreamPutBytesDelegate_tAC0A425B4AEDFBE27D7190F2182C56FDA0533CAD_0_0_0 },
	{ DelegatePInvokeWrapper_StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3, NULL, NULL, NULL, NULL, NULL, &StreamSeekDelegate_tA3C060C6E8276C28FE7F1812A9D4383C9A2AAFE3_0_0_0 },
	{ DelegatePInvokeWrapper_StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA, NULL, NULL, NULL, NULL, NULL, &StreamSizeDelegate_tEBECD0C6F907E903C93F475DACC03A780ED6D9FA_0_0_0 },
	{ DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_0_0_0 },
	{ NULL, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_back, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_cleanup, NULL, NULL, &ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_0_0_0 },
	{ DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98_0_0_0 },
	{ NULL, Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke, Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke_back, Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke_cleanup, NULL, NULL, &Margins_t710D98C860962372C9323F82DD766A3977353F85_0_0_0 },
	{ NULL, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke_back, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke_cleanup, NULL, NULL, &Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_0_0_0 },
	{ NULL, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke_back, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke_cleanup, NULL, NULL, &Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_0_0_0 },
	{ NULL, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_back, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_cleanup, NULL, NULL, &RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_0_0_0 },
	{ NULL, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_back, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_0_0_0 },
	{ NULL, UploadStreamInfo_tF2CDB2AE79085BEC0562A27EEC0E29CFB75E4297_marshal_pinvoke, UploadStreamInfo_tF2CDB2AE79085BEC0562A27EEC0E29CFB75E4297_marshal_pinvoke_back, UploadStreamInfo_tF2CDB2AE79085BEC0562A27EEC0E29CFB75E4297_marshal_pinvoke_cleanup, NULL, NULL, &UploadStreamInfo_tF2CDB2AE79085BEC0562A27EEC0E29CFB75E4297_0_0_0 },
	{ NULL, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_0_0_0 },
	{ NULL, AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke, AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_back, AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_cleanup, NULL, NULL, &AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_0_0_0 },
	{ NULL, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_back, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_cleanup, NULL, NULL, &GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_0_0_0 },
	{ NULL, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_back, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_cleanup, NULL, NULL, &InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_0_0_0 },
	{ DelegatePInvokeWrapper_OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_0_0_0 },
	{ DelegatePInvokeWrapper_PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02, NULL, NULL, NULL, NULL, NULL, &PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02_0_0_0 },
	{ NULL, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_back, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_cleanup, NULL, NULL, &DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_0_0_0 },
	{ NULL, LoggingContextField_tAF65B7EBB2B40A0C0EA363CD0D2BD39CA7C2245E_marshal_pinvoke, LoggingContextField_tAF65B7EBB2B40A0C0EA363CD0D2BD39CA7C2245E_marshal_pinvoke_back, LoggingContextField_tAF65B7EBB2B40A0C0EA363CD0D2BD39CA7C2245E_marshal_pinvoke_cleanup, NULL, NULL, &LoggingContextField_tAF65B7EBB2B40A0C0EA363CD0D2BD39CA7C2245E_0_0_0 },
	{ NULL, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_back, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_0_0_0 },
	{ DelegatePInvokeWrapper_SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44, NULL, NULL, NULL, NULL, NULL, &SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44_0_0_0 },
	{ NULL, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_back, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_cleanup, NULL, NULL, &AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_0_0_0 },
	{ NULL, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_back, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_cleanup, NULL, NULL, &BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_0_0_0 },
	{ NULL, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_back, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_cleanup, NULL, NULL, &RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_0_0_0 },
	{ NULL, MIDIHDR_tB1F8DA26D819105B2046273A6C3DAF134A11D894_marshal_pinvoke, MIDIHDR_tB1F8DA26D819105B2046273A6C3DAF134A11D894_marshal_pinvoke_back, MIDIHDR_tB1F8DA26D819105B2046273A6C3DAF134A11D894_marshal_pinvoke_cleanup, NULL, NULL, &MIDIHDR_tB1F8DA26D819105B2046273A6C3DAF134A11D894_0_0_0 },
	{ DelegatePInvokeWrapper_MidiInCallback_t50EF6C6197ED0CABA2B63CC618EAAF9E8AA422F0, NULL, NULL, NULL, NULL, NULL, &MidiInCallback_t50EF6C6197ED0CABA2B63CC618EAAF9E8AA422F0_0_0_0 },
	{ DelegatePInvokeWrapper_MidiOutCallback_tAF171FDFBF3B4D4196C21AC0B923E631F0B3A8D2, NULL, NULL, NULL, NULL, NULL, &MidiOutCallback_tAF171FDFBF3B4D4196C21AC0B923E631F0B3A8D2_0_0_0 },
	{ NULL, MIXERCAPS_t05644243E2890024F370E4662B1AF37F34194F61_marshal_pinvoke, MIXERCAPS_t05644243E2890024F370E4662B1AF37F34194F61_marshal_pinvoke_back, MIXERCAPS_t05644243E2890024F370E4662B1AF37F34194F61_marshal_pinvoke_cleanup, NULL, NULL, &MIXERCAPS_t05644243E2890024F370E4662B1AF37F34194F61_0_0_0 },
	{ NULL, MIXERCONTROL_t3E702CB86A802BFCCD84171EF81AA6FBAD852D5E_marshal_pinvoke, MIXERCONTROL_t3E702CB86A802BFCCD84171EF81AA6FBAD852D5E_marshal_pinvoke_back, MIXERCONTROL_t3E702CB86A802BFCCD84171EF81AA6FBAD852D5E_marshal_pinvoke_cleanup, NULL, NULL, &MIXERCONTROL_t3E702CB86A802BFCCD84171EF81AA6FBAD852D5E_0_0_0 },
	{ NULL, MIXERCONTROLDETAILS_LISTTEXT_t0B6339EF268559CAFCF21956C342A3316FBA3B17_marshal_pinvoke, MIXERCONTROLDETAILS_LISTTEXT_t0B6339EF268559CAFCF21956C342A3316FBA3B17_marshal_pinvoke_back, MIXERCONTROLDETAILS_LISTTEXT_t0B6339EF268559CAFCF21956C342A3316FBA3B17_marshal_pinvoke_cleanup, NULL, NULL, &MIXERCONTROLDETAILS_LISTTEXT_t0B6339EF268559CAFCF21956C342A3316FBA3B17_0_0_0 },
	{ NULL, MIXERLINE_t625A211D6B8609D8248FA434D13B29DD881D9E1A_marshal_pinvoke, MIXERLINE_t625A211D6B8609D8248FA434D13B29DD881D9E1A_marshal_pinvoke_back, MIXERLINE_t625A211D6B8609D8248FA434D13B29DD881D9E1A_marshal_pinvoke_cleanup, NULL, NULL, &MIXERLINE_t625A211D6B8609D8248FA434D13B29DD881D9E1A_0_0_0 },
	{ NULL, PpmContext_t05279755DD2FD15EE06305E51B0D3F23756DA35A_marshal_pinvoke, PpmContext_t05279755DD2FD15EE06305E51B0D3F23756DA35A_marshal_pinvoke_back, PpmContext_t05279755DD2FD15EE06305E51B0D3F23756DA35A_marshal_pinvoke_cleanup, NULL, NULL, &PpmContext_t05279755DD2FD15EE06305E51B0D3F23756DA35A_0_0_0 },
	{ NULL, SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshal_pinvoke, SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshal_pinvoke_back, SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshal_pinvoke_cleanup, NULL, NULL, &SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_0_0_0 },
	{ DelegatePInvokeWrapper_ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C, NULL, NULL, NULL, NULL, NULL, &ShareResultCallback_tA6DC5AF6577B4BB8414F0FD30D7C03B77A476C5C_0_0_0 },
	{ NULL, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_back, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_cleanup, NULL, NULL, &FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_0_0_0 },
	{ DelegatePInvokeWrapper_InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3, NULL, NULL, NULL, NULL, NULL, &InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3_0_0_0 },
	{ NULL, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_back, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_0_0_0 },
	{ NULL, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_back, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_0_0_0 },
	{ NULL, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_pinvoke, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_pinvoke_back, MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshal_pinvoke_cleanup, NULL, NULL, &MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_0_0_0 },
	{ NULL, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_pinvoke, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_pinvoke_back, TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshal_pinvoke_cleanup, NULL, NULL, &TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_0_0_0 },
	{ DelegatePInvokeWrapper_ContactEventDelegate_t0C12A4C4BCCBB815C830E63B3AE93E420C0ADB32, NULL, NULL, NULL, NULL, NULL, &ContactEventDelegate_t0C12A4C4BCCBB815C830E63B3AE93E420C0ADB32_0_0_0 },
	{ DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_0_0_0 },
	{ DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_0_0_0 },
	{ NULL, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_back, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_cleanup, NULL, NULL, &PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_0_0_0 },
	{ DelegatePInvokeWrapper_ClearLogDelegate_tA09FCDE1BCA7B21E2C53CA5463EEC2BB2A587EDB, NULL, NULL, NULL, NULL, NULL, &ClearLogDelegate_tA09FCDE1BCA7B21E2C53CA5463EEC2BB2A587EDB_0_0_0 },
	{ DelegatePInvokeWrapper_LogMessageDelegate_tB7EBEDDF3DD3DDD6DBFCBC4475B4BC702CE23345, NULL, NULL, NULL, NULL, NULL, &LogMessageDelegate_tB7EBEDDF3DD3DDD6DBFCBC4475B4BC702CE23345_0_0_0 },
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C_0_0_0 },
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980_0_0_0 },
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC_0_0_0 },
	{ DelegatePInvokeWrapper_Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0_0_0_0 },
	{ DelegatePInvokeWrapper_Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A_0_0_0 },
	{ DelegatePInvokeWrapper_RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A_0_0_0 },
	{ NULL, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_back, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_cleanup, NULL, NULL, &CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_0_0_0 },
	{ NULL, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_back, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_0_0_0 },
	{ NULL, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_back, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_cleanup, NULL, NULL, &SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_0_0_0 },
	{ NULL, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_back, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_cleanup, NULL, NULL, &DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_0_0_0 },
	{ NULL, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_back, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_cleanup, NULL, NULL, &RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_0_0_0 },
	{ NULL, ReorderableListEventStruct_t68B0937EFFD16BA41C6FE4C378AA3FEE816EE2C0_marshal_pinvoke, ReorderableListEventStruct_t68B0937EFFD16BA41C6FE4C378AA3FEE816EE2C0_marshal_pinvoke_back, ReorderableListEventStruct_t68B0937EFFD16BA41C6FE4C378AA3FEE816EE2C0_marshal_pinvoke_cleanup, NULL, NULL, &ReorderableListEventStruct_t68B0937EFFD16BA41C6FE4C378AA3FEE816EE2C0_0_0_0 },
	{ DelegatePInvokeWrapper_Try_000006E8U24PostfixBurstDelegate_tA30F9C73EB615DF5E109DC3D5F7AAFE2941B331D, NULL, NULL, NULL, NULL, NULL, &Try_000006E8U24PostfixBurstDelegate_tA30F9C73EB615DF5E109DC3D5F7AAFE2941B331D_0_0_0 },
	{ NULL, IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_pinvoke, IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_pinvoke_back, IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_marshal_pinvoke_cleanup, NULL, NULL, &IndexInfo_t130EB73FEDB0A44572B2EAE47B93D8012DD4CAD8_0_0_0 },
	{ NULL, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_pinvoke, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_pinvoke_back, IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_marshal_pinvoke_cleanup, NULL, NULL, &IndexedColumn_tA7D07048558F90E3A50CD8558495ABDC1AA9F813_0_0_0 },
	{ DelegatePInvokeWrapper_TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1, NULL, NULL, NULL, NULL, NULL, &TimeExecutionHandler_t9D72C644BA49F80C9F8F861BB8C4D82F4659AEE1_0_0_0 },
	{ DelegatePInvokeWrapper_TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F, NULL, NULL, NULL, NULL, NULL, &TraceHandler_t6ECA6402D80AC2B4F22437E2509F5695B5270E0F_0_0_0 },
	{ DelegatePInvokeWrapper_PageSnapChange_t8666CF0A3DE35673182279738A45EF457F5FC4C9, NULL, NULL, NULL, NULL, NULL, &PageSnapChange_t8666CF0A3DE35673182279738A45EF457F5FC4C9_0_0_0 },
	{ DelegatePInvokeWrapper_HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046, NULL, NULL, NULL, NULL, NULL, &HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_0_0_0 },
	{ NULL, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_back, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_0_0_0 },
	{ NULL, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke_back, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke_cleanup, NULL, NULL, &SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_0_0_0 },
	{ NULL, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_back, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_cleanup, NULL, NULL, &Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_0_0_0 },
	{ NULL, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshal_pinvoke, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshal_pinvoke_back, CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshal_pinvoke_cleanup, NULL, NULL, &CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_0_0_0 },
	{ NULL, TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshal_pinvoke, TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshal_pinvoke_back, TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshal_pinvoke_cleanup, NULL, NULL, &TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_0_0_0 },
	{ NULL, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_back, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_cleanup, NULL, NULL, &ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_0_0_0 },
	{ NULL, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_back, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_cleanup, NULL, NULL, &PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_0_0_0 },
	{ NULL, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_back, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_cleanup, NULL, NULL, &ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_0_0_0 },
	{ NULL, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_back, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_cleanup, NULL, NULL, &Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_0_0_0 },
	{ NULL, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_back, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_cleanup, NULL, NULL, &ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_0_0_0 },
	{ NULL, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_back, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_cleanup, NULL, NULL, &ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_0_0_0 },
	{ NULL, Resources_t4AE7997B2F280AD6E14AA8EA7963A42A66A1648B_marshal_pinvoke, Resources_t4AE7997B2F280AD6E14AA8EA7963A42A66A1648B_marshal_pinvoke_back, Resources_t4AE7997B2F280AD6E14AA8EA7963A42A66A1648B_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t4AE7997B2F280AD6E14AA8EA7963A42A66A1648B_0_0_0 },
	{ DelegatePInvokeWrapper_OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530_0_0_0 },
	{ NULL, SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshal_pinvoke, SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshal_pinvoke_back, SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshal_pinvoke_cleanup, NULL, NULL, &SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_0_0_0 },
	{ NULL, TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshal_pinvoke, TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshal_pinvoke_back, TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshal_pinvoke_cleanup, NULL, NULL, &TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_0_0_0 },
	{ NULL, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_back, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_cleanup, NULL, NULL, &AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_0_0_0 },
	{ NULL, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_back, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_cleanup, NULL, NULL, &SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_0_0_0 },
	{ NULL, IconName_tBCA4C696FFEC8647D761120E0B5E5AF85E4ECB24_marshal_pinvoke, IconName_tBCA4C696FFEC8647D761120E0B5E5AF85E4ECB24_marshal_pinvoke_back, IconName_tBCA4C696FFEC8647D761120E0B5E5AF85E4ECB24_marshal_pinvoke_cleanup, NULL, NULL, &IconName_tBCA4C696FFEC8647D761120E0B5E5AF85E4ECB24_0_0_0 },
	{ NULL, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_back, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_0_0_0 },
	{ NULL, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_back, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_cleanup, NULL, NULL, &FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_0_0_0 },
	{ NULL, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_back, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_cleanup, NULL, NULL, &BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_0_0_0 },
	{ NULL, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshal_pinvoke, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshal_pinvoke_back, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshal_pinvoke_cleanup, NULL, NULL, &Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_0_0_0 },
	{ NULL, Meta_tCCCCDDA9D2E4CBAC052062C6FBE9029798702B47_marshal_pinvoke, Meta_tCCCCDDA9D2E4CBAC052062C6FBE9029798702B47_marshal_pinvoke_back, Meta_tCCCCDDA9D2E4CBAC052062C6FBE9029798702B47_marshal_pinvoke_cleanup, NULL, NULL, &Meta_tCCCCDDA9D2E4CBAC052062C6FBE9029798702B47_0_0_0 },
	{ NULL, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_back, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_cleanup, NULL, NULL, &TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_0_0_0 },
	{ NULL, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_back, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_0_0_0 },
	{ NULL, StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke, StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_back, StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_cleanup, NULL, NULL, &StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_0_0_0 },
	{ NULL, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_back, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_0_0_0 },
	{ NULL, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_back, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_0_0_0 },
	{ NULL, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke_back, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke_cleanup, NULL, NULL, &TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_0_0_0 },
	{ NULL, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_back, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_0_0_0 },
	{ NULL, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_back, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_cleanup, NULL, NULL, &ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_0_0_0 },
	{ NULL, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_back, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_cleanup, NULL, NULL, &Entry_tB8765CA56422E2C92887314844384843688DCB9F_0_0_0 },
	{ NULL, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_back, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_cleanup, NULL, NULL, &AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_0_0_0 },
	{ NULL, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_back, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_cleanup, NULL, NULL, &AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_0_0_0 },
	{ NULL, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_back, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_cleanup, NULL, NULL, &DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_0_0_0 },
	{ NULL, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_back, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_cleanup, NULL, NULL, &EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_0_0_0 },
	{ NULL, Comparison_t8926BD187CC7CEF468E3592AD18DFFB21C62C487_marshal_pinvoke, Comparison_t8926BD187CC7CEF468E3592AD18DFFB21C62C487_marshal_pinvoke_back, Comparison_t8926BD187CC7CEF468E3592AD18DFFB21C62C487_marshal_pinvoke_cleanup, NULL, NULL, &Comparison_t8926BD187CC7CEF468E3592AD18DFFB21C62C487_0_0_0 },
	{ NULL, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_back, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_cleanup, NULL, NULL, &DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_0_0_0 },
	{ NULL, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_back, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_0_0_0 },
	{ NULL, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke_back, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_0_0_0 },
	{ NULL, MonoScriptData_tBBC8FD8F40D716A1C8B4F9D883D3B121E356881C_marshal_pinvoke, MonoScriptData_tBBC8FD8F40D716A1C8B4F9D883D3B121E356881C_marshal_pinvoke_back, MonoScriptData_tBBC8FD8F40D716A1C8B4F9D883D3B121E356881C_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_tBBC8FD8F40D716A1C8B4F9D883D3B121E356881C_0_0_0 },
	{ NULL, MonoScriptData_t3D5A25DC08492EA2ADCEA359C2240CC0F481D91C_marshal_pinvoke, MonoScriptData_t3D5A25DC08492EA2ADCEA359C2240CC0F481D91C_marshal_pinvoke_back, MonoScriptData_t3D5A25DC08492EA2ADCEA359C2240CC0F481D91C_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t3D5A25DC08492EA2ADCEA359C2240CC0F481D91C_0_0_0 },
	{ NULL, MonoScriptData_t9FE40F8A50A6C374FD4C5CB3542BAD4F406CA0CB_marshal_pinvoke, MonoScriptData_t9FE40F8A50A6C374FD4C5CB3542BAD4F406CA0CB_marshal_pinvoke_back, MonoScriptData_t9FE40F8A50A6C374FD4C5CB3542BAD4F406CA0CB_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t9FE40F8A50A6C374FD4C5CB3542BAD4F406CA0CB_0_0_0 },
	{ NULL, MonoScriptData_t4F2AB24BC02A7052E6B9EED48D1A83B0A2F7F97F_marshal_pinvoke, MonoScriptData_t4F2AB24BC02A7052E6B9EED48D1A83B0A2F7F97F_marshal_pinvoke_back, MonoScriptData_t4F2AB24BC02A7052E6B9EED48D1A83B0A2F7F97F_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t4F2AB24BC02A7052E6B9EED48D1A83B0A2F7F97F_0_0_0 },
	{ NULL, MonoScriptData_t2513809E5905A2EC3232C9FCAE5A95B601B92AFF_marshal_pinvoke, MonoScriptData_t2513809E5905A2EC3232C9FCAE5A95B601B92AFF_marshal_pinvoke_back, MonoScriptData_t2513809E5905A2EC3232C9FCAE5A95B601B92AFF_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t2513809E5905A2EC3232C9FCAE5A95B601B92AFF_0_0_0 },
	{ NULL, MonoScriptData_t4D9701A8A24E14F65FEFA10A3020AE19F6207116_marshal_pinvoke, MonoScriptData_t4D9701A8A24E14F65FEFA10A3020AE19F6207116_marshal_pinvoke_back, MonoScriptData_t4D9701A8A24E14F65FEFA10A3020AE19F6207116_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t4D9701A8A24E14F65FEFA10A3020AE19F6207116_0_0_0 },
	{ NULL, MonoScriptData_tD1323384D598EA599822B1740DA713F0D50A1E2D_marshal_pinvoke, MonoScriptData_tD1323384D598EA599822B1740DA713F0D50A1E2D_marshal_pinvoke_back, MonoScriptData_tD1323384D598EA599822B1740DA713F0D50A1E2D_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_tD1323384D598EA599822B1740DA713F0D50A1E2D_0_0_0 },
	{ NULL, MonoScriptData_t7C1EFF89409588A65507FDF01648DD5646A1DA3E_marshal_pinvoke, MonoScriptData_t7C1EFF89409588A65507FDF01648DD5646A1DA3E_marshal_pinvoke_back, MonoScriptData_t7C1EFF89409588A65507FDF01648DD5646A1DA3E_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t7C1EFF89409588A65507FDF01648DD5646A1DA3E_0_0_0 },
	{ NULL, MonoScriptData_t587C66C8AF89A0540B6359696E328E4A89037F8C_marshal_pinvoke, MonoScriptData_t587C66C8AF89A0540B6359696E328E4A89037F8C_marshal_pinvoke_back, MonoScriptData_t587C66C8AF89A0540B6359696E328E4A89037F8C_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t587C66C8AF89A0540B6359696E328E4A89037F8C_0_0_0 },
	{ NULL, MonoScriptData_t27D1EFFFFDD5EF6B03B5BF989E710CA8FCF1931C_marshal_pinvoke, MonoScriptData_t27D1EFFFFDD5EF6B03B5BF989E710CA8FCF1931C_marshal_pinvoke_back, MonoScriptData_t27D1EFFFFDD5EF6B03B5BF989E710CA8FCF1931C_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_t27D1EFFFFDD5EF6B03B5BF989E710CA8FCF1931C_0_0_0 },
	{ NULL, MonoScriptData_tB059CCA3190E32B529A7BD00019BA695252B3F2D_marshal_pinvoke, MonoScriptData_tB059CCA3190E32B529A7BD00019BA695252B3F2D_marshal_pinvoke_back, MonoScriptData_tB059CCA3190E32B529A7BD00019BA695252B3F2D_marshal_pinvoke_cleanup, NULL, NULL, &MonoScriptData_tB059CCA3190E32B529A7BD00019BA695252B3F2D_0_0_0 },
	{ NULL, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_back, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_0_0_0 },
	{ NULL, unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke, unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_back, unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_0_0_0 },
	{ NULL, unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke, unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_back, unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09_0_0_0 },
	{ NULL, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_back, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_cleanup, NULL, NULL, &Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0 },
	{ NULL, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshal_pinvoke, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshal_pinvoke_back, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshal_pinvoke_cleanup, NULL, NULL, &AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_0_0_0 },
	{ NULL, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_back, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_cleanup, NULL, NULL, &SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_0_0_0 },
	{ NULL, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_back, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_cleanup, NULL, NULL, &SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_0_0_0 },
	{ NULL, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_back, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_cleanup, NULL, NULL, &UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_0_0_0 },
	{ NULL, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshal_pinvoke, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshal_pinvoke_back, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshal_pinvoke_cleanup, NULL, NULL, &UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_0_0_0 },
	{ NULL, VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke, VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_back, VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_cleanup, NULL, NULL, &VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_0_0_0 },
	{ NULL, VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke, VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke_back, VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshal_pinvoke_cleanup, NULL, NULL, &VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_0_0_0 },
	{ NULL, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_back, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_cleanup, NULL, NULL, &VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_0_0_0 },
	{ DelegatePInvokeWrapper_WaveCallback_t1899C3EA361805229F7571CBEE20BDF8A45DC9B1, NULL, NULL, NULL, NULL, NULL, &WaveCallback_t1899C3EA361805229F7571CBEE20BDF8A45DC9B1_0_0_0 },
	{ NULL, Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke, Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke_back, Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke_cleanup, NULL, NULL, &Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_0_0_0 },
	{ NULL, XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshal_pinvoke, XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshal_pinvoke_back, XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshal_pinvoke_cleanup, NULL, NULL, &XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_0_0_0 },
	{ NULL, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_back, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_cleanup, NULL, NULL, &SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_0_0_0 },
	{ NULL, NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke, NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke_back, NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke_cleanup, NULL, NULL, &NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_0_0_0 },
	{ NULL, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_pinvoke, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_pinvoke_back, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshal_pinvoke_cleanup, NULL, NULL, &VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_0_0_0 },
	{ DelegatePInvokeWrapper_HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA, NULL, NULL, NULL, NULL, NULL, &HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA_0_0_0 },
	{ NULL, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshal_pinvoke, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshal_pinvoke_back, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshal_pinvoke_cleanup, NULL, NULL, &XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_0_0_0 },
	{ NULL, AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshal_pinvoke, AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshal_pinvoke_back, AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshal_pinvoke_cleanup, NULL, NULL, &AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_0_0_0 },
	{ NULL, ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshal_pinvoke, ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshal_pinvoke_back, ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshal_pinvoke_cleanup, NULL, NULL, &ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_0_0_0 },
	{ NULL, QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshal_pinvoke, QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshal_pinvoke_back, QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshal_pinvoke_cleanup, NULL, NULL, &QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_0_0_0 },
	{ NULL, SymbolTables_tBFFFF1A52BAAB8C6D52F8B28AB963DC625ECB177_marshal_pinvoke, SymbolTables_tBFFFF1A52BAAB8C6D52F8B28AB963DC625ECB177_marshal_pinvoke_back, SymbolTables_tBFFFF1A52BAAB8C6D52F8B28AB963DC625ECB177_marshal_pinvoke_cleanup, NULL, NULL, &SymbolTables_tBFFFF1A52BAAB8C6D52F8B28AB963DC625ECB177_0_0_0 },
	{ NULL, ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke, ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke_back, ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke_cleanup, NULL, NULL, &ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_0_0_0 },
	{ NULL, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_back, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_cleanup, NULL, NULL, &Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_0_0_0 },
	{ NULL, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_back, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_cleanup, NULL, NULL, &TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_0_0_0 },
	{ NULL, AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshal_pinvoke, AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshal_pinvoke_back, AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshal_pinvoke_cleanup, NULL, NULL, &AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_0_0_0 },
	{ NULL, ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshal_pinvoke, ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshal_pinvoke_back, ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshal_pinvoke_cleanup, NULL, NULL, &ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_0_0_0 },
	{ NULL, Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshal_pinvoke, Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshal_pinvoke_back, Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshal_pinvoke_cleanup, NULL, NULL, &Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_0_0_0 },
	{ NULL, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_back, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_cleanup, NULL, NULL, &Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_0_0_0 },
	{ DelegatePInvokeWrapper_Hash128Long_00000726U24PostfixBurstDelegate_tDCFEBF017B234053E20733EE5D672798D4729FFD, NULL, NULL, NULL, NULL, NULL, &Hash128Long_00000726U24PostfixBurstDelegate_tDCFEBF017B234053E20733EE5D672798D4729FFD_0_0_0 },
	{ DelegatePInvokeWrapper_Hash64Long_0000071FU24PostfixBurstDelegate_tAFFFD862200972D45B81F5803E2F182B4AC91DAA, NULL, NULL, NULL, NULL, NULL, &Hash64Long_0000071FU24PostfixBurstDelegate_tAFFFD862200972D45B81F5803E2F182B4AC91DAA_0_0_0 },
	{ DelegatePInvokeWrapper_Try_0000098EU24PostfixBurstDelegate_tD75442236C1C50A7FC708F09AA8022D1407BB102, NULL, NULL, NULL, NULL, NULL, &Try_0000098EU24PostfixBurstDelegate_tD75442236C1C50A7FC708F09AA8022D1407BB102_0_0_0 },
	{ DelegatePInvokeWrapper_Try_00000980U24PostfixBurstDelegate_tB323B9595B050940232579C962823E084FF96338, NULL, NULL, NULL, NULL, NULL, &Try_00000980U24PostfixBurstDelegate_tB323B9595B050940232579C962823E084FF96338_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOInit_t19DEED3FDD7A8C4755F496D4D981C21CA14D6EC8, NULL, NULL, NULL, NULL, NULL, &ASIOInit_t19DEED3FDD7A8C4755F496D4D981C21CA14D6EC8_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOcanSampleRate_t21D1E4247254C359F241D10C18C7FF0DE54DE7D7, NULL, NULL, NULL, NULL, NULL, &ASIOcanSampleRate_t21D1E4247254C359F241D10C18C7FF0DE54DE7D7_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOcontrolPanel_t9899B91E08D28520E3001BD7FC720175C6F11583, NULL, NULL, NULL, NULL, NULL, &ASIOcontrolPanel_t9899B91E08D28520E3001BD7FC720175C6F11583_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOcreateBuffers_t03A43846C2964A10D7E6B2366740DEBF4A5CD500, NULL, NULL, NULL, NULL, NULL, &ASIOcreateBuffers_t03A43846C2964A10D7E6B2366740DEBF4A5CD500_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOdisposeBuffers_tE2615FD1025C68603CB92F152300175C2DB2F5C6, NULL, NULL, NULL, NULL, NULL, &ASIOdisposeBuffers_tE2615FD1025C68603CB92F152300175C2DB2F5C6_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOfuture_t4EF9368AF82036C3D4931A2A5E8D343BADC5256B, NULL, NULL, NULL, NULL, NULL, &ASIOfuture_t4EF9368AF82036C3D4931A2A5E8D343BADC5256B_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetBufferSize_t136A7544D886EF729346C5CE18EF9CFECA389310, NULL, NULL, NULL, NULL, NULL, &ASIOgetBufferSize_t136A7544D886EF729346C5CE18EF9CFECA389310_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetChannelInfo_tF5B3ED2BC7D80F817A6784CA9CCD98F598ECE25E, NULL, NULL, NULL, NULL, NULL, &ASIOgetChannelInfo_tF5B3ED2BC7D80F817A6784CA9CCD98F598ECE25E_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetChannels_t943685D74017C0F57144BE66509AB2B3D73B8FAD, NULL, NULL, NULL, NULL, NULL, &ASIOgetChannels_t943685D74017C0F57144BE66509AB2B3D73B8FAD_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetClockSources_t2F0DB47647C1E0821E8FD5D6574AC6CBC3A538A8, NULL, NULL, NULL, NULL, NULL, &ASIOgetClockSources_t2F0DB47647C1E0821E8FD5D6574AC6CBC3A538A8_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetDriverName_tCC2F74395C1ED60929D18D814DE3179E77DB08B6, NULL, NULL, NULL, NULL, NULL, &ASIOgetDriverName_tCC2F74395C1ED60929D18D814DE3179E77DB08B6_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetDriverVersion_t205BEE4ADE4CD6A2E046F680FBAAE1A07FE84AC9, NULL, NULL, NULL, NULL, NULL, &ASIOgetDriverVersion_t205BEE4ADE4CD6A2E046F680FBAAE1A07FE84AC9_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetErrorMessage_tD2276FF34BDD585DFAE0EFAB159101CA180D4329, NULL, NULL, NULL, NULL, NULL, &ASIOgetErrorMessage_tD2276FF34BDD585DFAE0EFAB159101CA180D4329_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetLatencies_t5D93BE805DC10554D2A013256E7E4FF48A4F7A81, NULL, NULL, NULL, NULL, NULL, &ASIOgetLatencies_t5D93BE805DC10554D2A013256E7E4FF48A4F7A81_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetSamplePosition_t634828F8CA534853A6923CF82EB50795F2C948FF, NULL, NULL, NULL, NULL, NULL, &ASIOgetSamplePosition_t634828F8CA534853A6923CF82EB50795F2C948FF_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOgetSampleRate_t9CBA6B18ADC51CB0A5FA31A5B5F14E4E96BB26CF, NULL, NULL, NULL, NULL, NULL, &ASIOgetSampleRate_t9CBA6B18ADC51CB0A5FA31A5B5F14E4E96BB26CF_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOoutputReady_t7E03F56A46BEB5A001B1A4B481BFEB5DAA0A611A, NULL, NULL, NULL, NULL, NULL, &ASIOoutputReady_t7E03F56A46BEB5A001B1A4B481BFEB5DAA0A611A_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOsetClockSource_t56DD29D333CF6569C0BCC5B87C172763C019F11F, NULL, NULL, NULL, NULL, NULL, &ASIOsetClockSource_t56DD29D333CF6569C0BCC5B87C172763C019F11F_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOsetSampleRate_t2BABCE8C7BBCE5962F4DDEABD5EB1543568D7A86, NULL, NULL, NULL, NULL, NULL, &ASIOsetSampleRate_t2BABCE8C7BBCE5962F4DDEABD5EB1543568D7A86_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOstart_tB4210299CB98EB60BEF82086C67BB50A0EAD7270, NULL, NULL, NULL, NULL, NULL, &ASIOstart_tB4210299CB98EB60BEF82086C67BB50A0EAD7270_0_0_0 },
	{ DelegatePInvokeWrapper_ASIOstop_tC4A297C39899E989A0DF5C053FD2E397359D7FB5, NULL, NULL, NULL, NULL, NULL, &ASIOstop_tC4A297C39899E989A0DF5C053FD2E397359D7FB5_0_0_0 },
	{ NULL, AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke, AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke_back, AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke_cleanup, NULL, NULL, &AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_0_0_0 },
	{ DelegatePInvokeWrapper_IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C, NULL, NULL, NULL, NULL, NULL, &IsBurstEnabledDelegate_t0628E97FE590352373ABA022E954D7F5CE183D3C_0_0_0 },
	{ NULL, ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_pinvoke, ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_pinvoke_back, ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_marshal_pinvoke_cleanup, NULL, NULL, &ReleaseSlot_t83113301FBDD92C0D2BA5DD347A8CE8D0ACFC308_0_0_0 },
	{ DelegatePInvokeWrapper_WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4_0_0_0 },
	{ NULL, Decoder2_t34D054C2FFAC9BCEB4A8CB54CD188880A69983D9_marshal_pinvoke, Decoder2_t34D054C2FFAC9BCEB4A8CB54CD188880A69983D9_marshal_pinvoke_back, Decoder2_t34D054C2FFAC9BCEB4A8CB54CD188880A69983D9_marshal_pinvoke_cleanup, NULL, NULL, &Decoder2_t34D054C2FFAC9BCEB4A8CB54CD188880A69983D9_0_0_0 },
	{ NULL, Encoder2_t4174E50F10BB54D676C9635D2EABA78453675479_marshal_pinvoke, Encoder2_t4174E50F10BB54D676C9635D2EABA78453675479_marshal_pinvoke_back, Encoder2_t4174E50F10BB54D676C9635D2EABA78453675479_marshal_pinvoke_cleanup, NULL, NULL, &Encoder2_t4174E50F10BB54D676C9635D2EABA78453675479_0_0_0 },
	{ NULL, Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshal_pinvoke, Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshal_pinvoke_back, Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshal_pinvoke_cleanup, NULL, NULL, &Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_0_0_0 },
	{ NULL, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_back, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_0_0_0 },
	{ NULL, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_back, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_cleanup, NULL, NULL, &InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_0_0_0 },
	{ NULL, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshal_pinvoke, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshal_pinvoke_back, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshal_pinvoke_cleanup, NULL, NULL, &ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_0_0_0 },
	{ NULL, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_back, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_cleanup, NULL, NULL, &DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_0_0_0 },
	{ NULL, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_back, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_cleanup, NULL, NULL, &DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72, NULL, NULL, NULL, NULL, NULL, &unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209, NULL, NULL, NULL, NULL, NULL, &unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569, NULL, NULL, NULL, NULL, NULL, &unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749, NULL, NULL, NULL, NULL, NULL, &unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809_0_0_0 },
	{ DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D_0_0_0 },
};
