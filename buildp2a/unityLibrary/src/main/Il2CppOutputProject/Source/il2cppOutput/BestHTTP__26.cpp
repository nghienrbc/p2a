﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct BigIntegerU5BU5D_t062FA002B67620C38D4B8ABE97BB0944C9D08012;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ECFieldElementU5BU5D_t19DFACFD23C7AE09BF2ED6AD2E487D53C4988B67;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C;
struct DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251;
struct DerObjectIdentifier_tA504C861750EFDCE8F414B29A46C558F1E4D4BD9;
struct ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB;
struct ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231;
struct ECEndomorphism_t6B4D3815F37454A99866FED0C08B6A2DDC543B71;
struct ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D;
struct ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE;
struct ECMultiplier_tF42F2485D618A2ACA7BFFE0E9F60A9D8449F2C2F;
struct ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B;
struct ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD;
struct ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B;
struct FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902;
struct ICipherParameters_t62356F4C3771ED6460429EAB0C796DE9FC06A82C;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783;
struct IFiniteField_t29D6CD2EA99DBC82C2DD6FE03D689A9AD74629D9;
struct IRandomGenerator_tFCD59F2C036B8BBCED979611AD40A53569CB1D92;
struct InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58;
struct ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384;
struct ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7;
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
struct SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E;
struct SM3Digest_t183E330F597B8D4496163054F79D647449092E00;
struct SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6;
struct SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112;
struct SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4;
struct String_t;
struct TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF;
struct ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC;
struct TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743;
struct TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE;
struct TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD;
struct VmpcEngine_t86783A3D1455626C4B3DCF59D94F0BF9B3CB681C;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506;
struct Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27;
struct Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849;
struct ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECMultiplier_tF42F2485D618A2ACA7BFFE0E9F60A9D8449F2C2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____1674D0631A2E37B60EC748BC3899FEE1550C108AF30B85CE96A70C5CA4682D03_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____874805F2B76BD7887959F02FE0B2A8C07C1E1D41F41AAD4D2AA1D0AB21A1780F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____9AC0C32A73444A448170AE1EFE7F69A0D3A7F6E1335FA0E112D9F96EB7EE3CC7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____A589B8F1C215FA773BA2724EB825E8B2D1792FB955349574454E18C63537F2A6_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00731C2C86C2D15B58ED9A20890E494DBD2AC58B;
IL2CPP_EXTERN_C String_t* _stringLiteral0ACD542E0A3C9F6F5F927608EB8D67601FB1F06C;
IL2CPP_EXTERN_C String_t* _stringLiteral0CECB4252188823B622C9B595E368C07831C1FA9;
IL2CPP_EXTERN_C String_t* _stringLiteral101B3C75A51196AFDCA86EB43BB5855E80AA199D;
IL2CPP_EXTERN_C String_t* _stringLiteral14230403A1CFC5A19F854BBF8DBA3B9A2CF7E7AF;
IL2CPP_EXTERN_C String_t* _stringLiteral14CEE6733903CF095F0E2144576E08E2EABC9277;
IL2CPP_EXTERN_C String_t* _stringLiteral1599555C091EE02EB53958FBBB14EE6BC93EB040;
IL2CPP_EXTERN_C String_t* _stringLiteral19A7034042434538838BF70971EC853B1C495314;
IL2CPP_EXTERN_C String_t* _stringLiteral19B0BF1A5CB94084D5D4B38EEC683FDF8DB6FDC3;
IL2CPP_EXTERN_C String_t* _stringLiteral1EEC7A46AB1FF146779BA52B5BCAF9EE5C677E31;
IL2CPP_EXTERN_C String_t* _stringLiteral25170142FB4F3488DD4A97779A090DDE52AC8358;
IL2CPP_EXTERN_C String_t* _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2;
IL2CPP_EXTERN_C String_t* _stringLiteral37EE95486CB11E75528EB47FCD56D907FBE6F34C;
IL2CPP_EXTERN_C String_t* _stringLiteral4690523A3F07C01F5A658C98771DE79551536F47;
IL2CPP_EXTERN_C String_t* _stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8;
IL2CPP_EXTERN_C String_t* _stringLiteral52C87AE284E4E522A650221F2C4D41E4C9790B61;
IL2CPP_EXTERN_C String_t* _stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382;
IL2CPP_EXTERN_C String_t* _stringLiteral64888CD5821707061DDFA24950B80AEF7D15319D;
IL2CPP_EXTERN_C String_t* _stringLiteral6FC2A08F30023C6460F14108C58D275A5F58ED73;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
IL2CPP_EXTERN_C String_t* _stringLiteral77B5FAF23AFEE6B8E228BD4414C16F21E192E810;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5D7630CEB63535569DC2F806E2D2E580AB463C;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4162EFF5CAB0D794CB0E5966FF20B269E903EA;
IL2CPP_EXTERN_C String_t* _stringLiteral930666AA55A409F0C125598AF425653A0FDF4C32;
IL2CPP_EXTERN_C String_t* _stringLiteral9F954BE9FD9E999DA1677DADC6D2CAB27412A282;
IL2CPP_EXTERN_C String_t* _stringLiteralA00666B082ECFBED37CF7EF580BCCF7C15F6A8FE;
IL2CPP_EXTERN_C String_t* _stringLiteralA0796E90F43FCEAA833791A89357F3DA6E4AAF4E;
IL2CPP_EXTERN_C String_t* _stringLiteralAE08318E20C8ACEB5B4568444350437DE7261C37;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13;
IL2CPP_EXTERN_C String_t* _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
IL2CPP_EXTERN_C String_t* _stringLiteralC894542CC15E7FDD0B254592D14D3E16EB7762B6;
IL2CPP_EXTERN_C String_t* _stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D26C9F26A712F62A6BE84B1E41F4C6BE837C16;
IL2CPP_EXTERN_C String_t* _stringLiteralE61A524EA8F45BE850EE16F02879615EBF327FD4;
IL2CPP_EXTERN_C String_t* _stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478;
IL2CPP_EXTERN_C String_t* _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C;
IL2CPP_EXTERN_C String_t* _stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991;
IL2CPP_EXTERN_C String_t* _stringLiteralFE004A5E158484C188AA92B5BB521E3CD282D19F;
IL2CPP_EXTERN_C const RuntimeMethod* SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SM2Engine_Init_mBD3781066E335AD062E33B2CD247BF73344EFD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SM4Engine_Init_m673CF499E18727327042EA26212D116998606B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SM4Engine_ProcessBlock_mA0EEA5203EA853DAD5942145977C45A31AC9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkipjackEngine_Init_mD285CB99F7D30692EB97953905A79DF0F6002EEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkipjackEngine_ProcessBlock_m74D4B3826DD77254A994BD4294B16C44C6CCB51E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeaEngine_Init_m4869AF2806F31B9ED0A0CF6B78D1D7ACE569A2B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TeaEngine_ProcessBlock_m48DA047CE522F2D72642708600393998381E9E94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_DecryptBlock_mEC7C7B885524F34A83C73C5A07036F5303EC6915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_EncryptBlock_m45131977AD8A305EB64A5B0832DE80924FAE1733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish256Cipher_DecryptBlock_m2585E023639C6D99B0F5DD370D35BD82AF899B83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish256Cipher_EncryptBlock_m767957CAE69732ABF00E3F77912A82B9A4FF9CD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_DecryptBlock_m2D24BF5CDE7E08FA3B890BF57BDC0DD4A7D39E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_EncryptBlock_m431B4B312ABCEF5FFFCCF1C97D74C2679EE0992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_ProcessBlock_m16221E90ACE95768F4117AB4B44CAE2C30504EBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreefishEngine__ctor_m67C5C61065D6F10E0AA06D334C2E48034DF2EA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TnepresEngine_MakeWorkingKey_mA88B6D9DC946D3993075A7FDB6A2F002214EC604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_Init_m657A3D704EF33BC7E5F2876E256B9463E65CAA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_ProcessBlock_m55BCF5286E04760E20413E196EB75958D7BEB852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VmpcEngine_Init_mBDC9CEB8109C24C8E2DC75F83A7D462255C183CD_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct AbstractECMultiplier_tD573C05A87A7E675DFEA5CF160AC50DC426BA681  : public RuntimeObject
{
};
struct AsymmetricKeyParameter_t9134C4F441DBDCE2DEA38C294FA2E337628AA552  : public RuntimeObject
{
	bool ___privateKey;
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
struct ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231  : public RuntimeObject
{
	ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ___curve;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed;
	ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___g;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___n;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___h;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___hInv;
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
struct GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf;
	int32_t ___xBufOff;
	int64_t ___byteCount;
};
struct KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key;
};
struct ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384  : public RuntimeObject
{
	RuntimeObject* ___parameters;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv;
};
struct ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7  : public RuntimeObject
{
	RuntimeObject* ___parameters;
	SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___random;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E  : public RuntimeObject
{
	RuntimeObject* ___mDigest;
	bool ___mForEncryption;
	ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* ___mECKey;
	ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* ___mECParams;
	int32_t ___mCurveLength;
	SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ___mRandom;
};
struct SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rk;
};
struct SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112  : public RuntimeObject
{
	bool ___encrypting;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___wKey;
	int32_t ___X0;
	int32_t ___X1;
	int32_t ___X2;
	int32_t ___X3;
};
struct SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key1;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___key3;
	bool ___encrypting;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF  : public RuntimeObject
{
	uint32_t ____a;
	uint32_t ____b;
	uint32_t ____c;
	uint32_t ____d;
	bool ____initialised;
	bool ____forEncryption;
};
struct ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC  : public RuntimeObject
{
	int32_t ___blocksizeBytes;
	int32_t ___blocksizeWords;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___currentBlock;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw;
	ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* ___cipher;
	bool ___forEncryption;
};
struct TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tweak;
	KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* ___key;
};
struct TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD  : public RuntimeObject
{
	bool ___encrypting;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS1;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSubKeys;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSBox;
	int32_t ___k64Cnt;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey;
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
struct VmpcEngine_t86783A3D1455626C4B3DCF59D94F0BF9B3CB681C  : public RuntimeObject
{
	uint8_t ___n;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P;
	uint8_t ___s;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingIV;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey;
};
struct ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747  : public RuntimeObject
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE  : public AsymmetricKeyParameter_t9134C4F441DBDCE2DEA38C294FA2E337628AA552
{
	String_t* ___algorithm;
	ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* ___parameters;
	DerObjectIdentifier_tA504C861750EFDCE8F414B29A46C558F1E4D4BD9* ___publicKeyParamSet;
};
struct FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902  : public AbstractECMultiplier_tD573C05A87A7E675DFEA5CF160AC50DC426BA681
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SM3Digest_t183E330F597B8D4496163054F79D647449092E00  : public GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___V;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___inwords;
	int32_t ___xOff;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___W;
};
struct SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	RuntimeObject* ___generator;
};
struct TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743  : public SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112
{
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
struct Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506  : public ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747
{
};
struct Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27  : public ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747
{
};
struct Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849  : public ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747
{
};
struct ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD  : public ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE
{
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___d;
};
struct ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B  : public ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE
{
	ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___q;
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
struct CryptoException_t540482092A8B85CB71B425277C47F24D8C20D349  : public Exception_t
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251  : public CryptoException_t540482092A8B85CB71B425277C47F24D8C20D349
{
};
struct InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404  : public CryptoException_t540482092A8B85CB71B425277C47F24D8C20D349
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Sbox;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___CK;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___FK;
};
struct SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_StaticFields
{
	int32_t ___BlockSize;
};
struct SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___ftable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD9;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD17;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD5;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD3;
};
struct TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields
{
	ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* ___P;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___algorithms;
};
struct SM3Digest_t183E330F597B8D4496163054F79D647449092E00_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___T;
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
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
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
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638  : public RuntimeArray
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
	inline uint8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5 (KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, String_t* ___3_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, String_t* ___3_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_G_m6D4F722A024D9B35F7DBC2AD3CA67B1DE74C541B (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, int32_t ___0_k, int32_t ___1_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_H_m37B6D7B18CFA444C76BAE4DD3103934D4D01A90C (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, int32_t ___0_k, int32_t ___1_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest__ctor_m95C3E5DE913191266CB039DD72EBAB1B59C9263B (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine__ctor_m3177A39E90B088011B4A0C602FDA2DA603E2657C (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_m3706EE54311F6BD833CB80C71C1C18BD2D48E227_inline (ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* ECKeyParameters_get_Parameters_m72AA4614CDB36BF23893970E69783513B829BDA6_inline (ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECPublicKeyParameters_get_Q_m73C4EFFB0C0E04DFE1C4FAD76FCC08291ACFD7E8_inline (ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECDomainParameters_get_H_m7927A83A1128D9A231ED72325DC76FE3B50FF553_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC (ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ParametersWithRandom_get_Random_mEA11E3BF8C0CEAD478D02EE8BD106BC9A6BC9C5E_inline (ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ECDomainParameters_get_Curve_mB10871B6681736FE18CD7C91D7E135395D32E623_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_Encrypt_m4BD2633FBA351F4772F9CF8B622CF670765F201A (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedPointCombMultiplier__ctor_mF6FF1308D0C5F9EC3A779976BAE2295DC8A6E4E3 (FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* SM2Engine_NextK_m151328D30F29D64CF9C54593D3D27AA521548968 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECDomainParameters_get_G_m168D02E316313C80F26DAC3F8CB67E8F8C613D86_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Kdf_m9E586D80F4C365ADD4FAAA1F54F5E9C49C087FA7 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___1_c1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_encData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SM2Engine_NotEncrypted_m4AD1189FECEBE3B6366F5F4D70B1F47A3AD6B9C0 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_inOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DigestUtilities_DoFinal_mACA582EC7255EEA9FA9074BD481290544B78167B (RuntimeObject* ___0_digest, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_ConcatenateAll_mE5ECBC80ABB913D26B1A18E1552CFFAFF89B17A7 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_vs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCipherTextException__ctor_m2085540DA711A26F169A56E49C5F0F36435B77E9 (InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECPrivateKeyParameters_get_D_m519EB228A8E14620BD059187CAC803C94AA09B80_inline (ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_m2AB9DAE0F764AC3D4DB8124476A003327A090FC9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, uint8_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Xor_m832C50925B3C5CC66990FE276F5679E3048F5E20 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_kdfOut, int32_t ___2_dOff, int32_t ___3_dRemaining, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECDomainParameters_get_N_mF546E85B2444F37ECABCE880596B293F6E98EA0A_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_BitLength_m290E225C377B0A19E6B9B644F15A83EF92FB87E5 (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mEFB2C55989F98B6419177D303BA633734B0E580F (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, int32_t ___0_sizeInBits, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___1_random, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigInteger_get_SignValue_mD9C3B0BA0C5D51C139AF2380358D608DB4CFC16F_inline (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_m201F16A26E0FB9676E7184CCAA410AC13BB00031 (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* __this, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E (uint32_t ___0_i, int32_t ___1_distance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_tau_mD7B305CC5EE7FF9E5344DE9B5FF3AD71417E9835 (uint32_t ___0_A, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_L_ap_mB32C4F2D4E783853371203B8268F83F8CE62A50A (uint32_t ___0_B, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, uint32_t ___0_Z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_L_mBDBC3D6621C33DE0C06DC7629F3160D0B9559A12 (uint32_t ___0_B, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine_ExpandKey_m51540329CD2335767F3FF512449781761956CDD3 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, bool ___0_forEncryption, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425 (uint32_t ___0_Z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_setKey_m7E612BEEAFCFC5F18FDFBAABAC8F1E3A81834D67 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_decryptBlock_m014D246CBA7E26B4C39167A999CC8AAB30F55E82 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_encryptBlock_mBD3FEF30F2DA99C6832321A4D7162D81B871C482 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher__ctor_mFAC4FD5F04BC1BF3E51B29BB4615C8DDDFD93EC0 (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher__ctor_m7FD107C58329018301B495FBE359BA679DD0A451 (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher__ctor_m937D03ED4ADD92C0FFFAA69B1C932075428F4B50 (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* TweakableBlockCipherParameters_get_Key_m9532CACCD9CFE5FBA4EC3613A960C9EEDB7F0626_inline (TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TweakableBlockCipherParameters_get_Tweak_m76D8F6B45EBE3419E4831A7E6E0A50898BB9BEC3_inline (TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_m66861B6AC30D5EE08ED8F6F0679628581E0CA7AA (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, bool ___0_forEncryption, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_key, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_tweak, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_tweak, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374 (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_inWords, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3 (uint64_t ___0_word, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083 (ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1 (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3 (int32_t ___0_x, int32_t ___1_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686 (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__ctor_m8E2575758EAF86D04B4A066F4536CC3294422DAC (SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_mDD7023B922F24C22EFDB97FDA279B5D255674663 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_m187681AC069E712FDBC269EFD570E7FB537BB7A3 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_mCE0387ED1F262DD20EA7F28DEEB333A8BCC18655 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_mFA996A8B8A641EA807D6E60D63D563A258CAA2E8 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, int32_t ___1_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_m64EF5D08A927C8453D3070AFD7673675C1DBA7F8 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_k0, int32_t ___1_k1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_m74A40A090924733C95B91C8DCB62A4885AC5740A (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_k32, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_inData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, int32_t ___2_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_m2FCAF8D8819CB0D1545B85487C1EF2FA58CB761E (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m0205BFCE368515EA75DECAFE7C37FE25747E7C54 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mE0BC0E375CF661A5CB87B76CDBE421CFF0A80A37 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m0044CEDD1A2B0E56705857793C57EDAB5B7F00A0_inline (ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithIV_GetIV_mA615755F89AFF7920931F6FF3C0C18BB677C1EC4 (ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine_Init_mD285CB99F7D30692EB97953905A79DF0F6002EEB (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_0, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52C87AE284E4E522A650221F2C4D41E4C9790B61)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkipjackEngine_Init_mD285CB99F7D30692EB97953905A79DF0F6002EEB_RuntimeMethod_var)));
	}

IL_001e:
	{
		RuntimeObject* L_5 = ___1_parameters;
		NullCheck(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_5, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_5, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_6;
		bool L_7 = ___0_forEncryption;
		__this->___encrypting = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key0), (void*)L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key1), (void*)L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key2), (void*)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___key3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key3), (void*)L_11);
		V_1 = 0;
		goto IL_00cb;
	}

IL_0069:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___key0;
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_15, 4))%((int32_t)10)));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)((int32_t)((int32_t)L_17&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___key1;
		int32_t L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, 4)), 1))%((int32_t)10)));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)((int32_t)L_23&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___key2;
		int32_t L_25 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_27, 4)), 2))%((int32_t)10)));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (int32_t)((int32_t)((int32_t)L_29&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___key3;
		int32_t L_31 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_33, 4)), 3))%((int32_t)10)));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)((int32_t)L_35&((int32_t)255))));
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00cb:
	{
		int32_t L_37 = V_1;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)32))))
		{
			goto IL_0069;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkipjackEngine_get_AlgorithmName_m373EB628F2C7CBABDD26395EF002AFB189F7F608 (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64888CD5821707061DDFA24950B80AEF7D15319D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral64888CD5821707061DDFA24950B80AEF7D15319D;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkipjackEngine_get_IsPartialBlockOkay_mFB04B08F596C455D90BA30ED4BE4BD730B9F1E57 (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_GetBlockSize_m51BCBA04297F72C464CE1100E733618C564C9A60 (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_ProcessBlock_m74D4B3826DD77254A994BD4294B16C44C6CCB51E (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___key1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3D26C9F26A712F62A6BE84B1E41F4C6BE837C16)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkipjackEngine_ProcessBlock_m74D4B3826DD77254A994BD4294B16C44C6CCB51E_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_2, L_3, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_output;
		int32_t L_5 = ___3_outOff;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_4, L_5, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->___encrypting;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_input;
		int32_t L_8 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_output;
		int32_t L_10 = ___3_outOff;
		int32_t L_11;
		L_11 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(16, __this, L_7, L_8, L_9, L_10);
		goto IL_0050;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
		int32_t L_13 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_output;
		int32_t L_15 = ___3_outOff;
		int32_t L_16;
		L_16 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17, __this, L_12, L_13, L_14, L_15);
	}

IL_0050:
	{
		return 8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine_Reset_m95B2E9C4CE21F9C9381F32A9BE421C8788D3341E (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_G_m6D4F722A024D9B35F7DBC2AD3CA67B1DE74C541B (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, int32_t ___0_k, int32_t ___1_w, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___1_w;
		V_0 = ((int32_t)(((int32_t)(L_0>>8))&((int32_t)255)));
		int32_t L_1 = ___1_w;
		V_1 = ((int32_t)(L_1&((int32_t)255)));
		il2cpp_codegen_runtime_class_init_inline(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___key0;
		int32_t L_5 = ___0_k;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		int32_t L_8 = ((int32_t)(L_3^L_7));
		int16_t L_9 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		V_2 = ((int32_t)((int32_t)L_9^L_10));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___key1;
		int32_t L_14 = ___0_k;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		int32_t L_17 = ((int32_t)(L_12^L_16));
		int16_t L_18 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_1;
		V_3 = ((int32_t)((int32_t)L_18^L_19));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable;
		int32_t L_21 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___key2;
		int32_t L_23 = ___0_k;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		int32_t L_26 = ((int32_t)(L_21^L_25));
		int16_t L_27 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = V_2;
		V_4 = ((int32_t)((int32_t)L_27^L_28));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___key3;
		int32_t L_32 = ___0_k;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		int32_t L_35 = ((int32_t)(L_30^L_34));
		int16_t L_36 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = V_3;
		V_5 = ((int32_t)((int32_t)L_36^L_37));
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(L_38<<8)), L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_EncryptBlock_m5F075767760E4D648451CB67053510B24FD234B5 (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
		int32_t L_5 = ___1_inOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<8)), ((int32_t)((int32_t)L_7&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
		int32_t L_13 = ___1_inOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_11<<8)), ((int32_t)((int32_t)L_15&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_input;
		int32_t L_17 = ___1_inOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_input;
		int32_t L_21 = ___1_inOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_19<<8)), ((int32_t)((int32_t)L_23&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_input;
		int32_t L_25 = ___1_inOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___0_input;
		int32_t L_29 = ___1_inOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_27<<8)), ((int32_t)((int32_t)L_31&((int32_t)255)))));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0056:
	{
		V_6 = 0;
		goto IL_0082;
	}

IL_005b:
	{
		int32_t L_32 = V_3;
		V_7 = L_32;
		int32_t L_33 = V_2;
		V_3 = L_33;
		int32_t L_34 = V_1;
		V_2 = L_34;
		int32_t L_35 = V_4;
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = SkipjackEngine_G_m6D4F722A024D9B35F7DBC2AD3CA67B1DE74C541B(__this, L_35, L_36, NULL);
		V_1 = L_37;
		int32_t L_38 = V_1;
		int32_t L_39 = V_7;
		int32_t L_40 = V_4;
		V_0 = ((int32_t)(((int32_t)(L_38^L_39))^((int32_t)il2cpp_codegen_add(L_40, 1))));
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0082:
	{
		int32_t L_43 = V_6;
		if ((((int32_t)L_43) < ((int32_t)8)))
		{
			goto IL_005b;
		}
	}
	{
		V_8 = 0;
		goto IL_00af;
	}

IL_008c:
	{
		int32_t L_44 = V_3;
		int32_t L_45 = V_2;
		V_3 = L_45;
		int32_t L_46 = V_0;
		int32_t L_47 = V_1;
		int32_t L_48 = V_4;
		V_2 = ((int32_t)(((int32_t)(L_46^L_47))^((int32_t)il2cpp_codegen_add(L_48, 1))));
		int32_t L_49 = V_4;
		int32_t L_50 = V_0;
		int32_t L_51;
		L_51 = SkipjackEngine_G_m6D4F722A024D9B35F7DBC2AD3CA67B1DE74C541B(__this, L_49, L_50, NULL);
		V_1 = L_51;
		V_0 = L_44;
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00af:
	{
		int32_t L_54 = V_8;
		if ((((int32_t)L_54) < ((int32_t)8)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00ba:
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) < ((int32_t)2)))
		{
			goto IL_0056;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___2_outBytes;
		int32_t L_58 = ___3_outOff;
		int32_t L_59 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_59>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___2_outBytes;
		int32_t L_61 = ___3_outOff;
		int32_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 1))), (uint8_t)((int32_t)(uint8_t)L_62));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___2_outBytes;
		int32_t L_64 = ___3_outOff;
		int32_t L_65 = V_1;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_65>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___2_outBytes;
		int32_t L_67 = ___3_outOff;
		int32_t L_68 = V_1;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_67, 3))), (uint8_t)((int32_t)(uint8_t)L_68));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___2_outBytes;
		int32_t L_70 = ___3_outOff;
		int32_t L_71 = V_2;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_70, 4))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_71>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___2_outBytes;
		int32_t L_73 = ___3_outOff;
		int32_t L_74 = V_2;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_73, 5))), (uint8_t)((int32_t)(uint8_t)L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___2_outBytes;
		int32_t L_76 = ___3_outOff;
		int32_t L_77 = V_3;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 6))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_77>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___2_outBytes;
		int32_t L_79 = ___3_outOff;
		int32_t L_80 = V_3;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_79, 7))), (uint8_t)((int32_t)(uint8_t)L_80));
		return 8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_H_m37B6D7B18CFA444C76BAE4DD3103934D4D01A90C (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, int32_t ___0_k, int32_t ___1_w, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___1_w;
		V_0 = ((int32_t)(L_0&((int32_t)255)));
		int32_t L_1 = ___1_w;
		V_1 = ((int32_t)(((int32_t)(L_1>>8))&((int32_t)255)));
		il2cpp_codegen_runtime_class_init_inline(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___key3;
		int32_t L_5 = ___0_k;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		int32_t L_8 = ((int32_t)(L_3^L_7));
		int16_t L_9 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		V_2 = ((int32_t)((int32_t)L_9^L_10));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___key2;
		int32_t L_14 = ___0_k;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		int32_t L_17 = ((int32_t)(L_12^L_16));
		int16_t L_18 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_1;
		V_3 = ((int32_t)((int32_t)L_18^L_19));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable;
		int32_t L_21 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___key1;
		int32_t L_23 = ___0_k;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		int32_t L_26 = ((int32_t)(L_21^L_25));
		int16_t L_27 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = V_2;
		V_4 = ((int32_t)((int32_t)L_27^L_28));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = ((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___key0;
		int32_t L_32 = ___0_k;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		int32_t L_35 = ((int32_t)(L_30^L_34));
		int16_t L_36 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = V_3;
		int32_t L_38 = V_4;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_36^L_37))<<8)), L_38));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkipjackEngine_DecryptBlock_m8647B93B321D45E77346A05A051E461DC901ADEB (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
		int32_t L_5 = ___1_inOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<8)), ((int32_t)((int32_t)L_7&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
		int32_t L_13 = ___1_inOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_11<<8)), ((int32_t)((int32_t)L_15&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_input;
		int32_t L_17 = ___1_inOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_input;
		int32_t L_21 = ___1_inOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_19<<8)), ((int32_t)((int32_t)L_23&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_input;
		int32_t L_25 = ___1_inOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___0_input;
		int32_t L_29 = ___1_inOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_27<<8)), ((int32_t)((int32_t)L_31&((int32_t)255)))));
		V_4 = ((int32_t)31);
		V_5 = 0;
		goto IL_00bb;
	}

IL_0057:
	{
		V_6 = 0;
		goto IL_0083;
	}

IL_005c:
	{
		int32_t L_32 = V_2;
		V_7 = L_32;
		int32_t L_33 = V_3;
		V_2 = L_33;
		int32_t L_34 = V_0;
		V_3 = L_34;
		int32_t L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37;
		L_37 = SkipjackEngine_H_m37B6D7B18CFA444C76BAE4DD3103934D4D01A90C(__this, L_35, L_36, NULL);
		V_0 = L_37;
		int32_t L_38 = V_0;
		int32_t L_39 = V_7;
		int32_t L_40 = V_4;
		V_1 = ((int32_t)(((int32_t)(L_38^L_39))^((int32_t)il2cpp_codegen_add(L_40, 1))));
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0083:
	{
		int32_t L_43 = V_6;
		if ((((int32_t)L_43) < ((int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		V_8 = 0;
		goto IL_00b0;
	}

IL_008d:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		V_2 = L_45;
		int32_t L_46 = V_1;
		int32_t L_47 = V_0;
		int32_t L_48 = V_4;
		V_3 = ((int32_t)(((int32_t)(L_46^L_47))^((int32_t)il2cpp_codegen_add(L_48, 1))));
		int32_t L_49 = V_4;
		int32_t L_50 = V_1;
		int32_t L_51;
		L_51 = SkipjackEngine_H_m37B6D7B18CFA444C76BAE4DD3103934D4D01A90C(__this, L_49, L_50, NULL);
		V_0 = L_51;
		V_1 = L_44;
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		int32_t L_53 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00b0:
	{
		int32_t L_54 = V_8;
		if ((((int32_t)L_54) < ((int32_t)8)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00bb:
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) < ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___2_outBytes;
		int32_t L_58 = ___3_outOff;
		int32_t L_59 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_59>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___2_outBytes;
		int32_t L_61 = ___3_outOff;
		int32_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 1))), (uint8_t)((int32_t)(uint8_t)L_62));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___2_outBytes;
		int32_t L_64 = ___3_outOff;
		int32_t L_65 = V_1;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_65>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___2_outBytes;
		int32_t L_67 = ___3_outOff;
		int32_t L_68 = V_1;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_67, 3))), (uint8_t)((int32_t)(uint8_t)L_68));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___2_outBytes;
		int32_t L_70 = ___3_outOff;
		int32_t L_71 = V_2;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_70, 4))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_71>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___2_outBytes;
		int32_t L_73 = ___3_outOff;
		int32_t L_74 = V_2;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_73, 5))), (uint8_t)((int32_t)(uint8_t)L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___2_outBytes;
		int32_t L_76 = ___3_outOff;
		int32_t L_77 = V_3;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 6))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_77>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___2_outBytes;
		int32_t L_79 = ___3_outOff;
		int32_t L_80 = V_3;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_79, 7))), (uint8_t)((int32_t)(uint8_t)L_80));
		return 8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine__ctor_mC2683B844B26C570432D0987F52BA9EB5A933E3D (SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipjackEngine__cctor_mC27FF03CCF5BD33DF04EE1258EB74C269AE34AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____9AC0C32A73444A448170AE1EFE7F69A0D3A7F6E1335FA0E112D9F96EB7EE3CC7_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____9AC0C32A73444A448170AE1EFE7F69A0D3A7F6E1335FA0E112D9F96EB7EE3CC7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_StaticFields*)il2cpp_codegen_static_fields_for(SkipjackEngine_tD4D2738D60279CA20F15BDD8010902B8655BB9A4_il2cpp_TypeInfo_var))->___ftable), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine__ctor_m258B8BB57AE4A1B083A4C8ACFA6CF9F78D16AE25 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_0 = (SM3Digest_t183E330F597B8D4496163054F79D647449092E00*)il2cpp_codegen_object_new(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		SM3Digest__ctor_m95C3E5DE913191266CB039DD72EBAB1B59C9263B(L_0, NULL);
		SM2Engine__ctor_m3177A39E90B088011B4A0C602FDA2DA603E2657C(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine__ctor_m3177A39E90B088011B4A0C602FDA2DA603E2657C (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_digest;
		__this->___mDigest = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDigest), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Init_mBD3781066E335AD062E33B2CD247BF73344EFD5C (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, bool ___0_forEncryption, RuntimeObject* ___1_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* V_0 = NULL;
	{
		bool L_0 = ___0_forEncryption;
		__this->___mForEncryption = L_0;
		bool L_1 = ___0_forEncryption;
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject* L_2 = ___1_param;
		V_0 = ((ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7*)CastclassClass((RuntimeObject*)L_2, ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7_il2cpp_TypeInfo_var));
		ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ParametersWithRandom_get_Parameters_m3706EE54311F6BD833CB80C71C1C18BD2D48E227_inline(L_3, NULL);
		__this->___mECKey = ((ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE*)CastclassClass((RuntimeObject*)L_4, ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mECKey), (void*)((ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE*)CastclassClass((RuntimeObject*)L_4, ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var)));
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_5 = __this->___mECKey;
		NullCheck(L_5);
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_6;
		L_6 = ECKeyParameters_get_Parameters_m72AA4614CDB36BF23893970E69783513B829BDA6_inline(L_5, NULL);
		__this->___mECParams = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mECParams), (void*)L_6);
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_7 = __this->___mECKey;
		NullCheck(((ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B*)CastclassClass((RuntimeObject*)L_7, ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var)));
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_8;
		L_8 = ECPublicKeyParameters_get_Q_m73C4EFFB0C0E04DFE1C4FAD76FCC08291ACFD7E8_inline(((ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B*)CastclassClass((RuntimeObject*)L_7, ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var)), NULL);
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_9 = __this->___mECParams;
		NullCheck(L_9);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_10;
		L_10 = ECDomainParameters_get_H_m7927A83A1128D9A231ED72325DC76FE3B50FF553_inline(L_9, NULL);
		NullCheck(L_8);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_11;
		L_11 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(33, L_8, L_10);
		NullCheck(L_11);
		bool L_12;
		L_12 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(L_11, NULL);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B5FAF23AFEE6B8E228BD4414C16F21E192E810)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM2Engine_Init_mBD3781066E335AD062E33B2CD247BF73344EFD5C_RuntimeMethod_var)));
	}

IL_0065:
	{
		ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* L_14 = V_0;
		NullCheck(L_14);
		SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* L_15;
		L_15 = ParametersWithRandom_get_Random_mEA11E3BF8C0CEAD478D02EE8BD106BC9A6BC9C5E_inline(L_14, NULL);
		__this->___mRandom = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRandom), (void*)L_15);
		goto IL_0090;
	}

IL_0073:
	{
		RuntimeObject* L_16 = ___1_param;
		__this->___mECKey = ((ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE*)CastclassClass((RuntimeObject*)L_16, ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mECKey), (void*)((ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE*)CastclassClass((RuntimeObject*)L_16, ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE_il2cpp_TypeInfo_var)));
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_17 = __this->___mECKey;
		NullCheck(L_17);
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_18;
		L_18 = ECKeyParameters_get_Parameters_m72AA4614CDB36BF23893970E69783513B829BDA6_inline(L_17, NULL);
		__this->___mECParams = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mECParams), (void*)L_18);
	}

IL_0090:
	{
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_19 = __this->___mECParams;
		NullCheck(L_19);
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_20;
		L_20 = ECDomainParameters_get_Curve_mB10871B6681736FE18CD7C91D7E135395D32E623_inline(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(4, L_20);
		__this->___mCurveLength = ((int32_t)(((int32_t)il2cpp_codegen_add(L_21, 7))/8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_ProcessBlock_mD10F77A30431FAE9CAFE251D7849D13F7A367D8B (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___mForEncryption;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = SM2Engine_Encrypt_m4BD2633FBA351F4772F9CF8B622CF670765F201A(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_input;
		int32_t L_6 = ___1_inOff;
		int32_t L_7 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0(__this, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SM2Engine_CreateBasePointMultiplier_m3EE8BB269C2141396EBD0A88143547F8B7822CD1 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902* L_0 = (FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902*)il2cpp_codegen_object_new(FixedPointCombMultiplier_tA502AA9A06A8622897BCB77C817C262100629902_il2cpp_TypeInfo_var);
		FixedPointCombMultiplier__ctor_mF6FF1308D0C5F9EC3A779976BAE2295DC8A6E4E3(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_Encrypt_m4BD2633FBA351F4772F9CF8B622CF670765F201A (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECMultiplier_tF42F2485D618A2ACA7BFFE0E9F60A9D8449F2C2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* V_5 = NULL;
	{
		int32_t L_0 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, __this);
		V_1 = L_6;
	}

IL_001a:
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_7;
		L_7 = SM2Engine_NextK_m151328D30F29D64CF9C54593D3D27AA521548968(__this, NULL);
		V_5 = L_7;
		RuntimeObject* L_8 = V_1;
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_9 = __this->___mECParams;
		NullCheck(L_9);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_10;
		L_10 = ECDomainParameters_get_G_m168D02E316313C80F26DAC3F8CB67E8F8C613D86_inline(L_9, NULL);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_11 = V_5;
		NullCheck(L_8);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_12;
		L_12 = InterfaceFuncInvoker2< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(0, ECMultiplier_tF42F2485D618A2ACA7BFFE0E9F60A9D8449F2C2F_il2cpp_TypeInfo_var, L_8, L_10, L_11);
		NullCheck(L_12);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_13;
		L_13 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(17, L_12);
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(26, L_13, (bool)0);
		V_2 = L_14;
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_15 = __this->___mECKey;
		NullCheck(((ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B*)CastclassClass((RuntimeObject*)L_15, ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var)));
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_16;
		L_16 = ECPublicKeyParameters_get_Q_m73C4EFFB0C0E04DFE1C4FAD76FCC08291ACFD7E8_inline(((ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B*)CastclassClass((RuntimeObject*)L_15, ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B_il2cpp_TypeInfo_var)), NULL);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_17 = V_5;
		NullCheck(L_16);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_18;
		L_18 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(33, L_16, L_17);
		NullCheck(L_18);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_19;
		L_19 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(17, L_18);
		V_3 = L_19;
		RuntimeObject* L_20 = __this->___mDigest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		SM2Engine_Kdf_m9E586D80F4C365ADD4FAAA1F54F5E9C49C087FA7(__this, L_20, L_21, L_22, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_input;
		int32_t L_25 = ___1_inOff;
		bool L_26;
		L_26 = SM2Engine_NotEncrypted_m4AD1189FECEBE3B6366F5F4D70B1F47A3AD6B9C0(__this, L_23, L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_27 = __this->___mDigest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_28 = V_3;
		NullCheck(L_28);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_29;
		L_29 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9, L_28);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_27, L_29, NULL);
		RuntimeObject* L_30 = __this->___mDigest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___0_input;
		int32_t L_32 = ___1_inOff;
		int32_t L_33 = ___2_inLen;
		NullCheck(L_30);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_30, L_31, L_32, L_33);
		RuntimeObject* L_34 = __this->___mDigest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_35 = V_3;
		NullCheck(L_35);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_36;
		L_36 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_35);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_34, L_36, NULL);
		RuntimeObject* L_37 = __this->___mDigest;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = DigestUtilities_DoFinal_mACA582EC7255EEA9FA9074BD481290544B78167B(L_37, NULL);
		V_4 = L_38;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_39 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_40 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_2;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_41);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_42 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_0;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_43);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_44 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_4;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_45);
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = Arrays_ConcatenateAll_mE5ECBC80ABB913D26B1A18E1552CFFAFF89B17A7(L_44, NULL);
		return L_46;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___mCurveLength;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1)));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_6 = __this->___mECParams;
		NullCheck(L_6);
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_7;
		L_7 = ECDomainParameters_get_Curve_mB10871B6681736FE18CD7C91D7E135395D32E623_inline(L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_7);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_9;
		L_9 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(37, L_7, L_8);
		V_1 = L_9;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_10 = V_1;
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_11 = __this->___mECParams;
		NullCheck(L_11);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_12;
		L_12 = ECDomainParameters_get_H_m7927A83A1128D9A231ED72325DC76FE3B50FF553_inline(L_11, NULL);
		NullCheck(L_10);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_13;
		L_13 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(33, L_10, L_12);
		NullCheck(L_13);
		bool L_14;
		L_14 = ECPoint_get_IsInfinity_m9FF1DA4C8AEBBF609F5630C24C3C478A1486C2FC(L_13, NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404* L_15 = (InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m2085540DA711A26F169A56E49C5F0F36435B77E9(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37EE95486CB11E75528EB47FCD56D907FBE6F34C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0_RuntimeMethod_var)));
	}

IL_0051:
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_16 = V_1;
		ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* L_17 = __this->___mECKey;
		NullCheck(((ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD*)CastclassClass((RuntimeObject*)L_17, ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD_il2cpp_TypeInfo_var)));
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_18;
		L_18 = ECPrivateKeyParameters_get_D_m519EB228A8E14620BD059187CAC803C94AA09B80_inline(((ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD*)CastclassClass((RuntimeObject*)L_17, ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_16);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_19;
		L_19 = VirtualFuncInvoker1< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B*, BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* >::Invoke(33, L_16, L_18);
		NullCheck(L_19);
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_20;
		L_20 = VirtualFuncInvoker0< ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* >::Invoke(17, L_19);
		V_1 = L_20;
		int32_t L_21 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23 = __this->___mDigest;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)(((RuntimeArray*)L_22)->max_length)))), L_24)));
		V_2 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_input;
		int32_t L_27 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		NullCheck(L_30);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)(((RuntimeArray*)L_28)->max_length)))), (RuntimeArray*)L_29, 0, ((int32_t)(((RuntimeArray*)L_30)->max_length)), NULL);
		RuntimeObject* L_31 = __this->___mDigest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		SM2Engine_Kdf_m9E586D80F4C365ADD4FAAA1F54F5E9C49C087FA7(__this, L_31, L_32, L_33, NULL);
		RuntimeObject* L_34 = __this->___mDigest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_35 = V_1;
		NullCheck(L_35);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_36;
		L_36 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9, L_35);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_34, L_36, NULL);
		RuntimeObject* L_37 = __this->___mDigest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		NullCheck(L_39);
		NullCheck(L_37);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_37, L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)));
		RuntimeObject* L_40 = __this->___mDigest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_41 = V_1;
		NullCheck(L_41);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_42;
		L_42 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_41);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_40, L_42, NULL);
		RuntimeObject* L_43 = __this->___mDigest;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t436A95D3DA5AF4C9FA078FB34BF40913B516A017_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = DigestUtilities_DoFinal_mACA582EC7255EEA9FA9074BD481290544B78167B(L_43, NULL);
		V_3 = L_44;
		V_4 = 0;
		V_5 = 0;
		goto IL_0108;
	}

IL_00ea:
	{
		int32_t L_45 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_3;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___0_input;
		int32_t L_51 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_0;
		NullCheck(L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_2;
		NullCheck(L_53);
		int32_t L_54 = V_5;
		NullCheck(L_50);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_51, ((int32_t)(((RuntimeArray*)L_52)->max_length)))), ((int32_t)(((RuntimeArray*)L_53)->max_length)))), L_54));
		uint8_t L_56 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_4 = ((int32_t)(L_45|((int32_t)((int32_t)L_49^(int32_t)L_56))));
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0108:
	{
		int32_t L_58 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_3;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_00ea;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		Arrays_Fill_m2AB9DAE0F764AC3D4DB8124476A003327A090FC9(L_60, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_3;
		Arrays_Fill_m2AB9DAE0F764AC3D4DB8124476A003327A090FC9(L_61, (uint8_t)0, NULL);
		int32_t L_62 = V_4;
		if (!L_62)
		{
			goto IL_0133;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_2;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var)));
		Arrays_Fill_m2AB9DAE0F764AC3D4DB8124476A003327A090FC9(L_63, (uint8_t)0, NULL);
		InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404* L_64 = (InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t69B4AA17365997BF402F22CC4D22F505E0A38404_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m2085540DA711A26F169A56E49C5F0F36435B77E9(L_64, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A4162EFF5CAB0D794CB0E5966FF20B269E903EA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM2Engine_Decrypt_mBA3DE6D37F1AF15B5E4F874700B090D6E3B207D0_RuntimeMethod_var)));
	}

IL_0133:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_2;
		return L_65;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SM2Engine_NotEncrypted_m4AD1189FECEBE3B6366F5F4D70B1F47A3AD6B9C0 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_inOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_encData;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_input;
		int32_t L_5 = ___2_inOff;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_3) == ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0014:
	{
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_encData;
		NullCheck(L_11);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Kdf_m9E586D80F4C365ADD4FAAA1F54F5E9C49C087FA7 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ___1_c1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_encData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		RuntimeObject* L_0 = ___0_digest;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(4, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		RuntimeObject* L_5 = ___0_digest;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var));
		V_4 = (RuntimeObject*)NULL;
		RuntimeObject* L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_7 = ___0_digest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_8 = ___1_c1;
		NullCheck(L_8);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_9;
		L_9 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9, L_8);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_7, L_9, NULL);
		RuntimeObject* L_10 = ___0_digest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_11 = ___1_c1;
		NullCheck(L_11);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_12;
		L_12 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_11);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_10, L_12, NULL);
		RuntimeObject* L_13 = V_3;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var, L_13);
		V_4 = L_14;
	}

IL_0045:
	{
		V_5 = 0;
		goto IL_00ae;
	}

IL_004a:
	{
		RuntimeObject* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_16 = V_3;
		RuntimeObject* L_17 = V_4;
		NullCheck(L_16);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1, IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A_il2cpp_TypeInfo_var, L_16, L_17);
		goto IL_0071;
	}

IL_0057:
	{
		RuntimeObject* L_18 = ___0_digest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_19 = ___1_c1;
		NullCheck(L_19);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_20;
		L_20 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(9, L_19);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_18, L_20, NULL);
		RuntimeObject* L_21 = ___0_digest;
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_22 = ___1_c1;
		NullCheck(L_22);
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_23;
		L_23 = VirtualFuncInvoker0< ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* >::Invoke(10, L_22);
		SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC(__this, L_21, L_23, NULL);
	}

IL_0071:
	{
		uint32_t L_24 = V_5;
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, 1));
		V_5 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_25, L_26, 0, NULL);
		RuntimeObject* L_27 = ___0_digest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_1;
		NullCheck(L_27);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_27, L_28, 0, 4);
		RuntimeObject* L_29 = ___0_digest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_29, L_30, 0);
		int32_t L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___2_encData;
		NullCheck(L_33);
		int32_t L_34 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_32, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34)), NULL);
		V_6 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___2_encData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		int32_t L_38 = V_2;
		int32_t L_39 = V_6;
		SM2Engine_Xor_m832C50925B3C5CC66990FE276F5679E3048F5E20(__this, L_36, L_37, L_38, L_39, NULL);
		int32_t L_40 = V_2;
		int32_t L_41 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, L_41));
	}

IL_00ae:
	{
		int32_t L_42 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___2_encData;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_Xor_m832C50925B3C5CC66990FE276F5679E3048F5E20 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_kdfOut, int32_t ___2_dOff, int32_t ___3_dRemaining, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		int32_t L_1 = ___2_dOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		uint8_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))));
		int32_t L_4 = *((uint8_t*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_kdfOut;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4^(int32_t)L_8)));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0019:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___3_dRemaining;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* SM2Engine_NextK_m151328D30F29D64CF9C54593D3D27AA521548968 (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* V_1 = NULL;
	{
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_0 = __this->___mECParams;
		NullCheck(L_0);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_1;
		L_1 = ECDomainParameters_get_N_mF546E85B2444F37ECABCE880596B293F6E98EA0A_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BigInteger_get_BitLength_m290E225C377B0A19E6B9B644F15A83EF92FB87E5(L_1, NULL);
		V_0 = L_2;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* L_4 = __this->___mRandom;
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_5 = (BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C*)il2cpp_codegen_object_new(BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C_il2cpp_TypeInfo_var);
		BigInteger__ctor_mEFB2C55989F98B6419177D303BA633734B0E580F(L_5, L_3, L_4, NULL);
		V_1 = L_5;
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = BigInteger_get_SignValue_mD9C3B0BA0C5D51C139AF2380358D608DB4CFC16F_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0011;
		}
	}
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_8 = V_1;
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_9 = __this->___mECParams;
		NullCheck(L_9);
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_10;
		L_10 = ECDomainParameters_get_N_mF546E85B2444F37ECABCE880596B293F6E98EA0A_inline(L_9, NULL);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = BigInteger_CompareTo_m201F16A26E0FB9676E7184CCAA410AC13BB00031(L_8, L_10, NULL);
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM2Engine_AddFieldElement_m3B4F348E6DB70C6A2973A35D95CE10D18BF413FC (SM2Engine_t453BBC6F5A46ED1654F42F264FC5EAD604DA259E* __this, RuntimeObject* ___0_digest, ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* ___1_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ECFieldElement_t3B089FBD60B20BF0A329E50C3C2858698700EA7D* L_0 = ___1_v;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(26, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = ___0_digest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_2);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_tau_mD7B305CC5EE7FF9E5344DE9B5FF3AD71417E9835 (uint32_t ___0_A, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox;
		uint32_t L_1 = ___0_A;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)((uint32_t)L_1>>((int32_t)24)));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox;
		uint32_t L_5 = ___0_A;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)(((int32_t)((uint32_t)L_5>>((int32_t)16)))&((int32_t)255)));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox;
		uint32_t L_9 = ___0_A;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)(((int32_t)((uint32_t)L_9>>8))&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox;
		uint32_t L_13 = ___0_A;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)((int32_t)L_13&((int32_t)255)));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_2;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)24)))|((int32_t)((int32_t)L_16<<((int32_t)16)))))|((int32_t)((int32_t)L_17<<8))))|(int32_t)L_18));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_L_ap_mB32C4F2D4E783853371203B8268F83F8CE62A50A (uint32_t ___0_B, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_B;
		uint32_t L_1 = ___0_B;
		uint32_t L_2;
		L_2 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_1, ((int32_t)13), NULL);
		uint32_t L_3 = ___0_B;
		uint32_t L_4;
		L_4 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_3, ((int32_t)23), NULL);
		return ((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_2))^(int32_t)L_4));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, uint32_t ___0_Z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_Z;
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = SM4Engine_tau_mD7B305CC5EE7FF9E5344DE9B5FF3AD71417E9835(L_0, NULL);
		uint32_t L_2;
		L_2 = SM4Engine_L_ap_mB32C4F2D4E783853371203B8268F83F8CE62A50A(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine_ExpandKey_m51540329CD2335767F3FF512449781761956CDD3 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, bool ___0_forEncryption, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_key;
		uint32_t L_1;
		L_1 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_key;
		uint32_t L_6;
		L_6 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_5, 4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK;
		NullCheck(L_7);
		int32_t L_8 = 1;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_key;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_10, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK;
		NullCheck(L_12);
		int32_t L_13 = 2;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = ((int32_t)((int32_t)L_11^(int32_t)L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___1_key;
		uint32_t L_16;
		L_16 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_15, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK;
		NullCheck(L_17);
		int32_t L_18 = 3;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int32_t)((int32_t)L_16^(int32_t)L_19));
		bool L_20 = ___0_forEncryption;
		if (!L_20)
		{
			goto IL_013e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->___rk;
		uint32_t L_22 = V_0;
		uint32_t L_23 = V_1;
		uint32_t L_24 = V_2;
		uint32_t L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		NullCheck(L_26);
		int32_t L_27 = 0;
		uint32_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		uint32_t L_29;
		L_29 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_23^(int32_t)L_24))^(int32_t)L_25))^(int32_t)L_28)), NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_22^(int32_t)L_29)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->___rk;
		uint32_t L_31 = V_1;
		uint32_t L_32 = V_2;
		uint32_t L_33 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___rk;
		NullCheck(L_34);
		int32_t L_35 = 0;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		NullCheck(L_37);
		int32_t L_38 = 1;
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint32_t L_40;
		L_40 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_32^(int32_t)L_33))^(int32_t)L_36))^(int32_t)L_39)), NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_31^(int32_t)L_40)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___rk;
		uint32_t L_42 = V_2;
		uint32_t L_43 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = __this->___rk;
		NullCheck(L_44);
		int32_t L_45 = 0;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = __this->___rk;
		NullCheck(L_47);
		int32_t L_48 = 1;
		uint32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		NullCheck(L_50);
		int32_t L_51 = 2;
		uint32_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		uint32_t L_53;
		L_53 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_43^(int32_t)L_46))^(int32_t)L_49))^(int32_t)L_52)), NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_42^(int32_t)L_53)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->___rk;
		uint32_t L_55 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = __this->___rk;
		NullCheck(L_56);
		int32_t L_57 = 0;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = __this->___rk;
		NullCheck(L_59);
		int32_t L_60 = 1;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = __this->___rk;
		NullCheck(L_62);
		int32_t L_63 = 2;
		uint32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		NullCheck(L_65);
		int32_t L_66 = 3;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		uint32_t L_68;
		L_68 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_58^(int32_t)L_61))^(int32_t)L_64))^(int32_t)L_67)), NULL);
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_55^(int32_t)L_68)));
		V_4 = 4;
		goto IL_0137;
	}

IL_00ea:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = __this->___rk;
		int32_t L_70 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = __this->___rk;
		int32_t L_72 = V_4;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 4));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = __this->___rk;
		int32_t L_76 = V_4;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_subtract(L_76, 3));
		uint32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = __this->___rk;
		int32_t L_80 = V_4;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_subtract(L_80, 2));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = __this->___rk;
		int32_t L_84 = V_4;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_subtract(L_84, 1));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		int32_t L_88 = V_4;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		uint32_t L_91;
		L_91 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_78^(int32_t)L_82))^(int32_t)L_86))^(int32_t)L_90)), NULL);
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (uint32_t)((int32_t)((int32_t)L_74^(int32_t)L_91)));
		int32_t L_92 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0137:
	{
		int32_t L_93 = V_4;
		if ((((int32_t)L_93) < ((int32_t)((int32_t)32))))
		{
			goto IL_00ea;
		}
	}
	{
		return;
	}

IL_013e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = __this->___rk;
		uint32_t L_95 = V_0;
		uint32_t L_96 = V_1;
		uint32_t L_97 = V_2;
		uint32_t L_98 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		NullCheck(L_99);
		int32_t L_100 = 0;
		uint32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		uint32_t L_102;
		L_102 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_96^(int32_t)L_97))^(int32_t)L_98))^(int32_t)L_101)), NULL);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint32_t)((int32_t)((int32_t)L_95^(int32_t)L_102)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = __this->___rk;
		uint32_t L_104 = V_1;
		uint32_t L_105 = V_2;
		uint32_t L_106 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = __this->___rk;
		NullCheck(L_107);
		int32_t L_108 = ((int32_t)31);
		uint32_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		NullCheck(L_110);
		int32_t L_111 = 1;
		uint32_t L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		uint32_t L_113;
		L_113 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_105^(int32_t)L_106))^(int32_t)L_109))^(int32_t)L_112)), NULL);
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (uint32_t)((int32_t)((int32_t)L_104^(int32_t)L_113)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = __this->___rk;
		uint32_t L_115 = V_2;
		uint32_t L_116 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = __this->___rk;
		NullCheck(L_117);
		int32_t L_118 = ((int32_t)31);
		uint32_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = __this->___rk;
		NullCheck(L_120);
		int32_t L_121 = ((int32_t)30);
		uint32_t L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		NullCheck(L_123);
		int32_t L_124 = 2;
		uint32_t L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		uint32_t L_126;
		L_126 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_116^(int32_t)L_119))^(int32_t)L_122))^(int32_t)L_125)), NULL);
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (uint32_t)((int32_t)((int32_t)L_115^(int32_t)L_126)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = __this->___rk;
		uint32_t L_128 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = __this->___rk;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)31);
		uint32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = __this->___rk;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)30);
		uint32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = __this->___rk;
		NullCheck(L_135);
		int32_t L_136 = ((int32_t)29);
		uint32_t L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		NullCheck(L_138);
		int32_t L_139 = 3;
		uint32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		uint32_t L_141;
		L_141 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_131^(int32_t)L_134))^(int32_t)L_137))^(int32_t)L_140)), NULL);
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (uint32_t)((int32_t)((int32_t)L_128^(int32_t)L_141)));
		V_5 = ((int32_t)27);
		goto IL_023c;
	}

IL_01ec:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_142 = __this->___rk;
		int32_t L_143 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_144 = __this->___rk;
		int32_t L_145 = V_5;
		NullCheck(L_144);
		int32_t L_146 = ((int32_t)il2cpp_codegen_add(L_145, 4));
		uint32_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = __this->___rk;
		int32_t L_149 = V_5;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, 3));
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = __this->___rk;
		int32_t L_153 = V_5;
		NullCheck(L_152);
		int32_t L_154 = ((int32_t)il2cpp_codegen_add(L_153, 2));
		uint32_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_156 = __this->___rk;
		int32_t L_157 = V_5;
		NullCheck(L_156);
		int32_t L_158 = ((int32_t)il2cpp_codegen_add(L_157, 1));
		uint32_t L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_160 = ((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK;
		int32_t L_161 = V_5;
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_subtract(((int32_t)31), L_161));
		uint32_t L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		uint32_t L_164;
		L_164 = SM4Engine_T_ap_m6B9B90D96CC215BD9540EDE64D62B1E0F1BD4D00(__this, ((int32_t)(((int32_t)(((int32_t)((int32_t)L_151^(int32_t)L_155))^(int32_t)L_159))^(int32_t)L_163)), NULL);
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(L_143), (uint32_t)((int32_t)((int32_t)L_147^(int32_t)L_164)));
		int32_t L_165 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_165, 1));
	}

IL_023c:
	{
		int32_t L_166 = V_5;
		if ((((int32_t)L_166) >= ((int32_t)0)))
		{
			goto IL_01ec;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_L_mBDBC3D6621C33DE0C06DC7629F3160D0B9559A12 (uint32_t ___0_B, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_B;
		uint32_t L_1 = ___0_B;
		uint32_t L_2;
		L_2 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_1, 2, NULL);
		uint32_t L_3 = ___0_B;
		uint32_t L_4;
		L_4 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_3, ((int32_t)10), NULL);
		uint32_t L_5 = ___0_B;
		uint32_t L_6;
		L_6 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_5, ((int32_t)18), NULL);
		uint32_t L_7 = ___0_B;
		uint32_t L_8;
		L_8 = Integers_RotateLeft_m93DA8278C88109CC4456037A96ED355E08A13C0E(L_7, ((int32_t)24), NULL);
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_2))^(int32_t)L_4))^(int32_t)L_6))^(int32_t)L_8));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425 (uint32_t ___0_Z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_Z;
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = SM4Engine_tau_mD7B305CC5EE7FF9E5344DE9B5FF3AD71417E9835(L_0, NULL);
		uint32_t L_2;
		L_2 = SM4Engine_L_mBDBC3D6621C33DE0C06DC7629F3160D0B9559A12(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine_Init_m673CF499E18727327042EA26212D116998606B55 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___1_parameters;
		V_0 = ((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_0, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var));
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_1 = V_0;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_3;
		L_3 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE08318E20C8ACEB5B4568444350437DE7261C37)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM4Engine_Init_m673CF499E18727327042EA26212D116998606B55_RuntimeMethod_var)));
	}

IL_0025:
	{
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(L_6, NULL);
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_0043;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19B0BF1A5CB94084D5D4B38EEC683FDF8DB6FDC3)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM4Engine_Init_m673CF499E18727327042EA26212D116998606B55_RuntimeMethod_var)));
	}

IL_0043:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___rk;
		if (L_10)
		{
			goto IL_0058;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___rk = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rk), (void*)L_11);
	}

IL_0058:
	{
		bool L_12 = ___0_forEncryption;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		SM4Engine_ExpandKey_m51540329CD2335767F3FF512449781761956CDD3(__this, L_12, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SM4Engine_get_AlgorithmName_mDECD162566C5062C641D51B498DCA0BACDAF461F (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ACD542E0A3C9F6F5F927608EB8D67601FB1F06C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0ACD542E0A3C9F6F5F927608EB8D67601FB1F06C;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SM4Engine_get_IsPartialBlockOkay_m08A8D749D873E25DA3B9EE5E9C95FF61455251B1 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SM4Engine_GetBlockSize_mA9EAD88E79912E80E11EBB8A6842B36D24544F01 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SM4Engine_ProcessBlock_mA0EEA5203EA853DAD5942145977C45A31AC9B384 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___rk;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EEC7A46AB1FF146779BA52B5BCAF9EE5C677E31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SM4Engine_ProcessBlock_mA0EEA5203EA853DAD5942145977C45A31AC9B384_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_output;
		int32_t L_5 = ___3_outOff;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_input;
		int32_t L_7 = ___1_inOff;
		uint32_t L_8;
		L_8 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_6, L_7, NULL);
		V_0 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_input;
		int32_t L_10 = ___1_inOff;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_9, ((int32_t)il2cpp_codegen_add(L_10, 4)), NULL);
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
		int32_t L_13 = ___1_inOff;
		uint32_t L_14;
		L_14 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		V_2 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_input;
		int32_t L_16 = ___1_inOff;
		uint32_t L_17;
		L_17 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_15, ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)12))), NULL);
		V_3 = L_17;
		V_4 = 0;
		goto IL_00c4;
	}

IL_005c:
	{
		uint32_t L_18 = V_0;
		uint32_t L_19 = V_1;
		uint32_t L_20 = V_2;
		uint32_t L_21 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___rk;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		il2cpp_codegen_runtime_class_init_inline(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		uint32_t L_26;
		L_26 = SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425(((int32_t)(((int32_t)(((int32_t)((int32_t)L_19^(int32_t)L_20))^(int32_t)L_21))^(int32_t)L_25)), NULL);
		V_0 = ((int32_t)((int32_t)L_18^(int32_t)L_26));
		uint32_t L_27 = V_1;
		uint32_t L_28 = V_2;
		uint32_t L_29 = V_3;
		uint32_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___rk;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		uint32_t L_35;
		L_35 = SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425(((int32_t)(((int32_t)(((int32_t)((int32_t)L_28^(int32_t)L_29))^(int32_t)L_30))^(int32_t)L_34)), NULL);
		V_1 = ((int32_t)((int32_t)L_27^(int32_t)L_35));
		uint32_t L_36 = V_2;
		uint32_t L_37 = V_3;
		uint32_t L_38 = V_0;
		uint32_t L_39 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = __this->___rk;
		int32_t L_41 = V_4;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		uint32_t L_44;
		L_44 = SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425(((int32_t)(((int32_t)(((int32_t)((int32_t)L_37^(int32_t)L_38))^(int32_t)L_39))^(int32_t)L_43)), NULL);
		V_2 = ((int32_t)((int32_t)L_36^(int32_t)L_44));
		uint32_t L_45 = V_3;
		uint32_t L_46 = V_0;
		uint32_t L_47 = V_1;
		uint32_t L_48 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = __this->___rk;
		int32_t L_50 = V_4;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		uint32_t L_53;
		L_53 = SM4Engine_T_m58E66F4FD89CC7AE8DA2EE07E729359314C97425(((int32_t)(((int32_t)(((int32_t)((int32_t)L_46^(int32_t)L_47))^(int32_t)L_48))^(int32_t)L_52)), NULL);
		V_3 = ((int32_t)((int32_t)L_45^(int32_t)L_53));
		int32_t L_54 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_54, 4));
	}

IL_00c4:
	{
		int32_t L_55 = V_4;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)32))))
		{
			goto IL_005c;
		}
	}
	{
		uint32_t L_56 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___2_output;
		int32_t L_58 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_56, L_57, L_58, NULL);
		uint32_t L_59 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___2_output;
		int32_t L_61 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_59, L_60, ((int32_t)il2cpp_codegen_add(L_61, 4)), NULL);
		uint32_t L_62 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___2_output;
		int32_t L_64 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_62, L_63, ((int32_t)il2cpp_codegen_add(L_64, 8)), NULL);
		uint32_t L_65 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___2_output;
		int32_t L_67 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_65, L_66, ((int32_t)il2cpp_codegen_add(L_67, ((int32_t)12))), NULL);
		return ((int32_t)16);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine_Reset_mC5A8275F2D72E3D78D58E92210B67FDFEED83EA0 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine__ctor_mFD69B3CC331AD41F93A9BB1C0D8639037E9B1C72 (SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM4Engine__cctor_mB70BC3777BE46885BF3C6372231945316D6D9029 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____1674D0631A2E37B60EC748BC3899FEE1550C108AF30B85CE96A70C5CA4682D03_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____874805F2B76BD7887959F02FE0B2A8C07C1E1D41F41AAD4D2AA1D0AB21A1780F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____A589B8F1C215FA773BA2724EB825E8B2D1792FB955349574454E18C63537F2A6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____1674D0631A2E37B60EC748BC3899FEE1550C108AF30B85CE96A70C5CA4682D03_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___Sbox), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____A589B8F1C215FA773BA2724EB825E8B2D1792FB955349574454E18C63537F2A6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___CK), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____874805F2B76BD7887959F02FE0B2A8C07C1E1D41F41AAD4D2AA1D0AB21A1780F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_StaticFields*)il2cpp_codegen_static_fields_for(SM4Engine_tC6B741F3B0BAB2BFD66349DFCBA1EC4211497F29_il2cpp_TypeInfo_var))->___FK), (void*)L_7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine__ctor_m0BABD07A0A06EE39927C2764B253EAF5261D0677 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____initialised = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TeaEngine_get_AlgorithmName_m986A3940A5AED7FB504406B96C397E53A2B69A5F (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0796E90F43FCEAA833791A89357F3DA6E4AAF4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA0796E90F43FCEAA833791A89357F3DA6E4AAF4E;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TeaEngine_get_IsPartialBlockOkay_mD37EB4F1A6683AD069B25B20CAA23D8DEBFAC6B3 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_GetBlockSize_mFCC3D4F91BD844138FD81810C5BF993E1CF013BD (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_Init_m4869AF2806F31B9ED0A0CF6B78D1D7ACE569A2B1 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_0, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TeaEngine_Init_m4869AF2806F31B9ED0A0CF6B78D1D7ACE569A2B1_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_5 = ___0_forEncryption;
		__this->____forEncryption = L_5;
		__this->____initialised = (bool)1;
		RuntimeObject* L_6 = ___1_parameters;
		V_0 = ((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_6, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var));
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(L_7, NULL);
		TeaEngine_setKey_m7E612BEEAFCFC5F18FDFBAABAC8F1E3A81834D67(__this, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_ProcessBlock_m48DA047CE522F2D72642708600393998381E9E94 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____initialised;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(10, __this);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TeaEngine_ProcessBlock_m48DA047CE522F2D72642708600393998381E9E94_RuntimeMethod_var)));
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_inBytes;
		int32_t L_5 = ___1_inOff;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_4, L_5, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_outBytes;
		int32_t L_7 = ___3_outOff;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_6, L_7, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_8 = __this->____forEncryption;
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_inBytes;
		int32_t L_10 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_outBytes;
		int32_t L_12 = ___3_outOff;
		int32_t L_13;
		L_13 = TeaEngine_decryptBlock_m014D246CBA7E26B4C39167A999CC8AAB30F55E82(__this, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}

IL_004d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_inBytes;
		int32_t L_15 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___2_outBytes;
		int32_t L_17 = ___3_outOff;
		int32_t L_18;
		L_18 = TeaEngine_encryptBlock_mBD3FEF30F2DA99C6832321A4D7162D81B871C482(__this, L_14, L_15, L_16, L_17, NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_Reset_m0832D047B410C7CDCD212614ACFDB8B053F647CB (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeaEngine_setKey_m7E612BEEAFCFC5F18FDFBAABAC8F1E3A81834D67 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_key;
		uint32_t L_1;
		L_1 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, 0, NULL);
		__this->____a = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_key;
		uint32_t L_3;
		L_3 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_2, 4, NULL);
		__this->____b = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_key;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_4, 8, NULL);
		__this->____c = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_key;
		uint32_t L_7;
		L_7 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_6, ((int32_t)12), NULL);
		__this->____d = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_encryptBlock_mBD3FEF30F2DA99C6832321A4D7162D81B871C482 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inBytes;
		int32_t L_1 = ___1_inOff;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_inBytes;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		V_2 = 0;
		V_3 = 0;
		goto IL_005c;
	}

IL_0018:
	{
		uint32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)-1640531527)));
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		uint32_t L_9 = __this->____a;
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		uint32_t L_12 = V_1;
		uint32_t L_13 = __this->____b;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_8<<4)), (int32_t)L_9))^((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_12>>5)), (int32_t)L_13))))));
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_0;
		uint32_t L_16 = __this->____c;
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_2;
		uint32_t L_19 = V_0;
		uint32_t L_20 = __this->____d;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_15<<4)), (int32_t)L_16))^((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_19>>5)), (int32_t)L_20))))));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005c:
	{
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___2_outBytes;
		int32_t L_25 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_23, L_24, L_25, NULL);
		uint32_t L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___2_outBytes;
		int32_t L_28 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_26, L_27, ((int32_t)il2cpp_codegen_add(L_28, 4)), NULL);
		return 8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TeaEngine_decryptBlock_m014D246CBA7E26B4C39167A999CC8AAB30F55E82 (TeaEngine_t80B510E9B2ED66E9821A4670C5DC52BC6826B0DF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inBytes;
		int32_t L_1 = ___1_inOff;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_inBytes;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		V_2 = ((int32_t)-957401312);
		V_3 = 0;
		goto IL_0060;
	}

IL_001c:
	{
		uint32_t L_6 = V_1;
		uint32_t L_7 = V_0;
		uint32_t L_8 = __this->____c;
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_2;
		uint32_t L_11 = V_0;
		uint32_t L_12 = __this->____d;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_7<<4)), (int32_t)L_8))^((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_11>>5)), (int32_t)L_12))))));
		uint32_t L_13 = V_0;
		uint32_t L_14 = V_1;
		uint32_t L_15 = __this->____a;
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_2;
		uint32_t L_18 = V_1;
		uint32_t L_19 = __this->____b;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_14<<4)), (int32_t)L_15))^((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17))))^((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_18>>5)), (int32_t)L_19))))));
		uint32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, ((int32_t)-1640531527)));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0060:
	{
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_001c;
		}
	}
	{
		uint32_t L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___2_outBytes;
		int32_t L_25 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_23, L_24, L_25, NULL);
		uint32_t L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___2_outBytes;
		int32_t L_28 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_26, L_27, ((int32_t)il2cpp_codegen_add(L_28, 4)), NULL);
		return 8;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine__cctor_m92B9913DC3525B4698E7DED5564EDB9F7647245D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3), (void*)L_6);
		V_0 = 0;
		goto IL_0071;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17;
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)((int32_t)(L_9%((int32_t)17))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9;
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)((int32_t)(L_12%((int32_t)9))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5;
		int32_t L_14 = V_0;
		int32_t L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)((int32_t)(L_15%5)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3;
		int32_t L_17 = V_0;
		int32_t L_18 = V_0;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)((int32_t)(L_18%3)));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0071:
	{
		int32_t L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine__ctor_m67C5C61065D6F10E0AA06D334C2E48034DF2EA91 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, int32_t ___0_blocksizeBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___t = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_1 = ___0_blocksizeBits;
		__this->___blocksizeBytes = ((int32_t)(L_1/8));
		int32_t L_2 = __this->___blocksizeBytes;
		__this->___blocksizeWords = ((int32_t)(L_2/8));
		int32_t L_3 = __this->___blocksizeWords;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___currentBlock = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBlock), (void*)L_4);
		int32_t L_5 = __this->___blocksizeWords;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_5)), 1)));
		__this->___kw = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kw), (void*)L_6);
		int32_t L_7 = ___0_blocksizeBits;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)256))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_8 = ___0_blocksizeBits;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)512))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_9 = ___0_blocksizeBits;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0099;
		}
	}
	{
		goto IL_00b1;
	}

IL_0069:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->___kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = __this->___t;
		Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* L_12 = (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27*)il2cpp_codegen_object_new(Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27_il2cpp_TypeInfo_var);
		Threefish256Cipher__ctor_mFAC4FD5F04BC1BF3E51B29BB4615C8DDDFD93EC0(L_12, L_10, L_11, NULL);
		__this->___cipher = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher), (void*)L_12);
		return;
	}

IL_0081:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = __this->___t;
		Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* L_15 = (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849*)il2cpp_codegen_object_new(Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849_il2cpp_TypeInfo_var);
		Threefish512Cipher__ctor_m7FD107C58329018301B495FBE359BA679DD0A451(L_15, L_13, L_14, NULL);
		__this->___cipher = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher), (void*)L_15);
		return;
	}

IL_0099:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = __this->___t;
		Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* L_18 = (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506*)il2cpp_codegen_object_new(Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506_il2cpp_TypeInfo_var);
		Threefish1024Cipher__ctor_m937D03ED4ADD92C0FFFAA69B1C932075428F4B50(L_18, L_16, L_17, NULL);
		__this->___cipher = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher), (void*)L_18);
		return;
	}

IL_00b1:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE004A5E158484C188AA92B5BB521E3CD282D19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine__ctor_m67C5C61065D6F10E0AA06D334C2E48034DF2EA91_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (!((TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE*)IsInstClass((RuntimeObject*)L_0, TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* L_2 = ((TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE*)CastclassClass((RuntimeObject*)L_1, TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE_il2cpp_TypeInfo_var));
		NullCheck(L_2);
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_3;
		L_3 = TweakableBlockCipherParameters_get_Key_m9532CACCD9CFE5FBA4EC3613A960C9EEDB7F0626_inline(L_2, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(L_3, NULL);
		V_0 = L_4;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = TweakableBlockCipherParameters_get_Tweak_m76D8F6B45EBE3419E4831A7E6E0A50898BB9BEC3_inline(L_2, NULL);
		V_1 = L_5;
		goto IL_0050;
	}

IL_0022:
	{
		RuntimeObject* L_6 = ___1_parameters;
		if (!((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_6, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_7 = ___1_parameters;
		NullCheck(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_7, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_7, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_8;
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_0050;
	}

IL_003a:
	{
		RuntimeObject* L_9 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_10;
		L_10 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25170142FB4F3488DD4A97779A090DDE52AC8358)), L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D_RuntimeMethod_var)));
	}

IL_0050:
	{
		V_2 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		V_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		if (!L_13)
		{
			goto IL_00ae;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = __this->___blocksizeBytes;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) == ((int32_t)L_15)))
		{
			goto IL_0082;
		}
	}
	{
		int32_t* L_16 = (int32_t*)(&__this->___blocksizeBytes);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral930666AA55A409F0C125598AF425653A0FDF4C32)), L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14230403A1CFC5A19F854BBF8DBA3B9A2CF7E7AF)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D_RuntimeMethod_var)));
	}

IL_0082:
	{
		int32_t L_20 = __this->___blocksizeWords;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_2 = L_21;
		V_4 = 0;
		goto IL_00a7;
	}

IL_0093:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = V_2;
		int32_t L_23 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		int32_t L_25 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_26;
		L_26 = ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A(L_24, ((int32_t)il2cpp_codegen_multiply(L_25, 8)), NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint64_t)L_26);
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0093;
		}
	}

IL_00ae:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		if (!L_30)
		{
			goto IL_00f3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_1;
		NullCheck(L_31);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_00d8;
		}
	}
	{
		V_5 = ((int32_t)16);
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_33;
		L_33 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA00666B082ECFBED37CF7EF580BCCF7C15F6A8FE)), L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9F954BE9FD9E999DA1677DADC6D2CAB27412A282)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_Init_m38A823A9D7ED33D3B144CCC2FEBFE36C82638C4D_RuntimeMethod_var)));
	}

IL_00d8:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_36 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_38;
		L_38 = ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A(L_37, 0, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_38);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = L_36;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_1;
		uint64_t L_41;
		L_41 = ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A(L_40, 8, NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_41);
		V_3 = L_39;
	}

IL_00f3:
	{
		bool L_42 = ___0_forEncryption;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = V_3;
		ThreefishEngine_Init_m66861B6AC30D5EE08ED8F6F0679628581E0CA7AA(__this, L_42, L_43, L_44, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_m66861B6AC30D5EE08ED8F6F0679628581E0CA7AA (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, bool ___0_forEncryption, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_key, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_tweak, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_forEncryption;
		__this->___forEncryption = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_key;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___1_key;
		ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32(__this, L_2, NULL);
	}

IL_0011:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___2_tweak;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___2_tweak;
		ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9(__this, L_4, NULL);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_key, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_key;
		NullCheck(L_0);
		int32_t L_1 = __this->___blocksizeWords;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t* L_2 = (int32_t*)(&__this->___blocksizeWords);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral930666AA55A409F0C125598AF425653A0FDF4C32)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0CECB4252188823B622C9B595E368C07831C1FA9)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_SetKey_m03780AB9AB32F35C462D66052B2102526869FF32_RuntimeMethod_var)));
	}

IL_002b:
	{
		V_0 = ((int64_t)2004413935125273122LL);
		V_1 = 0;
		goto IL_0053;
	}

IL_0039:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___kw;
		int32_t L_7 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_key;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint64_t)L_11);
		uint64_t L_12 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___kw;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int64_t L_16 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)((int64_t)L_12^L_16));
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0053:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = __this->___blocksizeWords;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0039;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = __this->___kw;
		int32_t L_21 = __this->___blocksizeWords;
		uint64_t L_22 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint64_t)L_22);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = __this->___kw;
		int32_t L_25 = __this->___blocksizeWords;
		int32_t L_26 = __this->___blocksizeWords;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_23, 0, (RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), L_26, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_tweak, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_tweak;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		V_0 = 2;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FC2A08F30023C6460F14108C58D275A5F58ED73)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19A7034042434538838BF70971EC853B1C495314)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_SetTweak_m7503530BB94DB5887E9B301BE6517D94764868A9_RuntimeMethod_var)));
	}

IL_0024:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_tweak;
		NullCheck(L_5);
		int32_t L_6 = 0;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->___t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_tweak;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = __this->___t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___t;
		NullCheck(L_13);
		int32_t L_14 = 0;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___t;
		NullCheck(L_16);
		int32_t L_17 = 1;
		int64_t L_18 = (int64_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)((int64_t)(L_15^L_18)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = __this->___t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = __this->___t;
		NullCheck(L_20);
		int32_t L_21 = 0;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_22);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___t;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = __this->___t;
		NullCheck(L_24);
		int32_t L_25 = 1;
		int64_t L_26 = (int64_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_26);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThreefishEngine_get_AlgorithmName_mB090109E4A1736FE74721F6FDD475307EDC6DA67 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5D7630CEB63535569DC2F806E2D2E580AB463C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___blocksizeBytes;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 8));
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7F5D7630CEB63535569DC2F806E2D2E580AB463C, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreefishEngine_get_IsPartialBlockOkay_m2E31D672DDBA10E06C7B95320CA2EA3E578EA3BE (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_GetBlockSize_m505640F42EBEE27DF7E76B5C5711275D178F9D88 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blocksizeBytes;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Reset_m07DA13B419D00A6A44155F65303AB6A25EDDDF8F (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_m16221E90ACE95768F4117AB4B44CAE2C30504EBD (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___3_outOff;
		int32_t L_1 = __this->___blocksizeBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_outBytes;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* L_3 = (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_m16221E90ACE95768F4117AB4B44CAE2C30504EBD_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_4 = ___1_inOff;
		int32_t L_5 = __this->___blocksizeBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_inBytes;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* L_7 = (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_m16221E90ACE95768F4117AB4B44CAE2C30504EBD_RuntimeMethod_var)));
	}

IL_0031:
	{
		V_0 = 0;
		goto IL_004c;
	}

IL_0035:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->___currentBlock;
		int32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_inBytes;
		int32_t L_11 = ___1_inOff;
		int32_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_13;
		L_13 = ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A(L_10, ((int32_t)il2cpp_codegen_add(L_11, L_12)), NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_9>>3))), (uint64_t)L_13);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 8));
	}

IL_004c:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___blocksizeBytes;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0035;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = __this->___currentBlock;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = __this->___currentBlock;
		int32_t L_19;
		L_19 = ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961(__this, L_17, L_18, NULL);
		V_1 = 0;
		goto IL_0084;
	}

IL_006c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = __this->___currentBlock;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)(L_21>>3));
		int64_t L_23 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___2_outBytes;
		int32_t L_25 = ___3_outOff;
		int32_t L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3(L_23, L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 8));
	}

IL_0084:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = __this->___blocksizeBytes;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_30 = __this->___blocksizeBytes;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_inWords, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___kw;
		int32_t L_1 = __this->___blocksizeWords;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC894542CC15E7FDD0B254592D14D3E16EB7762B6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961_RuntimeMethod_var)));
	}

IL_001a:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_inWords;
		NullCheck(L_5);
		int32_t L_6 = __this->___blocksizeWords;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)L_6)))
		{
			goto IL_0030;
		}
	}
	{
		DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* L_7 = (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961_RuntimeMethod_var)));
	}

IL_0030:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_outWords;
		NullCheck(L_8);
		int32_t L_9 = __this->___blocksizeWords;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* L_10 = (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961_RuntimeMethod_var)));
	}

IL_0046:
	{
		bool L_11 = __this->___forEncryption;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* L_12 = __this->___cipher;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_inWords;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___1_outWords;
		NullCheck(L_12);
		VirtualActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* >::Invoke(4, L_12, L_13, L_14);
		goto IL_006a;
	}

IL_005d:
	{
		ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* L_15 = __this->___cipher;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___0_inWords;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___1_outWords;
		NullCheck(L_15);
		VirtualActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* >::Invoke(5, L_15, L_16, L_17);
	}

IL_006a:
	{
		int32_t L_18 = __this->___blocksizeWords;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, int32_t ___1_off, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_off;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bytes;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 8))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_3 = ___1_off;
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bytes;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bytes;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bytes;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_bytes;
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_bytes;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___0_bytes;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_bytes;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___0_bytes;
		int32_t L_40 = V_0;
		int32_t L_41 = L_40;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		NullCheck(L_39);
		int32_t L_42 = L_41;
		uint8_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_8)&((int64_t)((int32_t)255))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_13)&((int64_t)((int32_t)255))))<<8))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_18)&((int64_t)((int32_t)255))))<<((int32_t)16)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_23)&((int64_t)((int32_t)255))))<<((int32_t)24)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_28)&((int64_t)((int32_t)255))))<<((int32_t)32)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_33)&((int64_t)((int32_t)255))))<<((int32_t)40)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_38)&((int64_t)((int32_t)255))))<<((int32_t)48)))))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_43)&((int64_t)((int32_t)255))))<<((int32_t)56)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3 (uint64_t ___0_word, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int32_t ___2_off, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___2_off;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_bytes;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 8))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_3 = ___2_off;
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_bytes;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		uint64_t L_7 = ___0_word;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)(uint8_t)L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_bytes;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		uint64_t L_11 = ___0_word;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_11>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___1_bytes;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		uint64_t L_15 = ___0_word;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_15>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___1_bytes;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint64_t L_19 = ___0_word;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_19>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___1_bytes;
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint64_t L_23 = ___0_word;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_23>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___1_bytes;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		uint64_t L_27 = ___0_word;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_27>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___1_bytes;
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		uint64_t L_31 = ___0_word;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_31>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_bytes;
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		uint64_t L_35 = ___0_word;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_35>>((int32_t)56)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		int32_t L_1 = ___1_n;
		uint64_t L_2 = ___0_x;
		int32_t L_3 = ___1_n;
		uint64_t L_4 = ___2_xor;
		return ((int64_t)(((int64_t)(((int64_t)((int64_t)L_0<<((int32_t)(L_1&((int32_t)63)))))|((int64_t)((uint64_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3))&((int32_t)63)))))))^(int64_t)L_4));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1 (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1 = ___2_xor;
		V_0 = ((int64_t)((int64_t)L_0^(int64_t)L_1));
		uint64_t L_2 = V_0;
		int32_t L_3 = ___1_n;
		uint64_t L_4 = V_0;
		int32_t L_5 = ___1_n;
		return ((int64_t)(((int64_t)((uint64_t)L_2>>((int32_t)(L_3&((int32_t)63)))))|((int64_t)((int64_t)L_4<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_5))&((int32_t)63)))))));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083 (ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		__this->___kw = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kw), (void*)L_0);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		__this->___t = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher__ctor_mFAC4FD5F04BC1BF3E51B29BB4615C8DDDFD93EC0 (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher_EncryptBlock_m767957CAE69732ABF00E3F77912A82B9A4FF9CD3 (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)9))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_EncryptBlock_m767957CAE69732ABF00E3F77912A82B9A4FF9CD3_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_EncryptBlock_m767957CAE69732ABF00E3F77912A82B9A4FF9CD3_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		uint64_t L_20 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 0;
		int64_t L_23 = (int64_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, L_23));
		uint64_t L_24 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 1;
		int64_t L_27 = (int64_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = 0;
		int64_t L_30 = (int64_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, ((int64_t)il2cpp_codegen_add(L_27, L_30))));
		uint64_t L_31 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = 2;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = 1;
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)il2cpp_codegen_add(L_34, L_37))));
		uint64_t L_38 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 3;
		int64_t L_41 = (int64_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_38, L_41));
		V_8 = 1;
		goto IL_0233;
	}

IL_0077:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		int32_t L_43 = V_8;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_9 = L_45;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_3;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_10 = L_49;
		uint64_t L_50 = V_5;
		uint64_t L_51 = V_4;
		uint64_t L_52 = V_5;
		int64_t L_53 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, (int64_t)L_52));
		V_4 = L_53;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_54;
		L_54 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_50, ((int32_t)14), L_53, NULL);
		V_5 = L_54;
		uint64_t L_55 = V_7;
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_7;
		int64_t L_58 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, (int64_t)L_57));
		V_6 = L_58;
		uint64_t L_59;
		L_59 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_55, ((int32_t)16), L_58, NULL);
		V_7 = L_59;
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_4;
		uint64_t L_62 = V_7;
		int64_t L_63 = ((int64_t)il2cpp_codegen_add((int64_t)L_61, (int64_t)L_62));
		V_4 = L_63;
		uint64_t L_64;
		L_64 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_60, ((int32_t)52), L_63, NULL);
		V_7 = L_64;
		uint64_t L_65 = V_5;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		int64_t L_68 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, (int64_t)L_67));
		V_6 = L_68;
		uint64_t L_69;
		L_69 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_65, ((int32_t)57), L_68, NULL);
		V_5 = L_69;
		uint64_t L_70 = V_5;
		uint64_t L_71 = V_4;
		uint64_t L_72 = V_5;
		int64_t L_73 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, (int64_t)L_72));
		V_4 = L_73;
		uint64_t L_74;
		L_74 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_70, ((int32_t)23), L_73, NULL);
		V_5 = L_74;
		uint64_t L_75 = V_7;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_7;
		int64_t L_78 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, (int64_t)L_77));
		V_6 = L_78;
		uint64_t L_79;
		L_79 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_75, ((int32_t)40), L_78, NULL);
		V_7 = L_79;
		uint64_t L_80 = V_7;
		uint64_t L_81 = V_4;
		uint64_t L_82 = V_7;
		int64_t L_83 = ((int64_t)il2cpp_codegen_add((int64_t)L_81, (int64_t)L_82));
		V_4 = L_83;
		uint64_t L_84;
		L_84 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_80, 5, L_83, NULL);
		V_7 = L_84;
		uint64_t L_85 = V_5;
		uint64_t L_86 = V_6;
		uint64_t L_87 = V_5;
		int64_t L_88 = ((int64_t)il2cpp_codegen_add((int64_t)L_86, (int64_t)L_87));
		V_6 = L_88;
		uint64_t L_89;
		L_89 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_85, ((int32_t)37), L_88, NULL);
		V_5 = L_89;
		uint64_t L_90 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_91 = V_0;
		int32_t L_92 = V_9;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		int64_t L_94 = (int64_t)(L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, L_94));
		uint64_t L_95 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_96 = V_0;
		int32_t L_97 = V_9;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		int64_t L_99 = (int64_t)(L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_1;
		int32_t L_101 = V_10;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		int64_t L_103 = (int64_t)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, ((int64_t)il2cpp_codegen_add(L_99, L_103))));
		uint64_t L_104 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		int32_t L_106 = V_9;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, 2));
		int64_t L_108 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = V_1;
		int32_t L_110 = V_10;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int64_t L_112 = (int64_t)(L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, ((int64_t)il2cpp_codegen_add(L_108, L_112))));
		uint64_t L_113 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_114 = V_0;
		int32_t L_115 = V_9;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 3));
		int64_t L_117 = (int64_t)(L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		int32_t L_118 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_add(L_117, ((int64_t)(uint64_t)((uint32_t)L_118))))));
		uint64_t L_119 = V_5;
		uint64_t L_120 = V_4;
		uint64_t L_121 = V_5;
		int64_t L_122 = ((int64_t)il2cpp_codegen_add((int64_t)L_120, (int64_t)L_121));
		V_4 = L_122;
		uint64_t L_123;
		L_123 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_119, ((int32_t)25), L_122, NULL);
		V_5 = L_123;
		uint64_t L_124 = V_7;
		uint64_t L_125 = V_6;
		uint64_t L_126 = V_7;
		int64_t L_127 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, (int64_t)L_126));
		V_6 = L_127;
		uint64_t L_128;
		L_128 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_124, ((int32_t)33), L_127, NULL);
		V_7 = L_128;
		uint64_t L_129 = V_7;
		uint64_t L_130 = V_4;
		uint64_t L_131 = V_7;
		int64_t L_132 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, (int64_t)L_131));
		V_4 = L_132;
		uint64_t L_133;
		L_133 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_129, ((int32_t)46), L_132, NULL);
		V_7 = L_133;
		uint64_t L_134 = V_5;
		uint64_t L_135 = V_6;
		uint64_t L_136 = V_5;
		int64_t L_137 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, (int64_t)L_136));
		V_6 = L_137;
		uint64_t L_138;
		L_138 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_134, ((int32_t)12), L_137, NULL);
		V_5 = L_138;
		uint64_t L_139 = V_5;
		uint64_t L_140 = V_4;
		uint64_t L_141 = V_5;
		int64_t L_142 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		V_4 = L_142;
		uint64_t L_143;
		L_143 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_139, ((int32_t)58), L_142, NULL);
		V_5 = L_143;
		uint64_t L_144 = V_7;
		uint64_t L_145 = V_6;
		uint64_t L_146 = V_7;
		int64_t L_147 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)L_146));
		V_6 = L_147;
		uint64_t L_148;
		L_148 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_144, ((int32_t)22), L_147, NULL);
		V_7 = L_148;
		uint64_t L_149 = V_7;
		uint64_t L_150 = V_4;
		uint64_t L_151 = V_7;
		int64_t L_152 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_151));
		V_4 = L_152;
		uint64_t L_153;
		L_153 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_149, ((int32_t)32), L_152, NULL);
		V_7 = L_153;
		uint64_t L_154 = V_5;
		uint64_t L_155 = V_6;
		uint64_t L_156 = V_5;
		int64_t L_157 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)L_156));
		V_6 = L_157;
		uint64_t L_158;
		L_158 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_154, ((int32_t)32), L_157, NULL);
		V_5 = L_158;
		uint64_t L_159 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_160 = V_0;
		int32_t L_161 = V_9;
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_add(L_161, 1));
		int64_t L_163 = (int64_t)(L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, L_163));
		uint64_t L_164 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_165 = V_0;
		int32_t L_166 = V_9;
		NullCheck(L_165);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(L_166, 2));
		int64_t L_168 = (int64_t)(L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_1;
		int32_t L_170 = V_10;
		NullCheck(L_169);
		int32_t L_171 = ((int32_t)il2cpp_codegen_add(L_170, 1));
		int64_t L_172 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_164, ((int64_t)il2cpp_codegen_add(L_168, L_172))));
		uint64_t L_173 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = V_0;
		int32_t L_175 = V_9;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)il2cpp_codegen_add(L_175, 3));
		int64_t L_177 = (int64_t)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_178 = V_1;
		int32_t L_179 = V_10;
		NullCheck(L_178);
		int32_t L_180 = ((int32_t)il2cpp_codegen_add(L_179, 2));
		int64_t L_181 = (int64_t)(L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, ((int64_t)il2cpp_codegen_add(L_177, L_181))));
		uint64_t L_182 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183 = V_0;
		int32_t L_184 = V_9;
		NullCheck(L_183);
		int32_t L_185 = ((int32_t)il2cpp_codegen_add(L_184, 4));
		int64_t L_186 = (int64_t)(L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_182, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_186, ((int64_t)(uint64_t)((uint32_t)L_187)))), ((int64_t)1)))));
		int32_t L_188 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_188, 2));
	}

IL_0233:
	{
		int32_t L_189 = V_8;
		if ((((int32_t)L_189) < ((int32_t)((int32_t)18))))
		{
			goto IL_0077;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = ___1_outWords;
		uint64_t L_191 = V_4;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_191);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_192 = ___1_outWords;
		uint64_t L_193 = V_5;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_193);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_194 = ___1_outWords;
		uint64_t L_195 = V_6;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_195);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_196 = ___1_outWords;
		uint64_t L_197 = V_7;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_197);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish256Cipher_DecryptBlock_m2585E023639C6D99B0F5DD370D35BD82AF899B83 (Threefish256Cipher_t4EB9BAA9D13707C2231FECB9827D4705CA65CE27* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD5;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)9))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_DecryptBlock_m2585E023639C6D99B0F5DD370D35BD82AF899B83_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish256Cipher_DecryptBlock_m2585E023639C6D99B0F5DD370D35BD82AF899B83_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		V_8 = ((int32_t)17);
		goto IL_021c;
	}

IL_0050:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		int32_t L_21 = V_8;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_9 = L_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_3;
		int32_t L_25 = V_8;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_10 = L_27;
		uint64_t L_28 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = V_0;
		int32_t L_30 = V_9;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int64_t L_32 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_28, L_32));
		uint64_t L_33 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_0;
		int32_t L_35 = V_9;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 2));
		int64_t L_37 = (int64_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = V_1;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int64_t L_41 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_33, ((int64_t)il2cpp_codegen_add(L_37, L_41))));
		uint64_t L_42 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = V_0;
		int32_t L_44 = V_9;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 3));
		int64_t L_46 = (int64_t)(L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = V_1;
		int32_t L_48 = V_10;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 2));
		int64_t L_50 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_42, ((int64_t)il2cpp_codegen_add(L_46, L_50))));
		uint64_t L_51 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = V_0;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, 4));
		int64_t L_55 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_51, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_55, ((int64_t)(uint64_t)((uint32_t)L_56)))), ((int64_t)1)))));
		uint64_t L_57 = V_7;
		uint64_t L_58 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_59;
		L_59 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_57, ((int32_t)32), L_58, NULL);
		V_7 = L_59;
		uint64_t L_60 = V_4;
		uint64_t L_61 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_60, (int64_t)L_61));
		uint64_t L_62 = V_5;
		uint64_t L_63 = V_6;
		uint64_t L_64;
		L_64 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_62, ((int32_t)32), L_63, NULL);
		V_5 = L_64;
		uint64_t L_65 = V_6;
		uint64_t L_66 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_65, (int64_t)L_66));
		uint64_t L_67 = V_5;
		uint64_t L_68 = V_4;
		uint64_t L_69;
		L_69 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_67, ((int32_t)58), L_68, NULL);
		V_5 = L_69;
		uint64_t L_70 = V_4;
		uint64_t L_71 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_70, (int64_t)L_71));
		uint64_t L_72 = V_7;
		uint64_t L_73 = V_6;
		uint64_t L_74;
		L_74 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_72, ((int32_t)22), L_73, NULL);
		V_7 = L_74;
		uint64_t L_75 = V_6;
		uint64_t L_76 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_75, (int64_t)L_76));
		uint64_t L_77 = V_7;
		uint64_t L_78 = V_4;
		uint64_t L_79;
		L_79 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_77, ((int32_t)46), L_78, NULL);
		V_7 = L_79;
		uint64_t L_80 = V_4;
		uint64_t L_81 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_80, (int64_t)L_81));
		uint64_t L_82 = V_5;
		uint64_t L_83 = V_6;
		uint64_t L_84;
		L_84 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_82, ((int32_t)12), L_83, NULL);
		V_5 = L_84;
		uint64_t L_85 = V_6;
		uint64_t L_86 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_85, (int64_t)L_86));
		uint64_t L_87 = V_5;
		uint64_t L_88 = V_4;
		uint64_t L_89;
		L_89 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_87, ((int32_t)25), L_88, NULL);
		V_5 = L_89;
		uint64_t L_90 = V_4;
		uint64_t L_91 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_90, (int64_t)L_91));
		uint64_t L_92 = V_7;
		uint64_t L_93 = V_6;
		uint64_t L_94;
		L_94 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_92, ((int32_t)33), L_93, NULL);
		V_7 = L_94;
		uint64_t L_95 = V_6;
		uint64_t L_96 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_95, (int64_t)L_96));
		uint64_t L_97 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_98 = V_0;
		int32_t L_99 = V_9;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		int64_t L_101 = (int64_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_97, L_101));
		uint64_t L_102 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_103 = V_0;
		int32_t L_104 = V_9;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		int64_t L_106 = (int64_t)(L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = V_1;
		int32_t L_108 = V_10;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int64_t L_110 = (int64_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_102, ((int64_t)il2cpp_codegen_add(L_106, L_110))));
		uint64_t L_111 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_112 = V_0;
		int32_t L_113 = V_9;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 2));
		int64_t L_115 = (int64_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = V_1;
		int32_t L_117 = V_10;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		int64_t L_119 = (int64_t)(L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_111, ((int64_t)il2cpp_codegen_add(L_115, L_119))));
		uint64_t L_120 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_121 = V_0;
		int32_t L_122 = V_9;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 3));
		int64_t L_124 = (int64_t)(L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t L_125 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_120, ((int64_t)il2cpp_codegen_add(L_124, ((int64_t)(uint64_t)((uint32_t)L_125))))));
		uint64_t L_126 = V_7;
		uint64_t L_127 = V_4;
		uint64_t L_128;
		L_128 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_126, 5, L_127, NULL);
		V_7 = L_128;
		uint64_t L_129 = V_4;
		uint64_t L_130 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_129, (int64_t)L_130));
		uint64_t L_131 = V_5;
		uint64_t L_132 = V_6;
		uint64_t L_133;
		L_133 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_131, ((int32_t)37), L_132, NULL);
		V_5 = L_133;
		uint64_t L_134 = V_6;
		uint64_t L_135 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_134, (int64_t)L_135));
		uint64_t L_136 = V_5;
		uint64_t L_137 = V_4;
		uint64_t L_138;
		L_138 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_136, ((int32_t)23), L_137, NULL);
		V_5 = L_138;
		uint64_t L_139 = V_4;
		uint64_t L_140 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_139, (int64_t)L_140));
		uint64_t L_141 = V_7;
		uint64_t L_142 = V_6;
		uint64_t L_143;
		L_143 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_141, ((int32_t)40), L_142, NULL);
		V_7 = L_143;
		uint64_t L_144 = V_6;
		uint64_t L_145 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_144, (int64_t)L_145));
		uint64_t L_146 = V_7;
		uint64_t L_147 = V_4;
		uint64_t L_148;
		L_148 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_146, ((int32_t)52), L_147, NULL);
		V_7 = L_148;
		uint64_t L_149 = V_4;
		uint64_t L_150 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_149, (int64_t)L_150));
		uint64_t L_151 = V_5;
		uint64_t L_152 = V_6;
		uint64_t L_153;
		L_153 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_151, ((int32_t)57), L_152, NULL);
		V_5 = L_153;
		uint64_t L_154 = V_6;
		uint64_t L_155 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_154, (int64_t)L_155));
		uint64_t L_156 = V_5;
		uint64_t L_157 = V_4;
		uint64_t L_158;
		L_158 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_156, ((int32_t)14), L_157, NULL);
		V_5 = L_158;
		uint64_t L_159 = V_4;
		uint64_t L_160 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_159, (int64_t)L_160));
		uint64_t L_161 = V_7;
		uint64_t L_162 = V_6;
		uint64_t L_163;
		L_163 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_161, ((int32_t)16), L_162, NULL);
		V_7 = L_163;
		uint64_t L_164 = V_6;
		uint64_t L_165 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_164, (int64_t)L_165));
		int32_t L_166 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_166, 2));
	}

IL_021c:
	{
		int32_t L_167 = V_8;
		if ((((int32_t)L_167) >= ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		uint64_t L_168 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_0;
		NullCheck(L_169);
		int32_t L_170 = 0;
		int64_t L_171 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_168, L_171));
		uint64_t L_172 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_173 = V_0;
		NullCheck(L_173);
		int32_t L_174 = 1;
		int64_t L_175 = (int64_t)(L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_176 = V_1;
		NullCheck(L_176);
		int32_t L_177 = 0;
		int64_t L_178 = (int64_t)(L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_172, ((int64_t)il2cpp_codegen_add(L_175, L_178))));
		uint64_t L_179 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = V_0;
		NullCheck(L_180);
		int32_t L_181 = 2;
		int64_t L_182 = (int64_t)(L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183 = V_1;
		NullCheck(L_183);
		int32_t L_184 = 1;
		int64_t L_185 = (int64_t)(L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_179, ((int64_t)il2cpp_codegen_add(L_182, L_185))));
		uint64_t L_186 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_187 = V_0;
		NullCheck(L_187);
		int32_t L_188 = 3;
		int64_t L_189 = (int64_t)(L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_186, L_189));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = ___1_state;
		uint64_t L_191 = V_4;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_191);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_192 = ___1_state;
		uint64_t L_193 = V_5;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_193);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_194 = ___1_state;
		uint64_t L_195 = V_6;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_195);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_196 = ___1_state;
		uint64_t L_197 = V_7;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_197);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher__ctor_m7FD107C58329018301B495FBE359BA679DD0A451 (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_EncryptBlock_m431B4B312ABCEF5FFFCCF1C97D74C2679EE0992B (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m431B4B312ABCEF5FFFCCF1C97D74C2679EE0992B_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m431B4B312ABCEF5FFFCCF1C97D74C2679EE0992B_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		uint64_t L_32 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = 0;
		int64_t L_35 = (int64_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, L_35));
		uint64_t L_36 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = 1;
		int64_t L_39 = (int64_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, L_39));
		uint64_t L_40 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = 2;
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, L_43));
		uint64_t L_44 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = 3;
		int64_t L_47 = (int64_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_44, L_47));
		uint64_t L_48 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = 4;
		int64_t L_51 = (int64_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, L_51));
		uint64_t L_52 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 5;
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = 0;
		int64_t L_58 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(L_55, L_58))));
		uint64_t L_59 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = V_0;
		NullCheck(L_60);
		int32_t L_61 = 6;
		int64_t L_62 = (int64_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = 1;
		int64_t L_65 = (int64_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_59, ((int64_t)il2cpp_codegen_add(L_62, L_65))));
		uint64_t L_66 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = 7;
		int64_t L_69 = (int64_t)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, L_69));
		V_12 = 1;
		goto IL_03ef;
	}

IL_00ab:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_2;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_13 = L_73;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_3;
		int32_t L_75 = V_12;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_14 = L_77;
		uint64_t L_78 = V_5;
		uint64_t L_79 = V_4;
		uint64_t L_80 = V_5;
		int64_t L_81 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, (int64_t)L_80));
		V_4 = L_81;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_82;
		L_82 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_78, ((int32_t)46), L_81, NULL);
		V_5 = L_82;
		uint64_t L_83 = V_7;
		uint64_t L_84 = V_6;
		uint64_t L_85 = V_7;
		int64_t L_86 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)L_85));
		V_6 = L_86;
		uint64_t L_87;
		L_87 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_83, ((int32_t)36), L_86, NULL);
		V_7 = L_87;
		uint64_t L_88 = V_9;
		uint64_t L_89 = V_8;
		uint64_t L_90 = V_9;
		int64_t L_91 = ((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)L_90));
		V_8 = L_91;
		uint64_t L_92;
		L_92 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_88, ((int32_t)19), L_91, NULL);
		V_9 = L_92;
		uint64_t L_93 = V_11;
		uint64_t L_94 = V_10;
		uint64_t L_95 = V_11;
		int64_t L_96 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, (int64_t)L_95));
		V_10 = L_96;
		uint64_t L_97;
		L_97 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_93, ((int32_t)37), L_96, NULL);
		V_11 = L_97;
		uint64_t L_98 = V_5;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		int64_t L_101 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, (int64_t)L_100));
		V_6 = L_101;
		uint64_t L_102;
		L_102 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_98, ((int32_t)33), L_101, NULL);
		V_5 = L_102;
		uint64_t L_103 = V_11;
		uint64_t L_104 = V_8;
		uint64_t L_105 = V_11;
		int64_t L_106 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, (int64_t)L_105));
		V_8 = L_106;
		uint64_t L_107;
		L_107 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_103, ((int32_t)27), L_106, NULL);
		V_11 = L_107;
		uint64_t L_108 = V_9;
		uint64_t L_109 = V_10;
		uint64_t L_110 = V_9;
		int64_t L_111 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)L_110));
		V_10 = L_111;
		uint64_t L_112;
		L_112 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_108, ((int32_t)14), L_111, NULL);
		V_9 = L_112;
		uint64_t L_113 = V_7;
		uint64_t L_114 = V_4;
		uint64_t L_115 = V_7;
		int64_t L_116 = ((int64_t)il2cpp_codegen_add((int64_t)L_114, (int64_t)L_115));
		V_4 = L_116;
		uint64_t L_117;
		L_117 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_113, ((int32_t)42), L_116, NULL);
		V_7 = L_117;
		uint64_t L_118 = V_5;
		uint64_t L_119 = V_8;
		uint64_t L_120 = V_5;
		int64_t L_121 = ((int64_t)il2cpp_codegen_add((int64_t)L_119, (int64_t)L_120));
		V_8 = L_121;
		uint64_t L_122;
		L_122 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_118, ((int32_t)17), L_121, NULL);
		V_5 = L_122;
		uint64_t L_123 = V_7;
		uint64_t L_124 = V_10;
		uint64_t L_125 = V_7;
		int64_t L_126 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, (int64_t)L_125));
		V_10 = L_126;
		uint64_t L_127;
		L_127 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_123, ((int32_t)49), L_126, NULL);
		V_7 = L_127;
		uint64_t L_128 = V_9;
		uint64_t L_129 = V_4;
		uint64_t L_130 = V_9;
		int64_t L_131 = ((int64_t)il2cpp_codegen_add((int64_t)L_129, (int64_t)L_130));
		V_4 = L_131;
		uint64_t L_132;
		L_132 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_128, ((int32_t)36), L_131, NULL);
		V_9 = L_132;
		uint64_t L_133 = V_11;
		uint64_t L_134 = V_6;
		uint64_t L_135 = V_11;
		int64_t L_136 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, (int64_t)L_135));
		V_6 = L_136;
		uint64_t L_137;
		L_137 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_133, ((int32_t)39), L_136, NULL);
		V_11 = L_137;
		uint64_t L_138 = V_5;
		uint64_t L_139 = V_10;
		uint64_t L_140 = V_5;
		int64_t L_141 = ((int64_t)il2cpp_codegen_add((int64_t)L_139, (int64_t)L_140));
		V_10 = L_141;
		uint64_t L_142;
		L_142 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_138, ((int32_t)44), L_141, NULL);
		V_5 = L_142;
		uint64_t L_143 = V_11;
		uint64_t L_144 = V_4;
		uint64_t L_145 = V_11;
		int64_t L_146 = ((int64_t)il2cpp_codegen_add((int64_t)L_144, (int64_t)L_145));
		V_4 = L_146;
		uint64_t L_147;
		L_147 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_143, ((int32_t)9), L_146, NULL);
		V_11 = L_147;
		uint64_t L_148 = V_9;
		uint64_t L_149 = V_6;
		uint64_t L_150 = V_9;
		int64_t L_151 = ((int64_t)il2cpp_codegen_add((int64_t)L_149, (int64_t)L_150));
		V_6 = L_151;
		uint64_t L_152;
		L_152 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_148, ((int32_t)54), L_151, NULL);
		V_9 = L_152;
		uint64_t L_153 = V_7;
		uint64_t L_154 = V_8;
		uint64_t L_155 = V_7;
		int64_t L_156 = ((int64_t)il2cpp_codegen_add((int64_t)L_154, (int64_t)L_155));
		V_8 = L_156;
		uint64_t L_157;
		L_157 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_153, ((int32_t)56), L_156, NULL);
		V_7 = L_157;
		uint64_t L_158 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_159 = V_0;
		int32_t L_160 = V_13;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		int64_t L_162 = (int64_t)(L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_158, L_162));
		uint64_t L_163 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_164 = V_0;
		int32_t L_165 = V_13;
		NullCheck(L_164);
		int32_t L_166 = ((int32_t)il2cpp_codegen_add(L_165, 1));
		int64_t L_167 = (int64_t)(L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, L_167));
		uint64_t L_168 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_0;
		int32_t L_170 = V_13;
		NullCheck(L_169);
		int32_t L_171 = ((int32_t)il2cpp_codegen_add(L_170, 2));
		int64_t L_172 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_168, L_172));
		uint64_t L_173 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = V_0;
		int32_t L_175 = V_13;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)il2cpp_codegen_add(L_175, 3));
		int64_t L_177 = (int64_t)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, L_177));
		uint64_t L_178 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179 = V_0;
		int32_t L_180 = V_13;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		int64_t L_182 = (int64_t)(L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, L_182));
		uint64_t L_183 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_184 = V_0;
		int32_t L_185 = V_13;
		NullCheck(L_184);
		int32_t L_186 = ((int32_t)il2cpp_codegen_add(L_185, 5));
		int64_t L_187 = (int64_t)(L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_188 = V_1;
		int32_t L_189 = V_14;
		NullCheck(L_188);
		int32_t L_190 = L_189;
		int64_t L_191 = (int64_t)(L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_add(L_187, L_191))));
		uint64_t L_192 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_193 = V_0;
		int32_t L_194 = V_13;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(L_194, 6));
		int64_t L_196 = (int64_t)(L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_197 = V_1;
		int32_t L_198 = V_14;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		int64_t L_200 = (int64_t)(L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_192, ((int64_t)il2cpp_codegen_add(L_196, L_200))));
		uint64_t L_201 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_202 = V_0;
		int32_t L_203 = V_13;
		NullCheck(L_202);
		int32_t L_204 = ((int32_t)il2cpp_codegen_add(L_203, 7));
		int64_t L_205 = (int64_t)(L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		int32_t L_206 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_201, ((int64_t)il2cpp_codegen_add(L_205, ((int64_t)(uint64_t)((uint32_t)L_206))))));
		uint64_t L_207 = V_5;
		uint64_t L_208 = V_4;
		uint64_t L_209 = V_5;
		int64_t L_210 = ((int64_t)il2cpp_codegen_add((int64_t)L_208, (int64_t)L_209));
		V_4 = L_210;
		uint64_t L_211;
		L_211 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_207, ((int32_t)39), L_210, NULL);
		V_5 = L_211;
		uint64_t L_212 = V_7;
		uint64_t L_213 = V_6;
		uint64_t L_214 = V_7;
		int64_t L_215 = ((int64_t)il2cpp_codegen_add((int64_t)L_213, (int64_t)L_214));
		V_6 = L_215;
		uint64_t L_216;
		L_216 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_212, ((int32_t)30), L_215, NULL);
		V_7 = L_216;
		uint64_t L_217 = V_9;
		uint64_t L_218 = V_8;
		uint64_t L_219 = V_9;
		int64_t L_220 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, (int64_t)L_219));
		V_8 = L_220;
		uint64_t L_221;
		L_221 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_217, ((int32_t)34), L_220, NULL);
		V_9 = L_221;
		uint64_t L_222 = V_11;
		uint64_t L_223 = V_10;
		uint64_t L_224 = V_11;
		int64_t L_225 = ((int64_t)il2cpp_codegen_add((int64_t)L_223, (int64_t)L_224));
		V_10 = L_225;
		uint64_t L_226;
		L_226 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_222, ((int32_t)24), L_225, NULL);
		V_11 = L_226;
		uint64_t L_227 = V_5;
		uint64_t L_228 = V_6;
		uint64_t L_229 = V_5;
		int64_t L_230 = ((int64_t)il2cpp_codegen_add((int64_t)L_228, (int64_t)L_229));
		V_6 = L_230;
		uint64_t L_231;
		L_231 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_227, ((int32_t)13), L_230, NULL);
		V_5 = L_231;
		uint64_t L_232 = V_11;
		uint64_t L_233 = V_8;
		uint64_t L_234 = V_11;
		int64_t L_235 = ((int64_t)il2cpp_codegen_add((int64_t)L_233, (int64_t)L_234));
		V_8 = L_235;
		uint64_t L_236;
		L_236 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_232, ((int32_t)50), L_235, NULL);
		V_11 = L_236;
		uint64_t L_237 = V_9;
		uint64_t L_238 = V_10;
		uint64_t L_239 = V_9;
		int64_t L_240 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, (int64_t)L_239));
		V_10 = L_240;
		uint64_t L_241;
		L_241 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_237, ((int32_t)10), L_240, NULL);
		V_9 = L_241;
		uint64_t L_242 = V_7;
		uint64_t L_243 = V_4;
		uint64_t L_244 = V_7;
		int64_t L_245 = ((int64_t)il2cpp_codegen_add((int64_t)L_243, (int64_t)L_244));
		V_4 = L_245;
		uint64_t L_246;
		L_246 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_242, ((int32_t)17), L_245, NULL);
		V_7 = L_246;
		uint64_t L_247 = V_5;
		uint64_t L_248 = V_8;
		uint64_t L_249 = V_5;
		int64_t L_250 = ((int64_t)il2cpp_codegen_add((int64_t)L_248, (int64_t)L_249));
		V_8 = L_250;
		uint64_t L_251;
		L_251 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_247, ((int32_t)25), L_250, NULL);
		V_5 = L_251;
		uint64_t L_252 = V_7;
		uint64_t L_253 = V_10;
		uint64_t L_254 = V_7;
		int64_t L_255 = ((int64_t)il2cpp_codegen_add((int64_t)L_253, (int64_t)L_254));
		V_10 = L_255;
		uint64_t L_256;
		L_256 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_252, ((int32_t)29), L_255, NULL);
		V_7 = L_256;
		uint64_t L_257 = V_9;
		uint64_t L_258 = V_4;
		uint64_t L_259 = V_9;
		int64_t L_260 = ((int64_t)il2cpp_codegen_add((int64_t)L_258, (int64_t)L_259));
		V_4 = L_260;
		uint64_t L_261;
		L_261 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_257, ((int32_t)39), L_260, NULL);
		V_9 = L_261;
		uint64_t L_262 = V_11;
		uint64_t L_263 = V_6;
		uint64_t L_264 = V_11;
		int64_t L_265 = ((int64_t)il2cpp_codegen_add((int64_t)L_263, (int64_t)L_264));
		V_6 = L_265;
		uint64_t L_266;
		L_266 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_262, ((int32_t)43), L_265, NULL);
		V_11 = L_266;
		uint64_t L_267 = V_5;
		uint64_t L_268 = V_10;
		uint64_t L_269 = V_5;
		int64_t L_270 = ((int64_t)il2cpp_codegen_add((int64_t)L_268, (int64_t)L_269));
		V_10 = L_270;
		uint64_t L_271;
		L_271 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_267, 8, L_270, NULL);
		V_5 = L_271;
		uint64_t L_272 = V_11;
		uint64_t L_273 = V_4;
		uint64_t L_274 = V_11;
		int64_t L_275 = ((int64_t)il2cpp_codegen_add((int64_t)L_273, (int64_t)L_274));
		V_4 = L_275;
		uint64_t L_276;
		L_276 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_272, ((int32_t)35), L_275, NULL);
		V_11 = L_276;
		uint64_t L_277 = V_9;
		uint64_t L_278 = V_6;
		uint64_t L_279 = V_9;
		int64_t L_280 = ((int64_t)il2cpp_codegen_add((int64_t)L_278, (int64_t)L_279));
		V_6 = L_280;
		uint64_t L_281;
		L_281 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_277, ((int32_t)56), L_280, NULL);
		V_9 = L_281;
		uint64_t L_282 = V_7;
		uint64_t L_283 = V_8;
		uint64_t L_284 = V_7;
		int64_t L_285 = ((int64_t)il2cpp_codegen_add((int64_t)L_283, (int64_t)L_284));
		V_8 = L_285;
		uint64_t L_286;
		L_286 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_282, ((int32_t)22), L_285, NULL);
		V_7 = L_286;
		uint64_t L_287 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_288 = V_0;
		int32_t L_289 = V_13;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)il2cpp_codegen_add(L_289, 1));
		int64_t L_291 = (int64_t)(L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_287, L_291));
		uint64_t L_292 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_293 = V_0;
		int32_t L_294 = V_13;
		NullCheck(L_293);
		int32_t L_295 = ((int32_t)il2cpp_codegen_add(L_294, 2));
		int64_t L_296 = (int64_t)(L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_292, L_296));
		uint64_t L_297 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_298 = V_0;
		int32_t L_299 = V_13;
		NullCheck(L_298);
		int32_t L_300 = ((int32_t)il2cpp_codegen_add(L_299, 3));
		int64_t L_301 = (int64_t)(L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_297, L_301));
		uint64_t L_302 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_303 = V_0;
		int32_t L_304 = V_13;
		NullCheck(L_303);
		int32_t L_305 = ((int32_t)il2cpp_codegen_add(L_304, 4));
		int64_t L_306 = (int64_t)(L_303)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_302, L_306));
		uint64_t L_307 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_308 = V_0;
		int32_t L_309 = V_13;
		NullCheck(L_308);
		int32_t L_310 = ((int32_t)il2cpp_codegen_add(L_309, 5));
		int64_t L_311 = (int64_t)(L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_307, L_311));
		uint64_t L_312 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		int32_t L_314 = V_13;
		NullCheck(L_313);
		int32_t L_315 = ((int32_t)il2cpp_codegen_add(L_314, 6));
		int64_t L_316 = (int64_t)(L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_1;
		int32_t L_318 = V_14;
		NullCheck(L_317);
		int32_t L_319 = ((int32_t)il2cpp_codegen_add(L_318, 1));
		int64_t L_320 = (int64_t)(L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_312, ((int64_t)il2cpp_codegen_add(L_316, L_320))));
		uint64_t L_321 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_322 = V_0;
		int32_t L_323 = V_13;
		NullCheck(L_322);
		int32_t L_324 = ((int32_t)il2cpp_codegen_add(L_323, 7));
		int64_t L_325 = (int64_t)(L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_326 = V_1;
		int32_t L_327 = V_14;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)il2cpp_codegen_add(L_327, 2));
		int64_t L_329 = (int64_t)(L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_321, ((int64_t)il2cpp_codegen_add(L_325, L_329))));
		uint64_t L_330 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_0;
		int32_t L_332 = V_13;
		NullCheck(L_331);
		int32_t L_333 = ((int32_t)il2cpp_codegen_add(L_332, 8));
		int64_t L_334 = (int64_t)(L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_330, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_334, ((int64_t)(uint64_t)((uint32_t)L_335)))), ((int64_t)1)))));
		int32_t L_336 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_336, 2));
	}

IL_03ef:
	{
		int32_t L_337 = V_12;
		if ((((int32_t)L_337) < ((int32_t)((int32_t)18))))
		{
			goto IL_00ab;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___1_outWords;
		uint64_t L_339 = V_4;
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___1_outWords;
		uint64_t L_341 = V_5;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___1_outWords;
		uint64_t L_343 = V_6;
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___1_outWords;
		uint64_t L_345 = V_7;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___1_outWords;
		uint64_t L_347 = V_8;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___1_outWords;
		uint64_t L_349 = V_9;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___1_outWords;
		uint64_t L_351 = V_10;
		NullCheck(L_350);
		(L_350)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___1_outWords;
		uint64_t L_353 = V_11;
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_DecryptBlock_m2D24BF5CDE7E08FA3B890BF57BDC0DD4A7D39E0D (Threefish512Cipher_tE8689411A08B13331D817FF9890869879C812849* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD9;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m2D24BF5CDE7E08FA3B890BF57BDC0DD4A7D39E0D_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m2D24BF5CDE7E08FA3B890BF57BDC0DD4A7D39E0D_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		V_12 = ((int32_t)17);
		goto IL_03c8;
	}

IL_0064:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		int32_t L_33 = V_12;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_13 = L_35;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_3;
		int32_t L_37 = V_12;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_14 = L_39;
		uint64_t L_40 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		int32_t L_42 = V_13;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int64_t L_44 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_40, L_44));
		uint64_t L_45 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = V_0;
		int32_t L_47 = V_13;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 2));
		int64_t L_49 = (int64_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_45, L_49));
		uint64_t L_50 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = V_0;
		int32_t L_52 = V_13;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 3));
		int64_t L_54 = (int64_t)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_50, L_54));
		uint64_t L_55 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_0;
		int32_t L_57 = V_13;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 4));
		int64_t L_59 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_55, L_59));
		uint64_t L_60 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		int32_t L_62 = V_13;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 5));
		int64_t L_64 = (int64_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_60, L_64));
		uint64_t L_65 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = V_0;
		int32_t L_67 = V_13;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 6));
		int64_t L_69 = (int64_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_1;
		int32_t L_71 = V_14;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		int64_t L_73 = (int64_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_65, ((int64_t)il2cpp_codegen_add(L_69, L_73))));
		uint64_t L_74 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_13;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 7));
		int64_t L_78 = (int64_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_79 = V_1;
		int32_t L_80 = V_14;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 2));
		int64_t L_82 = (int64_t)(L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, ((int64_t)il2cpp_codegen_add(L_78, L_82))));
		uint64_t L_83 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = V_0;
		int32_t L_85 = V_13;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 8));
		int64_t L_87 = (int64_t)(L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		int32_t L_88 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_83, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_87, ((int64_t)(uint64_t)((uint32_t)L_88)))), ((int64_t)1)))));
		uint64_t L_89 = V_5;
		uint64_t L_90 = V_10;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_91;
		L_91 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_89, 8, L_90, NULL);
		V_5 = L_91;
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_92, (int64_t)L_93));
		uint64_t L_94 = V_11;
		uint64_t L_95 = V_4;
		uint64_t L_96;
		L_96 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_94, ((int32_t)35), L_95, NULL);
		V_11 = L_96;
		uint64_t L_97 = V_4;
		uint64_t L_98 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_97, (int64_t)L_98));
		uint64_t L_99 = V_9;
		uint64_t L_100 = V_6;
		uint64_t L_101;
		L_101 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_99, ((int32_t)56), L_100, NULL);
		V_9 = L_101;
		uint64_t L_102 = V_6;
		uint64_t L_103 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_102, (int64_t)L_103));
		uint64_t L_104 = V_7;
		uint64_t L_105 = V_8;
		uint64_t L_106;
		L_106 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_104, ((int32_t)22), L_105, NULL);
		V_7 = L_106;
		uint64_t L_107 = V_8;
		uint64_t L_108 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_107, (int64_t)L_108));
		uint64_t L_109 = V_5;
		uint64_t L_110 = V_8;
		uint64_t L_111;
		L_111 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_109, ((int32_t)25), L_110, NULL);
		V_5 = L_111;
		uint64_t L_112 = V_8;
		uint64_t L_113 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_112, (int64_t)L_113));
		uint64_t L_114 = V_7;
		uint64_t L_115 = V_10;
		uint64_t L_116;
		L_116 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_114, ((int32_t)29), L_115, NULL);
		V_7 = L_116;
		uint64_t L_117 = V_10;
		uint64_t L_118 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_117, (int64_t)L_118));
		uint64_t L_119 = V_9;
		uint64_t L_120 = V_4;
		uint64_t L_121;
		L_121 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_119, ((int32_t)39), L_120, NULL);
		V_9 = L_121;
		uint64_t L_122 = V_4;
		uint64_t L_123 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_122, (int64_t)L_123));
		uint64_t L_124 = V_11;
		uint64_t L_125 = V_6;
		uint64_t L_126;
		L_126 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_124, ((int32_t)43), L_125, NULL);
		V_11 = L_126;
		uint64_t L_127 = V_6;
		uint64_t L_128 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_127, (int64_t)L_128));
		uint64_t L_129 = V_5;
		uint64_t L_130 = V_6;
		uint64_t L_131;
		L_131 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_129, ((int32_t)13), L_130, NULL);
		V_5 = L_131;
		uint64_t L_132 = V_6;
		uint64_t L_133 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_132, (int64_t)L_133));
		uint64_t L_134 = V_11;
		uint64_t L_135 = V_8;
		uint64_t L_136;
		L_136 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_134, ((int32_t)50), L_135, NULL);
		V_11 = L_136;
		uint64_t L_137 = V_8;
		uint64_t L_138 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_137, (int64_t)L_138));
		uint64_t L_139 = V_9;
		uint64_t L_140 = V_10;
		uint64_t L_141;
		L_141 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_139, ((int32_t)10), L_140, NULL);
		V_9 = L_141;
		uint64_t L_142 = V_10;
		uint64_t L_143 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_142, (int64_t)L_143));
		uint64_t L_144 = V_7;
		uint64_t L_145 = V_4;
		uint64_t L_146;
		L_146 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_144, ((int32_t)17), L_145, NULL);
		V_7 = L_146;
		uint64_t L_147 = V_4;
		uint64_t L_148 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, (int64_t)L_148));
		uint64_t L_149 = V_5;
		uint64_t L_150 = V_4;
		uint64_t L_151;
		L_151 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_149, ((int32_t)39), L_150, NULL);
		V_5 = L_151;
		uint64_t L_152 = V_4;
		uint64_t L_153 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_152, (int64_t)L_153));
		uint64_t L_154 = V_7;
		uint64_t L_155 = V_6;
		uint64_t L_156;
		L_156 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_154, ((int32_t)30), L_155, NULL);
		V_7 = L_156;
		uint64_t L_157 = V_6;
		uint64_t L_158 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_157, (int64_t)L_158));
		uint64_t L_159 = V_9;
		uint64_t L_160 = V_8;
		uint64_t L_161;
		L_161 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_159, ((int32_t)34), L_160, NULL);
		V_9 = L_161;
		uint64_t L_162 = V_8;
		uint64_t L_163 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_162, (int64_t)L_163));
		uint64_t L_164 = V_11;
		uint64_t L_165 = V_10;
		uint64_t L_166;
		L_166 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_164, ((int32_t)24), L_165, NULL);
		V_11 = L_166;
		uint64_t L_167 = V_10;
		uint64_t L_168 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_167, (int64_t)L_168));
		uint64_t L_169 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_170 = V_0;
		int32_t L_171 = V_13;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		int64_t L_173 = (int64_t)(L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_169, L_173));
		uint64_t L_174 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_175 = V_0;
		int32_t L_176 = V_13;
		NullCheck(L_175);
		int32_t L_177 = ((int32_t)il2cpp_codegen_add(L_176, 1));
		int64_t L_178 = (int64_t)(L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_174, L_178));
		uint64_t L_179 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = V_0;
		int32_t L_181 = V_13;
		NullCheck(L_180);
		int32_t L_182 = ((int32_t)il2cpp_codegen_add(L_181, 2));
		int64_t L_183 = (int64_t)(L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_179, L_183));
		uint64_t L_184 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_185 = V_0;
		int32_t L_186 = V_13;
		NullCheck(L_185);
		int32_t L_187 = ((int32_t)il2cpp_codegen_add(L_186, 3));
		int64_t L_188 = (int64_t)(L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_184, L_188));
		uint64_t L_189 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = V_0;
		int32_t L_191 = V_13;
		NullCheck(L_190);
		int32_t L_192 = ((int32_t)il2cpp_codegen_add(L_191, 4));
		int64_t L_193 = (int64_t)(L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_189, L_193));
		uint64_t L_194 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195 = V_0;
		int32_t L_196 = V_13;
		NullCheck(L_195);
		int32_t L_197 = ((int32_t)il2cpp_codegen_add(L_196, 5));
		int64_t L_198 = (int64_t)(L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_199 = V_1;
		int32_t L_200 = V_14;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		int64_t L_202 = (int64_t)(L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_194, ((int64_t)il2cpp_codegen_add(L_198, L_202))));
		uint64_t L_203 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_204 = V_0;
		int32_t L_205 = V_13;
		NullCheck(L_204);
		int32_t L_206 = ((int32_t)il2cpp_codegen_add(L_205, 6));
		int64_t L_207 = (int64_t)(L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_208 = V_1;
		int32_t L_209 = V_14;
		NullCheck(L_208);
		int32_t L_210 = ((int32_t)il2cpp_codegen_add(L_209, 1));
		int64_t L_211 = (int64_t)(L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_203, ((int64_t)il2cpp_codegen_add(L_207, L_211))));
		uint64_t L_212 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_213 = V_0;
		int32_t L_214 = V_13;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, 7));
		int64_t L_216 = (int64_t)(L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_212, ((int64_t)il2cpp_codegen_add(L_216, ((int64_t)(uint64_t)((uint32_t)L_217))))));
		uint64_t L_218 = V_5;
		uint64_t L_219 = V_10;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_218, ((int32_t)44), L_219, NULL);
		V_5 = L_220;
		uint64_t L_221 = V_10;
		uint64_t L_222 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		uint64_t L_223 = V_11;
		uint64_t L_224 = V_4;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_223, ((int32_t)9), L_224, NULL);
		V_11 = L_225;
		uint64_t L_226 = V_4;
		uint64_t L_227 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		uint64_t L_228 = V_9;
		uint64_t L_229 = V_6;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_228, ((int32_t)54), L_229, NULL);
		V_9 = L_230;
		uint64_t L_231 = V_6;
		uint64_t L_232 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		uint64_t L_233 = V_7;
		uint64_t L_234 = V_8;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_233, ((int32_t)56), L_234, NULL);
		V_7 = L_235;
		uint64_t L_236 = V_8;
		uint64_t L_237 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		uint64_t L_238 = V_5;
		uint64_t L_239 = V_8;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_238, ((int32_t)17), L_239, NULL);
		V_5 = L_240;
		uint64_t L_241 = V_8;
		uint64_t L_242 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		uint64_t L_243 = V_7;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_243, ((int32_t)49), L_244, NULL);
		V_7 = L_245;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		uint64_t L_248 = V_9;
		uint64_t L_249 = V_4;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_248, ((int32_t)36), L_249, NULL);
		V_9 = L_250;
		uint64_t L_251 = V_4;
		uint64_t L_252 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_6;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_253, ((int32_t)39), L_254, NULL);
		V_11 = L_255;
		uint64_t L_256 = V_6;
		uint64_t L_257 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		uint64_t L_258 = V_5;
		uint64_t L_259 = V_6;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_258, ((int32_t)33), L_259, NULL);
		V_5 = L_260;
		uint64_t L_261 = V_6;
		uint64_t L_262 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		uint64_t L_263 = V_11;
		uint64_t L_264 = V_8;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_263, ((int32_t)27), L_264, NULL);
		V_11 = L_265;
		uint64_t L_266 = V_8;
		uint64_t L_267 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		uint64_t L_268 = V_9;
		uint64_t L_269 = V_10;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_268, ((int32_t)14), L_269, NULL);
		V_9 = L_270;
		uint64_t L_271 = V_10;
		uint64_t L_272 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		uint64_t L_273 = V_7;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_273, ((int32_t)42), L_274, NULL);
		V_7 = L_275;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		uint64_t L_278 = V_5;
		uint64_t L_279 = V_4;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_278, ((int32_t)46), L_279, NULL);
		V_5 = L_280;
		uint64_t L_281 = V_4;
		uint64_t L_282 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		uint64_t L_283 = V_7;
		uint64_t L_284 = V_6;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_283, ((int32_t)36), L_284, NULL);
		V_7 = L_285;
		uint64_t L_286 = V_6;
		uint64_t L_287 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		uint64_t L_288 = V_9;
		uint64_t L_289 = V_8;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_288, ((int32_t)19), L_289, NULL);
		V_9 = L_290;
		uint64_t L_291 = V_8;
		uint64_t L_292 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		uint64_t L_293 = V_11;
		uint64_t L_294 = V_10;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_293, ((int32_t)37), L_294, NULL);
		V_11 = L_295;
		uint64_t L_296 = V_10;
		uint64_t L_297 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		int32_t L_298 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_298, 2));
	}

IL_03c8:
	{
		int32_t L_299 = V_12;
		if ((((int32_t)L_299) >= ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_300 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_301 = V_0;
		NullCheck(L_301);
		int32_t L_302 = 0;
		int64_t L_303 = (int64_t)(L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_300, L_303));
		uint64_t L_304 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		NullCheck(L_305);
		int32_t L_306 = 1;
		int64_t L_307 = (int64_t)(L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_306));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_304, L_307));
		uint64_t L_308 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_309 = V_0;
		NullCheck(L_309);
		int32_t L_310 = 2;
		int64_t L_311 = (int64_t)(L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_308, L_311));
		uint64_t L_312 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		NullCheck(L_313);
		int32_t L_314 = 3;
		int64_t L_315 = (int64_t)(L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_312, L_315));
		uint64_t L_316 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_0;
		NullCheck(L_317);
		int32_t L_318 = 4;
		int64_t L_319 = (int64_t)(L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_316, L_319));
		uint64_t L_320 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_321 = V_0;
		NullCheck(L_321);
		int32_t L_322 = 5;
		int64_t L_323 = (int64_t)(L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_1;
		NullCheck(L_324);
		int32_t L_325 = 0;
		int64_t L_326 = (int64_t)(L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_320, ((int64_t)il2cpp_codegen_add(L_323, L_326))));
		uint64_t L_327 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_328 = V_0;
		NullCheck(L_328);
		int32_t L_329 = 6;
		int64_t L_330 = (int64_t)(L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_1;
		NullCheck(L_331);
		int32_t L_332 = 1;
		int64_t L_333 = (int64_t)(L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_327, ((int64_t)il2cpp_codegen_add(L_330, L_333))));
		uint64_t L_334 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		NullCheck(L_335);
		int32_t L_336 = 7;
		int64_t L_337 = (int64_t)(L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_334, L_337));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___1_state;
		uint64_t L_339 = V_4;
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___1_state;
		uint64_t L_341 = V_5;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___1_state;
		uint64_t L_343 = V_6;
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___1_state;
		uint64_t L_345 = V_7;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___1_state;
		uint64_t L_347 = V_8;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___1_state;
		uint64_t L_349 = V_9;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___1_state;
		uint64_t L_351 = V_10;
		NullCheck(L_350);
		(L_350)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___1_state;
		uint64_t L_353 = V_11;
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher__ctor_m937D03ED4ADD92C0FFFAA69B1C932075428F4B50 (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		ThreefishCipher__ctor_m70AB9D7B20373AE32ED5A8D25DF80BB693724083(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_EncryptBlock_m45131977AD8A305EB64A5B0832DE80924FAE1733 (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
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
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_m45131977AD8A305EB64A5B0832DE80924FAE1733_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_m45131977AD8A305EB64A5B0832DE80924FAE1733_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_block;
		NullCheck(L_32);
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___0_block;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_block;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___0_block;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___0_block;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___0_block;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___0_block;
		NullCheck(L_50);
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___0_block;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		uint64_t L_56 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = 0;
		int64_t L_59 = (int64_t)(L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, L_59));
		uint64_t L_60 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = 1;
		int64_t L_63 = (int64_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, L_63));
		uint64_t L_64 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		NullCheck(L_65);
		int32_t L_66 = 2;
		int64_t L_67 = (int64_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, L_67));
		uint64_t L_68 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = 3;
		int64_t L_71 = (int64_t)(L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, L_71));
		uint64_t L_72 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = 4;
		int64_t L_75 = (int64_t)(L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, L_75));
		uint64_t L_76 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78 = 5;
		int64_t L_79 = (int64_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, L_79));
		uint64_t L_80 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = 6;
		int64_t L_83 = (int64_t)(L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, L_83));
		uint64_t L_84 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		NullCheck(L_85);
		int32_t L_86 = 7;
		int64_t L_87 = (int64_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, L_87));
		uint64_t L_88 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90 = 8;
		int64_t L_91 = (int64_t)(L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, L_91));
		uint64_t L_92 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = V_0;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)9);
		int64_t L_95 = (int64_t)(L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, L_95));
		uint64_t L_96 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_97 = V_0;
		NullCheck(L_97);
		int32_t L_98 = ((int32_t)10);
		int64_t L_99 = (int64_t)(L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_99));
		uint64_t L_100 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = V_0;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)11);
		int64_t L_103 = (int64_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, L_103));
		uint64_t L_104 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		NullCheck(L_105);
		int32_t L_106 = ((int32_t)12);
		int64_t L_107 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, L_107));
		uint64_t L_108 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = V_0;
		NullCheck(L_109);
		int32_t L_110 = ((int32_t)13);
		int64_t L_111 = (int64_t)(L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_112 = V_1;
		NullCheck(L_112);
		int32_t L_113 = 0;
		int64_t L_114 = (int64_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_108, ((int64_t)il2cpp_codegen_add(L_111, L_114))));
		uint64_t L_115 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = V_0;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)14);
		int64_t L_118 = (int64_t)(L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119 = V_1;
		NullCheck(L_119);
		int32_t L_120 = 1;
		int64_t L_121 = (int64_t)(L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)il2cpp_codegen_add(L_118, L_121))));
		uint64_t L_122 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124 = ((int32_t)15);
		int64_t L_125 = (int64_t)(L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, L_125));
		V_20 = 1;
		goto IL_0780;
	}

IL_0121:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_2;
		int32_t L_127 = V_20;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_21 = L_129;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = V_3;
		int32_t L_131 = V_20;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		int32_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		V_22 = L_133;
		uint64_t L_134 = V_5;
		uint64_t L_135 = V_4;
		uint64_t L_136 = V_5;
		int64_t L_137 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, (int64_t)L_136));
		V_4 = L_137;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_138;
		L_138 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_134, ((int32_t)24), L_137, NULL);
		V_5 = L_138;
		uint64_t L_139 = V_7;
		uint64_t L_140 = V_6;
		uint64_t L_141 = V_7;
		int64_t L_142 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		V_6 = L_142;
		uint64_t L_143;
		L_143 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_139, ((int32_t)13), L_142, NULL);
		V_7 = L_143;
		uint64_t L_144 = V_9;
		uint64_t L_145 = V_8;
		uint64_t L_146 = V_9;
		int64_t L_147 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)L_146));
		V_8 = L_147;
		uint64_t L_148;
		L_148 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_144, 8, L_147, NULL);
		V_9 = L_148;
		uint64_t L_149 = V_11;
		uint64_t L_150 = V_10;
		uint64_t L_151 = V_11;
		int64_t L_152 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_151));
		V_10 = L_152;
		uint64_t L_153;
		L_153 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_149, ((int32_t)47), L_152, NULL);
		V_11 = L_153;
		uint64_t L_154 = V_13;
		uint64_t L_155 = V_12;
		uint64_t L_156 = V_13;
		int64_t L_157 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)L_156));
		V_12 = L_157;
		uint64_t L_158;
		L_158 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_154, 8, L_157, NULL);
		V_13 = L_158;
		uint64_t L_159 = V_15;
		uint64_t L_160 = V_14;
		uint64_t L_161 = V_15;
		int64_t L_162 = ((int64_t)il2cpp_codegen_add((int64_t)L_160, (int64_t)L_161));
		V_14 = L_162;
		uint64_t L_163;
		L_163 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_159, ((int32_t)17), L_162, NULL);
		V_15 = L_163;
		uint64_t L_164 = V_17;
		uint64_t L_165 = V_16;
		uint64_t L_166 = V_17;
		int64_t L_167 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, (int64_t)L_166));
		V_16 = L_167;
		uint64_t L_168;
		L_168 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_164, ((int32_t)22), L_167, NULL);
		V_17 = L_168;
		uint64_t L_169 = V_19;
		uint64_t L_170 = V_18;
		uint64_t L_171 = V_19;
		int64_t L_172 = ((int64_t)il2cpp_codegen_add((int64_t)L_170, (int64_t)L_171));
		V_18 = L_172;
		uint64_t L_173;
		L_173 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_169, ((int32_t)37), L_172, NULL);
		V_19 = L_173;
		uint64_t L_174 = V_13;
		uint64_t L_175 = V_4;
		uint64_t L_176 = V_13;
		int64_t L_177 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, (int64_t)L_176));
		V_4 = L_177;
		uint64_t L_178;
		L_178 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_174, ((int32_t)38), L_177, NULL);
		V_13 = L_178;
		uint64_t L_179 = V_17;
		uint64_t L_180 = V_6;
		uint64_t L_181 = V_17;
		int64_t L_182 = ((int64_t)il2cpp_codegen_add((int64_t)L_180, (int64_t)L_181));
		V_6 = L_182;
		uint64_t L_183;
		L_183 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_179, ((int32_t)19), L_182, NULL);
		V_17 = L_183;
		uint64_t L_184 = V_15;
		uint64_t L_185 = V_10;
		uint64_t L_186 = V_15;
		int64_t L_187 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, (int64_t)L_186));
		V_10 = L_187;
		uint64_t L_188;
		L_188 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_184, ((int32_t)10), L_187, NULL);
		V_15 = L_188;
		uint64_t L_189 = V_19;
		uint64_t L_190 = V_8;
		uint64_t L_191 = V_19;
		int64_t L_192 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, (int64_t)L_191));
		V_8 = L_192;
		uint64_t L_193;
		L_193 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_189, ((int32_t)55), L_192, NULL);
		V_19 = L_193;
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_14;
		uint64_t L_196 = V_11;
		int64_t L_197 = ((int64_t)il2cpp_codegen_add((int64_t)L_195, (int64_t)L_196));
		V_14 = L_197;
		uint64_t L_198;
		L_198 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_194, ((int32_t)49), L_197, NULL);
		V_11 = L_198;
		uint64_t L_199 = V_7;
		uint64_t L_200 = V_16;
		uint64_t L_201 = V_7;
		int64_t L_202 = ((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)L_201));
		V_16 = L_202;
		uint64_t L_203;
		L_203 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_199, ((int32_t)18), L_202, NULL);
		V_7 = L_203;
		uint64_t L_204 = V_9;
		uint64_t L_205 = V_18;
		uint64_t L_206 = V_9;
		int64_t L_207 = ((int64_t)il2cpp_codegen_add((int64_t)L_205, (int64_t)L_206));
		V_18 = L_207;
		uint64_t L_208;
		L_208 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_204, ((int32_t)23), L_207, NULL);
		V_9 = L_208;
		uint64_t L_209 = V_5;
		uint64_t L_210 = V_12;
		uint64_t L_211 = V_5;
		int64_t L_212 = ((int64_t)il2cpp_codegen_add((int64_t)L_210, (int64_t)L_211));
		V_12 = L_212;
		uint64_t L_213;
		L_213 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_209, ((int32_t)52), L_212, NULL);
		V_5 = L_213;
		uint64_t L_214 = V_11;
		uint64_t L_215 = V_4;
		uint64_t L_216 = V_11;
		int64_t L_217 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, (int64_t)L_216));
		V_4 = L_217;
		uint64_t L_218;
		L_218 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_214, ((int32_t)33), L_217, NULL);
		V_11 = L_218;
		uint64_t L_219 = V_9;
		uint64_t L_220 = V_6;
		uint64_t L_221 = V_9;
		int64_t L_222 = ((int64_t)il2cpp_codegen_add((int64_t)L_220, (int64_t)L_221));
		V_6 = L_222;
		uint64_t L_223;
		L_223 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_219, 4, L_222, NULL);
		V_9 = L_223;
		uint64_t L_224 = V_7;
		uint64_t L_225 = V_8;
		uint64_t L_226 = V_7;
		int64_t L_227 = ((int64_t)il2cpp_codegen_add((int64_t)L_225, (int64_t)L_226));
		V_8 = L_227;
		uint64_t L_228;
		L_228 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_224, ((int32_t)51), L_227, NULL);
		V_7 = L_228;
		uint64_t L_229 = V_5;
		uint64_t L_230 = V_10;
		uint64_t L_231 = V_5;
		int64_t L_232 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, (int64_t)L_231));
		V_10 = L_232;
		uint64_t L_233;
		L_233 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_229, ((int32_t)13), L_232, NULL);
		V_5 = L_233;
		uint64_t L_234 = V_19;
		uint64_t L_235 = V_16;
		uint64_t L_236 = V_19;
		int64_t L_237 = ((int64_t)il2cpp_codegen_add((int64_t)L_235, (int64_t)L_236));
		V_16 = L_237;
		uint64_t L_238;
		L_238 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_234, ((int32_t)34), L_237, NULL);
		V_19 = L_238;
		uint64_t L_239 = V_17;
		uint64_t L_240 = V_18;
		uint64_t L_241 = V_17;
		int64_t L_242 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, (int64_t)L_241));
		V_18 = L_242;
		uint64_t L_243;
		L_243 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_239, ((int32_t)41), L_242, NULL);
		V_17 = L_243;
		uint64_t L_244 = V_15;
		uint64_t L_245 = V_12;
		uint64_t L_246 = V_15;
		int64_t L_247 = ((int64_t)il2cpp_codegen_add((int64_t)L_245, (int64_t)L_246));
		V_12 = L_247;
		uint64_t L_248;
		L_248 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_244, ((int32_t)59), L_247, NULL);
		V_15 = L_248;
		uint64_t L_249 = V_13;
		uint64_t L_250 = V_14;
		uint64_t L_251 = V_13;
		int64_t L_252 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, (int64_t)L_251));
		V_14 = L_252;
		uint64_t L_253;
		L_253 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_249, ((int32_t)17), L_252, NULL);
		V_13 = L_253;
		uint64_t L_254 = V_19;
		uint64_t L_255 = V_4;
		uint64_t L_256 = V_19;
		int64_t L_257 = ((int64_t)il2cpp_codegen_add((int64_t)L_255, (int64_t)L_256));
		V_4 = L_257;
		uint64_t L_258;
		L_258 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_254, 5, L_257, NULL);
		V_19 = L_258;
		uint64_t L_259 = V_15;
		uint64_t L_260 = V_6;
		uint64_t L_261 = V_15;
		int64_t L_262 = ((int64_t)il2cpp_codegen_add((int64_t)L_260, (int64_t)L_261));
		V_6 = L_262;
		uint64_t L_263;
		L_263 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_259, ((int32_t)20), L_262, NULL);
		V_15 = L_263;
		uint64_t L_264 = V_17;
		uint64_t L_265 = V_10;
		uint64_t L_266 = V_17;
		int64_t L_267 = ((int64_t)il2cpp_codegen_add((int64_t)L_265, (int64_t)L_266));
		V_10 = L_267;
		uint64_t L_268;
		L_268 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_264, ((int32_t)48), L_267, NULL);
		V_17 = L_268;
		uint64_t L_269 = V_13;
		uint64_t L_270 = V_8;
		uint64_t L_271 = V_13;
		int64_t L_272 = ((int64_t)il2cpp_codegen_add((int64_t)L_270, (int64_t)L_271));
		V_8 = L_272;
		uint64_t L_273;
		L_273 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_269, ((int32_t)41), L_272, NULL);
		V_13 = L_273;
		uint64_t L_274 = V_5;
		uint64_t L_275 = V_18;
		uint64_t L_276 = V_5;
		int64_t L_277 = ((int64_t)il2cpp_codegen_add((int64_t)L_275, (int64_t)L_276));
		V_18 = L_277;
		uint64_t L_278;
		L_278 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_274, ((int32_t)47), L_277, NULL);
		V_5 = L_278;
		uint64_t L_279 = V_9;
		uint64_t L_280 = V_12;
		uint64_t L_281 = V_9;
		int64_t L_282 = ((int64_t)il2cpp_codegen_add((int64_t)L_280, (int64_t)L_281));
		V_12 = L_282;
		uint64_t L_283;
		L_283 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_279, ((int32_t)28), L_282, NULL);
		V_9 = L_283;
		uint64_t L_284 = V_7;
		uint64_t L_285 = V_14;
		uint64_t L_286 = V_7;
		int64_t L_287 = ((int64_t)il2cpp_codegen_add((int64_t)L_285, (int64_t)L_286));
		V_14 = L_287;
		uint64_t L_288;
		L_288 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_284, ((int32_t)16), L_287, NULL);
		V_7 = L_288;
		uint64_t L_289 = V_11;
		uint64_t L_290 = V_16;
		uint64_t L_291 = V_11;
		int64_t L_292 = ((int64_t)il2cpp_codegen_add((int64_t)L_290, (int64_t)L_291));
		V_16 = L_292;
		uint64_t L_293;
		L_293 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_289, ((int32_t)25), L_292, NULL);
		V_11 = L_293;
		uint64_t L_294 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_295 = V_0;
		int32_t L_296 = V_21;
		NullCheck(L_295);
		int32_t L_297 = L_296;
		int64_t L_298 = (int64_t)(L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_294, L_298));
		uint64_t L_299 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_300 = V_0;
		int32_t L_301 = V_21;
		NullCheck(L_300);
		int32_t L_302 = ((int32_t)il2cpp_codegen_add(L_301, 1));
		int64_t L_303 = (int64_t)(L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_299, L_303));
		uint64_t L_304 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		int32_t L_306 = V_21;
		NullCheck(L_305);
		int32_t L_307 = ((int32_t)il2cpp_codegen_add(L_306, 2));
		int64_t L_308 = (int64_t)(L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_304, L_308));
		uint64_t L_309 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_310 = V_0;
		int32_t L_311 = V_21;
		NullCheck(L_310);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add(L_311, 3));
		int64_t L_313 = (int64_t)(L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_309, L_313));
		uint64_t L_314 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_315 = V_0;
		int32_t L_316 = V_21;
		NullCheck(L_315);
		int32_t L_317 = ((int32_t)il2cpp_codegen_add(L_316, 4));
		int64_t L_318 = (int64_t)(L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_314, L_318));
		uint64_t L_319 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_320 = V_0;
		int32_t L_321 = V_21;
		NullCheck(L_320);
		int32_t L_322 = ((int32_t)il2cpp_codegen_add(L_321, 5));
		int64_t L_323 = (int64_t)(L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_319, L_323));
		uint64_t L_324 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_325 = V_0;
		int32_t L_326 = V_21;
		NullCheck(L_325);
		int32_t L_327 = ((int32_t)il2cpp_codegen_add(L_326, 6));
		int64_t L_328 = (int64_t)(L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_324, L_328));
		uint64_t L_329 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_330 = V_0;
		int32_t L_331 = V_21;
		NullCheck(L_330);
		int32_t L_332 = ((int32_t)il2cpp_codegen_add(L_331, 7));
		int64_t L_333 = (int64_t)(L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_329, L_333));
		uint64_t L_334 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		int32_t L_336 = V_21;
		NullCheck(L_335);
		int32_t L_337 = ((int32_t)il2cpp_codegen_add(L_336, 8));
		int64_t L_338 = (int64_t)(L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_334, L_338));
		uint64_t L_339 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = V_0;
		int32_t L_341 = V_21;
		NullCheck(L_340);
		int32_t L_342 = ((int32_t)il2cpp_codegen_add(L_341, ((int32_t)9)));
		int64_t L_343 = (int64_t)(L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_339, L_343));
		uint64_t L_344 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_345 = V_0;
		int32_t L_346 = V_21;
		NullCheck(L_345);
		int32_t L_347 = ((int32_t)il2cpp_codegen_add(L_346, ((int32_t)10)));
		int64_t L_348 = (int64_t)(L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_344, L_348));
		uint64_t L_349 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = V_0;
		int32_t L_351 = V_21;
		NullCheck(L_350);
		int32_t L_352 = ((int32_t)il2cpp_codegen_add(L_351, ((int32_t)11)));
		int64_t L_353 = (int64_t)(L_350)->GetAt(static_cast<il2cpp_array_size_t>(L_352));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_349, L_353));
		uint64_t L_354 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_355 = V_0;
		int32_t L_356 = V_21;
		NullCheck(L_355);
		int32_t L_357 = ((int32_t)il2cpp_codegen_add(L_356, ((int32_t)12)));
		int64_t L_358 = (int64_t)(L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_354, L_358));
		uint64_t L_359 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_360 = V_0;
		int32_t L_361 = V_21;
		NullCheck(L_360);
		int32_t L_362 = ((int32_t)il2cpp_codegen_add(L_361, ((int32_t)13)));
		int64_t L_363 = (int64_t)(L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_1;
		int32_t L_365 = V_22;
		NullCheck(L_364);
		int32_t L_366 = L_365;
		int64_t L_367 = (int64_t)(L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_359, ((int64_t)il2cpp_codegen_add(L_363, L_367))));
		uint64_t L_368 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)14)));
		int64_t L_372 = (int64_t)(L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_373 = V_1;
		int32_t L_374 = V_22;
		NullCheck(L_373);
		int32_t L_375 = ((int32_t)il2cpp_codegen_add(L_374, 1));
		int64_t L_376 = (int64_t)(L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_375));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_368, ((int64_t)il2cpp_codegen_add(L_372, L_376))));
		uint64_t L_377 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_378 = V_0;
		int32_t L_379 = V_21;
		NullCheck(L_378);
		int32_t L_380 = ((int32_t)il2cpp_codegen_add(L_379, ((int32_t)15)));
		int64_t L_381 = (int64_t)(L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		int32_t L_382 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_377, ((int64_t)il2cpp_codegen_add(L_381, ((int64_t)(uint64_t)((uint32_t)L_382))))));
		uint64_t L_383 = V_5;
		uint64_t L_384 = V_4;
		uint64_t L_385 = V_5;
		int64_t L_386 = ((int64_t)il2cpp_codegen_add((int64_t)L_384, (int64_t)L_385));
		V_4 = L_386;
		uint64_t L_387;
		L_387 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_383, ((int32_t)41), L_386, NULL);
		V_5 = L_387;
		uint64_t L_388 = V_7;
		uint64_t L_389 = V_6;
		uint64_t L_390 = V_7;
		int64_t L_391 = ((int64_t)il2cpp_codegen_add((int64_t)L_389, (int64_t)L_390));
		V_6 = L_391;
		uint64_t L_392;
		L_392 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_388, ((int32_t)9), L_391, NULL);
		V_7 = L_392;
		uint64_t L_393 = V_9;
		uint64_t L_394 = V_8;
		uint64_t L_395 = V_9;
		int64_t L_396 = ((int64_t)il2cpp_codegen_add((int64_t)L_394, (int64_t)L_395));
		V_8 = L_396;
		uint64_t L_397;
		L_397 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_393, ((int32_t)37), L_396, NULL);
		V_9 = L_397;
		uint64_t L_398 = V_11;
		uint64_t L_399 = V_10;
		uint64_t L_400 = V_11;
		int64_t L_401 = ((int64_t)il2cpp_codegen_add((int64_t)L_399, (int64_t)L_400));
		V_10 = L_401;
		uint64_t L_402;
		L_402 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_398, ((int32_t)31), L_401, NULL);
		V_11 = L_402;
		uint64_t L_403 = V_13;
		uint64_t L_404 = V_12;
		uint64_t L_405 = V_13;
		int64_t L_406 = ((int64_t)il2cpp_codegen_add((int64_t)L_404, (int64_t)L_405));
		V_12 = L_406;
		uint64_t L_407;
		L_407 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_403, ((int32_t)12), L_406, NULL);
		V_13 = L_407;
		uint64_t L_408 = V_15;
		uint64_t L_409 = V_14;
		uint64_t L_410 = V_15;
		int64_t L_411 = ((int64_t)il2cpp_codegen_add((int64_t)L_409, (int64_t)L_410));
		V_14 = L_411;
		uint64_t L_412;
		L_412 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_408, ((int32_t)47), L_411, NULL);
		V_15 = L_412;
		uint64_t L_413 = V_17;
		uint64_t L_414 = V_16;
		uint64_t L_415 = V_17;
		int64_t L_416 = ((int64_t)il2cpp_codegen_add((int64_t)L_414, (int64_t)L_415));
		V_16 = L_416;
		uint64_t L_417;
		L_417 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_413, ((int32_t)44), L_416, NULL);
		V_17 = L_417;
		uint64_t L_418 = V_19;
		uint64_t L_419 = V_18;
		uint64_t L_420 = V_19;
		int64_t L_421 = ((int64_t)il2cpp_codegen_add((int64_t)L_419, (int64_t)L_420));
		V_18 = L_421;
		uint64_t L_422;
		L_422 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_418, ((int32_t)30), L_421, NULL);
		V_19 = L_422;
		uint64_t L_423 = V_13;
		uint64_t L_424 = V_4;
		uint64_t L_425 = V_13;
		int64_t L_426 = ((int64_t)il2cpp_codegen_add((int64_t)L_424, (int64_t)L_425));
		V_4 = L_426;
		uint64_t L_427;
		L_427 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_423, ((int32_t)16), L_426, NULL);
		V_13 = L_427;
		uint64_t L_428 = V_17;
		uint64_t L_429 = V_6;
		uint64_t L_430 = V_17;
		int64_t L_431 = ((int64_t)il2cpp_codegen_add((int64_t)L_429, (int64_t)L_430));
		V_6 = L_431;
		uint64_t L_432;
		L_432 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_428, ((int32_t)34), L_431, NULL);
		V_17 = L_432;
		uint64_t L_433 = V_15;
		uint64_t L_434 = V_10;
		uint64_t L_435 = V_15;
		int64_t L_436 = ((int64_t)il2cpp_codegen_add((int64_t)L_434, (int64_t)L_435));
		V_10 = L_436;
		uint64_t L_437;
		L_437 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_433, ((int32_t)56), L_436, NULL);
		V_15 = L_437;
		uint64_t L_438 = V_19;
		uint64_t L_439 = V_8;
		uint64_t L_440 = V_19;
		int64_t L_441 = ((int64_t)il2cpp_codegen_add((int64_t)L_439, (int64_t)L_440));
		V_8 = L_441;
		uint64_t L_442;
		L_442 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_438, ((int32_t)51), L_441, NULL);
		V_19 = L_442;
		uint64_t L_443 = V_11;
		uint64_t L_444 = V_14;
		uint64_t L_445 = V_11;
		int64_t L_446 = ((int64_t)il2cpp_codegen_add((int64_t)L_444, (int64_t)L_445));
		V_14 = L_446;
		uint64_t L_447;
		L_447 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_443, 4, L_446, NULL);
		V_11 = L_447;
		uint64_t L_448 = V_7;
		uint64_t L_449 = V_16;
		uint64_t L_450 = V_7;
		int64_t L_451 = ((int64_t)il2cpp_codegen_add((int64_t)L_449, (int64_t)L_450));
		V_16 = L_451;
		uint64_t L_452;
		L_452 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_448, ((int32_t)53), L_451, NULL);
		V_7 = L_452;
		uint64_t L_453 = V_9;
		uint64_t L_454 = V_18;
		uint64_t L_455 = V_9;
		int64_t L_456 = ((int64_t)il2cpp_codegen_add((int64_t)L_454, (int64_t)L_455));
		V_18 = L_456;
		uint64_t L_457;
		L_457 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_453, ((int32_t)42), L_456, NULL);
		V_9 = L_457;
		uint64_t L_458 = V_5;
		uint64_t L_459 = V_12;
		uint64_t L_460 = V_5;
		int64_t L_461 = ((int64_t)il2cpp_codegen_add((int64_t)L_459, (int64_t)L_460));
		V_12 = L_461;
		uint64_t L_462;
		L_462 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_458, ((int32_t)41), L_461, NULL);
		V_5 = L_462;
		uint64_t L_463 = V_11;
		uint64_t L_464 = V_4;
		uint64_t L_465 = V_11;
		int64_t L_466 = ((int64_t)il2cpp_codegen_add((int64_t)L_464, (int64_t)L_465));
		V_4 = L_466;
		uint64_t L_467;
		L_467 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_463, ((int32_t)31), L_466, NULL);
		V_11 = L_467;
		uint64_t L_468 = V_9;
		uint64_t L_469 = V_6;
		uint64_t L_470 = V_9;
		int64_t L_471 = ((int64_t)il2cpp_codegen_add((int64_t)L_469, (int64_t)L_470));
		V_6 = L_471;
		uint64_t L_472;
		L_472 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_468, ((int32_t)44), L_471, NULL);
		V_9 = L_472;
		uint64_t L_473 = V_7;
		uint64_t L_474 = V_8;
		uint64_t L_475 = V_7;
		int64_t L_476 = ((int64_t)il2cpp_codegen_add((int64_t)L_474, (int64_t)L_475));
		V_8 = L_476;
		uint64_t L_477;
		L_477 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_473, ((int32_t)47), L_476, NULL);
		V_7 = L_477;
		uint64_t L_478 = V_5;
		uint64_t L_479 = V_10;
		uint64_t L_480 = V_5;
		int64_t L_481 = ((int64_t)il2cpp_codegen_add((int64_t)L_479, (int64_t)L_480));
		V_10 = L_481;
		uint64_t L_482;
		L_482 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_478, ((int32_t)46), L_481, NULL);
		V_5 = L_482;
		uint64_t L_483 = V_19;
		uint64_t L_484 = V_16;
		uint64_t L_485 = V_19;
		int64_t L_486 = ((int64_t)il2cpp_codegen_add((int64_t)L_484, (int64_t)L_485));
		V_16 = L_486;
		uint64_t L_487;
		L_487 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_483, ((int32_t)19), L_486, NULL);
		V_19 = L_487;
		uint64_t L_488 = V_17;
		uint64_t L_489 = V_18;
		uint64_t L_490 = V_17;
		int64_t L_491 = ((int64_t)il2cpp_codegen_add((int64_t)L_489, (int64_t)L_490));
		V_18 = L_491;
		uint64_t L_492;
		L_492 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_488, ((int32_t)42), L_491, NULL);
		V_17 = L_492;
		uint64_t L_493 = V_15;
		uint64_t L_494 = V_12;
		uint64_t L_495 = V_15;
		int64_t L_496 = ((int64_t)il2cpp_codegen_add((int64_t)L_494, (int64_t)L_495));
		V_12 = L_496;
		uint64_t L_497;
		L_497 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_493, ((int32_t)44), L_496, NULL);
		V_15 = L_497;
		uint64_t L_498 = V_13;
		uint64_t L_499 = V_14;
		uint64_t L_500 = V_13;
		int64_t L_501 = ((int64_t)il2cpp_codegen_add((int64_t)L_499, (int64_t)L_500));
		V_14 = L_501;
		uint64_t L_502;
		L_502 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_498, ((int32_t)25), L_501, NULL);
		V_13 = L_502;
		uint64_t L_503 = V_19;
		uint64_t L_504 = V_4;
		uint64_t L_505 = V_19;
		int64_t L_506 = ((int64_t)il2cpp_codegen_add((int64_t)L_504, (int64_t)L_505));
		V_4 = L_506;
		uint64_t L_507;
		L_507 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_503, ((int32_t)9), L_506, NULL);
		V_19 = L_507;
		uint64_t L_508 = V_15;
		uint64_t L_509 = V_6;
		uint64_t L_510 = V_15;
		int64_t L_511 = ((int64_t)il2cpp_codegen_add((int64_t)L_509, (int64_t)L_510));
		V_6 = L_511;
		uint64_t L_512;
		L_512 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_508, ((int32_t)48), L_511, NULL);
		V_15 = L_512;
		uint64_t L_513 = V_17;
		uint64_t L_514 = V_10;
		uint64_t L_515 = V_17;
		int64_t L_516 = ((int64_t)il2cpp_codegen_add((int64_t)L_514, (int64_t)L_515));
		V_10 = L_516;
		uint64_t L_517;
		L_517 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_513, ((int32_t)35), L_516, NULL);
		V_17 = L_517;
		uint64_t L_518 = V_13;
		uint64_t L_519 = V_8;
		uint64_t L_520 = V_13;
		int64_t L_521 = ((int64_t)il2cpp_codegen_add((int64_t)L_519, (int64_t)L_520));
		V_8 = L_521;
		uint64_t L_522;
		L_522 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_518, ((int32_t)52), L_521, NULL);
		V_13 = L_522;
		uint64_t L_523 = V_5;
		uint64_t L_524 = V_18;
		uint64_t L_525 = V_5;
		int64_t L_526 = ((int64_t)il2cpp_codegen_add((int64_t)L_524, (int64_t)L_525));
		V_18 = L_526;
		uint64_t L_527;
		L_527 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_523, ((int32_t)23), L_526, NULL);
		V_5 = L_527;
		uint64_t L_528 = V_9;
		uint64_t L_529 = V_12;
		uint64_t L_530 = V_9;
		int64_t L_531 = ((int64_t)il2cpp_codegen_add((int64_t)L_529, (int64_t)L_530));
		V_12 = L_531;
		uint64_t L_532;
		L_532 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_528, ((int32_t)31), L_531, NULL);
		V_9 = L_532;
		uint64_t L_533 = V_7;
		uint64_t L_534 = V_14;
		uint64_t L_535 = V_7;
		int64_t L_536 = ((int64_t)il2cpp_codegen_add((int64_t)L_534, (int64_t)L_535));
		V_14 = L_536;
		uint64_t L_537;
		L_537 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_533, ((int32_t)37), L_536, NULL);
		V_7 = L_537;
		uint64_t L_538 = V_11;
		uint64_t L_539 = V_16;
		uint64_t L_540 = V_11;
		int64_t L_541 = ((int64_t)il2cpp_codegen_add((int64_t)L_539, (int64_t)L_540));
		V_16 = L_541;
		uint64_t L_542;
		L_542 = ThreefishEngine_RotlXor_mFEC5CE075C30FFDEF40BA502DD146615A83F5EED(L_538, ((int32_t)20), L_541, NULL);
		V_11 = L_542;
		uint64_t L_543 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_544 = V_0;
		int32_t L_545 = V_21;
		NullCheck(L_544);
		int32_t L_546 = ((int32_t)il2cpp_codegen_add(L_545, 1));
		int64_t L_547 = (int64_t)(L_544)->GetAt(static_cast<il2cpp_array_size_t>(L_546));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_543, L_547));
		uint64_t L_548 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_549 = V_0;
		int32_t L_550 = V_21;
		NullCheck(L_549);
		int32_t L_551 = ((int32_t)il2cpp_codegen_add(L_550, 2));
		int64_t L_552 = (int64_t)(L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_551));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_548, L_552));
		uint64_t L_553 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_554 = V_0;
		int32_t L_555 = V_21;
		NullCheck(L_554);
		int32_t L_556 = ((int32_t)il2cpp_codegen_add(L_555, 3));
		int64_t L_557 = (int64_t)(L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_553, L_557));
		uint64_t L_558 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_559 = V_0;
		int32_t L_560 = V_21;
		NullCheck(L_559);
		int32_t L_561 = ((int32_t)il2cpp_codegen_add(L_560, 4));
		int64_t L_562 = (int64_t)(L_559)->GetAt(static_cast<il2cpp_array_size_t>(L_561));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_558, L_562));
		uint64_t L_563 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_564 = V_0;
		int32_t L_565 = V_21;
		NullCheck(L_564);
		int32_t L_566 = ((int32_t)il2cpp_codegen_add(L_565, 5));
		int64_t L_567 = (int64_t)(L_564)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_563, L_567));
		uint64_t L_568 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		int32_t L_570 = V_21;
		NullCheck(L_569);
		int32_t L_571 = ((int32_t)il2cpp_codegen_add(L_570, 6));
		int64_t L_572 = (int64_t)(L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_571));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_568, L_572));
		uint64_t L_573 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_574 = V_0;
		int32_t L_575 = V_21;
		NullCheck(L_574);
		int32_t L_576 = ((int32_t)il2cpp_codegen_add(L_575, 7));
		int64_t L_577 = (int64_t)(L_574)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_573, L_577));
		uint64_t L_578 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_579 = V_0;
		int32_t L_580 = V_21;
		NullCheck(L_579);
		int32_t L_581 = ((int32_t)il2cpp_codegen_add(L_580, 8));
		int64_t L_582 = (int64_t)(L_579)->GetAt(static_cast<il2cpp_array_size_t>(L_581));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_578, L_582));
		uint64_t L_583 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_584 = V_0;
		int32_t L_585 = V_21;
		NullCheck(L_584);
		int32_t L_586 = ((int32_t)il2cpp_codegen_add(L_585, ((int32_t)9)));
		int64_t L_587 = (int64_t)(L_584)->GetAt(static_cast<il2cpp_array_size_t>(L_586));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_583, L_587));
		uint64_t L_588 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		int32_t L_590 = V_21;
		NullCheck(L_589);
		int32_t L_591 = ((int32_t)il2cpp_codegen_add(L_590, ((int32_t)10)));
		int64_t L_592 = (int64_t)(L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_591));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_588, L_592));
		uint64_t L_593 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_594 = V_0;
		int32_t L_595 = V_21;
		NullCheck(L_594);
		int32_t L_596 = ((int32_t)il2cpp_codegen_add(L_595, ((int32_t)11)));
		int64_t L_597 = (int64_t)(L_594)->GetAt(static_cast<il2cpp_array_size_t>(L_596));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_593, L_597));
		uint64_t L_598 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_599 = V_0;
		int32_t L_600 = V_21;
		NullCheck(L_599);
		int32_t L_601 = ((int32_t)il2cpp_codegen_add(L_600, ((int32_t)12)));
		int64_t L_602 = (int64_t)(L_599)->GetAt(static_cast<il2cpp_array_size_t>(L_601));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_598, L_602));
		uint64_t L_603 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_604 = V_0;
		int32_t L_605 = V_21;
		NullCheck(L_604);
		int32_t L_606 = ((int32_t)il2cpp_codegen_add(L_605, ((int32_t)13)));
		int64_t L_607 = (int64_t)(L_604)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_603, L_607));
		uint64_t L_608 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		int32_t L_610 = V_21;
		NullCheck(L_609);
		int32_t L_611 = ((int32_t)il2cpp_codegen_add(L_610, ((int32_t)14)));
		int64_t L_612 = (int64_t)(L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_611));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_1;
		int32_t L_614 = V_22;
		NullCheck(L_613);
		int32_t L_615 = ((int32_t)il2cpp_codegen_add(L_614, 1));
		int64_t L_616 = (int64_t)(L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_615));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_608, ((int64_t)il2cpp_codegen_add(L_612, L_616))));
		uint64_t L_617 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_618 = V_0;
		int32_t L_619 = V_21;
		NullCheck(L_618);
		int32_t L_620 = ((int32_t)il2cpp_codegen_add(L_619, ((int32_t)15)));
		int64_t L_621 = (int64_t)(L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_620));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_622 = V_1;
		int32_t L_623 = V_22;
		NullCheck(L_622);
		int32_t L_624 = ((int32_t)il2cpp_codegen_add(L_623, 2));
		int64_t L_625 = (int64_t)(L_622)->GetAt(static_cast<il2cpp_array_size_t>(L_624));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_617, ((int64_t)il2cpp_codegen_add(L_621, L_625))));
		uint64_t L_626 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_0;
		int32_t L_628 = V_21;
		NullCheck(L_627);
		int32_t L_629 = ((int32_t)il2cpp_codegen_add(L_628, ((int32_t)16)));
		int64_t L_630 = (int64_t)(L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_629));
		int32_t L_631 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_626, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_630, ((int64_t)(uint64_t)((uint32_t)L_631)))), ((int64_t)1)))));
		int32_t L_632 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_632, 2));
	}

IL_0780:
	{
		int32_t L_633 = V_20;
		if ((((int32_t)L_633) < ((int32_t)((int32_t)20))))
		{
			goto IL_0121;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___1_outWords;
		uint64_t L_635 = V_4;
		NullCheck(L_634);
		(L_634)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___1_outWords;
		uint64_t L_637 = V_5;
		NullCheck(L_636);
		(L_636)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___1_outWords;
		uint64_t L_639 = V_6;
		NullCheck(L_638);
		(L_638)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___1_outWords;
		uint64_t L_641 = V_7;
		NullCheck(L_640);
		(L_640)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___1_outWords;
		uint64_t L_643 = V_8;
		NullCheck(L_642);
		(L_642)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___1_outWords;
		uint64_t L_645 = V_9;
		NullCheck(L_644);
		(L_644)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___1_outWords;
		uint64_t L_647 = V_10;
		NullCheck(L_646);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___1_outWords;
		uint64_t L_649 = V_11;
		NullCheck(L_648);
		(L_648)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___1_outWords;
		uint64_t L_651 = V_12;
		NullCheck(L_650);
		(L_650)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___1_outWords;
		uint64_t L_653 = V_13;
		NullCheck(L_652);
		(L_652)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___1_outWords;
		uint64_t L_655 = V_14;
		NullCheck(L_654);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___1_outWords;
		uint64_t L_657 = V_15;
		NullCheck(L_656);
		(L_656)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___1_outWords;
		uint64_t L_659 = V_16;
		NullCheck(L_658);
		(L_658)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___1_outWords;
		uint64_t L_661 = V_17;
		NullCheck(L_660);
		(L_660)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___1_outWords;
		uint64_t L_663 = V_18;
		NullCheck(L_662);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___1_outWords;
		uint64_t L_665 = V_19;
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_DecryptBlock_mEC7C7B885524F34A83C73C5A07036F5303EC6915 (Threefish1024Cipher_t945C7AECC989E4EF92F42DE50A403E1FFAF44506* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
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
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___kw;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747*)__this)->___t;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD17;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var))->___MOD3;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_mEC7C7B885524F34A83C73C5A07036F5303EC6915_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_mEC7C7B885524F34A83C73C5A07036F5303EC6915_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_block;
		NullCheck(L_32);
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___0_block;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_block;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___0_block;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___0_block;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___0_block;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___0_block;
		NullCheck(L_50);
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___0_block;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		V_20 = ((int32_t)19);
		goto IL_0732;
	}

IL_0093:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		int32_t L_57 = V_20;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_21 = L_59;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_3;
		int32_t L_61 = V_20;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_22 = L_63;
		uint64_t L_64 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		int32_t L_66 = V_21;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		int64_t L_68 = (int64_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_64, L_68));
		uint64_t L_69 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_0;
		int32_t L_71 = V_21;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 2));
		int64_t L_73 = (int64_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_69, L_73));
		uint64_t L_74 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_21;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 3));
		int64_t L_78 = (int64_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, L_78));
		uint64_t L_79 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = V_0;
		int32_t L_81 = V_21;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 4));
		int64_t L_83 = (int64_t)(L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_79, L_83));
		uint64_t L_84 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		int32_t L_86 = V_21;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		int64_t L_88 = (int64_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_84, L_88));
		uint64_t L_89 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_90 = V_0;
		int32_t L_91 = V_21;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 6));
		int64_t L_93 = (int64_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_89, L_93));
		uint64_t L_94 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = V_0;
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 7));
		int64_t L_98 = (int64_t)(L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_94, L_98));
		uint64_t L_99 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_0;
		int32_t L_101 = V_21;
		NullCheck(L_100);
		int32_t L_102 = ((int32_t)il2cpp_codegen_add(L_101, 8));
		int64_t L_103 = (int64_t)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_99, L_103));
		uint64_t L_104 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		int32_t L_106 = V_21;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)9)));
		int64_t L_108 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_104, L_108));
		uint64_t L_109 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_110 = V_0;
		int32_t L_111 = V_21;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)10)));
		int64_t L_113 = (int64_t)(L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_109, L_113));
		uint64_t L_114 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_115 = V_0;
		int32_t L_116 = V_21;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, ((int32_t)11)));
		int64_t L_118 = (int64_t)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_114, L_118));
		uint64_t L_119 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_120 = V_0;
		int32_t L_121 = V_21;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, ((int32_t)12)));
		int64_t L_123 = (int64_t)(L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_119, L_123));
		uint64_t L_124 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125 = V_0;
		int32_t L_126 = V_21;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, ((int32_t)13)));
		int64_t L_128 = (int64_t)(L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_124, L_128));
		uint64_t L_129 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_130 = V_0;
		int32_t L_131 = V_21;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, ((int32_t)14)));
		int64_t L_133 = (int64_t)(L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134 = V_1;
		int32_t L_135 = V_22;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int64_t L_137 = (int64_t)(L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_129, ((int64_t)il2cpp_codegen_add(L_133, L_137))));
		uint64_t L_138 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_139 = V_0;
		int32_t L_140 = V_21;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, ((int32_t)15)));
		int64_t L_142 = (int64_t)(L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143 = V_1;
		int32_t L_144 = V_22;
		NullCheck(L_143);
		int32_t L_145 = ((int32_t)il2cpp_codegen_add(L_144, 2));
		int64_t L_146 = (int64_t)(L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_138, ((int64_t)il2cpp_codegen_add(L_142, L_146))));
		uint64_t L_147 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_148 = V_0;
		int32_t L_149 = V_21;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, ((int32_t)16)));
		int64_t L_151 = (int64_t)(L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		int32_t L_152 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_151, ((int64_t)(uint64_t)((uint32_t)L_152)))), ((int64_t)1)))));
		uint64_t L_153 = V_19;
		uint64_t L_154 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_155;
		L_155 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_153, ((int32_t)9), L_154, NULL);
		V_19 = L_155;
		uint64_t L_156 = V_4;
		uint64_t L_157 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_156, (int64_t)L_157));
		uint64_t L_158 = V_15;
		uint64_t L_159 = V_6;
		uint64_t L_160;
		L_160 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_158, ((int32_t)48), L_159, NULL);
		V_15 = L_160;
		uint64_t L_161 = V_6;
		uint64_t L_162 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_161, (int64_t)L_162));
		uint64_t L_163 = V_17;
		uint64_t L_164 = V_10;
		uint64_t L_165;
		L_165 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_163, ((int32_t)35), L_164, NULL);
		V_17 = L_165;
		uint64_t L_166 = V_10;
		uint64_t L_167 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_166, (int64_t)L_167));
		uint64_t L_168 = V_13;
		uint64_t L_169 = V_8;
		uint64_t L_170;
		L_170 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_168, ((int32_t)52), L_169, NULL);
		V_13 = L_170;
		uint64_t L_171 = V_8;
		uint64_t L_172 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_171, (int64_t)L_172));
		uint64_t L_173 = V_5;
		uint64_t L_174 = V_18;
		uint64_t L_175;
		L_175 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_173, ((int32_t)23), L_174, NULL);
		V_5 = L_175;
		uint64_t L_176 = V_18;
		uint64_t L_177 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_176, (int64_t)L_177));
		uint64_t L_178 = V_9;
		uint64_t L_179 = V_12;
		uint64_t L_180;
		L_180 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_178, ((int32_t)31), L_179, NULL);
		V_9 = L_180;
		uint64_t L_181 = V_12;
		uint64_t L_182 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_181, (int64_t)L_182));
		uint64_t L_183 = V_7;
		uint64_t L_184 = V_14;
		uint64_t L_185;
		L_185 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_183, ((int32_t)37), L_184, NULL);
		V_7 = L_185;
		uint64_t L_186 = V_14;
		uint64_t L_187 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_186, (int64_t)L_187));
		uint64_t L_188 = V_11;
		uint64_t L_189 = V_16;
		uint64_t L_190;
		L_190 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_188, ((int32_t)20), L_189, NULL);
		V_11 = L_190;
		uint64_t L_191 = V_16;
		uint64_t L_192 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_191, (int64_t)L_192));
		uint64_t L_193 = V_11;
		uint64_t L_194 = V_4;
		uint64_t L_195;
		L_195 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_193, ((int32_t)31), L_194, NULL);
		V_11 = L_195;
		uint64_t L_196 = V_4;
		uint64_t L_197 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_196, (int64_t)L_197));
		uint64_t L_198 = V_9;
		uint64_t L_199 = V_6;
		uint64_t L_200;
		L_200 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_198, ((int32_t)44), L_199, NULL);
		V_9 = L_200;
		uint64_t L_201 = V_6;
		uint64_t L_202 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_201, (int64_t)L_202));
		uint64_t L_203 = V_7;
		uint64_t L_204 = V_8;
		uint64_t L_205;
		L_205 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_203, ((int32_t)47), L_204, NULL);
		V_7 = L_205;
		uint64_t L_206 = V_8;
		uint64_t L_207 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_206, (int64_t)L_207));
		uint64_t L_208 = V_5;
		uint64_t L_209 = V_10;
		uint64_t L_210;
		L_210 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_208, ((int32_t)46), L_209, NULL);
		V_5 = L_210;
		uint64_t L_211 = V_10;
		uint64_t L_212 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_211, (int64_t)L_212));
		uint64_t L_213 = V_19;
		uint64_t L_214 = V_16;
		uint64_t L_215;
		L_215 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_213, ((int32_t)19), L_214, NULL);
		V_19 = L_215;
		uint64_t L_216 = V_16;
		uint64_t L_217 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_216, (int64_t)L_217));
		uint64_t L_218 = V_17;
		uint64_t L_219 = V_18;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_218, ((int32_t)42), L_219, NULL);
		V_17 = L_220;
		uint64_t L_221 = V_18;
		uint64_t L_222 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		uint64_t L_223 = V_15;
		uint64_t L_224 = V_12;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_223, ((int32_t)44), L_224, NULL);
		V_15 = L_225;
		uint64_t L_226 = V_12;
		uint64_t L_227 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		uint64_t L_228 = V_13;
		uint64_t L_229 = V_14;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_228, ((int32_t)25), L_229, NULL);
		V_13 = L_230;
		uint64_t L_231 = V_14;
		uint64_t L_232 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		uint64_t L_233 = V_13;
		uint64_t L_234 = V_4;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_233, ((int32_t)16), L_234, NULL);
		V_13 = L_235;
		uint64_t L_236 = V_4;
		uint64_t L_237 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		uint64_t L_238 = V_17;
		uint64_t L_239 = V_6;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_238, ((int32_t)34), L_239, NULL);
		V_17 = L_240;
		uint64_t L_241 = V_6;
		uint64_t L_242 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		uint64_t L_243 = V_15;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_243, ((int32_t)56), L_244, NULL);
		V_15 = L_245;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		uint64_t L_248 = V_19;
		uint64_t L_249 = V_8;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_248, ((int32_t)51), L_249, NULL);
		V_19 = L_250;
		uint64_t L_251 = V_8;
		uint64_t L_252 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_14;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_253, 4, L_254, NULL);
		V_11 = L_255;
		uint64_t L_256 = V_14;
		uint64_t L_257 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		uint64_t L_258 = V_7;
		uint64_t L_259 = V_16;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_258, ((int32_t)53), L_259, NULL);
		V_7 = L_260;
		uint64_t L_261 = V_16;
		uint64_t L_262 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		uint64_t L_263 = V_9;
		uint64_t L_264 = V_18;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_263, ((int32_t)42), L_264, NULL);
		V_9 = L_265;
		uint64_t L_266 = V_18;
		uint64_t L_267 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		uint64_t L_268 = V_5;
		uint64_t L_269 = V_12;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_268, ((int32_t)41), L_269, NULL);
		V_5 = L_270;
		uint64_t L_271 = V_12;
		uint64_t L_272 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		uint64_t L_273 = V_5;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_273, ((int32_t)41), L_274, NULL);
		V_5 = L_275;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		uint64_t L_278 = V_7;
		uint64_t L_279 = V_6;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_278, ((int32_t)9), L_279, NULL);
		V_7 = L_280;
		uint64_t L_281 = V_6;
		uint64_t L_282 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		uint64_t L_283 = V_9;
		uint64_t L_284 = V_8;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_283, ((int32_t)37), L_284, NULL);
		V_9 = L_285;
		uint64_t L_286 = V_8;
		uint64_t L_287 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		uint64_t L_288 = V_11;
		uint64_t L_289 = V_10;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_288, ((int32_t)31), L_289, NULL);
		V_11 = L_290;
		uint64_t L_291 = V_10;
		uint64_t L_292 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		uint64_t L_293 = V_13;
		uint64_t L_294 = V_12;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_293, ((int32_t)12), L_294, NULL);
		V_13 = L_295;
		uint64_t L_296 = V_12;
		uint64_t L_297 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		uint64_t L_298 = V_15;
		uint64_t L_299 = V_14;
		uint64_t L_300;
		L_300 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_298, ((int32_t)47), L_299, NULL);
		V_15 = L_300;
		uint64_t L_301 = V_14;
		uint64_t L_302 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_301, (int64_t)L_302));
		uint64_t L_303 = V_17;
		uint64_t L_304 = V_16;
		uint64_t L_305;
		L_305 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_303, ((int32_t)44), L_304, NULL);
		V_17 = L_305;
		uint64_t L_306 = V_16;
		uint64_t L_307 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_306, (int64_t)L_307));
		uint64_t L_308 = V_19;
		uint64_t L_309 = V_18;
		uint64_t L_310;
		L_310 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_308, ((int32_t)30), L_309, NULL);
		V_19 = L_310;
		uint64_t L_311 = V_18;
		uint64_t L_312 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_311, (int64_t)L_312));
		uint64_t L_313 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_314 = V_0;
		int32_t L_315 = V_21;
		NullCheck(L_314);
		int32_t L_316 = L_315;
		int64_t L_317 = (int64_t)(L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_313, L_317));
		uint64_t L_318 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_319 = V_0;
		int32_t L_320 = V_21;
		NullCheck(L_319);
		int32_t L_321 = ((int32_t)il2cpp_codegen_add(L_320, 1));
		int64_t L_322 = (int64_t)(L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_318, L_322));
		uint64_t L_323 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_0;
		int32_t L_325 = V_21;
		NullCheck(L_324);
		int32_t L_326 = ((int32_t)il2cpp_codegen_add(L_325, 2));
		int64_t L_327 = (int64_t)(L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_326));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_323, L_327));
		uint64_t L_328 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_329 = V_0;
		int32_t L_330 = V_21;
		NullCheck(L_329);
		int32_t L_331 = ((int32_t)il2cpp_codegen_add(L_330, 3));
		int64_t L_332 = (int64_t)(L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_331));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_328, L_332));
		uint64_t L_333 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_334 = V_0;
		int32_t L_335 = V_21;
		NullCheck(L_334);
		int32_t L_336 = ((int32_t)il2cpp_codegen_add(L_335, 4));
		int64_t L_337 = (int64_t)(L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_333, L_337));
		uint64_t L_338 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_339 = V_0;
		int32_t L_340 = V_21;
		NullCheck(L_339);
		int32_t L_341 = ((int32_t)il2cpp_codegen_add(L_340, 5));
		int64_t L_342 = (int64_t)(L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_338, L_342));
		uint64_t L_343 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = V_0;
		int32_t L_345 = V_21;
		NullCheck(L_344);
		int32_t L_346 = ((int32_t)il2cpp_codegen_add(L_345, 6));
		int64_t L_347 = (int64_t)(L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_346));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_343, L_347));
		uint64_t L_348 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_349 = V_0;
		int32_t L_350 = V_21;
		NullCheck(L_349);
		int32_t L_351 = ((int32_t)il2cpp_codegen_add(L_350, 7));
		int64_t L_352 = (int64_t)(L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_348, L_352));
		uint64_t L_353 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_354 = V_0;
		int32_t L_355 = V_21;
		NullCheck(L_354);
		int32_t L_356 = ((int32_t)il2cpp_codegen_add(L_355, 8));
		int64_t L_357 = (int64_t)(L_354)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_353, L_357));
		uint64_t L_358 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_359 = V_0;
		int32_t L_360 = V_21;
		NullCheck(L_359);
		int32_t L_361 = ((int32_t)il2cpp_codegen_add(L_360, ((int32_t)9)));
		int64_t L_362 = (int64_t)(L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_358, L_362));
		uint64_t L_363 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_0;
		int32_t L_365 = V_21;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)il2cpp_codegen_add(L_365, ((int32_t)10)));
		int64_t L_367 = (int64_t)(L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_363, L_367));
		uint64_t L_368 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)11)));
		int64_t L_372 = (int64_t)(L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_368, L_372));
		uint64_t L_373 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_374 = V_0;
		int32_t L_375 = V_21;
		NullCheck(L_374);
		int32_t L_376 = ((int32_t)il2cpp_codegen_add(L_375, ((int32_t)12)));
		int64_t L_377 = (int64_t)(L_374)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_373, L_377));
		uint64_t L_378 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_379 = V_0;
		int32_t L_380 = V_21;
		NullCheck(L_379);
		int32_t L_381 = ((int32_t)il2cpp_codegen_add(L_380, ((int32_t)13)));
		int64_t L_382 = (int64_t)(L_379)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_383 = V_1;
		int32_t L_384 = V_22;
		NullCheck(L_383);
		int32_t L_385 = L_384;
		int64_t L_386 = (int64_t)(L_383)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_378, ((int64_t)il2cpp_codegen_add(L_382, L_386))));
		uint64_t L_387 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_388 = V_0;
		int32_t L_389 = V_21;
		NullCheck(L_388);
		int32_t L_390 = ((int32_t)il2cpp_codegen_add(L_389, ((int32_t)14)));
		int64_t L_391 = (int64_t)(L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_392 = V_1;
		int32_t L_393 = V_22;
		NullCheck(L_392);
		int32_t L_394 = ((int32_t)il2cpp_codegen_add(L_393, 1));
		int64_t L_395 = (int64_t)(L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_387, ((int64_t)il2cpp_codegen_add(L_391, L_395))));
		uint64_t L_396 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_397 = V_0;
		int32_t L_398 = V_21;
		NullCheck(L_397);
		int32_t L_399 = ((int32_t)il2cpp_codegen_add(L_398, ((int32_t)15)));
		int64_t L_400 = (int64_t)(L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		int32_t L_401 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_396, ((int64_t)il2cpp_codegen_add(L_400, ((int64_t)(uint64_t)((uint32_t)L_401))))));
		uint64_t L_402 = V_19;
		uint64_t L_403 = V_4;
		uint64_t L_404;
		L_404 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_402, 5, L_403, NULL);
		V_19 = L_404;
		uint64_t L_405 = V_4;
		uint64_t L_406 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_405, (int64_t)L_406));
		uint64_t L_407 = V_15;
		uint64_t L_408 = V_6;
		uint64_t L_409;
		L_409 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_407, ((int32_t)20), L_408, NULL);
		V_15 = L_409;
		uint64_t L_410 = V_6;
		uint64_t L_411 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_410, (int64_t)L_411));
		uint64_t L_412 = V_17;
		uint64_t L_413 = V_10;
		uint64_t L_414;
		L_414 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_412, ((int32_t)48), L_413, NULL);
		V_17 = L_414;
		uint64_t L_415 = V_10;
		uint64_t L_416 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_415, (int64_t)L_416));
		uint64_t L_417 = V_13;
		uint64_t L_418 = V_8;
		uint64_t L_419;
		L_419 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_417, ((int32_t)41), L_418, NULL);
		V_13 = L_419;
		uint64_t L_420 = V_8;
		uint64_t L_421 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_420, (int64_t)L_421));
		uint64_t L_422 = V_5;
		uint64_t L_423 = V_18;
		uint64_t L_424;
		L_424 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_422, ((int32_t)47), L_423, NULL);
		V_5 = L_424;
		uint64_t L_425 = V_18;
		uint64_t L_426 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_425, (int64_t)L_426));
		uint64_t L_427 = V_9;
		uint64_t L_428 = V_12;
		uint64_t L_429;
		L_429 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_427, ((int32_t)28), L_428, NULL);
		V_9 = L_429;
		uint64_t L_430 = V_12;
		uint64_t L_431 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_430, (int64_t)L_431));
		uint64_t L_432 = V_7;
		uint64_t L_433 = V_14;
		uint64_t L_434;
		L_434 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_432, ((int32_t)16), L_433, NULL);
		V_7 = L_434;
		uint64_t L_435 = V_14;
		uint64_t L_436 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_435, (int64_t)L_436));
		uint64_t L_437 = V_11;
		uint64_t L_438 = V_16;
		uint64_t L_439;
		L_439 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_437, ((int32_t)25), L_438, NULL);
		V_11 = L_439;
		uint64_t L_440 = V_16;
		uint64_t L_441 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_440, (int64_t)L_441));
		uint64_t L_442 = V_11;
		uint64_t L_443 = V_4;
		uint64_t L_444;
		L_444 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_442, ((int32_t)33), L_443, NULL);
		V_11 = L_444;
		uint64_t L_445 = V_4;
		uint64_t L_446 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_445, (int64_t)L_446));
		uint64_t L_447 = V_9;
		uint64_t L_448 = V_6;
		uint64_t L_449;
		L_449 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_447, 4, L_448, NULL);
		V_9 = L_449;
		uint64_t L_450 = V_6;
		uint64_t L_451 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_450, (int64_t)L_451));
		uint64_t L_452 = V_7;
		uint64_t L_453 = V_8;
		uint64_t L_454;
		L_454 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_452, ((int32_t)51), L_453, NULL);
		V_7 = L_454;
		uint64_t L_455 = V_8;
		uint64_t L_456 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_455, (int64_t)L_456));
		uint64_t L_457 = V_5;
		uint64_t L_458 = V_10;
		uint64_t L_459;
		L_459 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_457, ((int32_t)13), L_458, NULL);
		V_5 = L_459;
		uint64_t L_460 = V_10;
		uint64_t L_461 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_460, (int64_t)L_461));
		uint64_t L_462 = V_19;
		uint64_t L_463 = V_16;
		uint64_t L_464;
		L_464 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_462, ((int32_t)34), L_463, NULL);
		V_19 = L_464;
		uint64_t L_465 = V_16;
		uint64_t L_466 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_465, (int64_t)L_466));
		uint64_t L_467 = V_17;
		uint64_t L_468 = V_18;
		uint64_t L_469;
		L_469 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_467, ((int32_t)41), L_468, NULL);
		V_17 = L_469;
		uint64_t L_470 = V_18;
		uint64_t L_471 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_470, (int64_t)L_471));
		uint64_t L_472 = V_15;
		uint64_t L_473 = V_12;
		uint64_t L_474;
		L_474 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_472, ((int32_t)59), L_473, NULL);
		V_15 = L_474;
		uint64_t L_475 = V_12;
		uint64_t L_476 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_475, (int64_t)L_476));
		uint64_t L_477 = V_13;
		uint64_t L_478 = V_14;
		uint64_t L_479;
		L_479 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_477, ((int32_t)17), L_478, NULL);
		V_13 = L_479;
		uint64_t L_480 = V_14;
		uint64_t L_481 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_480, (int64_t)L_481));
		uint64_t L_482 = V_13;
		uint64_t L_483 = V_4;
		uint64_t L_484;
		L_484 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_482, ((int32_t)38), L_483, NULL);
		V_13 = L_484;
		uint64_t L_485 = V_4;
		uint64_t L_486 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_485, (int64_t)L_486));
		uint64_t L_487 = V_17;
		uint64_t L_488 = V_6;
		uint64_t L_489;
		L_489 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_487, ((int32_t)19), L_488, NULL);
		V_17 = L_489;
		uint64_t L_490 = V_6;
		uint64_t L_491 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_490, (int64_t)L_491));
		uint64_t L_492 = V_15;
		uint64_t L_493 = V_10;
		uint64_t L_494;
		L_494 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_492, ((int32_t)10), L_493, NULL);
		V_15 = L_494;
		uint64_t L_495 = V_10;
		uint64_t L_496 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_495, (int64_t)L_496));
		uint64_t L_497 = V_19;
		uint64_t L_498 = V_8;
		uint64_t L_499;
		L_499 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_497, ((int32_t)55), L_498, NULL);
		V_19 = L_499;
		uint64_t L_500 = V_8;
		uint64_t L_501 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_500, (int64_t)L_501));
		uint64_t L_502 = V_11;
		uint64_t L_503 = V_14;
		uint64_t L_504;
		L_504 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_502, ((int32_t)49), L_503, NULL);
		V_11 = L_504;
		uint64_t L_505 = V_14;
		uint64_t L_506 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_505, (int64_t)L_506));
		uint64_t L_507 = V_7;
		uint64_t L_508 = V_16;
		uint64_t L_509;
		L_509 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_507, ((int32_t)18), L_508, NULL);
		V_7 = L_509;
		uint64_t L_510 = V_16;
		uint64_t L_511 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_510, (int64_t)L_511));
		uint64_t L_512 = V_9;
		uint64_t L_513 = V_18;
		uint64_t L_514;
		L_514 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_512, ((int32_t)23), L_513, NULL);
		V_9 = L_514;
		uint64_t L_515 = V_18;
		uint64_t L_516 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_515, (int64_t)L_516));
		uint64_t L_517 = V_5;
		uint64_t L_518 = V_12;
		uint64_t L_519;
		L_519 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_517, ((int32_t)52), L_518, NULL);
		V_5 = L_519;
		uint64_t L_520 = V_12;
		uint64_t L_521 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_520, (int64_t)L_521));
		uint64_t L_522 = V_5;
		uint64_t L_523 = V_4;
		uint64_t L_524;
		L_524 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_522, ((int32_t)24), L_523, NULL);
		V_5 = L_524;
		uint64_t L_525 = V_4;
		uint64_t L_526 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_525, (int64_t)L_526));
		uint64_t L_527 = V_7;
		uint64_t L_528 = V_6;
		uint64_t L_529;
		L_529 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_527, ((int32_t)13), L_528, NULL);
		V_7 = L_529;
		uint64_t L_530 = V_6;
		uint64_t L_531 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_530, (int64_t)L_531));
		uint64_t L_532 = V_9;
		uint64_t L_533 = V_8;
		uint64_t L_534;
		L_534 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_532, 8, L_533, NULL);
		V_9 = L_534;
		uint64_t L_535 = V_8;
		uint64_t L_536 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_535, (int64_t)L_536));
		uint64_t L_537 = V_11;
		uint64_t L_538 = V_10;
		uint64_t L_539;
		L_539 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_537, ((int32_t)47), L_538, NULL);
		V_11 = L_539;
		uint64_t L_540 = V_10;
		uint64_t L_541 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_540, (int64_t)L_541));
		uint64_t L_542 = V_13;
		uint64_t L_543 = V_12;
		uint64_t L_544;
		L_544 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_542, 8, L_543, NULL);
		V_13 = L_544;
		uint64_t L_545 = V_12;
		uint64_t L_546 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_545, (int64_t)L_546));
		uint64_t L_547 = V_15;
		uint64_t L_548 = V_14;
		uint64_t L_549;
		L_549 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_547, ((int32_t)17), L_548, NULL);
		V_15 = L_549;
		uint64_t L_550 = V_14;
		uint64_t L_551 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_550, (int64_t)L_551));
		uint64_t L_552 = V_17;
		uint64_t L_553 = V_16;
		uint64_t L_554;
		L_554 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_552, ((int32_t)22), L_553, NULL);
		V_17 = L_554;
		uint64_t L_555 = V_16;
		uint64_t L_556 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_555, (int64_t)L_556));
		uint64_t L_557 = V_19;
		uint64_t L_558 = V_18;
		uint64_t L_559;
		L_559 = ThreefishEngine_XorRotr_mCAAE2A4F961C1FCAAB42579720D8ADACB9ADE2F1(L_557, ((int32_t)37), L_558, NULL);
		V_19 = L_559;
		uint64_t L_560 = V_18;
		uint64_t L_561 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_560, (int64_t)L_561));
		int32_t L_562 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_562, 2));
	}

IL_0732:
	{
		int32_t L_563 = V_20;
		if ((((int32_t)L_563) >= ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		uint64_t L_564 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_565 = V_0;
		NullCheck(L_565);
		int32_t L_566 = 0;
		int64_t L_567 = (int64_t)(L_565)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_564, L_567));
		uint64_t L_568 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		NullCheck(L_569);
		int32_t L_570 = 1;
		int64_t L_571 = (int64_t)(L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_568, L_571));
		uint64_t L_572 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_573 = V_0;
		NullCheck(L_573);
		int32_t L_574 = 2;
		int64_t L_575 = (int64_t)(L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_572, L_575));
		uint64_t L_576 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_577 = V_0;
		NullCheck(L_577);
		int32_t L_578 = 3;
		int64_t L_579 = (int64_t)(L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_576, L_579));
		uint64_t L_580 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_581 = V_0;
		NullCheck(L_581);
		int32_t L_582 = 4;
		int64_t L_583 = (int64_t)(L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_580, L_583));
		uint64_t L_584 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_585 = V_0;
		NullCheck(L_585);
		int32_t L_586 = 5;
		int64_t L_587 = (int64_t)(L_585)->GetAt(static_cast<il2cpp_array_size_t>(L_586));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_584, L_587));
		uint64_t L_588 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		NullCheck(L_589);
		int32_t L_590 = 6;
		int64_t L_591 = (int64_t)(L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_588, L_591));
		uint64_t L_592 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_593 = V_0;
		NullCheck(L_593);
		int32_t L_594 = 7;
		int64_t L_595 = (int64_t)(L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_592, L_595));
		uint64_t L_596 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_597 = V_0;
		NullCheck(L_597);
		int32_t L_598 = 8;
		int64_t L_599 = (int64_t)(L_597)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_596, L_599));
		uint64_t L_600 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_601 = V_0;
		NullCheck(L_601);
		int32_t L_602 = ((int32_t)9);
		int64_t L_603 = (int64_t)(L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_600, L_603));
		uint64_t L_604 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_605 = V_0;
		NullCheck(L_605);
		int32_t L_606 = ((int32_t)10);
		int64_t L_607 = (int64_t)(L_605)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_604, L_607));
		uint64_t L_608 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		NullCheck(L_609);
		int32_t L_610 = ((int32_t)11);
		int64_t L_611 = (int64_t)(L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_608, L_611));
		uint64_t L_612 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_0;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)12);
		int64_t L_615 = (int64_t)(L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_612, L_615));
		uint64_t L_616 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_617 = V_0;
		NullCheck(L_617);
		int32_t L_618 = ((int32_t)13);
		int64_t L_619 = (int64_t)(L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_620 = V_1;
		NullCheck(L_620);
		int32_t L_621 = 0;
		int64_t L_622 = (int64_t)(L_620)->GetAt(static_cast<il2cpp_array_size_t>(L_621));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_616, ((int64_t)il2cpp_codegen_add(L_619, L_622))));
		uint64_t L_623 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_624 = V_0;
		NullCheck(L_624);
		int32_t L_625 = ((int32_t)14);
		int64_t L_626 = (int64_t)(L_624)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_1;
		NullCheck(L_627);
		int32_t L_628 = 1;
		int64_t L_629 = (int64_t)(L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_628));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_623, ((int64_t)il2cpp_codegen_add(L_626, L_629))));
		uint64_t L_630 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_631 = V_0;
		NullCheck(L_631);
		int32_t L_632 = ((int32_t)15);
		int64_t L_633 = (int64_t)(L_631)->GetAt(static_cast<il2cpp_array_size_t>(L_632));
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_630, L_633));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___1_state;
		uint64_t L_635 = V_4;
		NullCheck(L_634);
		(L_634)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___1_state;
		uint64_t L_637 = V_5;
		NullCheck(L_636);
		(L_636)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___1_state;
		uint64_t L_639 = V_6;
		NullCheck(L_638);
		(L_638)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___1_state;
		uint64_t L_641 = V_7;
		NullCheck(L_640);
		(L_640)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___1_state;
		uint64_t L_643 = V_8;
		NullCheck(L_642);
		(L_642)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___1_state;
		uint64_t L_645 = V_9;
		NullCheck(L_644);
		(L_644)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___1_state;
		uint64_t L_647 = V_10;
		NullCheck(L_646);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___1_state;
		uint64_t L_649 = V_11;
		NullCheck(L_648);
		(L_648)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___1_state;
		uint64_t L_651 = V_12;
		NullCheck(L_650);
		(L_650)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___1_state;
		uint64_t L_653 = V_13;
		NullCheck(L_652);
		(L_652)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___1_state;
		uint64_t L_655 = V_14;
		NullCheck(L_654);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___1_state;
		uint64_t L_657 = V_15;
		NullCheck(L_656);
		(L_656)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___1_state;
		uint64_t L_659 = V_16;
		NullCheck(L_658);
		(L_658)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___1_state;
		uint64_t L_661 = V_17;
		NullCheck(L_660);
		(L_660)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___1_state;
		uint64_t L_663 = V_18;
		NullCheck(L_662);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___1_state;
		uint64_t L_665 = V_19;
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TnepresEngine_get_AlgorithmName_m5E8847265705FA0B37255201F289EAD762DAD1E1 (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TnepresEngine_MakeWorkingKey_mA88B6D9DC946D3993075A7FDB6A2F002214EC604 (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_key;
		NullCheck(L_1);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 4));
		goto IL_0026;
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_key;
		int32_t L_6 = V_1;
		uint32_t L_7;
		L_7 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_5, L_6, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 4));
	}

IL_0026:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_10 = V_1;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_key;
		uint32_t L_15;
		L_15 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_14, 0, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_15);
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)8)))
		{
			goto IL_0050;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)1);
		goto IL_0050;
	}

IL_0045:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TnepresEngine_MakeWorkingKey_mA88B6D9DC946D3993075A7FDB6A2F002214EC604_RuntimeMethod_var)));
	}

IL_0050:
	{
		V_3 = ((int32_t)132);
		int32_t L_20 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_4 = L_21;
		V_5 = 8;
		goto IL_009a;
	}

IL_0063:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 8));
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(L_29, 5));
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 3));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_27^L_31))^L_35))^L_39))^((int32_t)-1640531527)))^((int32_t)il2cpp_codegen_subtract(L_40, 8)))), ((int32_t)11), NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_41);
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_009a:
	{
		int32_t L_43 = V_5;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)16))))
		{
			goto IL_0063;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_44, 8, (RuntimeArray*)L_45, 0, 8, NULL);
		V_6 = 8;
		goto IL_00ea;
	}

IL_00b0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_4;
		int32_t L_47 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_4;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(L_49, 8));
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_4;
		int32_t L_53 = V_6;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract(L_53, 5));
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_4;
		int32_t L_57 = V_6;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract(L_57, 3));
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		int32_t L_61 = V_6;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		int32_t L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = SerpentEngineBase_RotateLeft_mC3A44993C89E643559D8877384605FF1D9047FA3(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_51^L_55))^L_59))^L_63))^((int32_t)-1640531527)))^L_64)), ((int32_t)11), NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (int32_t)L_65);
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_00ea:
	{
		int32_t L_67 = V_6;
		int32_t L_68 = V_3;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_00b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_4;
		NullCheck(L_69);
		int32_t L_70 = 0;
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_4;
		NullCheck(L_72);
		int32_t L_73 = 1;
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_4;
		NullCheck(L_75);
		int32_t L_76 = 2;
		int32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_4;
		NullCheck(L_78);
		int32_t L_79 = 3;
		int32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_71, L_74, L_77, L_80, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_4;
		int32_t L_82 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_82);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = V_4;
		int32_t L_84 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_84);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_4;
		int32_t L_86 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_86);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = V_4;
		int32_t L_88 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_88);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_4;
		NullCheck(L_89);
		int32_t L_90 = 4;
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = 5;
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_4;
		NullCheck(L_95);
		int32_t L_96 = 6;
		int32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_4;
		NullCheck(L_98);
		int32_t L_99 = 7;
		int32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, L_91, L_94, L_97, L_100, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_4;
		int32_t L_102 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_102);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_4;
		int32_t L_104 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_4;
		int32_t L_106 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_106);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_4;
		int32_t L_108 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_108);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = V_4;
		NullCheck(L_109);
		int32_t L_110 = 8;
		int32_t L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = V_4;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)9);
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_4;
		NullCheck(L_115);
		int32_t L_116 = ((int32_t)10);
		int32_t L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_4;
		NullCheck(L_118);
		int32_t L_119 = ((int32_t)11);
		int32_t L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, L_111, L_114, L_117, L_120, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = V_4;
		int32_t L_122 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)L_122);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = V_4;
		int32_t L_124 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)L_124);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = V_4;
		int32_t L_126 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (int32_t)L_126);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = V_4;
		int32_t L_128 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (int32_t)L_128);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = V_4;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)12);
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = V_4;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)13);
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = V_4;
		NullCheck(L_135);
		int32_t L_136 = ((int32_t)14);
		int32_t L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_4;
		NullCheck(L_138);
		int32_t L_139 = ((int32_t)15);
		int32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, L_131, L_134, L_137, L_140, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = V_4;
		int32_t L_142 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (int32_t)L_142);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = V_4;
		int32_t L_144 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (int32_t)L_144);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = V_4;
		int32_t L_146 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)L_146);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = V_4;
		int32_t L_148 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)L_148);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = V_4;
		NullCheck(L_149);
		int32_t L_150 = ((int32_t)16);
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_4;
		NullCheck(L_152);
		int32_t L_153 = ((int32_t)17);
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = V_4;
		NullCheck(L_155);
		int32_t L_156 = ((int32_t)18);
		int32_t L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = V_4;
		NullCheck(L_158);
		int32_t L_159 = ((int32_t)19);
		int32_t L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, L_151, L_154, L_157, L_160, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = V_4;
		int32_t L_162 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (int32_t)L_162);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = V_4;
		int32_t L_164 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (int32_t)L_164);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_165 = V_4;
		int32_t L_166 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (int32_t)L_166);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = V_4;
		int32_t L_168 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (int32_t)L_168);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = V_4;
		NullCheck(L_169);
		int32_t L_170 = ((int32_t)20);
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = V_4;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)21);
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_175 = V_4;
		NullCheck(L_175);
		int32_t L_176 = ((int32_t)22);
		int32_t L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = V_4;
		NullCheck(L_178);
		int32_t L_179 = ((int32_t)23);
		int32_t L_180 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, L_171, L_174, L_177, L_180, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = V_4;
		int32_t L_182 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (int32_t)L_182);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = V_4;
		int32_t L_184 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (int32_t)L_184);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = V_4;
		int32_t L_186 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (int32_t)L_186);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_187 = V_4;
		int32_t L_188 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (int32_t)L_188);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = V_4;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)24);
		int32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = V_4;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)25);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = V_4;
		NullCheck(L_195);
		int32_t L_196 = ((int32_t)26);
		int32_t L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = V_4;
		NullCheck(L_198);
		int32_t L_199 = ((int32_t)27);
		int32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, L_191, L_194, L_197, L_200, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = V_4;
		int32_t L_202 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (int32_t)L_202);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_203 = V_4;
		int32_t L_204 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (int32_t)L_204);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_205 = V_4;
		int32_t L_206 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (int32_t)L_206);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = V_4;
		int32_t L_208 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (int32_t)L_208);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = V_4;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)28);
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = V_4;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)29);
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_215 = V_4;
		NullCheck(L_215);
		int32_t L_216 = ((int32_t)30);
		int32_t L_217 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_218 = V_4;
		NullCheck(L_218);
		int32_t L_219 = ((int32_t)31);
		int32_t L_220 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, L_211, L_214, L_217, L_220, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = V_4;
		int32_t L_222 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (int32_t)L_222);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_223 = V_4;
		int32_t L_224 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_223);
		(L_223)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (int32_t)L_224);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = V_4;
		int32_t L_226 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (int32_t)L_226);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_227 = V_4;
		int32_t L_228 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_227);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (int32_t)L_228);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = V_4;
		NullCheck(L_229);
		int32_t L_230 = ((int32_t)32);
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = V_4;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)33);
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_235 = V_4;
		NullCheck(L_235);
		int32_t L_236 = ((int32_t)34);
		int32_t L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = V_4;
		NullCheck(L_238);
		int32_t L_239 = ((int32_t)35);
		int32_t L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_231, L_234, L_237, L_240, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = V_4;
		int32_t L_242 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_241);
		(L_241)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)L_242);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_243 = V_4;
		int32_t L_244 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (int32_t)L_244);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_245 = V_4;
		int32_t L_246 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_245);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (int32_t)L_246);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = V_4;
		int32_t L_248 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_247);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (int32_t)L_248);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = V_4;
		NullCheck(L_249);
		int32_t L_250 = ((int32_t)36);
		int32_t L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = V_4;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)37);
		int32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_255 = V_4;
		NullCheck(L_255);
		int32_t L_256 = ((int32_t)38);
		int32_t L_257 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_258 = V_4;
		NullCheck(L_258);
		int32_t L_259 = ((int32_t)39);
		int32_t L_260 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, L_251, L_254, L_257, L_260, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = V_4;
		int32_t L_262 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_261);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (int32_t)L_262);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_263 = V_4;
		int32_t L_264 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_263);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (int32_t)L_264);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_265 = V_4;
		int32_t L_266 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (int32_t)L_266);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = V_4;
		int32_t L_268 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_267);
		(L_267)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (int32_t)L_268);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = V_4;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)40);
		int32_t L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = V_4;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)41);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_275 = V_4;
		NullCheck(L_275);
		int32_t L_276 = ((int32_t)42);
		int32_t L_277 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_278 = V_4;
		NullCheck(L_278);
		int32_t L_279 = ((int32_t)43);
		int32_t L_280 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, L_271, L_274, L_277, L_280, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = V_4;
		int32_t L_282 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_281);
		(L_281)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (int32_t)L_282);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_283 = V_4;
		int32_t L_284 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_283);
		(L_283)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (int32_t)L_284);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_285 = V_4;
		int32_t L_286 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_285);
		(L_285)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (int32_t)L_286);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_287 = V_4;
		int32_t L_288 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_287);
		(L_287)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (int32_t)L_288);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = V_4;
		NullCheck(L_289);
		int32_t L_290 = ((int32_t)44);
		int32_t L_291 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = V_4;
		NullCheck(L_292);
		int32_t L_293 = ((int32_t)45);
		int32_t L_294 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_295 = V_4;
		NullCheck(L_295);
		int32_t L_296 = ((int32_t)46);
		int32_t L_297 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_298 = V_4;
		NullCheck(L_298);
		int32_t L_299 = ((int32_t)47);
		int32_t L_300 = (L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, L_291, L_294, L_297, L_300, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = V_4;
		int32_t L_302 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (int32_t)L_302);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_303 = V_4;
		int32_t L_304 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_303);
		(L_303)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (int32_t)L_304);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_305 = V_4;
		int32_t L_306 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_305);
		(L_305)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (int32_t)L_306);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_307 = V_4;
		int32_t L_308 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_307);
		(L_307)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (int32_t)L_308);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = V_4;
		NullCheck(L_309);
		int32_t L_310 = ((int32_t)48);
		int32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = V_4;
		NullCheck(L_312);
		int32_t L_313 = ((int32_t)49);
		int32_t L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = V_4;
		NullCheck(L_315);
		int32_t L_316 = ((int32_t)50);
		int32_t L_317 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = V_4;
		NullCheck(L_318);
		int32_t L_319 = ((int32_t)51);
		int32_t L_320 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, L_311, L_314, L_317, L_320, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = V_4;
		int32_t L_322 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_321);
		(L_321)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (int32_t)L_322);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = V_4;
		int32_t L_324 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (int32_t)L_324);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_325 = V_4;
		int32_t L_326 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_325);
		(L_325)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (int32_t)L_326);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_327 = V_4;
		int32_t L_328 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_327);
		(L_327)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (int32_t)L_328);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = V_4;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)52);
		int32_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = V_4;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)53);
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_335 = V_4;
		NullCheck(L_335);
		int32_t L_336 = ((int32_t)54);
		int32_t L_337 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_338 = V_4;
		NullCheck(L_338);
		int32_t L_339 = ((int32_t)55);
		int32_t L_340 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, L_331, L_334, L_337, L_340, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = V_4;
		int32_t L_342 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_341);
		(L_341)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (int32_t)L_342);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_343 = V_4;
		int32_t L_344 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_343);
		(L_343)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (int32_t)L_344);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_345 = V_4;
		int32_t L_346 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_345);
		(L_345)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (int32_t)L_346);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_347 = V_4;
		int32_t L_348 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_347);
		(L_347)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (int32_t)L_348);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = V_4;
		NullCheck(L_349);
		int32_t L_350 = ((int32_t)56);
		int32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = V_4;
		NullCheck(L_352);
		int32_t L_353 = ((int32_t)57);
		int32_t L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_355 = V_4;
		NullCheck(L_355);
		int32_t L_356 = ((int32_t)58);
		int32_t L_357 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = V_4;
		NullCheck(L_358);
		int32_t L_359 = ((int32_t)59);
		int32_t L_360 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, L_351, L_354, L_357, L_360, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = V_4;
		int32_t L_362 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_361);
		(L_361)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (int32_t)L_362);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_363 = V_4;
		int32_t L_364 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_363);
		(L_363)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (int32_t)L_364);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_365 = V_4;
		int32_t L_366 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_365);
		(L_365)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (int32_t)L_366);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_367 = V_4;
		int32_t L_368 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_367);
		(L_367)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (int32_t)L_368);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = V_4;
		NullCheck(L_369);
		int32_t L_370 = ((int32_t)60);
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = V_4;
		NullCheck(L_372);
		int32_t L_373 = ((int32_t)61);
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_375 = V_4;
		NullCheck(L_375);
		int32_t L_376 = ((int32_t)62);
		int32_t L_377 = (L_375)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_378 = V_4;
		NullCheck(L_378);
		int32_t L_379 = ((int32_t)63);
		int32_t L_380 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_379));
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, L_371, L_374, L_377, L_380, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = V_4;
		int32_t L_382 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_381);
		(L_381)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (int32_t)L_382);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_383 = V_4;
		int32_t L_384 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_383);
		(L_383)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (int32_t)L_384);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_385 = V_4;
		int32_t L_386 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (int32_t)L_386);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = V_4;
		int32_t L_388 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_387);
		(L_387)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (int32_t)L_388);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = V_4;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)64);
		int32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = V_4;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)65);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_395 = V_4;
		NullCheck(L_395);
		int32_t L_396 = ((int32_t)66);
		int32_t L_397 = (L_395)->GetAt(static_cast<il2cpp_array_size_t>(L_396));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_398 = V_4;
		NullCheck(L_398);
		int32_t L_399 = ((int32_t)67);
		int32_t L_400 = (L_398)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_391, L_394, L_397, L_400, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = V_4;
		int32_t L_402 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_401);
		(L_401)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (int32_t)L_402);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_403 = V_4;
		int32_t L_404 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_403);
		(L_403)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (int32_t)L_404);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_405 = V_4;
		int32_t L_406 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_405);
		(L_405)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (int32_t)L_406);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_407 = V_4;
		int32_t L_408 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_407);
		(L_407)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (int32_t)L_408);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = V_4;
		NullCheck(L_409);
		int32_t L_410 = ((int32_t)68);
		int32_t L_411 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = V_4;
		NullCheck(L_412);
		int32_t L_413 = ((int32_t)69);
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_415 = V_4;
		NullCheck(L_415);
		int32_t L_416 = ((int32_t)70);
		int32_t L_417 = (L_415)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_418 = V_4;
		NullCheck(L_418);
		int32_t L_419 = ((int32_t)71);
		int32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, L_411, L_414, L_417, L_420, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = V_4;
		int32_t L_422 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_421);
		(L_421)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (int32_t)L_422);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_423 = V_4;
		int32_t L_424 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_423);
		(L_423)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (int32_t)L_424);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_425 = V_4;
		int32_t L_426 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_425);
		(L_425)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (int32_t)L_426);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_427 = V_4;
		int32_t L_428 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_427);
		(L_427)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (int32_t)L_428);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = V_4;
		NullCheck(L_429);
		int32_t L_430 = ((int32_t)72);
		int32_t L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = V_4;
		NullCheck(L_432);
		int32_t L_433 = ((int32_t)73);
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_435 = V_4;
		NullCheck(L_435);
		int32_t L_436 = ((int32_t)74);
		int32_t L_437 = (L_435)->GetAt(static_cast<il2cpp_array_size_t>(L_436));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = V_4;
		NullCheck(L_438);
		int32_t L_439 = ((int32_t)75);
		int32_t L_440 = (L_438)->GetAt(static_cast<il2cpp_array_size_t>(L_439));
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, L_431, L_434, L_437, L_440, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = V_4;
		int32_t L_442 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_441);
		(L_441)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (int32_t)L_442);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_443 = V_4;
		int32_t L_444 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_443);
		(L_443)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (int32_t)L_444);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_445 = V_4;
		int32_t L_446 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_445);
		(L_445)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (int32_t)L_446);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_447 = V_4;
		int32_t L_448 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_447);
		(L_447)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (int32_t)L_448);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = V_4;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)76);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = V_4;
		NullCheck(L_452);
		int32_t L_453 = ((int32_t)77);
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_455 = V_4;
		NullCheck(L_455);
		int32_t L_456 = ((int32_t)78);
		int32_t L_457 = (L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_456));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_458 = V_4;
		NullCheck(L_458);
		int32_t L_459 = ((int32_t)79);
		int32_t L_460 = (L_458)->GetAt(static_cast<il2cpp_array_size_t>(L_459));
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, L_451, L_454, L_457, L_460, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = V_4;
		int32_t L_462 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_461);
		(L_461)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (int32_t)L_462);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_463 = V_4;
		int32_t L_464 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_463);
		(L_463)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (int32_t)L_464);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_465 = V_4;
		int32_t L_466 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_465);
		(L_465)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (int32_t)L_466);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_467 = V_4;
		int32_t L_468 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_467);
		(L_467)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)79)), (int32_t)L_468);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = V_4;
		NullCheck(L_469);
		int32_t L_470 = ((int32_t)80);
		int32_t L_471 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = V_4;
		NullCheck(L_472);
		int32_t L_473 = ((int32_t)81);
		int32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_475 = V_4;
		NullCheck(L_475);
		int32_t L_476 = ((int32_t)82);
		int32_t L_477 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_476));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_478 = V_4;
		NullCheck(L_478);
		int32_t L_479 = ((int32_t)83);
		int32_t L_480 = (L_478)->GetAt(static_cast<il2cpp_array_size_t>(L_479));
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, L_471, L_474, L_477, L_480, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = V_4;
		int32_t L_482 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_481);
		(L_481)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)80)), (int32_t)L_482);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_483 = V_4;
		int32_t L_484 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_483);
		(L_483)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)81)), (int32_t)L_484);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_485 = V_4;
		int32_t L_486 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_485);
		(L_485)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)82)), (int32_t)L_486);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_487 = V_4;
		int32_t L_488 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_487);
		(L_487)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)83)), (int32_t)L_488);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = V_4;
		NullCheck(L_489);
		int32_t L_490 = ((int32_t)84);
		int32_t L_491 = (L_489)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = V_4;
		NullCheck(L_492);
		int32_t L_493 = ((int32_t)85);
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_495 = V_4;
		NullCheck(L_495);
		int32_t L_496 = ((int32_t)86);
		int32_t L_497 = (L_495)->GetAt(static_cast<il2cpp_array_size_t>(L_496));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_498 = V_4;
		NullCheck(L_498);
		int32_t L_499 = ((int32_t)87);
		int32_t L_500 = (L_498)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, L_491, L_494, L_497, L_500, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = V_4;
		int32_t L_502 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_501);
		(L_501)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)84)), (int32_t)L_502);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_503 = V_4;
		int32_t L_504 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_503);
		(L_503)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)85)), (int32_t)L_504);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_505 = V_4;
		int32_t L_506 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_505);
		(L_505)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)86)), (int32_t)L_506);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_507 = V_4;
		int32_t L_508 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_507);
		(L_507)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)87)), (int32_t)L_508);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = V_4;
		NullCheck(L_509);
		int32_t L_510 = ((int32_t)88);
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = V_4;
		NullCheck(L_512);
		int32_t L_513 = ((int32_t)89);
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_515 = V_4;
		NullCheck(L_515);
		int32_t L_516 = ((int32_t)90);
		int32_t L_517 = (L_515)->GetAt(static_cast<il2cpp_array_size_t>(L_516));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_518 = V_4;
		NullCheck(L_518);
		int32_t L_519 = ((int32_t)91);
		int32_t L_520 = (L_518)->GetAt(static_cast<il2cpp_array_size_t>(L_519));
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, L_511, L_514, L_517, L_520, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = V_4;
		int32_t L_522 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_521);
		(L_521)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)88)), (int32_t)L_522);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_523 = V_4;
		int32_t L_524 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_523);
		(L_523)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)89)), (int32_t)L_524);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_525 = V_4;
		int32_t L_526 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_525);
		(L_525)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)90)), (int32_t)L_526);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_527 = V_4;
		int32_t L_528 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_527);
		(L_527)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)91)), (int32_t)L_528);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = V_4;
		NullCheck(L_529);
		int32_t L_530 = ((int32_t)92);
		int32_t L_531 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_532 = V_4;
		NullCheck(L_532);
		int32_t L_533 = ((int32_t)93);
		int32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_535 = V_4;
		NullCheck(L_535);
		int32_t L_536 = ((int32_t)94);
		int32_t L_537 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_536));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_538 = V_4;
		NullCheck(L_538);
		int32_t L_539 = ((int32_t)95);
		int32_t L_540 = (L_538)->GetAt(static_cast<il2cpp_array_size_t>(L_539));
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, L_531, L_534, L_537, L_540, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = V_4;
		int32_t L_542 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_541);
		(L_541)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)92)), (int32_t)L_542);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_543 = V_4;
		int32_t L_544 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_543);
		(L_543)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)93)), (int32_t)L_544);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_545 = V_4;
		int32_t L_546 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_545);
		(L_545)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)94)), (int32_t)L_546);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_547 = V_4;
		int32_t L_548 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_547);
		(L_547)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)95)), (int32_t)L_548);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = V_4;
		NullCheck(L_549);
		int32_t L_550 = ((int32_t)96);
		int32_t L_551 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_552 = V_4;
		NullCheck(L_552);
		int32_t L_553 = ((int32_t)97);
		int32_t L_554 = (L_552)->GetAt(static_cast<il2cpp_array_size_t>(L_553));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_555 = V_4;
		NullCheck(L_555);
		int32_t L_556 = ((int32_t)98);
		int32_t L_557 = (L_555)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_558 = V_4;
		NullCheck(L_558);
		int32_t L_559 = ((int32_t)99);
		int32_t L_560 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_559));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_551, L_554, L_557, L_560, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = V_4;
		int32_t L_562 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_561);
		(L_561)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)96)), (int32_t)L_562);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_563 = V_4;
		int32_t L_564 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_563);
		(L_563)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)97)), (int32_t)L_564);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_565 = V_4;
		int32_t L_566 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_565);
		(L_565)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)98)), (int32_t)L_566);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_567 = V_4;
		int32_t L_568 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_567);
		(L_567)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)99)), (int32_t)L_568);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = V_4;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)100);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_572 = V_4;
		NullCheck(L_572);
		int32_t L_573 = ((int32_t)101);
		int32_t L_574 = (L_572)->GetAt(static_cast<il2cpp_array_size_t>(L_573));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_575 = V_4;
		NullCheck(L_575);
		int32_t L_576 = ((int32_t)102);
		int32_t L_577 = (L_575)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_578 = V_4;
		NullCheck(L_578);
		int32_t L_579 = ((int32_t)103);
		int32_t L_580 = (L_578)->GetAt(static_cast<il2cpp_array_size_t>(L_579));
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, L_571, L_574, L_577, L_580, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = V_4;
		int32_t L_582 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_581);
		(L_581)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)100)), (int32_t)L_582);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_583 = V_4;
		int32_t L_584 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_583);
		(L_583)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)101)), (int32_t)L_584);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_585 = V_4;
		int32_t L_586 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_585);
		(L_585)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)102)), (int32_t)L_586);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_587 = V_4;
		int32_t L_588 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_587);
		(L_587)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)103)), (int32_t)L_588);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = V_4;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)104);
		int32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_592 = V_4;
		NullCheck(L_592);
		int32_t L_593 = ((int32_t)105);
		int32_t L_594 = (L_592)->GetAt(static_cast<il2cpp_array_size_t>(L_593));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_595 = V_4;
		NullCheck(L_595);
		int32_t L_596 = ((int32_t)106);
		int32_t L_597 = (L_595)->GetAt(static_cast<il2cpp_array_size_t>(L_596));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_598 = V_4;
		NullCheck(L_598);
		int32_t L_599 = ((int32_t)107);
		int32_t L_600 = (L_598)->GetAt(static_cast<il2cpp_array_size_t>(L_599));
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, L_591, L_594, L_597, L_600, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = V_4;
		int32_t L_602 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_601);
		(L_601)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)104)), (int32_t)L_602);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_603 = V_4;
		int32_t L_604 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_603);
		(L_603)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)105)), (int32_t)L_604);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_605 = V_4;
		int32_t L_606 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_605);
		(L_605)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)106)), (int32_t)L_606);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_607 = V_4;
		int32_t L_608 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_607);
		(L_607)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)107)), (int32_t)L_608);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = V_4;
		NullCheck(L_609);
		int32_t L_610 = ((int32_t)108);
		int32_t L_611 = (L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_612 = V_4;
		NullCheck(L_612);
		int32_t L_613 = ((int32_t)109);
		int32_t L_614 = (L_612)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_615 = V_4;
		NullCheck(L_615);
		int32_t L_616 = ((int32_t)110);
		int32_t L_617 = (L_615)->GetAt(static_cast<il2cpp_array_size_t>(L_616));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_618 = V_4;
		NullCheck(L_618);
		int32_t L_619 = ((int32_t)111);
		int32_t L_620 = (L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_619));
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, L_611, L_614, L_617, L_620, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = V_4;
		int32_t L_622 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_621);
		(L_621)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)108)), (int32_t)L_622);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_623 = V_4;
		int32_t L_624 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_623);
		(L_623)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)109)), (int32_t)L_624);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_625 = V_4;
		int32_t L_626 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_625);
		(L_625)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)110)), (int32_t)L_626);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_627 = V_4;
		int32_t L_628 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_627);
		(L_627)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)111)), (int32_t)L_628);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = V_4;
		NullCheck(L_629);
		int32_t L_630 = ((int32_t)112);
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_632 = V_4;
		NullCheck(L_632);
		int32_t L_633 = ((int32_t)113);
		int32_t L_634 = (L_632)->GetAt(static_cast<il2cpp_array_size_t>(L_633));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_635 = V_4;
		NullCheck(L_635);
		int32_t L_636 = ((int32_t)114);
		int32_t L_637 = (L_635)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_638 = V_4;
		NullCheck(L_638);
		int32_t L_639 = ((int32_t)115);
		int32_t L_640 = (L_638)->GetAt(static_cast<il2cpp_array_size_t>(L_639));
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, L_631, L_634, L_637, L_640, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = V_4;
		int32_t L_642 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_641);
		(L_641)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)112)), (int32_t)L_642);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_643 = V_4;
		int32_t L_644 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_643);
		(L_643)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)113)), (int32_t)L_644);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_645 = V_4;
		int32_t L_646 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_645);
		(L_645)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)114)), (int32_t)L_646);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_647 = V_4;
		int32_t L_648 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_647);
		(L_647)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)115)), (int32_t)L_648);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = V_4;
		NullCheck(L_649);
		int32_t L_650 = ((int32_t)116);
		int32_t L_651 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_650));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_652 = V_4;
		NullCheck(L_652);
		int32_t L_653 = ((int32_t)117);
		int32_t L_654 = (L_652)->GetAt(static_cast<il2cpp_array_size_t>(L_653));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = V_4;
		NullCheck(L_655);
		int32_t L_656 = ((int32_t)118);
		int32_t L_657 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_656));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_658 = V_4;
		NullCheck(L_658);
		int32_t L_659 = ((int32_t)119);
		int32_t L_660 = (L_658)->GetAt(static_cast<il2cpp_array_size_t>(L_659));
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, L_651, L_654, L_657, L_660, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = V_4;
		int32_t L_662 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_661);
		(L_661)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)116)), (int32_t)L_662);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_663 = V_4;
		int32_t L_664 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_663);
		(L_663)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)117)), (int32_t)L_664);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_665 = V_4;
		int32_t L_666 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_665);
		(L_665)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)118)), (int32_t)L_666);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = V_4;
		int32_t L_668 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_667);
		(L_667)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)119)), (int32_t)L_668);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_669 = V_4;
		NullCheck(L_669);
		int32_t L_670 = ((int32_t)120);
		int32_t L_671 = (L_669)->GetAt(static_cast<il2cpp_array_size_t>(L_670));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_672 = V_4;
		NullCheck(L_672);
		int32_t L_673 = ((int32_t)121);
		int32_t L_674 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_673));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_675 = V_4;
		NullCheck(L_675);
		int32_t L_676 = ((int32_t)122);
		int32_t L_677 = (L_675)->GetAt(static_cast<il2cpp_array_size_t>(L_676));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_678 = V_4;
		NullCheck(L_678);
		int32_t L_679 = ((int32_t)123);
		int32_t L_680 = (L_678)->GetAt(static_cast<il2cpp_array_size_t>(L_679));
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, L_671, L_674, L_677, L_680, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_681 = V_4;
		int32_t L_682 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_681);
		(L_681)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)120)), (int32_t)L_682);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_683 = V_4;
		int32_t L_684 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_683);
		(L_683)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)121)), (int32_t)L_684);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_685 = V_4;
		int32_t L_686 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_685);
		(L_685)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)122)), (int32_t)L_686);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_687 = V_4;
		int32_t L_688 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_687);
		(L_687)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)123)), (int32_t)L_688);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_689 = V_4;
		NullCheck(L_689);
		int32_t L_690 = ((int32_t)124);
		int32_t L_691 = (L_689)->GetAt(static_cast<il2cpp_array_size_t>(L_690));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_692 = V_4;
		NullCheck(L_692);
		int32_t L_693 = ((int32_t)125);
		int32_t L_694 = (L_692)->GetAt(static_cast<il2cpp_array_size_t>(L_693));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_695 = V_4;
		NullCheck(L_695);
		int32_t L_696 = ((int32_t)126);
		int32_t L_697 = (L_695)->GetAt(static_cast<il2cpp_array_size_t>(L_696));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_698 = V_4;
		NullCheck(L_698);
		int32_t L_699 = ((int32_t)127);
		int32_t L_700 = (L_698)->GetAt(static_cast<il2cpp_array_size_t>(L_699));
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, L_691, L_694, L_697, L_700, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_701 = V_4;
		int32_t L_702 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_701);
		(L_701)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)124)), (int32_t)L_702);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_703 = V_4;
		int32_t L_704 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_703);
		(L_703)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)125)), (int32_t)L_704);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_705 = V_4;
		int32_t L_706 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_705);
		(L_705)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)126)), (int32_t)L_706);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_707 = V_4;
		int32_t L_708 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_707);
		(L_707)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)127)), (int32_t)L_708);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_709 = V_4;
		NullCheck(L_709);
		int32_t L_710 = ((int32_t)128);
		int32_t L_711 = (L_709)->GetAt(static_cast<il2cpp_array_size_t>(L_710));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_712 = V_4;
		NullCheck(L_712);
		int32_t L_713 = ((int32_t)129);
		int32_t L_714 = (L_712)->GetAt(static_cast<il2cpp_array_size_t>(L_713));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_715 = V_4;
		NullCheck(L_715);
		int32_t L_716 = ((int32_t)130);
		int32_t L_717 = (L_715)->GetAt(static_cast<il2cpp_array_size_t>(L_716));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_718 = V_4;
		NullCheck(L_718);
		int32_t L_719 = ((int32_t)131);
		int32_t L_720 = (L_718)->GetAt(static_cast<il2cpp_array_size_t>(L_719));
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, L_711, L_714, L_717, L_720, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_721 = V_4;
		int32_t L_722 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		NullCheck(L_721);
		(L_721)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)128)), (int32_t)L_722);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_723 = V_4;
		int32_t L_724 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		NullCheck(L_723);
		(L_723)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)129)), (int32_t)L_724);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_725 = V_4;
		int32_t L_726 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		NullCheck(L_725);
		(L_725)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)130)), (int32_t)L_726);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_727 = V_4;
		int32_t L_728 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		NullCheck(L_727);
		(L_727)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)131)), (int32_t)L_728);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_729 = V_4;
		return L_729;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_EncryptBlock_mA13969E752D215B7D994379D1C9C6CF9E04B6D8A (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, L_1, NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_input;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_input;
		int32_t L_7 = ___1_inOff;
		uint32_t L_8;
		L_8 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_6, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_input;
		int32_t L_10 = ___1_inOff;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)12))), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_16);
		int32_t L_17 = 1;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_20);
		int32_t L_21 = 2;
		int32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_24);
		int32_t L_25 = 3;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, ((int32_t)(L_14^L_15)), ((int32_t)(L_18^L_19)), ((int32_t)(L_22^L_23)), ((int32_t)(L_26^L_27)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_28);
		int32_t L_29 = 4;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_32);
		int32_t L_33 = 5;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_36);
		int32_t L_37 = 6;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_40);
		int32_t L_41 = 7;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, ((int32_t)(L_30^L_31)), ((int32_t)(L_34^L_35)), ((int32_t)(L_38^L_39)), ((int32_t)(L_42^L_43)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_44);
		int32_t L_45 = 8;
		int32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)9);
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_52);
		int32_t L_53 = ((int32_t)10);
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_56);
		int32_t L_57 = ((int32_t)11);
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, ((int32_t)(L_46^L_47)), ((int32_t)(L_50^L_51)), ((int32_t)(L_54^L_55)), ((int32_t)(L_58^L_59)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_60);
		int32_t L_61 = ((int32_t)12);
		int32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_64);
		int32_t L_65 = ((int32_t)13);
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_68);
		int32_t L_69 = ((int32_t)14);
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_72);
		int32_t L_73 = ((int32_t)15);
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, ((int32_t)(L_62^L_63)), ((int32_t)(L_66^L_67)), ((int32_t)(L_70^L_71)), ((int32_t)(L_74^L_75)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_76);
		int32_t L_77 = ((int32_t)16);
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_80);
		int32_t L_81 = ((int32_t)17);
		int32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		int32_t L_83 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)18);
		int32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_88);
		int32_t L_89 = ((int32_t)19);
		int32_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		int32_t L_91 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, ((int32_t)(L_78^L_79)), ((int32_t)(L_82^L_83)), ((int32_t)(L_86^L_87)), ((int32_t)(L_90^L_91)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_92);
		int32_t L_93 = ((int32_t)20);
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		int32_t L_95 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_96);
		int32_t L_97 = ((int32_t)21);
		int32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		int32_t L_99 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_100);
		int32_t L_101 = ((int32_t)22);
		int32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_104);
		int32_t L_105 = ((int32_t)23);
		int32_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t L_107 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, ((int32_t)(L_94^L_95)), ((int32_t)(L_98^L_99)), ((int32_t)(L_102^L_103)), ((int32_t)(L_106^L_107)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_108);
		int32_t L_109 = ((int32_t)24);
		int32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)25);
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)26);
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		int32_t L_119 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_120);
		int32_t L_121 = ((int32_t)27);
		int32_t L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		int32_t L_123 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, ((int32_t)(L_110^L_111)), ((int32_t)(L_114^L_115)), ((int32_t)(L_118^L_119)), ((int32_t)(L_122^L_123)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_124);
		int32_t L_125 = ((int32_t)28);
		int32_t L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_128);
		int32_t L_129 = ((int32_t)29);
		int32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t L_131 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)30);
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_136);
		int32_t L_137 = ((int32_t)31);
		int32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, ((int32_t)(L_126^L_127)), ((int32_t)(L_130^L_131)), ((int32_t)(L_134^L_135)), ((int32_t)(L_138^L_139)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_140);
		int32_t L_141 = ((int32_t)32);
		int32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		int32_t L_143 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_144);
		int32_t L_145 = ((int32_t)33);
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_148);
		int32_t L_149 = ((int32_t)34);
		int32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_152);
		int32_t L_153 = ((int32_t)35);
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, ((int32_t)(L_142^L_143)), ((int32_t)(L_146^L_147)), ((int32_t)(L_150^L_151)), ((int32_t)(L_154^L_155)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_156);
		int32_t L_157 = ((int32_t)36);
		int32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_160 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_160);
		int32_t L_161 = ((int32_t)37);
		int32_t L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_164);
		int32_t L_165 = ((int32_t)38);
		int32_t L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_168);
		int32_t L_169 = ((int32_t)39);
		int32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, ((int32_t)(L_158^L_159)), ((int32_t)(L_162^L_163)), ((int32_t)(L_166^L_167)), ((int32_t)(L_170^L_171)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)40);
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_176);
		int32_t L_177 = ((int32_t)41);
		int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		int32_t L_179 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_180);
		int32_t L_181 = ((int32_t)42);
		int32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_184);
		int32_t L_185 = ((int32_t)43);
		int32_t L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, ((int32_t)(L_174^L_175)), ((int32_t)(L_178^L_179)), ((int32_t)(L_182^L_183)), ((int32_t)(L_186^L_187)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_188);
		int32_t L_189 = ((int32_t)44);
		int32_t L_190 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		int32_t L_191 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)45);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_196 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_196);
		int32_t L_197 = ((int32_t)46);
		int32_t L_198 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_200 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_200);
		int32_t L_201 = ((int32_t)47);
		int32_t L_202 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		int32_t L_203 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, ((int32_t)(L_190^L_191)), ((int32_t)(L_194^L_195)), ((int32_t)(L_198^L_199)), ((int32_t)(L_202^L_203)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_204);
		int32_t L_205 = ((int32_t)48);
		int32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		int32_t L_207 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_208);
		int32_t L_209 = ((int32_t)49);
		int32_t L_210 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		int32_t L_211 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)50);
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_216);
		int32_t L_217 = ((int32_t)51);
		int32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		int32_t L_219 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, ((int32_t)(L_206^L_207)), ((int32_t)(L_210^L_211)), ((int32_t)(L_214^L_215)), ((int32_t)(L_218^L_219)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_220);
		int32_t L_221 = ((int32_t)52);
		int32_t L_222 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_224 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_224);
		int32_t L_225 = ((int32_t)53);
		int32_t L_226 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)54);
		int32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)55);
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		int32_t L_235 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, ((int32_t)(L_222^L_223)), ((int32_t)(L_226^L_227)), ((int32_t)(L_230^L_231)), ((int32_t)(L_234^L_235)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_236);
		int32_t L_237 = ((int32_t)56);
		int32_t L_238 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_240);
		int32_t L_241 = ((int32_t)57);
		int32_t L_242 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		int32_t L_243 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_244);
		int32_t L_245 = ((int32_t)58);
		int32_t L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		int32_t L_247 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_248);
		int32_t L_249 = ((int32_t)59);
		int32_t L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, ((int32_t)(L_238^L_239)), ((int32_t)(L_242^L_243)), ((int32_t)(L_246^L_247)), ((int32_t)(L_250^L_251)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)60);
		int32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		int32_t L_255 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_256);
		int32_t L_257 = ((int32_t)61);
		int32_t L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_260 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_260);
		int32_t L_261 = ((int32_t)62);
		int32_t L_262 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_264 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_264);
		int32_t L_265 = ((int32_t)63);
		int32_t L_266 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		int32_t L_267 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, ((int32_t)(L_254^L_255)), ((int32_t)(L_258^L_259)), ((int32_t)(L_262^L_263)), ((int32_t)(L_266^L_267)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_268);
		int32_t L_269 = ((int32_t)64);
		int32_t L_270 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		int32_t L_271 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)65);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		int32_t L_275 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_276);
		int32_t L_277 = ((int32_t)66);
		int32_t L_278 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		int32_t L_279 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_280 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_280);
		int32_t L_281 = ((int32_t)67);
		int32_t L_282 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		int32_t L_283 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, ((int32_t)(L_270^L_271)), ((int32_t)(L_274^L_275)), ((int32_t)(L_278^L_279)), ((int32_t)(L_282^L_283)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_284);
		int32_t L_285 = ((int32_t)68);
		int32_t L_286 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		int32_t L_287 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_288);
		int32_t L_289 = ((int32_t)69);
		int32_t L_290 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		int32_t L_291 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_292);
		int32_t L_293 = ((int32_t)70);
		int32_t L_294 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		int32_t L_295 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_296);
		int32_t L_297 = ((int32_t)71);
		int32_t L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		int32_t L_299 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, ((int32_t)(L_286^L_287)), ((int32_t)(L_290^L_291)), ((int32_t)(L_294^L_295)), ((int32_t)(L_298^L_299)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_300 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_300);
		int32_t L_301 = ((int32_t)72);
		int32_t L_302 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		int32_t L_303 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_304 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_304);
		int32_t L_305 = ((int32_t)73);
		int32_t L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		int32_t L_307 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_308);
		int32_t L_309 = ((int32_t)74);
		int32_t L_310 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		int32_t L_311 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_312);
		int32_t L_313 = ((int32_t)75);
		int32_t L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		int32_t L_315 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, ((int32_t)(L_302^L_303)), ((int32_t)(L_306^L_307)), ((int32_t)(L_310^L_311)), ((int32_t)(L_314^L_315)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_316);
		int32_t L_317 = ((int32_t)76);
		int32_t L_318 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		int32_t L_319 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_320);
		int32_t L_321 = ((int32_t)77);
		int32_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		int32_t L_323 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_324);
		int32_t L_325 = ((int32_t)78);
		int32_t L_326 = (L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_328);
		int32_t L_329 = ((int32_t)79);
		int32_t L_330 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, ((int32_t)(L_318^L_319)), ((int32_t)(L_322^L_323)), ((int32_t)(L_326^L_327)), ((int32_t)(L_330^L_331)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)80);
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_336 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_336);
		int32_t L_337 = ((int32_t)81);
		int32_t L_338 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		int32_t L_339 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_340 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_340);
		int32_t L_341 = ((int32_t)82);
		int32_t L_342 = (L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		int32_t L_343 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_344);
		int32_t L_345 = ((int32_t)83);
		int32_t L_346 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		int32_t L_347 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, ((int32_t)(L_334^L_335)), ((int32_t)(L_338^L_339)), ((int32_t)(L_342^L_343)), ((int32_t)(L_346^L_347)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_348 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_348);
		int32_t L_349 = ((int32_t)84);
		int32_t L_350 = (L_348)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		int32_t L_351 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_352);
		int32_t L_353 = ((int32_t)85);
		int32_t L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		int32_t L_355 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_356 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_356);
		int32_t L_357 = ((int32_t)86);
		int32_t L_358 = (L_356)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		int32_t L_359 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_360 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_360);
		int32_t L_361 = ((int32_t)87);
		int32_t L_362 = (L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		int32_t L_363 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, ((int32_t)(L_350^L_351)), ((int32_t)(L_354^L_355)), ((int32_t)(L_358^L_359)), ((int32_t)(L_362^L_363)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_364 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_364);
		int32_t L_365 = ((int32_t)88);
		int32_t L_366 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_365));
		int32_t L_367 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_368 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_368);
		int32_t L_369 = ((int32_t)89);
		int32_t L_370 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_369));
		int32_t L_371 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_372);
		int32_t L_373 = ((int32_t)90);
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		int32_t L_375 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_376 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_376);
		int32_t L_377 = ((int32_t)91);
		int32_t L_378 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_377));
		int32_t L_379 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, ((int32_t)(L_366^L_367)), ((int32_t)(L_370^L_371)), ((int32_t)(L_374^L_375)), ((int32_t)(L_378^L_379)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_380 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)92);
		int32_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		int32_t L_383 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_384 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_384);
		int32_t L_385 = ((int32_t)93);
		int32_t L_386 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		int32_t L_387 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_388 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_388);
		int32_t L_389 = ((int32_t)94);
		int32_t L_390 = (L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		int32_t L_391 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)95);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		int32_t L_395 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, ((int32_t)(L_382^L_383)), ((int32_t)(L_386^L_387)), ((int32_t)(L_390^L_391)), ((int32_t)(L_394^L_395)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_396);
		int32_t L_397 = ((int32_t)96);
		int32_t L_398 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		int32_t L_399 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_400 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_400);
		int32_t L_401 = ((int32_t)97);
		int32_t L_402 = (L_400)->GetAt(static_cast<il2cpp_array_size_t>(L_401));
		int32_t L_403 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_404 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_404);
		int32_t L_405 = ((int32_t)98);
		int32_t L_406 = (L_404)->GetAt(static_cast<il2cpp_array_size_t>(L_405));
		int32_t L_407 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_408);
		int32_t L_409 = ((int32_t)99);
		int32_t L_410 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_409));
		int32_t L_411 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb0_mB48AAA7991D6C85ADE5D3D315E961DB4A9BD12B1(__this, ((int32_t)(L_398^L_399)), ((int32_t)(L_402^L_403)), ((int32_t)(L_406^L_407)), ((int32_t)(L_410^L_411)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_412);
		int32_t L_413 = ((int32_t)100);
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		int32_t L_415 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_416);
		int32_t L_417 = ((int32_t)101);
		int32_t L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		int32_t L_419 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_420 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_420);
		int32_t L_421 = ((int32_t)102);
		int32_t L_422 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		int32_t L_423 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_424);
		int32_t L_425 = ((int32_t)103);
		int32_t L_426 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_425));
		int32_t L_427 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb1_m014A81A5FF07FF547E19E23F672386834FAF6442(__this, ((int32_t)(L_414^L_415)), ((int32_t)(L_418^L_419)), ((int32_t)(L_422^L_423)), ((int32_t)(L_426^L_427)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_428);
		int32_t L_429 = ((int32_t)104);
		int32_t L_430 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_429));
		int32_t L_431 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_432);
		int32_t L_433 = ((int32_t)105);
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		int32_t L_435 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_436);
		int32_t L_437 = ((int32_t)106);
		int32_t L_438 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_437));
		int32_t L_439 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_440 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_440);
		int32_t L_441 = ((int32_t)107);
		int32_t L_442 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_441));
		int32_t L_443 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb2_mD7DDCE3C59C70B459F4D6BFF9BE2F6B594897730(__this, ((int32_t)(L_430^L_431)), ((int32_t)(L_434^L_435)), ((int32_t)(L_438^L_439)), ((int32_t)(L_442^L_443)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_444 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_444);
		int32_t L_445 = ((int32_t)108);
		int32_t L_446 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_445));
		int32_t L_447 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_448);
		int32_t L_449 = ((int32_t)109);
		int32_t L_450 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_449));
		int32_t L_451 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_452);
		int32_t L_453 = ((int32_t)110);
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		int32_t L_455 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_456 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)111);
		int32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		int32_t L_459 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb3_m318BD61C0C3E78D7281EF73AE4565A2C32E2B9DC(__this, ((int32_t)(L_446^L_447)), ((int32_t)(L_450^L_451)), ((int32_t)(L_454^L_455)), ((int32_t)(L_458^L_459)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_460 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_460);
		int32_t L_461 = ((int32_t)112);
		int32_t L_462 = (L_460)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		int32_t L_463 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_464 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_464);
		int32_t L_465 = ((int32_t)113);
		int32_t L_466 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		int32_t L_467 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_468);
		int32_t L_469 = ((int32_t)114);
		int32_t L_470 = (L_468)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		int32_t L_471 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_472);
		int32_t L_473 = ((int32_t)115);
		int32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		int32_t L_475 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb4_m59CBA7021F06D61A143F9BF902C3B1A24D1C8B12(__this, ((int32_t)(L_462^L_463)), ((int32_t)(L_466^L_467)), ((int32_t)(L_470^L_471)), ((int32_t)(L_474^L_475)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_476);
		int32_t L_477 = ((int32_t)116);
		int32_t L_478 = (L_476)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		int32_t L_479 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_480 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_480);
		int32_t L_481 = ((int32_t)117);
		int32_t L_482 = (L_480)->GetAt(static_cast<il2cpp_array_size_t>(L_481));
		int32_t L_483 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_484);
		int32_t L_485 = ((int32_t)118);
		int32_t L_486 = (L_484)->GetAt(static_cast<il2cpp_array_size_t>(L_485));
		int32_t L_487 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_488 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_488);
		int32_t L_489 = ((int32_t)119);
		int32_t L_490 = (L_488)->GetAt(static_cast<il2cpp_array_size_t>(L_489));
		int32_t L_491 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb5_m57260459B72D48A2F16F50C61C894667AA099C97(__this, ((int32_t)(L_478^L_479)), ((int32_t)(L_482^L_483)), ((int32_t)(L_486^L_487)), ((int32_t)(L_490^L_491)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_492);
		int32_t L_493 = ((int32_t)120);
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		int32_t L_495 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_496 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_496);
		int32_t L_497 = ((int32_t)121);
		int32_t L_498 = (L_496)->GetAt(static_cast<il2cpp_array_size_t>(L_497));
		int32_t L_499 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_500 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_500);
		int32_t L_501 = ((int32_t)122);
		int32_t L_502 = (L_500)->GetAt(static_cast<il2cpp_array_size_t>(L_501));
		int32_t L_503 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_504);
		int32_t L_505 = ((int32_t)123);
		int32_t L_506 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_505));
		int32_t L_507 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb6_mC7B40BCD4490F8CD2254869130BF228F5A308CF7(__this, ((int32_t)(L_494^L_495)), ((int32_t)(L_498^L_499)), ((int32_t)(L_502^L_503)), ((int32_t)(L_506^L_507)), NULL);
		SerpentEngineBase_LT_m82BD16B576D513B5F05B5605684E7160DC1BCA17(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_508);
		int32_t L_509 = ((int32_t)124);
		int32_t L_510 = (L_508)->GetAt(static_cast<il2cpp_array_size_t>(L_509));
		int32_t L_511 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_512);
		int32_t L_513 = ((int32_t)125);
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		int32_t L_515 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_516);
		int32_t L_517 = ((int32_t)126);
		int32_t L_518 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_517));
		int32_t L_519 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_520 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_520);
		int32_t L_521 = ((int32_t)127);
		int32_t L_522 = (L_520)->GetAt(static_cast<il2cpp_array_size_t>(L_521));
		int32_t L_523 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Sb7_mE05EABF43AE34AE4FDF2B79F9159F940DD77CA8C(__this, ((int32_t)(L_510^L_511)), ((int32_t)(L_514^L_515)), ((int32_t)(L_518^L_519)), ((int32_t)(L_522^L_523)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_524 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_524);
		int32_t L_525 = ((int32_t)131);
		int32_t L_526 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_525));
		int32_t L_527 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_528 = ___2_output;
		int32_t L_529 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_526^L_527)), L_528, L_529, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_530);
		int32_t L_531 = ((int32_t)130);
		int32_t L_532 = (L_530)->GetAt(static_cast<il2cpp_array_size_t>(L_531));
		int32_t L_533 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_534 = ___2_output;
		int32_t L_535 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_532^L_533)), L_534, ((int32_t)il2cpp_codegen_add(L_535, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_536 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_536);
		int32_t L_537 = ((int32_t)129);
		int32_t L_538 = (L_536)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		int32_t L_539 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_540 = ___2_output;
		int32_t L_541 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_538^L_539)), L_540, ((int32_t)il2cpp_codegen_add(L_541, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_542 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_542);
		int32_t L_543 = ((int32_t)128);
		int32_t L_544 = (L_542)->GetAt(static_cast<il2cpp_array_size_t>(L_543));
		int32_t L_545 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_546 = ___2_output;
		int32_t L_547 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_544^L_545)), L_546, ((int32_t)il2cpp_codegen_add(L_547, ((int32_t)12))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_DecryptBlock_m5A6F132C533F9B0BBB66BEAD914C15A605030618 (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)131);
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_input;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_3, L_4, NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_2^(int32_t)L_5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)130);
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_input;
		int32_t L_10 = ___1_inOff;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_9, ((int32_t)il2cpp_codegen_add(L_10, 4)), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_8^(int32_t)L_11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)129);
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_input;
		int32_t L_16 = ___1_inOff;
		uint32_t L_17;
		L_17 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_15, ((int32_t)il2cpp_codegen_add(L_16, 8)), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_14^(int32_t)L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)128);
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_input;
		int32_t L_22 = ___1_inOff;
		uint32_t L_23;
		L_23 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12))), NULL);
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_20^(int32_t)L_23));
		int32_t L_24 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_25 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_26 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_27 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D(__this, L_24, L_25, L_26, L_27, NULL);
		int32_t L_28 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)124);
		int32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_28^L_31));
		int32_t L_32 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)125);
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_32^L_35));
		int32_t L_36 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)126);
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_36^L_39));
		int32_t L_40 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)127);
		int32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_40^L_43));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_44 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_45 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_46 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_47 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589(__this, L_44, L_45, L_46, L_47, NULL);
		int32_t L_48 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_49);
		int32_t L_50 = ((int32_t)120);
		int32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_48^L_51));
		int32_t L_52 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)121);
		int32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_52^L_55));
		int32_t L_56 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_57);
		int32_t L_58 = ((int32_t)122);
		int32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_56^L_59));
		int32_t L_60 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_61);
		int32_t L_62 = ((int32_t)123);
		int32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_60^L_63));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_64 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_65 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_66 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_67 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE(__this, L_64, L_65, L_66, L_67, NULL);
		int32_t L_68 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_69);
		int32_t L_70 = ((int32_t)116);
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_68^L_71));
		int32_t L_72 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_73);
		int32_t L_74 = ((int32_t)117);
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_72^L_75));
		int32_t L_76 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_77);
		int32_t L_78 = ((int32_t)118);
		int32_t L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_76^L_79));
		int32_t L_80 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_81);
		int32_t L_82 = ((int32_t)119);
		int32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_80^L_83));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_84 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_85 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_86 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_87 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17(__this, L_84, L_85, L_86, L_87, NULL);
		int32_t L_88 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_89);
		int32_t L_90 = ((int32_t)112);
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_88^L_91));
		int32_t L_92 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)113);
		int32_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_92^L_95));
		int32_t L_96 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_97);
		int32_t L_98 = ((int32_t)114);
		int32_t L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_96^L_99));
		int32_t L_100 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)115);
		int32_t L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_100^L_103));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_104 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_105 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_106 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_107 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02(__this, L_104, L_105, L_106, L_107, NULL);
		int32_t L_108 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_109);
		int32_t L_110 = ((int32_t)108);
		int32_t L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_108^L_111));
		int32_t L_112 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_113);
		int32_t L_114 = ((int32_t)109);
		int32_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_112^L_115));
		int32_t L_116 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_117);
		int32_t L_118 = ((int32_t)110);
		int32_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_116^L_119));
		int32_t L_120 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_121);
		int32_t L_122 = ((int32_t)111);
		int32_t L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_120^L_123));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_124 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_125 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_126 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_127 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA(__this, L_124, L_125, L_126, L_127, NULL);
		int32_t L_128 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)104);
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_128^L_131));
		int32_t L_132 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_133);
		int32_t L_134 = ((int32_t)105);
		int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_132^L_135));
		int32_t L_136 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_137);
		int32_t L_138 = ((int32_t)106);
		int32_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_136^L_139));
		int32_t L_140 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_141);
		int32_t L_142 = ((int32_t)107);
		int32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_140^L_143));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_144 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_145 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_146 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_147 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA(__this, L_144, L_145, L_146, L_147, NULL);
		int32_t L_148 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_149);
		int32_t L_150 = ((int32_t)100);
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_148^L_151));
		int32_t L_152 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_153);
		int32_t L_154 = ((int32_t)101);
		int32_t L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_152^L_155));
		int32_t L_156 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_157);
		int32_t L_158 = ((int32_t)102);
		int32_t L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_156^L_159));
		int32_t L_160 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_161);
		int32_t L_162 = ((int32_t)103);
		int32_t L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_160^L_163));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_164 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_165 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_166 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_167 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686(__this, L_164, L_165, L_166, L_167, NULL);
		int32_t L_168 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_169);
		int32_t L_170 = ((int32_t)96);
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_168^L_171));
		int32_t L_172 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_173);
		int32_t L_174 = ((int32_t)97);
		int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_172^L_175));
		int32_t L_176 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_177);
		int32_t L_178 = ((int32_t)98);
		int32_t L_179 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_176^L_179));
		int32_t L_180 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_181);
		int32_t L_182 = ((int32_t)99);
		int32_t L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_180^L_183));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_184 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_185 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_186 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_187 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D(__this, L_184, L_185, L_186, L_187, NULL);
		int32_t L_188 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)92);
		int32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_188^L_191));
		int32_t L_192 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_193);
		int32_t L_194 = ((int32_t)93);
		int32_t L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_192^L_195));
		int32_t L_196 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_197);
		int32_t L_198 = ((int32_t)94);
		int32_t L_199 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_196^L_199));
		int32_t L_200 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_201);
		int32_t L_202 = ((int32_t)95);
		int32_t L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_200^L_203));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_204 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_205 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_206 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_207 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589(__this, L_204, L_205, L_206, L_207, NULL);
		int32_t L_208 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)88);
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_208^L_211));
		int32_t L_212 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_213);
		int32_t L_214 = ((int32_t)89);
		int32_t L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_212^L_215));
		int32_t L_216 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_217 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_217);
		int32_t L_218 = ((int32_t)90);
		int32_t L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_216^L_219));
		int32_t L_220 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_221);
		int32_t L_222 = ((int32_t)91);
		int32_t L_223 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_220^L_223));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_224 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_225 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_226 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_227 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE(__this, L_224, L_225, L_226, L_227, NULL);
		int32_t L_228 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_229);
		int32_t L_230 = ((int32_t)84);
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_228^L_231));
		int32_t L_232 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_233);
		int32_t L_234 = ((int32_t)85);
		int32_t L_235 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_232^L_235));
		int32_t L_236 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_237 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_237);
		int32_t L_238 = ((int32_t)86);
		int32_t L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_236^L_239));
		int32_t L_240 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_241);
		int32_t L_242 = ((int32_t)87);
		int32_t L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_240^L_243));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_244 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_245 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_246 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_247 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17(__this, L_244, L_245, L_246, L_247, NULL);
		int32_t L_248 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_249);
		int32_t L_250 = ((int32_t)80);
		int32_t L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_248^L_251));
		int32_t L_252 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_253);
		int32_t L_254 = ((int32_t)81);
		int32_t L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_252^L_255));
		int32_t L_256 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_257);
		int32_t L_258 = ((int32_t)82);
		int32_t L_259 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_256^L_259));
		int32_t L_260 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_261);
		int32_t L_262 = ((int32_t)83);
		int32_t L_263 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_260^L_263));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_264 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_265 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_266 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_267 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02(__this, L_264, L_265, L_266, L_267, NULL);
		int32_t L_268 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)76);
		int32_t L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_268^L_271));
		int32_t L_272 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_273);
		int32_t L_274 = ((int32_t)77);
		int32_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_272^L_275));
		int32_t L_276 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_277);
		int32_t L_278 = ((int32_t)78);
		int32_t L_279 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_276^L_279));
		int32_t L_280 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_281);
		int32_t L_282 = ((int32_t)79);
		int32_t L_283 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_280^L_283));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_284 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_285 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_286 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_287 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA(__this, L_284, L_285, L_286, L_287, NULL);
		int32_t L_288 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_289);
		int32_t L_290 = ((int32_t)72);
		int32_t L_291 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_288^L_291));
		int32_t L_292 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_293 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_293);
		int32_t L_294 = ((int32_t)73);
		int32_t L_295 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_292^L_295));
		int32_t L_296 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_297 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_297);
		int32_t L_298 = ((int32_t)74);
		int32_t L_299 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_296^L_299));
		int32_t L_300 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_301);
		int32_t L_302 = ((int32_t)75);
		int32_t L_303 = (L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_300^L_303));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_304 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_305 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_306 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_307 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA(__this, L_304, L_305, L_306, L_307, NULL);
		int32_t L_308 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_309);
		int32_t L_310 = ((int32_t)68);
		int32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_308^L_311));
		int32_t L_312 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_313 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_313);
		int32_t L_314 = ((int32_t)69);
		int32_t L_315 = (L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_312^L_315));
		int32_t L_316 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_317 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_317);
		int32_t L_318 = ((int32_t)70);
		int32_t L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_316^L_319));
		int32_t L_320 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_321);
		int32_t L_322 = ((int32_t)71);
		int32_t L_323 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_320^L_323));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_324 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_325 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_326 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_327 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686(__this, L_324, L_325, L_326, L_327, NULL);
		int32_t L_328 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)64);
		int32_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_328^L_331));
		int32_t L_332 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_333);
		int32_t L_334 = ((int32_t)65);
		int32_t L_335 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_332^L_335));
		int32_t L_336 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_337 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_337);
		int32_t L_338 = ((int32_t)66);
		int32_t L_339 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_336^L_339));
		int32_t L_340 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_341);
		int32_t L_342 = ((int32_t)67);
		int32_t L_343 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_340^L_343));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_344 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_345 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_346 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_347 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D(__this, L_344, L_345, L_346, L_347, NULL);
		int32_t L_348 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_349);
		int32_t L_350 = ((int32_t)60);
		int32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_348^L_351));
		int32_t L_352 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_353 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_353);
		int32_t L_354 = ((int32_t)61);
		int32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_352^L_355));
		int32_t L_356 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_357 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_357);
		int32_t L_358 = ((int32_t)62);
		int32_t L_359 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_356^L_359));
		int32_t L_360 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_361);
		int32_t L_362 = ((int32_t)63);
		int32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_360^L_363));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_364 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_365 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_366 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_367 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589(__this, L_364, L_365, L_366, L_367, NULL);
		int32_t L_368 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_369);
		int32_t L_370 = ((int32_t)56);
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_368^L_371));
		int32_t L_372 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_373 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_373);
		int32_t L_374 = ((int32_t)57);
		int32_t L_375 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_372^L_375));
		int32_t L_376 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_377);
		int32_t L_378 = ((int32_t)58);
		int32_t L_379 = (L_377)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_376^L_379));
		int32_t L_380 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_381);
		int32_t L_382 = ((int32_t)59);
		int32_t L_383 = (L_381)->GetAt(static_cast<il2cpp_array_size_t>(L_382));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_380^L_383));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_384 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_385 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_386 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_387 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE(__this, L_384, L_385, L_386, L_387, NULL);
		int32_t L_388 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)52);
		int32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_388^L_391));
		int32_t L_392 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_393);
		int32_t L_394 = ((int32_t)53);
		int32_t L_395 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_392^L_395));
		int32_t L_396 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_397 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_397);
		int32_t L_398 = ((int32_t)54);
		int32_t L_399 = (L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_396^L_399));
		int32_t L_400 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_401);
		int32_t L_402 = ((int32_t)55);
		int32_t L_403 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_402));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_400^L_403));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_404 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_405 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_406 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_407 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17(__this, L_404, L_405, L_406, L_407, NULL);
		int32_t L_408 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_409);
		int32_t L_410 = ((int32_t)48);
		int32_t L_411 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_408^L_411));
		int32_t L_412 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_413);
		int32_t L_414 = ((int32_t)49);
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_412^L_415));
		int32_t L_416 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_417 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_417);
		int32_t L_418 = ((int32_t)50);
		int32_t L_419 = (L_417)->GetAt(static_cast<il2cpp_array_size_t>(L_418));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_416^L_419));
		int32_t L_420 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_421);
		int32_t L_422 = ((int32_t)51);
		int32_t L_423 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_420^L_423));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_424 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_425 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_426 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_427 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02(__this, L_424, L_425, L_426, L_427, NULL);
		int32_t L_428 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_429);
		int32_t L_430 = ((int32_t)44);
		int32_t L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_428^L_431));
		int32_t L_432 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_433 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_433);
		int32_t L_434 = ((int32_t)45);
		int32_t L_435 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_434));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_432^L_435));
		int32_t L_436 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_437 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)46);
		int32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_436^L_439));
		int32_t L_440 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_441);
		int32_t L_442 = ((int32_t)47);
		int32_t L_443 = (L_441)->GetAt(static_cast<il2cpp_array_size_t>(L_442));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_440^L_443));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_444 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_445 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_446 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_447 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA(__this, L_444, L_445, L_446, L_447, NULL);
		int32_t L_448 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)40);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_448^L_451));
		int32_t L_452 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_453 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_453);
		int32_t L_454 = ((int32_t)41);
		int32_t L_455 = (L_453)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_452^L_455));
		int32_t L_456 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_457 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_457);
		int32_t L_458 = ((int32_t)42);
		int32_t L_459 = (L_457)->GetAt(static_cast<il2cpp_array_size_t>(L_458));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_456^L_459));
		int32_t L_460 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_461);
		int32_t L_462 = ((int32_t)43);
		int32_t L_463 = (L_461)->GetAt(static_cast<il2cpp_array_size_t>(L_462));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_460^L_463));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_464 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_465 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_466 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_467 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA(__this, L_464, L_465, L_466, L_467, NULL);
		int32_t L_468 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_469);
		int32_t L_470 = ((int32_t)36);
		int32_t L_471 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_468^L_471));
		int32_t L_472 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_473 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_473);
		int32_t L_474 = ((int32_t)37);
		int32_t L_475 = (L_473)->GetAt(static_cast<il2cpp_array_size_t>(L_474));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_472^L_475));
		int32_t L_476 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_477 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_477);
		int32_t L_478 = ((int32_t)38);
		int32_t L_479 = (L_477)->GetAt(static_cast<il2cpp_array_size_t>(L_478));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_476^L_479));
		int32_t L_480 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_481);
		int32_t L_482 = ((int32_t)39);
		int32_t L_483 = (L_481)->GetAt(static_cast<il2cpp_array_size_t>(L_482));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_480^L_483));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_484 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_485 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_486 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_487 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686(__this, L_484, L_485, L_486, L_487, NULL);
		int32_t L_488 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_489);
		int32_t L_490 = ((int32_t)32);
		int32_t L_491 = (L_489)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_488^L_491));
		int32_t L_492 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_493);
		int32_t L_494 = ((int32_t)33);
		int32_t L_495 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_494));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_492^L_495));
		int32_t L_496 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_497 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_497);
		int32_t L_498 = ((int32_t)34);
		int32_t L_499 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_498));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_496^L_499));
		int32_t L_500 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_501);
		int32_t L_502 = ((int32_t)35);
		int32_t L_503 = (L_501)->GetAt(static_cast<il2cpp_array_size_t>(L_502));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_500^L_503));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_504 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_505 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_506 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_507 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib7_m080BB61DB2BBECFF70DD5E11C3EECD18FA1B407D(__this, L_504, L_505, L_506, L_507, NULL);
		int32_t L_508 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_509);
		int32_t L_510 = ((int32_t)28);
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_508^L_511));
		int32_t L_512 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_513 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)29);
		int32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_512^L_515));
		int32_t L_516 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_517 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_517);
		int32_t L_518 = ((int32_t)30);
		int32_t L_519 = (L_517)->GetAt(static_cast<il2cpp_array_size_t>(L_518));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_516^L_519));
		int32_t L_520 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_521);
		int32_t L_522 = ((int32_t)31);
		int32_t L_523 = (L_521)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_520^L_523));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_524 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_525 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_526 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_527 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib6_mE76F4EEECD0834EF9C9D9D820A4C6320DEDA6589(__this, L_524, L_525, L_526, L_527, NULL);
		int32_t L_528 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_529);
		int32_t L_530 = ((int32_t)24);
		int32_t L_531 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_528^L_531));
		int32_t L_532 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_533 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_533);
		int32_t L_534 = ((int32_t)25);
		int32_t L_535 = (L_533)->GetAt(static_cast<il2cpp_array_size_t>(L_534));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_532^L_535));
		int32_t L_536 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_537 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_537);
		int32_t L_538 = ((int32_t)26);
		int32_t L_539 = (L_537)->GetAt(static_cast<il2cpp_array_size_t>(L_538));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_536^L_539));
		int32_t L_540 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_541);
		int32_t L_542 = ((int32_t)27);
		int32_t L_543 = (L_541)->GetAt(static_cast<il2cpp_array_size_t>(L_542));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_540^L_543));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_544 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_545 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_546 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_547 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib5_mDC44A797FE491A2357D2B75A3029D81C732062CE(__this, L_544, L_545, L_546, L_547, NULL);
		int32_t L_548 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_549);
		int32_t L_550 = ((int32_t)20);
		int32_t L_551 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_548^L_551));
		int32_t L_552 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_553 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_553);
		int32_t L_554 = ((int32_t)21);
		int32_t L_555 = (L_553)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_552^L_555));
		int32_t L_556 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_557 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_557);
		int32_t L_558 = ((int32_t)22);
		int32_t L_559 = (L_557)->GetAt(static_cast<il2cpp_array_size_t>(L_558));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_556^L_559));
		int32_t L_560 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_561);
		int32_t L_562 = ((int32_t)23);
		int32_t L_563 = (L_561)->GetAt(static_cast<il2cpp_array_size_t>(L_562));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_560^L_563));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_564 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_565 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_566 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_567 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib4_m5FD4AD4374592D32F1BADBF5944D56FDDF535A17(__this, L_564, L_565, L_566, L_567, NULL);
		int32_t L_568 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)16);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_568^L_571));
		int32_t L_572 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_573 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_573);
		int32_t L_574 = ((int32_t)17);
		int32_t L_575 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_572^L_575));
		int32_t L_576 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_577 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_577);
		int32_t L_578 = ((int32_t)18);
		int32_t L_579 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_576^L_579));
		int32_t L_580 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_581);
		int32_t L_582 = ((int32_t)19);
		int32_t L_583 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_580^L_583));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_584 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_585 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_586 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_587 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib3_m8B92CFB34C76A231C84A29D3650FD7C19A4C6B02(__this, L_584, L_585, L_586, L_587, NULL);
		int32_t L_588 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)12);
		int32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_588^L_591));
		int32_t L_592 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_593 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_593);
		int32_t L_594 = ((int32_t)13);
		int32_t L_595 = (L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_592^L_595));
		int32_t L_596 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_597 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_597);
		int32_t L_598 = ((int32_t)14);
		int32_t L_599 = (L_597)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_596^L_599));
		int32_t L_600 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_601);
		int32_t L_602 = ((int32_t)15);
		int32_t L_603 = (L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_600^L_603));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_604 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_605 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_606 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_607 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib2_mF9922DAB16D4972E29F936792DC13A43315F0BDA(__this, L_604, L_605, L_606, L_607, NULL);
		int32_t L_608 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_609);
		int32_t L_610 = 8;
		int32_t L_611 = (L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_608^L_611));
		int32_t L_612 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_613 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)9);
		int32_t L_615 = (L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_612^L_615));
		int32_t L_616 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_617 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_617);
		int32_t L_618 = ((int32_t)10);
		int32_t L_619 = (L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_616^L_619));
		int32_t L_620 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_621);
		int32_t L_622 = ((int32_t)11);
		int32_t L_623 = (L_621)->GetAt(static_cast<il2cpp_array_size_t>(L_622));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_620^L_623));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_624 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_625 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_626 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_627 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib1_m9568D452EFD5F97D6FB6D5F4C4DEB8DE22C1AFEA(__this, L_624, L_625, L_626, L_627, NULL);
		int32_t L_628 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_629);
		int32_t L_630 = 4;
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0 = ((int32_t)(L_628^L_631));
		int32_t L_632 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_633 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_633);
		int32_t L_634 = 5;
		int32_t L_635 = (L_633)->GetAt(static_cast<il2cpp_array_size_t>(L_634));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1 = ((int32_t)(L_632^L_635));
		int32_t L_636 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_637 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_637);
		int32_t L_638 = 6;
		int32_t L_639 = (L_637)->GetAt(static_cast<il2cpp_array_size_t>(L_638));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2 = ((int32_t)(L_636^L_639));
		int32_t L_640 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_641);
		int32_t L_642 = 7;
		int32_t L_643 = (L_641)->GetAt(static_cast<il2cpp_array_size_t>(L_642));
		((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3 = ((int32_t)(L_640^L_643));
		SerpentEngineBase_InverseLT_m22EF8B58588764567317F50AE6AD25DF61DFBAC9(__this, NULL);
		int32_t L_644 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		int32_t L_645 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		int32_t L_646 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		int32_t L_647 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		SerpentEngineBase_Ib0_mD4BA637BC9965AECBF7DF735B91B94EBED23C686(__this, L_644, L_645, L_646, L_647, NULL);
		int32_t L_648 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_649);
		int32_t L_650 = 3;
		int32_t L_651 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_650));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_652 = ___2_output;
		int32_t L_653 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_648^L_651)), L_652, L_653, NULL);
		int32_t L_654 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_655);
		int32_t L_656 = 2;
		int32_t L_657 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_656));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_658 = ___2_output;
		int32_t L_659 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_654^L_657)), L_658, ((int32_t)il2cpp_codegen_add(L_659, 4)), NULL);
		int32_t L_660 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_661);
		int32_t L_662 = 1;
		int32_t L_663 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_662));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_664 = ___2_output;
		int32_t L_665 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_660^L_663)), L_664, ((int32_t)il2cpp_codegen_add(L_665, 8)), NULL);
		int32_t L_666 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___X0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = ((SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112*)__this)->___wKey;
		NullCheck(L_667);
		int32_t L_668 = 0;
		int32_t L_669 = (L_667)->GetAt(static_cast<il2cpp_array_size_t>(L_668));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_670 = ___2_output;
		int32_t L_671 = ___3_outOff;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(((int32_t)(L_666^L_669)), L_670, ((int32_t)il2cpp_codegen_add(L_671, ((int32_t)12))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine__ctor_m6A5071547550D08925EABDC8F50F3308868E3D43 (TnepresEngine_t2B02C2BD739553A1E9A070B9E34673FC46A91743* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tB3AC7ABB82E37C88DF3BF6D8C438734223FFE112_il2cpp_TypeInfo_var);
		SerpentEngineBase__ctor_m8E2575758EAF86D04B4A066F4536CC3294422DAC(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__ctor_mEF2BFC9973B48FC7851851B9874E4D69FF921785 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS0), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS1), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS2), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS3), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_6;
		V_4 = 0;
		goto IL_0159;
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_7 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		uint8_t L_9;
		L_9 = (L_7)->GetAt(0, L_8);
		V_3 = ((int32_t)((int32_t)L_9&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14;
		L_14 = TwofishEngine_Mx_X_mDD7023B922F24C22EFDB97FDA279B5D255674663(__this, L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_14&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17;
		L_17 = TwofishEngine_Mx_Y_m187681AC069E712FDBC269EFD570E7FB537BB7A3(__this, L_16, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_17&((int32_t)255))));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_18 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		uint8_t L_20;
		L_20 = (L_18)->GetAt(1, L_19);
		V_3 = ((int32_t)((int32_t)L_20&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = TwofishEngine_Mx_X_mDD7023B922F24C22EFDB97FDA279B5D255674663(__this, L_24, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_25&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_2;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = TwofishEngine_Mx_Y_m187681AC069E712FDBC269EFD570E7FB537BB7A3(__this, L_27, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_28&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___gMDS0;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 1;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = 1;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = 1;
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41 = 1;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_33|((int32_t)(L_36<<8))))|((int32_t)(L_39<<((int32_t)16)))))|((int32_t)(L_42<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___gMDS1;
		int32_t L_44 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		NullCheck(L_45);
		int32_t L_46 = 0;
		int32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = 0;
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = 0;
		int32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = 0;
		int32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_47|((int32_t)(L_50<<8))))|((int32_t)(L_53<<((int32_t)16)))))|((int32_t)(L_56<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___gMDS2;
		int32_t L_58 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = 1;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63 = 1;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_0;
		NullCheck(L_65);
		int32_t L_66 = 1;
		int32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69 = 1;
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_61|((int32_t)(L_64<<8))))|((int32_t)(L_67<<((int32_t)16)))))|((int32_t)(L_70<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = __this->___gMDS3;
		int32_t L_72 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_1;
		NullCheck(L_73);
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77 = 0;
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_2;
		NullCheck(L_79);
		int32_t L_80 = 0;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_1;
		NullCheck(L_82);
		int32_t L_83 = 0;
		int32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_75|((int32_t)(L_78<<8))))|((int32_t)(L_81<<((int32_t)16)))))|((int32_t)(L_84<<((int32_t)24))))));
		int32_t L_85 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0159:
	{
		int32_t L_86 = V_4;
		if ((((int32_t)L_86) < ((int32_t)((int32_t)256))))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Init_m657A3D704EF33BC7E5F2876E256B9463E65CAA45 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_0, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_m11F3F1D30C6916FCFACA0BAEF25898E56A5D230B(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_Init_m657A3D704EF33BC7E5F2876E256B9463E65CAA45_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_5 = ___0_forEncryption;
		__this->___encrypting = L_5;
		RuntimeObject* L_6 = ___1_parameters;
		NullCheck(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_6, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_6, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)), NULL);
		__this->___workingKey = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___workingKey;
		NullCheck(L_8);
		__this->___k64Cnt = ((int32_t)(((int32_t)(((RuntimeArray*)L_8)->max_length))/8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___workingKey;
		TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859(__this, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TwofishEngine_get_AlgorithmName_m2F3E5EBEAF8219E0205616F06A030B8820DBA98D (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwofishEngine_get_IsPartialBlockOkay_mEF33B056938A032E34275C822CF91426E5E3CA9B (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_ProcessBlock_m55BCF5286E04760E20413E196EB75958D7BEB852 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_ProcessBlock_m55BCF5286E04760E20413E196EB75958D7BEB852_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_output;
		int32_t L_5 = ___3_outOff;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->___encrypting;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_input;
		int32_t L_8 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_output;
		int32_t L_10 = ___3_outOff;
		TwofishEngine_EncryptBlock_mCE0387ED1F262DD20EA7F28DEEB333A8BCC18655(__this, L_7, L_8, L_9, L_10, NULL);
		goto IL_0050;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_input;
		int32_t L_12 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___2_output;
		int32_t L_14 = ___3_outOff;
		TwofishEngine_DecryptBlock_mFA996A8B8A641EA807D6E60D63D563A258CAA2E8(__this, L_11, L_12, L_13, L_14, NULL);
	}

IL_0050:
	{
		return ((int32_t)16);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Reset_mFB07EA8F0BD37F8246B929D61AA0469799D59B32 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___workingKey;
		TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859(__this, L_1, NULL);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_GetBlockSize_m9F7756F67A6D08CB866B95668973D97D90F00037 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
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
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->___gSubKeys = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSubKeys), (void*)L_3);
		int32_t L_4 = __this->___k64Cnt;
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14CEE6733903CF095F0E2144576E08E2EABC9277)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_6 = __this->___k64Cnt;
		if ((((int32_t)L_6) <= ((int32_t)4)))
		{
			goto IL_004a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4690523A3F07C01F5A658C98771DE79551536F47)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_SetKey_m4F2D5703597AB3806BB8CBE34C8A0C49411D1859_RuntimeMethod_var)));
	}

IL_004a:
	{
		V_14 = 0;
		V_15 = 0;
		goto IL_0095;
	}

IL_0052:
	{
		int32_t L_8 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_multiply(L_8, 8));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		int32_t L_10 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_key;
		int32_t L_12 = V_15;
		int32_t L_13;
		L_13 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_11, L_12, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_key;
		int32_t L_17 = V_15;
		int32_t L_18;
		L_18 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_16, ((int32_t)il2cpp_codegen_add(L_17, 4)), NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		int32_t L_20 = __this->___k64Cnt;
		int32_t L_21 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_14;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_1;
		int32_t L_27 = V_14;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30;
		L_30 = TwofishEngine_RS_MDS_Encode_m64EF5D08A927C8453D3070AFD7673675C1DBA7F8(__this, L_25, L_29, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21))), (int32_t)L_30);
		int32_t L_31 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0095:
	{
		int32_t L_32 = V_14;
		int32_t L_33 = __this->___k64Cnt;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0052;
		}
	}
	{
		V_16 = 0;
		goto IL_010c;
	}

IL_00a4:
	{
		int32_t L_34 = V_16;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_34, ((int32_t)33686018)));
		int32_t L_35 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37;
		L_37 = TwofishEngine_F32_m74A40A090924733C95B91C8DCB62A4885AC5740A(__this, L_35, L_36, NULL);
		V_4 = L_37;
		int32_t L_38 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40;
		L_40 = TwofishEngine_F32_m74A40A090924733C95B91C8DCB62A4885AC5740A(__this, ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)16843009))), L_39, NULL);
		V_5 = L_40;
		int32_t L_41 = V_5;
		int32_t L_42 = V_5;
		V_5 = ((int32_t)(((int32_t)(L_41<<8))|((int32_t)((uint32_t)L_42>>((int32_t)24)))));
		int32_t L_43 = V_4;
		int32_t L_44 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___gSubKeys;
		int32_t L_46 = V_16;
		int32_t L_47 = V_4;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_46, 2))), (int32_t)L_47);
		int32_t L_48 = V_4;
		int32_t L_49 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___gSubKeys;
		int32_t L_51 = V_16;
		int32_t L_52 = V_4;
		int32_t L_53 = V_4;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_51, 2)), 1))), (int32_t)((int32_t)(((int32_t)(L_52<<((int32_t)9)))|((int32_t)((uint32_t)L_53>>((int32_t)23))))));
		int32_t L_54 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_010c:
	{
		int32_t L_55 = V_16;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)20))))
		{
			goto IL_00a4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		NullCheck(L_56);
		int32_t L_57 = 0;
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_6 = L_58;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = 1;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_7 = L_61;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63 = 2;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = L_64;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = 3;
		int32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_9 = L_67;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___gSBox = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSBox), (void*)L_68);
		V_17 = 0;
		goto IL_0460;
	}

IL_013e:
	{
		int32_t L_69 = V_17;
		int32_t L_70 = L_69;
		V_13 = L_70;
		int32_t L_71 = L_70;
		V_12 = L_71;
		int32_t L_72 = L_71;
		V_11 = L_72;
		V_10 = L_72;
		int32_t L_73 = __this->___k64Cnt;
		V_18 = ((int32_t)(L_73&3));
		int32_t L_74 = V_18;
		switch (L_74)
		{
			case 0:
			{
				goto IL_023c;
			}
			case 1:
			{
				goto IL_0171;
			}
			case 2:
			{
				goto IL_032c;
			}
			case 3:
			{
				goto IL_02b4;
			}
		}
	}
	{
		goto IL_045a;
	}

IL_0171:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = __this->___gSBox;
		int32_t L_76 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = __this->___gMDS0;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_78 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_79 = V_10;
		NullCheck(L_78);
		uint8_t L_80;
		L_80 = (L_78)->GetAt(0, L_79);
		int32_t L_81 = V_6;
		int32_t L_82;
		L_82 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_81, NULL);
		NullCheck(L_77);
		int32_t L_83 = ((int32_t)(((int32_t)((int32_t)L_80&((int32_t)255)))^L_82));
		int32_t L_84 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_76, 2))), (int32_t)L_84);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSBox;
		int32_t L_86 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->___gMDS1;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_88 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_89 = V_11;
		NullCheck(L_88);
		uint8_t L_90;
		L_90 = (L_88)->GetAt(0, L_89);
		int32_t L_91 = V_6;
		int32_t L_92;
		L_92 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_91, NULL);
		NullCheck(L_87);
		int32_t L_93 = ((int32_t)(((int32_t)((int32_t)L_90&((int32_t)255)))^L_92));
		int32_t L_94 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_86, 2)), 1))), (int32_t)L_94);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___gSBox;
		int32_t L_96 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = __this->___gMDS2;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_98 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_99 = V_12;
		NullCheck(L_98);
		uint8_t L_100;
		L_100 = (L_98)->GetAt(1, L_99);
		int32_t L_101 = V_6;
		int32_t L_102;
		L_102 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_101, NULL);
		NullCheck(L_97);
		int32_t L_103 = ((int32_t)(((int32_t)((int32_t)L_100&((int32_t)255)))^L_102));
		int32_t L_104 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_96, 2)), ((int32_t)512)))), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___gSBox;
		int32_t L_106 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = __this->___gMDS3;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_109 = V_13;
		NullCheck(L_108);
		uint8_t L_110;
		L_110 = (L_108)->GetAt(1, L_109);
		int32_t L_111 = V_6;
		int32_t L_112;
		L_112 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_111, NULL);
		NullCheck(L_107);
		int32_t L_113 = ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)255)))^L_112));
		int32_t L_114 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_106, 2)), ((int32_t)513)))), (int32_t)L_114);
		goto IL_045a;
	}

IL_023c:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_115 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_116 = V_10;
		NullCheck(L_115);
		uint8_t L_117;
		L_117 = (L_115)->GetAt(1, L_116);
		int32_t L_118 = V_9;
		int32_t L_119;
		L_119 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_118, NULL);
		V_10 = ((int32_t)(((int32_t)((int32_t)L_117&((int32_t)255)))^L_119));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_120 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_121 = V_11;
		NullCheck(L_120);
		uint8_t L_122;
		L_122 = (L_120)->GetAt(0, L_121);
		int32_t L_123 = V_9;
		int32_t L_124;
		L_124 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_123, NULL);
		V_11 = ((int32_t)(((int32_t)((int32_t)L_122&((int32_t)255)))^L_124));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_125 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_126 = V_12;
		NullCheck(L_125);
		uint8_t L_127;
		L_127 = (L_125)->GetAt(0, L_126);
		int32_t L_128 = V_9;
		int32_t L_129;
		L_129 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_128, NULL);
		V_12 = ((int32_t)(((int32_t)((int32_t)L_127&((int32_t)255)))^L_129));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_130 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_131 = V_13;
		NullCheck(L_130);
		uint8_t L_132;
		L_132 = (L_130)->GetAt(1, L_131);
		int32_t L_133 = V_9;
		int32_t L_134;
		L_134 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_133, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_132&((int32_t)255)))^L_134));
	}

IL_02b4:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_135 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_136 = V_10;
		NullCheck(L_135);
		uint8_t L_137;
		L_137 = (L_135)->GetAt(1, L_136);
		int32_t L_138 = V_8;
		int32_t L_139;
		L_139 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_138, NULL);
		V_10 = ((int32_t)(((int32_t)((int32_t)L_137&((int32_t)255)))^L_139));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_140 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_141 = V_11;
		NullCheck(L_140);
		uint8_t L_142;
		L_142 = (L_140)->GetAt(1, L_141);
		int32_t L_143 = V_8;
		int32_t L_144;
		L_144 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_143, NULL);
		V_11 = ((int32_t)(((int32_t)((int32_t)L_142&((int32_t)255)))^L_144));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_145 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_146 = V_12;
		NullCheck(L_145);
		uint8_t L_147;
		L_147 = (L_145)->GetAt(0, L_146);
		int32_t L_148 = V_8;
		int32_t L_149;
		L_149 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_148, NULL);
		V_12 = ((int32_t)(((int32_t)((int32_t)L_147&((int32_t)255)))^L_149));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_150 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_151 = V_13;
		NullCheck(L_150);
		uint8_t L_152;
		L_152 = (L_150)->GetAt(0, L_151);
		int32_t L_153 = V_8;
		int32_t L_154;
		L_154 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_153, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_152&((int32_t)255)))^L_154));
	}

IL_032c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___gSBox;
		int32_t L_156 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = __this->___gMDS0;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_158 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_159 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_160 = V_10;
		NullCheck(L_159);
		uint8_t L_161;
		L_161 = (L_159)->GetAt(0, L_160);
		int32_t L_162 = V_7;
		int32_t L_163;
		L_163 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_162, NULL);
		NullCheck(L_158);
		uint8_t L_164;
		L_164 = (L_158)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_161&((int32_t)255)))^L_163)));
		int32_t L_165 = V_6;
		int32_t L_166;
		L_166 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_165, NULL);
		NullCheck(L_157);
		int32_t L_167 = ((int32_t)(((int32_t)((int32_t)L_164&((int32_t)255)))^L_166));
		int32_t L_168 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_156, 2))), (int32_t)L_168);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = __this->___gSBox;
		int32_t L_170 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = __this->___gMDS1;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_172 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_173 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_174 = V_11;
		NullCheck(L_173);
		uint8_t L_175;
		L_175 = (L_173)->GetAt(1, L_174);
		int32_t L_176 = V_7;
		int32_t L_177;
		L_177 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_176, NULL);
		NullCheck(L_172);
		uint8_t L_178;
		L_178 = (L_172)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_175&((int32_t)255)))^L_177)));
		int32_t L_179 = V_6;
		int32_t L_180;
		L_180 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_179, NULL);
		NullCheck(L_171);
		int32_t L_181 = ((int32_t)(((int32_t)((int32_t)L_178&((int32_t)255)))^L_180));
		int32_t L_182 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_170, 2)), 1))), (int32_t)L_182);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = __this->___gSBox;
		int32_t L_184 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = __this->___gMDS2;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_186 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_187 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_188 = V_12;
		NullCheck(L_187);
		uint8_t L_189;
		L_189 = (L_187)->GetAt(0, L_188);
		int32_t L_190 = V_7;
		int32_t L_191;
		L_191 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_190, NULL);
		NullCheck(L_186);
		uint8_t L_192;
		L_192 = (L_186)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_189&((int32_t)255)))^L_191)));
		int32_t L_193 = V_6;
		int32_t L_194;
		L_194 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_193, NULL);
		NullCheck(L_185);
		int32_t L_195 = ((int32_t)(((int32_t)((int32_t)L_192&((int32_t)255)))^L_194));
		int32_t L_196 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_184, 2)), ((int32_t)512)))), (int32_t)L_196);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = __this->___gSBox;
		int32_t L_198 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_199 = __this->___gMDS3;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_200 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_201 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_202 = V_13;
		NullCheck(L_201);
		uint8_t L_203;
		L_203 = (L_201)->GetAt(1, L_202);
		int32_t L_204 = V_7;
		int32_t L_205;
		L_205 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_204, NULL);
		NullCheck(L_200);
		uint8_t L_206;
		L_206 = (L_200)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_203&((int32_t)255)))^L_205)));
		int32_t L_207 = V_6;
		int32_t L_208;
		L_208 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_207, NULL);
		NullCheck(L_199);
		int32_t L_209 = ((int32_t)(((int32_t)((int32_t)L_206&((int32_t)255)))^L_208));
		int32_t L_210 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_198, 2)), ((int32_t)513)))), (int32_t)L_210);
	}

IL_045a:
	{
		int32_t L_211 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_211, 1));
	}

IL_0460:
	{
		int32_t L_212 = V_17;
		if ((((int32_t)L_212) < ((int32_t)((int32_t)256))))
		{
			goto IL_013e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_mCE0387ED1F262DD20EA7F28DEEB333A8BCC18655 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		int32_t L_2;
		L_2 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_2^L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_src;
		int32_t L_7 = ___1_srcIndex;
		int32_t L_8;
		L_8 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)(L_8^L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_src;
		int32_t L_13 = ___1_srcIndex;
		int32_t L_14;
		L_14 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys;
		NullCheck(L_15);
		int32_t L_16 = 2;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)(L_14^L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_src;
		int32_t L_19 = ___1_srcIndex;
		int32_t L_20;
		L_20 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys;
		NullCheck(L_21);
		int32_t L_22 = 3;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)(L_20^L_23));
		V_4 = 8;
		V_7 = 0;
		goto IL_0104;
	}

IL_005a:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85(__this, L_24, NULL);
		V_5 = L_25;
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5(__this, L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_2 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_35))));
		int32_t L_36 = V_2;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)(((int32_t)((uint32_t)L_36>>1))|((int32_t)(L_37<<((int32_t)31)))));
		int32_t L_38 = V_3;
		int32_t L_39 = V_3;
		int32_t L_40 = V_5;
		int32_t L_41 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->___gSubKeys;
		int32_t L_43 = V_4;
		int32_t L_44 = L_43;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		NullCheck(L_42);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(L_38<<1))|((int32_t)((uint32_t)L_39>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(2, L_41)))), L_46))));
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85(__this, L_47, NULL);
		V_5 = L_48;
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5(__this, L_49, NULL);
		V_6 = L_50;
		int32_t L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		NullCheck(L_54);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_0 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_58))));
		int32_t L_59 = V_0;
		int32_t L_60 = V_0;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_59>>1))|((int32_t)(L_60<<((int32_t)31)))));
		int32_t L_61 = V_1;
		int32_t L_62 = V_1;
		int32_t L_63 = V_5;
		int32_t L_64 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___gSubKeys;
		int32_t L_66 = V_4;
		int32_t L_67 = L_66;
		V_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		NullCheck(L_65);
		int32_t L_68 = L_67;
		int32_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_61<<1))|((int32_t)((uint32_t)L_62>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, ((int32_t)il2cpp_codegen_multiply(2, L_64)))), L_69))));
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_0104:
	{
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys;
		NullCheck(L_73);
		int32_t L_74 = 4;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___2_dst;
		int32_t L_77 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys;
		NullCheck(L_79);
		int32_t L_80 = 5;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___2_dst;
		int32_t L_83 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys;
		NullCheck(L_85);
		int32_t L_86 = 6;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___2_dst;
		int32_t L_89 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys;
		NullCheck(L_91);
		int32_t L_92 = 7;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___2_dst;
		int32_t L_95 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_mFA996A8B8A641EA807D6E60D63D563A258CAA2E8 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		int32_t L_2;
		L_2 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys;
		NullCheck(L_3);
		int32_t L_4 = 4;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_2^L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_src;
		int32_t L_7 = ___1_srcIndex;
		int32_t L_8;
		L_8 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys;
		NullCheck(L_9);
		int32_t L_10 = 5;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)(L_8^L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_src;
		int32_t L_13 = ___1_srcIndex;
		int32_t L_14;
		L_14 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys;
		NullCheck(L_15);
		int32_t L_16 = 6;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)(L_14^L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_src;
		int32_t L_19 = ___1_srcIndex;
		int32_t L_20;
		L_20 = TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7(__this, L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys;
		NullCheck(L_21);
		int32_t L_22 = 7;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)(L_20^L_23));
		V_4 = ((int32_t)39);
		V_7 = 0;
		goto IL_0105;
	}

IL_005b:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85(__this, L_24, NULL);
		V_5 = L_25;
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5(__this, L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)il2cpp_codegen_multiply(2, L_30)))), L_35))));
		int32_t L_36 = V_2;
		int32_t L_37 = V_2;
		int32_t L_38 = V_5;
		int32_t L_39 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___gSubKeys;
		int32_t L_41 = V_4;
		int32_t L_42 = L_41;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		NullCheck(L_40);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(L_36<<1))|((int32_t)((uint32_t)L_37>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_38, L_39)), L_44))));
		int32_t L_45 = V_3;
		int32_t L_46 = V_3;
		V_3 = ((int32_t)(((int32_t)((uint32_t)L_45>>1))|((int32_t)(L_46<<((int32_t)31)))));
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85(__this, L_47, NULL);
		V_5 = L_48;
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5(__this, L_49, NULL);
		V_6 = L_50;
		int32_t L_51 = V_1;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		NullCheck(L_54);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_1 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, ((int32_t)il2cpp_codegen_multiply(2, L_53)))), L_58))));
		int32_t L_59 = V_0;
		int32_t L_60 = V_0;
		int32_t L_61 = V_5;
		int32_t L_62 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->___gSubKeys;
		int32_t L_64 = V_4;
		int32_t L_65 = L_64;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		NullCheck(L_63);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_59<<1))|((int32_t)((uint32_t)L_60>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_61, L_62)), L_67))));
		int32_t L_68 = V_1;
		int32_t L_69 = V_1;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_68>>1))|((int32_t)(L_69<<((int32_t)31)))));
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_0105:
	{
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys;
		NullCheck(L_73);
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___2_dst;
		int32_t L_77 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys;
		NullCheck(L_79);
		int32_t L_80 = 1;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___2_dst;
		int32_t L_83 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys;
		NullCheck(L_85);
		int32_t L_86 = 2;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___2_dst;
		int32_t L_89 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys;
		NullCheck(L_91);
		int32_t L_92 = 3;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___2_dst;
		int32_t L_95 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E(__this, ((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_m74A40A090924733C95B91C8DCB62A4885AC5740A (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_k32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
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
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1;
		L_1 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_x;
		int32_t L_3;
		L_3 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = ___0_x;
		int32_t L_5;
		L_5 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = ___0_x;
		int32_t L_7;
		L_7 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_6, NULL);
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___1_k32;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___1_k32;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___1_k32;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___1_k32;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		V_8 = 0;
		int32_t L_20 = __this->___k64Cnt;
		V_9 = ((int32_t)(L_20&3));
		int32_t L_21 = V_9;
		switch (L_21)
		{
			case 0:
			{
				goto IL_00ef;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_01cf;
			}
			case 3:
			{
				goto IL_015f;
			}
		}
	}
	{
		goto IL_02c4;
	}

IL_005d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___gMDS0;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_23 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		uint8_t L_25;
		L_25 = (L_23)->GetAt(0, L_24);
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_26, NULL);
		NullCheck(L_22);
		int32_t L_28 = ((int32_t)(((int32_t)((int32_t)L_25&((int32_t)255)))^L_27));
		int32_t L_29 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___gMDS1;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_31 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		uint8_t L_33;
		L_33 = (L_31)->GetAt(0, L_32);
		int32_t L_34 = V_4;
		int32_t L_35;
		L_35 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_34, NULL);
		NullCheck(L_30);
		int32_t L_36 = ((int32_t)(((int32_t)((int32_t)L_33&((int32_t)255)))^L_35));
		int32_t L_37 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___gMDS2;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_39 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		uint8_t L_41;
		L_41 = (L_39)->GetAt(1, L_40);
		int32_t L_42 = V_4;
		int32_t L_43;
		L_43 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_42, NULL);
		NullCheck(L_38);
		int32_t L_44 = ((int32_t)(((int32_t)((int32_t)L_41&((int32_t)255)))^L_43));
		int32_t L_45 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___gMDS3;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_47 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		uint8_t L_49;
		L_49 = (L_47)->GetAt(1, L_48);
		int32_t L_50 = V_4;
		int32_t L_51;
		L_51 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_50, NULL);
		NullCheck(L_46);
		int32_t L_52 = ((int32_t)(((int32_t)((int32_t)L_49&((int32_t)255)))^L_51));
		int32_t L_53 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_29^L_37))^L_45))^L_53));
		goto IL_02c4;
	}

IL_00ef:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_54 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_55 = V_0;
		NullCheck(L_54);
		uint8_t L_56;
		L_56 = (L_54)->GetAt(1, L_55);
		int32_t L_57 = V_7;
		int32_t L_58;
		L_58 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_57, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_56&((int32_t)255)))^L_58));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_59 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		uint8_t L_61;
		L_61 = (L_59)->GetAt(0, L_60);
		int32_t L_62 = V_7;
		int32_t L_63;
		L_63 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_62, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_61&((int32_t)255)))^L_63));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_64 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		uint8_t L_66;
		L_66 = (L_64)->GetAt(0, L_65);
		int32_t L_67 = V_7;
		int32_t L_68;
		L_68 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_67, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_66&((int32_t)255)))^L_68));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_69 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_70 = V_3;
		NullCheck(L_69);
		uint8_t L_71;
		L_71 = (L_69)->GetAt(1, L_70);
		int32_t L_72 = V_7;
		int32_t L_73;
		L_73 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_72, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_71&((int32_t)255)))^L_73));
	}

IL_015f:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_74 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		uint8_t L_76;
		L_76 = (L_74)->GetAt(1, L_75);
		int32_t L_77 = V_6;
		int32_t L_78;
		L_78 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_77, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_76&((int32_t)255)))^L_78));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_79 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_80 = V_1;
		NullCheck(L_79);
		uint8_t L_81;
		L_81 = (L_79)->GetAt(1, L_80);
		int32_t L_82 = V_6;
		int32_t L_83;
		L_83 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_82, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_81&((int32_t)255)))^L_83));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_84 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_85 = V_2;
		NullCheck(L_84);
		uint8_t L_86;
		L_86 = (L_84)->GetAt(0, L_85);
		int32_t L_87 = V_6;
		int32_t L_88;
		L_88 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_87, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_86&((int32_t)255)))^L_88));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_89 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_90 = V_3;
		NullCheck(L_89);
		uint8_t L_91;
		L_91 = (L_89)->GetAt(0, L_90);
		int32_t L_92 = V_6;
		int32_t L_93;
		L_93 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_92, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_91&((int32_t)255)))^L_93));
	}

IL_01cf:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = __this->___gMDS0;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_95 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_96 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_97 = V_0;
		NullCheck(L_96);
		uint8_t L_98;
		L_98 = (L_96)->GetAt(0, L_97);
		int32_t L_99 = V_5;
		int32_t L_100;
		L_100 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_99, NULL);
		NullCheck(L_95);
		uint8_t L_101;
		L_101 = (L_95)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_98&((int32_t)255)))^L_100)));
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933(__this, L_102, NULL);
		NullCheck(L_94);
		int32_t L_104 = ((int32_t)(((int32_t)((int32_t)L_101&((int32_t)255)))^L_103));
		int32_t L_105 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___gMDS1;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_107 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_109 = V_1;
		NullCheck(L_108);
		uint8_t L_110;
		L_110 = (L_108)->GetAt(1, L_109);
		int32_t L_111 = V_5;
		int32_t L_112;
		L_112 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_111, NULL);
		NullCheck(L_107);
		uint8_t L_113;
		L_113 = (L_107)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)255)))^L_112)));
		int32_t L_114 = V_4;
		int32_t L_115;
		L_115 = TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056(__this, L_114, NULL);
		NullCheck(L_106);
		int32_t L_116 = ((int32_t)(((int32_t)((int32_t)L_113&((int32_t)255)))^L_115));
		int32_t L_117 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = __this->___gMDS2;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_119 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_120 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_121 = V_2;
		NullCheck(L_120);
		uint8_t L_122;
		L_122 = (L_120)->GetAt(0, L_121);
		int32_t L_123 = V_5;
		int32_t L_124;
		L_124 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_123, NULL);
		NullCheck(L_119);
		uint8_t L_125;
		L_125 = (L_119)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_122&((int32_t)255)))^L_124)));
		int32_t L_126 = V_4;
		int32_t L_127;
		L_127 = TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD(__this, L_126, NULL);
		NullCheck(L_118);
		int32_t L_128 = ((int32_t)(((int32_t)((int32_t)L_125&((int32_t)255)))^L_127));
		int32_t L_129 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___gMDS3;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_131 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_132 = ((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P;
		int32_t L_133 = V_3;
		NullCheck(L_132);
		uint8_t L_134;
		L_134 = (L_132)->GetAt(1, L_133);
		int32_t L_135 = V_5;
		int32_t L_136;
		L_136 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_135, NULL);
		NullCheck(L_131);
		uint8_t L_137;
		L_137 = (L_131)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_134&((int32_t)255)))^L_136)));
		int32_t L_138 = V_4;
		int32_t L_139;
		L_139 = TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D(__this, L_138, NULL);
		NullCheck(L_130);
		int32_t L_140 = ((int32_t)(((int32_t)((int32_t)L_137&((int32_t)255)))^L_139));
		int32_t L_141 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_105^L_117))^L_129))^L_141));
	}

IL_02c4:
	{
		int32_t L_142 = V_8;
		return L_142;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_m64EF5D08A927C8453D3070AFD7673675C1DBA7F8 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_k0, int32_t ___1_k1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_k1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0012;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = TwofishEngine_RS_rem_m2FCAF8D8819CB0D1545B85487C1EF2FA58CB761E(__this, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0012:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_k0;
		V_0 = ((int32_t)(L_5^L_6));
		V_2 = 0;
		goto IL_002a;
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = TwofishEngine_RS_rem_m2FCAF8D8819CB0D1545B85487C1EF2FA58CB761E(__this, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_m2FCAF8D8819CB0D1545B85487C1EF2FA58CB761E (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___0_x;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		if (((int32_t)(L_2&((int32_t)128))))
		{
			G_B2_0 = ((int32_t)(L_1<<1));
			goto IL_001a;
		}
		G_B1_0 = ((int32_t)(L_1<<1));
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = ((int32_t)333);
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		V_1 = ((int32_t)(((int32_t)(G_B3_1^G_B3_0))&((int32_t)255)));
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		if (((int32_t)(L_4&1)))
		{
			G_B5_0 = ((int32_t)((uint32_t)L_3>>1));
			goto IL_0032;
		}
		G_B4_0 = ((int32_t)((uint32_t)L_3>>1));
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0032:
	{
		G_B6_0 = ((int32_t)166);
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(((int32_t)(G_B6_1^G_B6_0))^L_5));
		int32_t L_6 = ___0_x;
		int32_t L_7 = V_2;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_6<<8))^((int32_t)(L_7<<((int32_t)24)))))^((int32_t)(L_8<<((int32_t)16)))))^((int32_t)(L_9<<8))))^L_10));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mE0BC0E375CF661A5CB87B76CDBE421CFF0A80A37 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		if (((int32_t)(L_1&1)))
		{
			G_B2_0 = ((int32_t)(L_0>>1));
			goto IL_000b;
		}
		G_B1_0 = ((int32_t)(L_0>>1));
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		return ((int32_t)(G_B3_1^G_B3_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m0205BFCE368515EA75DECAFE7C37FE25747E7C54 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		if (((int32_t)(L_1&2)))
		{
			G_B2_0 = ((int32_t)(L_0>>2));
			goto IL_000b;
		}
		G_B1_0 = ((int32_t)(L_0>>2));
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		int32_t L_2 = ___0_x;
		if (((int32_t)(L_2&1)))
		{
			G_B5_0 = ((int32_t)(G_B3_1^G_B3_0));
			goto IL_0019;
		}
		G_B4_0 = ((int32_t)(G_B3_1^G_B3_0));
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_001b;
	}

IL_0019:
	{
		G_B6_0 = ((int32_t)90);
		G_B6_1 = G_B5_0;
	}

IL_001b:
	{
		return ((int32_t)(G_B6_1^G_B6_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_mDD7023B922F24C22EFDB97FDA279B5D255674663 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR2_m0205BFCE368515EA75DECAFE7C37FE25747E7C54(__this, L_1, NULL);
		return ((int32_t)(L_0^L_2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_m187681AC069E712FDBC269EFD570E7FB537BB7A3 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR1_mE0BC0E375CF661A5CB87B76CDBE421CFF0A80A37(__this, L_1, NULL);
		int32_t L_3 = ___0_x;
		int32_t L_4;
		L_4 = TwofishEngine_LFSR2_m0205BFCE368515EA75DECAFE7C37FE25747E7C54(__this, L_3, NULL);
		return ((int32_t)(((int32_t)(L_0^L_2))^L_4));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_m49E5628F89A15D6AFD8D5383D838FC655BA7B933 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return ((int32_t)(L_0&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_mD8C02162CB66593068F2C91F43D214403F878056 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>8))&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mE22E12F1794580C80CE9568FA6A10C7A87142AAD (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)16)))&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_mA8FE908AD19C67DE01F5D693156F154E8656415D (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m57C1089A265CBD58CDF8E534B5E21C9B93E62F85 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_1&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox;
		int32_t L_9 = ___0_x;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox;
		int32_t L_13 = ___0_x;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)24)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m7CC13483A8B88DF144F0F47CD1001F45F47CB0A5 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_1>>((int32_t)24)))&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_5&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox;
		int32_t L_9 = ___0_x;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>8))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox;
		int32_t L_13 = ___0_x;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_BytesTo32Bits_mAF5D53F36CAA8AA9C131C4F270AE94305336FFC7 (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, int32_t ___1_p, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_b;
		int32_t L_1 = ___1_p;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_b;
		int32_t L_5 = ___1_p;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_b;
		int32_t L_9 = ___1_p;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_b;
		int32_t L_13 = ___1_p;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_7&((int32_t)255)))<<8))))|((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)((int32_t)L_15&((int32_t)255)))<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Bits32ToBytes_mEE43533D9E220C34D4C929D18361E2651591238E (TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD* __this, int32_t ___0_inData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_b;
		int32_t L_1 = ___2_offset;
		int32_t L_2 = ___0_inData;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_b;
		int32_t L_4 = ___2_offset;
		int32_t L_5 = ___0_inData;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_b;
		int32_t L_7 = ___2_offset;
		int32_t L_8 = ___0_inData;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_b;
		int32_t L_10 = ___2_offset;
		int32_t L_11 = ___0_inData;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_11>>((int32_t)24)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__cctor_mFD5BC02C75FD89653F50F12493CEC8635EDAE44E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)((int32_t)256) };
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_0 = (ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638*)GenArrayNew(ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var, L_1);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_2 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t45ADDFEDC3738280D774366814D0A6832005F5BD_il2cpp_TypeInfo_var))->___P), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VmpcEngine_get_AlgorithmName_m288D47994FD551CDDB11EA29BFA444FB6299BB09 (VmpcEngine_t86783A3D1455626C4B3DCF59D94F0BF9B3CB681C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1599555C091EE02EB53958FBBB14EE6BC93EB040);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1599555C091EE02EB53958FBBB14EE6BC93EB040;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_Init_mBDC9CEB8109C24C8E2DC75F83A7D462255C183CD (VmpcEngine_t86783A3D1455626C4B3DCF59D94F0BF9B3CB681C* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384* V_0 = NULL;
	KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (((ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral101B3C75A51196AFDCA86EB43BB5855E80AA199D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcEngine_Init_mBDC9CEB8109C24C8E2DC75F83A7D462255C183CD_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___1_parameters;
		V_0 = ((ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384*)CastclassClass((RuntimeObject*)L_2, ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384_il2cpp_TypeInfo_var));
		ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ParametersWithIV_get_Parameters_m0044CEDD1A2B0E56705857793C57EDAB5B7F00A0_inline(L_3, NULL);
		if (((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)IsInstClass((RuntimeObject*)L_4, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE61A524EA8F45BE850EE16F02879615EBF327FD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcEngine_Init_mBDC9CEB8109C24C8E2DC75F83A7D462255C183CD_RuntimeMethod_var)));
	}

IL_0032:
	{
		ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ParametersWithIV_get_Parameters_m0044CEDD1A2B0E56705857793C57EDAB5B7F00A0_inline(L_6, NULL);
		V_1 = ((KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58*)CastclassClass((RuntimeObject*)L_7, KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58_il2cpp_TypeInfo_var));
		ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384* L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ParametersWithIV_GetIV_mA615755F89AFF7920931F6FF3C0C18BB677C1EC4(L_8, NULL);
		__this->___workingIV = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingIV), (void*)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___workingIV;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___workingIV;
		NullCheck(L_11);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) < ((int32_t)1)))
		{
			goto IL_006c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___workingIV;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) <= ((int32_t)((int32_t)768))))
		{
			goto IL_0077;
		}
	}

IL_006c:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00731C2C86C2D15B58ED9A20890E494DBD2AC58B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcEngine_Init_mBDC9CEB8109C24C8E2DC75F83A7D462255C183CD_RuntimeMethod_var)));
	}

IL_0077:
	{
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_14 = V_1;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = KeyParameter_GetKey_m9CEA6A5D7A96BA36F2C891566351D4A39ED08CE5(L_14, NULL);
		__this->___workingKey = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey), (void*)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___workingKey;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___workingIV;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11, __this, L_16, L_17);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_InitKey_m58AC2E3D93FADD24AB17E4AACAA1E71EDD9E2AC3 (VmpcEngine_t86783A3D1455626C4B3DCF59D94F0BF9B3CB681C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_keyBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ivBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		__this->___s = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___P = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P), (void*)L_0);
		V_0 = 0;
		goto IL_0029;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___P;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)(uint8_t)L_3));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0029:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)256))))
		{
			goto IL_001b;
		}
	}
	{
		V_1 = 0;
		goto IL_00ad;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___P;
		uint8_t L_7 = __this->___s;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)(L_9&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_keyBytes;
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_keyBytes;
		NullCheck(L_14);
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length))));
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_6);
		int32_t L_17 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11)), (int32_t)L_16))&((int32_t)255)));
		uint8_t L_18 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->___s = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___P;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)(L_20&((int32_t)255)));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___P;
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___P;
		uint8_t L_26 = __this->___s;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)((int32_t)L_26&((int32_t)255)));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)255)))), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___P;
		uint8_t L_30 = __this->___s;
		uint8_t L_31 = V_2;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_30&((int32_t)255)))), (uint8_t)L_31);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ad:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)768))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = 0;
		goto IL_0133;
	}

IL_00b9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P;
		uint8_t L_35 = __this->___s;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___P;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)(L_37&((int32_t)255)));
		uint8_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___1_ivBytes;
		int32_t L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___1_ivBytes;
		NullCheck(L_42);
		NullCheck(L_40);
		int32_t L_43 = ((int32_t)(L_41%((int32_t)(((RuntimeArray*)L_42)->max_length))));
		uint8_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_34);
		int32_t L_45 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_39)), (int32_t)L_44))&((int32_t)255)));
		uint8_t L_46 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		__this->___s = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___P;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)(L_48&((int32_t)255)));
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___P;
		int32_t L_52 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___P;
		uint8_t L_54 = __this->___s;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)((int32_t)L_54&((int32_t)255)));
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_52&((int32_t)255)))), (uint8_t)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___P;
		uint8_t L_58 = __this->___s;
		uint8_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_58&((int32_t)255)))), (uint8_t)L_59);
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0133:
	{
		int32_t L_61 = V_3;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)768))))
		{
			goto IL_00b9;
		}
	}
	{
		__this->___n = (uint8_t)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_ProcessBytes_mF17522AFFA7ADDFD5F1C8D04494BBF72AEE3EB2E (VmpcEngine_t86783A3D1455626C4B3DCF59D94F0BF9B3CB681C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		int32_t L_2 = ___2_len;
		Check_DataLength_mAB2A7C3E1B9A5EB7394B030562808EE18D4BF064(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___3_output;
		int32_t L_4 = ___4_outOff;
		int32_t L_5 = ___2_len;
		Check_OutputLength_mDC38942DE013625081D795FA49EC885127709EA6(L_3, L_4, L_5, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		V_0 = 0;
		goto IL_00f6;
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___P;
		uint8_t L_7 = __this->___s;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P;
		uint8_t L_9 = __this->___n;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)((int32_t)L_9&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		int32_t L_12 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11))&((int32_t)255)));
		uint8_t L_13 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___s = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___P;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___P;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___P;
		uint8_t L_17 = __this->___s;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int32_t)L_17&((int32_t)255)));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		int32_t L_20 = ((int32_t)((int32_t)L_19&((int32_t)255)));
		uint8_t L_21 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_14);
		int32_t L_22 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_21, 1))&((int32_t)255)));
		uint8_t L_23 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___P;
		uint8_t L_25 = __this->___n;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)((int32_t)L_25&((int32_t)255)));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_2 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___P;
		uint8_t L_29 = __this->___n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___P;
		uint8_t L_31 = __this->___s;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)((int32_t)L_31&((int32_t)255)));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_29&((int32_t)255)))), (uint8_t)L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P;
		uint8_t L_35 = __this->___s;
		uint8_t L_36 = V_2;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_35&((int32_t)255)))), (uint8_t)L_36);
		uint8_t L_37 = __this->___n;
		__this->___n = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_37, 1))&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___3_output;
		int32_t L_39 = V_0;
		int32_t L_40 = ___4_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___0_input;
		int32_t L_42 = V_0;
		int32_t L_43 = ___1_inOff;
		NullCheck(L_41);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		uint8_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		uint8_t L_46 = V_1;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, L_40))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_45^(int32_t)L_46))));
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00f6:
	{
		int32_t L_48 = V_0;
		int32_t L_49 = ___2_len;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_Reset_m51DFBCCACEBC5F95C147FA1948DFDE252FCF4F6E (VmpcEngine_t86783A3D1455626C4B3DCF59D94F0BF9B3CB681C* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___workingIV;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11, __this, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t VmpcEngine_ReturnByte_m39668D299558629DDC5ABD2B92ED437EDF5323A8 (VmpcEngine_t86783A3D1455626C4B3DCF59D94F0BF9B3CB681C* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___P;
		uint8_t L_1 = __this->___s;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___P;
		uint8_t L_3 = __this->___n;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)((int32_t)L_3&((int32_t)255)));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		int32_t L_6 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5))&((int32_t)255)));
		uint8_t L_7 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___s = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___P;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___P;
		uint8_t L_11 = __this->___s;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((int32_t)L_11&((int32_t)255)));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		int32_t L_14 = ((int32_t)((int32_t)L_13&((int32_t)255)));
		uint8_t L_15 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_8);
		int32_t L_16 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_15, 1))&((int32_t)255)));
		uint8_t L_17 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___P;
		uint8_t L_19 = __this->___n;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)((int32_t)L_19&((int32_t)255)));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___P;
		uint8_t L_23 = __this->___n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___P;
		uint8_t L_25 = __this->___s;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)((int32_t)L_25&((int32_t)255)));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_23&((int32_t)255)))), (uint8_t)L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___P;
		uint8_t L_29 = __this->___s;
		uint8_t L_30 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_29&((int32_t)255)))), (uint8_t)L_30);
		uint8_t L_31 = __this->___n;
		__this->___n = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_31, 1))&((int32_t)255))));
		uint8_t L_32 = ___0_input;
		uint8_t L_33 = V_0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32^(int32_t)L_33)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine__ctor_mC108146F805DC390AEA963BEA5A8008ED36647DE (VmpcEngine_t86783A3D1455626C4B3DCF59D94F0BF9B3CB681C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_m3706EE54311F6BD833CB80C71C1C18BD2D48E227_inline (ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* ECKeyParameters_get_Parameters_m72AA4614CDB36BF23893970E69783513B829BDA6_inline (ECKeyParameters_tA2400A0B67DE393C7185A982D5AC613C86591DDE* __this, const RuntimeMethod* method) 
{
	{
		ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* L_0 = __this->___parameters;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECPublicKeyParameters_get_Q_m73C4EFFB0C0E04DFE1C4FAD76FCC08291ACFD7E8_inline (ECPublicKeyParameters_t50A256CBA547E57F73701B6882EACAAAA67C5E7B* __this, const RuntimeMethod* method) 
{
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_0 = __this->___q;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECDomainParameters_get_H_m7927A83A1128D9A231ED72325DC76FE3B50FF553_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_0 = __this->___h;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* ParametersWithRandom_get_Random_mEA11E3BF8C0CEAD478D02EE8BD106BC9A6BC9C5E_inline (ParametersWithRandom_tE548AB525ABC2DF566A9A5DFDCAA26A472E6F0B7* __this, const RuntimeMethod* method) 
{
	{
		SecureRandom_tB40D622CDD7418223F3E806045AFF3C6A88A39B6* L_0 = __this->___random;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* ECDomainParameters_get_Curve_mB10871B6681736FE18CD7C91D7E135395D32E623_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) 
{
	{
		ECCurve_t9DAE10362924DEB55115C0A175F8BB6A48A213CB* L_0 = __this->___curve;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* ECDomainParameters_get_G_m168D02E316313C80F26DAC3F8CB67E8F8C613D86_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) 
{
	{
		ECPoint_t7244870D1C1EADECB232DA278BE4035B6986954B* L_0 = __this->___g;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECPrivateKeyParameters_get_D_m519EB228A8E14620BD059187CAC803C94AA09B80_inline (ECPrivateKeyParameters_tD7C3C4131D2A18703284221BB6F5DDE6727B17AD* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_0 = __this->___d;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* ECDomainParameters_get_N_mF546E85B2444F37ECABCE880596B293F6E98EA0A_inline (ECDomainParameters_tC854331EC83F2C8024EEC001D045B526E0724231* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_t8D73EE50301CC807BBA3302FA5500D923AC5692C* L_0 = __this->___n;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* TweakableBlockCipherParameters_get_Key_m9532CACCD9CFE5FBA4EC3613A960C9EEDB7F0626_inline (TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* __this, const RuntimeMethod* method) 
{
	{
		KeyParameter_tAF7BB85DA56C8B53DEB605F4322E71CBDDF4CB58* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TweakableBlockCipherParameters_get_Tweak_m76D8F6B45EBE3419E4831A7E6E0A50898BB9BEC3_inline (TweakableBlockCipherParameters_tD1C2279182BCF2CA1BA8FFA7A3E3F804F0DF0CBE* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___tweak;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m0044CEDD1A2B0E56705857793C57EDAB5B7F00A0_inline (ParametersWithIV_t7F2592604033C85475C5DF3564D74E4E545A1384* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters;
		return L_0;
	}
}
