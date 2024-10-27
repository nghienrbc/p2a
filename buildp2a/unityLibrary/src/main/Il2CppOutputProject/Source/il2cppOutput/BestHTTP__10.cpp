﻿#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct BigIntegerU5BU5D_t062FA002B67620C38D4B8ABE97BB0944C9D08012;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67;
struct ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE;
struct PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62;
struct AbstractECLookupTable_t873C56E93CF2B01E40354D7D89763F06E260C83D;
struct AbstractF2mCurve_t41DF92FE5EE15F993C108D74C20B2BE8DBADC122;
struct AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C;
struct ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB;
struct ECEndomorphism_t6B4D3815F37454A99866FED0C08B6A2DDC543B71;
struct ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D;
struct ECMultiplier_tF42F2485D618A2ACA7BFFE0E9F60A9D8449F2C2F;
struct ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B;
struct ECPointBase_t17074B013BAE9B2675640B419284E4C76AC61324;
struct Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA;
struct Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869;
struct F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783;
struct IFiniteField_t29D6CD2EA99DBC82C2DD6FE03D689A9AD74629D9;
struct IRandomGenerator_tFCD59F2C036B8BBCED979611AD40A53569CB1D92;
struct IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScaleXNegateYPointMap_tCC989B085454BD686A752FEE04AA82DBE935C11C;
struct ScaleXPointMap_tEE03996A7817142C6D2B9FDD52F0FB6FD2507915;
struct ScaleYNegateXPointMap_tE880C8E49E150782A1708C4FD32C7B9A7B05EABC;
struct ScaleYPointMap_t1728406478CF6D7D868BA947B900B1C68FF8941A;
struct SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6;
struct Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F;
struct ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1;
struct SimpleLookupTable_t51ABDF88D6F688DA634C89F172744983F8AA41F7;
struct String_t;
struct StringBuilder_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct X25519_t973DB8A66DD54B41EB94C83A625D5CF2012310BF;
struct PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90;
struct PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4;
struct PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC;
struct PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711;
struct PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153;

IL2CPP_EXTERN_C RuntimeClass* AbstractF2mCurve_t41DF92FE5EE15F993C108D74C20B2BE8DBADC122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____037BE04C4468BC2A186CC905D1F673CDFAAC254CEBEB545465B53F83A97830C5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____0AEC099C87E7062A57D1C79734EDDD28A07A1684746EE8640132BB252E6BF5A1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____120918433B634757ADE589703127976B7C5C2009E8DB37632123F45FA2B87F2E_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____14A5D850C255623F9472E3C650ABCE0C78D32F0276B315B3A276A0462D97A1AC_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____16599A4F9A12ECCBFC361B547840304B9E48CBC431F387243C6859C475427D16_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____5BBB9265FCB4E834C68440328645B1A187F68D3275881FC46B21564B11326DA5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____6965AC9D48CA477E9A17658D33A217051648138AD7024514DE014D8001B533C3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____8271B98A74E2ED3AC4E690289279C25841A5617BE3D992BED6CB7486F95060D9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____84EBACB335F7FB2D4C6AF94256B2DD565EFFE552C9A1CB725C5B5C338914412D_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____97CAAC7D5BE7722352C1AB556BFE01D3F3CCA0F50B5A648195D6415006620C8F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____BABB01CD1E2AD140F7D2AF35515DA38E8936F0BA0298BCF0245EB5692A3F69CC_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____BD6174A7C16E1AF07272966A9C071C8A3CF16B2726C50D672A09F60636B08901_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____CB6DED39AE0C25F0748B553A13DCA00F6B77780B9F34B0B0F4C56BB7BF768C82_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____D6380FB2FF2DD88C9290D88B81E78BCA13AAAB4BE827B103062AFBB1085B0793_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____E0750D3E8FE41BBC5838F6D34CF434A4C764652CDC4BDC7DE6CE8393DE3C53A8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____E3B4E767F318263A8E7A64E1D61F6D3368A3B59AF34CBB94E657E7FCC58F5BA5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____ECA151F23D399F9FE976255B143D0691D0BE043E033B0E2814C0A547336D6545_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C66C28F7FDCA963B2D63D24B45E634FB4A0CF;
IL2CPP_EXTERN_C String_t* _stringLiteral1E6B7FA82041970D08C796C34F442A8C5D030234;
IL2CPP_EXTERN_C String_t* _stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C;
IL2CPP_EXTERN_C String_t* _stringLiteral3593CC227878D86540F00CB22358EB80C1BFDA6A;
IL2CPP_EXTERN_C String_t* _stringLiteral68046411EB3F8D5C85DFE2A7CA6F3DA4843773F1;
IL2CPP_EXTERN_C String_t* _stringLiteral777C88FC8E1B713E59061089D6CFB18EB75A109E;
IL2CPP_EXTERN_C String_t* _stringLiteral88FDE4E981039D470D95B3A195A7183361D9E468;
IL2CPP_EXTERN_C String_t* _stringLiteralCA6E8DE812C20B70B9E93F176F4D555488AD06AC;
IL2CPP_EXTERN_C String_t* _stringLiteralF25DFE14753005E858F66583A1F6CC7A6AE3FCAC;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractF2mPoint_SatisfiesCurveEquation_m89B422FE5237903D028D5C0818F66B63AFFF28AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractF2mPoint_TauPow_m7A69615275BF9240BB7754148706EED004CA6BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractF2mPoint_Tau_mB81C779FE0B9DF861DF538AD568FF3B7230E08FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ImplSign_m35EC9ABCB0EB2528FDD835161E91B7E9191ADE44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ImplSign_mFF6B13D7BE906B804D3DDF67565962C9B4B3DE9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ImplVerify_mA82B8EB33409E19CDD41CD04EFFFD9FF0D5A5ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ScalarMultBaseEncoded_m7F598FF9DE99D7AE191001ADF081F55E420C36CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ScalarMultBaseYZ_mCB20D6348175818B8AF53F7FEE65F40A780A5ADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_SignPrehash_m4B9B428C5CDAED0B6F32202D55918DB319A1E8C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_SignPrehash_mFFFF51826E8840426442A85A388FAC9DF167D101_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_VerifyPrehash_m012DD42C0FE8800932861998072B952FBE9980CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ImplSign_mD0DDC0485DD4127334E73C104E76679E00EC18B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ImplSign_mE5CDBF1FE5A0F85D743F88EBE87EFA23F6B28F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ImplVerify_m9E1CB9694FF1E78E589F89C01C469DDE7B75CE05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ScalarMultBaseEncoded_mAE0BBF97D951710981883634BFE1933B67909095_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ScalarMultBaseXY_mBCC40FAD1D7B1F754EBBDEF03404FB4037AFF478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_SignPrehash_m1D7562CA1FE4CC0183B1087819EAF4D74D6AC19D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_SignPrehash_m7D98D6375A8BD05CA3A41A59C8BD856B12265035_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_VerifyPrehash_m307FDCB6ED2A4FC45B9C4F11B1C6D7A46CB1DA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* F2mPoint_Add_m223E4A4C9A9CAB5126FBD16CB8B39465421D30E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* F2mPoint_Negate_m84971083369143B0A70ADE69971AC1DB0E47E1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* F2mPoint_Twice_m2A0715B81910BCF3B623B05850802CB68FEAA2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LongArray_ModInverse_m41CF02E79B2DAEB4EE0652DD35248973E9056BC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LongArray__ctor_mC81A10147DA3ED7E8EAC71131BBA8CF824D8352B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleLookupTable_Lookup_mD4E63A281211211768C31006215A670870682372_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67;
struct ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE;
struct PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct AbstractECLookupTable_t873C56E93CF2B01E40354D7D89763F06E260C83D  : public RuntimeObject
{
};
struct BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___magnitude;
	int32_t ___sign;
	int32_t ___nBits;
	int32_t ___nBitLength;
	int32_t ___mQuote;
};
struct ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB  : public RuntimeObject
{
	RuntimeObject* ___m_field;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___m_a;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___m_b;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___m_order;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___m_cofactor;
	int32_t ___m_coord;
	RuntimeObject* ___m_endomorphism;
	RuntimeObject* ___m_multiplier;
};
struct ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D  : public RuntimeObject
{
};
struct ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B  : public RuntimeObject
{
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___m_curve;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___m_x;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___m_y;
	ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ___m_zs;
	bool ___m_withCompression;
	RuntimeObject* ___m_preCompTable;
};
struct Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA  : public RuntimeObject
{
};
struct Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869  : public RuntimeObject
{
};
struct KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D  : public RuntimeObject
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataQueue;
	int32_t ___rate;
	int32_t ___bitsInQueue;
	int32_t ___fixedOutputLength;
	bool ___squeezing;
};
struct LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371  : public RuntimeObject
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___m_ints;
};
struct LongDigest_tA357972A044812353537647F06ACA9A88542B543  : public RuntimeObject
{
	int32_t ___MyByteLength;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf;
	int32_t ___xBufOff;
	int64_t ___byteCount1;
	int64_t ___byteCount2;
	uint64_t ___H1;
	uint64_t ___H2;
	uint64_t ___H3;
	uint64_t ___H4;
	uint64_t ___H5;
	uint64_t ___H6;
	uint64_t ___H7;
	uint64_t ___H8;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___W;
	int32_t ___wOff;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct ScaleXNegateYPointMap_tCC989B085454BD686A752FEE04AA82DBE935C11C  : public RuntimeObject
{
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___scale;
};
struct ScaleXPointMap_tEE03996A7817142C6D2B9FDD52F0FB6FD2507915  : public RuntimeObject
{
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___scale;
};
struct ScaleYNegateXPointMap_tE880C8E49E150782A1708C4FD32C7B9A7B05EABC  : public RuntimeObject
{
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___scale;
};
struct ScaleYPointMap_t1728406478CF6D7D868BA947B900B1C68FF8941A  : public RuntimeObject
{
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___scale;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
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
struct X25519_t973DB8A66DD54B41EB94C83A625D5CF2012310BF  : public RuntimeObject
{
};
struct PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___u;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v;
};
struct PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___t;
};
struct PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ypx_h;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ymx_h;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___xyd;
};
struct PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z;
};
struct PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y;
};
struct AbstractF2mCurve_t41DF92FE5EE15F993C108D74C20B2BE8DBADC122  : public ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB
{
	BigIntegerU5BU5D_t062FA002B67620C38D4B8ABE97BB0944C9D08012* ___si;
};
struct AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202  : public ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct ECPointBase_t17074B013BAE9B2675640B419284E4C76AC61324  : public ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	RuntimeObject* ___generator;
};
struct Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F  : public LongDigest_tA357972A044812353537647F06ACA9A88542B543
{
};
struct ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1  : public KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D
{
};
struct SimpleLookupTable_t51ABDF88D6F688DA634C89F172744983F8AA41F7  : public AbstractECLookupTable_t873C56E93CF2B01E40354D7D89763F06E260C83D
{
	ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* ___points;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC  : public ECPointBase_t17074B013BAE9B2675640B419284E4C76AC61324
{
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
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3  : public AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_StaticFields
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___primeLists;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ZeroMagnitude;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZeroEncoding;
	BigIntegerU5BU5D_t062FA002B67620C38D4B8ABE97BB0944C9D08012* ___SMALL_CONSTANTS;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Zero;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___One;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Two;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Three;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Four;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___Ten;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitLengthTable;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix2;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix2E;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix8;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix8E;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix10;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix10E;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix16;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___radix16E;
	SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___RandomSource;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExpWindowThresholds;
};
struct ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B_StaticFields
{
	ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ___EMPTY_ZS;
};
struct Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields
{
	int32_t ___PrehashSize;
	int32_t ___PublicKeySize;
	int32_t ___SecretKeySize;
	int32_t ___SignatureSize;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Dom2Prefix;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___L;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___B_x;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___B_y;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___C_d;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___C_d2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___C_d4;
	RuntimeObject* ___precompLock;
	PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* ___precompBaseTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___precompBase;
};
struct Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields
{
	int32_t ___PrehashSize;
	int32_t ___PublicKeySize;
	int32_t ___SecretKeySize;
	int32_t ___SignatureSize;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Dom4Prefix;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___L;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___N;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B_x;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B_y;
	RuntimeObject* ___precompLock;
	PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* ___precompBaseTable;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___precompBase;
};
struct LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields
{
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___INTERLEAVE2_TABLE;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___INTERLEAVE3_TABLE;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___INTERLEAVE4_TABLE;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___INTERLEAVE5_TABLE;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___INTERLEAVE7_TABLE;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitLengths;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6_StaticFields
{
	int64_t ___counter;
	SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___master;
	double ___DoubleScale;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67  : public RuntimeArray
{
	ALIGN_FIELD (8) ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* m_Items[1];

	inline ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7  : public RuntimeArray
{
	ALIGN_FIELD (8) LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* m_Items[1];

	inline LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0  : public RuntimeArray
{
	ALIGN_FIELD (8) ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* m_Items[1];

	inline ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE  : public RuntimeArray
{
	ALIGN_FIELD (8) PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* m_Items[1];

	inline PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62  : public RuntimeArray
{
	ALIGN_FIELD (8) PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* m_Items[1];

	inline PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECPointBase__ctor_mB9A74A65B8C4C262A78E0F4428A9468D89A15D91 (ECPointBase_t17074B013BAE9B2675640B419284E4C76AC61324* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, bool ___3_withCompression, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECPointBase__ctor_m727F5A01CF2CC1D1547DDB4DBBA412AFCA738242 (ECPointBase_t17074B013BAE9B2675640B419284E4C76AC61324* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ___3_zs, bool ___4_withCompression, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* BigInteger_ValueOf_mB81932152108071C2E56A3F7C5F8C86DFF0F9190 (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* AbstractF2mCurve_SolveQuadraticEquation_m7F6B2ADC8591C05B3EB46C67D790B7CD5F4D5DE9 (AbstractF2mCurve_t41DF92FE5EE15F993C108D74C20B2BE8DBADC122* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_beta, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECPoint_SatisfiesOrder_m36473A099403349947225AF92102FB9AF90B791B (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECPoint_ScaleX_m0AEF61C49866BAF51B2911570E2239A247123DAC (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECPoint_ScaleY_m0876D8AA20A3D168CBD70AEAC0DADCD9CF576702 (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, bool ___3_withCompression, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractF2mPoint__ctor_m8DFF49D9D79FF3EA7040E3F7EC21BF1ECEA04420 (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, bool ___3_withCompression, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F2mFieldElement_CheckFieldElements_m2C5805DE53425986CE4CE5DF09009E841BCA0EFC (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_a, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractF2mPoint__ctor_m5BC05DF390807EFDDA615EA7933B77890A60E5E2 (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ___3_zs, bool ___4_withCompression, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F2mPoint__ctor_mA435032C7FF85779D8E5D3E3C76EC5F764CED891 (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ___3_zs, bool ___4_withCompression, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigInteger_get_SignValue_mD9C3B0BA0C5D51C139AF2380358D608DB4CFC16F_inline (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArray_m0AFDACCF318C38414DFCCB8D39E4D315D4786EB6 (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_GetUsedLengthFrom_m248487B97254F1143A99F6526662F9632347C8E7 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_BitLength_m971618DE3064B03F3740D20C35A36C1D26A75674 (int64_t ___0_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m0B6CA364FFF812FBB9B6B0BA5A9D0F81BFBF03B8 (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, int32_t ___0_sign, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray__ctor_m914C2DF2A284EF630BB601B3BAC5ABAF9E6D9A95 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_ints, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* LongArray_ResizedInts_mD6DD72727605F36244279C5AAE5376FA95ED0A1C (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_newLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Add_mA22F4B9350C62C048FADA6EAB3E2FACB3415F0D0 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_AddShiftedUp_m0A82F2D09B3E250D94F2E28FE2F5BA5383985852 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, int32_t ___4_count, int32_t ___5_shift, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_MultiplyWord_m23AE4F927EC71B9429166472591DBB6053A8D609 (int64_t ___0_a, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___1_b, int32_t ___2_bLen, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___3_c, int32_t ___4_cOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_ReduceResult_m145A2F0CA986BDCC0394373AE8B14A57329CDB30 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_len, int32_t ___3_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_ShiftUp_m788A13BD4E62BC3116844270972447123DF08842 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, int32_t ___5_shift, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Add_m32A09FFDAC6C880C0BF93E385CE861DFF1BD2B50 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___4_z, int32_t ___5_zOff, int32_t ___6_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_AddBoth_m2CCED6020CA0ECC4EF064B94696AD05BDE7B8F0E (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y1, int32_t ___3_y1Off, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___4_y2, int32_t ___5_y2Off, int32_t ___6_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_ShiftUp_mFE67A87C416AA4B0CEF925B8A7EAD3D3C38AA47C (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, int32_t ___2_count, int32_t ___3_shift, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave_mCCAF20A81AD18157B09D44C69E7618BAED0B629D (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, int32_t ___5_width, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Distribute_m8B23B2204B81549753274170674C2A6CE16121C9 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_src, int32_t ___2_dst1, int32_t ___3_dst2, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* Arrays_Clone_m820D1ADCAC2C03FA8C0A778E19658070CD6266EE (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_ReduceInPlace_mAAD80246AC038B69E7585EAAA4131420D16FE70A (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_len, int32_t ___3_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray__ctor_m53A57034A0095AEF5BAF7BB9A7836BE5F440A708 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_ints, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceVectorWise_mEEAB67D223DF855CB60364FC0513E438F98973CE (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_len, int32_t ___3_words, int32_t ___4_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceWordWise_m5468E3D76D82C376C97CD34FFBB73F3AA1695910 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_len, int32_t ___3_toBit, int32_t ___4_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceBitWise_m3D4C66E635866902F433C3E0E1AA59B11982A0E4 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_BitLength, int32_t ___3_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongArray_TestBit_m0F30BBA8A64ADB1AA297E44A735E87607C72CDF2 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceBit_mD848A59D6972A965E84402A62A2A915E2F37A561 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_bit, int32_t ___3_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_FlipBit_mCAFFA1C939EE92C46B07C7A437C92C7320FC0237 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceWord_m084BBA03CD24B77B50B7CB7F3B64DCDAE57B49DD (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_bit, int64_t ___3_word, int32_t ___4_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_FlipWord_m0BCF22EAA82AD715A9BFF44C9F41EC3DD32ACED4 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_bit, int64_t ___3_word, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_FlipVector_mB93C537C7CA0546A142AADAEF94E6A7C1DD5BD50 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, int32_t ___4_yLen, int32_t ___5_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_AddShiftedDown_mFD9588E7C0282E9E3E4FD388BE8012EF5CDC18DE (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, int32_t ___4_count, int32_t ___5_shift, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_SquareInPlace_mFC2B8A84F36E7B9F6A1CB081679B6DED074693C1 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xLen, int32_t ___2_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave3_m01DF3000FF180D63BCC739E7EB7D6C44EC5C9A6B (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave5_mAA4A57459B82DBC9878DF1E411E2F2B5A6223DCA (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave7_m7C215B4594143887903D7B50A79E3C61A2AAA83B (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave2_n_m528E11FF5E7EC4A5E71F73F147CE01B17D4D0651 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, int32_t ___5_rounds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave3_m780427CA06AC20F1030298B34E58480A93C0E76C (int64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave3_21to63_m69AB9F85C1D63243CF810FFAFD96C0072AC5C9F8 (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave5_mBC8B0DE9A582C1D9EDF830FCA8172DC72221B950 (int64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave3_13to65_mB95305F8F1BF4CAF92019CA9AA0BCC51CAD07F8E (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave7_m80E3EA4D33171B3536CA7DD9B87CAE8CB275CB70 (int64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave2_n_m6F367448A6CA6CD9E2E01A03324E66E7A54BC2AF (int64_t ___0_x, int32_t ___1_rounds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave4_16to64_m9948A5C96CF691A1E9D3C54005EF8D598678395D (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_Copy_mF4784B92880D2BEE1C146B2C748EB41A18F8C82D (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray__ctor_m8220A7557B936629D6A4635A891ADB7F39C53C46 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_intLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_AddShiftedByBitsSafe_m0A1E2A44788CAE6CA757FF594E19C650C7E670EF (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* ___0_other, int32_t ___1_otherDegree, int32_t ___2_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_DegreeFrom_m5A37606E5950D75AE8BFFEBFAE41C8AA7F2AC224 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_limit, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mD50A87BAAF57E646B5A7B8AE989EC2A6B8DC1057 (int64_t ___0_value, int32_t ___1_toBase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractECLookupTable__ctor_m7863036F0E98154C16B1A2FB4A82870877228757 (AbstractECLookupTable_t873C56E93CF2B01E40354D7D89763F06E260C83D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* SimpleLookupTable_Copy_mB78DB86953A6404776EFDED96B9DBC4AB4A30B01 (ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* ___0_points, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_DecodeScalar_mC591CB69A5FDB304E26277927C6A1A5CB1DAEBBE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulAddTo_m4EB131DD93D2FFCB2380F0C0427994014B0A3248 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode32_mE006CA7C69426C2798B88A4B9CC6A59DC0BD82A5 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_ReduceScalar_mAE6C41ADB2B1B095A8DA98B7364D394E4AB7776F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sub_m8AEBB58A47C4DBC60E3BA0EB57848AC3F07E6E0F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_AddOne_mCC3ED2831D975EE7B9F9317EABE7A6CC5A384B39 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X25519Field_IsZero_m3FF1DD4E75DBD2F4F9768D0B465E3DD00F1F5883 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Decode32_m5AAC6E103E67EAC5584460CBC2A3CE415F2AE89C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_bsOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, int32_t ___3_nOff, int32_t ___4_nLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Gte_m0D7BEC211748799F5D94C66F552631B8349D892C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512Digest__ctor_mB727CCFFE4EC36BFC1813C176E076408CF2FF2CC (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed25519_CreateDigest_mFA846F96A403E05919A597C6A4933AD43B49A111 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_CopyOfRange_m2FEFC438755F0A2DE6E02C05303B2654984C1965 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckPointVar_m5110B04358E2737AB9B70C88F2F18851318885C9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Decode_m338AAEE543F41CC1719A27E7DC71809BA35CAD95 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, int32_t ___1_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_SubOne_m97260136BAF4BA276B86F1F6DE989BC536257BA7 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_SqrtRatioVar_m4A0948060EB4FCB9D9C180C3D50D0875FE8A797C (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_u, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_v, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_IsZeroVar_m62A905AC23C5F48F0988F53A7EDDEF8FA1C3EE76 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Negate_mCA6BC2326D31E4E3BC5087A3CCCF555B1F950F57 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m5E15B5B20818228014AB4A4E50AA26453A89AA80 (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode24_mB8EB3F1979E4A27105616824FC7E7852CF8A12FB (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Inv_m34B01BF3BB188845DBFAACEC7C58C662B73B90CE (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_m1B8BA38167F0FAA502542C75CE036100C74A83AC (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Encode_m81DFE01020AC68F5F661A5695D1B573EFD9EB4B6 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_z, int32_t ___2_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PruneScalar_mFCE98B6E0A5056FE969933FA1A1FEE053BD87057 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, int32_t ___1_nOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseEncoded_m7F598FF9DE99D7AE191001ADF081F55E420C36CE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Dom2_m721CBD5D05880B7324137CE0E72183B9A69007A7 (RuntimeObject* ___0_d, uint8_t ___1_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_CalculateS_m23173DF3C42B19B42451ECC7FBBF01F00CB399FB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckContextVar_m52786778C2ED745C86206C8C0629A714B6E1C8B7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_ctx, uint8_t ___1_phflag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m13B6A2511F9327F843C430396237125DFB2CA333 (RuntimeObject* ___0_d, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_pk, int32_t ___4_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ctx, uint8_t ___6_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_m, int32_t ___8_mOff, int32_t ___9_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___10_sig, int32_t ___11_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckScalarVar_m6410AF4383E7C974A0E35B0F624DABE8D6BF558A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_DecodePointVar_m363BF607456706202E92EB1DDD3B0D2798674BAB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, int32_t ___1_pOff, bool ___2_negate, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAccum__ctor_m6006840A478C446114D26544309A507110FF14A2 (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultStrausVar_mF2CF93B3EAFEA863A237792852C7FE61F9548433 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_nb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_np, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___2_p, PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_EncodePoint_mB12A34AEF57763D718AFD69D3202F1BBDF0F783A (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_mF4FFEFFC4A23BEC3C36821B5E80341EB1E5A2351 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_a, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_zp, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_zm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Carry_m91D20CCA8A39D3D3F755CFCA0A7792F77E061B31 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_One_m4802EF9C8312727100203D1CAC28AEFBAE99864A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CMov_m8B2DFF4A642EB6EFC8FDFAFE40DBFE3375F60762 (int32_t ___0_cond, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, int32_t ___2_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_m32430A184FA0CD7C75F552BA9A659148A228D40F (bool ___0_negate, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___1_p, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___2_q, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* Ed25519_PointCopy_m102292E69DA16C429AEB7D8AB015718D671BBF74 (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Zero_mF92D7DA5710301FFEF50C5EFFE6E7A3CD9D9724D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* Ed25519_PointPrecompVar_mCABA607DF679563766DAB5206E8CF78CE1DB0CF3 (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___0_p, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m5D2BC2667F26D10393A9161AB6442E775642FC43 (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_mBEBD01658850C983066BF502EC8084E1037F76CF (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* Ed25519_PointCopy_mDE764D0B4600455EEAE68EBAE172E2BBC1383C49 (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointDouble_m052A2A2EF2FD61ED150C7310D8FC50A06EAD0D20 (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m146540BFE4277D2CA9FEAF96222EDE58EC44BDF8 (PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode56_m522ECDDCA6BC2A5B6EBBE54179DC289A08A69B8F (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Precompute_m41C84A1756DDBED6D366273D25F1A46207877B86 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m152D233739CCA2B0C8A0276DEF5A1AFFB3E1412E (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_CAdd_mB7A9AA8990B48544C93E4B9A04ECBB88DAE26AA1 (int32_t ___0_len, int32_t ___1_mask, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftDownBit_m413AD7BE1A11EEDE9E9A76284024E94FA18FB772 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, uint32_t ___2_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Interleave_Shuffle2_m1F2FDA617A293EC5E2624FCEDD6408662C521085 (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_mAA847E79A544B9202E899C5D48F75500E3C7CCE4 (int32_t ___0_block, int32_t ___1_index, PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CSwap_m492A7EB6C6B7D7C69F299B8CED36E767A56384DE (int32_t ___0_swap, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_a, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CNegate_mEDFC5DB597A4FB37EDEF56212E3754B685F9FF47 (int32_t ___0_negate, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddPrecomp_mA25B7832A57DC554CD0209A49F0BFC6693D1E49D (PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* ___0_p, PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___1_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBase_m7FB4AB23B3431386EC9661546045867F0BBF48C1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___1_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_m7398F28DBAF2FB40C08E51C94A7E7D0B200AE617 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed25519_GetWnafVar_mB31696C9195687F7981D68978CB2DF500DCAF56B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_n, int32_t ___1_width, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_m336663EA737E5EE589A5AE9EF1A6ABE4EB0CAC35 (bool ___0_negate, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___1_p, PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___2_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_mFF6B13D7BE906B804D3DDF67565962C9B4B3DE9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, uint8_t ___3_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m35EC9ABCB0EB2528FDD835161E91B7E9191ADE44 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___9_sig, int32_t ___10_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_ImplVerify_mA82B8EB33409E19CDD41CD04EFFFD9FF0D5A5ED8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Strings_ToByteArray_m15A228865F989895F66F50377670C1FBEA709CE3 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_DecodeScalar_m7D209348AC358B759F16D8302312E0818FFA0CC0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_MulAddTo_m860223FC379D4E0A7EDE41473013E9C35063C683 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode32_m10BE3620188878AB64D1B4D76625D78E6C2D9A6B (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_ReduceScalar_m249E66B3F7C7C5E8A623704074D1458C481C74E8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_m28F4C031497CF54E372A7E38418208C145359627 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_SubOne_m1FA342BF4FE4C4023151FD1F11DB487C483E2846 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Normalize_m26ACA995C5043D08BDF088D5468FCC82115173C2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X448Field_IsZero_mFCFA5EF88404AFCF33759030B3DAF0C6B26FBAF5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Decode32_m307F7B07874D90B87187C77FB5113681062943E6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_bsOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, int32_t ___3_nOff, int32_t ___4_nLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat_Gte_mC29F1B0488783585B956396CFB584E36C5DF6E8B (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed448_CreateXof_mA07A6D62F85C3E0DB693576D58F837DC2440B317 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m773AA739141D2B3CF7B146D3D1E6F94615A6750B (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, int32_t ___0_bitLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckPointVar_m0C37E80B1C9639E52561DFE3506CE63AF328EB06 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode_mAD715DC0431022960828D145147A836D73AFE626 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Negate_m2335B056D7800476789FB9BB0A9B555041353443 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_AddOne_m7C1BB43F24A806574BF27227A01EC3142C220035 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_SqrtRatioVar_m1F5321B7413DFEED00BF93A3305D99DA5F3726E2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_v, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_IsZeroVar_mC3D4F712FDEF97B9431232C0E7BE722923B69A6F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointExtendXY_m4827F8DC2E4D78B25F13F0A7EB826727A5FB9A27 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode24_mDBFB2F348685839FABDCCDD7D6B55B773CB32D63 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Inv_m99F066E3A511DC6C85677AFE65FD223B6B622D51 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_m7393C5475FDEFBAFFB49555F7A37A8289FD903CB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode_m3AD5D6E904B1757638A2824EFFB4C61EBD166565 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_z, int32_t ___2_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PruneScalar_m4F219411E5E0C9E0C0AD6225369C3455BFEE99C3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, int32_t ___1_nOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseEncoded_mAE0BBF97D951710981883634BFE1933B67909095 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Dom4_m3D9C01B47D91CB733537FF5B627E87363AAAC8AD (RuntimeObject* ___0_d, uint8_t ___1_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_CalculateS_m92AB47AA5CCDB8C4B9EEAA669858F839518D04A1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckContextVar_m50B27F8EC1B4DD72EA7284BF12E9E35375291235 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_ctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m41C304FD8793007DABDE4A2509D66911CA694EBF (RuntimeObject* ___0_d, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_pk, int32_t ___4_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ctx, uint8_t ___6_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_m, int32_t ___8_mOff, int32_t ___9_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___10_sig, int32_t ___11_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckScalarVar_m6E13138D25304A2BD484ABFF197C29703B9C799C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_mBFD4DAD3052D0CB4BEC9669B21AD21E5412A3CE9 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_DecodePointVar_m77AB580C7D1188063A809AA00E588F5B5F2E2934 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, int32_t ___1_pOff, bool ___2_negate, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultStrausVar_m884A053AB74B076326EC8817587C724474108226 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_nb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_np, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___2_p, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_EncodePoint_m323A756F6B6EF6AB57094EC238D9D6837A962F82 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Carry_m897092BD9C78CE231321827FE64E167B11A2E26A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_One_m6074E16D9647D0A634D161E5C0CE09987B1C7D2B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CMov_m356F1043BEDA67CB64F2566DE8D184283076D369 (int32_t ___0_cond, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* Ed448_PointCopy_m924674D20E9046CF8076280DF6A95D63094042CB (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointDouble_m5B63D15D542AF63EAFDFC001F422C67052C81AF0 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddVar_mBF555D463F4A92959E0BC5BABA7D4EC5607DB0C3 (bool ___0_negate, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___1_p, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___2_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Zero_mD39E562231F16CC7523765A69C4CDD92D6CFB3D6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* Ed448_PointPrecompVar_mE83646331B9BE79F0F1C1D0F158A33128FA3D816 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointSetNeutral_mE8166763401C7CC80C8F0DD34A4486152DC9CA58 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode16_mBF934F453355B566ABE2D0B7DE8EC2BF088606F3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6 (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Precompute_m255EB81B13C789CFE2E7D2161EC0E25C56655205 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m2CE209622A222246970DCD25F56A0B995A5D1F96 (PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointLookup_mF5BF4A7B845349F49818290EC68CFB238E0F5167 (int32_t ___0_block, int32_t ___1_index, PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CNegate_mF61AC45D6B252BAC0B99EE7DC109844260EBE935 (int32_t ___0_negate, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddPrecomp_m3650CDB7CA5508CD965BF9A617CD151492FD45E2 (PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* ___0_p, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___1_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBase_m8839B008B9403546675D1A02511F3B8DA02590BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___1_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_mEBE5F63E6CEFB7CB45D6156FF58E1DCEF99B5D93 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed448_GetWnafVar_m924B2047E3ED6D1DD146D1ED68E94A28C17A32F5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_n, int32_t ___1_width, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_mD0DDC0485DD4127334E73C104E76679E00EC18B9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, uint8_t ___3_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_mE5CDBF1FE5A0F85D743F88EBE87EFA23F6B28F2F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___9_sig, int32_t ___10_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_ImplVerify_m9E1CB9694FF1E78E589F89C01C469DDE7B75CE05 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* Nat_ToBigInteger_mA6F4965B358FE176BBA57AC1EEB3325AC464EF07 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_ScalarMult_mF2583E5CEF8099CE65A5ADB867F7C7C140D25E8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_u, int32_t ___3_uOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_r, int32_t ___5_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreAllZeroes_m412367F7DCC6F017E910D2E2685D5F51CC998D37 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X25519_Decode32_m15D170791BAB745563A1E8917BD1E8755F883E3F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_ScalarMultBase_mDB72B5D93DE297C05CC27E45326CBBDB886981AA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, int32_t ___3_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Mul_m39F2DC64F8D3B845EAD2E76814139DE010372BDB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_DecodeScalar_m27960633A9057F4FA3A74EBE6AADB323DB16A044 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_PointDouble_m59C52384F10DE7D97CBE54879117DF882E1901EB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseYZ_mCB20D6348175818B8AF53F7FEE65F40A780A5ADD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_z, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractF2mPoint__ctor_m8DFF49D9D79FF3EA7040E3F7EC21BF1ECEA04420 (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, bool ___3_withCompression, const RuntimeMethod* method) 
{
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_0 = ___0_curve;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = ___1_x;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_2 = ___2_y;
		bool L_3 = ___3_withCompression;
		ECPointBase__ctor_mB9A74A65B8C4C262A78E0F4428A9468D89A15D91(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractF2mPoint__ctor_m5BC05DF390807EFDDA615EA7933B77890A60E5E2 (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ___3_zs, bool ___4_withCompression, const RuntimeMethod* method) 
{
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_0 = ___0_curve;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = ___1_x;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_2 = ___2_y;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_3 = ___3_zs;
		bool L_4 = ___4_withCompression;
		ECPointBase__ctor_m727F5A01CF2CC1D1547DDB4DBBA412AFCA738242(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbstractF2mPoint_SatisfiesCurveEquation_m89B422FE5237903D028D5C0818F66B63AFFF28AB (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, const RuntimeMethod* method) 
{
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_1 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_2 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_5 = NULL;
	int32_t V_6 = 0;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_7 = NULL;
	bool V_8 = false;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_9 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_10 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_11 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_12 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_13 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_14 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_15 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_16 = NULL;
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_0;
		L_0 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1;
		L_1 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_0 = L_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_2;
		L_2 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_1 = L_2;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_3 = L_0;
		NullCheck(L_3);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_4;
		L_4 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_3);
		V_2 = L_4;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_5 = L_3;
		NullCheck(L_5);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_6;
		L_6 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(25, L_5);
		V_3 = L_6;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(28, L_5);
		V_6 = L_7;
		int32_t L_8 = V_6;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_00f0;
		}
	}
	{
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_9;
		L_9 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_9);
		int32_t L_10 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_7 = L_11;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_12 = V_7;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(17, L_12);
		V_8 = L_13;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(18, L_14);
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_16 = V_1;
		NullCheck(L_16);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_17;
		L_17 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_16);
		V_4 = L_17;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_18 = V_3;
		V_5 = L_18;
		bool L_19 = V_8;
		if (L_19)
		{
			goto IL_0173;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_20 = V_7;
		NullCheck(L_20);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_21;
		L_21 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_20);
		V_9 = L_21;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_22 = V_5;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_23 = V_9;
		NullCheck(L_22);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_24;
		L_24 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_22, L_23);
		V_5 = L_24;
		goto IL_0173;
	}

IL_0077:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_25 = V_1;
		V_10 = L_25;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_26 = V_0;
		NullCheck(L_26);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_27;
		L_27 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_26);
		V_11 = L_27;
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00ad;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_29 = V_10;
		NullCheck(L_29);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_30;
		L_30 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_29);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_31 = V_10;
		NullCheck(L_30);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_32;
		L_32 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_30, L_31);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_33 = V_2;
		NullCheck(L_32);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_34;
		L_34 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_32, L_33);
		V_4 = L_34;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_35 = V_11;
		NullCheck(L_35);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_36;
		L_36 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_35);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_37 = V_3;
		NullCheck(L_36);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_38;
		L_38 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_36, L_37);
		V_5 = L_38;
		goto IL_00e0;
	}

IL_00ad:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_39 = V_7;
		NullCheck(L_39);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_40;
		L_40 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_39);
		V_12 = L_40;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_41 = V_12;
		NullCheck(L_41);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_42;
		L_42 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_41);
		V_13 = L_42;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_43 = V_10;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_44 = V_7;
		NullCheck(L_43);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_45;
		L_45 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_43, L_44);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_46 = V_10;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_47 = V_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_48 = V_12;
		NullCheck(L_45);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_49;
		L_49 = VirtualFuncInvoker3< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, L_45, L_46, L_47, L_48);
		V_4 = L_49;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_50 = V_11;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_51 = V_3;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_52 = V_13;
		NullCheck(L_50);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_53;
		L_53 = VirtualFuncInvoker2< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(22, L_50, L_51, L_52);
		V_5 = L_53;
	}

IL_00e0:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_54 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_55 = V_11;
		NullCheck(L_54);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_56;
		L_56 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_54, L_55);
		V_4 = L_56;
		goto IL_0173;
	}

IL_00f0:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_57 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_58 = V_0;
		NullCheck(L_57);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_59;
		L_59 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_57, L_58);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_60 = V_1;
		NullCheck(L_59);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_61;
		L_61 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_59, L_60);
		V_4 = L_61;
		int32_t L_62 = V_6;
		if (!L_62)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_63 = V_6;
		if ((!(((uint32_t)L_63) == ((uint32_t)1))))
		{
			goto IL_014e;
		}
	}
	{
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_64;
		L_64 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_64);
		int32_t L_65 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_14 = L_66;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_67 = V_14;
		NullCheck(L_67);
		bool L_68;
		L_68 = VirtualFuncInvoker0< bool >::Invoke(17, L_67);
		if (L_68)
		{
			goto IL_0159;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_69 = V_14;
		NullCheck(L_69);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_70;
		L_70 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_69);
		V_15 = L_70;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_71 = V_14;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_72 = V_15;
		NullCheck(L_71);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_73;
		L_73 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_71, L_72);
		V_16 = L_73;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_74 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_75 = V_14;
		NullCheck(L_74);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_76;
		L_76 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_74, L_75);
		V_4 = L_76;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_77 = V_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_78 = V_14;
		NullCheck(L_77);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_79;
		L_79 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_77, L_78);
		V_2 = L_79;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_80 = V_3;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_81 = V_16;
		NullCheck(L_80);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_82;
		L_82 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_80, L_81);
		V_3 = L_82;
		goto IL_0159;
	}

IL_014e:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_83 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_83, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88FDE4E981039D470D95B3A195A7183361D9E468)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AbstractF2mPoint_SatisfiesCurveEquation_m89B422FE5237903D028D5C0818F66B63AFFF28AB_RuntimeMethod_var)));
	}

IL_0159:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_84 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_85 = V_2;
		NullCheck(L_84);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_86;
		L_86 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_84, L_85);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_87 = V_0;
		NullCheck(L_87);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_88;
		L_88 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_87);
		NullCheck(L_86);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_89;
		L_89 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_86, L_88);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_90 = V_3;
		NullCheck(L_89);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_91;
		L_91 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_89, L_90);
		V_5 = L_91;
	}

IL_0173:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_92 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_93 = V_5;
		NullCheck(L_92);
		bool L_94;
		L_94 = VirtualFuncInvoker1< bool, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(25, L_92, L_93);
		return L_94;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbstractF2mPoint_SatisfiesOrder_mD905CE53C10A03373878CD03E9634D5D490B6EA1 (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractF2mCurve_t41DF92FE5EE15F993C108D74C20B2BE8DBADC122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* V_0 = NULL;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* V_1 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_2 = NULL;
	ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_5 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_6 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_7 = NULL;
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_0;
		L_0 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		V_0 = L_0;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_1 = V_0;
		NullCheck(L_1);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_2;
		L_2 = VirtualFuncInvoker0< BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(27, L_1);
		V_1 = L_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_3 = ((BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var))->___Two;
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_4 = V_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_3, L_4);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_6;
		L_6 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(17, __this);
		NullCheck(L_6);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_7;
		L_7 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9, L_6);
		V_2 = L_7;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_8 = V_2;
		NullCheck(((AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202*)CastclassClass((RuntimeObject*)L_8, AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202_il2cpp_TypeInfo_var)));
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(29, ((AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202*)CastclassClass((RuntimeObject*)L_8, AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202_il2cpp_TypeInfo_var)));
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0036:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_10;
		L_10 = BigInteger_ValueOf_mB81932152108071C2E56A3F7C5F8C86DFF0F9190(((int64_t)4), NULL);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_10, L_11);
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_13;
		L_13 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(17, __this);
		V_3 = L_13;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_14 = V_3;
		NullCheck(L_14);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_15;
		L_15 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9, L_14);
		V_4 = L_15;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_16 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_17 = V_4;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_18 = V_0;
		NullCheck(L_18);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_19;
		L_19 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_18);
		NullCheck(L_17);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_20;
		L_20 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_17, L_19);
		NullCheck(((AbstractF2mCurve_t41DF92FE5EE15F993C108D74C20B2BE8DBADC122*)CastclassClass((RuntimeObject*)L_16, AbstractF2mCurve_t41DF92FE5EE15F993C108D74C20B2BE8DBADC122_il2cpp_TypeInfo_var)));
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_21;
		L_21 = AbstractF2mCurve_SolveQuadraticEquation_m7F6B2ADC8591C05B3EB46C67D790B7CD5F4D5DE9(((AbstractF2mCurve_t41DF92FE5EE15F993C108D74C20B2BE8DBADC122*)CastclassClass((RuntimeObject*)L_16, AbstractF2mCurve_t41DF92FE5EE15F993C108D74C20B2BE8DBADC122_il2cpp_TypeInfo_var)), L_20, NULL);
		V_5 = L_21;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_22 = V_5;
		if (L_22)
		{
			goto IL_0074;
		}
	}
	{
		return (bool)0;
	}

IL_0074:
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_23 = V_3;
		NullCheck(L_23);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_24;
		L_24 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_23);
		V_6 = L_24;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_25 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_26 = V_5;
		NullCheck(L_25);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_27;
		L_27 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_25, L_26);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_28 = V_6;
		NullCheck(L_27);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_29;
		L_29 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_27, L_28);
		V_7 = L_29;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_30 = V_7;
		NullCheck(((AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202*)CastclassClass((RuntimeObject*)L_30, AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202_il2cpp_TypeInfo_var)));
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(29, ((AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202*)CastclassClass((RuntimeObject*)L_30, AbstractF2mFieldElement_t1DC8BB1B4A1C6D0597E22FD4E76C05A9E5722202_il2cpp_TypeInfo_var)));
		return (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
	}

IL_009e:
	{
		bool L_32;
		L_32 = ECPoint_SatisfiesOrder_m36473A099403349947225AF92102FB9AF90B791B(__this, NULL);
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* AbstractF2mPoint_ScaleX_m15F7E00EAD0151BAD6A34F832F6F20134FF4FE34 (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_1 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_2 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_5 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_6 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_7 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_8 = NULL;
	{
		bool L_0;
		L_0 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_0060;
		}
	}
	{
		goto IL_00c2;
	}

IL_001e:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_4;
		L_4 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_1 = L_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_5;
		L_5 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_6 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_7 = ___0_scale;
		NullCheck(L_6);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_8;
		L_8 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_6, L_7);
		V_2 = L_8;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_9 = V_1;
		NullCheck(L_5);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_10;
		L_10 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_5, L_9);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_11 = ___0_scale;
		NullCheck(L_10);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_12;
		L_12 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(11, L_10, L_11);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_13 = V_2;
		NullCheck(L_12);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_14;
		L_14 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_12, L_13);
		V_3 = L_14;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_15;
		L_15 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_16 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_17 = V_3;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_18;
		L_18 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		bool L_19;
		L_19 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		NullCheck(L_15);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_20;
		L_20 = VirtualFuncInvoker4< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*, bool >::Invoke(14, L_15, L_16, L_17, L_18, L_19);
		return L_20;
	}

IL_0060:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_21;
		L_21 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_4 = L_21;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_22;
		L_22 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_23;
		L_23 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_23);
		int32_t L_24 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_5 = L_25;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_26 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_27 = ___0_scale;
		NullCheck(L_27);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_28;
		L_28 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_27);
		NullCheck(L_26);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_29;
		L_29 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_26, L_28);
		V_6 = L_29;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_30 = V_4;
		NullCheck(L_22);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_31;
		L_31 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_22, L_30);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_32 = V_6;
		NullCheck(L_31);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_33;
		L_33 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_31, L_32);
		V_7 = L_33;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_34 = V_5;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_35 = ___0_scale;
		NullCheck(L_34);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_36;
		L_36 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_34, L_35);
		V_8 = L_36;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_37;
		L_37 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_38 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_39 = V_7;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_40 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_41 = L_40;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_42 = V_8;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_42);
		bool L_43;
		L_43 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		NullCheck(L_37);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_44;
		L_44 = VirtualFuncInvoker4< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*, bool >::Invoke(14, L_37, L_38, L_39, L_41, L_43);
		return L_44;
	}

IL_00c2:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_45 = ___0_scale;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_46;
		L_46 = ECPoint_ScaleX_m0AEF61C49866BAF51B2911570E2239A247123DAC(__this, L_45, NULL);
		return L_46;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* AbstractF2mPoint_ScaleXNegateY_m0D026EBB3363BD2AF0050639FB861F99BE1E82EB (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) 
{
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = ___0_scale;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_1;
		L_1 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, __this, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* AbstractF2mPoint_ScaleY_m4BE83755A04A3B546A1291C1E788FB8653F37582 (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_1 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_2 = NULL;
	{
		bool L_0;
		L_0 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, 5))) <= ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_3;
		L_3 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_1 = L_3;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_4;
		L_4 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_5 = V_1;
		NullCheck(L_4);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_6;
		L_6 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_4, L_5);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_7 = ___0_scale;
		NullCheck(L_6);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_8;
		L_8 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_6, L_7);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_9 = V_1;
		NullCheck(L_8);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_10;
		L_10 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_8, L_9);
		V_2 = L_10;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_11;
		L_11 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_12 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_13 = V_2;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_14;
		L_14 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		bool L_15;
		L_15 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		NullCheck(L_11);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_16;
		L_16 = VirtualFuncInvoker4< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*, bool >::Invoke(14, L_11, L_12, L_13, L_14, L_15);
		return L_16;
	}

IL_0051:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_17 = ___0_scale;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_18;
		L_18 = ECPoint_ScaleY_m0876D8AA20A3D168CBD70AEAC0DADCD9CF576702(__this, L_17, NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* AbstractF2mPoint_ScaleYNegateX_m859F370306AB4BEA1FDFAE2DE72542C6282E6823 (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) 
{
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = ___0_scale;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_1;
		L_1 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(22, __this, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* AbstractF2mPoint_Subtract_m2DEAF1EA28D481B88FC64273CF80424A59ED89B7 (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___0_b, const RuntimeMethod* method) 
{
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_0 = ___0_b;
		NullCheck(L_0);
		bool L_1;
		L_1 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_2 = ___0_b;
		NullCheck(L_2);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_3;
		L_3 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(30, L_2);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_4;
		L_4 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(28, __this, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* AbstractF2mPoint_Tau_mB81C779FE0B9DF861DF538AD568FF3B7230E08FA (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* V_0 = NULL;
	int32_t V_1 = 0;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_2 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_5 = NULL;
	{
		bool L_0;
		L_0 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		V_0 = L_1;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(28, L_2);
		V_1 = L_3;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_4;
		L_4 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0068;
			}
			case 2:
			{
				goto IL_00a9;
			}
			case 3:
			{
				goto IL_00a9;
			}
			case 4:
			{
				goto IL_00a9;
			}
			case 5:
			{
				goto IL_0043;
			}
			case 6:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_00a9;
	}

IL_0043:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_6;
		L_6 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_3 = L_6;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_7 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_8 = V_2;
		NullCheck(L_8);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_9;
		L_9 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_8);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_10 = V_3;
		NullCheck(L_10);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_11;
		L_11 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_10);
		bool L_12;
		L_12 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		NullCheck(L_7);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_13;
		L_13 = VirtualFuncInvoker3< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, bool >::Invoke(13, L_7, L_9, L_11, L_12);
		return ((AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC*)CastclassClass((RuntimeObject*)L_13, AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC_il2cpp_TypeInfo_var));
	}

IL_0068:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_14;
		L_14 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_4 = L_14;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_15;
		L_15 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_15);
		int32_t L_16 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_18 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_19 = V_2;
		NullCheck(L_19);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_20;
		L_20 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_19);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_21 = V_4;
		NullCheck(L_21);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_22;
		L_22 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_21);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_23 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_24 = L_23;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_25 = V_5;
		NullCheck(L_25);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_26;
		L_26 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_25);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_26);
		bool L_27;
		L_27 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		NullCheck(L_18);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_28;
		L_28 = VirtualFuncInvoker4< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*, bool >::Invoke(14, L_18, L_20, L_22, L_24, L_27);
		return ((AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC*)CastclassClass((RuntimeObject*)L_28, AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC_il2cpp_TypeInfo_var));
	}

IL_00a9:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88FDE4E981039D470D95B3A195A7183361D9E468)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AbstractF2mPoint_Tau_mB81C779FE0B9DF861DF538AD568FF3B7230E08FA_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* AbstractF2mPoint_TauPow_m7A69615275BF9240BB7754148706EED004CA6BCD (AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC* __this, int32_t ___0_pow, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* V_0 = NULL;
	int32_t V_1 = 0;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_2 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_5 = NULL;
	{
		bool L_0;
		L_0 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		V_0 = L_1;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(28, L_2);
		V_1 = L_3;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_4;
		L_4 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_00ae;
			}
			case 3:
			{
				goto IL_00ae;
			}
			case 4:
			{
				goto IL_00ae;
			}
			case 5:
			{
				goto IL_0043;
			}
			case 6:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_00ae;
	}

IL_0043:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_6;
		L_6 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_3 = L_6;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_7 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_8 = V_2;
		int32_t L_9 = ___0_pow;
		NullCheck(L_8);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_10;
		L_10 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, int32_t >::Invoke(23, L_8, L_9);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_11 = V_3;
		int32_t L_12 = ___0_pow;
		NullCheck(L_11);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_13;
		L_13 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, int32_t >::Invoke(23, L_11, L_12);
		bool L_14;
		L_14 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		NullCheck(L_7);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_15;
		L_15 = VirtualFuncInvoker3< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, bool >::Invoke(13, L_7, L_10, L_13, L_14);
		return ((AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC*)CastclassClass((RuntimeObject*)L_15, AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC_il2cpp_TypeInfo_var));
	}

IL_006a:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_16;
		L_16 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_4 = L_16;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_17;
		L_17 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_17);
		int32_t L_18 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_20 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_21 = V_2;
		int32_t L_22 = ___0_pow;
		NullCheck(L_21);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_23;
		L_23 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, int32_t >::Invoke(23, L_21, L_22);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_24 = V_4;
		int32_t L_25 = ___0_pow;
		NullCheck(L_24);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_26;
		L_26 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, int32_t >::Invoke(23, L_24, L_25);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_27 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_28 = L_27;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_29 = V_5;
		int32_t L_30 = ___0_pow;
		NullCheck(L_29);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_31;
		L_31 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, int32_t >::Invoke(23, L_29, L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_31);
		bool L_32;
		L_32 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		NullCheck(L_20);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_33;
		L_33 = VirtualFuncInvoker4< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*, bool >::Invoke(14, L_20, L_23, L_26, L_28, L_32);
		return ((AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC*)CastclassClass((RuntimeObject*)L_33, AbstractF2mPoint_t328A13ABA0562E8A45EBDC67ED7DDCCAFF55E0AC_il2cpp_TypeInfo_var));
	}

IL_00ae:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_34 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88FDE4E981039D470D95B3A195A7183361D9E468)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AbstractF2mPoint_TauPow_m7A69615275BF9240BB7754148706EED004CA6BCD_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F2mPoint__ctor_m42AA2E46636103C8B6F47023F9F25E157A7EDF23 (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, const RuntimeMethod* method) 
{
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_0 = ___0_curve;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = ___1_x;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_2 = ___2_y;
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(__this, L_0, L_1, L_2, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, bool ___3_withCompression, const RuntimeMethod* method) 
{
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_0 = ___0_curve;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = ___1_x;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_2 = ___2_y;
		bool L_3 = ___3_withCompression;
		AbstractF2mPoint__ctor_m8DFF49D9D79FF3EA7040E3F7EC21BF1ECEA04420(__this, L_0, L_1, L_2, L_3, NULL);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_4 = ___1_x;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_5 = ___2_y;
		if ((((int32_t)((((RuntimeObject*)(ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)((((RuntimeObject*)(ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0))))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3593CC227878D86540F00CB22358EB80C1BFDA6A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D_RuntimeMethod_var)));
	}

IL_0020:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_7 = ___1_x;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_8 = ___1_x;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_9 = ___2_y;
		F2mFieldElement_CheckFieldElements_m2C5805DE53425986CE4CE5DF09009E841BCA0EFC(L_8, L_9, NULL);
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_10 = ___0_curve;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_11 = ___1_x;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_12 = ___0_curve;
		NullCheck(L_12);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_13;
		L_13 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_12);
		F2mFieldElement_CheckFieldElements_m2C5805DE53425986CE4CE5DF09009E841BCA0EFC(L_11, L_13, NULL);
	}

IL_0039:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F2mPoint__ctor_mA435032C7FF85779D8E5D3E3C76EC5F764CED891 (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___0_curve, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_x, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___2_y, ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ___3_zs, bool ___4_withCompression, const RuntimeMethod* method) 
{
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_0 = ___0_curve;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = ___1_x;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_2 = ___2_y;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_3 = ___3_zs;
		bool L_4 = ___4_withCompression;
		AbstractF2mPoint__ctor_m5BC05DF390807EFDDA615EA7933B77890A60E5E2(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* F2mPoint_Detach_m5053A376933AD27C4F8F971F40733F5A7C36C95F (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0;
		L_0 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9, __this);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1;
		L_1 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, __this);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_2 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(L_2, (ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB*)NULL, L_0, L_1, (bool)0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* F2mPoint_get_YCoord_m6D121B22E8E44A3282F319581D2AB95C01BF2197 (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_1 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_2 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, 5))) <= ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_2;
		L_2 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_1 = L_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_3;
		L_3 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_2 = L_3;
		bool L_4;
		L_4 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(__this, NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(18, L_5);
		if (!L_6)
		{
			goto IL_002d;
		}
	}

IL_002b:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_7 = V_2;
		return L_7;
	}

IL_002d:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_8 = V_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_9 = V_1;
		NullCheck(L_8);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_10;
		L_10 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_8, L_9);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_11 = V_1;
		NullCheck(L_10);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_12;
		L_12 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_10, L_11);
		V_3 = L_12;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)6) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_14;
		L_14 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_14);
		int32_t L_15 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_17 = V_4;
		NullCheck(L_17);
		bool L_18;
		L_18 = VirtualFuncInvoker0< bool >::Invoke(17, L_17);
		if (L_18)
		{
			goto IL_005b;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_19 = V_3;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_20 = V_4;
		NullCheck(L_19);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_21;
		L_21 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(11, L_19, L_20);
		V_3 = L_21;
	}

IL_005b:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_22 = V_3;
		return L_22;
	}

IL_005d:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_23;
		L_23 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool F2mPoint_get_CompressionYTilde_m75FFAC24DF64548211BCF1580D42C34B6C4FA0E6 (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, const RuntimeMethod* method) 
{
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0;
		L_0 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_0 = L_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = V_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(18, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_3;
		L_3 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_1 = L_3;
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(8, __this);
		V_2 = L_4;
		int32_t L_5 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, 5))) <= ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_6 = V_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(24, L_6);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(24, L_8);
		return (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_10 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_11 = V_0;
		NullCheck(L_10);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_12;
		L_12 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(11, L_10, L_11);
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(24, L_12);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* F2mPoint_Add_m223E4A4C9A9CAB5126FBD16CB8B39465421D30E5 (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* V_0 = NULL;
	int32_t V_1 = 0;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_2 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_5 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_6 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_7 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_8 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_9 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_10 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_11 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_12 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_13 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_14 = NULL;
	bool V_15 = false;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_16 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_17 = NULL;
	bool V_18 = false;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_19 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_20 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_21 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_22 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_23 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_24 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_25 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_26 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_27 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_28 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_29 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_30 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_31 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_32 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_33 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_34 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_35 = NULL;
	bool V_36 = false;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_37 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_38 = NULL;
	bool V_39 = false;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_40 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_41 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_42 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_43 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_44 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_45 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_46 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_47 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_48 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_49 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_50 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_51 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_52 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* G_B26_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* G_B29_0 = NULL;
	{
		bool L_0;
		L_0 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_1 = ___0_b;
		return L_1;
	}

IL_000a:
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_2 = ___0_b;
		NullCheck(L_2);
		bool L_3;
		L_3 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_4;
		L_4 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		V_0 = L_4;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(28, L_5);
		V_1 = L_6;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_7;
		L_7 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_2 = L_7;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_8 = ___0_b;
		NullCheck(L_8);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_9;
		L_9 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(L_8, NULL);
		V_3 = L_9;
		int32_t L_10 = V_1;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)6)))
		{
			goto IL_024e;
		}
	}
	{
		goto IL_0483;
	}

IL_0046:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_13;
		L_13 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_4 = L_13;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_14 = ___0_b;
		NullCheck(L_14);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_15;
		L_15 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(L_14, NULL);
		V_5 = L_15;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_16 = V_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_17 = V_3;
		NullCheck(L_16);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_18;
		L_18 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_16, L_17);
		V_6 = L_18;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_19 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_20 = V_5;
		NullCheck(L_19);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_21;
		L_21 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_19, L_20);
		V_7 = L_21;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_22 = V_6;
		NullCheck(L_22);
		bool L_23;
		L_23 = VirtualFuncInvoker0< bool >::Invoke(18, L_22);
		if (!L_23)
		{
			goto IL_008a;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_24 = V_7;
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtualFuncInvoker0< bool >::Invoke(18, L_24);
		if (!L_25)
		{
			goto IL_0083;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_26;
		L_26 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(32, __this);
		return L_26;
	}

IL_0083:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_27 = V_0;
		NullCheck(L_27);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_28;
		L_28 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(22, L_27);
		return L_28;
	}

IL_008a:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_29 = V_7;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_30 = V_6;
		NullCheck(L_29);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_31;
		L_31 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(11, L_29, L_30);
		V_8 = L_31;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_32 = V_8;
		NullCheck(L_32);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_33;
		L_33 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_32);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_34 = V_8;
		NullCheck(L_33);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_35;
		L_35 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_33, L_34);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_36 = V_6;
		NullCheck(L_35);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_37;
		L_37 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_35, L_36);
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_38 = V_0;
		NullCheck(L_38);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_39;
		L_39 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_38);
		NullCheck(L_37);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_40;
		L_40 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_37, L_39);
		V_9 = L_40;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_41 = V_8;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_42 = V_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_43 = V_9;
		NullCheck(L_42);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_44;
		L_44 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_42, L_43);
		NullCheck(L_41);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_45;
		L_45 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_41, L_44);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_46 = V_9;
		NullCheck(L_45);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_47;
		L_47 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_45, L_46);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_48 = V_4;
		NullCheck(L_47);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_49;
		L_49 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_47, L_48);
		V_10 = L_49;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_50 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_51 = V_9;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_52 = V_10;
		bool L_53;
		L_53 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_54 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(L_54, L_50, L_51, L_52, L_53, NULL);
		return L_54;
	}

IL_00e7:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_55;
		L_55 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_11 = L_55;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_56;
		L_56 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_56);
		int32_t L_57 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_12 = L_58;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_59 = ___0_b;
		NullCheck(L_59);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_60;
		L_60 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(L_59, NULL);
		V_13 = L_60;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_61 = ___0_b;
		NullCheck(L_61);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_62;
		L_62 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(L_61, NULL);
		NullCheck(L_62);
		int32_t L_63 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_14 = L_64;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_65 = V_12;
		NullCheck(L_65);
		bool L_66;
		L_66 = VirtualFuncInvoker0< bool >::Invoke(17, L_65);
		V_15 = L_66;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_67 = V_13;
		V_16 = L_67;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_68 = V_3;
		V_17 = L_68;
		bool L_69 = V_15;
		if (L_69)
		{
			goto IL_0135;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_70 = V_16;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_71 = V_12;
		NullCheck(L_70);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_72;
		L_72 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_70, L_71);
		V_16 = L_72;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_73 = V_17;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_74 = V_12;
		NullCheck(L_73);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_75;
		L_75 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_73, L_74);
		V_17 = L_75;
	}

IL_0135:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_76 = V_14;
		NullCheck(L_76);
		bool L_77;
		L_77 = VirtualFuncInvoker0< bool >::Invoke(17, L_76);
		V_18 = L_77;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_78 = V_11;
		V_19 = L_78;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_79 = V_2;
		V_20 = L_79;
		bool L_80 = V_18;
		if (L_80)
		{
			goto IL_015f;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_81 = V_19;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_82 = V_14;
		NullCheck(L_81);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_83;
		L_83 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_81, L_82);
		V_19 = L_83;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_84 = V_20;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_85 = V_14;
		NullCheck(L_84);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_86;
		L_86 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_84, L_85);
		V_20 = L_86;
	}

IL_015f:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_87 = V_16;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_88 = V_19;
		NullCheck(L_87);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_89;
		L_89 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_87, L_88);
		V_21 = L_89;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_90 = V_17;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_91 = V_20;
		NullCheck(L_90);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_92;
		L_92 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_90, L_91);
		V_22 = L_92;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_93 = V_22;
		NullCheck(L_93);
		bool L_94;
		L_94 = VirtualFuncInvoker0< bool >::Invoke(18, L_93);
		if (!L_94)
		{
			goto IL_0195;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_95 = V_21;
		NullCheck(L_95);
		bool L_96;
		L_96 = VirtualFuncInvoker0< bool >::Invoke(18, L_95);
		if (!L_96)
		{
			goto IL_018e;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_97;
		L_97 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(32, __this);
		return L_97;
	}

IL_018e:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_98 = V_0;
		NullCheck(L_98);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_99;
		L_99 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(22, L_98);
		return L_99;
	}

IL_0195:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_100 = V_22;
		NullCheck(L_100);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_101;
		L_101 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_100);
		V_23 = L_101;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_102 = V_23;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_103 = V_22;
		NullCheck(L_102);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_104;
		L_104 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_102, L_103);
		V_24 = L_104;
		bool L_105 = V_15;
		if (L_105)
		{
			goto IL_01c0;
		}
	}
	{
		bool L_106 = V_18;
		if (L_106)
		{
			goto IL_01bc;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_107 = V_12;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_108 = V_14;
		NullCheck(L_107);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_109;
		L_109 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_107, L_108);
		G_B26_0 = L_109;
		goto IL_01c2;
	}

IL_01bc:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_110 = V_12;
		G_B26_0 = L_110;
		goto IL_01c2;
	}

IL_01c0:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_111 = V_14;
		G_B26_0 = L_111;
	}

IL_01c2:
	{
		V_25 = G_B26_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_112 = V_21;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_113 = V_22;
		NullCheck(L_112);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_114;
		L_114 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_112, L_113);
		V_26 = L_114;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_115 = V_26;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_116 = V_21;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_117 = V_23;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_118 = V_0;
		NullCheck(L_118);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_119;
		L_119 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_118);
		NullCheck(L_115);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_120;
		L_120 = VirtualFuncInvoker3< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, L_115, L_116, L_117, L_119);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_121 = V_25;
		NullCheck(L_120);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_122;
		L_122 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_120, L_121);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_123 = V_24;
		NullCheck(L_122);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_124;
		L_124 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_122, L_123);
		V_27 = L_124;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_125 = V_22;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_126 = V_27;
		NullCheck(L_125);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_127;
		L_127 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_125, L_126);
		V_28 = L_127;
		bool L_128 = V_18;
		if (L_128)
		{
			goto IL_020a;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_129 = V_23;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_130 = V_14;
		NullCheck(L_129);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_131;
		L_131 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_129, L_130);
		G_B29_0 = L_131;
		goto IL_020c;
	}

IL_020a:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_132 = V_23;
		G_B29_0 = L_132;
	}

IL_020c:
	{
		V_29 = G_B29_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_133 = V_21;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_134 = V_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_135 = V_22;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_136 = V_11;
		NullCheck(L_133);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_137;
		L_137 = VirtualFuncInvoker3< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, L_133, L_134, L_135, L_136);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_138 = V_29;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_139 = V_26;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_140 = V_27;
		NullCheck(L_137);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_141;
		L_141 = VirtualFuncInvoker3< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, L_137, L_138, L_139, L_140);
		V_30 = L_141;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_142 = V_24;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_143 = V_25;
		NullCheck(L_142);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_144;
		L_144 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_142, L_143);
		V_31 = L_144;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_145 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_146 = V_28;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_147 = V_30;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_148 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_149 = L_148;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_150 = V_31;
		NullCheck(L_149);
		ArrayElementTypeCheck (L_149, L_150);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_150);
		bool L_151;
		L_151 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_152 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_mA435032C7FF85779D8E5D3E3C76EC5F764CED891(L_152, L_145, L_146, L_147, L_149, L_151, NULL);
		return L_152;
	}

IL_024e:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_153 = V_2;
		NullCheck(L_153);
		bool L_154;
		L_154 = VirtualFuncInvoker0< bool >::Invoke(18, L_153);
		if (!L_154)
		{
			goto IL_026d;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_155 = V_3;
		NullCheck(L_155);
		bool L_156;
		L_156 = VirtualFuncInvoker0< bool >::Invoke(18, L_155);
		if (!L_156)
		{
			goto IL_0265;
		}
	}
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_157 = V_0;
		NullCheck(L_157);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_158;
		L_158 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(22, L_157);
		return L_158;
	}

IL_0265:
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_159 = ___0_b;
		NullCheck(L_159);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_160;
		L_160 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(28, L_159, __this);
		return L_160;
	}

IL_026d:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_161;
		L_161 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_32 = L_161;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_162;
		L_162 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_162);
		int32_t L_163 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_164 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		V_33 = L_164;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_165 = ___0_b;
		NullCheck(L_165);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_166;
		L_166 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(L_165, NULL);
		V_34 = L_166;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_167 = ___0_b;
		NullCheck(L_167);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_168;
		L_168 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(L_167, NULL);
		NullCheck(L_168);
		int32_t L_169 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		V_35 = L_170;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_171 = V_33;
		NullCheck(L_171);
		bool L_172;
		L_172 = VirtualFuncInvoker0< bool >::Invoke(17, L_171);
		V_36 = L_172;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_173 = V_3;
		V_37 = L_173;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_174 = V_34;
		V_38 = L_174;
		bool L_175 = V_36;
		if (L_175)
		{
			goto IL_02bb;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_176 = V_37;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_177 = V_33;
		NullCheck(L_176);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_178;
		L_178 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_176, L_177);
		V_37 = L_178;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_179 = V_38;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_180 = V_33;
		NullCheck(L_179);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_181;
		L_181 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_179, L_180);
		V_38 = L_181;
	}

IL_02bb:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_182 = V_35;
		NullCheck(L_182);
		bool L_183;
		L_183 = VirtualFuncInvoker0< bool >::Invoke(17, L_182);
		V_39 = L_183;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_184 = V_2;
		V_40 = L_184;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_185 = V_32;
		V_41 = L_185;
		bool L_186 = V_39;
		if (L_186)
		{
			goto IL_02e5;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_187 = V_40;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_188 = V_35;
		NullCheck(L_187);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_189;
		L_189 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_187, L_188);
		V_40 = L_189;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_190 = V_41;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_191 = V_35;
		NullCheck(L_190);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_192;
		L_192 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_190, L_191);
		V_41 = L_192;
	}

IL_02e5:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_193 = V_41;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_194 = V_38;
		NullCheck(L_193);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_195;
		L_195 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_193, L_194);
		V_42 = L_195;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_196 = V_40;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_197 = V_37;
		NullCheck(L_196);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_198;
		L_198 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_196, L_197);
		V_43 = L_198;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_199 = V_43;
		NullCheck(L_199);
		bool L_200;
		L_200 = VirtualFuncInvoker0< bool >::Invoke(18, L_199);
		if (!L_200)
		{
			goto IL_031b;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_201 = V_42;
		NullCheck(L_201);
		bool L_202;
		L_202 = VirtualFuncInvoker0< bool >::Invoke(18, L_201);
		if (!L_202)
		{
			goto IL_0314;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_203;
		L_203 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(32, __this);
		return L_203;
	}

IL_0314:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_204 = V_0;
		NullCheck(L_204);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_205;
		L_205 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(22, L_204);
		return L_205;
	}

IL_031b:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_206 = V_3;
		NullCheck(L_206);
		bool L_207;
		L_207 = VirtualFuncInvoker0< bool >::Invoke(18, L_206);
		if (!L_207)
		{
			goto IL_03d2;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_208;
		L_208 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(17, __this);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_209 = L_208;
		NullCheck(L_209);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_210;
		L_210 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(L_209, NULL);
		V_2 = L_210;
		NullCheck(L_209);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_211;
		L_211 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(12, L_209);
		V_47 = L_211;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_212 = V_34;
		V_48 = L_212;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_213 = V_47;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_214 = V_48;
		NullCheck(L_213);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_215;
		L_215 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_213, L_214);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_216 = V_2;
		NullCheck(L_215);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_217;
		L_217 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(11, L_215, L_216);
		V_49 = L_217;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_218 = V_49;
		NullCheck(L_218);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_219;
		L_219 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_218);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_220 = V_49;
		NullCheck(L_219);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_221;
		L_221 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_219, L_220);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_222 = V_2;
		NullCheck(L_221);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_223;
		L_223 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_221, L_222);
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_224 = V_0;
		NullCheck(L_224);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_225;
		L_225 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_224);
		NullCheck(L_223);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_226;
		L_226 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_223, L_225);
		V_44 = L_226;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_227 = V_44;
		NullCheck(L_227);
		bool L_228;
		L_228 = VirtualFuncInvoker0< bool >::Invoke(18, L_227);
		if (!L_228)
		{
			goto IL_0393;
		}
	}
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_229 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_230 = V_44;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_231 = V_0;
		NullCheck(L_231);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_232;
		L_232 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(25, L_231);
		NullCheck(L_232);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_233;
		L_233 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(15, L_232);
		bool L_234;
		L_234 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_235 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(L_235, L_229, L_230, L_233, L_234, NULL);
		return L_235;
	}

IL_0393:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_236 = V_49;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_237 = V_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_238 = V_44;
		NullCheck(L_237);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_239;
		L_239 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_237, L_238);
		NullCheck(L_236);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_240;
		L_240 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_236, L_239);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_241 = V_44;
		NullCheck(L_240);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_242;
		L_242 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_240, L_241);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_243 = V_47;
		NullCheck(L_242);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_244;
		L_244 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_242, L_243);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_245 = V_44;
		NullCheck(L_244);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_246;
		L_246 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(11, L_244, L_245);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_247 = V_44;
		NullCheck(L_246);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_248;
		L_248 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_246, L_247);
		V_45 = L_248;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_249 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_250 = ((BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var))->___One;
		NullCheck(L_249);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_251;
		L_251 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(5, L_249, L_250);
		V_46 = L_251;
		goto IL_0467;
	}

IL_03d2:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_252 = V_43;
		NullCheck(L_252);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_253;
		L_253 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_252);
		V_43 = L_253;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_254 = V_42;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_255 = V_40;
		NullCheck(L_254);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_256;
		L_256 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_254, L_255);
		V_50 = L_256;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_257 = V_42;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_258 = V_37;
		NullCheck(L_257);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_259;
		L_259 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_257, L_258);
		V_51 = L_259;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_260 = V_50;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_261 = V_51;
		NullCheck(L_260);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_262;
		L_262 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_260, L_261);
		V_44 = L_262;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_263 = V_44;
		NullCheck(L_263);
		bool L_264;
		L_264 = VirtualFuncInvoker0< bool >::Invoke(18, L_263);
		if (!L_264)
		{
			goto IL_041f;
		}
	}
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_265 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_266 = V_44;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_267 = V_0;
		NullCheck(L_267);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_268;
		L_268 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(25, L_267);
		NullCheck(L_268);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_269;
		L_269 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(15, L_268);
		bool L_270;
		L_270 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_271 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(L_271, L_265, L_266, L_269, L_270, NULL);
		return L_271;
	}

IL_041f:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_272 = V_42;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_273 = V_43;
		NullCheck(L_272);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_274;
		L_274 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_272, L_273);
		V_52 = L_274;
		bool L_275 = V_39;
		if (L_275)
		{
			goto IL_0439;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_276 = V_52;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_277 = V_35;
		NullCheck(L_276);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_278;
		L_278 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_276, L_277);
		V_52 = L_278;
	}

IL_0439:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_279 = V_51;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_280 = V_43;
		NullCheck(L_279);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_281;
		L_281 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_279, L_280);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_282 = V_52;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_283 = V_32;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_284 = V_33;
		NullCheck(L_283);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_285;
		L_285 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_283, L_284);
		NullCheck(L_281);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_286;
		L_286 = VirtualFuncInvoker2< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(22, L_281, L_282, L_285);
		V_45 = L_286;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_287 = V_52;
		V_46 = L_287;
		bool L_288 = V_36;
		if (L_288)
		{
			goto IL_0467;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_289 = V_46;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_290 = V_33;
		NullCheck(L_289);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_291;
		L_291 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_289, L_290);
		V_46 = L_291;
	}

IL_0467:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_292 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_293 = V_44;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_294 = V_45;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_295 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_296 = L_295;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_297 = V_46;
		NullCheck(L_296);
		ArrayElementTypeCheck (L_296, L_297);
		(L_296)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_297);
		bool L_298;
		L_298 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_299 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_mA435032C7FF85779D8E5D3E3C76EC5F764CED891(L_299, L_292, L_293, L_294, L_296, L_298, NULL);
		return L_299;
	}

IL_0483:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_300 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_300, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88FDE4E981039D470D95B3A195A7183361D9E468)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_300, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&F2mPoint_Add_m223E4A4C9A9CAB5126FBD16CB8B39465421D30E5_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* F2mPoint_Twice_m2A0715B81910BCF3B623B05850802CB68FEAA2EF (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* V_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_1 = NULL;
	int32_t V_2 = 0;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_5 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_6 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_7 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_8 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_9 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_10 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_11 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_12 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_13 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_14 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_15 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_16 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_17 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_18 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_19 = NULL;
	bool V_20 = false;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_21 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_22 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_23 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_24 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_25 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_26 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_27 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_28 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_29 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_30 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_31 = NULL;
	bool G_B11_0 = false;
	bool G_B10_0 = false;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* G_B12_0 = NULL;
	bool G_B12_1 = false;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* G_B15_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* G_B19_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* G_B22_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* G_B25_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* G_B30_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* G_B41_0 = NULL;
	{
		bool L_0;
		L_0 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		V_0 = L_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_2;
		L_2 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_1 = L_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_3 = V_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(18, L_3);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_5 = V_0;
		NullCheck(L_5);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_6;
		L_6 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(22, L_5);
		return L_6;
	}

IL_0027:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(28, L_7);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)6)))
		{
			goto IL_0147;
		}
	}
	{
		goto IL_02f2;
	}

IL_0041:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_12;
		L_12 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_13 = V_1;
		NullCheck(L_12);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_14;
		L_14 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(11, L_12, L_13);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_15 = V_1;
		NullCheck(L_14);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_16;
		L_16 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_14, L_15);
		V_3 = L_16;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_17 = V_3;
		NullCheck(L_17);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_18;
		L_18 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_17);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_19 = V_3;
		NullCheck(L_18);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_20;
		L_20 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_18, L_19);
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_21 = V_0;
		NullCheck(L_21);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_22;
		L_22 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_21);
		NullCheck(L_20);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_23;
		L_23 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_20, L_22);
		V_4 = L_23;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_24 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_25 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_26 = V_3;
		NullCheck(L_26);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_27;
		L_27 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(8, L_26);
		NullCheck(L_24);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_28;
		L_28 = VirtualFuncInvoker2< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(22, L_24, L_25, L_27);
		V_5 = L_28;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_29 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_30 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_31 = V_5;
		bool L_32;
		L_32 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_33 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(L_33, L_29, L_30, L_31, L_32, NULL);
		return L_33;
	}

IL_008e:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_34;
		L_34 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_6 = L_34;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_35;
		L_35 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_35);
		int32_t L_36 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_7 = L_37;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_38 = V_7;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(17, L_38);
		bool L_40 = L_39;
		if (L_40)
		{
			G_B11_0 = L_40;
			goto IL_00b4;
		}
		G_B10_0 = L_40;
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_41 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_42 = V_7;
		NullCheck(L_41);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_43;
		L_43 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_41, L_42);
		G_B12_0 = L_43;
		G_B12_1 = G_B10_0;
		goto IL_00b5;
	}

IL_00b4:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_44 = V_1;
		G_B12_0 = L_44;
		G_B12_1 = G_B11_0;
	}

IL_00b5:
	{
		V_8 = G_B12_0;
		if (G_B12_1)
		{
			goto IL_00c4;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_45 = V_6;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_46 = V_7;
		NullCheck(L_45);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_47;
		L_47 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_45, L_46);
		G_B15_0 = L_47;
		goto IL_00c6;
	}

IL_00c4:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_48 = V_6;
		G_B15_0 = L_48;
	}

IL_00c6:
	{
		V_9 = G_B15_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_49 = V_1;
		NullCheck(L_49);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_50;
		L_50 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_49);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_51 = L_50;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_52 = V_9;
		NullCheck(L_51);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_53;
		L_53 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_51, L_52);
		V_10 = L_53;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_54 = V_8;
		V_11 = L_54;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_55 = V_11;
		NullCheck(L_55);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_56;
		L_56 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_55);
		V_12 = L_56;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_57 = V_10;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_58 = V_11;
		NullCheck(L_57);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_59;
		L_59 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_57, L_58);
		V_13 = L_59;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_60 = V_13;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_61 = V_10;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_62 = V_12;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_63 = V_0;
		NullCheck(L_63);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_64;
		L_64 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_63);
		NullCheck(L_60);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_65;
		L_65 = VirtualFuncInvoker3< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, L_60, L_61, L_62, L_64);
		V_14 = L_65;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_66 = V_11;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_67 = V_14;
		NullCheck(L_66);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_68;
		L_68 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_66, L_67);
		V_15 = L_68;
		NullCheck(L_51);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_69;
		L_69 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_51);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_70 = V_11;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_71 = V_14;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_72 = V_13;
		NullCheck(L_69);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_73;
		L_73 = VirtualFuncInvoker3< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, L_69, L_70, L_71, L_72);
		V_16 = L_73;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_74 = V_11;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_75 = V_12;
		NullCheck(L_74);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_76;
		L_76 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_74, L_75);
		V_17 = L_76;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_77 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_78 = V_15;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_79 = V_16;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_80 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_81 = L_80;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_82 = V_17;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_82);
		bool L_83;
		L_83 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_84 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_mA435032C7FF85779D8E5D3E3C76EC5F764CED891(L_84, L_77, L_78, L_79, L_81, L_83, NULL);
		return L_84;
	}

IL_0147:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_85;
		L_85 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_18 = L_85;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_86;
		L_86 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_86);
		int32_t L_87 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_19 = L_88;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_89 = V_19;
		NullCheck(L_89);
		bool L_90;
		L_90 = VirtualFuncInvoker0< bool >::Invoke(17, L_89);
		V_20 = L_90;
		bool L_91 = V_20;
		if (L_91)
		{
			goto IL_0171;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_92 = V_18;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_93 = V_19;
		NullCheck(L_92);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_94;
		L_94 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_92, L_93);
		G_B19_0 = L_94;
		goto IL_0173;
	}

IL_0171:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_95 = V_18;
		G_B19_0 = L_95;
	}

IL_0173:
	{
		V_21 = G_B19_0;
		bool L_96 = V_20;
		if (L_96)
		{
			goto IL_0182;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_97 = V_19;
		NullCheck(L_97);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_98;
		L_98 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_97);
		G_B22_0 = L_98;
		goto IL_0184;
	}

IL_0182:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_99 = V_19;
		G_B22_0 = L_99;
	}

IL_0184:
	{
		V_22 = G_B22_0;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_100 = V_0;
		NullCheck(L_100);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_101;
		L_101 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_100);
		V_23 = L_101;
		bool L_102 = V_20;
		if (L_102)
		{
			goto IL_019d;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_103 = V_23;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_104 = V_22;
		NullCheck(L_103);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_105;
		L_105 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_103, L_104);
		G_B25_0 = L_105;
		goto IL_019f;
	}

IL_019d:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_106 = V_23;
		G_B25_0 = L_106;
	}

IL_019f:
	{
		V_24 = G_B25_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_107 = V_18;
		NullCheck(L_107);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_108;
		L_108 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_107);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_109 = V_21;
		NullCheck(L_108);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_110;
		L_110 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_108, L_109);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_111 = V_24;
		NullCheck(L_110);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_112;
		L_112 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_110, L_111);
		V_25 = L_112;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_113 = V_25;
		NullCheck(L_113);
		bool L_114;
		L_114 = VirtualFuncInvoker0< bool >::Invoke(18, L_113);
		if (!L_114)
		{
			goto IL_01db;
		}
	}
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_115 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_116 = V_25;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_117 = V_0;
		NullCheck(L_117);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_118;
		L_118 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(25, L_117);
		NullCheck(L_118);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_119;
		L_119 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(15, L_118);
		bool L_120;
		L_120 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_121 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(L_121, L_115, L_116, L_119, L_120, NULL);
		return L_121;
	}

IL_01db:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_122 = V_25;
		NullCheck(L_122);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_123;
		L_123 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_122);
		V_26 = L_123;
		bool L_124 = V_20;
		if (L_124)
		{
			goto IL_01f3;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_125 = V_25;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_126 = V_22;
		NullCheck(L_125);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_127;
		L_127 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_125, L_126);
		G_B30_0 = L_127;
		goto IL_01f5;
	}

IL_01f3:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_128 = V_25;
		G_B30_0 = L_128;
	}

IL_01f5:
	{
		V_27 = G_B30_0;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_129 = V_0;
		NullCheck(L_129);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_130;
		L_130 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(25, L_129);
		V_28 = L_130;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_131 = V_28;
		NullCheck(L_131);
		int32_t L_132;
		L_132 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_131);
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_133 = V_0;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = VirtualFuncInvoker0< int32_t >::Invoke(4, L_133);
		if ((((int32_t)L_132) >= ((int32_t)((int32_t)(L_134>>1)))))
		{
			goto IL_02ae;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_135 = V_18;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_136 = V_1;
		NullCheck(L_135);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_137;
		L_137 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_135, L_136);
		NullCheck(L_137);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_138;
		L_138 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_137);
		V_30 = L_138;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_139 = V_28;
		NullCheck(L_139);
		bool L_140;
		L_140 = VirtualFuncInvoker0< bool >::Invoke(17, L_139);
		if (!L_140)
		{
			goto IL_023d;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_141 = V_24;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_142 = V_22;
		NullCheck(L_141);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_143;
		L_143 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_141, L_142);
		NullCheck(L_143);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_144;
		L_144 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_143);
		V_31 = L_144;
		goto IL_024f;
	}

IL_023d:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_145 = V_24;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_146 = V_28;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_147 = V_22;
		NullCheck(L_147);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_148;
		L_148 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_147);
		NullCheck(L_145);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_149;
		L_149 = VirtualFuncInvoker2< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(22, L_145, L_146, L_148);
		V_31 = L_149;
	}

IL_024f:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_150 = V_30;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_151 = V_25;
		NullCheck(L_150);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_152;
		L_152 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_150, L_151);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_153 = V_22;
		NullCheck(L_152);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_154;
		L_154 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_152, L_153);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_155 = V_30;
		NullCheck(L_154);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_156;
		L_156 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_154, L_155);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_157 = V_31;
		NullCheck(L_156);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_158;
		L_158 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_156, L_157);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_159 = V_26;
		NullCheck(L_158);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_160;
		L_160 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_158, L_159);
		V_29 = L_160;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_161 = V_23;
		NullCheck(L_161);
		bool L_162;
		L_162 = VirtualFuncInvoker0< bool >::Invoke(18, L_161);
		if (!L_162)
		{
			goto IL_028c;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_163 = V_29;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_164 = V_27;
		NullCheck(L_163);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_165;
		L_165 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_163, L_164);
		V_29 = L_165;
		goto IL_02d6;
	}

IL_028c:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_166 = V_23;
		NullCheck(L_166);
		bool L_167;
		L_167 = VirtualFuncInvoker0< bool >::Invoke(17, L_166);
		if (L_167)
		{
			goto IL_02d6;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_168 = V_29;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_169 = V_23;
		NullCheck(L_169);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_170;
		L_170 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(8, L_169);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_171 = V_27;
		NullCheck(L_170);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_172;
		L_172 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_170, L_171);
		NullCheck(L_168);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_173;
		L_173 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_168, L_172);
		V_29 = L_173;
		goto IL_02d6;
	}

IL_02ae:
	{
		bool L_174 = V_20;
		if (L_174)
		{
			goto IL_02bc;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_175 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_176 = V_19;
		NullCheck(L_175);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_177;
		L_177 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_175, L_176);
		G_B41_0 = L_177;
		goto IL_02bd;
	}

IL_02bc:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_178 = V_1;
		G_B41_0 = L_178;
	}

IL_02bd:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_179 = V_25;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_180 = V_21;
		NullCheck(G_B41_0);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_181;
		L_181 = VirtualFuncInvoker2< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(22, G_B41_0, L_179, L_180);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_182 = V_26;
		NullCheck(L_181);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_183;
		L_183 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_181, L_182);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_184 = V_27;
		NullCheck(L_183);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_185;
		L_185 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_183, L_184);
		V_29 = L_185;
	}

IL_02d6:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_186 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_187 = V_26;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_188 = V_29;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_189 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_190 = L_189;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_191 = V_27;
		NullCheck(L_190);
		ArrayElementTypeCheck (L_190, L_191);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_191);
		bool L_192;
		L_192 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_193 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_mA435032C7FF85779D8E5D3E3C76EC5F764CED891(L_193, L_186, L_187, L_188, L_190, L_192, NULL);
		return L_193;
	}

IL_02f2:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_194 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_194, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88FDE4E981039D470D95B3A195A7183361D9E468)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_194, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&F2mPoint_Twice_m2A0715B81910BCF3B623B05850802CB68FEAA2EF_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* F2mPoint_TwicePlus_mF08B7878A916FB2B609061EFE78CB7C5DE1B7E69 (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* V_0 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_1 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_2 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_5 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_6 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_7 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_8 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_9 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_10 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_11 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_12 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_13 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_14 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_15 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_16 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_17 = NULL;
	{
		bool L_0;
		L_0 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_1 = ___0_b;
		return L_1;
	}

IL_000a:
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_2 = ___0_b;
		NullCheck(L_2);
		bool L_3;
		L_3 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(L_2, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_4;
		L_4 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(32, __this);
		return L_4;
	}

IL_0019:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_5;
		L_5 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		V_0 = L_5;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_6;
		L_6 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_1 = L_6;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(18, L_7);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_9 = ___0_b;
		return L_9;
	}

IL_0031:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(28, L_10);
		if ((!(((uint32_t)L_11) == ((uint32_t)6))))
		{
			goto IL_01a8;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_12 = ___0_b;
		NullCheck(L_12);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_13;
		L_13 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(L_12, NULL);
		V_2 = L_13;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_14 = ___0_b;
		NullCheck(L_14);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_15;
		L_15 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(L_14, NULL);
		NullCheck(L_15);
		int32_t L_16 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_18 = V_2;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(18, L_18);
		if (L_19)
		{
			goto IL_005d;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_20 = V_3;
		NullCheck(L_20);
		bool L_21;
		L_21 = VirtualFuncInvoker0< bool >::Invoke(17, L_20);
		if (L_21)
		{
			goto IL_006a;
		}
	}

IL_005d:
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_22;
		L_22 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(32, __this);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_23 = ___0_b;
		NullCheck(L_22);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_24;
		L_24 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(28, L_22, L_23);
		return L_24;
	}

IL_006a:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_25;
		L_25 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_26;
		L_26 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_26);
		int32_t L_27 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_4 = L_28;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_29 = ___0_b;
		NullCheck(L_29);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_30;
		L_30 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(L_29, NULL);
		V_5 = L_30;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_31 = V_1;
		NullCheck(L_31);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_32;
		L_32 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_31);
		V_6 = L_32;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_33 = L_25;
		NullCheck(L_33);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_34;
		L_34 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_33);
		V_7 = L_34;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_35 = V_4;
		NullCheck(L_35);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_36;
		L_36 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_35);
		V_8 = L_36;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_37 = V_4;
		NullCheck(L_33);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_38;
		L_38 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_33, L_37);
		V_9 = L_38;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_39 = V_0;
		NullCheck(L_39);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_40;
		L_40 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_39);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_41 = V_8;
		NullCheck(L_40);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_42;
		L_42 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_40, L_41);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_43 = V_7;
		NullCheck(L_42);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_44;
		L_44 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_42, L_43);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_45 = V_9;
		NullCheck(L_44);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_46;
		L_46 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_44, L_45);
		V_10 = L_46;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_47 = V_5;
		NullCheck(L_47);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_48;
		L_48 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(8, L_47);
		V_11 = L_48;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_49 = V_0;
		NullCheck(L_49);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_50;
		L_50 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(24, L_49);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_51 = V_11;
		NullCheck(L_50);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_52;
		L_52 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_50, L_51);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_53 = V_8;
		NullCheck(L_52);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_54;
		L_54 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_52, L_53);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_55 = V_7;
		NullCheck(L_54);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_56;
		L_56 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_54, L_55);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_57 = V_10;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_58 = V_6;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_59 = V_8;
		NullCheck(L_56);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_60;
		L_60 = VirtualFuncInvoker3< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, L_56, L_57, L_58, L_59);
		V_12 = L_60;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_61 = V_2;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_62 = V_8;
		NullCheck(L_61);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_63;
		L_63 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_61, L_62);
		V_13 = L_63;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_64 = V_13;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_65 = V_10;
		NullCheck(L_64);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_66;
		L_66 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_64, L_65);
		NullCheck(L_66);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_67;
		L_67 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_66);
		V_14 = L_67;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_68 = V_14;
		NullCheck(L_68);
		bool L_69;
		L_69 = VirtualFuncInvoker0< bool >::Invoke(18, L_68);
		if (!L_69)
		{
			goto IL_012c;
		}
	}
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_70 = V_12;
		NullCheck(L_70);
		bool L_71;
		L_71 = VirtualFuncInvoker0< bool >::Invoke(18, L_70);
		if (!L_71)
		{
			goto IL_0125;
		}
	}
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_72 = ___0_b;
		NullCheck(L_72);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_73;
		L_73 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(32, L_72);
		return L_73;
	}

IL_0125:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_74 = V_0;
		NullCheck(L_74);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_75;
		L_75 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(22, L_74);
		return L_75;
	}

IL_012c:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_76 = V_12;
		NullCheck(L_76);
		bool L_77;
		L_77 = VirtualFuncInvoker0< bool >::Invoke(18, L_76);
		if (!L_77)
		{
			goto IL_014f;
		}
	}
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_78 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_79 = V_12;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_80 = V_0;
		NullCheck(L_80);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_81;
		L_81 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(25, L_80);
		NullCheck(L_81);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_82;
		L_82 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(15, L_81);
		bool L_83;
		L_83 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_84 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(L_84, L_78, L_79, L_82, L_83, NULL);
		return L_84;
	}

IL_014f:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_85 = V_12;
		NullCheck(L_85);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_86;
		L_86 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_85);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_87 = V_13;
		NullCheck(L_86);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_88;
		L_88 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_86, L_87);
		V_15 = L_88;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_89 = V_12;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_90 = V_14;
		NullCheck(L_89);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_91;
		L_91 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_89, L_90);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_92 = V_8;
		NullCheck(L_91);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_93;
		L_93 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_91, L_92);
		V_16 = L_93;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_94 = V_12;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_95 = V_14;
		NullCheck(L_94);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_96;
		L_96 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_94, L_95);
		NullCheck(L_96);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_97;
		L_97 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(13, L_96);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_98 = V_10;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_99 = V_11;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_100 = V_16;
		NullCheck(L_97);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_101;
		L_101 = VirtualFuncInvoker3< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, L_97, L_98, L_99, L_100);
		V_17 = L_101;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_102 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_103 = V_15;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_104 = V_17;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_105 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_106 = L_105;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_107 = V_16;
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_107);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_107);
		bool L_108;
		L_108 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_109 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_mA435032C7FF85779D8E5D3E3C76EC5F764CED891(L_109, L_102, L_103, L_104, L_106, L_108, NULL);
		return L_109;
	}

IL_01a8:
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_110;
		L_110 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(32, __this);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_111 = ___0_b;
		NullCheck(L_110);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_112;
		L_112 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(28, L_110, L_111);
		return L_112;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* F2mPoint_Negate_m84971083369143B0A70ADE69971AC1DB0E47E1C4 (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_0 = NULL;
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* V_1 = NULL;
	int32_t V_2 = 0;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_3 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_4 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_5 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_6 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_7 = NULL;
	ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* V_8 = NULL;
	{
		bool L_0;
		L_0 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return __this;
	}

IL_000a:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1;
		L_1 = ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline(__this, NULL);
		V_0 = L_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(18, L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		return __this;
	}

IL_001b:
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_4;
		L_4 = VirtualFuncInvoker0< ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* >::Invoke(6, __this);
		V_1 = L_4;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(28, L_5);
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0050;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_00f0;
			}
			case 3:
			{
				goto IL_00f0;
			}
			case 4:
			{
				goto IL_00f0;
			}
			case 5:
			{
				goto IL_009f;
			}
			case 6:
			{
				goto IL_00bc;
			}
		}
	}
	{
		goto IL_00f0;
	}

IL_0050:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_8;
		L_8 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_3 = L_8;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_9 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_10 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_11 = V_3;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_12 = V_0;
		NullCheck(L_11);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_13;
		L_13 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_11, L_12);
		bool L_14;
		L_14 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_15 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(L_15, L_9, L_10, L_13, L_14, NULL);
		return L_15;
	}

IL_006c:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_16;
		L_16 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_4 = L_16;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_17;
		L_17 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_17);
		int32_t L_18 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_20 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_21 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_22 = V_4;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_23 = V_0;
		NullCheck(L_22);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_24;
		L_24 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_22, L_23);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_25 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_26 = L_25;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_27 = V_5;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_27);
		bool L_28;
		L_28 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_29 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_mA435032C7FF85779D8E5D3E3C76EC5F764CED891(L_29, L_20, L_21, L_24, L_26, L_28, NULL);
		return L_29;
	}

IL_009f:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_30;
		L_30 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_6 = L_30;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_31 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_32 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_33 = V_6;
		NullCheck(L_33);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_34;
		L_34 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(8, L_33);
		bool L_35;
		L_35 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_36 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_m689844B6BC1177598E7EE00E43987A8310B6F47D(L_36, L_31, L_32, L_34, L_35, NULL);
		return L_36;
	}

IL_00bc:
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_37;
		L_37 = ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline(__this, NULL);
		V_7 = L_37;
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_38;
		L_38 = ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline(__this, NULL);
		NullCheck(L_38);
		int32_t L_39 = 0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_8 = L_40;
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_41 = V_1;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_42 = V_0;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_43 = V_7;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_44 = V_8;
		NullCheck(L_43);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_45;
		L_45 = VirtualFuncInvoker1< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(7, L_43, L_44);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_46 = (ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67*)SZArrayNew(ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67_il2cpp_TypeInfo_var, (uint32_t)1);
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_47 = L_46;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_48 = V_8;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D*)L_48);
		bool L_49;
		L_49 = ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline(__this, NULL);
		F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3* L_50 = (F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3*)il2cpp_codegen_object_new(F2mPoint_tC253A00125D090D3AAE62E2D64D2F921887D84C3_il2cpp_TypeInfo_var);
		F2mPoint__ctor_mA435032C7FF85779D8E5D3E3C76EC5F764CED891(L_50, L_41, L_42, L_45, L_47, L_49, NULL);
		return L_50;
	}

IL_00f0:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_51 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88FDE4E981039D470D95B3A195A7183361D9E468)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&F2mPoint_Negate_m84971083369143B0A70ADE69971AC1DB0E47E1C4_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray__ctor_m8220A7557B936629D6A4635A891ADB7F39C53C46 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_intLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_intLen;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___m_ints = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ints), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray__ctor_m914C2DF2A284EF630BB601B3BAC5ABAF9E6D9A95 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_ints, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_ints;
		__this->___m_ints = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ints), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray__ctor_m53A57034A0095AEF5BAF7BB9A7836BE5F440A708 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_ints, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_off;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___2_len;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___0_ints;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_ints;
		__this->___m_ints = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ints), (void*)L_3);
		return;
	}

IL_0017:
	{
		int32_t L_4 = ___2_len;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___m_ints = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ints), (void*)L_5);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_ints;
		int32_t L_7 = ___1_off;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = __this->___m_ints;
		int32_t L_9 = ___2_len;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray__ctor_mC81A10147DA3ED7E8EAC71131BBA8CF824D8352B (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___0_bigInt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_0 = ___0_bigInt;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_1 = ___0_bigInt;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BigInteger_get_SignValue_mD9C3B0BA0C5D51C139AF2380358D608DB4CFC16F_inline(L_1, NULL);
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68046411EB3F8D5C85DFE2A7CA6F3DA4843773F1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C3C66C28F7FDCA963B2D63D24B45E634FB4A0CF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LongArray__ctor_mC81A10147DA3ED7E8EAC71131BBA8CF824D8352B_RuntimeMethod_var)));
	}

IL_0022:
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_4 = ___0_bigInt;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BigInteger_get_SignValue_mD9C3B0BA0C5D51C139AF2380358D608DB4CFC16F_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___m_ints = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ints), (void*)L_6);
		return;
	}

IL_0037:
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_7 = ___0_bigInt;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = BigInteger_ToByteArray_m0AFDACCF318C38414DFCCB8D39E4D315D4786EB6(L_7, NULL);
		V_0 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		V_1 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		V_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		V_2 = 1;
	}

IL_004f:
	{
		int32_t L_14 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_14, 7))/8));
		int32_t L_15 = V_3;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->___m_ints = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ints), (void*)L_16);
		int32_t L_17 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_18%8)), L_19));
		V_6 = ((int64_t)0);
		int32_t L_20 = V_2;
		V_7 = L_20;
		int32_t L_21 = V_2;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_00eb;
		}
	}
	{
		goto IL_0095;
	}

IL_007b:
	{
		int64_t L_23 = V_6;
		V_6 = ((int64_t)(L_23<<8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		int32_t L_25 = V_7;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_8 = L_27;
		int64_t L_28 = V_6;
		uint32_t L_29 = V_8;
		V_6 = ((int64_t)(L_28|((int64_t)(uint64_t)L_29)));
		int32_t L_30 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0095:
	{
		int32_t L_31 = V_7;
		int32_t L_32 = V_5;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_007b;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_33 = __this->___m_ints;
		int32_t L_34 = V_4;
		int32_t L_35 = L_34;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		int64_t L_36 = V_6;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (int64_t)L_36);
		goto IL_00eb;
	}

IL_00ad:
	{
		V_6 = ((int64_t)0);
		V_9 = 0;
		goto IL_00d5;
	}

IL_00b6:
	{
		int64_t L_37 = V_6;
		V_6 = ((int64_t)(L_37<<8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		int32_t L_39 = V_7;
		int32_t L_40 = L_39;
		V_7 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		NullCheck(L_38);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_10 = L_42;
		int64_t L_43 = V_6;
		uint32_t L_44 = V_10;
		V_6 = ((int64_t)(L_43|((int64_t)(uint64_t)L_44)));
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00d5:
	{
		int32_t L_46 = V_9;
		if ((((int32_t)L_46) < ((int32_t)8)))
		{
			goto IL_00b6;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_47 = __this->___m_ints;
		int32_t L_48 = V_4;
		int64_t L_49 = V_6;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (int64_t)L_49);
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_00eb:
	{
		int32_t L_51 = V_4;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_CopyTo_mD1E6D49689B2D090EA2B7CD4BB30ECADC4C39FB0 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_z, int32_t ___1_zOff, const RuntimeMethod* method) 
{
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___0_z;
		int32_t L_2 = ___1_zOff;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = __this->___m_ints;
		NullCheck(L_3);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongArray_IsOne_m5F55BA3973811DEFE722D18407C4358B7D9CCB4D (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		V_0 = L_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int64_t)L_3) == ((int64_t)((int64_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		V_1 = 1;
		goto IL_001f;
	}

IL_0014:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (!L_7)
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongArray_IsZero_m35631B10FDA87BFD85511F511F650FE086ABB96F (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LongArray_GetUsedLengthFrom_m248487B97254F1143A99F6526662F9632347C8E7(__this, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_GetUsedLengthFrom_m248487B97254F1143A99F6526662F9632347C8E7 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_from, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		V_0 = L_0;
		int32_t L_1 = ___0_from;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = V_0;
		NullCheck(L_2);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		___0_from = L_3;
		int32_t L_4 = ___0_from;
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		int64_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (!L_7)
		{
			goto IL_002b;
		}
	}

IL_001d:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = V_0;
		int32_t L_9 = ___0_from;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		___0_from = L_10;
		NullCheck(L_8);
		int32_t L_11 = L_10;
		int64_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if (!L_12)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_13 = ___0_from;
		return ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002b:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = V_0;
		int32_t L_15 = ___0_from;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		___0_from = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		int64_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if (!L_18)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_19 = ___0_from;
		return ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0039:
	{
		int32_t L_20 = ___0_from;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = __this->___m_ints;
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		V_0 = L_4;
		NullCheck(L_2);
		int32_t L_5 = L_4;
		int64_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		int64_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		int64_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = LongArray_BitLength_m971618DE3064B03F3740D20C35A36C1D26A75674(L_9, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)(L_8<<6)), L_10));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_DegreeFrom_m5A37606E5950D75AE8BFFEBFAE41C8AA7F2AC224 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_limit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int32_t L_0 = ___0_limit;
		V_0 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_0, ((int32_t)62)))>>6));
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = __this->___m_ints;
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		V_0 = L_4;
		NullCheck(L_2);
		int32_t L_5 = L_4;
		int64_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		int64_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_8 = V_0;
		int64_t L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = LongArray_BitLength_m971618DE3064B03F3740D20C35A36C1D26A75674(L_9, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)(L_8<<6)), L_10));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_BitLength_m971618DE3064B03F3740D20C35A36C1D26A75674 (int64_t ___0_w, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		int64_t L_0 = ___0_w;
		V_0 = ((int32_t)((int64_t)((uint64_t)L_0>>((int32_t)32))));
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		int64_t L_2 = ___0_w;
		V_0 = ((int32_t)L_2);
		V_1 = 0;
		goto IL_0013;
	}

IL_0010:
	{
		V_1 = ((int32_t)32);
	}

IL_0013:
	{
		int32_t L_3 = V_0;
		V_2 = ((int32_t)((uint32_t)L_3>>((int32_t)16)));
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_5 = V_0;
		V_2 = ((int32_t)((uint32_t)L_5>>8));
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___BitLengths;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		G_B7_0 = ((int32_t)il2cpp_codegen_add(8, (int32_t)L_10));
		goto IL_0034;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___BitLengths;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		G_B7_0 = ((int32_t)(L_14));
	}

IL_0034:
	{
		V_3 = G_B7_0;
		goto IL_0058;
	}

IL_0037:
	{
		int32_t L_15 = V_2;
		V_4 = ((int32_t)((uint32_t)L_15>>8));
		int32_t L_16 = V_4;
		if (!L_16)
		{
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___BitLengths;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B11_0 = ((int32_t)il2cpp_codegen_add(((int32_t)24), (int32_t)L_20));
		goto IL_0057;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___BitLengths;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B11_0 = ((int32_t)il2cpp_codegen_add(((int32_t)16), (int32_t)L_24));
	}

IL_0057:
	{
		V_3 = G_B11_0;
	}

IL_0058:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = V_3;
		return ((int32_t)il2cpp_codegen_add(L_25, L_26));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* LongArray_ResizedInts_mD6DD72727605F36244279C5AAE5376FA95ED0A1C (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_newLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	{
		int32_t L_0 = ___0_newLen;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = __this->___m_ints;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = __this->___m_ints;
		NullCheck(L_4);
		int32_t L_5 = ___0_newLen;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5, NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_6, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* LongArray_ToBigInteger_mFD1C717827446123249A6EBB00365A5B2788194F (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int64_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_2 = ((BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var))->___Zero;
		return L_2;
	}

IL_0010:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = __this->___m_ints;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_2 = L_7;
		V_3 = 0;
		V_4 = (bool)0;
		V_6 = 7;
		goto IL_0052;
	}

IL_002c:
	{
		int64_t L_8 = V_1;
		int32_t L_9 = V_6;
		V_7 = (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_8>>((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_9))&((int32_t)63))))));
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0040;
		}
	}
	{
		uint8_t L_11 = V_7;
		if (!L_11)
		{
			goto IL_004c;
		}
	}

IL_0040:
	{
		V_4 = (bool)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		uint8_t L_15 = V_7;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_15);
	}

IL_004c:
	{
		int32_t L_16 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0052:
	{
		int32_t L_17 = V_6;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(8, ((int32_t)il2cpp_codegen_subtract(L_18, 1)))), L_19)));
		V_5 = L_20;
		V_8 = 0;
		goto IL_0079;
	}

IL_006a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_5;
		int32_t L_22 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		int32_t L_24 = V_8;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)L_26);
		int32_t L_27 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0079:
	{
		int32_t L_28 = V_8;
		int32_t L_29 = V_3;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_30 = V_0;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_30, 2));
		goto IL_00b9;
	}

IL_0085:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_31 = __this->___m_ints;
		int32_t L_32 = V_9;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int64_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_10 = L_34;
		V_11 = 7;
		goto IL_00ae;
	}

IL_0095:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_5;
		int32_t L_36 = V_3;
		int32_t L_37 = L_36;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int64_t L_38 = V_10;
		int32_t L_39 = V_11;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_38>>((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_39))&((int32_t)63)))))));
		int32_t L_40 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}

IL_00ae:
	{
		int32_t L_41 = V_11;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_00b9:
	{
		int32_t L_43 = V_9;
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_5;
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_45 = (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C*)il2cpp_codegen_object_new(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		BigInteger__ctor_m0B6CA364FFF812FBB9B6B0BA5A9D0F81BFBF03B8(L_45, 1, L_44, NULL);
		return L_45;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_ShiftUp_mFE67A87C416AA4B0CEF925B8A7EAD3D3C38AA47C (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, int32_t ___2_count, int32_t ___3_shift, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		int32_t L_0 = ___3_shift;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_0));
		V_1 = ((int64_t)0);
		V_2 = 0;
		goto IL_002a;
	}

IL_000c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int64_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_x;
		int32_t L_7 = ___1_xOff;
		int32_t L_8 = V_2;
		int64_t L_9 = V_3;
		int32_t L_10 = ___3_shift;
		int64_t L_11 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, L_8))), (int64_t)((int64_t)(((int64_t)(L_9<<((int32_t)(L_10&((int32_t)63)))))|L_11)));
		int64_t L_12 = V_3;
		int32_t L_13 = V_0;
		V_1 = ((int64_t)((uint64_t)L_12>>((int32_t)(L_13&((int32_t)63)))));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002a:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = ___2_count;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_000c;
		}
	}
	{
		int64_t L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_ShiftUp_m788A13BD4E62BC3116844270972447123DF08842 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, int32_t ___5_shift, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		int32_t L_0 = ___5_shift;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_0));
		V_1 = ((int64_t)0);
		V_2 = 0;
		goto IL_002c;
	}

IL_000d:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int64_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		int32_t L_8 = V_2;
		int64_t L_9 = V_3;
		int32_t L_10 = ___5_shift;
		int64_t L_11 = V_1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, L_8))), (int64_t)((int64_t)(((int64_t)(L_9<<((int32_t)(L_10&((int32_t)63)))))|L_11)));
		int64_t L_12 = V_3;
		int32_t L_13 = V_0;
		V_1 = ((int64_t)((uint64_t)L_12>>((int32_t)(L_13&((int32_t)63)))));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002c:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = ___4_count;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_000d;
		}
	}
	{
		int64_t L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_AddOne_m9418510AF8219DA66A5C06C51AF90FF9B8FA24D1 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_001a;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)1);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)((int64_t)1));
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_3 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m914C2DF2A284EF630BB601B3BAC5ABAF9E6D9A95(L_3, L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7;
		L_7 = LongArray_ResizedInts_mD6DD72727605F36244279C5AAE5376FA95ED0A1C(__this, L_6, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = L_7;
		NullCheck(L_8);
		int64_t* L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_10 = *((int64_t*)L_9);
		*((int64_t*)L_9) = (int64_t)((int64_t)(L_10^((int64_t)1)));
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_11 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m914C2DF2A284EF630BB601B3BAC5ABAF9E6D9A95(L_11, L_8, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_AddShiftedByBitsSafe_m0A1E2A44788CAE6CA757FF594E19C650C7E670EF (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* ___0_other, int32_t ___1_otherDegree, int32_t ___2_bits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		int32_t L_0 = ___1_otherDegree;
		V_0 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_0, ((int32_t)63)))>>6));
		int32_t L_1 = ___2_bits;
		V_1 = ((int32_t)((uint32_t)L_1>>6));
		int32_t L_2 = ___2_bits;
		V_2 = ((int32_t)(L_2&((int32_t)63)));
		int32_t L_3 = V_2;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = __this->___m_ints;
		int32_t L_5 = V_1;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_6 = ___0_other;
		NullCheck(L_6);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = L_6->___m_ints;
		int32_t L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Add_mA22F4B9350C62C048FADA6EAB3E2FACB3415F0D0(L_4, L_5, L_7, 0, L_8, NULL);
		return;
	}

IL_0028:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = __this->___m_ints;
		int32_t L_10 = V_1;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_11 = ___0_other;
		NullCheck(L_11);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = L_11->___m_ints;
		int32_t L_13 = V_0;
		int32_t L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_15;
		L_15 = LongArray_AddShiftedUp_m0A82F2D09B3E250D94F2E28FE2F5BA5383985852(L_9, L_10, L_12, 0, L_13, L_14, NULL);
		V_3 = L_15;
		int64_t L_16 = V_3;
		if (!L_16)
		{
			goto IL_0054;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = __this->___m_ints;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_17);
		int64_t* L_20 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, L_19)))));
		int64_t L_21 = *((int64_t*)L_20);
		int64_t L_22 = V_3;
		*((int64_t*)L_20) = (int64_t)((int64_t)(L_21^L_22));
	}

IL_0054:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_AddShiftedUp_m0A82F2D09B3E250D94F2E28FE2F5BA5383985852 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, int32_t ___4_count, int32_t ___5_shift, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		int32_t L_0 = ___5_shift;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_0));
		V_1 = ((int64_t)0);
		V_2 = 0;
		goto IL_0034;
	}

IL_000d:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___2_y;
		int32_t L_2 = ___3_yOff;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int64_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_x;
		int32_t L_7 = ___1_xOff;
		int32_t L_8 = V_2;
		NullCheck(L_6);
		int64_t* L_9 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, L_8)))));
		int64_t L_10 = *((int64_t*)L_9);
		int64_t L_11 = V_3;
		int32_t L_12 = ___5_shift;
		int64_t L_13 = V_1;
		*((int64_t*)L_9) = (int64_t)((int64_t)(L_10^((int64_t)(((int64_t)(L_11<<((int32_t)(L_12&((int32_t)63)))))|L_13))));
		int64_t L_14 = V_3;
		int32_t L_15 = V_0;
		V_1 = ((int64_t)((uint64_t)L_14>>((int32_t)(L_15&((int32_t)63)))));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0034:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = ___4_count;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_000d;
		}
	}
	{
		int64_t L_19 = V_1;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_AddShiftedDown_mFD9588E7C0282E9E3E4FD388BE8012EF5CDC18DE (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, int32_t ___4_count, int32_t ___5_shift, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		int32_t L_0 = ___5_shift;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_0));
		V_1 = ((int64_t)0);
		int32_t L_1 = ___4_count;
		V_2 = L_1;
		goto IL_0031;
	}

IL_000e:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = ___2_y;
		int32_t L_3 = ___3_yOff;
		int32_t L_4 = V_2;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		int64_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ___0_x;
		int32_t L_8 = ___1_xOff;
		int32_t L_9 = V_2;
		NullCheck(L_7);
		int64_t* L_10 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, L_9)))));
		int64_t L_11 = *((int64_t*)L_10);
		int64_t L_12 = V_3;
		int32_t L_13 = ___5_shift;
		int64_t L_14 = V_1;
		*((int64_t*)L_10) = (int64_t)((int64_t)(L_11^((int64_t)(((int64_t)((uint64_t)L_12>>((int32_t)(L_13&((int32_t)63)))))|L_14))));
		int64_t L_15 = V_3;
		int32_t L_16 = V_0;
		V_1 = ((int64_t)(L_15<<((int32_t)(L_16&((int32_t)63)))));
	}

IL_0031:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		V_2 = L_18;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int64_t L_19 = V_1;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_AddShiftedByWords_m2E1495C9E2199F81E049401839F64616BBF41E24 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* ___0_other, int32_t ___1_words, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_0 = ___0_other;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = ___1_words;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		int32_t L_5 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = __this->___m_ints;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_7 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8;
		L_8 = LongArray_ResizedInts_mD6DD72727605F36244279C5AAE5376FA95ED0A1C(__this, L_7, NULL);
		__this->___m_ints = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ints), (void*)L_8);
	}

IL_0027:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = __this->___m_ints;
		int32_t L_10 = ___1_words;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_11 = ___0_other;
		NullCheck(L_11);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = L_11->___m_ints;
		int32_t L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Add_mA22F4B9350C62C048FADA6EAB3E2FACB3415F0D0(L_9, L_10, L_12, 0, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Add_mA22F4B9350C62C048FADA6EAB3E2FACB3415F0D0 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, int32_t ___4_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int64_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))));
		int64_t L_4 = *((int64_t*)L_3);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		int64_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		*((int64_t*)L_3) = (int64_t)((int64_t)(L_4^L_9));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001a:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___4_count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Add_m32A09FFDAC6C880C0BF93E385CE861DFF1BD2B50 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___4_z, int32_t ___5_zOff, int32_t ___6_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___4_z;
		int32_t L_1 = ___5_zOff;
		int32_t L_2 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int64_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int64_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (int64_t)((int64_t)(L_7^L_12)));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_001a:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___6_count;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_AddBoth_m2CCED6020CA0ECC4EF064B94696AD05BDE7B8F0E (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y1, int32_t ___3_y1Off, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___4_y2, int32_t ___5_y2Off, int32_t ___6_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int64_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))));
		int64_t L_4 = *((int64_t*)L_3);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___2_y1;
		int32_t L_6 = ___3_y1Off;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		int64_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = ___4_y2;
		int32_t L_11 = ___5_y2Off;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int64_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		*((int64_t*)L_3) = (int64_t)((int64_t)(L_4^((int64_t)(L_9^L_14))));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0022:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___6_count;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Distribute_m8B23B2204B81549753274170674C2A6CE16121C9 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_src, int32_t ___2_dst1, int32_t ___3_dst2, int32_t ___4_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_x;
		int32_t L_1 = ___1_src;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int64_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___0_x;
		int32_t L_6 = ___2_dst1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int64_t* L_8 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, L_7)))));
		int64_t L_9 = *((int64_t*)L_8);
		int64_t L_10 = V_1;
		*((int64_t*)L_8) = (int64_t)((int64_t)(L_9^L_10));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ___0_x;
		int32_t L_12 = ___3_dst2;
		int32_t L_13 = V_0;
		NullCheck(L_11);
		int64_t* L_14 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_13)))));
		int64_t L_15 = *((int64_t*)L_14);
		int64_t L_16 = V_1;
		*((int64_t*)L_14) = (int64_t)((int64_t)(L_15^L_16));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_002a:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = ___4_count;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_get_Length_m11AD16E4FF74C50092C66884D2A0FF9B43C8607C (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_FlipWord_m0BCF22EAA82AD715A9BFF44C9F41EC3DD32ACED4 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_bit, int64_t ___3_word, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_off;
		int32_t L_1 = ___2_bit;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)((uint32_t)L_1>>6))));
		int32_t L_2 = ___2_bit;
		V_1 = ((int32_t)(L_2&((int32_t)63)));
		int32_t L_3 = V_1;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = ___0_buf;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int64_t* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)));
		int64_t L_7 = *((int64_t*)L_6);
		int64_t L_8 = ___3_word;
		*((int64_t*)L_6) = (int64_t)((int64_t)(L_7^L_8));
		return;
	}

IL_001b:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = ___0_buf;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int64_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)));
		int64_t L_12 = *((int64_t*)L_11);
		int64_t L_13 = ___3_word;
		int32_t L_14 = V_1;
		*((int64_t*)L_11) = (int64_t)((int64_t)(L_12^((int64_t)(L_13<<((int32_t)(L_14&((int32_t)63)))))));
		int64_t L_15 = ___3_word;
		int32_t L_16 = V_1;
		___3_word = ((int64_t)((uint64_t)L_15>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_16))&((int32_t)63)))));
		int64_t L_17 = ___3_word;
		if (!L_17)
		{
			goto IL_004a;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = ___0_buf;
		int32_t L_19 = V_0;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		V_0 = L_20;
		NullCheck(L_18);
		int64_t* L_21 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		int64_t L_22 = *((int64_t*)L_21);
		int64_t L_23 = ___3_word;
		*((int64_t*)L_21) = (int64_t)((int64_t)(L_22^L_23));
	}

IL_004a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongArray_TestBitZero_m7FE5A15A3BF98030065369911D13948900886B45 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0019;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->___m_ints;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((!(((uint64_t)((int64_t)(L_3&((int64_t)1)))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongArray_TestBit_m0F30BBA8A64ADB1AA297E44A735E87607C72CDF2 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0 = ___2_n;
		V_0 = ((int32_t)((uint32_t)L_0>>6));
		int32_t L_1 = ___2_n;
		V_1 = ((int32_t)(L_1&((int32_t)63)));
		int32_t L_2 = V_1;
		V_2 = ((int64_t)(((int64_t)1)<<((int32_t)(L_2&((int32_t)63)))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_buf;
		int32_t L_4 = ___1_off;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int64_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int64_t L_8 = V_2;
		return (bool)((!(((uint64_t)((int64_t)(L_7&L_8))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_FlipBit_mCAFFA1C939EE92C46B07C7A437C92C7320FC0237 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		int32_t L_0 = ___2_n;
		V_0 = ((int32_t)((uint32_t)L_0>>6));
		int32_t L_1 = ___2_n;
		V_1 = ((int32_t)(L_1&((int32_t)63)));
		int32_t L_2 = V_1;
		V_2 = ((int64_t)(((int64_t)1)<<((int32_t)(L_2&((int32_t)63)))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_buf;
		int32_t L_4 = ___1_off;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int64_t* L_6 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, L_5)))));
		int64_t L_7 = *((int64_t*)L_6);
		int64_t L_8 = V_2;
		*((int64_t*)L_6) = (int64_t)((int64_t)(L_7^L_8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_MultiplyWord_m23AE4F927EC71B9429166472591DBB6053A8D609 (int64_t ___0_a, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___1_b, int32_t ___2_bLen, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___3_c, int32_t ___4_cOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int64_t L_0 = ___0_a;
		if (!((int64_t)(L_0&((int64_t)1))))
		{
			goto IL_0011;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___3_c;
		int32_t L_2 = ___4_cOff;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___1_b;
		int32_t L_4 = ___2_bLen;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Add_mA22F4B9350C62C048FADA6EAB3E2FACB3415F0D0(L_1, L_2, L_3, 0, L_4, NULL);
	}

IL_0011:
	{
		V_0 = 1;
		goto IL_003e;
	}

IL_0015:
	{
		int64_t L_5 = ___0_a;
		if (!((int64_t)(L_5&((int64_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___3_c;
		int32_t L_7 = ___4_cOff;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = ___1_b;
		int32_t L_9 = ___2_bLen;
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_11;
		L_11 = LongArray_AddShiftedUp_m0A82F2D09B3E250D94F2E28FE2F5BA5383985852(L_6, L_7, L_8, 0, L_9, L_10, NULL);
		V_1 = L_11;
		int64_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13 = ___3_c;
		int32_t L_14 = ___4_cOff;
		int32_t L_15 = ___2_bLen;
		NullCheck(L_13);
		int64_t* L_16 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, L_15)))));
		int64_t L_17 = *((int64_t*)L_16);
		int64_t L_18 = V_1;
		*((int64_t*)L_16) = (int64_t)((int64_t)(L_17^L_18));
	}

IL_003a:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_003e:
	{
		int64_t L_20 = ___0_a;
		int64_t L_21 = ((int64_t)((uint64_t)L_20>>1));
		___0_a = L_21;
		if (L_21)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_ModMultiplyLD_m722F78CEC1705DD57B72FEF88FB46B9B0908A19B (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* ___0_other, int32_t ___1_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_2 = NULL;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_9 = NULL;
	int32_t V_10 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_11 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_12 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_13 = NULL;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_16 = NULL;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return __this;
	}

IL_000c:
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_5 = ___0_other;
		return L_5;
	}

IL_0018:
	{
		V_2 = __this;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_6 = ___0_other;
		V_3 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0028;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_9 = ___0_other;
		V_2 = L_9;
		V_3 = __this;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_0 = L_11;
		V_1 = L_10;
	}

IL_0028:
	{
		int32_t L_12 = V_0;
		V_4 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_12, ((int32_t)63)))>>6));
		int32_t L_13 = V_1;
		V_5 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_13, ((int32_t)63)))>>6));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_6 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), ((int32_t)62)))>>6));
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_17 = V_2;
		NullCheck(L_17);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = L_17->___m_ints;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int64_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_15 = L_20;
		int64_t L_21 = V_15;
		if ((!(((uint64_t)L_21) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0059;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_22 = V_3;
		return L_22;
	}

IL_0059:
	{
		int32_t L_23 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_16 = L_24;
		int64_t L_25 = V_15;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_26 = V_3;
		NullCheck(L_26);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = L_26->___m_ints;
		int32_t L_28 = V_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = V_16;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_MultiplyWord_m23AE4F927EC71B9429166472591DBB6053A8D609(L_25, L_27, L_28, L_29, 0, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_30 = V_16;
		int32_t L_31 = V_6;
		int32_t L_32 = ___1_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ___2_ks;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_34;
		L_34 = LongArray_ReduceResult_m145A2F0CA986BDCC0394373AE8B14A57329CDB30(L_30, 0, L_31, L_32, L_33, NULL);
		return L_34;
	}

IL_0081:
	{
		int32_t L_35 = V_1;
		V_7 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_35, 7)), ((int32_t)63)))>>6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_8 = L_36;
		int32_t L_37 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_38 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_37<<4)));
		V_9 = L_38;
		int32_t L_39 = V_7;
		V_10 = L_39;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_8;
		int32_t L_41 = V_10;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_41);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_42 = V_3;
		NullCheck(L_42);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_43 = L_42->___m_ints;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_44 = V_9;
		int32_t L_45 = V_10;
		int32_t L_46 = V_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_43, 0, (RuntimeArray*)L_44, L_45, L_46, NULL);
		V_17 = 2;
		goto IL_0104;
	}

IL_00c0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_8;
		int32_t L_48 = V_17;
		int32_t L_49 = V_10;
		int32_t L_50 = V_7;
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
		V_10 = L_51;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (int32_t)L_51);
		int32_t L_52 = V_17;
		if (((int32_t)(L_52&1)))
		{
			goto IL_00e8;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_53 = V_9;
		int32_t L_54 = V_10;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_55 = V_9;
		int32_t L_56 = V_10;
		int32_t L_57 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_58;
		L_58 = LongArray_ShiftUp_m788A13BD4E62BC3116844270972447123DF08842(L_53, ((int32_t)((uint32_t)L_54>>1)), L_55, L_56, L_57, 1, NULL);
		goto IL_00fe;
	}

IL_00e8:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_59 = V_9;
		int32_t L_60 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_61 = V_9;
		int32_t L_62 = V_10;
		int32_t L_63 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_64 = V_9;
		int32_t L_65 = V_10;
		int32_t L_66 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Add_m32A09FFDAC6C880C0BF93E385CE861DFF1BD2B50(L_59, L_60, L_61, ((int32_t)il2cpp_codegen_subtract(L_62, L_63)), L_64, L_65, L_66, NULL);
	}

IL_00fe:
	{
		int32_t L_67 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0104:
	{
		int32_t L_68 = V_17;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)16))))
		{
			goto IL_00c0;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_69 = V_9;
		NullCheck(L_69);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_70 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)));
		V_11 = L_70;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_71 = V_9;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_72 = V_11;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_73 = V_9;
		NullCheck(L_73);
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_74;
		L_74 = LongArray_ShiftUp_m788A13BD4E62BC3116844270972447123DF08842(L_71, 0, L_72, 0, ((int32_t)(((RuntimeArray*)L_73)->max_length)), 4, NULL);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_75 = V_2;
		NullCheck(L_75);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_76 = L_75->___m_ints;
		V_12 = L_76;
		int32_t L_77 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_78 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_77);
		V_13 = L_78;
		V_14 = ((int32_t)15);
		V_18 = ((int32_t)56);
		goto IL_0198;
	}

IL_0141:
	{
		V_19 = 1;
		goto IL_0180;
	}

IL_0146:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_79 = V_12;
		int32_t L_80 = V_19;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		int64_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		int32_t L_83 = V_18;
		int32_t L_84 = ((int32_t)((int64_t)((uint64_t)L_82>>((int32_t)(L_83&((int32_t)63))))));
		int32_t L_85 = V_14;
		V_20 = ((int32_t)(L_84&L_85));
		int32_t L_86 = V_14;
		V_21 = ((int32_t)(((int32_t)((uint32_t)L_84>>4))&L_86));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_87 = V_13;
		int32_t L_88 = V_19;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_89 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = V_8;
		int32_t L_91 = V_20;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		int32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_94 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_8;
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		int32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		int32_t L_99 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_AddBoth_m2CCED6020CA0ECC4EF064B94696AD05BDE7B8F0E(L_87, ((int32_t)il2cpp_codegen_subtract(L_88, 1)), L_89, L_93, L_94, L_98, L_99, NULL);
		int32_t L_100 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_100, 2));
	}

IL_0180:
	{
		int32_t L_101 = V_19;
		int32_t L_102 = V_4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_0146;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_103 = V_13;
		int32_t L_104 = V_6;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_105;
		L_105 = LongArray_ShiftUp_mFE67A87C416AA4B0CEF925B8A7EAD3D3C38AA47C(L_103, 0, L_104, 8, NULL);
		int32_t L_106 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_subtract(L_106, 8));
	}

IL_0198:
	{
		int32_t L_107 = V_18;
		if ((((int32_t)L_107) >= ((int32_t)0)))
		{
			goto IL_0141;
		}
	}
	{
		V_22 = ((int32_t)56);
		goto IL_01fd;
	}

IL_01a3:
	{
		V_23 = 0;
		goto IL_01e0;
	}

IL_01a8:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_108 = V_12;
		int32_t L_109 = V_23;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		int64_t L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		int32_t L_112 = V_22;
		int32_t L_113 = ((int32_t)((int64_t)((uint64_t)L_111>>((int32_t)(L_112&((int32_t)63))))));
		int32_t L_114 = V_14;
		V_24 = ((int32_t)(L_113&L_114));
		int32_t L_115 = V_14;
		V_25 = ((int32_t)(((int32_t)((uint32_t)L_113>>4))&L_115));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_116 = V_13;
		int32_t L_117 = V_23;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_118 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = V_8;
		int32_t L_120 = V_24;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_123 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = V_8;
		int32_t L_125 = V_25;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		int32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		int32_t L_128 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_AddBoth_m2CCED6020CA0ECC4EF064B94696AD05BDE7B8F0E(L_116, L_117, L_118, L_122, L_123, L_127, L_128, NULL);
		int32_t L_129 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_129, 2));
	}

IL_01e0:
	{
		int32_t L_130 = V_23;
		int32_t L_131 = V_4;
		if ((((int32_t)L_130) < ((int32_t)L_131)))
		{
			goto IL_01a8;
		}
	}
	{
		int32_t L_132 = V_22;
		if ((((int32_t)L_132) <= ((int32_t)0)))
		{
			goto IL_01f7;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_133 = V_13;
		int32_t L_134 = V_6;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_135;
		L_135 = LongArray_ShiftUp_mFE67A87C416AA4B0CEF925B8A7EAD3D3C38AA47C(L_133, 0, L_134, 8, NULL);
	}

IL_01f7:
	{
		int32_t L_136 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_subtract(L_136, 8));
	}

IL_01fd:
	{
		int32_t L_137 = V_22;
		if ((((int32_t)L_137) >= ((int32_t)0)))
		{
			goto IL_01a3;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_138 = V_13;
		int32_t L_139 = V_6;
		int32_t L_140 = ___1_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = ___2_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_142;
		L_142 = LongArray_ReduceResult_m145A2F0CA986BDCC0394373AE8B14A57329CDB30(L_138, 0, L_139, L_140, L_141, NULL);
		return L_142;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_ModMultiply_m8FB7C2D7C3E5B7737B87663EF1A41348925DA83C (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* ___0_other, int32_t ___1_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_2 = NULL;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_9 = NULL;
	int32_t V_10 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_11 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_12 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_13 = NULL;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_16 = NULL;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int64_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return __this;
	}

IL_000c:
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_5 = ___0_other;
		return L_5;
	}

IL_0018:
	{
		V_2 = __this;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_6 = ___0_other;
		V_3 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0028;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_9 = ___0_other;
		V_2 = L_9;
		V_3 = __this;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_0 = L_11;
		V_1 = L_10;
	}

IL_0028:
	{
		int32_t L_12 = V_0;
		V_4 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_12, ((int32_t)63)))>>6));
		int32_t L_13 = V_1;
		V_5 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_13, ((int32_t)63)))>>6));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_6 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), ((int32_t)62)))>>6));
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_17 = V_2;
		NullCheck(L_17);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = L_17->___m_ints;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int64_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_15 = L_20;
		int64_t L_21 = V_15;
		if ((!(((uint64_t)L_21) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0059;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_22 = V_3;
		return L_22;
	}

IL_0059:
	{
		int32_t L_23 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_16 = L_24;
		int64_t L_25 = V_15;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_26 = V_3;
		NullCheck(L_26);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = L_26->___m_ints;
		int32_t L_28 = V_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = V_16;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_MultiplyWord_m23AE4F927EC71B9429166472591DBB6053A8D609(L_25, L_27, L_28, L_29, 0, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_30 = V_16;
		int32_t L_31 = V_6;
		int32_t L_32 = ___1_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ___2_ks;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_34;
		L_34 = LongArray_ReduceResult_m145A2F0CA986BDCC0394373AE8B14A57329CDB30(L_30, 0, L_31, L_32, L_33, NULL);
		return L_34;
	}

IL_0081:
	{
		int32_t L_35 = V_1;
		V_7 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_35, 7)), ((int32_t)63)))>>6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_8 = L_36;
		int32_t L_37 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_38 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_37<<4)));
		V_9 = L_38;
		int32_t L_39 = V_7;
		V_10 = L_39;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_8;
		int32_t L_41 = V_10;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_41);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_42 = V_3;
		NullCheck(L_42);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_43 = L_42->___m_ints;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_44 = V_9;
		int32_t L_45 = V_10;
		int32_t L_46 = V_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_43, 0, (RuntimeArray*)L_44, L_45, L_46, NULL);
		V_17 = 2;
		goto IL_0104;
	}

IL_00c0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_8;
		int32_t L_48 = V_17;
		int32_t L_49 = V_10;
		int32_t L_50 = V_7;
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
		V_10 = L_51;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (int32_t)L_51);
		int32_t L_52 = V_17;
		if (((int32_t)(L_52&1)))
		{
			goto IL_00e8;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_53 = V_9;
		int32_t L_54 = V_10;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_55 = V_9;
		int32_t L_56 = V_10;
		int32_t L_57 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_58;
		L_58 = LongArray_ShiftUp_m788A13BD4E62BC3116844270972447123DF08842(L_53, ((int32_t)((uint32_t)L_54>>1)), L_55, L_56, L_57, 1, NULL);
		goto IL_00fe;
	}

IL_00e8:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_59 = V_9;
		int32_t L_60 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_61 = V_9;
		int32_t L_62 = V_10;
		int32_t L_63 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_64 = V_9;
		int32_t L_65 = V_10;
		int32_t L_66 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Add_m32A09FFDAC6C880C0BF93E385CE861DFF1BD2B50(L_59, L_60, L_61, ((int32_t)il2cpp_codegen_subtract(L_62, L_63)), L_64, L_65, L_66, NULL);
	}

IL_00fe:
	{
		int32_t L_67 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0104:
	{
		int32_t L_68 = V_17;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)16))))
		{
			goto IL_00c0;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_69 = V_9;
		NullCheck(L_69);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_70 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)));
		V_11 = L_70;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_71 = V_9;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_72 = V_11;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_73 = V_9;
		NullCheck(L_73);
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_74;
		L_74 = LongArray_ShiftUp_m788A13BD4E62BC3116844270972447123DF08842(L_71, 0, L_72, 0, ((int32_t)(((RuntimeArray*)L_73)->max_length)), 4, NULL);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_75 = V_2;
		NullCheck(L_75);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_76 = L_75->___m_ints;
		V_12 = L_76;
		int32_t L_77 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_78 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_77<<3)));
		V_13 = L_78;
		V_14 = ((int32_t)15);
		V_18 = 0;
		goto IL_0195;
	}

IL_0142:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_79 = V_12;
		int32_t L_80 = V_18;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		int64_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_19 = L_82;
		int32_t L_83 = V_18;
		V_20 = L_83;
	}

IL_014d:
	{
		int64_t L_84 = V_19;
		int32_t L_85 = V_14;
		V_21 = ((int32_t)(((int32_t)L_84)&L_85));
		int64_t L_86 = V_19;
		V_19 = ((int64_t)((uint64_t)L_86>>4));
		int64_t L_87 = V_19;
		int32_t L_88 = V_14;
		V_22 = ((int32_t)(((int32_t)L_87)&L_88));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_89 = V_13;
		int32_t L_90 = V_20;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_91 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_8;
		int32_t L_93 = V_21;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		int32_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_96 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = V_8;
		int32_t L_98 = V_22;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_AddBoth_m2CCED6020CA0ECC4EF064B94696AD05BDE7B8F0E(L_89, L_90, L_91, L_95, L_96, L_100, L_101, NULL);
		int64_t L_102 = V_19;
		V_19 = ((int64_t)((uint64_t)L_102>>4));
		int64_t L_103 = V_19;
		if (!L_103)
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_104 = V_20;
		int32_t L_105 = V_6;
		V_20 = ((int32_t)il2cpp_codegen_add(L_104, L_105));
		goto IL_014d;
	}

IL_018f:
	{
		int32_t L_106 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_0195:
	{
		int32_t L_107 = V_18;
		int32_t L_108 = V_4;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_0142;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_109 = V_13;
		NullCheck(L_109);
		V_23 = ((int32_t)(((RuntimeArray*)L_109)->max_length));
		goto IL_01b7;
	}

IL_01a3:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_110 = V_13;
		int32_t L_111 = V_23;
		int32_t L_112 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_113 = V_13;
		int32_t L_114 = V_23;
		int32_t L_115 = V_6;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_116;
		L_116 = LongArray_AddShiftedUp_m0A82F2D09B3E250D94F2E28FE2F5BA5383985852(L_110, ((int32_t)il2cpp_codegen_subtract(L_111, L_112)), L_113, L_114, L_115, 8, NULL);
	}

IL_01b7:
	{
		int32_t L_117 = V_23;
		int32_t L_118 = V_6;
		int32_t L_119 = ((int32_t)il2cpp_codegen_subtract(L_117, L_118));
		V_23 = L_119;
		if (L_119)
		{
			goto IL_01a3;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_120 = V_13;
		int32_t L_121 = V_6;
		int32_t L_122 = ___1_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = ___2_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_124;
		L_124 = LongArray_ReduceResult_m145A2F0CA986BDCC0394373AE8B14A57329CDB30(L_120, 0, L_121, L_122, L_123, NULL);
		return L_124;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_ModMultiplyAlt_mD1F8F4EEBB11D7584407C9BEBD38208BD6208760 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* ___0_other, int32_t ___1_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_2 = NULL;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_15 = NULL;
	int32_t V_16 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int64_t V_21 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_22 = NULL;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int64_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t G_B13_0 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return __this;
	}

IL_000c:
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_5 = ___0_other;
		return L_5;
	}

IL_0018:
	{
		V_2 = __this;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_6 = ___0_other;
		V_3 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0028;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_9 = ___0_other;
		V_2 = L_9;
		V_3 = __this;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_0 = L_11;
		V_1 = L_10;
	}

IL_0028:
	{
		int32_t L_12 = V_0;
		V_4 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_12, ((int32_t)63)))>>6));
		int32_t L_13 = V_1;
		V_5 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_13, ((int32_t)63)))>>6));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_6 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), ((int32_t)62)))>>6));
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_17 = V_2;
		NullCheck(L_17);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = L_17->___m_ints;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int64_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_21 = L_20;
		int64_t L_21 = V_21;
		if ((!(((uint64_t)L_21) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0059;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_22 = V_3;
		return L_22;
	}

IL_0059:
	{
		int32_t L_23 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_22 = L_24;
		int64_t L_25 = V_21;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_26 = V_3;
		NullCheck(L_26);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = L_26->___m_ints;
		int32_t L_28 = V_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = V_22;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_MultiplyWord_m23AE4F927EC71B9429166472591DBB6053A8D609(L_25, L_27, L_28, L_29, 0, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_30 = V_22;
		int32_t L_31 = V_6;
		int32_t L_32 = ___1_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ___2_ks;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_34;
		L_34 = LongArray_ReduceResult_m145A2F0CA986BDCC0394373AE8B14A57329CDB30(L_30, 0, L_31, L_32, L_33, NULL);
		return L_34;
	}

IL_0081:
	{
		V_7 = 4;
		V_8 = ((int32_t)16);
		V_9 = ((int32_t)64);
		V_10 = 8;
		int32_t L_35 = V_9;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)64))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_36 = V_8;
		G_B13_0 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		goto IL_009d;
	}

IL_009b:
	{
		int32_t L_37 = V_8;
		G_B13_0 = L_37;
	}

IL_009d:
	{
		V_11 = G_B13_0;
		int32_t L_38 = V_1;
		int32_t L_39 = V_11;
		V_12 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_38, L_39)), ((int32_t)63)))>>6));
		int32_t L_40 = V_12;
		int32_t L_41 = V_10;
		V_13 = ((int32_t)il2cpp_codegen_multiply(L_40, L_41));
		int32_t L_42 = V_7;
		int32_t L_43 = V_10;
		V_14 = ((int32_t)il2cpp_codegen_multiply(L_42, L_43));
		int32_t L_44 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_44&((int32_t)31))))));
		V_15 = L_45;
		int32_t L_46 = V_4;
		V_16 = L_46;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_15;
		int32_t L_48 = V_16;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_48);
		int32_t L_49 = V_16;
		int32_t L_50 = V_13;
		V_16 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_15;
		int32_t L_52 = V_16;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_52);
		V_23 = 2;
		goto IL_00f6;
	}

IL_00e2:
	{
		int32_t L_53 = V_16;
		int32_t L_54 = V_6;
		V_16 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_15;
		int32_t L_56 = V_23;
		int32_t L_57 = V_16;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (int32_t)L_57);
		int32_t L_58 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00f6:
	{
		int32_t L_59 = V_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_15;
		NullCheck(L_60);
		if ((((int32_t)L_59) < ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_61 = V_16;
		int32_t L_62 = V_6;
		V_16 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
		int32_t L_63 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_64 = V_16;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_65 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_64);
		V_17 = L_65;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_66 = V_2;
		NullCheck(L_66);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_67 = L_66->___m_ints;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_68 = V_17;
		int32_t L_69 = V_4;
		int32_t L_70 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Interleave_mCCAF20A81AD18157B09D44C69E7618BAED0B629D(L_67, 0, L_68, 0, L_69, L_70, NULL);
		int32_t L_71 = V_4;
		V_24 = L_71;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_72 = V_3;
		NullCheck(L_72);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_73 = L_72->___m_ints;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_74 = V_17;
		int32_t L_75 = V_24;
		int32_t L_76 = V_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_73, 0, (RuntimeArray*)L_74, L_75, L_76, NULL);
		V_25 = 1;
		goto IL_0160;
	}

IL_0142:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_77 = V_17;
		int32_t L_78 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_79 = V_17;
		int32_t L_80 = V_24;
		int32_t L_81 = V_12;
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		V_24 = L_82;
		int32_t L_83 = V_12;
		int32_t L_84 = V_25;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_85;
		L_85 = LongArray_ShiftUp_m788A13BD4E62BC3116844270972447123DF08842(L_77, L_78, L_79, L_82, L_83, L_84, NULL);
		int32_t L_86 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_0160:
	{
		int32_t L_87 = V_25;
		int32_t L_88 = V_10;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_0142;
		}
	}
	{
		int32_t L_89 = V_7;
		V_18 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_89&((int32_t)31))))), 1));
		V_19 = 0;
	}

IL_0174:
	{
		V_26 = 0;
	}

IL_0177:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_90 = V_17;
		int32_t L_91 = V_26;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		int64_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		int32_t L_94 = V_19;
		V_27 = ((int64_t)((uint64_t)L_93>>((int32_t)(L_94&((int32_t)63)))));
		V_28 = 0;
		int32_t L_95 = V_4;
		V_29 = L_95;
	}

IL_018b:
	{
		int64_t L_96 = V_27;
		int32_t L_97 = V_18;
		V_30 = ((int32_t)(((int32_t)L_96)&L_97));
		int32_t L_98 = V_30;
		if (!L_98)
		{
			goto IL_01ac;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_99 = V_17;
		int32_t L_100 = V_26;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_15;
		int32_t L_102 = V_30;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		int32_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_105 = V_17;
		int32_t L_106 = V_29;
		int32_t L_107 = V_12;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Add_mA22F4B9350C62C048FADA6EAB3E2FACB3415F0D0(L_99, ((int32_t)il2cpp_codegen_add(L_100, L_104)), L_105, L_106, L_107, NULL);
	}

IL_01ac:
	{
		int32_t L_108 = V_28;
		int32_t L_109 = ((int32_t)il2cpp_codegen_add(L_108, 1));
		V_28 = L_109;
		int32_t L_110 = V_10;
		if ((((int32_t)L_109) == ((int32_t)L_110)))
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_111 = V_29;
		int32_t L_112 = V_12;
		V_29 = ((int32_t)il2cpp_codegen_add(L_111, L_112));
		int64_t L_113 = V_27;
		int32_t L_114 = V_7;
		V_27 = ((int64_t)((uint64_t)L_113>>((int32_t)(L_114&((int32_t)63)))));
		goto IL_018b;
	}

IL_01ca:
	{
		int32_t L_115 = V_26;
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		V_26 = L_116;
		int32_t L_117 = V_4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_118 = V_19;
		int32_t L_119 = V_14;
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(L_118, L_119));
		V_19 = L_120;
		int32_t L_121 = V_9;
		if ((((int32_t)L_120) < ((int32_t)L_121)))
		{
			goto IL_01fe;
		}
	}
	{
		int32_t L_122 = V_19;
		if ((((int32_t)L_122) >= ((int32_t)((int32_t)64))))
		{
			goto IL_0211;
		}
	}
	{
		int32_t L_123 = V_7;
		V_19 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_123));
		int32_t L_124 = V_18;
		int32_t L_125 = V_18;
		int32_t L_126 = V_9;
		int32_t L_127 = V_19;
		V_18 = ((int32_t)(L_124&((int32_t)(L_125<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_126, L_127))&((int32_t)31)))))));
	}

IL_01fe:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_128 = V_17;
		int32_t L_129 = V_4;
		int32_t L_130 = V_13;
		int32_t L_131 = V_10;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_132;
		L_132 = LongArray_ShiftUp_mFE67A87C416AA4B0CEF925B8A7EAD3D3C38AA47C(L_128, L_129, L_130, L_131, NULL);
		goto IL_0174;
	}

IL_0211:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = V_15;
		NullCheck(L_133);
		V_20 = ((int32_t)(((RuntimeArray*)L_133)->max_length));
		goto IL_0256;
	}

IL_0219:
	{
		int32_t L_134 = V_20;
		if (((int64_t)(((int64_t)L_134)&((int64_t)1))))
		{
			goto IL_023d;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_135 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = V_15;
		int32_t L_137 = V_20;
		NullCheck(L_136);
		int32_t L_138 = ((int32_t)((uint32_t)L_137>>1));
		int32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_140 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = V_15;
		int32_t L_142 = V_20;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		int32_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		int32_t L_145 = V_6;
		int32_t L_146 = V_8;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_147;
		L_147 = LongArray_AddShiftedUp_m0A82F2D09B3E250D94F2E28FE2F5BA5383985852(L_135, L_139, L_140, L_144, L_145, L_146, NULL);
		goto IL_0256;
	}

IL_023d:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_148 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = V_15;
		int32_t L_150 = V_20;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = V_15;
		int32_t L_154 = V_20;
		NullCheck(L_153);
		int32_t L_155 = ((int32_t)il2cpp_codegen_subtract(L_154, 1));
		int32_t L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = V_15;
		NullCheck(L_157);
		int32_t L_158 = 1;
		int32_t L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		int32_t L_160 = V_6;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Distribute_m8B23B2204B81549753274170674C2A6CE16121C9(L_148, L_152, L_156, L_159, L_160, NULL);
	}

IL_0256:
	{
		int32_t L_161 = V_20;
		int32_t L_162 = ((int32_t)il2cpp_codegen_subtract(L_161, 1));
		V_20 = L_162;
		if ((((int32_t)L_162) > ((int32_t)1)))
		{
			goto IL_0219;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_163 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = V_15;
		NullCheck(L_164);
		int32_t L_165 = 1;
		int32_t L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = V_6;
		int32_t L_168 = ___1_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = ___2_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_170;
		L_170 = LongArray_ReduceResult_m145A2F0CA986BDCC0394373AE8B14A57329CDB30(L_163, L_166, L_167, L_168, L_169, NULL);
		return L_170;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_ModReduce_m29DDA280C9BCC6CA60766413A3A66D32CDCD8C93 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
		L_1 = Arrays_Clone_m820D1ADCAC2C03FA8C0A778E19658070CD6266EE(L_0, NULL);
		V_0 = L_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = ___0_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = LongArray_ReduceInPlace_mAAD80246AC038B69E7585EAAA4131420D16FE70A(L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4, L_5, NULL);
		V_1 = L_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = V_0;
		int32_t L_8 = V_1;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_9 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m53A57034A0095AEF5BAF7BB9A7836BE5F440A708(L_9, L_7, 0, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_Multiply_m9D694287FB78FA48F33FB7A5B8F664D7BB47AE68 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* ___0_other, int32_t ___1_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_2 = NULL;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_9 = NULL;
	int32_t V_10 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_11 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_12 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_13 = NULL;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_16 = NULL;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int64_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return __this;
	}

IL_000c:
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_2 = ___0_other;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_5 = ___0_other;
		return L_5;
	}

IL_0018:
	{
		V_2 = __this;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_6 = ___0_other;
		V_3 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0028;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_9 = ___0_other;
		V_2 = L_9;
		V_3 = __this;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_0 = L_11;
		V_1 = L_10;
	}

IL_0028:
	{
		int32_t L_12 = V_0;
		V_4 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_12, ((int32_t)63)))>>6));
		int32_t L_13 = V_1;
		V_5 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_13, ((int32_t)63)))>>6));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_6 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), ((int32_t)62)))>>6));
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_007f;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_17 = V_2;
		NullCheck(L_17);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = L_17->___m_ints;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int64_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_15 = L_20;
		int64_t L_21 = V_15;
		if ((!(((uint64_t)L_21) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0059;
		}
	}
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_22 = V_3;
		return L_22;
	}

IL_0059:
	{
		int32_t L_23 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_16 = L_24;
		int64_t L_25 = V_15;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_26 = V_3;
		NullCheck(L_26);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = L_26->___m_ints;
		int32_t L_28 = V_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = V_16;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_MultiplyWord_m23AE4F927EC71B9429166472591DBB6053A8D609(L_25, L_27, L_28, L_29, 0, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_30 = V_16;
		int32_t L_31 = V_6;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_32 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m53A57034A0095AEF5BAF7BB9A7836BE5F440A708(L_32, L_30, 0, L_31, NULL);
		return L_32;
	}

IL_007f:
	{
		int32_t L_33 = V_1;
		V_7 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, 7)), ((int32_t)63)))>>6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_8 = L_34;
		int32_t L_35 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_36 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_35<<4)));
		V_9 = L_36;
		int32_t L_37 = V_7;
		V_10 = L_37;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_8;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_39);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_40 = V_3;
		NullCheck(L_40);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41 = L_40->___m_ints;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_42 = V_9;
		int32_t L_43 = V_10;
		int32_t L_44 = V_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_41, 0, (RuntimeArray*)L_42, L_43, L_44, NULL);
		V_17 = 2;
		goto IL_0102;
	}

IL_00be:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_8;
		int32_t L_46 = V_17;
		int32_t L_47 = V_10;
		int32_t L_48 = V_7;
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_47, L_48));
		V_10 = L_49;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (int32_t)L_49);
		int32_t L_50 = V_17;
		if (((int32_t)(L_50&1)))
		{
			goto IL_00e6;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51 = V_9;
		int32_t L_52 = V_10;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_53 = V_9;
		int32_t L_54 = V_10;
		int32_t L_55 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_56;
		L_56 = LongArray_ShiftUp_m788A13BD4E62BC3116844270972447123DF08842(L_51, ((int32_t)((uint32_t)L_52>>1)), L_53, L_54, L_55, 1, NULL);
		goto IL_00fc;
	}

IL_00e6:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_57 = V_9;
		int32_t L_58 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_59 = V_9;
		int32_t L_60 = V_10;
		int32_t L_61 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_62 = V_9;
		int32_t L_63 = V_10;
		int32_t L_64 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Add_m32A09FFDAC6C880C0BF93E385CE861DFF1BD2B50(L_57, L_58, L_59, ((int32_t)il2cpp_codegen_subtract(L_60, L_61)), L_62, L_63, L_64, NULL);
	}

IL_00fc:
	{
		int32_t L_65 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0102:
	{
		int32_t L_66 = V_17;
		if ((((int32_t)L_66) < ((int32_t)((int32_t)16))))
		{
			goto IL_00be;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_67 = V_9;
		NullCheck(L_67);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_68 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)));
		V_11 = L_68;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_69 = V_9;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_70 = V_11;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_71 = V_9;
		NullCheck(L_71);
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_72;
		L_72 = LongArray_ShiftUp_m788A13BD4E62BC3116844270972447123DF08842(L_69, 0, L_70, 0, ((int32_t)(((RuntimeArray*)L_71)->max_length)), 4, NULL);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_73 = V_2;
		NullCheck(L_73);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_74 = L_73->___m_ints;
		V_12 = L_74;
		int32_t L_75 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_76 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_75<<3)));
		V_13 = L_76;
		V_14 = ((int32_t)15);
		V_18 = 0;
		goto IL_0193;
	}

IL_0140:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_77 = V_12;
		int32_t L_78 = V_18;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		int64_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_19 = L_80;
		int32_t L_81 = V_18;
		V_20 = L_81;
	}

IL_014b:
	{
		int64_t L_82 = V_19;
		int32_t L_83 = V_14;
		V_21 = ((int32_t)(((int32_t)L_82)&L_83));
		int64_t L_84 = V_19;
		V_19 = ((int64_t)((uint64_t)L_84>>4));
		int64_t L_85 = V_19;
		int32_t L_86 = V_14;
		V_22 = ((int32_t)(((int32_t)L_85)&L_86));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_87 = V_13;
		int32_t L_88 = V_20;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_89 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = V_8;
		int32_t L_91 = V_21;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		int32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_94 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_8;
		int32_t L_96 = V_22;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		int32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		int32_t L_99 = V_7;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_AddBoth_m2CCED6020CA0ECC4EF064B94696AD05BDE7B8F0E(L_87, L_88, L_89, L_93, L_94, L_98, L_99, NULL);
		int64_t L_100 = V_19;
		V_19 = ((int64_t)((uint64_t)L_100>>4));
		int64_t L_101 = V_19;
		if (!L_101)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_102 = V_20;
		int32_t L_103 = V_6;
		V_20 = ((int32_t)il2cpp_codegen_add(L_102, L_103));
		goto IL_014b;
	}

IL_018d:
	{
		int32_t L_104 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0193:
	{
		int32_t L_105 = V_18;
		int32_t L_106 = V_4;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_0140;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_107 = V_13;
		NullCheck(L_107);
		V_23 = ((int32_t)(((RuntimeArray*)L_107)->max_length));
		goto IL_01b5;
	}

IL_01a1:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_108 = V_13;
		int32_t L_109 = V_23;
		int32_t L_110 = V_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_111 = V_13;
		int32_t L_112 = V_23;
		int32_t L_113 = V_6;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_114;
		L_114 = LongArray_AddShiftedUp_m0A82F2D09B3E250D94F2E28FE2F5BA5383985852(L_108, ((int32_t)il2cpp_codegen_subtract(L_109, L_110)), L_111, L_112, L_113, 8, NULL);
	}

IL_01b5:
	{
		int32_t L_115 = V_23;
		int32_t L_116 = V_6;
		int32_t L_117 = ((int32_t)il2cpp_codegen_subtract(L_115, L_116));
		V_23 = L_117;
		if (L_117)
		{
			goto IL_01a1;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_118 = V_13;
		int32_t L_119 = V_6;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_120 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m53A57034A0095AEF5BAF7BB9A7836BE5F440A708(L_120, L_118, 0, L_119, NULL);
		return L_120;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Reduce_m43AA6FD072488EC8097CF5F96FD50FF558DD3D98 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		V_0 = L_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = ___0_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___1_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = LongArray_ReduceInPlace_mAAD80246AC038B69E7585EAAA4131420D16FE70A(L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___m_ints = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ints), (void*)L_9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = __this->___m_ints;
		int32_t L_12 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0035:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_ReduceResult_m145A2F0CA986BDCC0394373AE8B14A57329CDB30 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_len, int32_t ___3_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_buf;
		int32_t L_1 = ___1_off;
		int32_t L_2 = ___2_len;
		int32_t L_3 = ___3_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___4_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = LongArray_ReduceInPlace_mAAD80246AC038B69E7585EAAA4131420D16FE70A(L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_buf;
		int32_t L_7 = ___1_off;
		int32_t L_8 = V_0;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_9 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m53A57034A0095AEF5BAF7BB9A7836BE5F440A708(L_9, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_ReduceInPlace_mAAD80246AC038B69E7585EAAA4131420D16FE70A (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_len, int32_t ___3_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = ___3_m;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, ((int32_t)63)))>>6));
		int32_t L_1 = ___2_len;
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_3 = ___2_len;
		return L_3;
	}

IL_000d:
	{
		int32_t L_4 = ___2_len;
		int32_t L_5 = ___3_m;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(L_4<<6)), ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_5<<1)), 1)), NULL);
		V_1 = L_6;
		int32_t L_7 = ___2_len;
		int32_t L_8 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_7<<6)), L_8));
		goto IL_002d;
	}

IL_0023:
	{
		int32_t L_9 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)64)));
	}

IL_002d:
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)64))))
		{
			goto IL_0023;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___4_ks;
		NullCheck(L_12);
		V_3 = ((int32_t)(((RuntimeArray*)L_12)->max_length));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___4_ks;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		int32_t L_17 = V_3;
		if ((((int32_t)L_17) > ((int32_t)1)))
		{
			goto IL_0046;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_004c;
	}

IL_0046:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___4_ks;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 2));
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B8_0 = L_21;
	}

IL_004c:
	{
		V_5 = G_B8_0;
		int32_t L_22 = ___3_m;
		int32_t L_23 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_22, ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)64))), NULL);
		V_6 = L_24;
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_6;
		int32_t L_28 = ___3_m;
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_26, L_27)), ((int32_t)il2cpp_codegen_subtract(L_28, L_29)), NULL);
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_25, L_30))>>6));
		int32_t L_31 = V_7;
		if ((((int32_t)L_31) <= ((int32_t)1)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_32 = ___2_len;
		int32_t L_33 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_32, L_33));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_34 = ___0_buf;
		int32_t L_35 = ___1_off;
		int32_t L_36 = ___2_len;
		int32_t L_37 = V_8;
		int32_t L_38 = ___3_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = ___4_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_ReduceVectorWise_mEEAB67D223DF855CB60364FC0513E438F98973CE(L_34, L_35, L_36, L_37, L_38, L_39, NULL);
		goto IL_0094;
	}

IL_0088:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40 = ___0_buf;
		int32_t L_41 = ___1_off;
		int32_t L_42 = ___2_len;
		int32_t L_43 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		___2_len = L_43;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_41, L_43))), (int64_t)((int64_t)0));
	}

IL_0094:
	{
		int32_t L_44 = ___2_len;
		int32_t L_45 = V_8;
		if ((((int32_t)L_44) > ((int32_t)L_45)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_46 = V_8;
		V_1 = ((int32_t)(L_46<<6));
	}

IL_009e:
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_6;
		if ((((int32_t)L_47) <= ((int32_t)L_48)))
		{
			goto IL_00b3;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_49 = ___0_buf;
		int32_t L_50 = ___1_off;
		int32_t L_51 = ___2_len;
		int32_t L_52 = V_6;
		int32_t L_53 = ___3_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = ___4_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_ReduceWordWise_m5468E3D76D82C376C97CD34FFBB73F3AA1695910(L_49, L_50, L_51, L_52, L_53, L_54, NULL);
		int32_t L_55 = V_6;
		V_1 = L_55;
	}

IL_00b3:
	{
		int32_t L_56 = V_1;
		int32_t L_57 = ___3_m;
		if ((((int32_t)L_56) <= ((int32_t)L_57)))
		{
			goto IL_00c2;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_58 = ___0_buf;
		int32_t L_59 = ___1_off;
		int32_t L_60 = V_1;
		int32_t L_61 = ___3_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ___4_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_ReduceBitWise_m3D4C66E635866902F433C3E0E1AA59B11982A0E4(L_58, L_59, L_60, L_61, L_62, NULL);
	}

IL_00c2:
	{
		int32_t L_63 = V_0;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceBitWise_m3D4C66E635866902F433C3E0E1AA59B11982A0E4 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_BitLength, int32_t ___3_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0017;
	}

IL_0002:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_buf;
		int32_t L_1 = ___1_off;
		int32_t L_2 = ___2_BitLength;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = LongArray_TestBit_m0F30BBA8A64ADB1AA297E44A735E87607C72CDF2(L_0, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = ___0_buf;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ___2_BitLength;
		int32_t L_7 = ___3_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___4_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_ReduceBit_mD848A59D6972A965E84402A62A2A915E2F37A561(L_4, L_5, L_6, L_7, L_8, NULL);
	}

IL_0017:
	{
		int32_t L_9 = ___2_BitLength;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		___2_BitLength = L_10;
		int32_t L_11 = ___3_m;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceBit_mD848A59D6972A965E84402A62A2A915E2F37A561 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_bit, int32_t ___3_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___0_buf;
		int32_t L_1 = ___1_off;
		int32_t L_2 = ___2_bit;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_FlipBit_mCAFFA1C939EE92C46B07C7A437C92C7320FC0237(L_0, L_1, L_2, NULL);
		int32_t L_3 = ___2_bit;
		int32_t L_4 = ___3_m;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___4_ks;
		NullCheck(L_5);
		V_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		goto IL_0020;
	}

IL_0013:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_buf;
		int32_t L_7 = ___1_off;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___4_ks;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_FlipBit_mCAFFA1C939EE92C46B07C7A437C92C7320FC0237(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_11, L_12)), NULL);
	}

IL_0020:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		V_1 = L_14;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = ___0_buf;
		int32_t L_16 = ___1_off;
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_FlipBit_mCAFFA1C939EE92C46B07C7A437C92C7320FC0237(L_15, L_16, L_17, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceWordWise_m5468E3D76D82C376C97CD34FFBB73F3AA1695910 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_len, int32_t ___3_toBit, int32_t ___4_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		int32_t L_0 = ___3_toBit;
		V_0 = ((int32_t)((uint32_t)L_0>>6));
		goto IL_0025;
	}

IL_0006:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___0_buf;
		int32_t L_2 = ___1_off;
		int32_t L_3 = ___2_len;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int64_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		int64_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ___0_buf;
		int32_t L_8 = ___1_off;
		int32_t L_9 = ___2_len;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, L_9))), (int64_t)((int64_t)0));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = ___0_buf;
		int32_t L_11 = ___1_off;
		int32_t L_12 = ___2_len;
		int64_t L_13 = V_1;
		int32_t L_14 = ___4_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___5_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_ReduceWord_m084BBA03CD24B77B50B7CB7F3B64DCDAE57B49DD(L_10, L_11, ((int32_t)(L_12<<6)), L_13, L_14, L_15, NULL);
	}

IL_0025:
	{
		int32_t L_16 = ___2_len;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		___2_len = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) > ((int32_t)L_18)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_19 = ___3_toBit;
		V_2 = ((int32_t)(L_19&((int32_t)63)));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_20 = ___0_buf;
		int32_t L_21 = ___1_off;
		int32_t L_22 = V_0;
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		int64_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = V_2;
		V_3 = ((int64_t)((uint64_t)L_24>>((int32_t)(L_25&((int32_t)63)))));
		int64_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_0061;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = ___0_buf;
		int32_t L_28 = ___1_off;
		int32_t L_29 = V_0;
		NullCheck(L_27);
		int64_t* L_30 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, L_29)))));
		int64_t L_31 = *((int64_t*)L_30);
		int64_t L_32 = V_3;
		int32_t L_33 = V_2;
		*((int64_t*)L_30) = (int64_t)((int64_t)(L_31^((int64_t)(L_32<<((int32_t)(L_33&((int32_t)63)))))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_34 = ___0_buf;
		int32_t L_35 = ___1_off;
		int32_t L_36 = ___3_toBit;
		int64_t L_37 = V_3;
		int32_t L_38 = ___4_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = ___5_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_ReduceWord_m084BBA03CD24B77B50B7CB7F3B64DCDAE57B49DD(L_34, L_35, L_36, L_37, L_38, L_39, NULL);
	}

IL_0061:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceWord_m084BBA03CD24B77B50B7CB7F3B64DCDAE57B49DD (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_bit, int64_t ___3_word, int32_t ___4_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_bit;
		int32_t L_1 = ___4_m;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___5_ks;
		NullCheck(L_2);
		V_1 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_001a;
	}

IL_000c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_buf;
		int32_t L_4 = ___1_off;
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___5_ks;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int64_t L_10 = ___3_word;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_FlipWord_m0BCF22EAA82AD715A9BFF44C9F41EC3DD32ACED4(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, L_9)), L_10, NULL);
	}

IL_001a:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		V_1 = L_12;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13 = ___0_buf;
		int32_t L_14 = ___1_off;
		int32_t L_15 = V_0;
		int64_t L_16 = ___3_word;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_FlipWord_m0BCF22EAA82AD715A9BFF44C9F41EC3DD32ACED4(L_13, L_14, L_15, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_ReduceVectorWise_mEEAB67D223DF855CB60364FC0513E438F98973CE (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_buf, int32_t ___1_off, int32_t ___2_len, int32_t ___3_words, int32_t ___4_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___3_words;
		int32_t L_1 = ___4_m;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_0<<6)), L_1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___5_ks;
		NullCheck(L_2);
		V_1 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		goto IL_0022;
	}

IL_000e:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_buf;
		int32_t L_4 = ___1_off;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___0_buf;
		int32_t L_6 = ___1_off;
		int32_t L_7 = ___3_words;
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_words;
		int32_t L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___5_ks;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_FlipVector_mB93C537C7CA0546A142AADAEF94E6A7C1DD5BD50(L_3, L_4, L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7)), ((int32_t)il2cpp_codegen_subtract(L_8, L_9)), ((int32_t)il2cpp_codegen_add(L_10, L_14)), NULL);
	}

IL_0022:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_1 = L_16;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = ___0_buf;
		int32_t L_18 = ___1_off;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_19 = ___0_buf;
		int32_t L_20 = ___1_off;
		int32_t L_21 = ___3_words;
		int32_t L_22 = ___2_len;
		int32_t L_23 = ___3_words;
		int32_t L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_FlipVector_mB93C537C7CA0546A142AADAEF94E6A7C1DD5BD50(L_17, L_18, L_19, ((int32_t)il2cpp_codegen_add(L_20, L_21)), ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_FlipVector_mB93C537C7CA0546A142AADAEF94E6A7C1DD5BD50 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_y, int32_t ___3_yOff, int32_t ___4_yLen, int32_t ___5_bits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___1_xOff;
		int32_t L_1 = ___5_bits;
		___1_xOff = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)((uint32_t)L_1>>6))));
		int32_t L_2 = ___5_bits;
		___5_bits = ((int32_t)(L_2&((int32_t)63)));
		int32_t L_3 = ___5_bits;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = ___0_x;
		int32_t L_5 = ___1_xOff;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___2_y;
		int32_t L_7 = ___3_yOff;
		int32_t L_8 = ___4_yLen;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Add_mA22F4B9350C62C048FADA6EAB3E2FACB3415F0D0(L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_001f:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = ___0_x;
		int32_t L_10 = ___1_xOff;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ___2_y;
		int32_t L_12 = ___3_yOff;
		int32_t L_13 = ___4_yLen;
		int32_t L_14 = ___5_bits;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_15;
		L_15 = LongArray_AddShiftedDown_mFD9588E7C0282E9E3E4FD388BE8012EF5CDC18DE(L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), L_11, L_12, L_13, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_14)), NULL);
		V_0 = L_15;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16 = ___0_x;
		int32_t L_17 = ___1_xOff;
		NullCheck(L_16);
		int64_t* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)));
		int64_t L_19 = *((int64_t*)L_18);
		int64_t L_20 = V_0;
		*((int64_t*)L_18) = (int64_t)((int64_t)(L_19^L_20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_ModSquare_m478B03E90779791C0ACC885B8AC6BF9AFD2AE266 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return __this;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2<<1));
		int32_t L_3 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0048;
	}

IL_001b:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = __this->___m_ints;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)((uint32_t)L_6>>1));
		int64_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int64_t L_12 = V_4;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_13;
		L_13 = LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF(((int32_t)L_12), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int64_t)L_13);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int64_t L_17 = V_4;
		int64_t L_18;
		L_18 = LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF(((int32_t)((int64_t)((uint64_t)L_17>>((int32_t)32)))), NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int64_t)L_18);
	}

IL_0048:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_001b;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_21 = V_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_22 = V_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = ___0_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___1_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = LongArray_ReduceInPlace_mAAD80246AC038B69E7585EAAA4131420D16FE70A(L_22, 0, ((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24, L_25, NULL);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_27 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m53A57034A0095AEF5BAF7BB9A7836BE5F440A708(L_27, L_21, 0, L_26, NULL);
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_ModSquareN_m37D53D809164C08F0395244CA828AA4ED877F8BA (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_n, int32_t ___1_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return __this;
	}

IL_000c:
	{
		int32_t L_2 = ___1_m;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(L_2, ((int32_t)63)))>>6))<<1)));
		V_1 = L_3;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = __this->___m_ints;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = V_1;
		int32_t L_6 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		goto IL_0041;
	}

IL_002b:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = V_1;
		int32_t L_8 = V_0;
		int32_t L_9 = ___1_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___2_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_SquareInPlace_mFC2B8A84F36E7B9F6A1CB081679B6DED074693C1(L_7, L_8, L_9, L_10, NULL);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = ___1_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___2_ks;
		int32_t L_15;
		L_15 = LongArray_ReduceInPlace_mAAD80246AC038B69E7585EAAA4131420D16FE70A(L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13, L_14, NULL);
		V_0 = L_15;
	}

IL_0041:
	{
		int32_t L_16 = ___0_n;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		___0_n = L_17;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = V_1;
		int32_t L_19 = V_0;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_20 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m53A57034A0095AEF5BAF7BB9A7836BE5F440A708(L_20, L_18, 0, L_19, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_Square_m410E2CBBEFEA589E2388C10FA4E0164F551E5A8B (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return __this;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2<<1));
		int32_t L_3 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0048;
	}

IL_001b:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = __this->___m_ints;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)((uint32_t)L_6>>1));
		int64_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int64_t L_12 = V_4;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_13;
		L_13 = LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF(((int32_t)L_12), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int64_t)L_13);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int64_t L_17 = V_4;
		int64_t L_18;
		L_18 = LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF(((int32_t)((int64_t)((uint64_t)L_17>>((int32_t)32)))), NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int64_t)L_18);
	}

IL_0048:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_001b;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_21 = V_2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_22 = V_2;
		NullCheck(L_22);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_23 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m53A57034A0095AEF5BAF7BB9A7836BE5F440A708(L_23, L_21, 0, ((int32_t)(((RuntimeArray*)L_22)->max_length)), NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_SquareInPlace_mFC2B8A84F36E7B9F6A1CB081679B6DED074693C1 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xLen, int32_t ___2_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int32_t L_0 = ___1_xLen;
		V_0 = ((int32_t)(L_0<<1));
		goto IL_0029;
	}

IL_0006:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___0_x;
		int32_t L_2 = ___1_xLen;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ___0_x;
		int32_t L_6 = V_0;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		V_0 = L_7;
		int64_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF(((int32_t)((int64_t)((uint64_t)L_8>>((int32_t)32)))), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int64_t)L_9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = ___0_x;
		int32_t L_11 = V_0;
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		V_0 = L_12;
		int64_t L_13 = V_1;
		int64_t L_14;
		L_14 = LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF(((int32_t)L_13), NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (int64_t)L_14);
	}

IL_0029:
	{
		int32_t L_15 = ___1_xLen;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		___1_xLen = L_16;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave_mCCAF20A81AD18157B09D44C69E7618BAED0B629D (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, int32_t ___5_width, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___5_width;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 3)))
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0043;
			}
			case 4:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_001f:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___2_z;
		int32_t L_4 = ___3_zOff;
		int32_t L_5 = ___4_count;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Interleave3_m01DF3000FF180D63BCC739E7EB7D6C44EC5C9A6B(L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}

IL_002b:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = ___0_x;
		int32_t L_7 = ___1_xOff;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		int32_t L_10 = ___4_count;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Interleave5_mAA4A57459B82DBC9878DF1E411E2F2B5A6223DCA(L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}

IL_0037:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ___0_x;
		int32_t L_12 = ___1_xOff;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13 = ___2_z;
		int32_t L_14 = ___3_zOff;
		int32_t L_15 = ___4_count;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_Interleave7_m7C215B4594143887903D7B50A79E3C61A2AAA83B(L_11, L_12, L_13, L_14, L_15, NULL);
		return;
	}

IL_0043:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16 = ___0_x;
		int32_t L_17 = ___1_xOff;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		int32_t L_20 = ___4_count;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___BitLengths;
		int32_t L_22 = ___5_width;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		LongArray_Interleave2_n_m528E11FF5E7EC4A5E71F73F147CE01B17D4D0651(L_16, L_17, L_18, L_19, L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, 1)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave3_m01DF3000FF180D63BCC739E7EB7D6C44EC5C9A6B (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		int32_t L_2 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int64_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_8;
		L_8 = LongArray_Interleave3_m780427CA06AC20F1030298B34E58480A93C0E76C(L_7, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (int64_t)L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0017:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___4_count;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave3_m780427CA06AC20F1030298B34E58480A93C0E76C (int64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_x;
		int64_t L_1 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = LongArray_Interleave3_21to63_m69AB9F85C1D63243CF810FFAFD96C0072AC5C9F8(((int32_t)(((int32_t)L_1)&((int32_t)2097151))), NULL);
		int64_t L_3 = ___0_x;
		int64_t L_4;
		L_4 = LongArray_Interleave3_21to63_m69AB9F85C1D63243CF810FFAFD96C0072AC5C9F8(((int32_t)(((int32_t)((int64_t)((uint64_t)L_3>>((int32_t)21))))&((int32_t)2097151))), NULL);
		int64_t L_5 = ___0_x;
		int64_t L_6;
		L_6 = LongArray_Interleave3_21to63_m69AB9F85C1D63243CF810FFAFD96C0072AC5C9F8(((int32_t)(((int32_t)((int64_t)((uint64_t)L_5>>((int32_t)42))))&((int32_t)2097151))), NULL);
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(L_0&((int64_t)(std::numeric_limits<int64_t>::min)())))|L_2))|((int64_t)(L_4<<1))))|((int64_t)(L_6<<2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave3_21to63_m69AB9F85C1D63243CF810FFAFD96C0072AC5C9F8 (int32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE3_TABLE;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1&((int32_t)127)));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE3_TABLE;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)(((int32_t)((uint32_t)L_5>>7))&((int32_t)127)));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE3_TABLE;
		int32_t L_9 = ___0_x;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)((uint32_t)L_9>>((int32_t)14)));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)L_11)&((int64_t)(uint64_t)((uint32_t)(-1)))))<<((int32_t)42)))|((int64_t)(((int64_t)(((int64_t)L_12)&((int64_t)(uint64_t)((uint32_t)(-1)))))<<((int32_t)21)))))|((int64_t)(((int64_t)L_13)&((int64_t)(uint64_t)((uint32_t)(-1)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave5_mAA4A57459B82DBC9878DF1E411E2F2B5A6223DCA (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		int32_t L_2 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int64_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_8;
		L_8 = LongArray_Interleave5_mBC8B0DE9A582C1D9EDF830FCA8172DC72221B950(L_7, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (int64_t)L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0017:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___4_count;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave5_mBC8B0DE9A582C1D9EDF830FCA8172DC72221B950 (int64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = LongArray_Interleave3_13to65_mB95305F8F1BF4CAF92019CA9AA0BCC51CAD07F8E(((int32_t)(((int32_t)L_0)&((int32_t)8191))), NULL);
		int64_t L_2 = ___0_x;
		int64_t L_3;
		L_3 = LongArray_Interleave3_13to65_mB95305F8F1BF4CAF92019CA9AA0BCC51CAD07F8E(((int32_t)(((int32_t)((int64_t)((uint64_t)L_2>>((int32_t)13))))&((int32_t)8191))), NULL);
		int64_t L_4 = ___0_x;
		int64_t L_5;
		L_5 = LongArray_Interleave3_13to65_mB95305F8F1BF4CAF92019CA9AA0BCC51CAD07F8E(((int32_t)(((int32_t)((int64_t)((uint64_t)L_4>>((int32_t)26))))&((int32_t)8191))), NULL);
		int64_t L_6 = ___0_x;
		int64_t L_7;
		L_7 = LongArray_Interleave3_13to65_mB95305F8F1BF4CAF92019CA9AA0BCC51CAD07F8E(((int32_t)(((int32_t)((int64_t)((uint64_t)L_6>>((int32_t)39))))&((int32_t)8191))), NULL);
		int64_t L_8 = ___0_x;
		int64_t L_9;
		L_9 = LongArray_Interleave3_13to65_mB95305F8F1BF4CAF92019CA9AA0BCC51CAD07F8E(((int32_t)(((int32_t)((int64_t)((uint64_t)L_8>>((int32_t)52))))&((int32_t)8191))), NULL);
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(L_1|((int64_t)(L_3<<1))))|((int64_t)(L_5<<2))))|((int64_t)(L_7<<3))))|((int64_t)(L_9<<4))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave3_13to65_mB95305F8F1BF4CAF92019CA9AA0BCC51CAD07F8E (int32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE5_TABLE;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1&((int32_t)127)));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE5_TABLE;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)((uint32_t)L_5>>7));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_0;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)L_7)&((int64_t)(uint64_t)((uint32_t)(-1)))))<<((int32_t)35)))|((int64_t)(((int64_t)L_8)&((int64_t)(uint64_t)((uint32_t)(-1)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave7_m7C215B4594143887903D7B50A79E3C61A2AAA83B (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		int32_t L_2 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int64_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_8;
		L_8 = LongArray_Interleave7_m80E3EA4D33171B3536CA7DD9B87CAE8CB275CB70(L_7, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (int64_t)L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0017:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___4_count;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave7_m80E3EA4D33171B3536CA7DD9B87CAE8CB275CB70 (int64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE7_TABLE;
		int64_t L_2 = ___0_x;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)(((int32_t)L_2)&((int32_t)511)));
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE7_TABLE;
		int64_t L_6 = ___0_x;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)(((int32_t)((int64_t)((uint64_t)L_6>>((int32_t)9))))&((int32_t)511)));
		int64_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE7_TABLE;
		int64_t L_10 = ___0_x;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)(((int32_t)((int64_t)((uint64_t)L_10>>((int32_t)18))))&((int32_t)511)));
		int64_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE7_TABLE;
		int64_t L_14 = ___0_x;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)(((int32_t)((int64_t)((uint64_t)L_14>>((int32_t)27))))&((int32_t)511)));
		int64_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE7_TABLE;
		int64_t L_18 = ___0_x;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)(((int32_t)((int64_t)((uint64_t)L_18>>((int32_t)36))))&((int32_t)511)));
		int64_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_21 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE7_TABLE;
		int64_t L_22 = ___0_x;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)(((int32_t)((int64_t)((uint64_t)L_22>>((int32_t)45))))&((int32_t)511)));
		int64_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_25 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE7_TABLE;
		int64_t L_26 = ___0_x;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)(((int32_t)((int64_t)((uint64_t)L_26>>((int32_t)54))))&((int32_t)511)));
		int64_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(L_0&((int64_t)(std::numeric_limits<int64_t>::min)())))|L_4))|((int64_t)(L_8<<1))))|((int64_t)(L_12<<2))))|((int64_t)(L_16<<3))))|((int64_t)(L_20<<4))))|((int64_t)(L_24<<5))))|((int64_t)(L_28<<6))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray_Interleave2_n_m528E11FF5E7EC4A5E71F73F147CE01B17D4D0651 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_x, int32_t ___1_xOff, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___2_z, int32_t ___3_zOff, int32_t ___4_count, int32_t ___5_rounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		int32_t L_2 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int64_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ___5_rounds;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = LongArray_Interleave2_n_m6F367448A6CA6CD9E2E01A03324E66E7A54BC2AF(L_7, L_8, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (int64_t)L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0019:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___4_count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave2_n_m6F367448A6CA6CD9E2E01A03324E66E7A54BC2AF (int64_t ___0_x, int32_t ___1_rounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_004f;
	}

IL_0002:
	{
		int32_t L_0 = ___1_rounds;
		___1_rounds = ((int32_t)il2cpp_codegen_subtract(L_0, 2));
		int64_t L_1 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = LongArray_Interleave4_16to64_m9948A5C96CF691A1E9D3C54005EF8D598678395D(((int32_t)(((int32_t)L_1)&((int32_t)65535))), NULL);
		int64_t L_3 = ___0_x;
		int64_t L_4;
		L_4 = LongArray_Interleave4_16to64_m9948A5C96CF691A1E9D3C54005EF8D598678395D(((int32_t)(((int32_t)((int64_t)((uint64_t)L_3>>((int32_t)16))))&((int32_t)65535))), NULL);
		int64_t L_5 = ___0_x;
		int64_t L_6;
		L_6 = LongArray_Interleave4_16to64_m9948A5C96CF691A1E9D3C54005EF8D598678395D(((int32_t)(((int32_t)((int64_t)((uint64_t)L_5>>((int32_t)32))))&((int32_t)65535))), NULL);
		int64_t L_7 = ___0_x;
		int64_t L_8;
		L_8 = LongArray_Interleave4_16to64_m9948A5C96CF691A1E9D3C54005EF8D598678395D(((int32_t)(((int32_t)((int64_t)((uint64_t)L_7>>((int32_t)48))))&((int32_t)65535))), NULL);
		___0_x = ((int64_t)(((int64_t)(((int64_t)(L_2|((int64_t)(L_4<<1))))|((int64_t)(L_6<<2))))|((int64_t)(L_8<<3))));
	}

IL_004f:
	{
		int32_t L_9 = ___1_rounds;
		if ((((int32_t)L_9) > ((int32_t)1)))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_10 = ___1_rounds;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		int64_t L_11 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		int64_t L_12;
		L_12 = LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF(((int32_t)L_11), NULL);
		int64_t L_13 = ___0_x;
		int64_t L_14;
		L_14 = LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF(((int32_t)((int64_t)((uint64_t)L_13>>((int32_t)32)))), NULL);
		___0_x = ((int64_t)(L_12|((int64_t)(L_14<<1))));
	}

IL_006d:
	{
		int64_t L_15 = ___0_x;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave4_16to64_m9948A5C96CF691A1E9D3C54005EF8D598678395D (int32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE4_TABLE;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1&((int32_t)255)));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE4_TABLE;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)((uint32_t)L_5>>8));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_0;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)L_7)&((int64_t)(uint64_t)((uint32_t)(-1)))))<<((int32_t)32)))|((int64_t)(((int64_t)L_8)&((int64_t)(uint64_t)((uint32_t)(-1)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongArray_Interleave2_32to64_mC8C5B826554F462E65464414DF7EAE8898A891AF (int32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE2_TABLE;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1&((int32_t)255)));
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE2_TABLE;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255)));
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<((int32_t)16)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE2_TABLE;
		int32_t L_9 = ___0_x;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))&((int32_t)255)));
		uint16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE2_TABLE;
		int32_t L_13 = ___0_x;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)((uint32_t)L_13>>((int32_t)24)));
		uint16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_0;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int32_t)((int32_t)L_11|((int32_t)((int32_t)L_15<<((int32_t)16))))))&((int64_t)(uint64_t)((uint32_t)(-1)))))<<((int32_t)32)))|((int64_t)(((int64_t)L_16)&((int64_t)(uint64_t)((uint32_t)(-1)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_ModInverse_m41CF02E79B2DAEB4EE0652DD35248973E9056BC8 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, int32_t ___0_m, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_1 = NULL;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_2 = NULL;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_3 = NULL;
	LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_Degree_mEADB229BB6FEA43B616B683A949686E2B9974AB2(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LongArray_ModInverse_m41CF02E79B2DAEB4EE0652DD35248973E9056BC8_RuntimeMethod_var)));
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		return __this;
	}

IL_0016:
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_4;
		L_4 = LongArray_Copy_mF4784B92880D2BEE1C146B2C748EB41A18F8C82D(__this, NULL);
		V_1 = L_4;
		int32_t L_5 = ___0_m;
		int32_t L_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, ((int32_t)63)))>>6));
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_7 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m8220A7557B936629D6A4635A891ADB7F39C53C46(L_7, L_6, NULL);
		V_2 = L_7;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_8 = V_2;
		NullCheck(L_8);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = L_8->___m_ints;
		int32_t L_10 = ___0_m;
		int32_t L_11 = ___0_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___1_ks;
		il2cpp_codegen_runtime_class_init_inline(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray_ReduceBit_mD848A59D6972A965E84402A62A2A915E2F37A561(L_9, 0, L_10, L_11, L_12, NULL);
		int32_t L_13 = L_6;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_14 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m8220A7557B936629D6A4635A891ADB7F39C53C46(L_14, L_13, NULL);
		V_3 = L_14;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_15 = V_3;
		NullCheck(L_15);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_16 = L_15->___m_ints;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (int64_t)((int64_t)1));
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_17 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m8220A7557B936629D6A4635A891ADB7F39C53C46(L_17, L_13, NULL);
		V_4 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_20);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_19;
		int32_t L_22 = ___0_m;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)il2cpp_codegen_add(L_22, 1)));
		V_5 = L_21;
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_23 = (LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7*)(LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7*)SZArrayNew(LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7_il2cpp_TypeInfo_var, (uint32_t)2);
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_24 = L_23;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_25 = V_1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)L_25);
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_26 = L_24;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_27 = V_2;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)L_27);
		V_6 = L_26;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		V_7 = L_29;
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_30 = (LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7*)(LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7*)SZArrayNew(LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7_il2cpp_TypeInfo_var, (uint32_t)2);
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_31 = L_30;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_32 = V_3;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)L_32);
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_33 = L_31;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_34 = V_4;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)L_34);
		V_8 = L_33;
		V_9 = 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_5;
		int32_t L_36 = V_9;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_10 = L_38;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_7;
		int32_t L_40 = V_9;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_11 = L_42;
		int32_t L_43 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_5;
		int32_t L_45 = V_9;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_subtract(1, L_45));
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_43, L_47));
	}

IL_00ad:
	{
		int32_t L_48 = V_12;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_49 = V_12;
		V_12 = ((-L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_5;
		int32_t L_51 = V_9;
		int32_t L_52 = V_10;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (int32_t)L_52);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_7;
		int32_t L_54 = V_9;
		int32_t L_55 = V_11;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)L_55);
		int32_t L_56 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(1, L_56));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_5;
		int32_t L_58 = V_9;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_10 = L_60;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_7;
		int32_t L_62 = V_9;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		int32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_11 = L_64;
	}

IL_00d9:
	{
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_65 = V_6;
		int32_t L_66 = V_9;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_69 = V_6;
		int32_t L_70 = V_9;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_subtract(1, L_70));
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_5;
		int32_t L_74 = V_9;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_subtract(1, L_74));
		int32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = V_12;
		NullCheck(L_68);
		LongArray_AddShiftedByBitsSafe_m0A1E2A44788CAE6CA757FF594E19C650C7E670EF(L_68, L_72, L_76, L_77, NULL);
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_78 = V_6;
		int32_t L_79 = V_9;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		int32_t L_82 = V_10;
		NullCheck(L_81);
		int32_t L_83;
		L_83 = LongArray_DegreeFrom_m5A37606E5950D75AE8BFFEBFAE41C8AA7F2AC224(L_81, L_82, NULL);
		V_13 = L_83;
		int32_t L_84 = V_13;
		if (L_84)
		{
			goto IL_010d;
		}
	}
	{
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_85 = V_8;
		int32_t L_86 = V_9;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_subtract(1, L_86));
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		return L_88;
	}

IL_010d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_7;
		int32_t L_90 = V_9;
		NullCheck(L_89);
		int32_t L_91 = ((int32_t)il2cpp_codegen_subtract(1, L_90));
		int32_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		V_14 = L_92;
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_93 = V_8;
		int32_t L_94 = V_9;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_97 = V_8;
		int32_t L_98 = V_9;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_subtract(1, L_98));
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_14;
		int32_t L_102 = V_12;
		NullCheck(L_96);
		LongArray_AddShiftedByBitsSafe_m0A1E2A44788CAE6CA757FF594E19C650C7E670EF(L_96, L_100, L_101, L_102, NULL);
		int32_t L_103 = V_14;
		int32_t L_104 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add(L_103, L_104));
		int32_t L_105 = V_14;
		int32_t L_106 = V_11;
		if ((((int32_t)L_105) <= ((int32_t)L_106)))
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_107 = V_14;
		V_11 = L_107;
		goto IL_0152;
	}

IL_013e:
	{
		int32_t L_108 = V_14;
		int32_t L_109 = V_11;
		if ((!(((uint32_t)L_108) == ((uint32_t)L_109))))
		{
			goto IL_0152;
		}
	}
	{
		LongArrayU5BU5D_t4391EFED3D06F2948D4D98D054EEC7A8214EEAB7* L_110 = V_8;
		int32_t L_111 = V_9;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		int32_t L_114 = V_11;
		NullCheck(L_113);
		int32_t L_115;
		L_115 = LongArray_DegreeFrom_m5A37606E5950D75AE8BFFEBFAE41C8AA7F2AC224(L_113, L_114, NULL);
		V_11 = L_115;
	}

IL_0152:
	{
		int32_t L_116 = V_12;
		int32_t L_117 = V_13;
		int32_t L_118 = V_10;
		V_12 = ((int32_t)il2cpp_codegen_add(L_116, ((int32_t)il2cpp_codegen_subtract(L_117, L_118))));
		int32_t L_119 = V_13;
		V_10 = L_119;
		goto IL_00ad;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongArray_Equals_m316AA849747A15582E77392C0C3EAA045A94E9C6 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* >::Invoke(4, __this, ((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)IsInstClass((RuntimeObject*)L_0, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongArray_Equals_m617D12C0B295908D06733BF8CE98C538CA1C2AF9 (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_0 = ___0_other;
		if ((!(((RuntimeObject*)(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)__this) == ((RuntimeObject*)(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_1 = ___0_other;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_2;
		L_2 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(__this, NULL);
		V_0 = L_2;
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_3 = ___0_other;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(L_3, NULL);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_0021:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = __this->___m_ints;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int64_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_10 = ___0_other;
		NullCheck(L_10);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = L_10->___m_ints;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int64_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int64_t)L_9) == ((int64_t)L_14)))
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0039:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongArray_GetHashCode_mAF876E2DFAD9377F1FA3008426707FE307D88ADE (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(__this, NULL);
		V_0 = L_0;
		V_1 = 1;
		V_2 = 0;
		goto IL_0031;
	}

IL_000d:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = __this->___m_ints;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)31)));
		int32_t L_6 = V_1;
		int64_t L_7 = V_3;
		V_1 = ((int32_t)(L_6^((int32_t)L_7)));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)31)));
		int32_t L_9 = V_1;
		int64_t L_10 = V_3;
		V_1 = ((int32_t)(L_9^((int32_t)((int64_t)((uint64_t)L_10>>((int32_t)32))))));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0031:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* LongArray_Copy_mF4784B92880D2BEE1C146B2C748EB41A18F8C82D (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___m_ints;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1;
		L_1 = Arrays_Clone_m820D1ADCAC2C03FA8C0A778E19658070CD6266EE(L_0, NULL);
		LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* L_2 = (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371*)il2cpp_codegen_object_new(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		LongArray__ctor_m914C2DF2A284EF630BB601B3BAC5ABAF9E6D9A95(L_2, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LongArray_ToString_mFA9891D36BC2C35948D2A7B2A456C3A2F6C01E0F (LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E6B7FA82041970D08C796C34F442A8C5D030234);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = LongArray_GetUsedLength_m20D9353D85EACE3287C174DD06030F0FB9F042B4(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
	}

IL_0010:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_2 = __this->___m_ints;
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		V_0 = L_4;
		NullCheck(L_2);
		int32_t L_5 = L_4;
		int64_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Convert_ToString_mD50A87BAAF57E646B5A7B8AE989EC2A6B8DC1057(L_6, 2, NULL);
		StringBuilder_t* L_8 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_8, L_7, NULL);
		V_1 = L_8;
		goto IL_005f;
	}

IL_002a:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = __this->___m_ints;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int64_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = Convert_ToString_mD50A87BAAF57E646B5A7B8AE989EC2A6B8DC1057(L_12, 2, NULL);
		V_2 = L_13;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		V_3 = L_15;
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)64))))
		{
			goto IL_0057;
		}
	}
	{
		StringBuilder_t* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(_stringLiteral1E6B7FA82041970D08C796C34F442A8C5D030234);
		String_t* L_19;
		L_19 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(_stringLiteral1E6B7FA82041970D08C796C34F442A8C5D030234, L_18, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_19, NULL);
	}

IL_0057:
	{
		StringBuilder_t* L_21 = V_1;
		String_t* L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, L_22, NULL);
	}

IL_005f:
	{
		int32_t L_24 = V_0;
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		V_0 = L_25;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t* L_26 = V_1;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_26);
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongArray__cctor_mACA0671046E60245AFFD1FC72BD2871B6E56C238 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____037BE04C4468BC2A186CC905D1F673CDFAAC254CEBEB545465B53F83A97830C5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____14A5D850C255623F9472E3C650ABCE0C78D32F0276B315B3A276A0462D97A1AC_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____8271B98A74E2ED3AC4E690289279C25841A5617BE3D992BED6CB7486F95060D9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____84EBACB335F7FB2D4C6AF94256B2DD565EFFE552C9A1CB725C5B5C338914412D_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____CB6DED39AE0C25F0748B553A13DCA00F6B77780B9F34B0B0F4C56BB7BF768C82_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____E0750D3E8FE41BBC5838F6D34CF434A4C764652CDC4BDC7DE6CE8393DE3C53A8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____84EBACB335F7FB2D4C6AF94256B2DD565EFFE552C9A1CB725C5B5C338914412D_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE2_TABLE = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE2_TABLE), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____CB6DED39AE0C25F0748B553A13DCA00F6B77780B9F34B0B0F4C56BB7BF768C82_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE3_TABLE = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE3_TABLE), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____037BE04C4468BC2A186CC905D1F673CDFAAC254CEBEB545465B53F83A97830C5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE4_TABLE = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE4_TABLE), (void*)L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____8271B98A74E2ED3AC4E690289279C25841A5617BE3D992BED6CB7486F95060D9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE5_TABLE = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE5_TABLE), (void*)L_10);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____E0750D3E8FE41BBC5838F6D34CF434A4C764652CDC4BDC7DE6CE8393DE3C53A8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE7_TABLE = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___INTERLEAVE7_TABLE), (void*)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____14A5D850C255623F9472E3C650ABCE0C78D32F0276B315B3A276A0462D97A1AC_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___BitLengths = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_StaticFields*)il2cpp_codegen_static_fields_for(LongArray_tAFB9476143BACDF71BDDFA01891550E6E5E50371_il2cpp_TypeInfo_var))->___BitLengths), (void*)L_16);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleXNegateYPointMap__ctor_mD9190E1B9256BC9A91C4CA57AAB34A9BC854934A (ScaleXNegateYPointMap_tCC989B085454BD686A752FEE04AA82DBE935C11C* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = ___0_scale;
		__this->___scale = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scale), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ScaleXNegateYPointMap_Map_m2688A78CA4A9B0DE915E257406077785230FE658 (ScaleXNegateYPointMap_tCC989B085454BD686A752FEE04AA82DBE935C11C* __this, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_0 = ___0_p;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = __this->___scale;
		NullCheck(L_0);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_2;
		L_2 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(21, L_0, L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleXPointMap__ctor_mE3D5D3FEBEF67362C7E2ACEDB88C9B005141D40E (ScaleXPointMap_tEE03996A7817142C6D2B9FDD52F0FB6FD2507915* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = ___0_scale;
		__this->___scale = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scale), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ScaleXPointMap_Map_mB6CD8724B091FF4E5648C5B2EAA4D4444BFE3F48 (ScaleXPointMap_tEE03996A7817142C6D2B9FDD52F0FB6FD2507915* __this, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_0 = ___0_p;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = __this->___scale;
		NullCheck(L_0);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_2;
		L_2 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(20, L_0, L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleYNegateXPointMap__ctor_m369081C2806A45A8DF278EF240D5966454FCE5DA (ScaleYNegateXPointMap_tE880C8E49E150782A1708C4FD32C7B9A7B05EABC* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = ___0_scale;
		__this->___scale = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scale), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ScaleYNegateXPointMap_Map_mB69BD44AFD70BB3F5708A96A2DB1AA19A8939A98 (ScaleYNegateXPointMap_tE880C8E49E150782A1708C4FD32C7B9A7B05EABC* __this, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_0 = ___0_p;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = __this->___scale;
		NullCheck(L_0);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_2;
		L_2 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(23, L_0, L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleYPointMap__ctor_m79671BA575319932B63C8089311EB1BCFA43AC32 (ScaleYPointMap_t1728406478CF6D7D868BA947B900B1C68FF8941A* __this, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___0_scale, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = ___0_scale;
		__this->___scale = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scale), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ScaleYPointMap_Map_mEDFC18F67424820B69E90EA253F587F1A06E5773 (ScaleYPointMap_t1728406478CF6D7D868BA947B900B1C68FF8941A* __this, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_0 = ___0_p;
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_1 = __this->___scale;
		NullCheck(L_0);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_2;
		L_2 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(22, L_0, L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* SimpleLookupTable_Copy_mB78DB86953A6404776EFDED96B9DBC4AB4A30B01 (ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* ___0_points, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_len;
		ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* L_1 = (ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0*)(ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0*)SZArrayNew(ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* L_2 = V_0;
		int32_t L_3 = V_1;
		ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* L_4 = ___0_points;
		int32_t L_5 = ___1_off;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0017:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = ___2_len;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLookupTable__ctor_mF001039BDDCB2628F88982CDDA452CFAA8BA5BA5 (SimpleLookupTable_t51ABDF88D6F688DA634C89F172744983F8AA41F7* __this, ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* ___0_points, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) 
{
	{
		AbstractECLookupTable__ctor_m7863036F0E98154C16B1A2FB4A82870877228757(__this, NULL);
		ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* L_0 = ___0_points;
		int32_t L_1 = ___1_off;
		int32_t L_2 = ___2_len;
		ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* L_3;
		L_3 = SimpleLookupTable_Copy_mB78DB86953A6404776EFDED96B9DBC4AB4A30B01(L_0, L_1, L_2, NULL);
		__this->___points = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleLookupTable_get_Size_mBAB7B61C66DF0526F3D586CDCEB1B9BEA645A19A (SimpleLookupTable_t51ABDF88D6F688DA634C89F172744983F8AA41F7* __this, const RuntimeMethod* method) 
{
	{
		ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* L_0 = __this->___points;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* SimpleLookupTable_Lookup_mD4E63A281211211768C31006215A670870682372 (SimpleLookupTable_t51ABDF88D6F688DA634C89F172744983F8AA41F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral777C88FC8E1B713E59061089D6CFB18EB75A109E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleLookupTable_Lookup_mD4E63A281211211768C31006215A670870682372_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* SimpleLookupTable_LookupVar_mBC00F17C4B6D1444BEEF479BBE1DB32B3C9F1DFF (SimpleLookupTable_t51ABDF88D6F688DA634C89F172744983F8AA41F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ECPointU5BU5D_t7E6AC5E30307E8F3B088280A2B8A08CB6C3B3EE0* L_0 = __this->___points;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_CalculateS_m23173DF3C42B19B42451ECC7FBBF01F00CB399FB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_r;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_DecodeScalar_mC591CB69A5FDB304E26277927C6A1A5CB1DAEBBE(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_k;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		Ed25519_DecodeScalar_mC591CB69A5FDB304E26277927C6A1A5CB1DAEBBE(L_4, 0, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_2 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_s;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_2;
		Ed25519_DecodeScalar_mC591CB69A5FDB304E26277927C6A1A5CB1DAEBBE(L_7, 0, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		uint32_t L_12;
		L_12 = Nat256_MulAddTo_m4EB131DD93D2FFCB2380F0C0427994014B0A3248(L_9, L_10, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_3 = L_13;
		V_4 = 0;
		goto IL_0058;
	}

IL_0044:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
		int32_t L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_Encode32_mE006CA7C69426C2798B88A4B9CC6A59DC0BD82A5(L_17, L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 4)), NULL);
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0058:
	{
		int32_t L_21 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Ed25519_ReduceScalar_mAE6C41ADB2B1B095A8DA98B7364D394E4AB7776F(L_23, NULL);
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckContextVar_m52786778C2ED745C86206C8C0629A714B6E1C8B7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_ctx, uint8_t ___1_phflag, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_ctx;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		uint8_t L_1 = ___1_phflag;
		if (!L_1)
		{
			goto IL_0016;
		}
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_ctx;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_ctx;
		NullCheck(L_3);
		return (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) < ((int32_t)((int32_t)256)))? 1 : 0);
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_m1B8BA38167F0FAA502542C75CE036100C74A83AC (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_3, L_4, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_2;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_5, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_7, L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_2;
		X25519Field_Sub_m8AEBB58A47C4DBC60E3BA0EB57848AC3F07E6E0F(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_13, L_14, L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		X25519Field_AddOne_mCC3ED2831D975EE7B9F9317EABE7A6CC5A384B39(L_16, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_0;
		X25519Field_Sub_m8AEBB58A47C4DBC60E3BA0EB57848AC3F07E6E0F(L_17, L_18, L_19, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_0;
		X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360(L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		int32_t L_22;
		L_22 = X25519Field_IsZero_m3FF1DD4E75DBD2F4F9768D0B465E3DD00F1F5883(L_21, NULL);
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_m7398F28DBAF2FB40C08E51C94A7E7D0B200AE617 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_3 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_4, L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_2;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_6, L_7, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___2_z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_3;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		X25519Field_Sub_m8AEBB58A47C4DBC60E3BA0EB57848AC3F07E6E0F(L_13, L_14, L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_16, L_17, L_18, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_3;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_19, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_0;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_0;
		X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D(L_24, L_25, L_26, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_0;
		X25519Field_Sub_m8AEBB58A47C4DBC60E3BA0EB57848AC3F07E6E0F(L_27, L_28, L_29, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_0;
		X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360(L_30, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32;
		L_32 = X25519Field_IsZero_m3FF1DD4E75DBD2F4F9768D0B465E3DD00F1F5883(L_31, NULL);
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckPointVar_m5110B04358E2737AB9B70C88F2F18851318885C9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_p;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_Decode32_m5AAC6E103E67EAC5584460CBC2A3CE415F2AE89C(L_1, 0, L_2, 0, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		NullCheck(L_3);
		uint32_t* L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int32_t L_5 = *((uint32_t*)L_4);
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5&((int32_t)2147483647LL)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___P;
		bool L_8;
		L_8 = Nat256_Gte_m0D7BEC211748799F5D94C66F552631B8349D892C(L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckScalarVar_m6410AF4383E7C974A0E35B0F624DABE8D6BF558A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_s;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_DecodeScalar_mC591CB69A5FDB304E26277927C6A1A5CB1DAEBBE(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___L;
		bool L_5;
		L_5 = Nat256_Gte_m0D7BEC211748799F5D94C66F552631B8349D892C(L_3, L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed25519_CreateDigest_mFA846F96A403E05919A597C6A4933AD43B49A111 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* L_0 = (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F*)il2cpp_codegen_object_new(Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F_il2cpp_TypeInfo_var);
		Sha512Digest__ctor_mB727CCFFE4EC36BFC1813C176E076408CF2FF2CC(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed25519_CreatePrehash_m35348E026DF7D9E1DDA5CBEED4BC9DCAA22A2453 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed25519_CreateDigest_mFA846F96A403E05919A597C6A4933AD43B49A111(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return ((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bs;
		int32_t L_15 = ___1_off;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		___1_off = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Decode32_m5AAC6E103E67EAC5584460CBC2A3CE415F2AE89C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_bsOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, int32_t ___3_nOff, int32_t ___4_nLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_n;
		int32_t L_1 = ___3_nOff;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bs;
		int32_t L_4 = ___1_bsOff;
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_3, ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_multiply(L_5, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint32_t)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___4_nLen;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_DecodePointVar_m363BF607456706202E92EB1DDD3B0D2798674BAB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, int32_t ___1_pOff, bool ___2_negate, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		int32_t L_1 = ___1_pOff;
		int32_t L_2 = ___1_pOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Arrays_CopyOfRange_m2FEFC438755F0A2DE6E02C05303B2654984C1965(L_0, L_1, ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)32))), NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Ed25519_CheckPointVar_m5110B04358E2737AB9B70C88F2F18851318885C9(L_4, NULL);
		if (L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)31);
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)(((int32_t)((int32_t)L_8&((int32_t)128)))>>7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		uint8_t* L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_11 = *((uint8_t*)L_10);
		*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_11&((int32_t)127))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_13 = ___3_r;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___y;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Decode_m338AAEE543F41CC1719A27E7DC71809BA35CAD95(L_12, 0, L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_2 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_3 = L_16;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_17 = ___3_r;
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_3;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_20, L_21, L_22, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		X25519Field_SubOne_m97260136BAF4BA276B86F1F6DE989BC536257BA7(L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_3;
		X25519Field_AddOne_mCC3ED2831D975EE7B9F9317EABE7A6CC5A384B39(L_24, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_3;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_27 = ___3_r;
		NullCheck(L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___x;
		bool L_29;
		L_29 = X25519Field_SqrtRatioVar_m4A0948060EB4FCB9D9C180C3D50D0875FE8A797C(L_25, L_26, L_28, NULL);
		if (L_29)
		{
			goto IL_0080;
		}
	}
	{
		return (bool)0;
	}

IL_0080:
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_30 = ___3_r;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360(L_31, NULL);
		int32_t L_32 = V_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_009e;
		}
	}
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_33 = ___3_r;
		NullCheck(L_33);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = L_33->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = X25519Field_IsZeroVar_m62A905AC23C5F48F0988F53A7EDDEF8FA1C3EE76(L_34, NULL);
		if (!L_35)
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_009e:
	{
		bool L_36 = ___2_negate;
		int32_t L_37 = V_1;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_38 = ___3_r;
		NullCheck(L_38);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38->___x;
		NullCheck(L_39);
		int32_t L_40 = 0;
		int32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if (!((int32_t)((int32_t)L_36^((((int32_t)((((int32_t)L_37) == ((int32_t)((int32_t)(L_41&1))))? 1 : 0)) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_00c3;
		}
	}
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_42 = ___3_r;
		NullCheck(L_42);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = L_42->___x;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_44 = ___3_r;
		NullCheck(L_44);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = L_44->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Negate_mCA6BC2326D31E4E3BC5087A3CCCF555B1F950F57(L_43, L_45, NULL);
	}

IL_00c3:
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_46 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_PointExtendXY_m5E15B5B20818228014AB4A4E50AA26453A89AA80(L_46, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_DecodeScalar_mC591CB69A5FDB304E26277927C6A1A5CB1DAEBBE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_n;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_Decode32_m5AAC6E103E67EAC5584460CBC2A3CE415F2AE89C(L_0, L_1, L_2, 0, 8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Dom2_m721CBD5D05880B7324137CE0E72183B9A69007A7 (RuntimeObject* ___0_d, uint8_t ___1_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_ctx;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_1 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___Dom2Prefix;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___Dom2Prefix;
		NullCheck(L_3);
		NullCheck(L_1);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_1, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		RuntimeObject* L_4 = ___0_d;
		uint8_t L_5 = ___1_phflag;
		NullCheck(L_4);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_ctx;
		NullCheck(L_7);
		NullCheck(L_6);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_6, (uint8_t)((int32_t)(uint8_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
		RuntimeObject* L_8 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_ctx;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_ctx;
		NullCheck(L_10);
		NullCheck(L_8);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_8, L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)));
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode24_mB8EB3F1979E4A27105616824FC7E7852CF8A12FB (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode32_mE006CA7C69426C2798B88A4B9CC6A59DC0BD82A5 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_bs;
		int32_t L_12 = ___2_off;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___2_off = L_13;
		uint32_t L_14 = ___0_n;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode56_m522ECDDCA6BC2A5B6EBBE54179DC289A08A69B8F (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_bs;
		int32_t L_2 = ___2_off;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_Encode32_mE006CA7C69426C2798B88A4B9CC6A59DC0BD82A5(((int32_t)(uint32_t)L_0), L_1, L_2, NULL);
		uint64_t L_3 = ___0_n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_bs;
		int32_t L_5 = ___2_off;
		Ed25519_Encode24_mB8EB3F1979E4A27105616824FC7E7852CF8A12FB(((int32_t)(uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)32)))), L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_EncodePoint_mB12A34AEF57763D718AFD69D3202F1BBDF0F783A (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_1;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		X25519Field_Inv_m34B01BF3BB188845DBFAACEC7C58C662B73B90CE(L_3, L_4, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_5 = ___0_p;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_6, L_7, L_8, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_9 = ___0_p;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360(L_13, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360(L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Ed25519_CheckPoint_m1B8BA38167F0FAA502542C75CE036100C74A83AC(L_15, L_16, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_r;
		int32_t L_20 = ___2_rOff;
		X25519Field_Encode_m81DFE01020AC68F5F661A5695D1B573EFD9EB4B6(L_18, L_19, L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___1_r;
		int32_t L_22 = ___2_rOff;
		NullCheck(L_21);
		uint8_t* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, ((int32_t)32))), 1)))));
		int32_t L_24 = *((uint8_t*)L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 0;
		int32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		*((int8_t*)L_23) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_24|((int32_t)(uint8_t)((int32_t)(((int32_t)(L_27&1))<<7))))));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_GeneratePrivateKey_m392B80481CE268EE49789E7B994DC64BDF1CFA46 (SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___0_random, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, const RuntimeMethod* method) 
{
	{
		SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* L_0 = ___0_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_k;
		NullCheck(L_0);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_GeneratePublicKey_m1622D640A8C492296486CF5A993F688D29BEF3DC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed25519_CreateDigest_mFA846F96A403E05919A597C6A4933AD43B49A111(NULL);
		RuntimeObject* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		RuntimeObject* L_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_sk;
		int32_t L_6 = ___1_skOff;
		int32_t L_7 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_4);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_4);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_4, L_8, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		Ed25519_PruneScalar_mFCE98B6E0A5056FE969933FA1A1FEE053BD87057(L_11, 0, L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_pk;
		int32_t L_15 = ___3_pkOff;
		Ed25519_ScalarMultBaseEncoded_m7F598FF9DE99D7AE191001ADF081F55E420C36CE(L_13, L_14, L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed25519_GetWnafVar_mB31696C9195687F7981D68978CB2DF500DCAF56B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_n, int32_t ___1_width, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_6 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		NullCheck(L_1);
		V_7 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_8 = 8;
		goto IL_003d;
	}

IL_0015:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_n;
		int32_t L_3 = V_8;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_9 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_7;
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		V_7 = L_8;
		uint32_t L_9 = V_9;
		uint32_t L_10 = V_6;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))|((int32_t)((int32_t)L_10<<((int32_t)16))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		int32_t L_12 = V_7;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_7 = L_13;
		uint32_t L_14 = V_9;
		uint32_t L_15 = L_14;
		V_6 = L_15;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_15);
	}

IL_003d:
	{
		int32_t L_16 = V_8;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		V_8 = L_17;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_18 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)253));
		V_1 = L_18;
		int32_t L_19 = ___1_width;
		int32_t L_20 = ((int32_t)(1<<((int32_t)(L_19&((int32_t)31)))));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		V_3 = ((int32_t)((uint32_t)L_20>>1));
		V_4 = 0;
		V_5 = 0;
		V_10 = 0;
		goto IL_00d4;
	}

IL_006a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		int32_t L_22 = V_10;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_11 = L_24;
		goto IL_00c1;
	}

IL_0072:
	{
		uint32_t L_25 = V_11;
		int32_t L_26 = V_5;
		V_12 = ((int32_t)((uint32_t)L_25>>((int32_t)(L_26&((int32_t)31)))));
		uint32_t L_27 = V_12;
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)((int32_t)((int32_t)L_27&1))) == ((uint32_t)L_28))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		goto IL_00c1;
	}

IL_008c:
	{
		uint32_t L_30 = V_12;
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_4;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_30&(int32_t)L_31)), (int32_t)L_32));
		uint32_t L_33 = V_13;
		uint32_t L_34 = V_3;
		V_4 = ((int32_t)((int32_t)L_33&(int32_t)L_34));
		uint32_t L_35 = V_13;
		uint32_t L_36 = V_4;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, ((int32_t)((int32_t)L_36<<1))));
		uint32_t L_37 = V_4;
		int32_t L_38 = ___1_width;
		V_4 = ((int32_t)((uint32_t)L_37>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_38, 1))&((int32_t)31)))));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_39 = V_1;
		int32_t L_40 = V_10;
		int32_t L_41 = V_5;
		uint32_t L_42 = V_13;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(L_40<<4)), L_41))), (int8_t)((int8_t)L_42));
		int32_t L_43 = V_5;
		int32_t L_44 = ___1_width;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
	}

IL_00c1:
	{
		int32_t L_45 = V_5;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)16))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_46 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_47, ((int32_t)16)));
	}

IL_00d4:
	{
		int32_t L_48 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_0;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_006a;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_50 = V_1;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m13B6A2511F9327F843C430396237125DFB2CA333 (RuntimeObject* ___0_d, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_pk, int32_t ___4_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ctx, uint8_t ___6_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_m, int32_t ___8_mOff, int32_t ___9_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___10_sig, int32_t ___11_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_d;
		uint8_t L_1 = ___6_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___5_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_Dom2_m721CBD5D05880B7324137CE0E72183B9A69007A7(L_0, L_1, L_2, NULL);
		RuntimeObject* L_3 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_h;
		NullCheck(L_3);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_3, L_4, ((int32_t)32), ((int32_t)32));
		RuntimeObject* L_5 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___7_m;
		int32_t L_7 = ___8_mOff;
		int32_t L_8 = ___9_mLen;
		NullCheck(L_5);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_h;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_9, L_10, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Ed25519_ReduceScalar_mAE6C41ADB2B1B095A8DA98B7364D394E4AB7776F(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		Ed25519_ScalarMultBaseEncoded_m7F598FF9DE99D7AE191001ADF081F55E420C36CE(L_15, L_16, 0, NULL);
		RuntimeObject* L_17 = ___0_d;
		uint8_t L_18 = ___6_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___5_ctx;
		Ed25519_Dom2_m721CBD5D05880B7324137CE0E72183B9A69007A7(L_17, L_18, L_19, NULL);
		RuntimeObject* L_20 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		NullCheck(L_20);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_20, L_21, 0, ((int32_t)32));
		RuntimeObject* L_22 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___3_pk;
		int32_t L_24 = ___4_pkOff;
		NullCheck(L_22);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_22, L_23, L_24, ((int32_t)32));
		RuntimeObject* L_25 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___7_m;
		int32_t L_27 = ___8_mOff;
		int32_t L_28 = ___9_mLen;
		NullCheck(L_25);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_25, L_26, L_27, L_28);
		RuntimeObject* L_29 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___1_h;
		NullCheck(L_29);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_29, L_30, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = Ed25519_ReduceScalar_mAE6C41ADB2B1B095A8DA98B7364D394E4AB7776F(L_32, NULL);
		V_1 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___2_s;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = Ed25519_CalculateS_m23173DF3C42B19B42451ECC7FBBF01F00CB399FB(L_15, L_34, L_35, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___10_sig;
		int32_t L_39 = ___11_sigOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___10_sig;
		int32_t L_41 = ___11_sigOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_36, 0, (RuntimeArray*)L_40, ((int32_t)il2cpp_codegen_add(L_41, ((int32_t)32))), ((int32_t)32), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_mFF6B13D7BE906B804D3DDF67565962C9B4B3DE9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, uint8_t ___3_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_ctx;
		uint8_t L_1 = ___3_phflag;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ed25519_CheckContextVar_m52786778C2ED745C86206C8C0629A714B6E1C8B7(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ImplSign_mFF6B13D7BE906B804D3DDF67565962C9B4B3DE9F_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Ed25519_CreateDigest_mFA846F96A403E05919A597C6A4933AD43B49A111(NULL);
		RuntimeObject* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		RuntimeObject* L_8 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_sk;
		int32_t L_10 = ___1_skOff;
		int32_t L_11 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_8);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		RuntimeObject* L_12 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_12, L_13, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		Ed25519_PruneScalar_mFCE98B6E0A5056FE969933FA1A1FEE053BD87057(L_16, 0, L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_2 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		Ed25519_ScalarMultBaseEncoded_m7F598FF9DE99D7AE191001ADF081F55E420C36CE(L_19, L_20, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___2_ctx;
		uint8_t L_25 = ___3_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___4_m;
		int32_t L_27 = ___5_mOff;
		int32_t L_28 = ___6_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___7_sig;
		int32_t L_30 = ___8_sigOff;
		Ed25519_ImplSign_m13B6A2511F9327F843C430396237125DFB2CA333(L_12, L_21, L_22, L_23, 0, L_24, L_25, L_26, L_27, L_28, L_29, L_30, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m35EC9ABCB0EB2528FDD835161E91B7E9191ADE44 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___9_sig, int32_t ___10_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_ctx;
		uint8_t L_1 = ___5_phflag;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ed25519_CheckContextVar_m52786778C2ED745C86206C8C0629A714B6E1C8B7(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ImplSign_m35EC9ABCB0EB2528FDD835161E91B7E9191ADE44_RuntimeMethod_var)));
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Ed25519_CreateDigest_mFA846F96A403E05919A597C6A4933AD43B49A111(NULL);
		RuntimeObject* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		RuntimeObject* L_8 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_sk;
		int32_t L_10 = ___1_skOff;
		int32_t L_11 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_8);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		RuntimeObject* L_12 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_12, L_13, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		Ed25519_PruneScalar_mFCE98B6E0A5056FE969933FA1A1FEE053BD87057(L_16, 0, L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___2_pk;
		int32_t L_21 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___4_ctx;
		uint8_t L_23 = ___5_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___6_m;
		int32_t L_25 = ___7_mOff;
		int32_t L_26 = ___8_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___9_sig;
		int32_t L_28 = ___10_sigOff;
		Ed25519_ImplSign_m13B6A2511F9327F843C430396237125DFB2CA333(L_12, L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, L_28, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_ImplVerify_mA82B8EB33409E19CDD41CD04EFFFD9FF0D5A5ED8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_ctx;
		uint8_t L_1 = ___5_phflag;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ed25519_CheckContextVar_m52786778C2ED745C86206C8C0629A714B6E1C8B7(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ImplVerify_mA82B8EB33409E19CDD41CD04EFFFD9FF0D5A5ED8_RuntimeMethod_var)));
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_sig;
		int32_t L_5 = ___1_sigOff;
		int32_t L_6 = ___1_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = Arrays_CopyOfRange_m2FEFC438755F0A2DE6E02C05303B2654984C1965(L_4, L_5, ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)32))), NULL);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_sig;
		int32_t L_9 = ___1_sigOff;
		int32_t L_10 = ___1_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		int32_t L_11 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___SignatureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = Arrays_CopyOfRange_m2FEFC438755F0A2DE6E02C05303B2654984C1965(L_8, ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)32))), ((int32_t)il2cpp_codegen_add(L_10, L_11)), NULL);
		V_1 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		bool L_14;
		L_14 = Ed25519_CheckPointVar_m5110B04358E2737AB9B70C88F2F18851318885C9(L_13, NULL);
		if (L_14)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Ed25519_CheckScalarVar_m6410AF4383E7C974A0E35B0F624DABE8D6BF558A(L_15, NULL);
		if (L_16)
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_17 = (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)il2cpp_codegen_object_new(PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B(L_17, NULL);
		V_2 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___2_pk;
		int32_t L_19 = ___3_pkOff;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Ed25519_DecodePointVar_m363BF607456706202E92EB1DDD3B0D2798674BAB(L_18, L_19, (bool)1, L_20, NULL);
		if (L_21)
		{
			goto IL_005b;
		}
	}
	{
		return (bool)0;
	}

IL_005b:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		RuntimeObject* L_22;
		L_22 = Ed25519_CreateDigest_mFA846F96A403E05919A597C6A4933AD43B49A111(NULL);
		RuntimeObject* L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_3 = L_25;
		RuntimeObject* L_26 = L_23;
		uint8_t L_27 = ___5_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___4_ctx;
		Ed25519_Dom2_m721CBD5D05880B7324137CE0E72183B9A69007A7(L_26, L_27, L_28, NULL);
		RuntimeObject* L_29 = L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		NullCheck(L_29);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_29, L_30, 0, ((int32_t)32));
		RuntimeObject* L_31 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___2_pk;
		int32_t L_33 = ___3_pkOff;
		NullCheck(L_31);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_31, L_32, L_33, ((int32_t)32));
		RuntimeObject* L_34 = L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___6_m;
		int32_t L_36 = ___7_mOff;
		int32_t L_37 = ___8_mLen;
		NullCheck(L_34);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_34, L_35, L_36, L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_3;
		NullCheck(L_34);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_34, L_38, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = Ed25519_ReduceScalar_mAE6C41ADB2B1B095A8DA98B7364D394E4AB7776F(L_40, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_4 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_4;
		Ed25519_DecodeScalar_mC591CB69A5FDB304E26277927C6A1A5CB1DAEBBE(L_43, 0, L_44, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_5 = L_45;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_5;
		Ed25519_DecodeScalar_mC591CB69A5FDB304E26277927C6A1A5CB1DAEBBE(L_41, 0, L_46, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_47 = (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90*)il2cpp_codegen_object_new(PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90_il2cpp_TypeInfo_var);
		PointAccum__ctor_m6006840A478C446114D26544309A507110FF14A2(L_47, NULL);
		V_6 = L_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_5;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_50 = V_2;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_51 = V_6;
		Ed25519_ScalarMultStrausVar_mF2CF93B3EAFEA863A237792852C7FE61F9548433(L_48, L_49, L_50, L_51, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_7 = L_52;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_53 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_7;
		int32_t L_55;
		L_55 = Ed25519_EncodePoint_mB12A34AEF57763D718AFD69D3202F1BBDF0F783A(L_53, L_54, 0, NULL);
		if (!L_55)
		{
			goto IL_00f6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Arrays_AreEqual_mF4FFEFFC4A23BEC3C36821B5E80341EB1E5A2351(L_56, L_57, NULL);
		return L_58;
	}

IL_00f6:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_m336663EA737E5EE589A5AE9EF1A6ABE4EB0CAC35 (bool ___0_negate, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___1_p, PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___2_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_3 = L_3;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_4 = ___2_r;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___u;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_5 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_6 = L_7;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_8 = ___2_r;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v;
		V_7 = L_9;
		bool L_10 = ___0_negate;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_3;
		V_8 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_2;
		V_9 = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_6;
		V_10 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_5;
		V_11 = L_14;
		goto IL_0057;
	}

IL_0049:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		V_8 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_3;
		V_9 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_5;
		V_10 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_6;
		V_11 = L_18;
	}

IL_0057:
	{
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_19 = ___2_r;
		NullCheck(L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___y;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_21 = ___2_r;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_20, L_22, L_23, L_24, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_25 = ___1_p;
		NullCheck(L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___y;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_27 = ___1_p;
		NullCheck(L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_8;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_26, L_28, L_29, L_30, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_31, L_32, L_33, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_34, L_35, L_36, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_37 = ___2_r;
		NullCheck(L_37);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = L_37->___u;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_39 = ___2_r;
		NullCheck(L_39);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = L_39->___v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_38, L_40, L_41, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_43 = ___1_p;
		NullCheck(L_43);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43->___t;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_42, L_44, L_45, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_46, L_47, L_48, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_49 = ___2_r;
		NullCheck(L_49);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = L_49->___z;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_51 = ___1_p;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = L_51->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_3;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_50, L_52, L_53, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D(L_54, L_55, L_56, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_57, L_58, L_59, L_60, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_10;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_61, L_62, L_63, L_64, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_11;
		X25519Field_Carry_m91D20CCA8A39D3D3F755CFCA0A7792F77E061B31(L_65, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_5;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_68 = ___2_r;
		NullCheck(L_68);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = L_68->___x;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_66, L_67, L_69, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = V_7;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_72 = ___2_r;
		NullCheck(L_72);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = L_72->___y;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_70, L_71, L_73, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_6;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_76 = ___2_r;
		NullCheck(L_76);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = L_76->___z;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_74, L_75, L_77, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_m32430A184FA0CD7C75F552BA9A659148A228D40F (bool ___0_negate, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___1_p, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___2_q, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_3 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_4 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_5 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_6 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_7 = L_7;
		bool L_8 = ___0_negate;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_3;
		V_8 = L_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		V_9 = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_6;
		V_10 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_5;
		V_11 = L_12;
		goto IL_0055;
	}

IL_0047:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_2;
		V_8 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_3;
		V_9 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_5;
		V_10 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_6;
		V_11 = L_16;
	}

IL_0055:
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_17 = ___1_p;
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___y;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_19 = ___1_p;
		NullCheck(L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_18, L_20, L_21, L_22, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_23 = ___2_q;
		NullCheck(L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___y;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_25 = ___2_q;
		NullCheck(L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_8;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_24, L_26, L_27, L_28, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_29, L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_32, L_33, L_34, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_35 = ___1_p;
		NullCheck(L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = L_35->___t;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_37 = ___2_q;
		NullCheck(L_37);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = L_37->___t;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_36, L_38, L_39, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_40, L_41, L_42, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_43 = ___1_p;
		NullCheck(L_43);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43->___z;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_45 = ___2_q;
		NullCheck(L_45);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_3;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_44, L_46, L_47, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_3;
		X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D(L_48, L_49, L_50, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_4;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_51, L_52, L_53, L_54, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_10;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_55, L_56, L_57, L_58, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_11;
		X25519Field_Carry_m91D20CCA8A39D3D3F755CFCA0A7792F77E061B31(L_59, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_5;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_62 = ___3_r;
		NullCheck(L_62);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = L_62->___x;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_60, L_61, L_63, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_7;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_66 = ___3_r;
		NullCheck(L_66);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = L_66->___y;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_64, L_65, L_67, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_6;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_70 = ___3_r;
		NullCheck(L_70);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = L_70->___z;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_68, L_69, L_71, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_7;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_74 = ___3_r;
		NullCheck(L_74);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = L_74->___t;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_72, L_73, L_75, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddPrecomp_mA25B7832A57DC554CD0209A49F0BFC6693D1E49D (PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* ___0_p, PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_2 = L_2;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_3 = ___1_r;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___u;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_5 = L_6;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_7 = ___1_r;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___v;
		V_6 = L_8;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_9 = ___1_r;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_11 = ___1_r;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_10, L_12, L_13, L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_16 = ___0_p;
		NullCheck(L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16->___ymx_h;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_0;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_15, L_17, L_18, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_1;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_20 = ___0_p;
		NullCheck(L_20);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___ypx_h;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_19, L_21, L_22, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_23 = ___1_r;
		NullCheck(L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___u;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_25 = ___1_r;
		NullCheck(L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_24, L_26, L_27, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_2;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_29 = ___0_p;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___xyd;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_28, L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_3;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_32, L_33, L_34, L_35, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_36 = ___1_r;
		NullCheck(L_36);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_4;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_37, L_38, L_39, L_40, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_5;
		X25519Field_Carry_m91D20CCA8A39D3D3F755CFCA0A7792F77E061B31(L_41, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_4;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_44 = ___1_r;
		NullCheck(L_44);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = L_44->___x;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_42, L_43, L_45, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_6;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_48 = ___1_r;
		NullCheck(L_48);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = L_48->___y;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_46, L_47, L_49, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_5;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_52 = ___1_r;
		NullCheck(L_52);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = L_52->___z;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_50, L_51, L_53, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* Ed25519_PointCopy_mDE764D0B4600455EEAE68EBAE172E2BBC1383C49 (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_0 = NULL;
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_0 = (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)il2cpp_codegen_object_new(PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B(L_0, NULL);
		V_0 = L_0;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_1 = ___0_p;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->___x;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_3 = V_0;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_2, 0, L_4, 0, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_5 = ___0_p;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___y;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_7 = V_0;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___y;
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_6, 0, L_8, 0, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_9 = ___0_p;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___z;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_11 = V_0;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___z;
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_10, 0, L_12, 0, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_13 = ___0_p;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___u;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_15 = ___0_p;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___v;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_17 = V_0;
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___t;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_14, L_16, L_18, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* Ed25519_PointCopy_m102292E69DA16C429AEB7D8AB015718D671BBF74 (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_0 = NULL;
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_0 = (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)il2cpp_codegen_object_new(PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B(L_0, NULL);
		V_0 = L_0;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_1 = ___0_p;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->___x;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_3 = V_0;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_2, 0, L_4, 0, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_5 = ___0_p;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___y;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_7 = V_0;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___y;
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_6, 0, L_8, 0, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_9 = ___0_p;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___z;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_11 = V_0;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___z;
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_10, 0, L_12, 0, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_13 = ___0_p;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___t;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_15 = V_0;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___t;
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_14, 0, L_16, 0, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointDouble_m052A2A2EF2FD61ED150C7310D8FC50A06EAD0D20 (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_2 = L_2;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_3 = ___0_r;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___u;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_5 = L_6;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_7 = ___0_r;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___v;
		V_6 = L_8;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_9 = ___0_r;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_10, L_11, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_12 = ___0_r;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_13, L_14, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_15 = ___0_r;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_2;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_16, L_17, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D(L_18, L_19, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_5;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_21, L_22, L_23, L_24, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_25 = ___0_r;
		NullCheck(L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___x;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_27 = ___0_r;
		NullCheck(L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_3;
		X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D(L_26, L_28, L_29, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_3;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_3;
		X25519Field_Sub_m8AEBB58A47C4DBC60E3BA0EB57848AC3F07E6E0F(L_32, L_33, L_34, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_4;
		X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D(L_35, L_36, L_37, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_4;
		X25519Field_Carry_m91D20CCA8A39D3D3F755CFCA0A7792F77E061B31(L_38, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_4;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_41 = ___0_r;
		NullCheck(L_41);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = L_41->___x;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_39, L_40, L_42, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_6;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_45 = ___0_r;
		NullCheck(L_45);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45->___y;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_43, L_44, L_46, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_5;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_49 = ___0_r;
		NullCheck(L_49);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = L_49->___z;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_47, L_48, L_50, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m5D2BC2667F26D10393A9161AB6442E775642FC43 (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_0 = ___0_p;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___z;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_One_m4802EF9C8312727100203D1CAC28AEFBAE99864A(L_1, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___x;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_4 = ___0_p;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___u;
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_3, 0, L_5, 0, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_6 = ___0_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___y;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_8 = ___0_p;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v;
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_7, 0, L_9, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m5E15B5B20818228014AB4A4E50AA26453A89AA80 (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_0 = ___0_p;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___z;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_One_m4802EF9C8312727100203D1CAC28AEFBAE99864A(L_1, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___x;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_4 = ___0_p;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___y;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_6 = ___0_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___t;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_3, L_5, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_mAA847E79A544B9202E899C5D48F75500E3C7CCE4 (int32_t ___0_block, int32_t ___1_index, PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* ___2_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_block;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, 8)), 3)), ((int32_t)10)));
		V_1 = 0;
		goto IL_0060;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1^L_2)), 1))>>((int32_t)31)));
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_5 = V_0;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_6 = ___2_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___ypx_h;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_CMov_m8B2DFF4A642EB6EFC8FDFAFE40DBFE3375F60762(L_3, L_4, L_5, L_7, 0, NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)10)));
		int32_t L_9 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_11 = V_0;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_12 = ___2_p;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___ymx_h;
		X25519Field_CMov_m8B2DFF4A642EB6EFC8FDFAFE40DBFE3375F60762(L_9, L_10, L_11, L_13, 0, NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)10)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_16 = V_0;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_17 = ___2_p;
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___xyd;
		X25519Field_CMov_m8B2DFF4A642EB6EFC8FDFAFE40DBFE3375F60762(L_9, L_15, L_16, L_18, 0, NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)10)));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0060:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)8)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* Ed25519_PointPrecompVar_mCABA607DF679563766DAB5206E8CF78CE1DB0CF3 (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___0_p, int32_t ___1_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_0 = NULL;
	PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* V_1 = NULL;
	int32_t V_2 = 0;
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_3 = NULL;
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_0 = (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)il2cpp_codegen_object_new(PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B(L_0, NULL);
		V_0 = L_0;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_1 = ___0_p;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_2 = ___0_p;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_m32430A184FA0CD7C75F552BA9A659148A228D40F((bool)0, L_1, L_2, L_3, NULL);
		int32_t L_4 = ___1_count;
		PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_5 = (PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE*)(PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE*)SZArrayNew(PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_6 = V_1;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_7 = ___0_p;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_8;
		L_8 = Ed25519_PointCopy_m102292E69DA16C429AEB7D8AB015718D671BBF74(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)L_8);
		V_2 = 1;
		goto IL_003e;
	}

IL_0023:
	{
		PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_13 = V_0;
		PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_14 = V_1;
		int32_t L_15 = V_2;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_16 = (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)il2cpp_codegen_object_new(PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B(L_16, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_17 = L_16;
		V_3 = L_17;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)L_17);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_18 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_m32430A184FA0CD7C75F552BA9A659148A228D40F((bool)0, L_12, L_13, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = ___1_count;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0023;
		}
	}
	{
		PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_22 = V_1;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m152D233739CCA2B0C8A0276DEF5A1AFFB3E1412E (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_0 = ___0_p;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Zero_mF92D7DA5710301FFEF50C5EFFE6E7A3CD9D9724D(L_1, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___y;
		X25519Field_One_m4802EF9C8312727100203D1CAC28AEFBAE99864A(L_3, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_4 = ___0_p;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___z;
		X25519Field_One_m4802EF9C8312727100203D1CAC28AEFBAE99864A(L_5, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_6 = ___0_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___u;
		X25519Field_Zero_mF92D7DA5710301FFEF50C5EFFE6E7A3CD9D9724D(L_7, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_8 = ___0_p;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v;
		X25519Field_One_m4802EF9C8312727100203D1CAC28AEFBAE99864A(L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_mBEBD01658850C983066BF502EC8084E1037F76CF (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_0 = ___0_p;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Zero_mF92D7DA5710301FFEF50C5EFFE6E7A3CD9D9724D(L_1, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___y;
		X25519Field_One_m4802EF9C8312727100203D1CAC28AEFBAE99864A(L_3, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_4 = ___0_p;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___z;
		X25519Field_One_m4802EF9C8312727100203D1CAC28AEFBAE99864A(L_5, NULL);
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_6 = ___0_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___t;
		X25519Field_Zero_mF92D7DA5710301FFEF50C5EFFE6E7A3CD9D9724D(L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Precompute_m41C84A1756DDBED6D366273D25F1A46207877B86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* V_2 = NULL;
	int32_t V_3 = 0;
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_4 = NULL;
	int32_t V_5 = 0;
	PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* V_6 = NULL;
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_7 = NULL;
	PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_16 = NULL;
	int32_t V_17 = 0;
	PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_20 = NULL;
	PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* V_21 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompLock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0299:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_02a2;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_02a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase;
				if (!L_4)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_02a3;
			}

IL_001c_1:
			{
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_5 = (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)il2cpp_codegen_object_new(PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
				PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B(L_5, NULL);
				V_4 = L_5;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___B_x;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_7 = V_4;
				NullCheck(L_7);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___x;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
				X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_6, 0, L_8, 0, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___B_y;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_10 = V_4;
				NullCheck(L_10);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___y;
				X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_9, 0, L_11, 0, NULL);
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_12 = V_4;
				Ed25519_PointExtendXY_m5E15B5B20818228014AB4A4E50AA26453A89AA80(L_12, NULL);
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_13 = V_4;
				PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_14;
				L_14 = Ed25519_PointPrecompVar_mCABA607DF679563766DAB5206E8CF78CE1DB0CF3(L_13, ((int32_t)32), NULL);
				((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBaseTable = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBaseTable), (void*)L_14);
				PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_15 = (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90*)il2cpp_codegen_object_new(PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90_il2cpp_TypeInfo_var);
				PointAccum__ctor_m6006840A478C446114D26544309A507110FF14A2(L_15, NULL);
				V_2 = L_15;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___B_x;
				PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_17 = V_2;
				NullCheck(L_17);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___x;
				X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_16, 0, L_18, 0, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___B_y;
				PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_20 = V_2;
				NullCheck(L_20);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___y;
				X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_19, 0, L_21, 0, NULL);
				PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_22 = V_2;
				Ed25519_PointExtendXY_m5D2BC2667F26D10393A9161AB6442E775642FC43(L_22, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1920));
				((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase), (void*)L_23);
				V_3 = 0;
				V_5 = 0;
				goto IL_028f_1;
			}

IL_00a7_1:
			{
				PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_24 = (PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE*)(PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE*)SZArrayNew(PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE_il2cpp_TypeInfo_var, (uint32_t)4);
				V_6 = L_24;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_25 = (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)il2cpp_codegen_object_new(PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
				PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B(L_25, NULL);
				V_7 = L_25;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_26 = V_7;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
				Ed25519_PointSetNeutral_mBEBD01658850C983066BF502EC8084E1037F76CF(L_26, NULL);
				V_10 = 0;
				goto IL_010c_1;
			}

IL_00c2_1:
			{
				PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_27 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_28;
				L_28 = Ed25519_PointCopy_mDE764D0B4600455EEAE68EBAE172E2BBC1383C49(L_27, NULL);
				V_11 = L_28;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_29 = V_7;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_30 = V_11;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_31 = V_7;
				Ed25519_PointAddVar_m32430A184FA0CD7C75F552BA9A659148A228D40F((bool)1, L_29, L_30, L_31, NULL);
				PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_32 = V_2;
				Ed25519_PointDouble_m052A2A2EF2FD61ED150C7310D8FC50A06EAD0D20(L_32, NULL);
				PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_33 = V_6;
				int32_t L_34 = V_10;
				PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_35 = V_2;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_36;
				L_36 = Ed25519_PointCopy_mDE764D0B4600455EEAE68EBAE172E2BBC1383C49(L_35, NULL);
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, L_36);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)L_36);
				int32_t L_37 = V_5;
				int32_t L_38 = V_10;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(L_37, L_38))) == ((int32_t)((int32_t)10))))
				{
					goto IL_0106_1;
				}
			}
			{
				V_12 = 1;
				goto IL_0101_1;
			}

IL_00f5_1:
			{
				PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_39 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
				Ed25519_PointDouble_m052A2A2EF2FD61ED150C7310D8FC50A06EAD0D20(L_39, NULL);
				int32_t L_40 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_40, 1));
			}

IL_0101_1:
			{
				int32_t L_41 = V_12;
				if ((((int32_t)L_41) < ((int32_t)8)))
				{
					goto IL_00f5_1;
				}
			}

IL_0106_1:
			{
				int32_t L_42 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			}

IL_010c_1:
			{
				int32_t L_43 = V_10;
				if ((((int32_t)L_43) < ((int32_t)4)))
				{
					goto IL_00c2_1;
				}
			}
			{
				PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_44 = (PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE*)(PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE*)SZArrayNew(PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE_il2cpp_TypeInfo_var, (uint32_t)8);
				V_8 = L_44;
				V_9 = 0;
				PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_45 = V_8;
				int32_t L_46 = V_9;
				int32_t L_47 = L_46;
				V_9 = ((int32_t)il2cpp_codegen_add(L_47, 1));
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_48 = V_7;
				NullCheck(L_45);
				ArrayElementTypeCheck (L_45, L_48);
				(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)L_48);
				V_13 = 0;
				goto IL_0175_1;
			}

IL_012d_1:
			{
				int32_t L_49 = V_13;
				V_14 = ((int32_t)(1<<((int32_t)(L_49&((int32_t)31)))));
				V_15 = 0;
				goto IL_0169_1;
			}

IL_013b_1:
			{
				PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_50 = V_8;
				int32_t L_51 = V_9;
				int32_t L_52 = V_14;
				NullCheck(L_50);
				int32_t L_53 = ((int32_t)il2cpp_codegen_subtract(L_51, L_52));
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
				PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_55 = V_6;
				int32_t L_56 = V_13;
				NullCheck(L_55);
				int32_t L_57 = L_56;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
				PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_59 = V_8;
				int32_t L_60 = V_9;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_61 = (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)il2cpp_codegen_object_new(PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4_il2cpp_TypeInfo_var);
				PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B(L_61, NULL);
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_62 = L_61;
				V_16 = L_62;
				NullCheck(L_59);
				ArrayElementTypeCheck (L_59, L_62);
				(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4*)L_62);
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_63 = V_16;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
				Ed25519_PointAddVar_m32430A184FA0CD7C75F552BA9A659148A228D40F((bool)0, L_54, L_58, L_63, NULL);
				int32_t L_64 = V_15;
				V_15 = ((int32_t)il2cpp_codegen_add(L_64, 1));
				int32_t L_65 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_65, 1));
			}

IL_0169_1:
			{
				int32_t L_66 = V_15;
				int32_t L_67 = V_14;
				if ((((int32_t)L_66) < ((int32_t)L_67)))
				{
					goto IL_013b_1;
				}
			}
			{
				int32_t L_68 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_0175_1:
			{
				int32_t L_69 = V_13;
				if ((((int32_t)L_69) < ((int32_t)3)))
				{
					goto IL_012d_1;
				}
			}
			{
				V_17 = 0;
				goto IL_0281_1;
			}

IL_0182_1:
			{
				PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_70 = V_8;
				int32_t L_71 = V_17;
				NullCheck(L_70);
				int32_t L_72 = L_71;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
				V_18 = L_73;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74;
				L_74 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
				V_19 = L_74;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75;
				L_75 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
				V_20 = L_75;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_76 = V_18;
				NullCheck(L_76);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = L_76->___z;
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_78 = V_18;
				NullCheck(L_78);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = L_78->___z;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_19;
				X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D(L_77, L_79, L_80, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_19;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_20;
				X25519Field_Inv_m34B01BF3BB188845DBFAACEC7C58C662B73B90CE(L_81, L_82, NULL);
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_83 = V_18;
				NullCheck(L_83);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = L_83->___x;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_20;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_19;
				X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_84, L_85, L_86, NULL);
				PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_87 = V_18;
				NullCheck(L_87);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = L_87->___y;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_20;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = V_20;
				X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_88, L_89, L_90, NULL);
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_91 = (PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC*)il2cpp_codegen_object_new(PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC_il2cpp_TypeInfo_var);
				PointPrecomp__ctor_m146540BFE4277D2CA9FEAF96222EDE58EC44BDF8(L_91, NULL);
				V_21 = L_91;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_20;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_19;
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_94 = V_21;
				NullCheck(L_94);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = L_94->___ypx_h;
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_96 = V_21;
				NullCheck(L_96);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = L_96->___ymx_h;
				X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_92, L_93, L_95, L_97, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_19;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = V_20;
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_100 = V_21;
				NullCheck(L_100);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = L_100->___xyd;
				X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_98, L_99, L_101, NULL);
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_102 = V_21;
				NullCheck(L_102);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = L_102->___xyd;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d4;
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_105 = V_21;
				NullCheck(L_105);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = L_105->___xyd;
				X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_103, L_104, L_106, NULL);
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_107 = V_21;
				NullCheck(L_107);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = L_107->___ypx_h;
				X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360(L_108, NULL);
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_109 = V_21;
				NullCheck(L_109);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = L_109->___ymx_h;
				X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360(L_110, NULL);
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_111 = V_21;
				NullCheck(L_111);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = L_111->___ypx_h;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_114 = V_3;
				X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_112, 0, L_113, L_114, NULL);
				int32_t L_115 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)10)));
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_116 = V_21;
				NullCheck(L_116);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = L_116->___ymx_h;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_119 = V_3;
				X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_117, 0, L_118, L_119, NULL);
				int32_t L_120 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)10)));
				PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_121 = V_21;
				NullCheck(L_121);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = L_121->___xyd;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_124 = V_3;
				X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_122, 0, L_123, L_124, NULL);
				int32_t L_125 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_125, ((int32_t)10)));
				int32_t L_126 = V_17;
				V_17 = ((int32_t)il2cpp_codegen_add(L_126, 1));
			}

IL_0281_1:
			{
				int32_t L_127 = V_17;
				if ((((int32_t)L_127) < ((int32_t)8)))
				{
					goto IL_0182_1;
				}
			}
			{
				int32_t L_128 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_128, 1));
			}

IL_028f_1:
			{
				int32_t L_129 = V_5;
				if ((((int32_t)L_129) < ((int32_t)8)))
				{
					goto IL_00a7_1;
				}
			}
			{
				goto IL_02a3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02a3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PruneScalar_mFCE98B6E0A5056FE969933FA1A1FEE053BD87057 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, int32_t ___1_nOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_n;
		int32_t L_1 = ___1_nOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_r;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_r;
		NullCheck(L_3);
		uint8_t* L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_5 = *((uint8_t*)L_4);
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)248))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_r;
		NullCheck(L_6);
		uint8_t* L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_8 = *((uint8_t*)L_7);
		*((int8_t*)L_7) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_8&((int32_t)127))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_r;
		NullCheck(L_9);
		uint8_t* L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_11 = *((uint8_t*)L_10);
		*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_11|((int32_t)64))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_ReduceScalar_mAE6C41ADB2B1B095A8DA98B7364D394E4AB7776F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	int64_t V_8 = 0;
	int64_t V_9 = 0;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	int64_t V_12 = 0;
	int64_t V_13 = 0;
	int64_t V_14 = 0;
	int64_t V_15 = 0;
	int64_t V_16 = 0;
	int64_t V_17 = 0;
	int64_t V_18 = 0;
	int64_t V_19 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_20 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_0, 0, NULL);
		V_0 = ((int64_t)(((int64_t)(uint64_t)L_1)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_n;
		uint32_t L_3;
		L_3 = Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109(L_2, 4, NULL);
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_3<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_n;
		uint32_t L_5;
		L_5 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_4, 7, NULL);
		V_2 = ((int64_t)(((int64_t)(uint64_t)L_5)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_n;
		uint32_t L_7;
		L_7 = Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109(L_6, ((int32_t)11), NULL);
		V_3 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_7<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_n;
		uint32_t L_9;
		L_9 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_8, ((int32_t)14), NULL);
		V_4 = ((int64_t)(((int64_t)(uint64_t)L_9)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_n;
		uint32_t L_11;
		L_11 = Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109(L_10, ((int32_t)18), NULL);
		V_5 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_11<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_n;
		uint32_t L_13;
		L_13 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_12, ((int32_t)21), NULL);
		V_6 = ((int64_t)(((int64_t)(uint64_t)L_13)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_n;
		uint32_t L_15;
		L_15 = Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109(L_14, ((int32_t)25), NULL);
		V_7 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_15<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_n;
		uint32_t L_17;
		L_17 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_16, ((int32_t)28), NULL);
		V_8 = ((int64_t)(((int64_t)(uint64_t)L_17)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_n;
		uint32_t L_19;
		L_19 = Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109(L_18, ((int32_t)32), NULL);
		V_9 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_19<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_n;
		uint32_t L_21;
		L_21 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_20, ((int32_t)35), NULL);
		V_10 = ((int64_t)(((int64_t)(uint64_t)L_21)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_n;
		uint32_t L_23;
		L_23 = Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109(L_22, ((int32_t)39), NULL);
		V_11 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_23<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_n;
		uint32_t L_25;
		L_25 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_24, ((int32_t)42), NULL);
		V_12 = ((int64_t)(((int64_t)(uint64_t)L_25)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_n;
		uint32_t L_27;
		L_27 = Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109(L_26, ((int32_t)46), NULL);
		V_13 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_27<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___0_n;
		uint32_t L_29;
		L_29 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_28, ((int32_t)49), NULL);
		V_14 = ((int64_t)(((int64_t)(uint64_t)L_29)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_n;
		uint32_t L_31;
		L_31 = Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109(L_30, ((int32_t)53), NULL);
		V_15 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_31<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_n;
		uint32_t L_33;
		L_33 = Ed25519_Decode32_m8F1629AC79AD6E74243F3A1C087EC2456DEBA1CE(L_32, ((int32_t)56), NULL);
		V_16 = ((int64_t)(((int64_t)(uint64_t)L_33)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_n;
		uint32_t L_35;
		L_35 = Ed25519_Decode24_mAB77022DE3CC520F609724213D862845DDF5C109(L_34, ((int32_t)60), NULL);
		V_17 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_35<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___0_n;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)63);
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_18 = ((int64_t)(((int64_t)(uint64_t)L_38)&((int64_t)((int32_t)255))));
		int64_t L_39 = V_9;
		int64_t L_40 = V_18;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_39, ((int64_t)il2cpp_codegen_multiply(L_40, ((int64_t)((int32_t)-50998291))))));
		int64_t L_41 = V_10;
		int64_t L_42 = V_18;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_41, ((int64_t)il2cpp_codegen_multiply(L_42, ((int64_t)((int32_t)19280294))))));
		int64_t L_43 = V_11;
		int64_t L_44 = V_18;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_43, ((int64_t)il2cpp_codegen_multiply(L_44, ((int64_t)((int32_t)127719000))))));
		int64_t L_45 = V_12;
		int64_t L_46 = V_18;
		V_12 = ((int64_t)il2cpp_codegen_subtract(L_45, ((int64_t)il2cpp_codegen_multiply(L_46, ((int64_t)((int32_t)-6428113))))));
		int64_t L_47 = V_13;
		int64_t L_48 = V_18;
		V_13 = ((int64_t)il2cpp_codegen_subtract(L_47, ((int64_t)il2cpp_codegen_multiply(L_48, ((int64_t)((int32_t)5343))))));
		int64_t L_49 = V_17;
		int64_t L_50 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add(L_49, ((int64_t)(L_50>>((int32_t)28)))));
		int64_t L_51 = V_16;
		V_16 = ((int64_t)(L_51&((int64_t)((int32_t)268435455))));
		int64_t L_52 = V_8;
		int64_t L_53 = V_17;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_52, ((int64_t)il2cpp_codegen_multiply(L_53, ((int64_t)((int32_t)-50998291))))));
		int64_t L_54 = V_9;
		int64_t L_55 = V_17;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_54, ((int64_t)il2cpp_codegen_multiply(L_55, ((int64_t)((int32_t)19280294))))));
		int64_t L_56 = V_10;
		int64_t L_57 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_56, ((int64_t)il2cpp_codegen_multiply(L_57, ((int64_t)((int32_t)127719000))))));
		int64_t L_58 = V_11;
		int64_t L_59 = V_17;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_58, ((int64_t)il2cpp_codegen_multiply(L_59, ((int64_t)((int32_t)-6428113))))));
		int64_t L_60 = V_12;
		int64_t L_61 = V_17;
		V_12 = ((int64_t)il2cpp_codegen_subtract(L_60, ((int64_t)il2cpp_codegen_multiply(L_61, ((int64_t)((int32_t)5343))))));
		int64_t L_62 = V_7;
		int64_t L_63 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_62, ((int64_t)il2cpp_codegen_multiply(L_63, ((int64_t)((int32_t)-50998291))))));
		int64_t L_64 = V_8;
		int64_t L_65 = V_16;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_64, ((int64_t)il2cpp_codegen_multiply(L_65, ((int64_t)((int32_t)19280294))))));
		int64_t L_66 = V_9;
		int64_t L_67 = V_16;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_66, ((int64_t)il2cpp_codegen_multiply(L_67, ((int64_t)((int32_t)127719000))))));
		int64_t L_68 = V_10;
		int64_t L_69 = V_16;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_68, ((int64_t)il2cpp_codegen_multiply(L_69, ((int64_t)((int32_t)-6428113))))));
		int64_t L_70 = V_11;
		int64_t L_71 = V_16;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_70, ((int64_t)il2cpp_codegen_multiply(L_71, ((int64_t)((int32_t)5343))))));
		int64_t L_72 = V_15;
		int64_t L_73 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add(L_72, ((int64_t)(L_73>>((int32_t)28)))));
		int64_t L_74 = V_14;
		V_14 = ((int64_t)(L_74&((int64_t)((int32_t)268435455))));
		int64_t L_75 = V_6;
		int64_t L_76 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_75, ((int64_t)il2cpp_codegen_multiply(L_76, ((int64_t)((int32_t)-50998291))))));
		int64_t L_77 = V_7;
		int64_t L_78 = V_15;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_77, ((int64_t)il2cpp_codegen_multiply(L_78, ((int64_t)((int32_t)19280294))))));
		int64_t L_79 = V_8;
		int64_t L_80 = V_15;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_79, ((int64_t)il2cpp_codegen_multiply(L_80, ((int64_t)((int32_t)127719000))))));
		int64_t L_81 = V_9;
		int64_t L_82 = V_15;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_81, ((int64_t)il2cpp_codegen_multiply(L_82, ((int64_t)((int32_t)-6428113))))));
		int64_t L_83 = V_10;
		int64_t L_84 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_83, ((int64_t)il2cpp_codegen_multiply(L_84, ((int64_t)((int32_t)5343))))));
		int64_t L_85 = V_5;
		int64_t L_86 = V_14;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_85, ((int64_t)il2cpp_codegen_multiply(L_86, ((int64_t)((int32_t)-50998291))))));
		int64_t L_87 = V_6;
		int64_t L_88 = V_14;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_87, ((int64_t)il2cpp_codegen_multiply(L_88, ((int64_t)((int32_t)19280294))))));
		int64_t L_89 = V_7;
		int64_t L_90 = V_14;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_89, ((int64_t)il2cpp_codegen_multiply(L_90, ((int64_t)((int32_t)127719000))))));
		int64_t L_91 = V_8;
		int64_t L_92 = V_14;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_91, ((int64_t)il2cpp_codegen_multiply(L_92, ((int64_t)((int32_t)-6428113))))));
		int64_t L_93 = V_9;
		int64_t L_94 = V_14;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_93, ((int64_t)il2cpp_codegen_multiply(L_94, ((int64_t)((int32_t)5343))))));
		int64_t L_95 = V_13;
		int64_t L_96 = V_12;
		V_13 = ((int64_t)il2cpp_codegen_add(L_95, ((int64_t)(L_96>>((int32_t)28)))));
		int64_t L_97 = V_12;
		V_12 = ((int64_t)(L_97&((int64_t)((int32_t)268435455))));
		int64_t L_98 = V_4;
		int64_t L_99 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_98, ((int64_t)il2cpp_codegen_multiply(L_99, ((int64_t)((int32_t)-50998291))))));
		int64_t L_100 = V_5;
		int64_t L_101 = V_13;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_100, ((int64_t)il2cpp_codegen_multiply(L_101, ((int64_t)((int32_t)19280294))))));
		int64_t L_102 = V_6;
		int64_t L_103 = V_13;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_102, ((int64_t)il2cpp_codegen_multiply(L_103, ((int64_t)((int32_t)127719000))))));
		int64_t L_104 = V_7;
		int64_t L_105 = V_13;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_104, ((int64_t)il2cpp_codegen_multiply(L_105, ((int64_t)((int32_t)-6428113))))));
		int64_t L_106 = V_8;
		int64_t L_107 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_106, ((int64_t)il2cpp_codegen_multiply(L_107, ((int64_t)((int32_t)5343))))));
		int64_t L_108 = V_12;
		int64_t L_109 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)(L_109>>((int32_t)28)))));
		int64_t L_110 = V_11;
		V_11 = ((int64_t)(L_110&((int64_t)((int32_t)268435455))));
		int64_t L_111 = V_3;
		int64_t L_112 = V_12;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_111, ((int64_t)il2cpp_codegen_multiply(L_112, ((int64_t)((int32_t)-50998291))))));
		int64_t L_113 = V_4;
		int64_t L_114 = V_12;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_113, ((int64_t)il2cpp_codegen_multiply(L_114, ((int64_t)((int32_t)19280294))))));
		int64_t L_115 = V_5;
		int64_t L_116 = V_12;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_115, ((int64_t)il2cpp_codegen_multiply(L_116, ((int64_t)((int32_t)127719000))))));
		int64_t L_117 = V_6;
		int64_t L_118 = V_12;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_117, ((int64_t)il2cpp_codegen_multiply(L_118, ((int64_t)((int32_t)-6428113))))));
		int64_t L_119 = V_7;
		int64_t L_120 = V_12;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_119, ((int64_t)il2cpp_codegen_multiply(L_120, ((int64_t)((int32_t)5343))))));
		int64_t L_121 = V_11;
		int64_t L_122 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(L_121, ((int64_t)(L_122>>((int32_t)28)))));
		int64_t L_123 = V_10;
		V_10 = ((int64_t)(L_123&((int64_t)((int32_t)268435455))));
		int64_t L_124 = V_2;
		int64_t L_125 = V_11;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_124, ((int64_t)il2cpp_codegen_multiply(L_125, ((int64_t)((int32_t)-50998291))))));
		int64_t L_126 = V_3;
		int64_t L_127 = V_11;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_126, ((int64_t)il2cpp_codegen_multiply(L_127, ((int64_t)((int32_t)19280294))))));
		int64_t L_128 = V_4;
		int64_t L_129 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_128, ((int64_t)il2cpp_codegen_multiply(L_129, ((int64_t)((int32_t)127719000))))));
		int64_t L_130 = V_5;
		int64_t L_131 = V_11;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_130, ((int64_t)il2cpp_codegen_multiply(L_131, ((int64_t)((int32_t)-6428113))))));
		int64_t L_132 = V_6;
		int64_t L_133 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_132, ((int64_t)il2cpp_codegen_multiply(L_133, ((int64_t)((int32_t)5343))))));
		int64_t L_134 = V_10;
		int64_t L_135 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_add(L_134, ((int64_t)(L_135>>((int32_t)28)))));
		int64_t L_136 = V_9;
		V_9 = ((int64_t)(L_136&((int64_t)((int32_t)268435455))));
		int64_t L_137 = V_1;
		int64_t L_138 = V_10;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_137, ((int64_t)il2cpp_codegen_multiply(L_138, ((int64_t)((int32_t)-50998291))))));
		int64_t L_139 = V_2;
		int64_t L_140 = V_10;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_139, ((int64_t)il2cpp_codegen_multiply(L_140, ((int64_t)((int32_t)19280294))))));
		int64_t L_141 = V_3;
		int64_t L_142 = V_10;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_141, ((int64_t)il2cpp_codegen_multiply(L_142, ((int64_t)((int32_t)127719000))))));
		int64_t L_143 = V_4;
		int64_t L_144 = V_10;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_143, ((int64_t)il2cpp_codegen_multiply(L_144, ((int64_t)((int32_t)-6428113))))));
		int64_t L_145 = V_5;
		int64_t L_146 = V_10;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_145, ((int64_t)il2cpp_codegen_multiply(L_146, ((int64_t)((int32_t)5343))))));
		int64_t L_147 = V_8;
		int64_t L_148 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add(L_147, ((int64_t)(L_148>>((int32_t)28)))));
		int64_t L_149 = V_7;
		V_7 = ((int64_t)(L_149&((int64_t)((int32_t)268435455))));
		int64_t L_150 = V_9;
		int64_t L_151 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add(L_150, ((int64_t)(L_151>>((int32_t)28)))));
		int64_t L_152 = V_8;
		V_8 = ((int64_t)(L_152&((int64_t)((int32_t)268435455))));
		int64_t L_153 = V_8;
		V_19 = ((int64_t)(((int64_t)(L_153>>((int32_t)27)))&((int64_t)1)));
		int64_t L_154 = V_9;
		int64_t L_155 = V_19;
		V_9 = ((int64_t)il2cpp_codegen_add(L_154, L_155));
		int64_t L_156 = V_0;
		int64_t L_157 = V_9;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_156, ((int64_t)il2cpp_codegen_multiply(L_157, ((int64_t)((int32_t)-50998291))))));
		int64_t L_158 = V_1;
		int64_t L_159 = V_9;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_158, ((int64_t)il2cpp_codegen_multiply(L_159, ((int64_t)((int32_t)19280294))))));
		int64_t L_160 = V_2;
		int64_t L_161 = V_9;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_160, ((int64_t)il2cpp_codegen_multiply(L_161, ((int64_t)((int32_t)127719000))))));
		int64_t L_162 = V_3;
		int64_t L_163 = V_9;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_162, ((int64_t)il2cpp_codegen_multiply(L_163, ((int64_t)((int32_t)-6428113))))));
		int64_t L_164 = V_4;
		int64_t L_165 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_164, ((int64_t)il2cpp_codegen_multiply(L_165, ((int64_t)((int32_t)5343))))));
		int64_t L_166 = V_1;
		int64_t L_167 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_166, ((int64_t)(L_167>>((int32_t)28)))));
		int64_t L_168 = V_0;
		V_0 = ((int64_t)(L_168&((int64_t)((int32_t)268435455))));
		int64_t L_169 = V_2;
		int64_t L_170 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(L_169, ((int64_t)(L_170>>((int32_t)28)))));
		int64_t L_171 = V_1;
		V_1 = ((int64_t)(L_171&((int64_t)((int32_t)268435455))));
		int64_t L_172 = V_3;
		int64_t L_173 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(L_172, ((int64_t)(L_173>>((int32_t)28)))));
		int64_t L_174 = V_2;
		V_2 = ((int64_t)(L_174&((int64_t)((int32_t)268435455))));
		int64_t L_175 = V_4;
		int64_t L_176 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add(L_175, ((int64_t)(L_176>>((int32_t)28)))));
		int64_t L_177 = V_3;
		V_3 = ((int64_t)(L_177&((int64_t)((int32_t)268435455))));
		int64_t L_178 = V_5;
		int64_t L_179 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add(L_178, ((int64_t)(L_179>>((int32_t)28)))));
		int64_t L_180 = V_4;
		V_4 = ((int64_t)(L_180&((int64_t)((int32_t)268435455))));
		int64_t L_181 = V_6;
		int64_t L_182 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add(L_181, ((int64_t)(L_182>>((int32_t)28)))));
		int64_t L_183 = V_5;
		V_5 = ((int64_t)(L_183&((int64_t)((int32_t)268435455))));
		int64_t L_184 = V_7;
		int64_t L_185 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add(L_184, ((int64_t)(L_185>>((int32_t)28)))));
		int64_t L_186 = V_6;
		V_6 = ((int64_t)(L_186&((int64_t)((int32_t)268435455))));
		int64_t L_187 = V_8;
		int64_t L_188 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add(L_187, ((int64_t)(L_188>>((int32_t)28)))));
		int64_t L_189 = V_7;
		V_7 = ((int64_t)(L_189&((int64_t)((int32_t)268435455))));
		int64_t L_190 = V_8;
		V_9 = ((int64_t)(L_190>>((int32_t)28)));
		int64_t L_191 = V_8;
		V_8 = ((int64_t)(L_191&((int64_t)((int32_t)268435455))));
		int64_t L_192 = V_9;
		int64_t L_193 = V_19;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_192, L_193));
		int64_t L_194 = V_0;
		int64_t L_195 = V_9;
		V_0 = ((int64_t)il2cpp_codegen_add(L_194, ((int64_t)(L_195&((int64_t)((int32_t)-50998291))))));
		int64_t L_196 = V_1;
		int64_t L_197 = V_9;
		V_1 = ((int64_t)il2cpp_codegen_add(L_196, ((int64_t)(L_197&((int64_t)((int32_t)19280294))))));
		int64_t L_198 = V_2;
		int64_t L_199 = V_9;
		V_2 = ((int64_t)il2cpp_codegen_add(L_198, ((int64_t)(L_199&((int64_t)((int32_t)127719000))))));
		int64_t L_200 = V_3;
		int64_t L_201 = V_9;
		V_3 = ((int64_t)il2cpp_codegen_add(L_200, ((int64_t)(L_201&((int64_t)((int32_t)-6428113))))));
		int64_t L_202 = V_4;
		int64_t L_203 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_add(L_202, ((int64_t)(L_203&((int64_t)((int32_t)5343))))));
		int64_t L_204 = V_1;
		int64_t L_205 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_204, ((int64_t)(L_205>>((int32_t)28)))));
		int64_t L_206 = V_0;
		V_0 = ((int64_t)(L_206&((int64_t)((int32_t)268435455))));
		int64_t L_207 = V_2;
		int64_t L_208 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(L_207, ((int64_t)(L_208>>((int32_t)28)))));
		int64_t L_209 = V_1;
		V_1 = ((int64_t)(L_209&((int64_t)((int32_t)268435455))));
		int64_t L_210 = V_3;
		int64_t L_211 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(L_210, ((int64_t)(L_211>>((int32_t)28)))));
		int64_t L_212 = V_2;
		V_2 = ((int64_t)(L_212&((int64_t)((int32_t)268435455))));
		int64_t L_213 = V_4;
		int64_t L_214 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add(L_213, ((int64_t)(L_214>>((int32_t)28)))));
		int64_t L_215 = V_3;
		V_3 = ((int64_t)(L_215&((int64_t)((int32_t)268435455))));
		int64_t L_216 = V_5;
		int64_t L_217 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add(L_216, ((int64_t)(L_217>>((int32_t)28)))));
		int64_t L_218 = V_4;
		V_4 = ((int64_t)(L_218&((int64_t)((int32_t)268435455))));
		int64_t L_219 = V_6;
		int64_t L_220 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add(L_219, ((int64_t)(L_220>>((int32_t)28)))));
		int64_t L_221 = V_5;
		V_5 = ((int64_t)(L_221&((int64_t)((int32_t)268435455))));
		int64_t L_222 = V_7;
		int64_t L_223 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add(L_222, ((int64_t)(L_223>>((int32_t)28)))));
		int64_t L_224 = V_6;
		V_6 = ((int64_t)(L_224&((int64_t)((int32_t)268435455))));
		int64_t L_225 = V_8;
		int64_t L_226 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add(L_225, ((int64_t)(L_226>>((int32_t)28)))));
		int64_t L_227 = V_7;
		V_7 = ((int64_t)(L_227&((int64_t)((int32_t)268435455))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_20 = L_228;
		int64_t L_229 = V_0;
		int64_t L_230 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_231 = V_20;
		Ed25519_Encode56_m522ECDDCA6BC2A5B6EBBE54179DC289A08A69B8F(((int64_t)(L_229|((int64_t)(L_230<<((int32_t)28))))), L_231, 0, NULL);
		int64_t L_232 = V_2;
		int64_t L_233 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_234 = V_20;
		Ed25519_Encode56_m522ECDDCA6BC2A5B6EBBE54179DC289A08A69B8F(((int64_t)(L_232|((int64_t)(L_233<<((int32_t)28))))), L_234, 7, NULL);
		int64_t L_235 = V_4;
		int64_t L_236 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_237 = V_20;
		Ed25519_Encode56_m522ECDDCA6BC2A5B6EBBE54179DC289A08A69B8F(((int64_t)(L_235|((int64_t)(L_236<<((int32_t)28))))), L_237, ((int32_t)14), NULL);
		int64_t L_238 = V_6;
		int64_t L_239 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_240 = V_20;
		Ed25519_Encode56_m522ECDDCA6BC2A5B6EBBE54179DC289A08A69B8F(((int64_t)(L_238|((int64_t)(L_239<<((int32_t)28))))), L_240, ((int32_t)21), NULL);
		int64_t L_241 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_242 = V_20;
		Ed25519_Encode32_mE006CA7C69426C2798B88A4B9CC6A59DC0BD82A5(((int32_t)(uint32_t)L_241), L_242, ((int32_t)28), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_243 = V_20;
		return L_243;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBase_m7FB4AB23B3431386EC9661546045867F0BBF48C1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_Precompute_m41C84A1756DDBED6D366273D25F1A46207877B86(NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_0 = ___1_r;
		Ed25519_PointSetNeutral_m152D233739CCA2B0C8A0276DEF5A1AFFB3E1412E(L_0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		Ed25519_DecodeScalar_mC591CB69A5FDB304E26277927C6A1A5CB1DAEBBE(L_2, 0, L_3, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___L;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		uint32_t L_10;
		L_10 = Nat_CAdd_mB7A9AA8990B48544C93E4B9A04ECBB88DAE26AA1(8, ((int32_t)((int32_t)((~L_6))&1)), L_7, L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		uint32_t L_12;
		L_12 = Nat_ShiftDownBit_m413AD7BE1A11EEDE9E9A76284024E94FA18FB772(8, L_11, 1, NULL);
		V_3 = 0;
		goto IL_004a;
	}

IL_003b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		int32_t L_14 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		uint32_t L_19;
		L_19 = Interleave_Shuffle2_m1F2FDA617A293EC5E2624FCEDD6408662C521085(L_18, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)L_19);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004a:
	{
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) < ((int32_t)8)))
		{
			goto IL_003b;
		}
	}
	{
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_22 = (PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC*)il2cpp_codegen_object_new(PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC_il2cpp_TypeInfo_var);
		PointPrecomp__ctor_m146540BFE4277D2CA9FEAF96222EDE58EC44BDF8(L_22, NULL);
		V_1 = L_22;
		V_2 = ((int32_t)28);
	}

IL_0057:
	{
		V_4 = 0;
		goto IL_00ab;
	}

IL_005c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = V_2;
		int32_t L_28 = ((int32_t)((uint32_t)L_26>>((int32_t)(L_27&((int32_t)31)))));
		V_5 = ((int32_t)(((int32_t)((uint32_t)L_28>>3))&1));
		int32_t L_29 = V_5;
		V_6 = ((int32_t)(((int32_t)(L_28^((-L_29))))&7));
		int32_t L_30 = V_4;
		int32_t L_31 = V_6;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_PointLookup_mAA847E79A544B9202E899C5D48F75500E3C7CCE4(L_30, L_31, L_32, NULL);
		int32_t L_33 = V_5;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_34 = V_1;
		NullCheck(L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = L_34->___ypx_h;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_36 = V_1;
		NullCheck(L_36);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___ymx_h;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_CSwap_m492A7EB6C6B7D7C69F299B8CED36E767A56384DE(L_33, L_35, L_37, NULL);
		int32_t L_38 = V_5;
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_39 = V_1;
		NullCheck(L_39);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = L_39->___xyd;
		X25519Field_CNegate_mEDFC5DB597A4FB37EDEF56212E3754B685F9FF47(L_38, L_40, NULL);
		PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* L_41 = V_1;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_42 = ___1_r;
		Ed25519_PointAddPrecomp_mA25B7832A57DC554CD0209A49F0BFC6693D1E49D(L_41, L_42, NULL);
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ab:
	{
		int32_t L_44 = V_4;
		if ((((int32_t)L_44) < ((int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_45 = V_2;
		int32_t L_46 = ((int32_t)il2cpp_codegen_subtract(L_45, 4));
		V_2 = L_46;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00c0;
		}
	}
	{
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_47 = ___1_r;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_PointDouble_m052A2A2EF2FD61ED150C7310D8FC50A06EAD0D20(L_47, NULL);
		goto IL_0057;
	}

IL_00c0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseEncoded_m7F598FF9DE99D7AE191001ADF081F55E420C36CE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* V_0 = NULL;
	{
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_0 = (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90*)il2cpp_codegen_object_new(PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90_il2cpp_TypeInfo_var);
		PointAccum__ctor_m6006840A478C446114D26544309A507110FF14A2(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_ScalarMultBase_m7FB4AB23B3431386EC9661546045867F0BBF48C1(L_1, L_2, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_r;
		int32_t L_5 = ___2_rOff;
		int32_t L_6;
		L_6 = Ed25519_EncodePoint_mB12A34AEF57763D718AFD69D3202F1BBDF0F783A(L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ScalarMultBaseEncoded_m7F598FF9DE99D7AE191001ADF081F55E420C36CE_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseYZ_mCB20D6348175818B8AF53F7FEE65F40A780A5ADD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		int32_t L_2 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_PruneScalar_mFCE98B6E0A5056FE969933FA1A1FEE053BD87057(L_1, L_2, L_3, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_4 = (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90*)il2cpp_codegen_object_new(PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90_il2cpp_TypeInfo_var);
		PointAccum__ctor_m6006840A478C446114D26544309A507110FF14A2(L_4, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_6 = V_1;
		Ed25519_ScalarMultBase_m7FB4AB23B3431386EC9661546045867F0BBF48C1(L_5, L_6, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_7 = V_1;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___x;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_9 = V_1;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_11 = V_1;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___z;
		int32_t L_13;
		L_13 = Ed25519_CheckPoint_m7398F28DBAF2FB40C08E51C94A7E7D0B200AE617(L_8, L_10, L_12, NULL);
		if (L_13)
		{
			goto IL_003c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ScalarMultBaseYZ_mCB20D6348175818B8AF53F7FEE65F40A780A5ADD_RuntimeMethod_var)));
	}

IL_003c:
	{
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_15 = V_1;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___2_y;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_16, 0, L_17, 0, NULL);
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_18 = V_1;
		NullCheck(L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___3_z;
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_19, 0, L_20, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultStrausVar_mF2CF93B3EAFEA863A237792852C7FE61F9548433 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_nb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_np, PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* ___2_p, PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_2 = NULL;
	PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_Precompute_m41C84A1756DDBED6D366273D25F1A46207877B86(NULL);
		V_0 = 5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_nb;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
		L_1 = Ed25519_GetWnafVar_mB31696C9195687F7981D68978CB2DF500DCAF56B(L_0, 7, NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___1_np;
		int32_t L_3 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4;
		L_4 = Ed25519_GetWnafVar_mB31696C9195687F7981D68978CB2DF500DCAF56B(L_2, L_3, NULL);
		V_2 = L_4;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_5 = ___2_p;
		int32_t L_6 = V_0;
		PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_7;
		L_7 = Ed25519_PointPrecompVar_mCABA607DF679563766DAB5206E8CF78CE1DB0CF3(L_5, ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, 2))&((int32_t)31))))), NULL);
		V_3 = L_7;
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_8 = ___3_r;
		Ed25519_PointSetNeutral_m152D233739CCA2B0C8A0276DEF5A1AFFB3E1412E(L_8, NULL);
		V_4 = ((int32_t)252);
	}

IL_0033:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = V_1;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		int32_t L_13 = V_5;
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_5;
		V_7 = ((int32_t)(L_14>>((int32_t)31)));
		int32_t L_15 = V_5;
		int32_t L_16 = V_7;
		V_8 = ((int32_t)(((int32_t)(L_15^L_16))>>1));
		int32_t L_17 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_18 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBaseTable;
		int32_t L_19 = V_8;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_22 = ___3_r;
		Ed25519_PointAddVar_m336663EA737E5EE589A5AE9EF1A6ABE4EB0CAC35((bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0), L_21, L_22, NULL);
	}

IL_0060:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_23 = V_2;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		int32_t L_27 = V_6;
		if (!L_27)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_28 = V_6;
		V_9 = ((int32_t)(L_28>>((int32_t)31)));
		int32_t L_29 = V_6;
		int32_t L_30 = V_9;
		V_10 = ((int32_t)(((int32_t)(L_29^L_30))>>1));
		int32_t L_31 = V_9;
		PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE* L_32 = V_3;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_36 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_m336663EA737E5EE589A5AE9EF1A6ABE4EB0CAC35((bool)((!(((uint32_t)L_31) <= ((uint32_t)0)))? 1 : 0), L_35, L_36, NULL);
	}

IL_0089:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_4 = L_38;
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* L_39 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_PointDouble_m052A2A2EF2FD61ED150C7310D8FC50A06EAD0D20(L_39, NULL);
		goto IL_0033;
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_mABE6B4AE0AC6658AF66948422C0EA66A217B6347 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_m, int32_t ___3_mOff, int32_t ___4_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_sig, int32_t ___6_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		uint8_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_m;
		int32_t L_5 = ___3_mOff;
		int32_t L_6 = ___4_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___5_sig;
		int32_t L_8 = ___6_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_mFF6B13D7BE906B804D3DDF67565962C9B4B3DE9F(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m071D9022648B6D2745A1B251377F12A367E7E0A4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		uint8_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___4_m;
		int32_t L_7 = ___5_mOff;
		int32_t L_8 = ___6_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___7_sig;
		int32_t L_10 = ___8_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m35EC9ABCB0EB2528FDD835161E91B7E9191ADE44(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m6BDB96955A0135797FC4DF2B3F857F9BAD605D09 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_m, int32_t ___4_mOff, int32_t ___5_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_sig, int32_t ___7_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_ctx;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_m;
		int32_t L_5 = ___4_mOff;
		int32_t L_6 = ___5_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___6_sig;
		int32_t L_8 = ___7_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_mFF6B13D7BE906B804D3DDF67565962C9B4B3DE9F(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_mEEAB921793989415A998C5C53B272AE32BE711FB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_m, int32_t ___6_mOff, int32_t ___7_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___8_sig, int32_t ___9_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_m;
		int32_t L_7 = ___6_mOff;
		int32_t L_8 = ___7_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___8_sig;
		int32_t L_10 = ___9_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m35EC9ABCB0EB2528FDD835161E91B7E9191ADE44(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_m3D973E0AAA1BB45F6911BDF29AEE1EF169C78BF5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_ph, int32_t ___4_phOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_sig, int32_t ___6_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_ctx;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_ph;
		int32_t L_5 = ___4_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___5_sig;
		int32_t L_8 = ___6_sigOff;
		Ed25519_ImplSign_mFF6B13D7BE906B804D3DDF67565962C9B4B3DE9F(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_m7CC985CB61DD93E27F58EFB43F66D615BB93D2AB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ph, int32_t ___6_phOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_ph;
		int32_t L_7 = ___6_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___7_sig;
		int32_t L_10 = ___8_sigOff;
		Ed25519_ImplSign_m35EC9ABCB0EB2528FDD835161E91B7E9191ADE44(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_m4B9B428C5CDAED0B6F32202D55918DB319A1E8C0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, RuntimeObject* ___3_ph, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_sig, int32_t ___5_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___3_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_3, L_4, 0);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_SignPrehash_m4B9B428C5CDAED0B6F32202D55918DB319A1E8C0_RuntimeMethod_var)));
	}

IL_0025:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_sk;
		int32_t L_8 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_ctx;
		uint8_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___4_sig;
		int32_t L_14 = ___5_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_mFF6B13D7BE906B804D3DDF67565962C9B4B3DE9F(L_7, L_8, L_9, L_10, L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13, L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_mFFFF51826E8840426442A85A388FAC9DF167D101 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, RuntimeObject* ___5_ph, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_sig, int32_t ___7_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___5_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_3, L_4, 0);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_SignPrehash_mFFFF51826E8840426442A85A388FAC9DF167D101_RuntimeMethod_var)));
	}

IL_0026:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_sk;
		int32_t L_8 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_pk;
		int32_t L_10 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___4_ctx;
		uint8_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___6_sig;
		int32_t L_16 = ___7_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m35EC9ABCB0EB2528FDD835161E91B7E9191ADE44(L_7, L_8, L_9, L_10, L_11, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)), L_15, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_Verify_mB864EC725C45B2B33C0059D44D337697B6E4CB53 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		uint8_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___4_m;
		int32_t L_7 = ___5_mOff;
		int32_t L_8 = ___6_mLen;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Ed25519_ImplVerify_mA82B8EB33409E19CDD41CD04EFFFD9FF0D5A5ED8(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_Verify_mD7A35535A69131EDB635034E431145EF371F1456 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_m, int32_t ___6_mOff, int32_t ___7_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_m;
		int32_t L_7 = ___6_mOff;
		int32_t L_8 = ___7_mLen;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Ed25519_ImplVerify_mA82B8EB33409E19CDD41CD04EFFFD9FF0D5A5ED8(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_VerifyPrehash_m1001FC46BE7FE4832F74BF51C34D0C55DC7A131B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ph, int32_t ___6_phOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_ph;
		int32_t L_7 = ___6_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize;
		bool L_9;
		L_9 = Ed25519_ImplVerify_mA82B8EB33409E19CDD41CD04EFFFD9FF0D5A5ED8(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_VerifyPrehash_m012DD42C0FE8800932861998072B952FBE9980CE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, RuntimeObject* ___5_ph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___5_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_3, L_4, 0);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_VerifyPrehash_m012DD42C0FE8800932861998072B952FBE9980CE_RuntimeMethod_var)));
	}

IL_0026:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_sig;
		int32_t L_8 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_pk;
		int32_t L_10 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___4_ctx;
		uint8_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Ed25519_ImplVerify_mA82B8EB33409E19CDD41CD04EFFFD9FF0D5A5ED8(L_7, L_8, L_9, L_10, L_11, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)), NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519__ctor_mE8995AD08F65806A030963DD3EB9C46DB47334BB (Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519__cctor_mCFE3F256AB2B0051C36414CF559721A01E207448 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____5BBB9265FCB4E834C68440328645B1A187F68D3275881FC46B21564B11326DA5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____6965AC9D48CA477E9A17658D33A217051648138AD7024514DE014D8001B533C3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____97CAAC7D5BE7722352C1AB556BFE01D3F3CCA0F50B5A648195D6415006620C8F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____BABB01CD1E2AD140F7D2AF35515DA38E8936F0BA0298BCF0245EB5692A3F69CC_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____BD6174A7C16E1AF07272966A9C071C8A3CF16B2726C50D672A09F60636B08901_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____D6380FB2FF2DD88C9290D88B81E78BCA13AAAB4BE827B103062AFBB1085B0793_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____ECA151F23D399F9FE976255B143D0691D0BE043E033B0E2814C0A547336D6545_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA6E8DE812C20B70B9E93F176F4D555488AD06AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PrehashSize = ((int32_t)64);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___PublicKeySize = ((int32_t)32);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___SecretKeySize = ((int32_t)32);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___SignatureSize = ((int32_t)64);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = Strings_ToByteArray_m15A228865F989895F66F50377670C1FBEA709CE3(_stringLiteralCA6E8DE812C20B70B9E93F176F4D555488AD06AC, NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___Dom2Prefix = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___Dom2Prefix), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____BD6174A7C16E1AF07272966A9C071C8A3CF16B2726C50D672A09F60636B08901_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___P = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___P), (void*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____6965AC9D48CA477E9A17658D33A217051648138AD7024514DE014D8001B533C3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___L = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___L), (void*)L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____5BBB9265FCB4E834C68440328645B1A187F68D3275881FC46B21564B11326DA5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_8, L_9, NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___B_x = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___B_x), (void*)L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____ECA151F23D399F9FE976255B143D0691D0BE043E033B0E2814C0A547336D6545_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_11, L_12, NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___B_y = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___B_y), (void*)L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____D6380FB2FF2DD88C9290D88B81E78BCA13AAAB4BE827B103062AFBB1085B0793_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_14, L_15, NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d), (void*)L_14);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____97CAAC7D5BE7722352C1AB556BFE01D3F3CCA0F50B5A648195D6415006620C8F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_17, L_18, NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d2), (void*)L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____BABB01CD1E2AD140F7D2AF35515DA38E8936F0BA0298BCF0245EB5692A3F69CC_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_20, L_21, NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___C_d4), (void*)L_20);
		RuntimeObject* L_22 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_22, NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompLock = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompLock), (void*)L_22);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBaseTable = (PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBaseTable), (void*)(PointExtU5BU5D_tA3E1ABDAF3237210732B24A9272319D52D96E1CE*)NULL);
		((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var))->___precompBase), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAccum__ctor_m6006840A478C446114D26544309A507110FF14A2 (PointAccum_tE2DDE52BC01646E85E5E1473A7D059FDEF231D90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___x = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___y = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___z = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___u = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___u), (void*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___v = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v), (void*)L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_m04EA1B9052A3EBBD93E9C84FDC3FABDFB2ABB35B (PointExt_tD10284BA4C3C8059F7616FA8873AAE84CAA2DEA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___x = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___y = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___z = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___t = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m146540BFE4277D2CA9FEAF96222EDE58EC44BDF8 (PointPrecomp_tE9AEDA7B43808D38DB8A4AD08E68D44EB29BD6BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___ypx_h = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ypx_h), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___ymx_h = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ymx_h), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		__this->___xyd = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xyd), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_CalculateS_m92AB47AA5CCDB8C4B9EEAA669858F839518D04A1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_r;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_DecodeScalar_m7D209348AC358B759F16D8302312E0818FFA0CC0(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_k;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		Ed448_DecodeScalar_m7D209348AC358B759F16D8302312E0818FFA0CC0(L_4, 0, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_2 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_s;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_2;
		Ed448_DecodeScalar_m7D209348AC358B759F16D8302312E0818FFA0CC0(L_7, 0, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		uint32_t L_12;
		L_12 = Nat_MulAddTo_m860223FC379D4E0A7EDE41473013E9C35063C683(((int32_t)14), L_9, L_10, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_3 = L_13;
		V_4 = 0;
		goto IL_005c;
	}

IL_0048:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
		int32_t L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_Encode32_m10BE3620188878AB64D1B4D76625D78E6C2D9A6B(L_17, L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 4)), NULL);
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Ed448_ReduceScalar_m249E66B3F7C7C5E8A623704074D1458C481C74E8(L_23, NULL);
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckContextVar_m50B27F8EC1B4DD72EA7284BF12E9E35375291235 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_ctx, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_ctx;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_ctx;
		NullCheck(L_1);
		return (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)((int32_t)256)))? 1 : 0);
	}

IL_000e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_m7393C5475FDEFBAFFB49555F7A37A8289FD903CB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_1;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_3, L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_2;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_5, L_6, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_7, L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_10, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		X448Field_Mul_m28F4C031497CF54E372A7E38418208C145359627(L_13, ((int32_t)39081), L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		X448Field_SubOne_m1FA342BF4FE4C4023151FD1F11DB487C483E2846(L_15, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_16, L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_0;
		X448Field_Normalize_m26ACA995C5043D08BDF088D5468FCC82115173C2(L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		int32_t L_21;
		L_21 = X448Field_IsZero_mFCFA5EF88404AFCF33759030B3DAF0C6B26FBAF5(L_20, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_mEBE5F63E6CEFB7CB45D6156FF58E1DCEF99B5D93 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_4, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_2;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_3;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_10, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_13, L_14, L_15, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_16, L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_3;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_19, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		X448Field_Mul_m28F4C031497CF54E372A7E38418208C145359627(L_21, ((int32_t)39081), L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_0;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_23, L_24, L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_26, L_27, L_28, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_0;
		X448Field_Normalize_m26ACA995C5043D08BDF088D5468FCC82115173C2(L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_0;
		int32_t L_31;
		L_31 = X448Field_IsZero_mFCFA5EF88404AFCF33759030B3DAF0C6B26FBAF5(L_30, NULL);
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckPointVar_m0C37E80B1C9639E52561DFE3506CE63AF328EB06 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)56);
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!((int32_t)((int32_t)L_2&((int32_t)127))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_p;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_Decode32_m307F7B07874D90B87187C77FB5113681062943E6(L_4, 0, L_5, 0, ((int32_t)14), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___P;
		bool L_8;
		L_8 = Nat_Gte_mC29F1B0488783585B956396CFB584E36C5DF6E8B(((int32_t)14), L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckScalarVar_m6E13138D25304A2BD484ABFF197C29703B9C799C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_s;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)56);
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!L_2)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_s;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_DecodeScalar_m7D209348AC358B759F16D8302312E0818FFA0CC0(L_4, 0, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___L;
		bool L_8;
		L_8 = Nat_Gte_mC29F1B0488783585B956396CFB584E36C5DF6E8B(((int32_t)14), L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed448_CreatePrehash_m2EB153F4FCC3B26E9C39F76D9849291F517784A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed448_CreateXof_mA07A6D62F85C3E0DB693576D58F837DC2440B317(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed448_CreateXof_mA07A6D62F85C3E0DB693576D58F837DC2440B317 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* L_0 = (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1*)il2cpp_codegen_object_new(ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1_il2cpp_TypeInfo_var);
		ShakeDigest__ctor_m773AA739141D2B3CF7B146D3D1E6F94615A6750B(L_0, ((int32_t)256), NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode16_mBF934F453355B566ABE2D0B7DE8EC2BF088606F3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return ((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return ((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bs;
		int32_t L_15 = ___1_off;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		___1_off = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Decode32_m307F7B07874D90B87187C77FB5113681062943E6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_bsOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, int32_t ___3_nOff, int32_t ___4_nLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_n;
		int32_t L_1 = ___3_nOff;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bs;
		int32_t L_4 = ___1_bsOff;
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_3, ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_multiply(L_5, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint32_t)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___4_nLen;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_DecodePointVar_m77AB580C7D1188063A809AA00E588F5B5F2E2934 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, int32_t ___1_pOff, bool ___2_negate, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		int32_t L_1 = ___1_pOff;
		int32_t L_2 = ___1_pOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Arrays_CopyOfRange_m2FEFC438755F0A2DE6E02C05303B2654984C1965(L_0, L_1, ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)57))), NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Ed448_CheckPointVar_m0C37E80B1C9639E52561DFE3506CE63AF328EB06(L_4, NULL);
		if (L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)56);
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)(((int32_t)((int32_t)L_8&((int32_t)128)))>>7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		uint8_t* L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)56))));
		int32_t L_11 = *((uint8_t*)L_10);
		*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_11&((int32_t)127))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_13 = ___3_r;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___y;
		X448Field_Decode_mAD715DC0431022960828D145147A836D73AFE626(L_12, 0, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15;
		L_15 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_2 = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16;
		L_16 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_3 = L_16;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_17 = ___3_r;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_18, L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_3;
		X448Field_Mul_m28F4C031497CF54E372A7E38418208C145359627(L_20, ((int32_t)39081), L_21, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_2;
		X448Field_Negate_m2335B056D7800476789FB9BB0A9B555041353443(L_22, L_23, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_2;
		X448Field_AddOne_m7C1BB43F24A806574BF27227A01EC3142C220035(L_24, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		X448Field_AddOne_m7C1BB43F24A806574BF27227A01EC3142C220035(L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_3;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_28 = ___3_r;
		NullCheck(L_28);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = L_28->___x;
		bool L_30;
		L_30 = X448Field_SqrtRatioVar_m1F5321B7413DFEED00BF93A3305D99DA5F3726E2(L_26, L_27, L_29, NULL);
		if (L_30)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)0;
	}

IL_0087:
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_31 = ___3_r;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___x;
		X448Field_Normalize_m26ACA995C5043D08BDF088D5468FCC82115173C2(L_32, NULL);
		int32_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00a5;
		}
	}
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_34 = ___3_r;
		NullCheck(L_34);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___x;
		bool L_36;
		L_36 = X448Field_IsZeroVar_mC3D4F712FDEF97B9431232C0E7BE722923B69A6F(L_35, NULL);
		if (!L_36)
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)0;
	}

IL_00a5:
	{
		bool L_37 = ___2_negate;
		int32_t L_38 = V_1;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_39 = ___3_r;
		NullCheck(L_39);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = L_39->___x;
		NullCheck(L_40);
		int32_t L_41 = 0;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if (!((int32_t)((int32_t)L_37^((((int32_t)((((int64_t)((int64_t)L_38)) == ((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_42&1))))))? 1 : 0)) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_00cc;
		}
	}
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_43 = ___3_r;
		NullCheck(L_43);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = L_43->___x;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_45 = ___3_r;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___x;
		X448Field_Negate_m2335B056D7800476789FB9BB0A9B555041353443(L_44, L_46, NULL);
	}

IL_00cc:
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_47 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_PointExtendXY_m4827F8DC2E4D78B25F13F0A7EB826727A5FB9A27(L_47, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_DecodeScalar_m7D209348AC358B759F16D8302312E0818FFA0CC0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_n;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_Decode32_m307F7B07874D90B87187C77FB5113681062943E6(L_0, L_1, L_2, 0, ((int32_t)14), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Dom4_m3D9C01B47D91CB733537FF5B627E87363AAAC8AD (RuntimeObject* ___0_d, uint8_t ___1_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___Dom4Prefix;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___Dom4Prefix;
		NullCheck(L_2);
		NullCheck(L_0);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)));
		RuntimeObject* L_3 = ___0_d;
		uint8_t L_4 = ___1_x;
		NullCheck(L_3);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_5 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_y;
		NullCheck(L_6);
		NullCheck(L_5);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_5, (uint8_t)((int32_t)(uint8_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		RuntimeObject* L_7 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_y;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_y;
		NullCheck(L_9);
		NullCheck(L_7);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode24_mDBFB2F348685839FABDCCDD7D6B55B773CB32D63 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode32_m10BE3620188878AB64D1B4D76625D78E6C2D9A6B (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_bs;
		int32_t L_12 = ___2_off;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___2_off = L_13;
		uint32_t L_14 = ___0_n;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6 (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_bs;
		int32_t L_2 = ___2_off;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_Encode32_m10BE3620188878AB64D1B4D76625D78E6C2D9A6B(((int32_t)(uint32_t)L_0), L_1, L_2, NULL);
		uint64_t L_3 = ___0_n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_bs;
		int32_t L_5 = ___2_off;
		Ed448_Encode24_mDBFB2F348685839FABDCCDD7D6B55B773CB32D63(((int32_t)(uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)32)))), L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_EncodePoint_m323A756F6B6EF6AB57094EC238D9D6837A962F82 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_1 = L_1;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_2 = ___0_p;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_1;
		X448Field_Inv_m99F066E3A511DC6C85677AFE65FD223B6B622D51(L_3, L_4, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_5 = ___0_p;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_6, L_7, L_8, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_9 = ___0_p;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_10, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		X448Field_Normalize_m26ACA995C5043D08BDF088D5468FCC82115173C2(L_13, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_1;
		X448Field_Normalize_m26ACA995C5043D08BDF088D5468FCC82115173C2(L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Ed448_CheckPoint_m7393C5475FDEFBAFFB49555F7A37A8289FD903CB(L_15, L_16, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_r;
		int32_t L_20 = ___2_rOff;
		X448Field_Encode_m3AD5D6E904B1757638A2824EFFB4C61EBD166565(L_18, L_19, L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___1_r;
		int32_t L_22 = ___2_rOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = 0;
		uint32_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, ((int32_t)57))), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_25&1))<<7))));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_GeneratePrivateKey_mC5506074C540BEC1057551F61C81325FACCD5F6A (SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___0_random, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, const RuntimeMethod* method) 
{
	{
		SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* L_0 = ___0_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_k;
		NullCheck(L_0);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_GeneratePublicKey_m66FDF7933B28AC1E977FA7E3C0600A87B640838C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed448_CreateXof_mA07A6D62F85C3E0DB693576D58F837DC2440B317(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_0 = L_1;
		RuntimeObject* L_2 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_sk;
		int32_t L_4 = ___1_skOff;
		int32_t L_5 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_2);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_2);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var, L_2, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		Ed448_PruneScalar_m4F219411E5E0C9E0C0AD6225369C3455BFEE99C3(L_10, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___2_pk;
		int32_t L_14 = ___3_pkOff;
		Ed448_ScalarMultBaseEncoded_mAE0BBF97D951710981883634BFE1933B67909095(L_12, L_13, L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed448_GetWnafVar_m924B2047E3ED6D1DD146D1ED68E94A28C17A32F5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_n, int32_t ___1_width, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		V_6 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		NullCheck(L_1);
		V_7 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_8 = ((int32_t)14);
		goto IL_003e;
	}

IL_0016:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_n;
		int32_t L_3 = V_8;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_9 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_7;
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		V_7 = L_8;
		uint32_t L_9 = V_9;
		uint32_t L_10 = V_6;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))|((int32_t)((int32_t)L_10<<((int32_t)16))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		int32_t L_12 = V_7;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_7 = L_13;
		uint32_t L_14 = V_9;
		uint32_t L_15 = L_14;
		V_6 = L_15;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_15);
	}

IL_003e:
	{
		int32_t L_16 = V_8;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		V_8 = L_17;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_18 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)447));
		V_1 = L_18;
		int32_t L_19 = ___1_width;
		int32_t L_20 = ((int32_t)(1<<((int32_t)(L_19&((int32_t)31)))));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		V_3 = ((int32_t)((uint32_t)L_20>>1));
		V_4 = 0;
		V_5 = 0;
		V_10 = 0;
		goto IL_00d5;
	}

IL_006b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		int32_t L_22 = V_10;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_11 = L_24;
		goto IL_00c2;
	}

IL_0073:
	{
		uint32_t L_25 = V_11;
		int32_t L_26 = V_5;
		V_12 = ((int32_t)((uint32_t)L_25>>((int32_t)(L_26&((int32_t)31)))));
		uint32_t L_27 = V_12;
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)((int32_t)((int32_t)L_27&1))) == ((uint32_t)L_28))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		goto IL_00c2;
	}

IL_008d:
	{
		uint32_t L_30 = V_12;
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_4;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_30&(int32_t)L_31)), (int32_t)L_32));
		uint32_t L_33 = V_13;
		uint32_t L_34 = V_3;
		V_4 = ((int32_t)((int32_t)L_33&(int32_t)L_34));
		uint32_t L_35 = V_13;
		uint32_t L_36 = V_4;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, ((int32_t)((int32_t)L_36<<1))));
		uint32_t L_37 = V_4;
		int32_t L_38 = ___1_width;
		V_4 = ((int32_t)((uint32_t)L_37>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_38, 1))&((int32_t)31)))));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_39 = V_1;
		int32_t L_40 = V_10;
		int32_t L_41 = V_5;
		uint32_t L_42 = V_13;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(L_40<<4)), L_41))), (int8_t)((int8_t)L_42));
		int32_t L_43 = V_5;
		int32_t L_44 = ___1_width;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
	}

IL_00c2:
	{
		int32_t L_45 = V_5;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)16))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_46 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_47, ((int32_t)16)));
	}

IL_00d5:
	{
		int32_t L_48 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_0;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_50 = V_1;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m41C304FD8793007DABDE4A2509D66911CA694EBF (RuntimeObject* ___0_d, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_pk, int32_t ___4_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ctx, uint8_t ___6_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_m, int32_t ___8_mOff, int32_t ___9_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___10_sig, int32_t ___11_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_d;
		uint8_t L_1 = ___6_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___5_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_Dom4_m3D9C01B47D91CB733537FF5B627E87363AAAC8AD(L_0, L_1, L_2, NULL);
		RuntimeObject* L_3 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_h;
		NullCheck(L_3);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_3, L_4, ((int32_t)57), ((int32_t)57));
		RuntimeObject* L_5 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___7_m;
		int32_t L_7 = ___8_mOff;
		int32_t L_8 = ___9_mLen;
		NullCheck(L_5);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_h;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Ed448_ReduceScalar_m249E66B3F7C7C5E8A623704074D1458C481C74E8(L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_0 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		Ed448_ScalarMultBaseEncoded_mAE0BBF97D951710981883634BFE1933B67909095(L_16, L_17, 0, NULL);
		RuntimeObject* L_18 = ___0_d;
		uint8_t L_19 = ___6_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___5_ctx;
		Ed448_Dom4_m3D9C01B47D91CB733537FF5B627E87363AAAC8AD(L_18, L_19, L_20, NULL);
		RuntimeObject* L_21 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_21, L_22, 0, ((int32_t)57));
		RuntimeObject* L_23 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___3_pk;
		int32_t L_25 = ___4_pkOff;
		NullCheck(L_23);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_23, L_24, L_25, ((int32_t)57));
		RuntimeObject* L_26 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___7_m;
		int32_t L_28 = ___8_mOff;
		int32_t L_29 = ___9_mLen;
		NullCheck(L_26);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_26, L_27, L_28, L_29);
		RuntimeObject* L_30 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_h;
		NullCheck(L_32);
		NullCheck(L_30);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var, L_30, L_31, 0, ((int32_t)(((RuntimeArray*)L_32)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = Ed448_ReduceScalar_m249E66B3F7C7C5E8A623704074D1458C481C74E8(L_34, NULL);
		V_1 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___2_s;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = Ed448_CalculateS_m92AB47AA5CCDB8C4B9EEAA669858F839518D04A1(L_16, L_36, L_37, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___10_sig;
		int32_t L_41 = ___11_sigOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, (RuntimeArray*)L_40, L_41, ((int32_t)57), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___10_sig;
		int32_t L_43 = ___11_sigOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_38, 0, (RuntimeArray*)L_42, ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)57))), ((int32_t)57), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_mD0DDC0485DD4127334E73C104E76679E00EC18B9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, uint8_t ___3_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ed448_CheckContextVar_m50B27F8EC1B4DD72EA7284BF12E9E35375291235(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ImplSign_mD0DDC0485DD4127334E73C104E76679E00EC18B9_RuntimeMethod_var)));
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Ed448_CreateXof_mA07A6D62F85C3E0DB693576D58F837DC2440B317(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_0 = L_4;
		RuntimeObject* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_sk;
		int32_t L_7 = ___1_skOff;
		int32_t L_8 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_5);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_1 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		Ed448_PruneScalar_m4F219411E5E0C9E0C0AD6225369C3455BFEE99C3(L_14, 0, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_2 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		Ed448_ScalarMultBaseEncoded_mAE0BBF97D951710981883634BFE1933B67909095(L_17, L_18, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___2_ctx;
		uint8_t L_23 = ___3_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___4_m;
		int32_t L_25 = ___5_mOff;
		int32_t L_26 = ___6_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___7_sig;
		int32_t L_28 = ___8_sigOff;
		Ed448_ImplSign_m41C304FD8793007DABDE4A2509D66911CA694EBF(L_9, L_19, L_20, L_21, 0, L_22, L_23, L_24, L_25, L_26, L_27, L_28, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_mE5CDBF1FE5A0F85D743F88EBE87EFA23F6B28F2F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___9_sig, int32_t ___10_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ed448_CheckContextVar_m50B27F8EC1B4DD72EA7284BF12E9E35375291235(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ImplSign_mE5CDBF1FE5A0F85D743F88EBE87EFA23F6B28F2F_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Ed448_CreateXof_mA07A6D62F85C3E0DB693576D58F837DC2440B317(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_0 = L_4;
		RuntimeObject* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_sk;
		int32_t L_7 = ___1_skOff;
		int32_t L_8 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_5);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_1 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		Ed448_PruneScalar_m4F219411E5E0C9E0C0AD6225369C3455BFEE99C3(L_14, 0, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___2_pk;
		int32_t L_19 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___4_ctx;
		uint8_t L_21 = ___5_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___6_m;
		int32_t L_23 = ___7_mOff;
		int32_t L_24 = ___8_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___9_sig;
		int32_t L_26 = ___10_sigOff;
		Ed448_ImplSign_m41C304FD8793007DABDE4A2509D66911CA694EBF(L_9, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_ImplVerify_m9E1CB9694FF1E78E589F89C01C469DDE7B75CE05 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ed448_CheckContextVar_m50B27F8EC1B4DD72EA7284BF12E9E35375291235(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ImplVerify_m9E1CB9694FF1E78E589F89C01C469DDE7B75CE05_RuntimeMethod_var)));
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_sig;
		int32_t L_4 = ___1_sigOff;
		int32_t L_5 = ___1_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_CopyOfRange_m2FEFC438755F0A2DE6E02C05303B2654984C1965(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)57))), NULL);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_sig;
		int32_t L_8 = ___1_sigOff;
		int32_t L_9 = ___1_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___SignatureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Arrays_CopyOfRange_m2FEFC438755F0A2DE6E02C05303B2654984C1965(L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)57))), ((int32_t)il2cpp_codegen_add(L_9, L_10)), NULL);
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		bool L_13;
		L_13 = Ed448_CheckPointVar_m0C37E80B1C9639E52561DFE3506CE63AF328EB06(L_12, NULL);
		if (L_13)
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Ed448_CheckScalarVar_m6E13138D25304A2BD484ABFF197C29703B9C799C(L_14, NULL);
		if (L_15)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)0;
	}

IL_0046:
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_16 = (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)il2cpp_codegen_object_new(PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		PointExt__ctor_mBFD4DAD3052D0CB4BEC9669B21AD21E5412A3CE9(L_16, NULL);
		V_2 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___2_pk;
		int32_t L_18 = ___3_pkOff;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Ed448_DecodePointVar_m77AB580C7D1188063A809AA00E588F5B5F2E2934(L_17, L_18, (bool)1, L_19, NULL);
		if (L_20)
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}

IL_0059:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		RuntimeObject* L_21;
		L_21 = Ed448_CreateXof_mA07A6D62F85C3E0DB693576D58F837DC2440B317(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_3 = L_22;
		RuntimeObject* L_23 = L_21;
		uint8_t L_24 = ___5_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___4_ctx;
		Ed448_Dom4_m3D9C01B47D91CB733537FF5B627E87363AAAC8AD(L_23, L_24, L_25, NULL);
		RuntimeObject* L_26 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		NullCheck(L_26);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_26, L_27, 0, ((int32_t)57));
		RuntimeObject* L_28 = L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___2_pk;
		int32_t L_30 = ___3_pkOff;
		NullCheck(L_28);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_28, L_29, L_30, ((int32_t)57));
		RuntimeObject* L_31 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___6_m;
		int32_t L_33 = ___7_mOff;
		int32_t L_34 = ___8_mLen;
		NullCheck(L_31);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_31, L_32, L_33, L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_3;
		NullCheck(L_36);
		NullCheck(L_31);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var, L_31, L_35, 0, ((int32_t)(((RuntimeArray*)L_36)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = Ed448_ReduceScalar_m249E66B3F7C7C5E8A623704074D1458C481C74E8(L_38, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_4 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_4;
		Ed448_DecodeScalar_m7D209348AC358B759F16D8302312E0818FFA0CC0(L_41, 0, L_42, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_5 = L_43;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_5;
		Ed448_DecodeScalar_m7D209348AC358B759F16D8302312E0818FFA0CC0(L_39, 0, L_44, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_45 = (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)il2cpp_codegen_object_new(PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		PointExt__ctor_mBFD4DAD3052D0CB4BEC9669B21AD21E5412A3CE9(L_45, NULL);
		V_6 = L_45;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_5;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_48 = V_2;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_49 = V_6;
		Ed448_ScalarMultStrausVar_m884A053AB74B076326EC8817587C724474108226(L_46, L_47, L_48, L_49, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_7 = L_50;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_51 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_7;
		int32_t L_53;
		L_53 = Ed448_EncodePoint_m323A756F6B6EF6AB57094EC238D9D6837A962F82(L_51, L_52, 0, NULL);
		if (!L_53)
		{
			goto IL_00f5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Arrays_AreEqual_mF4FFEFFC4A23BEC3C36821B5E80341EB1E5A2351(L_54, L_55, NULL);
		return L_56;
	}

IL_00f5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddVar_mBF555D463F4A92959E0BC5BABA7D4EC5607DB0C3 (bool ___0_negate, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___1_p, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___2_r, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_9 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_11 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_5 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_6 = L_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7;
		L_7 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_7 = L_7;
		bool L_8 = ___0_negate;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_4;
		V_8 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		V_9 = L_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_6;
		V_10 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_5;
		V_11 = L_12;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_13 = ___1_p;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___y;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_15 = ___1_p;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_7;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_14, L_16, L_17, NULL);
		goto IL_007d;
	}

IL_005b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		V_8 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_4;
		V_9 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_5;
		V_10 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_6;
		V_11 = L_21;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_22 = ___1_p;
		NullCheck(L_22);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22->___y;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_24 = ___1_p;
		NullCheck(L_24);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_7;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_23, L_25, L_26, NULL);
	}

IL_007d:
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_27 = ___1_p;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___z;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_29 = ___2_r;
		NullCheck(L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_0;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_28, L_30, L_31, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_1;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_32, L_33, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_34 = ___1_p;
		NullCheck(L_34);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___x;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_36 = ___2_r;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_2;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_35, L_37, L_38, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_39 = ___1_p;
		NullCheck(L_39);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = L_39->___y;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_41 = ___2_r;
		NullCheck(L_41);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = L_41->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_3;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_40, L_42, L_43, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_4;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_44, L_45, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_4;
		X448Field_Mul_m28F4C031497CF54E372A7E38418208C145359627(L_47, ((int32_t)39081), L_48, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_10;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_49, L_50, L_51, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_11;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_52, L_53, L_54, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_55 = ___2_r;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___x;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_57 = ___2_r;
		NullCheck(L_57);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = L_57->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_4;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_56, L_58, L_59, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_7;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_60, L_61, L_62, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_8;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_63, L_64, L_65, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_9;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_66, L_67, L_68, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_8;
		X448Field_Carry_m897092BD9C78CE231321827FE64E167B11A2E26A(L_69, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = V_7;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_70, L_71, L_72, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = V_7;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_73, L_74, L_75, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = V_4;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_76, L_77, L_78, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = V_7;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_81 = ___2_r;
		NullCheck(L_81);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = L_81->___x;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_79, L_80, L_82, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = V_6;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_85 = ___2_r;
		NullCheck(L_85);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = L_85->___y;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_83, L_84, L_86, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = V_6;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_89 = ___2_r;
		NullCheck(L_89);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = L_89->___z;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_87, L_88, L_90, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddPrecomp_m3650CDB7CA5508CD965BF9A617CD151492FD45E2 (PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* ___0_p, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___1_r, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_5 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_6 = L_6;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_7 = ___1_r;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_8, L_9, NULL);
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_10 = ___0_p;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___x;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_12 = ___1_r;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_1;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_11, L_13, L_14, NULL);
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_15 = ___0_p;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___y;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_17 = ___1_r;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_16, L_18, L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_3;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_20, L_21, L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		X448Field_Mul_m28F4C031497CF54E372A7E38418208C145359627(L_23, ((int32_t)39081), L_24, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_4;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_25, L_26, L_27, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_5;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_28, L_29, L_30, NULL);
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_31 = ___0_p;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___x;
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_33 = ___0_p;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_0;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_32, L_34, L_35, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_36 = ___1_r;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___x;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_38 = ___1_r;
		NullCheck(L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_3;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_37, L_39, L_40, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_6;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_41, L_42, L_43, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_0;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_44, L_45, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_3;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_47, L_48, L_49, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_0;
		X448Field_Carry_m897092BD9C78CE231321827FE64E167B11A2E26A(L_50, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_6;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_51, L_52, L_53, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_6;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_55 = ___1_r;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_6;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_54, L_56, L_57, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_3;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_59 = ___1_r;
		NullCheck(L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = L_59->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_3;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_58, L_60, L_61, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_6;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_64 = ___1_r;
		NullCheck(L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = L_64->___x;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_62, L_63, L_65, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_5;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_68 = ___1_r;
		NullCheck(L_68);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = L_68->___y;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_66, L_67, L_69, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_5;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_72 = ___1_r;
		NullCheck(L_72);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = L_72->___z;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_70, L_71, L_73, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* Ed448_PointCopy_m924674D20E9046CF8076280DF6A95D63094042CB (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* V_0 = NULL;
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_0 = (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)il2cpp_codegen_object_new(PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		PointExt__ctor_mBFD4DAD3052D0CB4BEC9669B21AD21E5412A3CE9(L_0, NULL);
		V_0 = L_0;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_1 = ___0_p;
		NullCheck(L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1->___x;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___x;
		X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788(L_2, 0, L_4, 0, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_5 = ___0_p;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___y;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_7 = V_0;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___y;
		X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788(L_6, 0, L_8, 0, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_9 = ___0_p;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___z;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_11 = V_0;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___z;
		X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788(L_10, 0, L_12, 0, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointDouble_m5B63D15D542AF63EAFDFC001F422C67052C81AF0 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_r, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		V_5 = L_5;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_6 = ___0_r;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___x;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_8 = ___0_r;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_7, L_9, L_10, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_11, L_12, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_13 = ___0_r;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_14, L_15, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_16 = ___0_r;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_2;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_3;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_19, L_20, L_21, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_3;
		X448Field_Carry_m897092BD9C78CE231321827FE64E167B11A2E26A(L_22, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_23 = ___0_r;
		NullCheck(L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_4;
		X448Field_Sqr_mC1F9F99AC475F15496DA6EDE0836B04401791B18(L_24, L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_4;
		X448Field_Add_m0916EC6D1EA393B8F1B8D34BA291546E52E743CF(L_26, L_27, L_28, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_4;
		X448Field_Carry_m897092BD9C78CE231321827FE64E167B11A2E26A(L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_5;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_30, L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_0;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_33, L_34, L_35, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_1;
		X448Field_Sub_m43D1C649653D90CD7CA4A4987F7516D90F9FC675(L_36, L_37, L_38, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_5;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_41 = ___0_r;
		NullCheck(L_41);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = L_41->___x;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_39, L_40, L_42, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_1;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_45 = ___0_r;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___y;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_43, L_44, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_5;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_49 = ___0_r;
		NullCheck(L_49);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = L_49->___z;
		X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_47, L_48, L_50, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointExtendXY_m4827F8DC2E4D78B25F13F0A7EB826727A5FB9A27 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, const RuntimeMethod* method) 
{
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_0 = ___0_p;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___z;
		X448Field_One_m6074E16D9647D0A634D161E5C0CE09987B1C7D2B(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointLookup_mF5BF4A7B845349F49818290EC68CFB238E0F5167 (int32_t ___0_block, int32_t ___1_index, PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* ___2_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_block;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)16))), 2)), ((int32_t)16)));
		V_1 = 0;
		goto IL_0049;
	}

IL_000e:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1^L_2)), 1))>>((int32_t)31)));
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_5 = V_0;
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_6 = ___2_p;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___x;
		X448Field_CMov_m356F1043BEDA67CB64F2566DE8D184283076D369(L_3, L_4, L_5, L_7, 0, NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)16)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_10 = V_0;
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_11 = ___2_p;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___y;
		X448Field_CMov_m356F1043BEDA67CB64F2566DE8D184283076D369(L_3, L_9, L_10, L_12, 0, NULL);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)16)));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0049:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)16))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* Ed448_PointPrecompVar_mE83646331B9BE79F0F1C1D0F158A33128FA3D816 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, int32_t ___1_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* V_0 = NULL;
	PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* V_1 = NULL;
	int32_t V_2 = 0;
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_0 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_1;
		L_1 = Ed448_PointCopy_m924674D20E9046CF8076280DF6A95D63094042CB(L_0, NULL);
		V_0 = L_1;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_2 = V_0;
		Ed448_PointDouble_m5B63D15D542AF63EAFDFC001F422C67052C81AF0(L_2, NULL);
		int32_t L_3 = ___1_count;
		PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_4 = (PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62*)(PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62*)SZArrayNew(PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_5 = V_1;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_6 = ___0_p;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_7;
		L_7 = Ed448_PointCopy_m924674D20E9046CF8076280DF6A95D63094042CB(L_6, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)L_7);
		V_2 = 1;
		goto IL_003c;
	}

IL_0021:
	{
		PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_8 = V_1;
		int32_t L_9 = V_2;
		PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_14;
		L_14 = Ed448_PointCopy_m924674D20E9046CF8076280DF6A95D63094042CB(L_13, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_14);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)L_14);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_15 = V_0;
		PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Ed448_PointAddVar_mBF555D463F4A92959E0BC5BABA7D4EC5607DB0C3((bool)0, L_15, L_19, NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_003c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = ___1_count;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0021;
		}
	}
	{
		PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_23 = V_1;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointSetNeutral_mE8166763401C7CC80C8F0DD34A4486152DC9CA58 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___0_p, const RuntimeMethod* method) 
{
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_0 = ___0_p;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___x;
		X448Field_Zero_mD39E562231F16CC7523765A69C4CDD92D6CFB3D6(L_1, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_2 = ___0_p;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___y;
		X448Field_One_m6074E16D9647D0A634D161E5C0CE09987B1C7D2B(L_3, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_4 = ___0_p;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___z;
		X448Field_One_m6074E16D9647D0A634D161E5C0CE09987B1C7D2B(L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Precompute_m255EB81B13C789CFE2E7D2161EC0E25C56655205 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* V_5 = NULL;
	PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* V_6 = NULL;
	PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* V_15 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompLock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01e0:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_01e9;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_01e9:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBase;
				if (!L_4)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_01ea;
			}

IL_001c_1:
			{
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_5 = (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)il2cpp_codegen_object_new(PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
				PointExt__ctor_mBFD4DAD3052D0CB4BEC9669B21AD21E5412A3CE9(L_5, NULL);
				V_2 = L_5;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___B_x;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_7 = V_2;
				NullCheck(L_7);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___x;
				X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788(L_6, 0, L_8, 0, NULL);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___B_y;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_10 = V_2;
				NullCheck(L_10);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___y;
				X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788(L_9, 0, L_11, 0, NULL);
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_12 = V_2;
				Ed448_PointExtendXY_m4827F8DC2E4D78B25F13F0A7EB826727A5FB9A27(L_12, NULL);
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_13 = V_2;
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_14;
				L_14 = Ed448_PointPrecompVar_mE83646331B9BE79F0F1C1D0F158A33128FA3D816(L_13, ((int32_t)32), NULL);
				((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBaseTable = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBaseTable), (void*)L_14);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2560));
				((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBase = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBase), (void*)L_15);
				V_3 = 0;
				V_4 = 0;
				goto IL_01d6_1;
			}

IL_0072_1:
			{
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_16 = (PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62*)(PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62*)SZArrayNew(PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62_il2cpp_TypeInfo_var, (uint32_t)5);
				V_5 = L_16;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_17 = (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)il2cpp_codegen_object_new(PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
				PointExt__ctor_mBFD4DAD3052D0CB4BEC9669B21AD21E5412A3CE9(L_17, NULL);
				V_6 = L_17;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_18 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
				Ed448_PointSetNeutral_mE8166763401C7CC80C8F0DD34A4486152DC9CA58(L_18, NULL);
				V_9 = 0;
				goto IL_00cc_1;
			}

IL_008d_1:
			{
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_19 = V_2;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_20 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
				Ed448_PointAddVar_mBF555D463F4A92959E0BC5BABA7D4EC5607DB0C3((bool)1, L_19, L_20, NULL);
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_21 = V_2;
				Ed448_PointDouble_m5B63D15D542AF63EAFDFC001F422C67052C81AF0(L_21, NULL);
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_22 = V_5;
				int32_t L_23 = V_9;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_24 = V_2;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_25;
				L_25 = Ed448_PointCopy_m924674D20E9046CF8076280DF6A95D63094042CB(L_24, NULL);
				NullCheck(L_22);
				ArrayElementTypeCheck (L_22, L_25);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)L_25);
				int32_t L_26 = V_4;
				int32_t L_27 = V_9;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27))) == ((int32_t)8)))
				{
					goto IL_00c6_1;
				}
			}
			{
				V_10 = 1;
				goto IL_00c0_1;
			}

IL_00b4_1:
			{
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_28 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
				Ed448_PointDouble_m5B63D15D542AF63EAFDFC001F422C67052C81AF0(L_28, NULL);
				int32_t L_29 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_29, 1));
			}

IL_00c0_1:
			{
				int32_t L_30 = V_10;
				if ((((int32_t)L_30) < ((int32_t)((int32_t)18))))
				{
					goto IL_00b4_1;
				}
			}

IL_00c6_1:
			{
				int32_t L_31 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_31, 1));
			}

IL_00cc_1:
			{
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)5)))
				{
					goto IL_008d_1;
				}
			}
			{
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_33 = (PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62*)(PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62*)SZArrayNew(PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
				V_7 = L_33;
				V_8 = 0;
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_34 = V_7;
				int32_t L_35 = V_8;
				int32_t L_36 = L_35;
				V_8 = ((int32_t)il2cpp_codegen_add(L_36, 1));
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_37 = V_6;
				NullCheck(L_34);
				ArrayElementTypeCheck (L_34, L_37);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)L_37);
				V_11 = 0;
				goto IL_0136_1;
			}

IL_00ee_1:
			{
				int32_t L_38 = V_11;
				V_12 = ((int32_t)(1<<((int32_t)(L_38&((int32_t)31)))));
				V_13 = 0;
				goto IL_012a_1;
			}

IL_00fc_1:
			{
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_39 = V_7;
				int32_t L_40 = V_8;
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_41 = V_7;
				int32_t L_42 = V_8;
				int32_t L_43 = V_12;
				NullCheck(L_41);
				int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(L_42, L_43));
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
				il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_46;
				L_46 = Ed448_PointCopy_m924674D20E9046CF8076280DF6A95D63094042CB(L_45, NULL);
				NullCheck(L_39);
				ArrayElementTypeCheck (L_39, L_46);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)L_46);
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_47 = V_5;
				int32_t L_48 = V_11;
				NullCheck(L_47);
				int32_t L_49 = L_48;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_51 = V_7;
				int32_t L_52 = V_8;
				NullCheck(L_51);
				int32_t L_53 = L_52;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
				Ed448_PointAddVar_mBF555D463F4A92959E0BC5BABA7D4EC5607DB0C3((bool)0, L_50, L_54, NULL);
				int32_t L_55 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_55, 1));
				int32_t L_56 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_56, 1));
			}

IL_012a_1:
			{
				int32_t L_57 = V_13;
				int32_t L_58 = V_12;
				if ((((int32_t)L_57) < ((int32_t)L_58)))
				{
					goto IL_00fc_1;
				}
			}
			{
				int32_t L_59 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_59, 1));
			}

IL_0136_1:
			{
				int32_t L_60 = V_11;
				if ((((int32_t)L_60) < ((int32_t)4)))
				{
					goto IL_00ee_1;
				}
			}
			{
				V_14 = 0;
				goto IL_01c7_1;
			}

IL_0143_1:
			{
				PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_61 = V_7;
				int32_t L_62 = V_14;
				NullCheck(L_61);
				int32_t L_63 = L_62;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
				V_15 = L_64;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_65 = V_15;
				NullCheck(L_65);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___z;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_67 = V_15;
				NullCheck(L_67);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = L_67->___z;
				X448Field_Inv_m99F066E3A511DC6C85677AFE65FD223B6B622D51(L_66, L_68, NULL);
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_69 = V_15;
				NullCheck(L_69);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = L_69->___x;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_71 = V_15;
				NullCheck(L_71);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = L_71->___z;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_73 = V_15;
				NullCheck(L_73);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = L_73->___x;
				X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_70, L_72, L_74, NULL);
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_75 = V_15;
				NullCheck(L_75);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = L_75->___y;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_77 = V_15;
				NullCheck(L_77);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = L_77->___z;
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_79 = V_15;
				NullCheck(L_79);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = L_79->___y;
				X448Field_Mul_mAC223202478FE5CB111A2DEE4022F48B83882891(L_76, L_78, L_80, NULL);
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_81 = V_15;
				NullCheck(L_81);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = L_81->___x;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_84 = V_3;
				X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788(L_82, 0, L_83, L_84, NULL);
				int32_t L_85 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_85, ((int32_t)16)));
				PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_86 = V_15;
				NullCheck(L_86);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = L_86->___y;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_89 = V_3;
				X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788(L_87, 0, L_88, L_89, NULL);
				int32_t L_90 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_90, ((int32_t)16)));
				int32_t L_91 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_91, 1));
			}

IL_01c7_1:
			{
				int32_t L_92 = V_14;
				if ((((int32_t)L_92) < ((int32_t)((int32_t)16))))
				{
					goto IL_0143_1;
				}
			}
			{
				int32_t L_93 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_93, 1));
			}

IL_01d6_1:
			{
				int32_t L_94 = V_4;
				if ((((int32_t)L_94) < ((int32_t)5)))
				{
					goto IL_0072_1;
				}
			}
			{
				goto IL_01ea;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01ea:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PruneScalar_m4F219411E5E0C9E0C0AD6225369C3455BFEE99C3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, int32_t ___1_nOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_n;
		int32_t L_1 = ___1_nOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_r;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, ((int32_t)56), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_r;
		NullCheck(L_3);
		uint8_t* L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_5 = *((uint8_t*)L_4);
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)252))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_r;
		NullCheck(L_6);
		uint8_t* L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)55))));
		int32_t L_8 = *((uint8_t*)L_7);
		*((int8_t*)L_7) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_8|((int32_t)128))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_r;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (uint8_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_ReduceScalar_m249E66B3F7C7C5E8A623704074D1458C481C74E8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	uint64_t V_22 = 0;
	uint64_t V_23 = 0;
	uint64_t V_24 = 0;
	uint64_t V_25 = 0;
	uint64_t V_26 = 0;
	uint64_t V_27 = 0;
	uint64_t V_28 = 0;
	uint64_t V_29 = 0;
	uint64_t V_30 = 0;
	uint64_t V_31 = 0;
	uint64_t V_32 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_33 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_0, 0, NULL);
		V_0 = ((int64_t)(uint64_t)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_n;
		uint32_t L_3;
		L_3 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_2, 4, NULL);
		V_1 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_3<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_n;
		uint32_t L_5;
		L_5 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_4, 7, NULL);
		V_2 = ((int64_t)(uint64_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_n;
		uint32_t L_7;
		L_7 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_6, ((int32_t)11), NULL);
		V_3 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_7<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_n;
		uint32_t L_9;
		L_9 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_8, ((int32_t)14), NULL);
		V_4 = ((int64_t)(uint64_t)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_n;
		uint32_t L_11;
		L_11 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_10, ((int32_t)18), NULL);
		V_5 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_11<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_n;
		uint32_t L_13;
		L_13 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_12, ((int32_t)21), NULL);
		V_6 = ((int64_t)(uint64_t)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_n;
		uint32_t L_15;
		L_15 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_14, ((int32_t)25), NULL);
		V_7 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_15<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_n;
		uint32_t L_17;
		L_17 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_16, ((int32_t)28), NULL);
		V_8 = ((int64_t)(uint64_t)L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_n;
		uint32_t L_19;
		L_19 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_18, ((int32_t)32), NULL);
		V_9 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_19<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_n;
		uint32_t L_21;
		L_21 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_20, ((int32_t)35), NULL);
		V_10 = ((int64_t)(uint64_t)L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_n;
		uint32_t L_23;
		L_23 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_22, ((int32_t)39), NULL);
		V_11 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_23<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_n;
		uint32_t L_25;
		L_25 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_24, ((int32_t)42), NULL);
		V_12 = ((int64_t)(uint64_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_n;
		uint32_t L_27;
		L_27 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_26, ((int32_t)46), NULL);
		V_13 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_27<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___0_n;
		uint32_t L_29;
		L_29 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_28, ((int32_t)49), NULL);
		V_14 = ((int64_t)(uint64_t)L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_n;
		uint32_t L_31;
		L_31 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_30, ((int32_t)53), NULL);
		V_15 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_31<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_n;
		uint32_t L_33;
		L_33 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_32, ((int32_t)56), NULL);
		V_16 = ((int64_t)(uint64_t)L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_n;
		uint32_t L_35;
		L_35 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_34, ((int32_t)60), NULL);
		V_17 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_35<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___0_n;
		uint32_t L_37;
		L_37 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_36, ((int32_t)63), NULL);
		V_18 = ((int64_t)(uint64_t)L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___0_n;
		uint32_t L_39;
		L_39 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_38, ((int32_t)67), NULL);
		V_19 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_39<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_n;
		uint32_t L_41;
		L_41 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_40, ((int32_t)70), NULL);
		V_20 = ((int64_t)(uint64_t)L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___0_n;
		uint32_t L_43;
		L_43 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_42, ((int32_t)74), NULL);
		V_21 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_43<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___0_n;
		uint32_t L_45;
		L_45 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_44, ((int32_t)77), NULL);
		V_22 = ((int64_t)(uint64_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___0_n;
		uint32_t L_47;
		L_47 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_46, ((int32_t)81), NULL);
		V_23 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_47<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___0_n;
		uint32_t L_49;
		L_49 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_48, ((int32_t)84), NULL);
		V_24 = ((int64_t)(uint64_t)L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___0_n;
		uint32_t L_51;
		L_51 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_50, ((int32_t)88), NULL);
		V_25 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_51<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_n;
		uint32_t L_53;
		L_53 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_52, ((int32_t)91), NULL);
		V_26 = ((int64_t)(uint64_t)L_53);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ___0_n;
		uint32_t L_55;
		L_55 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_54, ((int32_t)95), NULL);
		V_27 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_55<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_n;
		uint32_t L_57;
		L_57 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_56, ((int32_t)98), NULL);
		V_28 = ((int64_t)(uint64_t)L_57);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ___0_n;
		uint32_t L_59;
		L_59 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_58, ((int32_t)102), NULL);
		V_29 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_59<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___0_n;
		uint32_t L_61;
		L_61 = Ed448_Decode32_mBC3FD75B14510FB756B537878551A105EB1840E1(L_60, ((int32_t)105), NULL);
		V_30 = ((int64_t)(uint64_t)L_61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___0_n;
		uint32_t L_63;
		L_63 = Ed448_Decode24_mB38CCF4427937A9D1FB9F752F990283619D04B7A(L_62, ((int32_t)109), NULL);
		V_31 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_63<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ___0_n;
		uint32_t L_65;
		L_65 = Ed448_Decode16_mBF934F453355B566ABE2D0B7DE8EC2BF088606F3(L_64, ((int32_t)112), NULL);
		V_32 = ((int64_t)(uint64_t)L_65);
		uint64_t L_66 = V_16;
		uint64_t L_67 = V_32;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_multiply((int64_t)L_67, ((int64_t)((int32_t)43969588))))));
		uint64_t L_68 = V_17;
		uint64_t L_69 = V_32;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_multiply((int64_t)L_69, ((int64_t)((int32_t)30366549))))));
		uint64_t L_70 = V_18;
		uint64_t L_71 = V_32;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_70, ((int64_t)il2cpp_codegen_multiply((int64_t)L_71, ((int64_t)((int32_t)163752818))))));
		uint64_t L_72 = V_19;
		uint64_t L_73 = V_32;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_multiply((int64_t)L_73, ((int64_t)((int32_t)258169998))))));
		uint64_t L_74 = V_20;
		uint64_t L_75 = V_32;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_74, ((int64_t)il2cpp_codegen_multiply((int64_t)L_75, ((int64_t)((int32_t)96434764))))));
		uint64_t L_76 = V_21;
		uint64_t L_77 = V_32;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)il2cpp_codegen_multiply((int64_t)L_77, ((int64_t)((int32_t)227822194))))));
		uint64_t L_78 = V_22;
		uint64_t L_79 = V_32;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_multiply((int64_t)L_79, ((int64_t)((int32_t)149865618))))));
		uint64_t L_80 = V_23;
		uint64_t L_81 = V_32;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_multiply((int64_t)L_81, ((int64_t)((int32_t)550336261))))));
		uint64_t L_82 = V_31;
		uint64_t L_83 = V_30;
		V_31 = ((int64_t)il2cpp_codegen_add((int64_t)L_82, ((int64_t)((uint64_t)L_83>>((int32_t)28)))));
		uint64_t L_84 = V_30;
		V_30 = ((int64_t)((int64_t)L_84&((int64_t)((int32_t)268435455))));
		uint64_t L_85 = V_15;
		uint64_t L_86 = V_31;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_multiply((int64_t)L_86, ((int64_t)((int32_t)43969588))))));
		uint64_t L_87 = V_16;
		uint64_t L_88 = V_31;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, ((int64_t)il2cpp_codegen_multiply((int64_t)L_88, ((int64_t)((int32_t)30366549))))));
		uint64_t L_89 = V_17;
		uint64_t L_90 = V_31;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_89, ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, ((int64_t)((int32_t)163752818))))));
		uint64_t L_91 = V_18;
		uint64_t L_92 = V_31;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_multiply((int64_t)L_92, ((int64_t)((int32_t)258169998))))));
		uint64_t L_93 = V_19;
		uint64_t L_94 = V_31;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, ((int64_t)il2cpp_codegen_multiply((int64_t)L_94, ((int64_t)((int32_t)96434764))))));
		uint64_t L_95 = V_20;
		uint64_t L_96 = V_31;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, ((int64_t)il2cpp_codegen_multiply((int64_t)L_96, ((int64_t)((int32_t)227822194))))));
		uint64_t L_97 = V_21;
		uint64_t L_98 = V_31;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_97, ((int64_t)il2cpp_codegen_multiply((int64_t)L_98, ((int64_t)((int32_t)149865618))))));
		uint64_t L_99 = V_22;
		uint64_t L_100 = V_31;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, ((int64_t)il2cpp_codegen_multiply((int64_t)L_100, ((int64_t)((int32_t)550336261))))));
		uint64_t L_101 = V_14;
		uint64_t L_102 = V_30;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_101, ((int64_t)il2cpp_codegen_multiply((int64_t)L_102, ((int64_t)((int32_t)43969588))))));
		uint64_t L_103 = V_15;
		uint64_t L_104 = V_30;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, ((int64_t)il2cpp_codegen_multiply((int64_t)L_104, ((int64_t)((int32_t)30366549))))));
		uint64_t L_105 = V_16;
		uint64_t L_106 = V_30;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, ((int64_t)((int32_t)163752818))))));
		uint64_t L_107 = V_17;
		uint64_t L_108 = V_30;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_107, ((int64_t)il2cpp_codegen_multiply((int64_t)L_108, ((int64_t)((int32_t)258169998))))));
		uint64_t L_109 = V_18;
		uint64_t L_110 = V_30;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, ((int64_t)il2cpp_codegen_multiply((int64_t)L_110, ((int64_t)((int32_t)96434764))))));
		uint64_t L_111 = V_19;
		uint64_t L_112 = V_30;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_111, ((int64_t)il2cpp_codegen_multiply((int64_t)L_112, ((int64_t)((int32_t)227822194))))));
		uint64_t L_113 = V_20;
		uint64_t L_114 = V_30;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_multiply((int64_t)L_114, ((int64_t)((int32_t)149865618))))));
		uint64_t L_115 = V_21;
		uint64_t L_116 = V_30;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)il2cpp_codegen_multiply((int64_t)L_116, ((int64_t)((int32_t)550336261))))));
		uint64_t L_117 = V_29;
		uint64_t L_118 = V_28;
		V_29 = ((int64_t)il2cpp_codegen_add((int64_t)L_117, ((int64_t)((uint64_t)L_118>>((int32_t)28)))));
		uint64_t L_119 = V_28;
		V_28 = ((int64_t)((int64_t)L_119&((int64_t)((int32_t)268435455))));
		uint64_t L_120 = V_13;
		uint64_t L_121 = V_29;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_120, ((int64_t)il2cpp_codegen_multiply((int64_t)L_121, ((int64_t)((int32_t)43969588))))));
		uint64_t L_122 = V_14;
		uint64_t L_123 = V_29;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, ((int64_t)il2cpp_codegen_multiply((int64_t)L_123, ((int64_t)((int32_t)30366549))))));
		uint64_t L_124 = V_15;
		uint64_t L_125 = V_29;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, ((int64_t)il2cpp_codegen_multiply((int64_t)L_125, ((int64_t)((int32_t)163752818))))));
		uint64_t L_126 = V_16;
		uint64_t L_127 = V_29;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_126, ((int64_t)il2cpp_codegen_multiply((int64_t)L_127, ((int64_t)((int32_t)258169998))))));
		uint64_t L_128 = V_17;
		uint64_t L_129 = V_29;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_128, ((int64_t)il2cpp_codegen_multiply((int64_t)L_129, ((int64_t)((int32_t)96434764))))));
		uint64_t L_130 = V_18;
		uint64_t L_131 = V_29;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, ((int64_t)il2cpp_codegen_multiply((int64_t)L_131, ((int64_t)((int32_t)227822194))))));
		uint64_t L_132 = V_19;
		uint64_t L_133 = V_29;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_132, ((int64_t)il2cpp_codegen_multiply((int64_t)L_133, ((int64_t)((int32_t)149865618))))));
		uint64_t L_134 = V_20;
		uint64_t L_135 = V_29;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, ((int64_t)il2cpp_codegen_multiply((int64_t)L_135, ((int64_t)((int32_t)550336261))))));
		uint64_t L_136 = V_12;
		uint64_t L_137 = V_28;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_136, ((int64_t)il2cpp_codegen_multiply((int64_t)L_137, ((int64_t)((int32_t)43969588))))));
		uint64_t L_138 = V_13;
		uint64_t L_139 = V_28;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_138, ((int64_t)il2cpp_codegen_multiply((int64_t)L_139, ((int64_t)((int32_t)30366549))))));
		uint64_t L_140 = V_14;
		uint64_t L_141 = V_28;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, ((int64_t)il2cpp_codegen_multiply((int64_t)L_141, ((int64_t)((int32_t)163752818))))));
		uint64_t L_142 = V_15;
		uint64_t L_143 = V_28;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_142, ((int64_t)il2cpp_codegen_multiply((int64_t)L_143, ((int64_t)((int32_t)258169998))))));
		uint64_t L_144 = V_16;
		uint64_t L_145 = V_28;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_144, ((int64_t)il2cpp_codegen_multiply((int64_t)L_145, ((int64_t)((int32_t)96434764))))));
		uint64_t L_146 = V_17;
		uint64_t L_147 = V_28;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_146, ((int64_t)il2cpp_codegen_multiply((int64_t)L_147, ((int64_t)((int32_t)227822194))))));
		uint64_t L_148 = V_18;
		uint64_t L_149 = V_28;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_148, ((int64_t)il2cpp_codegen_multiply((int64_t)L_149, ((int64_t)((int32_t)149865618))))));
		uint64_t L_150 = V_19;
		uint64_t L_151 = V_28;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, ((int64_t)il2cpp_codegen_multiply((int64_t)L_151, ((int64_t)((int32_t)550336261))))));
		uint64_t L_152 = V_27;
		uint64_t L_153 = V_26;
		V_27 = ((int64_t)il2cpp_codegen_add((int64_t)L_152, ((int64_t)((uint64_t)L_153>>((int32_t)28)))));
		uint64_t L_154 = V_26;
		V_26 = ((int64_t)((int64_t)L_154&((int64_t)((int32_t)268435455))));
		uint64_t L_155 = V_11;
		uint64_t L_156 = V_27;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, ((int64_t)il2cpp_codegen_multiply((int64_t)L_156, ((int64_t)((int32_t)43969588))))));
		uint64_t L_157 = V_12;
		uint64_t L_158 = V_27;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_157, ((int64_t)il2cpp_codegen_multiply((int64_t)L_158, ((int64_t)((int32_t)30366549))))));
		uint64_t L_159 = V_13;
		uint64_t L_160 = V_27;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, ((int64_t)il2cpp_codegen_multiply((int64_t)L_160, ((int64_t)((int32_t)163752818))))));
		uint64_t L_161 = V_14;
		uint64_t L_162 = V_27;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_161, ((int64_t)il2cpp_codegen_multiply((int64_t)L_162, ((int64_t)((int32_t)258169998))))));
		uint64_t L_163 = V_15;
		uint64_t L_164 = V_27;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, ((int64_t)il2cpp_codegen_multiply((int64_t)L_164, ((int64_t)((int32_t)96434764))))));
		uint64_t L_165 = V_16;
		uint64_t L_166 = V_27;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, ((int64_t)il2cpp_codegen_multiply((int64_t)L_166, ((int64_t)((int32_t)227822194))))));
		uint64_t L_167 = V_17;
		uint64_t L_168 = V_27;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_167, ((int64_t)il2cpp_codegen_multiply((int64_t)L_168, ((int64_t)((int32_t)149865618))))));
		uint64_t L_169 = V_18;
		uint64_t L_170 = V_27;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_169, ((int64_t)il2cpp_codegen_multiply((int64_t)L_170, ((int64_t)((int32_t)550336261))))));
		uint64_t L_171 = V_10;
		uint64_t L_172 = V_26;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_171, ((int64_t)il2cpp_codegen_multiply((int64_t)L_172, ((int64_t)((int32_t)43969588))))));
		uint64_t L_173 = V_11;
		uint64_t L_174 = V_26;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, ((int64_t)il2cpp_codegen_multiply((int64_t)L_174, ((int64_t)((int32_t)30366549))))));
		uint64_t L_175 = V_12;
		uint64_t L_176 = V_26;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, ((int64_t)il2cpp_codegen_multiply((int64_t)L_176, ((int64_t)((int32_t)163752818))))));
		uint64_t L_177 = V_13;
		uint64_t L_178 = V_26;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_177, ((int64_t)il2cpp_codegen_multiply((int64_t)L_178, ((int64_t)((int32_t)258169998))))));
		uint64_t L_179 = V_14;
		uint64_t L_180 = V_26;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_179, ((int64_t)il2cpp_codegen_multiply((int64_t)L_180, ((int64_t)((int32_t)96434764))))));
		uint64_t L_181 = V_15;
		uint64_t L_182 = V_26;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_181, ((int64_t)il2cpp_codegen_multiply((int64_t)L_182, ((int64_t)((int32_t)227822194))))));
		uint64_t L_183 = V_16;
		uint64_t L_184 = V_26;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_multiply((int64_t)L_184, ((int64_t)((int32_t)149865618))))));
		uint64_t L_185 = V_17;
		uint64_t L_186 = V_26;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, ((int64_t)il2cpp_codegen_multiply((int64_t)L_186, ((int64_t)((int32_t)550336261))))));
		uint64_t L_187 = V_25;
		uint64_t L_188 = V_24;
		V_25 = ((int64_t)il2cpp_codegen_add((int64_t)L_187, ((int64_t)((uint64_t)L_188>>((int32_t)28)))));
		uint64_t L_189 = V_24;
		V_24 = ((int64_t)((int64_t)L_189&((int64_t)((int32_t)268435455))));
		uint64_t L_190 = V_9;
		uint64_t L_191 = V_25;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, ((int64_t)il2cpp_codegen_multiply((int64_t)L_191, ((int64_t)((int32_t)43969588))))));
		uint64_t L_192 = V_10;
		uint64_t L_193 = V_25;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_192, ((int64_t)il2cpp_codegen_multiply((int64_t)L_193, ((int64_t)((int32_t)30366549))))));
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_25;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_194, ((int64_t)il2cpp_codegen_multiply((int64_t)L_195, ((int64_t)((int32_t)163752818))))));
		uint64_t L_196 = V_12;
		uint64_t L_197 = V_25;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_196, ((int64_t)il2cpp_codegen_multiply((int64_t)L_197, ((int64_t)((int32_t)258169998))))));
		uint64_t L_198 = V_13;
		uint64_t L_199 = V_25;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_198, ((int64_t)il2cpp_codegen_multiply((int64_t)L_199, ((int64_t)((int32_t)96434764))))));
		uint64_t L_200 = V_14;
		uint64_t L_201 = V_25;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_200, ((int64_t)il2cpp_codegen_multiply((int64_t)L_201, ((int64_t)((int32_t)227822194))))));
		uint64_t L_202 = V_15;
		uint64_t L_203 = V_25;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_202, ((int64_t)il2cpp_codegen_multiply((int64_t)L_203, ((int64_t)((int32_t)149865618))))));
		uint64_t L_204 = V_16;
		uint64_t L_205 = V_25;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_204, ((int64_t)il2cpp_codegen_multiply((int64_t)L_205, ((int64_t)((int32_t)550336261))))));
		uint64_t L_206 = V_21;
		uint64_t L_207 = V_20;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_206, ((int64_t)((uint64_t)L_207>>((int32_t)28)))));
		uint64_t L_208 = V_20;
		V_20 = ((int64_t)((int64_t)L_208&((int64_t)((int32_t)268435455))));
		uint64_t L_209 = V_22;
		uint64_t L_210 = V_21;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_209, ((int64_t)((uint64_t)L_210>>((int32_t)28)))));
		uint64_t L_211 = V_21;
		V_21 = ((int64_t)((int64_t)L_211&((int64_t)((int32_t)268435455))));
		uint64_t L_212 = V_23;
		uint64_t L_213 = V_22;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_212, ((int64_t)((uint64_t)L_213>>((int32_t)28)))));
		uint64_t L_214 = V_22;
		V_22 = ((int64_t)((int64_t)L_214&((int64_t)((int32_t)268435455))));
		uint64_t L_215 = V_24;
		uint64_t L_216 = V_23;
		V_24 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, ((int64_t)((uint64_t)L_216>>((int32_t)28)))));
		uint64_t L_217 = V_23;
		V_23 = ((int64_t)((int64_t)L_217&((int64_t)((int32_t)268435455))));
		uint64_t L_218 = V_8;
		uint64_t L_219 = V_24;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, ((int64_t)il2cpp_codegen_multiply((int64_t)L_219, ((int64_t)((int32_t)43969588))))));
		uint64_t L_220 = V_9;
		uint64_t L_221 = V_24;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_220, ((int64_t)il2cpp_codegen_multiply((int64_t)L_221, ((int64_t)((int32_t)30366549))))));
		uint64_t L_222 = V_10;
		uint64_t L_223 = V_24;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_222, ((int64_t)il2cpp_codegen_multiply((int64_t)L_223, ((int64_t)((int32_t)163752818))))));
		uint64_t L_224 = V_11;
		uint64_t L_225 = V_24;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_224, ((int64_t)il2cpp_codegen_multiply((int64_t)L_225, ((int64_t)((int32_t)258169998))))));
		uint64_t L_226 = V_12;
		uint64_t L_227 = V_24;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_226, ((int64_t)il2cpp_codegen_multiply((int64_t)L_227, ((int64_t)((int32_t)96434764))))));
		uint64_t L_228 = V_13;
		uint64_t L_229 = V_24;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_228, ((int64_t)il2cpp_codegen_multiply((int64_t)L_229, ((int64_t)((int32_t)227822194))))));
		uint64_t L_230 = V_14;
		uint64_t L_231 = V_24;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, ((int64_t)il2cpp_codegen_multiply((int64_t)L_231, ((int64_t)((int32_t)149865618))))));
		uint64_t L_232 = V_15;
		uint64_t L_233 = V_24;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_232, ((int64_t)il2cpp_codegen_multiply((int64_t)L_233, ((int64_t)((int32_t)550336261))))));
		uint64_t L_234 = V_7;
		uint64_t L_235 = V_23;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_234, ((int64_t)il2cpp_codegen_multiply((int64_t)L_235, ((int64_t)((int32_t)43969588))))));
		uint64_t L_236 = V_8;
		uint64_t L_237 = V_23;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_236, ((int64_t)il2cpp_codegen_multiply((int64_t)L_237, ((int64_t)((int32_t)30366549))))));
		uint64_t L_238 = V_9;
		uint64_t L_239 = V_23;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, ((int64_t)il2cpp_codegen_multiply((int64_t)L_239, ((int64_t)((int32_t)163752818))))));
		uint64_t L_240 = V_10;
		uint64_t L_241 = V_23;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, ((int64_t)il2cpp_codegen_multiply((int64_t)L_241, ((int64_t)((int32_t)258169998))))));
		uint64_t L_242 = V_11;
		uint64_t L_243 = V_23;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_242, ((int64_t)il2cpp_codegen_multiply((int64_t)L_243, ((int64_t)((int32_t)96434764))))));
		uint64_t L_244 = V_12;
		uint64_t L_245 = V_23;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_244, ((int64_t)il2cpp_codegen_multiply((int64_t)L_245, ((int64_t)((int32_t)227822194))))));
		uint64_t L_246 = V_13;
		uint64_t L_247 = V_23;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_246, ((int64_t)il2cpp_codegen_multiply((int64_t)L_247, ((int64_t)((int32_t)149865618))))));
		uint64_t L_248 = V_14;
		uint64_t L_249 = V_23;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_248, ((int64_t)il2cpp_codegen_multiply((int64_t)L_249, ((int64_t)((int32_t)550336261))))));
		uint64_t L_250 = V_6;
		uint64_t L_251 = V_22;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, ((int64_t)il2cpp_codegen_multiply((int64_t)L_251, ((int64_t)((int32_t)43969588))))));
		uint64_t L_252 = V_7;
		uint64_t L_253 = V_22;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_252, ((int64_t)il2cpp_codegen_multiply((int64_t)L_253, ((int64_t)((int32_t)30366549))))));
		uint64_t L_254 = V_8;
		uint64_t L_255 = V_22;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_254, ((int64_t)il2cpp_codegen_multiply((int64_t)L_255, ((int64_t)((int32_t)163752818))))));
		uint64_t L_256 = V_9;
		uint64_t L_257 = V_22;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_256, ((int64_t)il2cpp_codegen_multiply((int64_t)L_257, ((int64_t)((int32_t)258169998))))));
		uint64_t L_258 = V_10;
		uint64_t L_259 = V_22;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_258, ((int64_t)il2cpp_codegen_multiply((int64_t)L_259, ((int64_t)((int32_t)96434764))))));
		uint64_t L_260 = V_11;
		uint64_t L_261 = V_22;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_260, ((int64_t)il2cpp_codegen_multiply((int64_t)L_261, ((int64_t)((int32_t)227822194))))));
		uint64_t L_262 = V_12;
		uint64_t L_263 = V_22;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_262, ((int64_t)il2cpp_codegen_multiply((int64_t)L_263, ((int64_t)((int32_t)149865618))))));
		uint64_t L_264 = V_13;
		uint64_t L_265 = V_22;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_264, ((int64_t)il2cpp_codegen_multiply((int64_t)L_265, ((int64_t)((int32_t)550336261))))));
		uint64_t L_266 = V_18;
		uint64_t L_267 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_266, ((int64_t)((uint64_t)L_267>>((int32_t)28)))));
		uint64_t L_268 = V_17;
		V_17 = ((int64_t)((int64_t)L_268&((int64_t)((int32_t)268435455))));
		uint64_t L_269 = V_19;
		uint64_t L_270 = V_18;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_269, ((int64_t)((uint64_t)L_270>>((int32_t)28)))));
		uint64_t L_271 = V_18;
		V_18 = ((int64_t)((int64_t)L_271&((int64_t)((int32_t)268435455))));
		uint64_t L_272 = V_20;
		uint64_t L_273 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_272, ((int64_t)((uint64_t)L_273>>((int32_t)28)))));
		uint64_t L_274 = V_19;
		V_19 = ((int64_t)((int64_t)L_274&((int64_t)((int32_t)268435455))));
		uint64_t L_275 = V_21;
		uint64_t L_276 = V_20;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_275, ((int64_t)((uint64_t)L_276>>((int32_t)28)))));
		uint64_t L_277 = V_20;
		V_20 = ((int64_t)((int64_t)L_277&((int64_t)((int32_t)268435455))));
		uint64_t L_278 = V_5;
		uint64_t L_279 = V_21;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_278, ((int64_t)il2cpp_codegen_multiply((int64_t)L_279, ((int64_t)((int32_t)43969588))))));
		uint64_t L_280 = V_6;
		uint64_t L_281 = V_21;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_280, ((int64_t)il2cpp_codegen_multiply((int64_t)L_281, ((int64_t)((int32_t)30366549))))));
		uint64_t L_282 = V_7;
		uint64_t L_283 = V_21;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_282, ((int64_t)il2cpp_codegen_multiply((int64_t)L_283, ((int64_t)((int32_t)163752818))))));
		uint64_t L_284 = V_8;
		uint64_t L_285 = V_21;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_284, ((int64_t)il2cpp_codegen_multiply((int64_t)L_285, ((int64_t)((int32_t)258169998))))));
		uint64_t L_286 = V_9;
		uint64_t L_287 = V_21;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_286, ((int64_t)il2cpp_codegen_multiply((int64_t)L_287, ((int64_t)((int32_t)96434764))))));
		uint64_t L_288 = V_10;
		uint64_t L_289 = V_21;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_288, ((int64_t)il2cpp_codegen_multiply((int64_t)L_289, ((int64_t)((int32_t)227822194))))));
		uint64_t L_290 = V_11;
		uint64_t L_291 = V_21;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_290, ((int64_t)il2cpp_codegen_multiply((int64_t)L_291, ((int64_t)((int32_t)149865618))))));
		uint64_t L_292 = V_12;
		uint64_t L_293 = V_21;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_292, ((int64_t)il2cpp_codegen_multiply((int64_t)L_293, ((int64_t)((int32_t)550336261))))));
		uint64_t L_294 = V_4;
		uint64_t L_295 = V_20;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_294, ((int64_t)il2cpp_codegen_multiply((int64_t)L_295, ((int64_t)((int32_t)43969588))))));
		uint64_t L_296 = V_5;
		uint64_t L_297 = V_20;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_296, ((int64_t)il2cpp_codegen_multiply((int64_t)L_297, ((int64_t)((int32_t)30366549))))));
		uint64_t L_298 = V_6;
		uint64_t L_299 = V_20;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_298, ((int64_t)il2cpp_codegen_multiply((int64_t)L_299, ((int64_t)((int32_t)163752818))))));
		uint64_t L_300 = V_7;
		uint64_t L_301 = V_20;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_300, ((int64_t)il2cpp_codegen_multiply((int64_t)L_301, ((int64_t)((int32_t)258169998))))));
		uint64_t L_302 = V_8;
		uint64_t L_303 = V_20;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_302, ((int64_t)il2cpp_codegen_multiply((int64_t)L_303, ((int64_t)((int32_t)96434764))))));
		uint64_t L_304 = V_9;
		uint64_t L_305 = V_20;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_304, ((int64_t)il2cpp_codegen_multiply((int64_t)L_305, ((int64_t)((int32_t)227822194))))));
		uint64_t L_306 = V_10;
		uint64_t L_307 = V_20;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_306, ((int64_t)il2cpp_codegen_multiply((int64_t)L_307, ((int64_t)((int32_t)149865618))))));
		uint64_t L_308 = V_11;
		uint64_t L_309 = V_20;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_308, ((int64_t)il2cpp_codegen_multiply((int64_t)L_309, ((int64_t)((int32_t)550336261))))));
		uint64_t L_310 = V_3;
		uint64_t L_311 = V_19;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_310, ((int64_t)il2cpp_codegen_multiply((int64_t)L_311, ((int64_t)((int32_t)43969588))))));
		uint64_t L_312 = V_4;
		uint64_t L_313 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_312, ((int64_t)il2cpp_codegen_multiply((int64_t)L_313, ((int64_t)((int32_t)30366549))))));
		uint64_t L_314 = V_5;
		uint64_t L_315 = V_19;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_314, ((int64_t)il2cpp_codegen_multiply((int64_t)L_315, ((int64_t)((int32_t)163752818))))));
		uint64_t L_316 = V_6;
		uint64_t L_317 = V_19;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_316, ((int64_t)il2cpp_codegen_multiply((int64_t)L_317, ((int64_t)((int32_t)258169998))))));
		uint64_t L_318 = V_7;
		uint64_t L_319 = V_19;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_318, ((int64_t)il2cpp_codegen_multiply((int64_t)L_319, ((int64_t)((int32_t)96434764))))));
		uint64_t L_320 = V_8;
		uint64_t L_321 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_320, ((int64_t)il2cpp_codegen_multiply((int64_t)L_321, ((int64_t)((int32_t)227822194))))));
		uint64_t L_322 = V_9;
		uint64_t L_323 = V_19;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_322, ((int64_t)il2cpp_codegen_multiply((int64_t)L_323, ((int64_t)((int32_t)149865618))))));
		uint64_t L_324 = V_10;
		uint64_t L_325 = V_19;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_324, ((int64_t)il2cpp_codegen_multiply((int64_t)L_325, ((int64_t)((int32_t)550336261))))));
		uint64_t L_326 = V_15;
		uint64_t L_327 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_326, ((int64_t)((uint64_t)L_327>>((int32_t)28)))));
		uint64_t L_328 = V_14;
		V_14 = ((int64_t)((int64_t)L_328&((int64_t)((int32_t)268435455))));
		uint64_t L_329 = V_16;
		uint64_t L_330 = V_15;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_329, ((int64_t)((uint64_t)L_330>>((int32_t)28)))));
		uint64_t L_331 = V_15;
		V_15 = ((int64_t)((int64_t)L_331&((int64_t)((int32_t)268435455))));
		uint64_t L_332 = V_17;
		uint64_t L_333 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_332, ((int64_t)((uint64_t)L_333>>((int32_t)28)))));
		uint64_t L_334 = V_16;
		V_16 = ((int64_t)((int64_t)L_334&((int64_t)((int32_t)268435455))));
		uint64_t L_335 = V_18;
		uint64_t L_336 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_335, ((int64_t)((uint64_t)L_336>>((int32_t)28)))));
		uint64_t L_337 = V_17;
		V_17 = ((int64_t)((int64_t)L_337&((int64_t)((int32_t)268435455))));
		uint64_t L_338 = V_2;
		uint64_t L_339 = V_18;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_338, ((int64_t)il2cpp_codegen_multiply((int64_t)L_339, ((int64_t)((int32_t)43969588))))));
		uint64_t L_340 = V_3;
		uint64_t L_341 = V_18;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_340, ((int64_t)il2cpp_codegen_multiply((int64_t)L_341, ((int64_t)((int32_t)30366549))))));
		uint64_t L_342 = V_4;
		uint64_t L_343 = V_18;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_342, ((int64_t)il2cpp_codegen_multiply((int64_t)L_343, ((int64_t)((int32_t)163752818))))));
		uint64_t L_344 = V_5;
		uint64_t L_345 = V_18;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_344, ((int64_t)il2cpp_codegen_multiply((int64_t)L_345, ((int64_t)((int32_t)258169998))))));
		uint64_t L_346 = V_6;
		uint64_t L_347 = V_18;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_346, ((int64_t)il2cpp_codegen_multiply((int64_t)L_347, ((int64_t)((int32_t)96434764))))));
		uint64_t L_348 = V_7;
		uint64_t L_349 = V_18;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_348, ((int64_t)il2cpp_codegen_multiply((int64_t)L_349, ((int64_t)((int32_t)227822194))))));
		uint64_t L_350 = V_8;
		uint64_t L_351 = V_18;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_350, ((int64_t)il2cpp_codegen_multiply((int64_t)L_351, ((int64_t)((int32_t)149865618))))));
		uint64_t L_352 = V_9;
		uint64_t L_353 = V_18;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_352, ((int64_t)il2cpp_codegen_multiply((int64_t)L_353, ((int64_t)((int32_t)550336261))))));
		uint64_t L_354 = V_1;
		uint64_t L_355 = V_17;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_354, ((int64_t)il2cpp_codegen_multiply((int64_t)L_355, ((int64_t)((int32_t)43969588))))));
		uint64_t L_356 = V_2;
		uint64_t L_357 = V_17;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_356, ((int64_t)il2cpp_codegen_multiply((int64_t)L_357, ((int64_t)((int32_t)30366549))))));
		uint64_t L_358 = V_3;
		uint64_t L_359 = V_17;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_358, ((int64_t)il2cpp_codegen_multiply((int64_t)L_359, ((int64_t)((int32_t)163752818))))));
		uint64_t L_360 = V_4;
		uint64_t L_361 = V_17;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_360, ((int64_t)il2cpp_codegen_multiply((int64_t)L_361, ((int64_t)((int32_t)258169998))))));
		uint64_t L_362 = V_5;
		uint64_t L_363 = V_17;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_362, ((int64_t)il2cpp_codegen_multiply((int64_t)L_363, ((int64_t)((int32_t)96434764))))));
		uint64_t L_364 = V_6;
		uint64_t L_365 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_364, ((int64_t)il2cpp_codegen_multiply((int64_t)L_365, ((int64_t)((int32_t)227822194))))));
		uint64_t L_366 = V_7;
		uint64_t L_367 = V_17;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_366, ((int64_t)il2cpp_codegen_multiply((int64_t)L_367, ((int64_t)((int32_t)149865618))))));
		uint64_t L_368 = V_8;
		uint64_t L_369 = V_17;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_368, ((int64_t)il2cpp_codegen_multiply((int64_t)L_369, ((int64_t)((int32_t)550336261))))));
		uint64_t L_370 = V_16;
		V_16 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_370, ((int64_t)4)));
		uint64_t L_371 = V_16;
		uint64_t L_372 = V_15;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_371, ((int64_t)((uint64_t)L_372>>((int32_t)26)))));
		uint64_t L_373 = V_15;
		V_15 = ((int64_t)((int64_t)L_373&((int64_t)((int32_t)67108863))));
		uint64_t L_374 = V_16;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_374, ((int64_t)1)));
		uint64_t L_375 = V_0;
		uint64_t L_376 = V_16;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_375, ((int64_t)il2cpp_codegen_multiply((int64_t)L_376, ((int64_t)((int32_t)78101261))))));
		uint64_t L_377 = V_1;
		uint64_t L_378 = V_16;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_377, ((int64_t)il2cpp_codegen_multiply((int64_t)L_378, ((int64_t)((int32_t)141809365))))));
		uint64_t L_379 = V_2;
		uint64_t L_380 = V_16;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_379, ((int64_t)il2cpp_codegen_multiply((int64_t)L_380, ((int64_t)((int32_t)175155932))))));
		uint64_t L_381 = V_3;
		uint64_t L_382 = V_16;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_381, ((int64_t)il2cpp_codegen_multiply((int64_t)L_382, ((int64_t)((int32_t)64542499))))));
		uint64_t L_383 = V_4;
		uint64_t L_384 = V_16;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_383, ((int64_t)il2cpp_codegen_multiply((int64_t)L_384, ((int64_t)((int32_t)158326419))))));
		uint64_t L_385 = V_5;
		uint64_t L_386 = V_16;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_385, ((int64_t)il2cpp_codegen_multiply((int64_t)L_386, ((int64_t)((int32_t)191173276))))));
		uint64_t L_387 = V_6;
		uint64_t L_388 = V_16;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_387, ((int64_t)il2cpp_codegen_multiply((int64_t)L_388, ((int64_t)((int32_t)104575268))))));
		uint64_t L_389 = V_7;
		uint64_t L_390 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_389, ((int64_t)il2cpp_codegen_multiply((int64_t)L_390, ((int64_t)((int32_t)137584065))))));
		uint64_t L_391 = V_1;
		uint64_t L_392 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_391, ((int64_t)((uint64_t)L_392>>((int32_t)28)))));
		uint64_t L_393 = V_0;
		V_0 = ((int64_t)((int64_t)L_393&((int64_t)((int32_t)268435455))));
		uint64_t L_394 = V_2;
		uint64_t L_395 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_394, ((int64_t)((uint64_t)L_395>>((int32_t)28)))));
		uint64_t L_396 = V_1;
		V_1 = ((int64_t)((int64_t)L_396&((int64_t)((int32_t)268435455))));
		uint64_t L_397 = V_3;
		uint64_t L_398 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_397, ((int64_t)((uint64_t)L_398>>((int32_t)28)))));
		uint64_t L_399 = V_2;
		V_2 = ((int64_t)((int64_t)L_399&((int64_t)((int32_t)268435455))));
		uint64_t L_400 = V_4;
		uint64_t L_401 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_400, ((int64_t)((uint64_t)L_401>>((int32_t)28)))));
		uint64_t L_402 = V_3;
		V_3 = ((int64_t)((int64_t)L_402&((int64_t)((int32_t)268435455))));
		uint64_t L_403 = V_5;
		uint64_t L_404 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_403, ((int64_t)((uint64_t)L_404>>((int32_t)28)))));
		uint64_t L_405 = V_4;
		V_4 = ((int64_t)((int64_t)L_405&((int64_t)((int32_t)268435455))));
		uint64_t L_406 = V_6;
		uint64_t L_407 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_406, ((int64_t)((uint64_t)L_407>>((int32_t)28)))));
		uint64_t L_408 = V_5;
		V_5 = ((int64_t)((int64_t)L_408&((int64_t)((int32_t)268435455))));
		uint64_t L_409 = V_7;
		uint64_t L_410 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_409, ((int64_t)((uint64_t)L_410>>((int32_t)28)))));
		uint64_t L_411 = V_6;
		V_6 = ((int64_t)((int64_t)L_411&((int64_t)((int32_t)268435455))));
		uint64_t L_412 = V_8;
		uint64_t L_413 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_412, ((int64_t)((uint64_t)L_413>>((int32_t)28)))));
		uint64_t L_414 = V_7;
		V_7 = ((int64_t)((int64_t)L_414&((int64_t)((int32_t)268435455))));
		uint64_t L_415 = V_9;
		uint64_t L_416 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_415, ((int64_t)((uint64_t)L_416>>((int32_t)28)))));
		uint64_t L_417 = V_8;
		V_8 = ((int64_t)((int64_t)L_417&((int64_t)((int32_t)268435455))));
		uint64_t L_418 = V_10;
		uint64_t L_419 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_418, ((int64_t)((uint64_t)L_419>>((int32_t)28)))));
		uint64_t L_420 = V_9;
		V_9 = ((int64_t)((int64_t)L_420&((int64_t)((int32_t)268435455))));
		uint64_t L_421 = V_11;
		uint64_t L_422 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_421, ((int64_t)((uint64_t)L_422>>((int32_t)28)))));
		uint64_t L_423 = V_10;
		V_10 = ((int64_t)((int64_t)L_423&((int64_t)((int32_t)268435455))));
		uint64_t L_424 = V_12;
		uint64_t L_425 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_424, ((int64_t)((uint64_t)L_425>>((int32_t)28)))));
		uint64_t L_426 = V_11;
		V_11 = ((int64_t)((int64_t)L_426&((int64_t)((int32_t)268435455))));
		uint64_t L_427 = V_13;
		uint64_t L_428 = V_12;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_427, ((int64_t)((uint64_t)L_428>>((int32_t)28)))));
		uint64_t L_429 = V_12;
		V_12 = ((int64_t)((int64_t)L_429&((int64_t)((int32_t)268435455))));
		uint64_t L_430 = V_14;
		uint64_t L_431 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_430, ((int64_t)((uint64_t)L_431>>((int32_t)28)))));
		uint64_t L_432 = V_13;
		V_13 = ((int64_t)((int64_t)L_432&((int64_t)((int32_t)268435455))));
		uint64_t L_433 = V_15;
		uint64_t L_434 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_433, ((int64_t)((uint64_t)L_434>>((int32_t)28)))));
		uint64_t L_435 = V_14;
		V_14 = ((int64_t)((int64_t)L_435&((int64_t)((int32_t)268435455))));
		uint64_t L_436 = V_15;
		V_16 = ((int64_t)((uint64_t)L_436>>((int32_t)26)));
		uint64_t L_437 = V_15;
		V_15 = ((int64_t)((int64_t)L_437&((int64_t)((int32_t)67108863))));
		uint64_t L_438 = V_16;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_438, ((int64_t)1)));
		uint64_t L_439 = V_0;
		uint64_t L_440 = V_16;
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_439, ((int64_t)((int64_t)L_440&((int64_t)((int32_t)78101261))))));
		uint64_t L_441 = V_1;
		uint64_t L_442 = V_16;
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_441, ((int64_t)((int64_t)L_442&((int64_t)((int32_t)141809365))))));
		uint64_t L_443 = V_2;
		uint64_t L_444 = V_16;
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_443, ((int64_t)((int64_t)L_444&((int64_t)((int32_t)175155932))))));
		uint64_t L_445 = V_3;
		uint64_t L_446 = V_16;
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_445, ((int64_t)((int64_t)L_446&((int64_t)((int32_t)64542499))))));
		uint64_t L_447 = V_4;
		uint64_t L_448 = V_16;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_447, ((int64_t)((int64_t)L_448&((int64_t)((int32_t)158326419))))));
		uint64_t L_449 = V_5;
		uint64_t L_450 = V_16;
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_449, ((int64_t)((int64_t)L_450&((int64_t)((int32_t)191173276))))));
		uint64_t L_451 = V_6;
		uint64_t L_452 = V_16;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_451, ((int64_t)((int64_t)L_452&((int64_t)((int32_t)104575268))))));
		uint64_t L_453 = V_7;
		uint64_t L_454 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_453, ((int64_t)((int64_t)L_454&((int64_t)((int32_t)137584065))))));
		uint64_t L_455 = V_1;
		uint64_t L_456 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_455, ((int64_t)((int64_t)L_456>>((int32_t)28)))));
		uint64_t L_457 = V_0;
		V_0 = ((int64_t)((int64_t)L_457&((int64_t)((int32_t)268435455))));
		uint64_t L_458 = V_2;
		uint64_t L_459 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_458, ((int64_t)((int64_t)L_459>>((int32_t)28)))));
		uint64_t L_460 = V_1;
		V_1 = ((int64_t)((int64_t)L_460&((int64_t)((int32_t)268435455))));
		uint64_t L_461 = V_3;
		uint64_t L_462 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_461, ((int64_t)((int64_t)L_462>>((int32_t)28)))));
		uint64_t L_463 = V_2;
		V_2 = ((int64_t)((int64_t)L_463&((int64_t)((int32_t)268435455))));
		uint64_t L_464 = V_4;
		uint64_t L_465 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_464, ((int64_t)((int64_t)L_465>>((int32_t)28)))));
		uint64_t L_466 = V_3;
		V_3 = ((int64_t)((int64_t)L_466&((int64_t)((int32_t)268435455))));
		uint64_t L_467 = V_5;
		uint64_t L_468 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_467, ((int64_t)((int64_t)L_468>>((int32_t)28)))));
		uint64_t L_469 = V_4;
		V_4 = ((int64_t)((int64_t)L_469&((int64_t)((int32_t)268435455))));
		uint64_t L_470 = V_6;
		uint64_t L_471 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_470, ((int64_t)((int64_t)L_471>>((int32_t)28)))));
		uint64_t L_472 = V_5;
		V_5 = ((int64_t)((int64_t)L_472&((int64_t)((int32_t)268435455))));
		uint64_t L_473 = V_7;
		uint64_t L_474 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_473, ((int64_t)((int64_t)L_474>>((int32_t)28)))));
		uint64_t L_475 = V_6;
		V_6 = ((int64_t)((int64_t)L_475&((int64_t)((int32_t)268435455))));
		uint64_t L_476 = V_8;
		uint64_t L_477 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_476, ((int64_t)((int64_t)L_477>>((int32_t)28)))));
		uint64_t L_478 = V_7;
		V_7 = ((int64_t)((int64_t)L_478&((int64_t)((int32_t)268435455))));
		uint64_t L_479 = V_9;
		uint64_t L_480 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_479, ((int64_t)((int64_t)L_480>>((int32_t)28)))));
		uint64_t L_481 = V_8;
		V_8 = ((int64_t)((int64_t)L_481&((int64_t)((int32_t)268435455))));
		uint64_t L_482 = V_10;
		uint64_t L_483 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_482, ((int64_t)((int64_t)L_483>>((int32_t)28)))));
		uint64_t L_484 = V_9;
		V_9 = ((int64_t)((int64_t)L_484&((int64_t)((int32_t)268435455))));
		uint64_t L_485 = V_11;
		uint64_t L_486 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_485, ((int64_t)((int64_t)L_486>>((int32_t)28)))));
		uint64_t L_487 = V_10;
		V_10 = ((int64_t)((int64_t)L_487&((int64_t)((int32_t)268435455))));
		uint64_t L_488 = V_12;
		uint64_t L_489 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_488, ((int64_t)((int64_t)L_489>>((int32_t)28)))));
		uint64_t L_490 = V_11;
		V_11 = ((int64_t)((int64_t)L_490&((int64_t)((int32_t)268435455))));
		uint64_t L_491 = V_13;
		uint64_t L_492 = V_12;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_491, ((int64_t)((int64_t)L_492>>((int32_t)28)))));
		uint64_t L_493 = V_12;
		V_12 = ((int64_t)((int64_t)L_493&((int64_t)((int32_t)268435455))));
		uint64_t L_494 = V_14;
		uint64_t L_495 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_494, ((int64_t)((int64_t)L_495>>((int32_t)28)))));
		uint64_t L_496 = V_13;
		V_13 = ((int64_t)((int64_t)L_496&((int64_t)((int32_t)268435455))));
		uint64_t L_497 = V_15;
		uint64_t L_498 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_497, ((int64_t)((int64_t)L_498>>((int32_t)28)))));
		uint64_t L_499 = V_14;
		V_14 = ((int64_t)((int64_t)L_499&((int64_t)((int32_t)268435455))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_500 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_33 = L_500;
		uint64_t L_501 = V_0;
		uint64_t L_502 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_503 = V_33;
		Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6(((int64_t)((int64_t)L_501|((int64_t)((int64_t)L_502<<((int32_t)28))))), L_503, 0, NULL);
		uint64_t L_504 = V_2;
		uint64_t L_505 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_506 = V_33;
		Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6(((int64_t)((int64_t)L_504|((int64_t)((int64_t)L_505<<((int32_t)28))))), L_506, 7, NULL);
		uint64_t L_507 = V_4;
		uint64_t L_508 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_509 = V_33;
		Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6(((int64_t)((int64_t)L_507|((int64_t)((int64_t)L_508<<((int32_t)28))))), L_509, ((int32_t)14), NULL);
		uint64_t L_510 = V_6;
		uint64_t L_511 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_512 = V_33;
		Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6(((int64_t)((int64_t)L_510|((int64_t)((int64_t)L_511<<((int32_t)28))))), L_512, ((int32_t)21), NULL);
		uint64_t L_513 = V_8;
		uint64_t L_514 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_515 = V_33;
		Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6(((int64_t)((int64_t)L_513|((int64_t)((int64_t)L_514<<((int32_t)28))))), L_515, ((int32_t)28), NULL);
		uint64_t L_516 = V_10;
		uint64_t L_517 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_518 = V_33;
		Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6(((int64_t)((int64_t)L_516|((int64_t)((int64_t)L_517<<((int32_t)28))))), L_518, ((int32_t)35), NULL);
		uint64_t L_519 = V_12;
		uint64_t L_520 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_521 = V_33;
		Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6(((int64_t)((int64_t)L_519|((int64_t)((int64_t)L_520<<((int32_t)28))))), L_521, ((int32_t)42), NULL);
		uint64_t L_522 = V_14;
		uint64_t L_523 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_524 = V_33;
		Ed448_Encode56_mDD640F097F73434C8AC0A1C03FB7EBA664796AC6(((int64_t)((int64_t)L_522|((int64_t)((int64_t)L_523<<((int32_t)28))))), L_524, ((int32_t)49), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_525 = V_33;
		return L_525;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBase_m8839B008B9403546675D1A02511F3B8DA02590BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_Precompute_m255EB81B13C789CFE2E7D2161EC0E25C56655205(NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_0 = ___1_r;
		Ed448_PointSetNeutral_mE8166763401C7CC80C8F0DD34A4486152DC9CA58(L_0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		Ed448_DecodeScalar_m7D209348AC358B759F16D8302312E0818FFA0CC0(L_2, 0, L_3, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___L;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		uint32_t L_11;
		L_11 = Nat_CAdd_mB7A9AA8990B48544C93E4B9A04ECBB88DAE26AA1(((int32_t)14), ((int32_t)((int32_t)((~L_7))&1)), L_8, L_9, L_10, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)il2cpp_codegen_add(4, (int32_t)L_11)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		uint32_t L_14;
		L_14 = Nat_ShiftDownBit_m413AD7BE1A11EEDE9E9A76284024E94FA18FB772(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13, 0, NULL);
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_15 = (PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153*)il2cpp_codegen_object_new(PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153_il2cpp_TypeInfo_var);
		PointPrecomp__ctor_m2CE209622A222246970DCD25F56A0B995A5D1F96(L_15, NULL);
		V_1 = L_15;
		V_2 = ((int32_t)17);
	}

IL_0049:
	{
		int32_t L_16 = V_2;
		V_3 = L_16;
		V_4 = 0;
		goto IL_00c8;
	}

IL_0050:
	{
		V_5 = 0;
		V_8 = 0;
		goto IL_008c;
	}

IL_0058:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)(L_18>>5));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_3;
		V_9 = ((int32_t)((uint32_t)L_20>>((int32_t)(((int32_t)(L_21&((int32_t)31)))&((int32_t)31)))));
		uint32_t L_22 = V_5;
		int32_t L_23 = V_8;
		V_5 = ((int32_t)((int32_t)L_22&((~((int32_t)(1<<((int32_t)(L_23&((int32_t)31)))))))));
		uint32_t L_24 = V_5;
		uint32_t L_25 = V_9;
		int32_t L_26 = V_8;
		V_5 = ((int32_t)((int32_t)L_24^((int32_t)((int32_t)L_25<<((int32_t)(L_26&((int32_t)31)))))));
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)18)));
		int32_t L_28 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_008c:
	{
		int32_t L_29 = V_8;
		if ((((int32_t)L_29) < ((int32_t)5)))
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_30 = V_5;
		V_6 = ((int32_t)(((int32_t)((uint32_t)L_30>>4))&1));
		uint32_t L_31 = V_5;
		int32_t L_32 = V_6;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_31^((-L_32))))&((int32_t)15)));
		int32_t L_33 = V_4;
		int32_t L_34 = V_7;
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_35 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_PointLookup_mF5BF4A7B845349F49818290EC68CFB238E0F5167(L_33, L_34, L_35, NULL);
		int32_t L_36 = V_6;
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_37 = V_1;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37->___x;
		X448Field_CNegate_mF61AC45D6B252BAC0B99EE7DC109844260EBE935(L_36, L_38, NULL);
		PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* L_39 = V_1;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_40 = ___1_r;
		Ed448_PointAddPrecomp_m3650CDB7CA5508CD965BF9A617CD151492FD45E2(L_39, L_40, NULL);
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00c8:
	{
		int32_t L_42 = V_4;
		if ((((int32_t)L_42) < ((int32_t)5)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_43 = V_2;
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		V_2 = L_44;
		if ((((int32_t)L_44) < ((int32_t)0)))
		{
			goto IL_00e0;
		}
	}
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_45 = ___1_r;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_PointDouble_m5B63D15D542AF63EAFDFC001F422C67052C81AF0(L_45, NULL);
		goto IL_0049;
	}

IL_00e0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseEncoded_mAE0BBF97D951710981883634BFE1933B67909095 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* V_0 = NULL;
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_0 = (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)il2cpp_codegen_object_new(PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		PointExt__ctor_mBFD4DAD3052D0CB4BEC9669B21AD21E5412A3CE9(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_ScalarMultBase_m8839B008B9403546675D1A02511F3B8DA02590BB(L_1, L_2, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_r;
		int32_t L_5 = ___2_rOff;
		int32_t L_6;
		L_6 = Ed448_EncodePoint_m323A756F6B6EF6AB57094EC238D9D6837A962F82(L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ScalarMultBaseEncoded_mAE0BBF97D951710981883634BFE1933B67909095_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseXY_mBCC40FAD1D7B1F754EBBDEF03404FB4037AFF478 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		int32_t L_2 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_PruneScalar_m4F219411E5E0C9E0C0AD6225369C3455BFEE99C3(L_1, L_2, L_3, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_4 = (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711*)il2cpp_codegen_object_new(PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711_il2cpp_TypeInfo_var);
		PointExt__ctor_mBFD4DAD3052D0CB4BEC9669B21AD21E5412A3CE9(L_4, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_6 = V_1;
		Ed448_ScalarMultBase_m8839B008B9403546675D1A02511F3B8DA02590BB(L_5, L_6, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_7 = V_1;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___x;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_9 = V_1;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___y;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_11 = V_1;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___z;
		int32_t L_13;
		L_13 = Ed448_CheckPoint_mEBE5F63E6CEFB7CB45D6156FF58E1DCEF99B5D93(L_8, L_10, L_12, NULL);
		if (L_13)
		{
			goto IL_003c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ScalarMultBaseXY_mBCC40FAD1D7B1F754EBBDEF03404FB4037AFF478_RuntimeMethod_var)));
	}

IL_003c:
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_15 = V_1;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_x;
		X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788(L_16, 0, L_17, 0, NULL);
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_18 = V_1;
		NullCheck(L_18);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = L_18->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___3_y;
		X448Field_Copy_m974F0A6AC4E9C62C998E535BC0059EE570569788(L_19, 0, L_20, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultStrausVar_m884A053AB74B076326EC8817587C724474108226 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_nb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_np, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___2_p, PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_2 = NULL;
	PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_Precompute_m255EB81B13C789CFE2E7D2161EC0E25C56655205(NULL);
		V_0 = 5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_nb;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
		L_1 = Ed448_GetWnafVar_m924B2047E3ED6D1DD146D1ED68E94A28C17A32F5(L_0, 7, NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___1_np;
		int32_t L_3 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4;
		L_4 = Ed448_GetWnafVar_m924B2047E3ED6D1DD146D1ED68E94A28C17A32F5(L_2, L_3, NULL);
		V_2 = L_4;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_5 = ___2_p;
		int32_t L_6 = V_0;
		PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_7;
		L_7 = Ed448_PointPrecompVar_mE83646331B9BE79F0F1C1D0F158A33128FA3D816(L_5, ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, 2))&((int32_t)31))))), NULL);
		V_3 = L_7;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_8 = ___3_r;
		Ed448_PointSetNeutral_mE8166763401C7CC80C8F0DD34A4486152DC9CA58(L_8, NULL);
		V_4 = ((int32_t)446);
	}

IL_0033:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = V_1;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		int32_t L_13 = V_5;
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_5;
		V_7 = ((int32_t)(L_14>>((int32_t)31)));
		int32_t L_15 = V_5;
		int32_t L_16 = V_7;
		V_8 = ((int32_t)(((int32_t)(L_15^L_16))>>1));
		int32_t L_17 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_18 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBaseTable;
		int32_t L_19 = V_8;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_22 = ___3_r;
		Ed448_PointAddVar_mBF555D463F4A92959E0BC5BABA7D4EC5607DB0C3((bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0), L_21, L_22, NULL);
	}

IL_0060:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_23 = V_2;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		int32_t L_27 = V_6;
		if (!L_27)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_28 = V_6;
		V_9 = ((int32_t)(L_28>>((int32_t)31)));
		int32_t L_29 = V_6;
		int32_t L_30 = V_9;
		V_10 = ((int32_t)(((int32_t)(L_29^L_30))>>1));
		int32_t L_31 = V_9;
		PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62* L_32 = V_3;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_36 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_PointAddVar_mBF555D463F4A92959E0BC5BABA7D4EC5607DB0C3((bool)((!(((uint32_t)L_31) <= ((uint32_t)0)))? 1 : 0), L_35, L_36, NULL);
	}

IL_0089:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_4 = L_38;
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* L_39 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_PointDouble_m5B63D15D542AF63EAFDFC001F422C67052C81AF0(L_39, NULL);
		goto IL_0033;
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Sign_m30D5223BEF07C5B5134A7D155FB7512D3594BD6D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_m, int32_t ___4_mOff, int32_t ___5_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_sig, int32_t ___7_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_ctx;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_m;
		int32_t L_5 = ___4_mOff;
		int32_t L_6 = ___5_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___6_sig;
		int32_t L_8 = ___7_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_ImplSign_mD0DDC0485DD4127334E73C104E76679E00EC18B9(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Sign_m35970FB534299E0B0953F70D062BD29A6FECFA27 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_m, int32_t ___6_mOff, int32_t ___7_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___8_sig, int32_t ___9_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_m;
		int32_t L_7 = ___6_mOff;
		int32_t L_8 = ___7_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___8_sig;
		int32_t L_10 = ___9_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_ImplSign_mE5CDBF1FE5A0F85D743F88EBE87EFA23F6B28F2F(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_mFE30A7F6245943FC6B6E609E699869E2DFFC6B15 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_ph, int32_t ___4_phOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_sig, int32_t ___6_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_ctx;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_ph;
		int32_t L_5 = ___4_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___5_sig;
		int32_t L_8 = ___6_sigOff;
		Ed448_ImplSign_mD0DDC0485DD4127334E73C104E76679E00EC18B9(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m66329F169CE2D50AE8AF7322DC5C0717C5438E90 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ph, int32_t ___6_phOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_ph;
		int32_t L_7 = ___6_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___7_sig;
		int32_t L_10 = ___8_sigOff;
		Ed448_ImplSign_mE5CDBF1FE5A0F85D743F88EBE87EFA23F6B28F2F(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m7D98D6375A8BD05CA3A41A59C8BD856B12265035 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, RuntimeObject* ___3_ph, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_sig, int32_t ___5_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___3_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var, L_3, L_4, 0, L_5);
		if ((((int32_t)L_2) == ((int32_t)L_6)))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_SignPrehash_m7D98D6375A8BD05CA3A41A59C8BD856B12265035_RuntimeMethod_var)));
	}

IL_002a:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_sk;
		int32_t L_9 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_ctx;
		uint8_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___4_sig;
		int32_t L_15 = ___5_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_ImplSign_mD0DDC0485DD4127334E73C104E76679E00EC18B9(L_8, L_9, L_10, L_11, L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14, L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m1D7562CA1FE4CC0183B1087819EAF4D74D6AC19D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, RuntimeObject* ___5_ph, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_sig, int32_t ___7_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___5_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var, L_3, L_4, 0, L_5);
		if ((((int32_t)L_2) == ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_SignPrehash_m1D7562CA1FE4CC0183B1087819EAF4D74D6AC19D_RuntimeMethod_var)));
	}

IL_002b:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_sk;
		int32_t L_9 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_pk;
		int32_t L_11 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___4_ctx;
		uint8_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___6_sig;
		int32_t L_17 = ___7_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		Ed448_ImplSign_mE5CDBF1FE5A0F85D743F88EBE87EFA23F6B28F2F(L_8, L_9, L_10, L_11, L_12, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16, L_17, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_Verify_mA8F33B63C0C5E0CFAFBDFD216A00623471AE2BC2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_m, int32_t ___6_mOff, int32_t ___7_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_m;
		int32_t L_7 = ___6_mOff;
		int32_t L_8 = ___7_mLen;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Ed448_ImplVerify_m9E1CB9694FF1E78E589F89C01C469DDE7B75CE05(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_VerifyPrehash_mD171921C735A4A01BD53B3ADC116C8D0374A5330 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ph, int32_t ___6_phOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_ph;
		int32_t L_7 = ___6_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		bool L_9;
		L_9 = Ed448_ImplVerify_m9E1CB9694FF1E78E589F89C01C469DDE7B75CE05(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_VerifyPrehash_m307FDCB6ED2A4FC45B9C4F11B1C6D7A46CB1DA3F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, RuntimeObject* ___5_ph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___5_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t47F2DC982762E7B4C18B079F353721F06EF4FB56_il2cpp_TypeInfo_var, L_3, L_4, 0, L_5);
		if ((((int32_t)L_2) == ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_VerifyPrehash_m307FDCB6ED2A4FC45B9C4F11B1C6D7A46CB1DA3F_RuntimeMethod_var)));
	}

IL_002b:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_sig;
		int32_t L_9 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_pk;
		int32_t L_11 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___4_ctx;
		uint8_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		il2cpp_codegen_runtime_class_init_inline(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Ed448_ImplVerify_m9E1CB9694FF1E78E589F89C01C469DDE7B75CE05(L_8, L_9, L_10, L_11, L_12, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448__ctor_m135F2BEBC87BB6BDB9C93B00D74BDD5EDF9D1611 (Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448__cctor_m3B64EFFB79D61B1FF95960845DC9CD3B605F5713 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____0AEC099C87E7062A57D1C79734EDDD28A07A1684746EE8640132BB252E6BF5A1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____120918433B634757ADE589703127976B7C5C2009E8DB37632123F45FA2B87F2E_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____16599A4F9A12ECCBFC361B547840304B9E48CBC431F387243C6859C475427D16_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____E3B4E767F318263A8E7A64E1D61F6D3368A3B59AF34CBB94E657E7FCC58F5BA5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25DFE14753005E858F66583A1F6CC7A6AE3FCAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PrehashSize = ((int32_t)64);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___PublicKeySize = ((int32_t)57);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___SecretKeySize = ((int32_t)57);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___SignatureSize = ((int32_t)114);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = Strings_ToByteArray_m15A228865F989895F66F50377670C1FBEA709CE3(_stringLiteralF25DFE14753005E858F66583A1F6CC7A6AE3FCAC, NULL);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___Dom4Prefix = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___Dom4Prefix), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____0AEC099C87E7062A57D1C79734EDDD28A07A1684746EE8640132BB252E6BF5A1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___P = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___P), (void*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____16599A4F9A12ECCBFC361B547840304B9E48CBC431F387243C6859C475427D16_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___L = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___L), (void*)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___L;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___L;
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_9;
		L_9 = Nat_ToBigInteger_mA6F4965B358FE176BBA57AC1EEB3325AC464EF07(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8, NULL);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___N = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___N), (void*)L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____E3B4E767F318263A8E7A64E1D61F6D3368A3B59AF34CBB94E657E7FCC58F5BA5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_11, L_12, NULL);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___B_x = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___B_x), (void*)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____120918433B634757ADE589703127976B7C5C2009E8DB37632123F45FA2B87F2E_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_14, L_15, NULL);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___B_y = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___B_y), (void*)L_14);
		RuntimeObject* L_16 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_16, NULL);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompLock = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompLock), (void*)L_16);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBaseTable = (PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBaseTable), (void*)(PointExtU5BU5D_t63727CF1F00D6D1F820E6F78F78F68F73545AE62*)NULL);
		((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBase = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tC17A534BB6531F6C249D209F74F7A812DF77C869_il2cpp_TypeInfo_var))->___precompBase), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_mBFD4DAD3052D0CB4BEC9669B21AD21E5412A3CE9 (PointExt_t162DB876CB16D548E2532A9E83C0082E6C0CE711* __this, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		__this->___x = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		__this->___y = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		__this->___z = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m2CE209622A222246970DCD25F56A0B995A5D1F96 (PointPrecomp_t026D81CE39FBC69BFCAAC56C67B20E2188CD7153* __this, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		__this->___x = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m5A4B02BDBE15064C2AAC16FB0D92D64E2E19342B(NULL);
		__this->___y = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519_CalculateAgreement_mD0A72EA673D22EE2744112D5A389AAFF80F87658 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_u, int32_t ___3_uOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_r, int32_t ___5_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_u;
		int32_t L_3 = ___3_uOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_r;
		int32_t L_5 = ___5_rOff;
		X25519_ScalarMult_mF2583E5CEF8099CE65A5ADB867F7C7C140D25E8D(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___4_r;
		int32_t L_7 = ___5_rOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Arrays_AreAllZeroes_m412367F7DCC6F017E910D2E2685D5F51CC998D37(L_6, L_7, ((int32_t)32), NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X25519_Decode32_m15D170791BAB745563A1E8917BD1E8755F883E3F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bs;
		int32_t L_15 = ___1_off;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		___1_off = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_DecodeScalar_m27960633A9057F4FA3A74EBE6AADB323DB16A044 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_n;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		int32_t L_3 = ___1_kOff;
		int32_t L_4 = V_0;
		uint32_t L_5;
		L_5 = X25519_Decode32_m15D170791BAB745563A1E8917BD1E8755F883E3F(L_2, ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_n;
		NullCheck(L_8);
		uint32_t* L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_10 = *((uint32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)(L_10&((int32_t)-8)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_n;
		NullCheck(L_11);
		uint32_t* L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int32_t L_13 = *((uint32_t*)L_12);
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_13&((int32_t)2147483647LL)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_n;
		NullCheck(L_14);
		uint32_t* L_15 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int32_t L_16 = *((uint32_t*)L_15);
		*((int32_t*)L_15) = (int32_t)((int32_t)(L_16|((int32_t)1073741824)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_GeneratePrivateKey_mC45EC1AC8D3DBF16AD9D0FB0CABE73C865E56301 (SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___0_random, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, const RuntimeMethod* method) 
{
	{
		SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* L_0 = ___0_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_k;
		NullCheck(L_0);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_0, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_k;
		NullCheck(L_2);
		uint8_t* L_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_4 = *((uint8_t*)L_3);
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4&((int32_t)248))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_k;
		NullCheck(L_5);
		uint8_t* L_6 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_7 = *((uint8_t*)L_6);
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_7&((int32_t)127))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_k;
		NullCheck(L_8);
		uint8_t* L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_10 = *((uint8_t*)L_9);
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_10|((int32_t)64))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_GeneratePublicKey_m4DEB1665EB4C51A32336363F5E9E99098E4D7FB5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, int32_t ___3_rOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_r;
		int32_t L_3 = ___3_rOff;
		X25519_ScalarMultBase_mDB72B5D93DE297C05CC27E45326CBBDB886981AA(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_PointDouble_m59C52384F10DE7D97CBE54879117DF882E1901EB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___1_z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_2, L_3, L_4, L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_6, L_7, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_x;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		X25519Field_Sub_m8AEBB58A47C4DBC60E3BA0EB57848AC3F07E6E0F(L_13, L_14, L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___1_z;
		X25519Field_Mul_m39F2DC64F8D3B845EAD2E76814139DE010372BDB(L_16, ((int32_t)121666), L_17, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___1_z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___1_z;
		X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D(L_18, L_19, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___1_z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___1_z;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_21, L_22, L_23, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_Precompute_m074BF11400CE27B5B7AB7DBD1512B560C929A86E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_Precompute_m41C84A1756DDBED6D366273D25F1A46207877B86(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_ScalarMult_mF2583E5CEF8099CE65A5ADB867F7C7C140D25E8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_u, int32_t ___3_uOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_r, int32_t ___5_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		int32_t L_2 = ___1_kOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X25519_DecodeScalar_m27960633A9057F4FA3A74EBE6AADB323DB16A044(L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___2_u;
		int32_t L_6 = ___3_uOff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		X25519Field_Decode_m338AAEE543F41CC1719A27E7DC71809BA35CAD95(L_5, L_6, L_7, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8;
		L_8 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_2 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		X25519Field_Copy_mE0302E3240787ABFCF6839648F8CDC4ADC626BDB(L_9, 0, L_10, 0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13;
		L_13 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_4 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_4;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_5 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_6 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17;
		L_17 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_7 = L_17;
		V_8 = ((int32_t)254);
		V_9 = 1;
	}

IL_0061:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_4;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_18, L_19, L_20, L_21, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_2;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_22, L_23, L_24, L_25, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_6;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_26, L_27, L_28, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_4;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_29, L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_5;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_32, L_33, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_2;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_34, L_35, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_7;
		X25519Field_Sub_m8AEBB58A47C4DBC60E3BA0EB57848AC3F07E6E0F(L_36, L_37, L_38, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_3;
		X25519Field_Mul_m39F2DC64F8D3B845EAD2E76814139DE010372BDB(L_39, ((int32_t)121666), L_40, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_3;
		X25519Field_Add_mF446704D0CC169719D4A91F3B7C4388E5815EE2D(L_41, L_42, L_43, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_3;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_44, L_45, L_46, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_47, L_48, L_49, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_5;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_50, L_51, L_52, L_53, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_4;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_54, L_55, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_5;
		X25519Field_Sqr_mB1C038975338449D15F8841FA1D6ACA587562CFD(L_56, L_57, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_5;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_58, L_59, L_60, NULL);
		int32_t L_61 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_62 = V_8;
		V_10 = ((int32_t)(L_62>>5));
		int32_t L_63 = V_8;
		V_11 = ((int32_t)(L_63&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_0;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int32_t L_68 = V_11;
		V_12 = ((int32_t)(((int32_t)((uint32_t)L_67>>((int32_t)(L_68&((int32_t)31)))))&1));
		int32_t L_69 = V_9;
		int32_t L_70 = V_12;
		V_9 = ((int32_t)(L_69^L_70));
		int32_t L_71 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_4;
		X25519Field_CSwap_m492A7EB6C6B7D7C69F299B8CED36E767A56384DE(L_71, L_72, L_73, NULL);
		int32_t L_74 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_5;
		X25519Field_CSwap_m492A7EB6C6B7D7C69F299B8CED36E767A56384DE(L_74, L_75, L_76, NULL);
		int32_t L_77 = V_12;
		V_9 = L_77;
		int32_t L_78 = V_8;
		if ((((int32_t)L_78) >= ((int32_t)3)))
		{
			goto IL_0061;
		}
	}
	{
		V_13 = 0;
		goto IL_0151;
	}

IL_0144:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_3;
		X25519_PointDouble_m59C52384F10DE7D97CBE54879117DF882E1901EB(L_79, L_80, NULL);
		int32_t L_81 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0151:
	{
		int32_t L_82 = V_13;
		if ((((int32_t)L_82) < ((int32_t)3)))
		{
			goto IL_0144;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = V_3;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		X25519Field_Inv_m34B01BF3BB188845DBFAACEC7C58C662B73B90CE(L_83, L_84, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = V_2;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_85, L_86, L_87, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = V_2;
		X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360(L_88, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___4_r;
		int32_t L_91 = ___5_rOff;
		X25519Field_Encode_m81DFE01020AC68F5F661A5695D1B573EFD9EB4B6(L_89, L_90, L_91, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_ScalarMultBase_mDB72B5D93DE297C05CC27E45326CBBDB886981AA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, int32_t ___3_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_tAA0E1FA21FB4E7B26887DA8C0F6441705707259D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_mBCAF8E6EF32CA9B5E18D760D80AA2796AF9FF599(NULL);
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		int32_t L_3 = ___1_kOff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_t0DF6BDE867F7231C026C3AF75D209404E3BBE3CA_il2cpp_TypeInfo_var);
		Ed25519_ScalarMultBaseYZ_mCB20D6348175818B8AF53F7FEE65F40A780A5ADD(L_2, L_3, L_4, L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		X25519Field_Apm_mB64221430EC252AC0B410EA1B382E913A91A05C7(L_6, L_7, L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		X25519Field_Inv_m34B01BF3BB188845DBFAACEC7C58C662B73B90CE(L_10, L_11, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		X25519Field_Mul_m0B0F09C9B8C55403C2670F9D2E389E57BECCDECB(L_12, L_13, L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		X25519Field_Normalize_m0D75EBF3E8C9855DC8BDD6FF4952F7B98B0B2360(L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___2_r;
		int32_t L_18 = ___3_rOff;
		X25519Field_Encode_m81DFE01020AC68F5F661A5695D1B573EFD9EB4B6(L_16, L_17, L_18, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519__ctor_mA3A5A75DFA8A8474A91751AA1F0389921B459EC8 (X25519_t973DB8A66DD54B41EB94C83A625D5CF2012310BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ECPoint_get_RawXCoord_mFB974CD8971DAC074E9466A52B85EFAC584837E3_inline (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) 
{
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = __this->___m_x;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ECPoint_get_RawYCoord_m24BFB9CFEAD9A92C522A04FD4559797F9159C924_inline (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) 
{
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = __this->___m_y;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* ECPoint_get_RawZCoords_m77B1ADDF0DE017B8018DC6BACB5A20DA34710FF9_inline (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) 
{
	{
		ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67* L_0 = __this->___m_zs;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ECPoint_get_IsCompressed_m25F772F21B93B400E7EDAB00162901A3096D69B7_inline (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_withCompression;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigInteger_get_SignValue_mD9C3B0BA0C5D51C139AF2380358D608DB4CFC16F_inline (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___sign;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
