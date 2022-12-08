#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<VelNet.VelNetPlayer>
struct Action_1_tB484CF05281A3256177DADFF50557A43D337F832;
// System.Action`1<VelNet.VelNetManager/Message>
struct Action_1_t5B1136FB65BAE3A192D61E3681BFBCA324CCB882;
// System.Action`1<VelNet.VelNetManager/RoomDataMessage>
struct Action_1_tB307A46296292C2B4CC465D23F07FB4DE64294B1;
// System.Action`1<VelNet.VelNetManager/RoomsMessage>
struct Action_1_t49BC99C9A71244ABA5B6CE30EA141AEB665090E0;
// System.Action`2<System.Int32,System.Byte[]>
struct Action_2_tC5D14EC15BFCC1F13AAC2711F680A59B37D6B051;
// System.Action`2<VelNet.VelNetPlayer,System.Boolean>
struct Action_2_tB018BF6ADF11839D650AD612B6936AF2601BF2F9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,VelNet.VelNetPlayer>
struct Dictionary_2_tDCDA7913968710AF483C77D87CFD01B10F6985DC;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341;
// System.Collections.Generic.Dictionary`2<System.String,VelNet.NetworkObject>
struct Dictionary_2_t17FA5AB647A00B6C862F9C4B53A0CF5BDDE0C0C4;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<VelNet.NetworkComponent>
struct List_1_tC8E158F2058C3FDDE929ADC688F9849CCBF14CA7;
// System.Collections.Generic.List`1<VelNet.NetworkObject>
struct List_1_t210378306347DB1D1D974908CDF02B7998E23905;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<VRGrabbable>
struct List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44;
// System.Collections.Generic.List`1<VelNet.VelNetManager/Message>
struct List_1_t0525F9BC45A6F8C5E8D5982612AB121609270560;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
// VelNet.NetworkObject[]
struct NetworkObjectU5BU5D_t455EA7C79EB7B674EC3FB401ACF9C43404C90BA2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// VRGrabbable[]
struct VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470;
// VRHand[]
struct VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// VRPlayer/GRIP_STATE[]
struct GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B;
// VRPlayer/SNAP_STATE[]
struct SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00;
// VRPlayer/TELEPORT_STATE[]
struct TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BallBounceSound
struct BallBounceSound_t487BEA8A18C4A99EB49A6E34093F2F64262370EA;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DetectScoring
struct DetectScoring_tC79CFFA96105230A51AFEFF73D1CD973669AE743;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MovingHoop
struct MovingHoop_t5EC5BCF4CD3375F066BB8D5587B9EBA3A5837087;
// MySyncTransform
struct MySyncTransform_tA8848D74E4F8B5F531062BC5FB970BB2191CBC1E;
// VelNet.NetworkComponent
struct NetworkComponent_t6CA3A4E117475E4515E3B5169F61B5F849C06B4E;
// NetworkGameManager
struct NetworkGameManager_t454990239CB347FC53377665F644EBE3B93AE6C7;
// VelNet.NetworkObject
struct NetworkObject_t2CC54561D1F664D0E8EFE5808EF04341414EDC13;
// VelNet.NetworkSerializedObjectStream
struct NetworkSerializedObjectStream_t95F06CB01F11A10BA02D8641E71E3A4B1BCA8AEE;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PointAdder
struct PointAdder_t0243E09B9ECFC05B8DC0DBEE0BC0D931D8225D73;
// PointDisplay
struct PointDisplay_tF168DE9FCC6ECB4BD3F93F2AC7A60D4B0BFA6D04;
// Points
struct Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8;
// PrimaryTrigger
struct PrimaryTrigger_t40C1C89124EEB4729AF9D34278AB5933741C8246;
// PrizeButton
struct PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ResetBall
struct ResetBall_t3E5CF9A61C8A58104FAEA8A6A8C767B70FB2CA9E;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// SceneChange
struct SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D;
// ScoreDisplay
struct ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B;
// ScoreKeeper
struct ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492;
// SecondaryTrigger
struct SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// TimeDisplay
struct TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// VRGrabbable
struct VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28;
// VRHand
struct VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A;
// VRPlayer
struct VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9;
// VelNetPlayer
struct VelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476;
// VelNet.VelNetPlayer
struct VelNetPlayer_t58909795C6F139F1E71743864124C2DAFA0AF47A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// firstFloor
struct firstFloor_t3666C341582FB31E775C79F61B26D32FAECD00E1;
// floatTime
struct floatTime_t806F33B9B5166CB11C67A767CC050B7DD25F4D56;
// randomGen
struct randomGen_t1A2E67FCBADA608B08B85D98F87660BC9A6A580E;
// secondFloor
struct secondFloor_tF11F06BA1D256EA827F5663423BBE02748A3BC82;
// teacherTrigger
struct teacherTrigger_t73C0D9C5C116E7FDEF4E6C017CEF988E96FBD7C7;
// thirdFloor
struct thirdFloor_t33DD42D65D665A432161FD19FA3126703D5272C8;
// triggerTime
struct triggerTime_tAB0D8D138916B4B1A70BA56B89289523823CB770;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NetworkGameManager/<>c
struct U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E;
IL2CPP_EXTERN_C String_t* _stringLiteral13F5BE854076AE526AF5981B1D405AC98E71B6FA;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral27B95CDAD0683D6E28DAEBB0B725268DF2C352D5;
IL2CPP_EXTERN_C String_t* _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94;
IL2CPP_EXTERN_C String_t* _stringLiteral41171E494513D3374C45FCAD2B46D0F11C88D433;
IL2CPP_EXTERN_C String_t* _stringLiteral46BD2F97A36857688AE33F960276ADB3730F1CA4;
IL2CPP_EXTERN_C String_t* _stringLiteral4E45DE6293D6F936A2D7D0E5BB05562FB280B776;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF8E53378674ADAA9B55339A92BD14311E3AC32;
IL2CPP_EXTERN_C String_t* _stringLiteral99F526BD84D19300C69A9989A21B4A41870C6FD1;
IL2CPP_EXTERN_C String_t* _stringLiteralA8E5CC23C1482AE222A84A6FCCD2A0E4DFA5EF5C;
IL2CPP_EXTERN_C String_t* _stringLiteralBFAFABDD06781D8ECF5FDB1016609F44A0A8F956;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD2073AFAFFD2B1815441248A448202280D15E62E;
IL2CPP_EXTERN_C String_t* _stringLiteralDE45C2C5565E451D6904FA1CC5C69C69585D204A;
IL2CPP_EXTERN_C String_t* _stringLiteralF1407D997EAD4361B4A48D39ADF5BCB1E492DADF;
IL2CPP_EXTERN_C String_t* _stringLiteralFB9CD5C1414E936DAEA7AFED7D534E48326FEFE5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3_mD0809AB9CF4B6C81BABDBADEF0B9837E8F7C5686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28_m3ADC52B7D269A1758312F7BC7D9DD0D6D9CAA890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476_mA38E359164C8BD5E7F2DB24D31D91EFC963808BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6681222872C470B8FCF0E340F9206C0A29682501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF43D64241CBAFC8BC66C604B5F9BDB29DD948AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB29924D8B1CEC68261645BDCD9F96B8B90477739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m58948CF8406D428E28549A006D3CD2EEF3F4F3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m315787EC48F324B6E493A9FCE37B6763DC6CB89F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkGameManager_U3CStartU3Eb__1_1_mC73B3A21550CDA9647200160169DD51094C83C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_0_m56946019820531BAF5DA7C4C001C3C27A6DAF01F_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470;
struct VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B;
struct SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00;
struct TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VRGrabbable>
struct List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// NetworkGameManager/<>c
struct U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA  : public RuntimeObject
{
};

struct U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_StaticFields
{
	// NetworkGameManager/<>c NetworkGameManager/<>c::<>9
	U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA* ___U3CU3E9_0;
	// System.Action NetworkGameManager/<>c::<>9__1_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__1_0_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// VRPlayer/GRIP_STATE
struct GRIP_STATE_t32F89B24B5871755E420DBAC9A38E7F98EB73A09 
{
	// System.Int32 VRPlayer/GRIP_STATE::value__
	int32_t ___value___2;
};

// VRPlayer/SNAP_STATE
struct SNAP_STATE_tB460F32E7BD540E024CEA10C4EE5AEBF33B600E1 
{
	// System.Int32 VRPlayer/SNAP_STATE::value__
	int32_t ___value___2;
};

// VRPlayer/TELEPORT_STATE
struct TELEPORT_STATE_t96638867A81D2DFE47176AF6A93A5D046D3E436A 
{
	// System.Int32 VRPlayer/TELEPORT_STATE::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BallBounceSound
struct BallBounceSound_t487BEA8A18C4A99EB49A6E34093F2F64262370EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DetectScoring
struct DetectScoring_tC79CFFA96105230A51AFEFF73D1CD973669AE743  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 DetectScoring::scorePerHit
	int32_t ___scorePerHit_4;
};

// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single LevelManager::timeTillNextLevel
	float ___timeTillNextLevel_4;
	// System.Int32 LevelManager::gameScore
	int32_t ___gameScore_5;
	// System.Int32 LevelManager::check
	int32_t ___check_6;
};

// MovingHoop
struct MovingHoop_t5EC5BCF4CD3375F066BB8D5587B9EBA3A5837087  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MovingHoop::delta
	float ___delta_4;
	// System.Single MovingHoop::speed
	float ___speed_5;
	// UnityEngine.Vector3 MovingHoop::SP
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___SP_6;
};

// VelNet.NetworkComponent
struct NetworkComponent_t6CA3A4E117475E4515E3B5169F61B5F849C06B4E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VelNet.NetworkObject VelNet.NetworkComponent::networkObject
	NetworkObject_t2CC54561D1F664D0E8EFE5808EF04341414EDC13* ___networkObject_4;
	// System.Reflection.MethodInfo[] VelNet.NetworkComponent::methodInfos
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* ___methodInfos_5;
};

// NetworkGameManager
struct NetworkGameManager_t454990239CB347FC53377665F644EBE3B93AE6C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VRPlayer NetworkGameManager::myPlayer
	VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* ___myPlayer_4;
};

// VelNet.NetworkObject
struct NetworkObject_t2CC54561D1F664D0E8EFE5808EF04341414EDC13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VelNet.VelNetPlayer VelNet.NetworkObject::owner
	VelNetPlayer_t58909795C6F139F1E71743864124C2DAFA0AF47A* ___owner_4;
	// System.Boolean VelNet.NetworkObject::ownershipLocked
	bool ___ownershipLocked_5;
	// System.String VelNet.NetworkObject::networkId
	String_t* ___networkId_6;
	// System.Int32 VelNet.NetworkObject::sceneNetworkId
	int32_t ___sceneNetworkId_7;
	// System.String VelNet.NetworkObject::prefabName
	String_t* ___prefabName_8;
	// System.Boolean VelNet.NetworkObject::isSceneObject
	bool ___isSceneObject_9;
	// System.Collections.Generic.List`1<VelNet.NetworkComponent> VelNet.NetworkObject::syncedComponents
	List_1_tC8E158F2058C3FDDE929ADC688F9849CCBF14CA7* ___syncedComponents_10;
	// System.Action`1<VelNet.VelNetPlayer> VelNet.NetworkObject::OwnershipChanged
	Action_1_tB484CF05281A3256177DADFF50557A43D337F832* ___OwnershipChanged_11;
};

// PointAdder
struct PointAdder_t0243E09B9ECFC05B8DC0DBEE0BC0D931D8225D73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PointAdder::firstPlace
	int32_t ___firstPlace_4;
	// System.Int32 PointAdder::secondPlace
	int32_t ___secondPlace_5;
	// System.Int32 PointAdder::thirdPlace
	int32_t ___thirdPlace_6;
};

// PointDisplay
struct PointDisplay_tF168DE9FCC6ECB4BD3F93F2AC7A60D4B0BFA6D04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text PointDisplay::pointText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___pointText_4;
};

// Points
struct Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields
{
	// System.Int32 Points::totalPoints
	int32_t ___totalPoints_4;
};

// PrimaryTrigger
struct PrimaryTrigger_t40C1C89124EEB4729AF9D34278AB5933741C8246  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PrizeButton
struct PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text PrizeButton::pointText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___pointText_4;
	// System.Int32 PrizeButton::pointsRemaining
	int32_t ___pointsRemaining_5;
	// UnityEngine.AudioSource PrizeButton::audS
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audS_6;
	// UnityEngine.GameObject PrizeButton::spawnLoc
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnLoc_7;
	// UnityEngine.GameObject[] PrizeButton::prizes
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___prizes_8;
	// UnityEngine.Vector3 PrizeButton::spawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPos_9;
};

// ResetBall
struct ResetBall_t3E5CF9A61C8A58104FAEA8A6A8C767B70FB2CA9E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ResetBall::Object
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Object_4;
};

// SceneChange
struct SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SceneChange::sceneToLoad
	int32_t ___sceneToLoad_4;
};

// ScoreDisplay
struct ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ScoreDisplay::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// System.Single ScoreDisplay::time
	float ___time_5;
	// System.Int32 ScoreDisplay::score
	int32_t ___score_6;
};

// ScoreKeeper
struct ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ScoreKeeper::score
	int32_t ___score_4;
};

// SecondaryTrigger
struct SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider SecondaryTrigger::expectedCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___expectedCollider_4;
};

// TimeDisplay
struct TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text TimeDisplay::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VRGrabbable
struct VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VRHand
struct VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<VRGrabbable> VRHand::grabbables
	List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* ___grabbables_4;
	// UnityEngine.Transform VRHand::grabOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___grabOffset_5;
};

// VRPlayer
struct VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single VRPlayer::snapActivate
	float ___snapActivate_4;
	// System.Single VRPlayer::snapDeactivate
	float ___snapDeactivate_5;
	// System.Single VRPlayer::snapDegree
	float ___snapDegree_6;
	// System.Single VRPlayer::teleportThresholdActivate
	float ___teleportThresholdActivate_7;
	// System.Single VRPlayer::teleportThresholdDeactivate
	float ___teleportThresholdDeactivate_8;
	// System.Single VRPlayer::gripThresholdActivate
	float ___gripThresholdActivate_9;
	// System.Single VRPlayer::gripThresholdDeactivate
	float ___gripThresholdDeactivate_10;
	// UnityEngine.Vector2[] VRPlayer::joyValues
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___joyValues_11;
	// VRPlayer/TELEPORT_STATE[] VRPlayer::teleportStates
	TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79* ___teleportStates_12;
	// VRPlayer/SNAP_STATE[] VRPlayer::snapStates
	SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00* ___snapStates_13;
	// System.Single[] VRPlayer::gripValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___gripValues_14;
	// VRPlayer/GRIP_STATE[] VRPlayer::gripStates
	GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* ___gripStates_15;
	// UnityEngine.Vector3[] VRPlayer::gripLocations
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___gripLocations_16;
	// VRHand[] VRPlayer::hands
	VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* ___hands_17;
	// UnityEngine.Vector3[] VRPlayer::cameraRigGripLocation
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___cameraRigGripLocation_18;
	// VRGrabbable[] VRPlayer::grabbedObjects
	VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470* ___grabbedObjects_19;
	// UnityEngine.GameObject VRPlayer::teleporterArcPointPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___teleporterArcPointPrefab_20;
	// UnityEngine.Transform[] VRPlayer::teleporterStartPoses
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___teleporterStartPoses_21;
	// UnityEngine.Transform[] VRPlayer::teleporterTargetPoses
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___teleporterTargetPoses_22;
	// System.Boolean[] VRPlayer::teleporterValid
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___teleporterValid_23;
	// System.Single VRPlayer::teleporterStartSpeed
	float ___teleporterStartSpeed_24;
	// System.Single VRPlayer::teleporterMaxDistance
	float ___teleporterMaxDistance_25;
	// UnityEngine.Transform VRPlayer::head
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___head_26;
};

// VelNet.VelNetManager
struct VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String VelNet.VelNetManager::host
	String_t* ___host_4;
	// System.Int32 VelNet.VelNetManager::port
	int32_t ___port_5;
	// System.Net.Sockets.TcpClient VelNet.VelNetManager::socketConnection
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___socketConnection_7;
	// System.Net.Sockets.Socket VelNet.VelNetManager::udpSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___udpSocket_8;
	// System.Boolean VelNet.VelNetManager::udpConnected
	bool ___udpConnected_9;
	// System.Net.IPEndPoint VelNet.VelNetManager::RemoteEndPoint
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___RemoteEndPoint_10;
	// System.Threading.Thread VelNet.VelNetManager::clientReceiveThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___clientReceiveThread_11;
	// System.Threading.Thread VelNet.VelNetManager::clientReceiveThreadUDP
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___clientReceiveThreadUDP_12;
	// System.Int32 VelNet.VelNetManager::userid
	int32_t ___userid_13;
	// System.Boolean VelNet.VelNetManager::debugMessages
	bool ___debugMessages_14;
	// System.Boolean VelNet.VelNetManager::autoLogin
	bool ___autoLogin_15;
	// System.Boolean VelNet.VelNetManager::onlyConnectToSameVersion
	bool ___onlyConnectToSameVersion_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,VelNet.VelNetPlayer> VelNet.VelNetManager::players
	Dictionary_2_tDCDA7913968710AF483C77D87CFD01B10F6985DC* ___players_17;
	// System.Boolean VelNet.VelNetManager::connected
	bool ___connected_28;
	// System.Boolean VelNet.VelNetManager::wasConnected
	bool ___wasConnected_29;
	// System.Double VelNet.VelNetManager::lastConnectionCheck
	double ___lastConnectionCheck_30;
	// System.Collections.Generic.List`1<VelNet.NetworkObject> VelNet.VelNetManager::prefabs
	List_1_t210378306347DB1D1D974908CDF02B7998E23905* ___prefabs_31;
	// VelNet.NetworkObject[] VelNet.VelNetManager::sceneObjects
	NetworkObjectU5BU5D_t455EA7C79EB7B674EC3FB401ACF9C43404C90BA2* ___sceneObjects_32;
	// System.Collections.Generic.List`1<System.String> VelNet.VelNetManager::deletedSceneObjects
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___deletedSceneObjects_33;
	// System.Collections.Generic.Dictionary`2<System.String,VelNet.NetworkObject> VelNet.VelNetManager::objects
	Dictionary_2_t17FA5AB647A00B6C862F9C4B53A0CF5BDDE0C0C4* ___objects_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> VelNet.VelNetManager::groups
	Dictionary_2_t6FFAD029BB474A5257D9A441504B633831AF5341* ___groups_35;
	// VelNet.VelNetPlayer VelNet.VelNetManager::masterPlayer
	VelNetPlayer_t58909795C6F139F1E71743864124C2DAFA0AF47A* ___masterPlayer_36;
	// System.Collections.Generic.List`1<VelNet.VelNetManager/Message> VelNet.VelNetManager::receivedMessages
	List_1_t0525F9BC45A6F8C5E8D5982612AB121609270560* ___receivedMessages_39;
};

struct VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_StaticFields
{
	// VelNet.VelNetManager VelNet.VelNetManager::instance
	VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022* ___instance_6;
	// System.Action`1<System.String> VelNet.VelNetManager::OnJoinedRoom
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnJoinedRoom_18;
	// System.Action`1<System.String> VelNet.VelNetManager::OnLeftRoom
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnLeftRoom_19;
	// System.Action`2<VelNet.VelNetPlayer,System.Boolean> VelNet.VelNetManager::OnPlayerJoined
	Action_2_tB018BF6ADF11839D650AD612B6936AF2601BF2F9* ___OnPlayerJoined_20;
	// System.Action`1<VelNet.VelNetPlayer> VelNet.VelNetManager::OnPlayerLeft
	Action_1_tB484CF05281A3256177DADFF50557A43D337F832* ___OnPlayerLeft_21;
	// System.Action VelNet.VelNetManager::OnConnectedToServer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnConnectedToServer_22;
	// System.Action VelNet.VelNetManager::OnLoggedIn
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnLoggedIn_23;
	// System.Action`1<VelNet.VelNetManager/RoomsMessage> VelNet.VelNetManager::RoomsReceived
	Action_1_t49BC99C9A71244ABA5B6CE30EA141AEB665090E0* ___RoomsReceived_24;
	// System.Action`1<VelNet.VelNetManager/RoomDataMessage> VelNet.VelNetManager::RoomDataReceived
	Action_1_tB307A46296292C2B4CC465D23F07FB4DE64294B1* ___RoomDataReceived_25;
	// System.Action`1<VelNet.VelNetManager/Message> VelNet.VelNetManager::MessageReceived
	Action_1_t5B1136FB65BAE3A192D61E3681BFBCA324CCB882* ___MessageReceived_26;
	// System.Action`2<System.Int32,System.Byte[]> VelNet.VelNetManager::CustomMessageReceived
	Action_2_tC5D14EC15BFCC1F13AAC2711F680A59B37D6B051* ___CustomMessageReceived_27;
	// System.Byte[] VelNet.VelNetManager::toSend
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___toSend_37;
};

// VelNetPlayer
struct VelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VRPlayer VelNetPlayer::myPlayer
	VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* ___myPlayer_4;
	// UnityEngine.Transform VelNetPlayer::head
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___head_5;
	// UnityEngine.Transform VelNetPlayer::leftHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftHand_6;
	// UnityEngine.Transform VelNetPlayer::rightHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightHand_7;
};

// firstFloor
struct firstFloor_t3666C341582FB31E775C79F61B26D32FAECD00E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text firstFloor::pntDisplay
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___pntDisplay_4;
	// UnityEngine.AudioSource firstFloor::audioS
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioS_5;
};

// floatTime
struct floatTime_t806F33B9B5166CB11C67A767CC050B7DD25F4D56  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single floatTime::dPS
	float ___dPS_4;
	// System.Single floatTime::amp
	float ___amp_5;
	// System.Single floatTime::freq
	float ___freq_6;
	// UnityEngine.Vector3 floatTime::posOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOffset_7;
	// UnityEngine.Vector3 floatTime::tempPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tempPos_8;
};

// randomGen
struct randomGen_t1A2E67FCBADA608B08B85D98F87660BC9A6A580E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text randomGen::pointDisplay
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___pointDisplay_4;
	// UnityEngine.AudioSource randomGen::audS
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audS_5;
};

// secondFloor
struct secondFloor_tF11F06BA1D256EA827F5663423BBE02748A3BC82  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text secondFloor::pntDisplay
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___pntDisplay_4;
	// UnityEngine.AudioSource secondFloor::audioS
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioS_5;
};

// teacherTrigger
struct teacherTrigger_t73C0D9C5C116E7FDEF4E6C017CEF988E96FBD7C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject teacherTrigger::teacherTextBubble
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___teacherTextBubble_4;
	// UnityEngine.Animator teacherTrigger::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_5;
};

// thirdFloor
struct thirdFloor_t33DD42D65D665A432161FD19FA3126703D5272C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text thirdFloor::pntDisplay
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___pntDisplay_4;
	// UnityEngine.AudioSource thirdFloor::audioS
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioS_5;
};

// triggerTime
struct triggerTime_tAB0D8D138916B4B1A70BA56B89289523823CB770  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject triggerTime::friend
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___friend_4;
	// UnityEngine.GameObject triggerTime::friendTextBubble
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___friendTextBubble_5;
	// UnityEngine.Animator triggerTime::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_6;
	// TMPro.TMP_Text triggerTime::friendText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___friendText_7;
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

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// VelNet.NetworkSerializedObjectStream
struct NetworkSerializedObjectStream_t95F06CB01F11A10BA02D8641E71E3A4B1BCA8AEE  : public NetworkComponent_t6CA3A4E117475E4515E3B5169F61B5F849C06B4E
{
	// System.Single VelNet.NetworkSerializedObjectStream::serializationRateHz
	float ___serializationRateHz_6;
	// System.Boolean VelNet.NetworkSerializedObjectStream::hybridOnChangeCompression
	bool ___hybridOnChangeCompression_7;
	// System.Byte[] VelNet.NetworkSerializedObjectStream::lastSentBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lastSentBytes_8;
	// System.Double VelNet.NetworkSerializedObjectStream::lastSendTime
	double ___lastSendTime_9;
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

// MySyncTransform
struct MySyncTransform_tA8848D74E4F8B5F531062BC5FB970BB2191CBC1E  : public NetworkSerializedObjectStream_t95F06CB01F11A10BA02D8641E71E3A4B1BCA8AEE
{
	// UnityEngine.Vector3 MySyncTransform::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_11;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
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

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// VRHand[]
struct VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382  : public RuntimeArray
{
	ALIGN_FIELD (8) VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* m_Items[1];

	inline VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// VRPlayer/SNAP_STATE[]
struct SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00  : public RuntimeArray
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
// VRPlayer/TELEPORT_STATE[]
struct TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79  : public RuntimeArray
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
// VRPlayer/GRIP_STATE[]
struct GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B  : public RuntimeArray
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
// VRGrabbable[]
struct VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470  : public RuntimeArray
{
	ALIGN_FIELD (8) VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* m_Items[1];

	inline VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<ScoreKeeper>()
inline ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7 (const RuntimeMethod* method)
{
	return ((  ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void ScoreKeeper::IncrementScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_IncrementScore_mB4229CE6269B6EE90B80AD05F7A8E5C2BCE258B3 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, int32_t ___amount0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void LevelManager::<Update>g__calculateScore|4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_U3CUpdateU3Eg__calculateScoreU7C4_0_m41153919152B719B10FCD488C12ACB0A1FBA35C7 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void LevelManager::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LoadNextScene_mD85FB8B0AAE2DFE9DB7CD55B9A6EABA7D517348F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<SecondaryTrigger>()
inline SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3* Component_GetComponentInChildren_TisSecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3_mD0809AB9CF4B6C81BABDBADEF0B9837E8F7C5686 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void SecondaryTrigger::ExpectCollider(UnityEngine.Collider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecondaryTrigger_ExpectCollider_mD83AEC8D44A2734CEFBE088ECB2383DF08B07880_inline (SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<LevelManager>()
inline LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962 (const RuntimeMethod* method)
{
	return ((  LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void TimeDisplay::scoreDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_scoreDisplay_mAFABD4AA452A5EFB54E543E3D2FB90AE35C5CFCF (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedTime_mEEDC1E90FA9C17F861872AF08459C04A6BBFCC21 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 VelNet.BinaryWriterExtensions::ReadVector3(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BinaryWriterExtensions_ReadVector3_mC3378921698759D6D4F674C03B3672F4A91A0007 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) ;
// System.Void VelNet.BinaryWriterExtensions::Write(System.IO.BinaryWriter,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriterExtensions_Write_mD64205C86BAEE00672E141DAD37E3083B351D22F (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v1, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean VelNet.NetworkObject::get_IsMine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkObject_get_IsMine_m25EA71999EFAE680F63F8B87541DF23730E85F8A (NetworkObject_t2CC54561D1F664D0E8EFE5808EF04341414EDC13* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Void VelNet.NetworkComponent::SendRPC(System.String,System.Boolean,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkComponent_SendRPC_m4E54B1880427CA8D3FE8AFDD0641E4A425678997 (NetworkComponent_t6CA3A4E117475E4515E3B5169F61B5F849C06B4E* __this, String_t* ___methodName0, bool ___runLocally1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___parameterData2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void VelNet.NetworkSerializedObjectStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSerializedObjectStream__ctor_m0D2D56AF9D7C636D510C3C84E196042FEF3B1449 (NetworkSerializedObjectStream_t95F06CB01F11A10BA02D8641E71E3A4B1BCA8AEE* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// VelNet.NetworkObject VelNet.VelNetManager::NetworkInstantiate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkObject_t2CC54561D1F664D0E8EFE5808EF04341414EDC13* VelNetManager_NetworkInstantiate_m3522F331C04E7902840B3FC80467D5194D7CCEF8 (String_t* ___prefabName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<VelNetPlayer>()
inline VelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476* Component_GetComponent_TisVelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476_mA38E359164C8BD5E7F2DB24D31D91EFC963808BF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void NetworkGameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B7E0C12187C79E3D39D0115B5F40560F002109D (U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void VelNet.VelNetManager::Join(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelNetManager_Join_mECF84CD81CCD26B28F7B0A6BAF29EFB63C5FDE67 (String_t* ___roomName0, const RuntimeMethod* method) ;
// System.Void PointAdder::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAdder_addPoints_m7594A4FAB71A518BA51F28688612F6C6A9A3AD53 (PointAdder_t0243E09B9ECFC05B8DC0DBEE0BC0D931D8225D73* __this, int32_t ___n0, const RuntimeMethod* method) ;
// System.Void PointDisplay::displayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointDisplay_displayPoints_mBA3A3BF4E03A6B401B24E264634978384AD8DDDF (PointDisplay_tF168DE9FCC6ECB4BD3F93F2AC7A60D4B0BFA6D04* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void PrizeButton::spawnPrize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrizeButton_spawnPrize_mD03E34924EA4361AE8D07CA3880A48F8C3C95C53 (PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156* __this, const RuntimeMethod* method) ;
// System.Void PrizeButton::displayPointsRemaining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrizeButton_displayPointsRemaining_m44A21B3DF17DF3663C8B879D5D696034CB11CC74 (PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156* __this, const RuntimeMethod* method) ;
// System.Void randomGen::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void randomGen_addPoints_m241F55E7FF958624BFB2D6DE293A1C7C5AD737DC (randomGen_t1A2E67FCBADA608B08B85D98F87660BC9A6A580E* __this, int32_t ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<VRGrabbable>()
inline VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* Component_GetComponent_TisVRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28_m3ADC52B7D269A1758312F7BC7D9DD0D6D9CAA890 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VRGrabbable>::Add(T)
inline void List_1_Add_m6681222872C470B8FCF0E340F9206C0A29682501_inline (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* __this, VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44*, VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<VRGrabbable>::Remove(T)
inline bool List_1_Remove_mF43D64241CBAFC8BC66C604B5F9BDB29DD948AA3 (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* __this, VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44*, VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<VRGrabbable>::.ctor()
inline void List_1__ctor_mB29924D8B1CEC68261645BDCD9F96B8B90477739 (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Vector3 VRPlayer::getFootPositionWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VRPlayer_getFootPositionWorld_m6E4C0699BA9C2FA2B6958FC1B171B54F6604663A (VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single OVRInput::Get(OVRInput/Axis1D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 OVRInput::Get(OVRInput/Axis2D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8 (int32_t ___virtualMask0, int32_t ___controllerMask1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Void VRPlayer::doTeleport(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRPlayer_doTeleport_mD904230590C4F1CC12A86543EC5DEDCB18293129 (VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetFootPosWorld0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_mDCBE530EF2ACD21EAADEA829259291D7327BC80E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<VRGrabbable>::get_Count()
inline int32_t List_1_get_Count_m58948CF8406D428E28549A006D3CD2EEF3F4F3D4_inline (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<VRGrabbable>::get_Item(System.Int32)
inline VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* List_1_get_Item_m315787EC48F324B6E493A9FCE37B6763DC6CB89F (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* (*) (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void firstFloor::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void firstFloor_addPoints_m70216DA018E4A5FBB7FA21A51D9A80023C4E6E19 (firstFloor_t3666C341582FB31E775C79F61B26D32FAECD00E1* __this, int32_t ___n0, const RuntimeMethod* method) ;
// System.Void secondFloor::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secondFloor_addPoints_mF92130780031B6978E713712D32A674B9F446E58 (secondFloor_tF11F06BA1D256EA827F5663423BBE02748A3BC82* __this, int32_t ___n0, const RuntimeMethod* method) ;
// System.Void thirdFloor::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thirdFloor_addPoints_mD5C6CCCB14E3E72679F0BC2A16AADAE25E5F6402 (thirdFloor_t33DD42D65D665A432161FD19FA3126703D5272C8* __this, int32_t ___n0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Internal_ToAxisAngleRad_m36090778CAC5E93CADAD17A95B7C7028E93CA1BF (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, float* ___angle2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
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
// System.Void teacherTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void teacherTrigger_Start_m67D662CF84CAE356ED4C912F4E65C782FBE9C727 (teacherTrigger_t73C0D9C5C116E7FDEF4E6C017CEF988E96FBD7C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___anim_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_5), (void*)L_1);
		// teacherTextBubble.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___teacherTextBubble_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void teacherTrigger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void teacherTrigger_Update_mDBB18538B5BB2932773E0F9A5EA908BB09ACAB4F (teacherTrigger_t73C0D9C5C116E7FDEF4E6C017CEF988E96FBD7C7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void teacherTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void teacherTrigger_OnTriggerEnter_mC3F626E67AD2BE787F594ADD8C152625D36FF5EC (teacherTrigger_t73C0D9C5C116E7FDEF4E6C017CEF988E96FBD7C7* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E45DE6293D6F936A2D7D0E5BB05562FB280B776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// anim.SetTrigger("wave");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_5;
		NullCheck(L_4);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteral4E45DE6293D6F936A2D7D0E5BB05562FB280B776, NULL);
		// anim.ResetTrigger("idle");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_5;
		NullCheck(L_5);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_5, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, NULL);
		// teacherTextBubble.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___teacherTextBubble_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void teacherTrigger::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void teacherTrigger_OnTriggerExit_m57FF145F019271853E2D5E26BD772D9BC207D8D9 (teacherTrigger_t73C0D9C5C116E7FDEF4E6C017CEF988E96FBD7C7* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E45DE6293D6F936A2D7D0E5BB05562FB280B776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// anim.SetTrigger("idle");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_5;
		NullCheck(L_4);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, NULL);
		// anim.ResetTrigger("wave");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_5;
		NullCheck(L_5);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_5, _stringLiteral4E45DE6293D6F936A2D7D0E5BB05562FB280B776, NULL);
		// teacherTextBubble.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___teacherTextBubble_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void teacherTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void teacherTrigger__ctor_m8B277119B2371A6988C0ECA297163AA181BD4A9F (teacherTrigger_t73C0D9C5C116E7FDEF4E6C017CEF988E96FBD7C7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void triggerTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void triggerTime_Start_m47076548C4FD75EFE620E93B8C1F2AE0F39BB621 (triggerTime_tAB0D8D138916B4B1A70BA56B89289523823CB770* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___anim_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_6), (void*)L_1);
		// friendTextBubble.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___friendTextBubble_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void triggerTime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void triggerTime_Update_m10E144ABAE2660CA7BC2240618DDA7B6769FCD23 (triggerTime_tAB0D8D138916B4B1A70BA56B89289523823CB770* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void triggerTime::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void triggerTime_OnTriggerEnter_m8279313A299A8D1E7C12B1695F60845750AB133F (triggerTime_tAB0D8D138916B4B1A70BA56B89289523823CB770* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E45DE6293D6F936A2D7D0E5BB05562FB280B776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// anim.SetTrigger("wave");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_6;
		NullCheck(L_4);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteral4E45DE6293D6F936A2D7D0E5BB05562FB280B776, NULL);
		// anim.ResetTrigger("idle");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_6;
		NullCheck(L_5);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_5, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, NULL);
		// friendTextBubble.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___friendTextBubble_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void triggerTime::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void triggerTime_OnTriggerExit_m63FEE496CEA7C820FCCE52D4B4AE8813D54D3CDC (triggerTime_tAB0D8D138916B4B1A70BA56B89289523823CB770* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E45DE6293D6F936A2D7D0E5BB05562FB280B776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// anim.SetTrigger("idle");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_6;
		NullCheck(L_4);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteral0A19D9F6E28A5725DF476625E5F21BCB64AB355E, NULL);
		// anim.ResetTrigger("wave");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_6;
		NullCheck(L_5);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_5, _stringLiteral4E45DE6293D6F936A2D7D0E5BB05562FB280B776, NULL);
		// friendTextBubble.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___friendTextBubble_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void triggerTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void triggerTime__ctor_m1669750E14B262C3C10BCA11630ED586C799DACF (triggerTime_tAB0D8D138916B4B1A70BA56B89289523823CB770* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BallBounceSound::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallBounceSound_OnCollisionEnter_mE828F201616617650F4AB4C6A6EE6282C0DD8393 (BallBounceSound_t487BEA8A18C4A99EB49A6E34093F2F64262370EA* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioSource source = GetComponent<AudioSource> ();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// source.Play ();
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void BallBounceSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallBounceSound__ctor_m40E586198C820726C4CE64C91840838E30B3C7F6 (BallBounceSound_t487BEA8A18C4A99EB49A6E34093F2F64262370EA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DetectScoring::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectScoring_Start_m5A7EBB18EF9F07D23C4CBDF669717B6711A86064 (DetectScoring_tC79CFFA96105230A51AFEFF73D1CD973669AE743* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DetectScoring::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectScoring_Update_mBD219B3DF29FCC37A66CA4B4BE13C31F28B54162 (DetectScoring_tC79CFFA96105230A51AFEFF73D1CD973669AE743* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DetectScoring::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectScoring_OnCollisionEnter_mE08A9A12A4707762C1DFB5DC44A352EAB199DC05 (DetectScoring_tC79CFFA96105230A51AFEFF73D1CD973669AE743* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ScoreKeeper scoreKeep = FindObjectOfType<ScoreKeeper> ();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_0;
		L_0 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		// scoreKeep.IncrementScore (scorePerHit);
		int32_t L_1 = __this->___scorePerHit_4;
		NullCheck(L_0);
		ScoreKeeper_IncrementScore_mB4229CE6269B6EE90B80AD05F7A8E5C2BCE258B3(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DetectScoring::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectScoring__ctor_mE708357D706244C534C3C0BAB3A128E0B42006A7 (DetectScoring_tC79CFFA96105230A51AFEFF73D1CD973669AE743* __this, const RuntimeMethod* method) 
{
	{
		// public int scorePerHit = 1;
		__this->___scorePerHit_4 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Start_mA7A45D9D0CBA8784B87F70B204C19A2AAC234D42 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LevelManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Update_mD2004B9E4119DF7C3EE3D3F147754CCBC7FFD61D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// timeTillNextLevel -= Time.deltaTime;
		float L_0 = __this->___timeTillNextLevel_4;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeTillNextLevel_4 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (timeTillNextLevel <= 0) {
		float L_2 = __this->___timeTillNextLevel_4;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// calculateScore();
		LevelManager_U3CUpdateU3Eg__calculateScoreU7C4_0_m41153919152B719B10FCD488C12ACB0A1FBA35C7(__this, NULL);
	}

IL_0025:
	{
		// if(timeTillNextLevel <=-10)
		float L_3 = __this->___timeTillNextLevel_4;
		if ((!(((float)L_3) <= ((float)(-10.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		// LoadNextScene();
		LevelManager_LoadNextScene_mD85FB8B0AAE2DFE9DB7CD55B9A6EABA7D517348F(__this, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void LevelManager::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LoadNextScene_mD85FB8B0AAE2DFE9DB7CD55B9A6EABA7D517348F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene (0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_m97F35AC08C296B73BD7D85FFB593A7BEA61B3F92 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// public float timeTillNextLevel = 40f;
		__this->___timeTillNextLevel_4 = (40.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LevelManager::<Update>g__calculateScore|4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_U3CUpdateU3Eg__calculateScoreU7C4_0_m41153919152B719B10FCD488C12ACB0A1FBA35C7 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (check == 0)
		int32_t L_0 = __this->___check_6;
		if (L_0)
		{
			goto IL_007e;
		}
	}
	{
		// gameScore = FindObjectOfType<ScoreKeeper>().score;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_1;
		L_1 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->___score_4;
		__this->___gameScore_5 = L_2;
		// if (gameScore >= 1 && gameScore <= 4)
		int32_t L_3 = __this->___gameScore_5;
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_4 = __this->___gameScore_5;
		if ((((int32_t)L_4) > ((int32_t)4)))
		{
			goto IL_0038;
		}
	}
	{
		// Points.totalPoints += 5;
		int32_t L_5 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4 = ((int32_t)il2cpp_codegen_add(L_5, 5));
		goto IL_0070;
	}

IL_0038:
	{
		// else if (gameScore >= 5 && gameScore <= 9)
		int32_t L_6 = __this->___gameScore_5;
		if ((((int32_t)L_6) < ((int32_t)5)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_7 = __this->___gameScore_5;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)9))))
		{
			goto IL_0059;
		}
	}
	{
		// Points.totalPoints += 7;
		int32_t L_8 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4 = ((int32_t)il2cpp_codegen_add(L_8, 7));
		goto IL_0070;
	}

IL_0059:
	{
		// else if (gameScore >= 10)
		int32_t L_9 = __this->___gameScore_5;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)10))))
		{
			goto IL_0070;
		}
	}
	{
		// Points.totalPoints += 10;
		int32_t L_10 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)10)));
	}

IL_0070:
	{
		// check++;
		int32_t L_11 = __this->___check_6;
		__this->___check_6 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_007e:
	{
		// }
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
// System.Void MovingHoop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingHoop_Start_m36F99672559088C26E99D8792CE7F6EF8C36A727 (MovingHoop_t5EC5BCF4CD3375F066BB8D5587B9EBA3A5837087* __this, const RuntimeMethod* method) 
{
	{
		// SP = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___SP_6 = L_1;
		// }
		return;
	}
}
// System.Void MovingHoop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingHoop_Update_mC26519D73FACCF01C0FB6E3FE4BB5C190C823477 (MovingHoop_t5EC5BCF4CD3375F066BB8D5587B9EBA3A5837087* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v = SP;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___SP_6;
		V_0 = L_0;
		// v.x += delta * Mathf.Sin(Time.time * speed);
		float* L_1 = (&(&V_0)->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->___delta_4;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_6 = __this->___speed_5;
		float L_7;
		L_7 = sinf(((float)il2cpp_codegen_multiply(L_5, L_6)));
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_7))));
		// transform.position = v;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void MovingHoop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingHoop__ctor_m1CFA668234CA92E20978416CC06D2853EEE3C16F (MovingHoop_t5EC5BCF4CD3375F066BB8D5587B9EBA3A5837087* __this, const RuntimeMethod* method) 
{
	{
		// public float delta = 1.5f;
		__this->___delta_4 = (1.5f);
		// public float speed = 2.0f;
		__this->___speed_5 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PrimaryTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryTrigger_Start_mB6696ACFBDFD7F90A651B38B28F4812C873877D2 (PrimaryTrigger_t40C1C89124EEB4729AF9D34278AB5933741C8246* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PrimaryTrigger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryTrigger_Update_m1EAC07123A41326305E5838744B5AB2D673D5980 (PrimaryTrigger_t40C1C89124EEB4729AF9D34278AB5933741C8246* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PrimaryTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryTrigger_OnTriggerEnter_m2CDFB646C1567C1AEDC6FE610034E79F6DB5CA31 (PrimaryTrigger_t40C1C89124EEB4729AF9D34278AB5933741C8246* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3_mD0809AB9CF4B6C81BABDBADEF0B9837E8F7C5686_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SecondaryTrigger trigger = GetComponentInChildren<SecondaryTrigger> ();
		SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3* L_0;
		L_0 = Component_GetComponentInChildren_TisSecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3_mD0809AB9CF4B6C81BABDBADEF0B9837E8F7C5686(__this, Component_GetComponentInChildren_TisSecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3_mD0809AB9CF4B6C81BABDBADEF0B9837E8F7C5686_RuntimeMethod_var);
		// trigger.ExpectCollider (collider);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___collider0;
		NullCheck(L_0);
		SecondaryTrigger_ExpectCollider_mD83AEC8D44A2734CEFBE088ECB2383DF08B07880_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PrimaryTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryTrigger__ctor_m5D4F94DA94531B46E508F491AD4000AA574CBE06 (PrimaryTrigger_t40C1C89124EEB4729AF9D34278AB5933741C8246* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ResetBall::OnTriggerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetBall_OnTriggerEnter_m1E1D5B2DD424F45FE5C4964767C5F9A86F05FE76 (ResetBall_t3E5CF9A61C8A58104FAEA8A6A8C767B70FB2CA9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var rigidbody = Object.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Object_4;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_0, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// rigidbody.position = new Vector3(0.186f, 0.448f, -12.62f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.186000004f), (0.448000014f), (-12.6199999f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C(L_2, L_3, NULL);
		// rigidbody.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_4);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_4, L_5, NULL);
		// rigidbody.angularVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_4);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Void ResetBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetBall__ctor_mB7078E8CF895D587B5F5769FA1BF3D6F4F08F7FD (ResetBall_t3E5CF9A61C8A58104FAEA8A6A8C767B70FB2CA9E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ScoreDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay_Start_m96F650A0EADE6CBFF87C58A17E15F808D32251CB (ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<Text> ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ScoreDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay_Update_mAD1AA4EA3D6A88536E27EC4E3200DADD283B772A (ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = FindObjectOfType<ScoreKeeper>().score;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_0;
		L_0 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = L_0->___score_4;
		__this->___score_6 = L_1;
		// text.text = "Score: " + score;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_4;
		int32_t* L_3 = (&__this->___score_6);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void ScoreDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay__ctor_mC8666625EE8D2FFC495D905A0DA75ADF0CF41CB8 (ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ScoreKeeper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_Start_m111876C645A6D668BC752821007BE6877002C6A3 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad (gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void ScoreKeeper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_Update_m31E4B2F16670B50AD481128A788BF2ED3B607179 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float time = FindObjectOfType<LevelManager>().timeTillNextLevel;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0;
		L_0 = Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962(Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1 = L_0->___timeTillNextLevel_4;
		// if (time >= 40f)
		if ((!(((float)L_1) >= ((float)(40.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// score = 0;
		__this->___score_4 = 0;
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void ScoreKeeper::IncrementScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_IncrementScore_mB4229CE6269B6EE90B80AD05F7A8E5C2BCE258B3 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += amount;
		int32_t L_0 = __this->___score_4;
		int32_t L_1 = ___amount0;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// print ("Score: "+ score);
		int32_t* L_2 = (&__this->___score_4);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_4, NULL);
		// }
		return;
	}
}
// System.Void ScoreKeeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper__ctor_m2ACACD5BEC5B2FB90A3D014C60E3726F789EE357 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SecondaryTrigger::ExpectCollider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondaryTrigger_ExpectCollider_mD83AEC8D44A2734CEFBE088ECB2383DF08B07880 (SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	{
		// expectedCollider = collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		__this->___expectedCollider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___expectedCollider_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SecondaryTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondaryTrigger_OnTriggerEnter_mBC526F68529FDB5FD46414EA9BFF2C70CCB7ADFB (SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___otherCollider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(otherCollider == expectedCollider) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___otherCollider0;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->___expectedCollider_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// ScoreKeeper scoreKeeper = FindObjectOfType<ScoreKeeper>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_3;
		L_3 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_mD149DC8D638EF94AB36D24A6068BF9DEC131A9A7_RuntimeMethod_var);
		// scoreKeeper.IncrementScore (1);
		NullCheck(L_3);
		ScoreKeeper_IncrementScore_mB4229CE6269B6EE90B80AD05F7A8E5C2BCE258B3(L_3, 1, NULL);
		// AudioSource source = GetComponent<AudioSource> ();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		// source.Play ();
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void SecondaryTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecondaryTrigger__ctor_mE0F087BA39FC3FFB24EA179CF5ECE60233097DBE (SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TimeDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_Start_mD5612CD6789320866EC5E835F695A57575C7988E (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<Text> ();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void TimeDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_Update_m7D835C826830B8D9BBF90F3D0CE52D5FEA450605 (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float time = FindObjectOfType<LevelManager>().timeTillNextLevel;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0;
		L_0 = Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962(Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962_RuntimeMethod_var);
		NullCheck(L_0);
		float L_1 = L_0->___timeTillNextLevel_4;
		V_0 = L_1;
		// if (time >= 0)
		float L_2 = V_0;
		if ((!(((float)L_2) >= ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// text.text = "Time: " + time;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___text_4;
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC, L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		return;
	}

IL_0030:
	{
		// scoreDisplay();
		TimeDisplay_scoreDisplay_mAFABD4AA452A5EFB54E543E3D2FB90AE35C5CFCF(__this, NULL);
		// }
		return;
	}
}
// System.Void TimeDisplay::scoreDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay_scoreDisplay_mAFABD4AA452A5EFB54E543E3D2FB90AE35C5CFCF (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13F5BE854076AE526AF5981B1D405AC98E71B6FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41171E494513D3374C45FCAD2B46D0F11C88D433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB9CD5C1414E936DAEA7AFED7D534E48326FEFE5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int totalScore = FindObjectOfType<LevelManager>().gameScore;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0;
		L_0 = Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962(Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_mEFD70493E1A8E01100167D5D450679465AA9E962_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = L_0->___gameScore_5;
		V_0 = L_1;
		// int hubPoints = Points.totalPoints;
		int32_t L_2 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		V_1 = L_2;
		// if (totalScore >= 0 && totalScore <= 4)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)4)))
		{
			goto IL_0036;
		}
	}
	{
		// text.text = "You got 3rd place! \nTotal points: " + hubPoints;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___text_4;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFB9CD5C1414E936DAEA7AFED7D534E48326FEFE5, L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		return;
	}

IL_0036:
	{
		// else if (totalScore >= 5 && totalScore <= 9)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)5)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)9))))
		{
			goto IL_005c;
		}
	}
	{
		// text.text = "You got 2nd place! \nTotal points: " + hubPoints;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___text_4;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral41171E494513D3374C45FCAD2B46D0F11C88D433, L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		return;
	}

IL_005c:
	{
		// else if (totalScore >= 10)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		// text.text = "You got 1st place! \nTotal points: " + hubPoints;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___text_4;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral13F5BE854076AE526AF5981B1D405AC98E71B6FA, L_15, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void TimeDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeDisplay__ctor_m5A6F792B2C60AAA9FFDBAC3BBA2325E116B10F8F (TimeDisplay_t3B58C3B36F948EC77EF74BAD6F76FE12DF8628C1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void floatTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void floatTime_Start_m4A729CA0C52B61DCBAAF53BDB26FC286B6C152A5 (floatTime_t806F33B9B5166CB11C67A767CC050B7DD25F4D56* __this, const RuntimeMethod* method) 
{
	{
		// posOffset = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___posOffset_7 = L_1;
		// }
		return;
	}
}
// System.Void floatTime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void floatTime_Update_mDE71BB334058206F3254E66D753CB8933F9B9B7A (floatTime_t806F33B9B5166CB11C67A767CC050B7DD25F4D56* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(new Vector3(0f, Time.deltaTime * dPS, 0f), Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___dPS_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), ((float)il2cpp_codegen_multiply(L_1, L_2)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_0, L_3, 0, NULL);
		// tempPos = posOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___posOffset_7;
		__this->___tempPos_8 = L_4;
		// tempPos.y += Mathf.Sin (Time.fixedTime * Mathf.PI * freq) * amp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___tempPos_8);
		float* L_6 = (&L_5->___y_3);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9;
		L_9 = Time_get_fixedTime_mEEDC1E90FA9C17F861872AF08459C04A6BBFCC21(NULL);
		float L_10 = __this->___freq_6;
		float L_11;
		L_11 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_9, (3.14159274f))), L_10)));
		float L_12 = __this->___amp_5;
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_11, L_12))));
		// transform.position = tempPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___tempPos_8;
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void floatTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void floatTime__ctor_m64AFD8E20FFC012BCF6698BF12924F9EAEBC4221 (floatTime_t806F33B9B5166CB11C67A767CC050B7DD25F4D56* __this, const RuntimeMethod* method) 
{
	{
		// public float dPS = 15.0f;
		__this->___dPS_4 = (15.0f);
		// public float amp = 0.5f;
		__this->___amp_5 = (0.5f);
		// public float freq = 1f;
		__this->___freq_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MySyncTransform::ReceiveState(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MySyncTransform_ReceiveState_mF632FA730A19B331F1A35B53FA43F3FA6F07A614 (MySyncTransform_tA8848D74E4F8B5F531062BC5FB970BB2191CBC1E* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, const RuntimeMethod* method) 
{
	{
		// targetPosition = binaryReader.ReadVector3();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___binaryReader0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = BinaryWriterExtensions_ReadVector3_mC3378921698759D6D4F674C03B3672F4A91A0007(L_0, NULL);
		__this->___targetPosition_11 = L_1;
		// }
		return;
	}
}
// System.Void MySyncTransform::SendState(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MySyncTransform_SendState_m892AA091D74415F111542B2063FDBBD1F59C17A3 (MySyncTransform_tA8848D74E4F8B5F531062BC5FB970BB2191CBC1E* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___binaryWriter0, const RuntimeMethod* method) 
{
	{
		// binaryWriter.Write(transform.position);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___binaryWriter0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		BinaryWriterExtensions_Write_mD64205C86BAEE00672E141DAD37E3083B351D22F(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void MySyncTransform::rpcReceiveMessage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MySyncTransform_rpcReceiveMessage_mB8A001AE6CD763EA2EA0CA02FC3BAF1BA530ED55 (MySyncTransform_tA8848D74E4F8B5F531062BC5FB970BB2191CBC1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFAFABDD06781D8ECF5FDB1016609F44A0A8F956);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// MemoryStream mem = new MemoryStream(message);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___message0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		// BinaryReader reader = new BinaryReader(mem);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_2, L_1, NULL);
		// string sent = reader.ReadString();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_2);
		V_0 = L_3;
		// Debug.Log("got a message: " + sent);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBFAFABDD06781D8ECF5FDB1016609F44A0A8F956, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// }
		return;
	}
}
// System.Void MySyncTransform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MySyncTransform_Start_mF47652C77AE0E8CB008E189088D2261F90F4878D (MySyncTransform_tA8848D74E4F8B5F531062BC5FB970BB2191CBC1E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MySyncTransform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MySyncTransform_Update_m660657CD543C50476FCAD1C61DD9FBC1F7A1EDEB (MySyncTransform_tA8848D74E4F8B5F531062BC5FB970BB2191CBC1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B95CDAD0683D6E28DAEBB0B725268DF2C352D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF8E53378674ADAA9B55339A92BD14311E3AC32);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	{
		// if (networkObject.IsMine)
		NetworkObject_t2CC54561D1F664D0E8EFE5808EF04341414EDC13* L_0 = ((NetworkComponent_t6CA3A4E117475E4515E3B5169F61B5F849C06B4E*)__this)->___networkObject_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkObject_get_IsMine_m25EA71999EFAE680F63F8B87541DF23730E85F8A(L_0, NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)114), NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		// MemoryStream mem = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_3, NULL);
		V_0 = L_3;
		// BinaryWriter writer = new BinaryWriter(mem);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_5 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_5, L_4, NULL);
		// writer.Write("my message");
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_5, _stringLiteral7FF8E53378674ADAA9B55339A92BD14311E3AC32);
		// this.SendRPC("rpcReceiveMessage", false, mem.ToArray());
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_6);
		NetworkComponent_SendRPC_m4E54B1880427CA8D3FE8AFDD0641E4A425678997(__this, _stringLiteral27B95CDAD0683D6E28DAEBB0B725268DF2C352D5, (bool)0, L_7, NULL);
		return;
	}

IL_003f:
	{
		// transform.position = Vector3.Lerp(transform.position, targetPosition, .3f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___targetPosition_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_10, L_11, (0.300000012f), NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_12, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void MySyncTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MySyncTransform__ctor_mC43C8FA22BC24C3C5EB0AD4DCD0968E35162B018 (MySyncTransform_tA8848D74E4F8B5F531062BC5FB970BB2191CBC1E* __this, const RuntimeMethod* method) 
{
	{
		NetworkSerializedObjectStream__ctor_m0D2D56AF9D7C636D510C3C84E196042FEF3B1449(__this, NULL);
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
// System.Void NetworkGameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkGameManager_Start_m23CA07E8074D291F2EB88A3A781C38CFC70758E8 (NetworkGameManager_t454990239CB347FC53377665F644EBE3B93AE6C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkGameManager_U3CStartU3Eb__1_1_mC73B3A21550CDA9647200160169DD51094C83C6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_0_m56946019820531BAF5DA7C4C001C3C27A6DAF01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_1 = NULL;
	{
		// VelNetManager.OnLoggedIn += () => {
		//     VelNetManager.Join("group2FinalProject");//"myroom2"
		// };
		il2cpp_codegen_runtime_class_init_inline(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_StaticFields*)il2cpp_codegen_static_fields_for(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var))->___OnLoggedIn_23;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var);
		U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA* L_3 = ((U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_0_m56946019820531BAF5DA7C4C001C3C27A6DAF01F_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = L_4;
		((U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(G_B2_1, G_B2_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var);
		((VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_StaticFields*)il2cpp_codegen_static_fields_for(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var))->___OnLoggedIn_23 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_StaticFields*)il2cpp_codegen_static_fields_for(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var))->___OnLoggedIn_23), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// VelNetManager.OnJoinedRoom += (roomname) => {
		//     NetworkObject player = VelNetManager.NetworkInstantiate("Player");
		//     player.GetComponent<VelNetPlayer>().myPlayer = myPlayer;
		// };
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = ((VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_StaticFields*)il2cpp_codegen_static_fields_for(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var))->___OnJoinedRoom_18;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_8, __this, (intptr_t)((void*)NetworkGameManager_U3CStartU3Eb__1_1_mC73B3A21550CDA9647200160169DD51094C83C6B_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_7, L_8, NULL);
		((VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_StaticFields*)il2cpp_codegen_static_fields_for(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var))->___OnJoinedRoom_18 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_9, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_StaticFields*)il2cpp_codegen_static_fields_for(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var))->___OnJoinedRoom_18), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_9, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void NetworkGameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkGameManager_Update_m48E08E210B4E3BB31B31CD5EE59A166876CB1145 (NetworkGameManager_t454990239CB347FC53377665F644EBE3B93AE6C7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NetworkGameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkGameManager__ctor_mE958B3A6F1BFB223B564EAC2A683E2B20542F854 (NetworkGameManager_t454990239CB347FC53377665F644EBE3B93AE6C7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void NetworkGameManager::<Start>b__1_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkGameManager_U3CStartU3Eb__1_1_mC73B3A21550CDA9647200160169DD51094C83C6B (NetworkGameManager_t454990239CB347FC53377665F644EBE3B93AE6C7* __this, String_t* ___roomname0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476_mA38E359164C8BD5E7F2DB24D31D91EFC963808BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkObject player = VelNetManager.NetworkInstantiate("Player");
		il2cpp_codegen_runtime_class_init_inline(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var);
		NetworkObject_t2CC54561D1F664D0E8EFE5808EF04341414EDC13* L_0;
		L_0 = VelNetManager_NetworkInstantiate_m3522F331C04E7902840B3FC80467D5194D7CCEF8(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		// player.GetComponent<VelNetPlayer>().myPlayer = myPlayer;
		NullCheck(L_0);
		VelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476* L_1;
		L_1 = Component_GetComponent_TisVelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476_mA38E359164C8BD5E7F2DB24D31D91EFC963808BF(L_0, Component_GetComponent_TisVelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476_mA38E359164C8BD5E7F2DB24D31D91EFC963808BF_RuntimeMethod_var);
		VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* L_2 = __this->___myPlayer_4;
		NullCheck(L_1);
		L_1->___myPlayer_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___myPlayer_4), (void*)L_2);
		// };
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
// System.Void NetworkGameManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA3459C40CBF3098EC89091DFD625480A9650BB6B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA* L_0 = (U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA*)il2cpp_codegen_object_new(U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1B7E0C12187C79E3D39D0115B5F40560F002109D(L_0, NULL);
		((U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NetworkGameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B7E0C12187C79E3D39D0115B5F40560F002109D (U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NetworkGameManager/<>c::<Start>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__1_0_m56946019820531BAF5DA7C4C001C3C27A6DAF01F (U3CU3Ec_t97742E625AEA0989B58BD581F5469442E11E63AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1407D997EAD4361B4A48D39ADF5BCB1E492DADF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VelNetManager.Join("group2FinalProject");//"myroom2"
		il2cpp_codegen_runtime_class_init_inline(VelNetManager_tA297364AA43654B1F649FF2AA2A9C52703FAE022_il2cpp_TypeInfo_var);
		VelNetManager_Join_mECF84CD81CCD26B28F7B0A6BAF29EFB63C5FDE67(_stringLiteralF1407D997EAD4361B4A48D39ADF5BCB1E492DADF, NULL);
		// };
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
// System.Void PointAdder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAdder_Start_mC38B752AE0D202DFAD25C92DA9DD1A94281D5B0A (PointAdder_t0243E09B9ECFC05B8DC0DBEE0BC0D931D8225D73* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PointAdder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAdder_Update_m4FE12E0D73DCE66F760E489DF65409D5735F8849 (PointAdder_t0243E09B9ECFC05B8DC0DBEE0BC0D931D8225D73* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PointAdder::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAdder_addPoints_m7594A4FAB71A518BA51F28688612F6C6A9A3AD53 (PointAdder_t0243E09B9ECFC05B8DC0DBEE0BC0D931D8225D73* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points.totalPoints += n;
		int32_t L_0 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		int32_t L_1 = ___n0;
		((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void PointAdder::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAdder_OnTriggerEnter_m929FDA486CFA39B0E456F23496DB9BF339CD6612 (PointAdder_t0243E09B9ECFC05B8DC0DBEE0BC0D931D8225D73* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// addPoints(firstPlace);
		int32_t L_4 = __this->___firstPlace_4;
		PointAdder_addPoints_m7594A4FAB71A518BA51F28688612F6C6A9A3AD53(__this, L_4, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void PointAdder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAdder__ctor_m23DBCD5E7921202703A7ED42116EC5C37B1F1DD5 (PointAdder_t0243E09B9ECFC05B8DC0DBEE0BC0D931D8225D73* __this, const RuntimeMethod* method) 
{
	{
		// public int firstPlace = 3;
		__this->___firstPlace_4 = 3;
		// public int secondPlace = 2;
		__this->___secondPlace_5 = 2;
		// public int thirdPlace = 1;
		__this->___thirdPlace_6 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PointDisplay::displayPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointDisplay_displayPoints_mBA3A3BF4E03A6B401B24E264634978384AD8DDDF (PointDisplay_tF168DE9FCC6ECB4BD3F93F2AC7A60D4B0BFA6D04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int recPoints = Points.totalPoints;
		int32_t L_0 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		V_0 = L_0;
		// pointText.text = recPoints.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___pointText_4;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void PointDisplay::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointDisplay_OnTriggerEnter_m5F060CEFFC13C26DAB1846A665259C40ED147B7C (PointDisplay_tF168DE9FCC6ECB4BD3F93F2AC7A60D4B0BFA6D04* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F526BD84D19300C69A9989A21B4A41870C6FD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8E5CC23C1482AE222A84A6FCCD2A0E4DFA5EF5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2073AFAFFD2B1815441248A448202280D15E62E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("gettingTriggered");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD2073AFAFFD2B1815441248A448202280D15E62E, NULL);
		// if(other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.Log("trying to get points");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral99F526BD84D19300C69A9989A21B4A41870C6FD1, NULL);
		// displayPoints();
		PointDisplay_displayPoints_mBA3A3BF4E03A6B401B24E264634978384AD8DDDF(__this, NULL);
		return;
	}

IL_0032:
	{
		// Debug.Log("Didnt get points");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8E5CC23C1482AE222A84A6FCCD2A0E4DFA5EF5C, NULL);
		// }
		return;
	}
}
// System.Void PointDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointDisplay__ctor_m3CECDC15E34C80EC07309121A7559DD7A13997DE (PointDisplay_tF168DE9FCC6ECB4BD3F93F2AC7A60D4B0BFA6D04* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Points::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Points__ctor_m27630D36B2C2A49D4F9A260781CDD1210315BF69 (Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PrizeButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrizeButton_Start_m9B2EC8EE01FADEED148EAE312EACD831637B5A5A (PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// spawnPos = spawnLoc.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___spawnLoc_7;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___spawnPos_9 = L_2;
		// int recPoints = Points.totalPoints;
		int32_t L_3 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		V_0 = L_3;
		// if (pointsRemaining-recPoints < 0) {
		int32_t L_4 = __this->___pointsRemaining_5;
		int32_t L_5 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// pointsRemaining = 10;
		__this->___pointsRemaining_5 = ((int32_t)10);
		// pointText.text = pointsRemaining.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___pointText_4;
		int32_t* L_7 = (&__this->___pointsRemaining_5);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_8);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void PrizeButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrizeButton_Update_m67FFD07017815B6414F3C25A649C4C753DC05B84 (PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PrizeButton::displayPointsRemaining()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrizeButton_displayPointsRemaining_m44A21B3DF17DF3663C8B879D5D696034CB11CC74 (PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int recPoints = Points.totalPoints;
		int32_t L_0 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		V_0 = L_0;
		// pointText.text = (pointsRemaining-recPoints).ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___pointText_4;
		int32_t L_2 = __this->___pointsRemaining_5;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void PrizeButton::spawnPrize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrizeButton_spawnPrize_mD03E34924EA4361AE8D07CA3880A48F8C3C95C53 (PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int randomPrize = Random.Range(0, 12);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)12), NULL);
		V_0 = L_0;
		// Instantiate(prizes[randomPrize], spawnPos, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___prizes_8;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___spawnPos_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PrizeButton::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrizeButton_OnTriggerEnter_mD7ED803156B4F20F156A8E265055B212281F0D7A (PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE45C2C5565E451D6904FA1CC5C69C69585D204A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		// if ((pointsRemaining-Points.totalPoints) <= 0) {
		int32_t L_4 = __this->___pointsRemaining_5;
		int32_t L_5 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) > ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		// pointText.text = "!";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___pointText_4;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		// Debug.Log("spawning random prize");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDE45C2C5565E451D6904FA1CC5C69C69585D204A, NULL);
		// spawnPrize();
		PrizeButton_spawnPrize_mD03E34924EA4361AE8D07CA3880A48F8C3C95C53(__this, NULL);
		// audS = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audS_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audS_6), (void*)L_7);
		// audS.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___audS_6;
		NullCheck(L_8);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_8, NULL);
		// Points.totalPoints = 0;
		((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4 = 0;
		return;
	}

IL_0064:
	{
		// displayPointsRemaining();
		PrizeButton_displayPointsRemaining_m44A21B3DF17DF3663C8B879D5D696034CB11CC74(__this, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void PrizeButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrizeButton__ctor_m83142504EC04AE640DB3A23FDF99598BCE646E8F (PrizeButton_tBAD83AD15888F28C874483E6EAF7B7AA4127B156* __this, const RuntimeMethod* method) 
{
	{
		// private int pointsRemaining = 10;
		__this->___pointsRemaining_5 = ((int32_t)10);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void randomGen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void randomGen_Start_mC503DF1728157A4A999D733E2D4C52FC6AA62E16 (randomGen_t1A2E67FCBADA608B08B85D98F87660BC9A6A580E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void randomGen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void randomGen_Update_mE8737F6C3A66CBE7D099EEE89BC047F98E58E512 (randomGen_t1A2E67FCBADA608B08B85D98F87660BC9A6A580E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void randomGen::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void randomGen_addPoints_m241F55E7FF958624BFB2D6DE293A1C7C5AD737DC (randomGen_t1A2E67FCBADA608B08B85D98F87660BC9A6A580E* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points.totalPoints += n;
		int32_t L_0 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		int32_t L_1 = ___n0;
		((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void randomGen::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void randomGen_OnTriggerEnter_mCAAA5E54DC6F1F3F98D32E66FDBD9503E406E536 (randomGen_t1A2E67FCBADA608B08B85D98F87660BC9A6A580E* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46BD2F97A36857688AE33F960276ADB3730F1CA4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(other.gameObject.tag == "randBox")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral46BD2F97A36857688AE33F960276ADB3730F1CA4, NULL);
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		// int randomPoint = Random.Range(0, 10);
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)10), NULL);
		V_0 = L_4;
		// addPoints(randomPoint);
		int32_t L_5 = V_0;
		randomGen_addPoints_m241F55E7FF958624BFB2D6DE293A1C7C5AD737DC(__this, L_5, NULL);
		// pointDisplay.text = randomPoint.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___pointDisplay_4;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_7);
		// GetComponent<Collider>().enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8;
		L_8 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_8);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_8, (bool)0, NULL);
		// audS = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9;
		L_9 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audS_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audS_5), (void*)L_9);
		// audS.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = __this->___audS_5;
		NullCheck(L_10);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_10, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void randomGen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void randomGen__ctor_m72D5462A142EB8FAAC3C72D70ADD8FF602178D86 (randomGen_t1A2E67FCBADA608B08B85D98F87660BC9A6A580E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneChange::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_Start_mFB366D7209FB423D370118ABA2DB0499DF817403 (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneChange::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_Update_m3014C7D76F9BC54D7F298F5C0FA2E1819F7D9C3D (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneChange::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_OnTriggerEnter_mD38B3F60A90A2DE22B15AFF5BA3B870E96FAA001 (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// SceneManager.LoadScene(sceneToLoad);
		int32_t L_4 = __this->___sceneToLoad_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void SceneChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange__ctor_m4BEE4E939472EAB59441D14F2324EEE353793A1B (SceneChange_tDC4B8B3F05F79F9ADCD2F513172291A8636B4E3D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VelNetPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelNetPlayer_Start_m7E50925689B9109E41A7D3651B7C2D58134F3204 (VelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VelNetPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelNetPlayer_Update_mCD49C6ACFB9827DAC6468BC30AED8BBC618722CF (VelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(myPlayer == null)
		VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* L_0 = __this->___myPlayer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// head.position = myPlayer.head.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___head_5;
		VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* L_3 = __this->___myPlayer_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___head_26;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_5, NULL);
		// head.rotation = myPlayer.head.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___head_5;
		VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* L_7 = __this->___myPlayer_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___head_26;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_9, NULL);
		// leftHand.position = myPlayer.hands[0].transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___leftHand_6;
		VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* L_11 = __this->___myPlayer_4;
		NullCheck(L_11);
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_12 = L_11->___hands_17;
		NullCheck(L_12);
		int32_t L_13 = 0;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_16, NULL);
		// leftHand.rotation = myPlayer.hands[0].transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___leftHand_6;
		VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* L_18 = __this->___myPlayer_4;
		NullCheck(L_18);
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_19 = L_18->___hands_17;
		NullCheck(L_19);
		int32_t L_20 = 0;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_22, NULL);
		NullCheck(L_17);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_23, NULL);
		// rightHand.position = myPlayer.hands[1].transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___rightHand_7;
		VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* L_25 = __this->___myPlayer_4;
		NullCheck(L_25);
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_26 = L_25->___hands_17;
		NullCheck(L_26);
		int32_t L_27 = 1;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_30, NULL);
		// rightHand.rotation = myPlayer.hands[1].transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___rightHand_7;
		VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* L_32 = __this->___myPlayer_4;
		NullCheck(L_32);
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_33 = L_32->___hands_17;
		NullCheck(L_33);
		int32_t L_34 = 1;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_36, NULL);
		NullCheck(L_31);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_31, L_37, NULL);
		// transform.position = myPlayer.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* L_39 = __this->___myPlayer_4;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		NullCheck(L_38);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_38, L_41, NULL);
		// }
		return;
	}
}
// System.Void VelNetPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VelNetPlayer__ctor_mCF39521B7004076B32BE55058A970D191896F7E2 (VelNetPlayer_tE975C26A76DAA52CA831F95341CD572F44894476* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VRGrabbable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRGrabbable_Start_m174E2BA45C67CC6EF984C1ED2B573C83179A0DAB (VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Rigidbody>().maxAngularVelocity = Mathf.Infinity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_0);
		Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6(L_0, (std::numeric_limits<float>::infinity()), NULL);
		// }
		return;
	}
}
// System.Void VRGrabbable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRGrabbable_Update_mDC2F1A4C5C4257169D505490EB0F0EB9057A5D0A (VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VRGrabbable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRGrabbable__ctor_mCBF40C35D60ADB8F33D2EA3BC10A3C09EA62A0C4 (VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VRHand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRHand_Start_m153438C275FFF074BC6BACC89EC063493655A1A6 (VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VRHand::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRHand_Update_m25F464FF9A1A67817BDA86A5548E70E441D3FEAB (VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VRHand::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRHand_OnTriggerEnter_m303008030E0FEA76C36D9C25ED57BB1B0847F5A7 (VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28_m3ADC52B7D269A1758312F7BC7D9DD0D6D9CAA890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6681222872C470B8FCF0E340F9206C0A29682501_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* V_1 = NULL;
	{
		// Rigidbody rb = other.attachedRigidbody;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_0, NULL);
		V_0 = L_1;
		// if(rb == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// VRGrabbable grabbable = rb.GetComponent<VRGrabbable>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = V_0;
		NullCheck(L_4);
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_5;
		L_5 = Component_GetComponent_TisVRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28_m3ADC52B7D269A1758312F7BC7D9DD0D6D9CAA890(L_4, Component_GetComponent_TisVRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28_m3ADC52B7D269A1758312F7BC7D9DD0D6D9CAA890_RuntimeMethod_var);
		V_1 = L_5;
		// if(grabbable == null) {
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// grabbables.Add(grabbable);
		List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* L_8 = __this->___grabbables_4;
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_9 = V_1;
		NullCheck(L_8);
		List_1_Add_m6681222872C470B8FCF0E340F9206C0A29682501_inline(L_8, L_9, List_1_Add_m6681222872C470B8FCF0E340F9206C0A29682501_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRHand::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRHand_OnTriggerExit_mDD894B66D8C200C525D113FFC4540E58C53DDFF6 (VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28_m3ADC52B7D269A1758312F7BC7D9DD0D6D9CAA890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF43D64241CBAFC8BC66C604B5F9BDB29DD948AA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* V_1 = NULL;
	{
		// Rigidbody rb = other.attachedRigidbody;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_0, NULL);
		V_0 = L_1;
		// if (rb == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// VRGrabbable grabbable = rb.GetComponent<VRGrabbable>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = V_0;
		NullCheck(L_4);
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_5;
		L_5 = Component_GetComponent_TisVRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28_m3ADC52B7D269A1758312F7BC7D9DD0D6D9CAA890(L_4, Component_GetComponent_TisVRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28_m3ADC52B7D269A1758312F7BC7D9DD0D6D9CAA890_RuntimeMethod_var);
		V_1 = L_5;
		// if (grabbable == null)
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// grabbables.Remove(grabbable);
		List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* L_8 = __this->___grabbables_4;
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_mF43D64241CBAFC8BC66C604B5F9BDB29DD948AA3(L_8, L_9, List_1_Remove_mF43D64241CBAFC8BC66C604B5F9BDB29DD948AA3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRHand__ctor_m91205E8EAA89DECEB325F446A259D4A6E6C64640 (VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB29924D8B1CEC68261645BDCD9F96B8B90477739_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<VRGrabbable> grabbables = new List<VRGrabbable>();
		List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* L_0 = (List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44*)il2cpp_codegen_object_new(List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB29924D8B1CEC68261645BDCD9F96B8B90477739(L_0, List_1__ctor_mB29924D8B1CEC68261645BDCD9F96B8B90477739_RuntimeMethod_var);
		__this->___grabbables_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabbables_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VRPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRPlayer_Start_mFB01DCDB27A09438538DE7518AA8FB804E0FE16F (VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 VRPlayer::getFootPositionWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VRPlayer_getFootPositionWorld_m6E4C0699BA9C2FA2B6958FC1B171B54F6604663A (VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 headInWorld = head.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___head_26;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		// Vector3 playCenter = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		// Vector3 feetInWorld = headInWorld;
		V_1 = L_1;
		// feetInWorld.y = playCenter.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		(&V_1)->___y_3 = L_5;
		// return feetInWorld;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		return L_6;
	}
}
// System.Void VRPlayer::doTeleport(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRPlayer_doTeleport_mD904230590C4F1CC12A86543EC5DEDCB18293129 (VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetFootPosWorld0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 offset = targetFootPosWorld - getFootPositionWorld();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetFootPosWorld0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VRPlayer_getFootPositionWorld_m6E4C0699BA9C2FA2B6958FC1B171B54F6604663A(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// transform.position = transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_7, NULL);
		// }
		return;
	}
}
// System.Void VRPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRPlayer_Update_m705BEE7B27053F6886F773C26A6913F70C7A941A (VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m58948CF8406D428E28549A006D3CD2EEF3F4F3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m315787EC48F324B6E493A9FCE37B6763DC6CB89F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_14 = NULL;
	int32_t V_15 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_18;
	memset((&V_18), 0, sizeof(V_18));
	VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* V_19 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_21;
	memset((&V_21), 0, sizeof(V_21));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_22;
	memset((&V_22), 0, sizeof(V_22));
	float V_23 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_24;
	memset((&V_24), 0, sizeof(V_24));
	float G_B14_0 = 0.0f;
	{
		// gripValues[0] = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___gripValues_14;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8(4, ((int32_t)-2147483648LL), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_1);
		// gripValues[1] = OVRInput.Get(OVRInput.Axis1D.SecondaryHandTrigger);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___gripValues_14;
		float L_3;
		L_3 = OVRInput_Get_m1FD85568F358C43019E09E48A7BEBD6CD7F7E5D8(8, ((int32_t)-2147483648LL), NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_3);
		// joyValues[0] = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = __this->___joyValues_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(1, ((int32_t)-2147483648LL), NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_5);
		// joyValues[1] = OVRInput.Get(OVRInput.Axis2D.SecondaryThumbstick);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = __this->___joyValues_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(2, ((int32_t)-2147483648LL), NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_7);
		// Vector3[] displacements = new Vector3[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_8;
		// for(int i = 0; i < 2; i++) //the two hands
		V_1 = 0;
		goto IL_05c8;
	}

IL_0062:
	{
		// foreach (Transform t in teleporterStartPoses[i])
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = __this->___teleporterStartPoses_21;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_12, NULL);
		V_2 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0091:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_14 = V_2;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_15 = V_3;
					if (!L_15)
					{
						goto IL_00a1;
					}
				}
				{
					RuntimeObject* L_16 = V_3;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
				}

IL_00a1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0087_1;
			}

IL_0072_1:
			{
				// foreach (Transform t in teleporterStartPoses[i])
				RuntimeObject* L_17 = V_2;
				NullCheck(L_17);
				RuntimeObject* L_18;
				L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				// GameObject.Destroy(t.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_18, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_18, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
			}

IL_0087_1:
			{
				// foreach (Transform t in teleporterStartPoses[i])
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0072_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		// if (snapStates[i] == SNAP_STATE.WAITING)
		SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00* L_22 = __this->___snapStates_13;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (int32_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_011c;
		}
	}
	{
		// float lr = joyValues[i].x;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_26 = __this->___joyValues_11;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		float L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___x_0;
		V_4 = L_28;
		// if (Mathf.Abs(lr) > snapActivate)
		float L_29 = V_4;
		float L_30;
		L_30 = fabsf(L_29);
		float L_31 = __this->___snapActivate_4;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_014d;
		}
	}
	{
		// snapStates[i] = SNAP_STATE.ACTIVE;
		SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00* L_32 = __this->___snapStates_13;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)0);
		// float rotateAmount = lr > 0 ? snapDegree : -snapDegree;
		float L_34 = V_4;
		if ((((float)L_34) > ((float)(0.0f))))
		{
			goto IL_00ea;
		}
	}
	{
		float L_35 = __this->___snapDegree_6;
		G_B14_0 = ((-L_35));
		goto IL_00f0;
	}

IL_00ea:
	{
		float L_36 = __this->___snapDegree_6;
		G_B14_0 = L_36;
	}

IL_00f0:
	{
		V_5 = G_B14_0;
		// Vector3 currentFootPosition = getFootPositionWorld();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = VRPlayer_getFootPositionWorld_m6E4C0699BA9C2FA2B6958FC1B171B54F6604663A(__this, NULL);
		V_6 = L_37;
		// transform.Rotate(0, rotateAmount, 0, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_39 = V_5;
		NullCheck(L_38);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_38, (0.0f), L_39, (0.0f), 1, NULL);
		// doTeleport(currentFootPosition); //moves back to where we were
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_6;
		VRPlayer_doTeleport_mD904230590C4F1CC12A86543EC5DEDCB18293129(__this, L_40, NULL);
		goto IL_014d;
	}

IL_011c:
	{
		// else if (snapStates[i] == SNAP_STATE.ACTIVE)
		SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00* L_41 = __this->___snapStates_13;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		int32_t L_44 = (int32_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if (L_44)
		{
			goto IL_014d;
		}
	}
	{
		// float lr = joyValues[i].x;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = __this->___joyValues_11;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		float L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___x_0;
		// if (Mathf.Abs(lr) < snapDeactivate)
		float L_48;
		L_48 = fabsf(L_47);
		float L_49 = __this->___snapDeactivate_5;
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_014d;
		}
	}
	{
		// snapStates[i] = SNAP_STATE.WAITING;
		SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00* L_50 = __this->___snapStates_13;
		int32_t L_51 = V_1;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (int32_t)1);
	}

IL_014d:
	{
		// if (teleportStates[i] == TELEPORT_STATE.WAITING)
		TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79* L_52 = __this->___teleportStates_12;
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (int32_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_0182;
		}
	}
	{
		// if (joyValues[i].y > teleportThresholdActivate)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_56 = __this->___joyValues_11;
		int32_t L_57 = V_1;
		NullCheck(L_56);
		float L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___y_1;
		float L_59 = __this->___teleportThresholdActivate_7;
		if ((!(((float)L_58) > ((float)L_59))))
		{
			goto IL_036f;
		}
	}
	{
		// teleportStates[i] = TELEPORT_STATE.ACTIVE;
		TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79* L_60 = __this->___teleportStates_12;
		int32_t L_61 = V_1;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (int32_t)0);
		goto IL_036f;
	}

IL_0182:
	{
		// else if(teleportStates[i] == TELEPORT_STATE.ACTIVE)
		TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79* L_62 = __this->___teleportStates_12;
		int32_t L_63 = V_1;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		int32_t L_65 = (int32_t)(L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		if (L_65)
		{
			goto IL_036f;
		}
	}
	{
		// if (joyValues[i].y < teleportThresholdDeactivate)
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_66 = __this->___joyValues_11;
		int32_t L_67 = V_1;
		NullCheck(L_66);
		float L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___y_1;
		float L_69 = __this->___teleportThresholdDeactivate_8;
		if ((!(((float)L_68) < ((float)L_69))))
		{
			goto IL_01e6;
		}
	}
	{
		// if (teleporterValid[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_70 = __this->___teleporterValid_23;
		int32_t L_71 = V_1;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint8_t L_73 = (uint8_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if (!L_73)
		{
			goto IL_01c5;
		}
	}
	{
		// doTeleport(teleporterTargetPoses[i].position);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_74 = __this->___teleporterTargetPoses_22;
		int32_t L_75 = V_1;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		VRPlayer_doTeleport_mD904230590C4F1CC12A86543EC5DEDCB18293129(__this, L_78, NULL);
	}

IL_01c5:
	{
		// teleportStates[i] = TELEPORT_STATE.WAITING;
		TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79* L_79 = __this->___teleportStates_12;
		int32_t L_80 = V_1;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (int32_t)1);
		// teleporterTargetPoses[i].gameObject.SetActive(false);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_81 = __this->___teleporterTargetPoses_22;
		int32_t L_82 = V_1;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85;
		L_85 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_84, NULL);
		NullCheck(L_85);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_85, (bool)0, NULL);
		goto IL_036f;
	}

IL_01e6:
	{
		// Vector3 currentPosition = teleporterStartPoses[i].position;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_86 = __this->___teleporterStartPoses_21;
		int32_t L_87 = V_1;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_89, NULL);
		V_7 = L_90;
		// Vector3 currentVelocity = teleporterStartPoses[i].forward * teleporterStartSpeed;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_91 = __this->___teleporterStartPoses_21;
		int32_t L_92 = V_1;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_94, NULL);
		float L_96 = __this->___teleporterStartSpeed_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_95, L_96, NULL);
		V_8 = L_97;
		// float currentDistance = 0;
		V_9 = (0.0f);
		// float deltaTime = .02f;
		V_10 = (0.0199999996f);
		// teleporterValid[i] = false;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_98 = __this->___teleporterValid_23;
		int32_t L_99 = V_1;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (bool)0);
		goto IL_0358;
	}

IL_022b:
	{
		// Vector3 nextPosition = currentPosition + currentVelocity * deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_8;
		float L_102 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_101, L_102, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_100, L_103, NULL);
		V_11 = L_104;
		// Vector3 nextVelocity = currentVelocity + -9.81f * Vector3.up * deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((-9.81000042f), L_106, NULL);
		float L_108 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_107, L_108, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_105, L_109, NULL);
		V_12 = L_110;
		// Vector3 between = nextPosition - currentPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_111, L_112, NULL);
		V_13 = L_113;
		// RaycastHit[] hits = Physics.RaycastAll(currentPosition, between.normalized, between.magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_13), NULL);
		float L_116;
		L_116 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_13), NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_117;
		L_117 = Physics_RaycastAll_mDCBE530EF2ACD21EAADEA829259291D7327BC80E(L_114, L_115, L_116, NULL);
		// teleporterTargetPoses[i].gameObject.SetActive(false); //deactivate every frame
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_118 = __this->___teleporterTargetPoses_22;
		int32_t L_119 = V_1;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_121);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122;
		L_122 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_121, NULL);
		NullCheck(L_122);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_122, (bool)0, NULL);
		// foreach (RaycastHit h in hits)
		V_14 = L_117;
		V_15 = 0;
		goto IL_0300;
	}

IL_0296:
	{
		// foreach (RaycastHit h in hits)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_123 = V_14;
		int32_t L_124 = V_15;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_16 = L_126;
		// if (h.normal.y > .9f) //partially broken, will go through slanted surfaces
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_16), NULL);
		float L_128 = L_127.___y_3;
		if ((!(((float)L_128) > ((float)(0.899999976f)))))
		{
			goto IL_02fa;
		}
	}
	{
		// teleporterTargetPoses[i].position = h.point;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_129 = __this->___teleporterTargetPoses_22;
		int32_t L_130 = V_1;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_16), NULL);
		NullCheck(L_132);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_132, L_133, NULL);
		// teleporterTargetPoses[i].up = h.normal;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_134 = __this->___teleporterTargetPoses_22;
		int32_t L_135 = V_1;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_16), NULL);
		NullCheck(L_137);
		Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554(L_137, L_138, NULL);
		// teleporterValid[i] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_139 = __this->___teleporterValid_23;
		int32_t L_140 = V_1;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_140), (bool)1);
		// teleporterTargetPoses[i].gameObject.SetActive(true); //deactivate every frame
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_141 = __this->___teleporterTargetPoses_22;
		int32_t L_142 = V_1;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_145;
		L_145 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_144, NULL);
		NullCheck(L_145);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_145, (bool)1, NULL);
		// break;
		goto IL_0308;
	}

IL_02fa:
	{
		int32_t L_146 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_146, 1));
	}

IL_0300:
	{
		// foreach (RaycastHit h in hits)
		int32_t L_147 = V_15;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_148 = V_14;
		NullCheck(L_148);
		if ((((int32_t)L_147) < ((int32_t)((int32_t)(((RuntimeArray*)L_148)->max_length)))))
		{
			goto IL_0296;
		}
	}

IL_0308:
	{
		// GameObject point = GameObject.Instantiate(teleporterArcPointPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149 = __this->___teleporterArcPointPrefab_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_150;
		L_150 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_149, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// point.transform.parent = teleporterStartPoses[i];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_151 = L_150;
		NullCheck(L_151);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_152;
		L_152 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_151, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_153 = __this->___teleporterStartPoses_21;
		int32_t L_154 = V_1;
		NullCheck(L_153);
		int32_t L_155 = L_154;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		NullCheck(L_152);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_152, L_156, NULL);
		// point.transform.position = nextPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_157 = L_151;
		NullCheck(L_157);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_158;
		L_158 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_157, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159 = V_11;
		NullCheck(L_158);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_158, L_159, NULL);
		// point.transform.forward = nextVelocity.normalized;
		NullCheck(L_157);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_160;
		L_160 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_157, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161;
		L_161 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		NullCheck(L_160);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_160, L_161, NULL);
		// currentDistance += between.magnitude;
		float L_162 = V_9;
		float L_163;
		L_163 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_13), NULL);
		V_9 = ((float)il2cpp_codegen_add(L_162, L_163));
		// currentPosition = nextPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164 = V_11;
		V_7 = L_164;
		// currentVelocity = nextVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165 = V_12;
		V_8 = L_165;
	}

IL_0358:
	{
		// while (currentDistance < teleporterMaxDistance && !teleporterValid[i])
		float L_166 = V_9;
		float L_167 = __this->___teleporterMaxDistance_25;
		if ((!(((float)L_166) < ((float)L_167))))
		{
			goto IL_036f;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_168 = __this->___teleporterValid_23;
		int32_t L_169 = V_1;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		uint8_t L_171 = (uint8_t)(L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		if (!L_171)
		{
			goto IL_022b;
		}
	}

IL_036f:
	{
		// displacements[i] = Vector3.zero;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_172 = V_0;
		int32_t L_173 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		L_174 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_173), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_174);
		// if (gripStates[i] == GRIP_STATE.AIR) //we are gripping the air, handle movement and release
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_175 = __this->___gripStates_15;
		int32_t L_176 = V_1;
		NullCheck(L_175);
		int32_t L_177 = L_176;
		int32_t L_178 = (int32_t)(L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		if ((!(((uint32_t)L_178) == ((uint32_t)2))))
		{
			goto IL_03fb;
		}
	}
	{
		// if(gripValues[i] < gripThresholdDeactivate)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_179 = __this->___gripValues_14;
		int32_t L_180 = V_1;
		NullCheck(L_179);
		int32_t L_181 = L_180;
		float L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		float L_183 = __this->___gripThresholdDeactivate_10;
		if ((!(((float)L_182) < ((float)L_183))))
		{
			goto IL_03a4;
		}
	}
	{
		// gripStates[i] = GRIP_STATE.OPEN;
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_184 = __this->___gripStates_15;
		int32_t L_185 = V_1;
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(L_185), (int32_t)0);
		goto IL_05c4;
	}

IL_03a4:
	{
		// Vector3 handInTracking = transform.worldToLocalMatrix.MultiplyPoint(hands[i].transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_186;
		L_186 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_186);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_187;
		L_187 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_186, NULL);
		V_18 = L_187;
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_188 = __this->___hands_17;
		int32_t L_189 = V_1;
		NullCheck(L_188);
		int32_t L_190 = L_189;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_191 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		NullCheck(L_191);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_192;
		L_192 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_191, NULL);
		NullCheck(L_192);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
		L_193 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_192, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_18), L_193, NULL);
		// Vector3 between = handInTracking - gripLocations[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_195 = __this->___gripLocations_16;
		int32_t L_196 = V_1;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199;
		L_199 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_194, L_198, NULL);
		V_17 = L_199;
		// displacements[i] = transform.TransformVector(-between);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_200 = V_0;
		int32_t L_201 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_202;
		L_202 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204;
		L_204 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_203, NULL);
		NullCheck(L_202);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205;
		L_205 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_202, L_204, NULL);
		NullCheck(L_200);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(L_201), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_205);
		goto IL_05c4;
	}

IL_03fb:
	{
		// else if (gripStates[i] == GRIP_STATE.OBJECT)
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_206 = __this->___gripStates_15;
		int32_t L_207 = V_1;
		NullCheck(L_206);
		int32_t L_208 = L_207;
		int32_t L_209 = (int32_t)(L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		if ((!(((uint32_t)L_209) == ((uint32_t)1))))
		{
			goto IL_04cf;
		}
	}
	{
		// if (gripValues[i] < gripThresholdDeactivate)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_210 = __this->___gripValues_14;
		int32_t L_211 = V_1;
		NullCheck(L_210);
		int32_t L_212 = L_211;
		float L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		float L_214 = __this->___gripThresholdDeactivate_10;
		if ((!(((float)L_213) < ((float)L_214))))
		{
			goto IL_0427;
		}
	}
	{
		// gripStates[i] = GRIP_STATE.OPEN;
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_215 = __this->___gripStates_15;
		int32_t L_216 = V_1;
		NullCheck(L_215);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(L_216), (int32_t)0);
		goto IL_05c4;
	}

IL_0427:
	{
		// VRGrabbable g = grabbedObjects[i];
		VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470* L_217 = __this->___grabbedObjects_19;
		int32_t L_218 = V_1;
		NullCheck(L_217);
		int32_t L_219 = L_218;
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_220 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		V_19 = L_220;
		// Rigidbody rb = g.GetComponent<Rigidbody>();
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_221 = V_19;
		NullCheck(L_221);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_222;
		L_222 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_221, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		// Vector3 between = hands[i].grabOffset.position - g.transform.position;
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_223 = __this->___hands_17;
		int32_t L_224 = V_1;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		NullCheck(L_226);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_227 = L_226->___grabOffset_5;
		NullCheck(L_227);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_228;
		L_228 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_227, NULL);
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_229 = V_19;
		NullCheck(L_229);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_230;
		L_230 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_229, NULL);
		NullCheck(L_230);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_231;
		L_231 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_230, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_232;
		L_232 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_228, L_231, NULL);
		V_20 = L_232;
		// Vector3 direction = between.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_233;
		L_233 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_20), NULL);
		// rb.velocity = between / Time.deltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_234 = L_222;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_235 = V_20;
		float L_236;
		L_236 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_237;
		L_237 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_235, L_236, NULL);
		NullCheck(L_234);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_234, L_237, NULL);
		// Quaternion betweenRot = hands[i].grabOffset.rotation * Quaternion.Inverse(g.transform.rotation);
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_238 = __this->___hands_17;
		int32_t L_239 = V_1;
		NullCheck(L_238);
		int32_t L_240 = L_239;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_241 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		NullCheck(L_241);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_242 = L_241->___grabOffset_5;
		NullCheck(L_242);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_243;
		L_243 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_242, NULL);
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_244 = V_19;
		NullCheck(L_244);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_245;
		L_245 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_244, NULL);
		NullCheck(L_245);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_246;
		L_246 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_245, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_247;
		L_247 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_246, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_248;
		L_248 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_243, L_247, NULL);
		V_21 = L_248;
		// betweenRot.ToAngleAxis(out angle, out axis);
		Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline((&V_21), (&V_23), (&V_22), NULL);
		// rb.angularVelocity = angle * Mathf.Deg2Rad * axis / Time.deltaTime;
		float L_249 = V_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_250 = V_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_251;
		L_251 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_249, (0.0174532924f))), L_250, NULL);
		float L_252;
		L_252 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_253;
		L_253 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_251, L_252, NULL);
		NullCheck(L_234);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_234, L_253, NULL);
		goto IL_05c4;
	}

IL_04cf:
	{
		// if(gripValues[i] > gripThresholdActivate)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_254 = __this->___gripValues_14;
		int32_t L_255 = V_1;
		NullCheck(L_254);
		int32_t L_256 = L_255;
		float L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		float L_258 = __this->___gripThresholdActivate_9;
		if ((!(((float)L_257) > ((float)L_258))))
		{
			goto IL_05c4;
		}
	}
	{
		// if(hands[i].grabbables.Count == 0) //nothing to grab
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_259 = __this->___hands_17;
		int32_t L_260 = V_1;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		NullCheck(L_262);
		List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* L_263 = L_262->___grabbables_4;
		NullCheck(L_263);
		int32_t L_264;
		L_264 = List_1_get_Count_m58948CF8406D428E28549A006D3CD2EEF3F4F3D4_inline(L_263, List_1_get_Count_m58948CF8406D428E28549A006D3CD2EEF3F4F3D4_RuntimeMethod_var);
		if (L_264)
		{
			goto IL_054e;
		}
	}
	{
		// gripStates[i] = GRIP_STATE.AIR; //now we are gripping air
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_265 = __this->___gripStates_15;
		int32_t L_266 = V_1;
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(L_266), (int32_t)2);
		// Vector3 handInTracking = transform.worldToLocalMatrix.MultiplyPoint(hands[i].transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_267;
		L_267 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_267);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_268;
		L_268 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_267, NULL);
		V_18 = L_268;
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_269 = __this->___hands_17;
		int32_t L_270 = V_1;
		NullCheck(L_269);
		int32_t L_271 = L_270;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_272 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		NullCheck(L_272);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_273;
		L_273 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_272, NULL);
		NullCheck(L_273);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_274;
		L_274 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_273, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_275;
		L_275 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_18), L_274, NULL);
		V_24 = L_275;
		// gripLocations[i] = handInTracking;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_276 = __this->___gripLocations_16;
		int32_t L_277 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_278 = V_24;
		NullCheck(L_276);
		(L_276)->SetAt(static_cast<il2cpp_array_size_t>(L_277), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_278);
		// cameraRigGripLocation[i] = this.transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_279 = __this->___cameraRigGripLocation_18;
		int32_t L_280 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_281;
		L_281 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_281);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_282;
		L_282 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_281, NULL);
		NullCheck(L_279);
		(L_279)->SetAt(static_cast<il2cpp_array_size_t>(L_280), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_282);
		goto IL_05c4;
	}

IL_054e:
	{
		// gripStates[i] = GRIP_STATE.OBJECT;
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_283 = __this->___gripStates_15;
		int32_t L_284 = V_1;
		NullCheck(L_283);
		(L_283)->SetAt(static_cast<il2cpp_array_size_t>(L_284), (int32_t)1);
		// grabbedObjects[i] = hands[i].grabbables[0]; //just grab the first objecct
		VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470* L_285 = __this->___grabbedObjects_19;
		int32_t L_286 = V_1;
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_287 = __this->___hands_17;
		int32_t L_288 = V_1;
		NullCheck(L_287);
		int32_t L_289 = L_288;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_290 = (L_287)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		NullCheck(L_290);
		List_1_tBECBD7D5FE74BB85C819C25C7448F3E7A343EC44* L_291 = L_290->___grabbables_4;
		NullCheck(L_291);
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_292;
		L_292 = List_1_get_Item_m315787EC48F324B6E493A9FCE37B6763DC6CB89F(L_291, 0, List_1_get_Item_m315787EC48F324B6E493A9FCE37B6763DC6CB89F_RuntimeMethod_var);
		NullCheck(L_285);
		ArrayElementTypeCheck (L_285, L_292);
		(L_285)->SetAt(static_cast<il2cpp_array_size_t>(L_286), (VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28*)L_292);
		// hands[i].grabOffset.transform.position = grabbedObjects[i].transform.position;
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_293 = __this->___hands_17;
		int32_t L_294 = V_1;
		NullCheck(L_293);
		int32_t L_295 = L_294;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_296 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		NullCheck(L_296);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_297 = L_296->___grabOffset_5;
		NullCheck(L_297);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_298;
		L_298 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_297, NULL);
		VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470* L_299 = __this->___grabbedObjects_19;
		int32_t L_300 = V_1;
		NullCheck(L_299);
		int32_t L_301 = L_300;
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_302 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		NullCheck(L_302);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_303;
		L_303 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_302, NULL);
		NullCheck(L_303);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_304;
		L_304 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_303, NULL);
		NullCheck(L_298);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_298, L_304, NULL);
		// hands[i].grabOffset.transform.rotation = grabbedObjects[i].transform.rotation;
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_305 = __this->___hands_17;
		int32_t L_306 = V_1;
		NullCheck(L_305);
		int32_t L_307 = L_306;
		VRHand_tDB266215851B132217FA77D46CA531CA4C6B964A* L_308 = (L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		NullCheck(L_308);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_309 = L_308->___grabOffset_5;
		NullCheck(L_309);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_310;
		L_310 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_309, NULL);
		VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470* L_311 = __this->___grabbedObjects_19;
		int32_t L_312 = V_1;
		NullCheck(L_311);
		int32_t L_313 = L_312;
		VRGrabbable_t6C6E2A3DEC4BABDFFB625E6C5066B5F472168D28* L_314 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		NullCheck(L_314);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_315;
		L_315 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_314, NULL);
		NullCheck(L_315);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_316;
		L_316 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_315, NULL);
		NullCheck(L_310);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_310, L_316, NULL);
	}

IL_05c4:
	{
		// for(int i = 0; i < 2; i++) //the two hands
		int32_t L_317 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_317, 1));
	}

IL_05c8:
	{
		// for(int i = 0; i < 2; i++) //the two hands
		int32_t L_318 = V_1;
		if ((((int32_t)L_318) < ((int32_t)2)))
		{
			goto IL_0062;
		}
	}
	{
		// if(gripStates[0] == GRIP_STATE.AIR && gripStates[1] == GRIP_STATE.AIR)
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_319 = __this->___gripStates_15;
		NullCheck(L_319);
		int32_t L_320 = 0;
		int32_t L_321 = (int32_t)(L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		if ((!(((uint32_t)L_321) == ((uint32_t)2))))
		{
			goto IL_0630;
		}
	}
	{
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_322 = __this->___gripStates_15;
		NullCheck(L_322);
		int32_t L_323 = 1;
		int32_t L_324 = (int32_t)(L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_323));
		if ((!(((uint32_t)L_324) == ((uint32_t)2))))
		{
			goto IL_0630;
		}
	}
	{
		// this.transform.position = (cameraRigGripLocation[0] + displacements[0] + cameraRigGripLocation[1] + displacements[1]) / 2.0f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_325;
		L_325 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_326 = __this->___cameraRigGripLocation_18;
		NullCheck(L_326);
		int32_t L_327 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_328 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_329 = V_0;
		NullCheck(L_329);
		int32_t L_330 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_332;
		L_332 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_328, L_331, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_333 = __this->___cameraRigGripLocation_18;
		NullCheck(L_333);
		int32_t L_334 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_335 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_336;
		L_336 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_332, L_335, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_337 = V_0;
		NullCheck(L_337);
		int32_t L_338 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_339 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_340;
		L_340 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_336, L_339, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_341;
		L_341 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_340, (2.0f), NULL);
		NullCheck(L_325);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_325, L_341, NULL);
		return;
	}

IL_0630:
	{
		// }else if (gripStates[0] == GRIP_STATE.AIR)
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_342 = __this->___gripStates_15;
		NullCheck(L_342);
		int32_t L_343 = 0;
		int32_t L_344 = (int32_t)(L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		if ((!(((uint32_t)L_344) == ((uint32_t)2))))
		{
			goto IL_065f;
		}
	}
	{
		// this.transform.position = cameraRigGripLocation[0] + displacements[0];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_345;
		L_345 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_346 = __this->___cameraRigGripLocation_18;
		NullCheck(L_346);
		int32_t L_347 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_348 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_349 = V_0;
		NullCheck(L_349);
		int32_t L_350 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_352;
		L_352 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_348, L_351, NULL);
		NullCheck(L_345);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_345, L_352, NULL);
		return;
	}

IL_065f:
	{
		// else if (gripStates[1] == GRIP_STATE.AIR)
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_353 = __this->___gripStates_15;
		NullCheck(L_353);
		int32_t L_354 = 1;
		int32_t L_355 = (int32_t)(L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		if ((!(((uint32_t)L_355) == ((uint32_t)2))))
		{
			goto IL_068d;
		}
	}
	{
		// this.transform.position = cameraRigGripLocation[1] + displacements[1];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_356;
		L_356 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_357 = __this->___cameraRigGripLocation_18;
		NullCheck(L_357);
		int32_t L_358 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_359 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_360 = V_0;
		NullCheck(L_360);
		int32_t L_361 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_362 = (L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_363;
		L_363 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_359, L_362, NULL);
		NullCheck(L_356);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_356, L_363, NULL);
	}

IL_068d:
	{
		// }
		return;
	}
}
// System.Void VRPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRPlayer__ctor_mFBB47B8004108CF9ECF25853DDB892E025B0C6FB (VRPlayer_tFC9FD32AA46450B940D66A9E1E3E4658B632AAD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2[] joyValues = new Vector2[2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___joyValues_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joyValues_11), (void*)L_0);
		// public TELEPORT_STATE[] teleportStates = new TELEPORT_STATE[] { TELEPORT_STATE.WAITING, TELEPORT_STATE.WAITING };
		TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79* L_1 = (TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79*)(TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79*)SZArrayNew(TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79_il2cpp_TypeInfo_var, (uint32_t)2);
		TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		TELEPORT_STATEU5BU5D_tC0C129D2489ECB1DD1E726E5B1D9768EA4911E79* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		__this->___teleportStates_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___teleportStates_12), (void*)L_3);
		// public SNAP_STATE[] snapStates = new SNAP_STATE[] { SNAP_STATE.WAITING, SNAP_STATE.WAITING };
		SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00* L_4 = (SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00*)(SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00*)SZArrayNew(SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00_il2cpp_TypeInfo_var, (uint32_t)2);
		SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		SNAP_STATEU5BU5D_tA98C4075637EEBA1AFDC377B0C69994A2DCB2E00* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		__this->___snapStates_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___snapStates_13), (void*)L_6);
		// public float[] gripValues = new float[2] { 0, 0 };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___gripValues_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gripValues_14), (void*)L_7);
		// public GRIP_STATE[] gripStates = new GRIP_STATE[2] { GRIP_STATE.OPEN, GRIP_STATE.OPEN };
		GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B* L_8 = (GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B*)(GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B*)SZArrayNew(GRIP_STATEU5BU5D_t87B63099435361B0A5E35AFEC5A13B363BFE8C5B_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___gripStates_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gripStates_15), (void*)L_8);
		// public Vector3[] gripLocations = new Vector3[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___gripLocations_16 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gripLocations_16), (void*)L_9);
		// public VRHand[] hands = new VRHand[2];
		VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382* L_10 = (VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382*)(VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382*)SZArrayNew(VRHandU5BU5D_t6B2B7065427D6D2CC1BE729E112987816B150382_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___hands_17 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hands_17), (void*)L_10);
		// Vector3[] cameraRigGripLocation = new Vector3[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___cameraRigGripLocation_18 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraRigGripLocation_18), (void*)L_11);
		// public VRGrabbable[] grabbedObjects = new VRGrabbable[2] { null, null };
		VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470* L_12 = (VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470*)(VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470*)SZArrayNew(VRGrabbableU5BU5D_t14977CD0C68271DCBF6CE1BC23FCE74E99D06470_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___grabbedObjects_19 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grabbedObjects_19), (void*)L_12);
		// public Transform[] teleporterStartPoses = new Transform[2];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___teleporterStartPoses_21 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___teleporterStartPoses_21), (void*)L_13);
		// public Transform[] teleporterTargetPoses = new Transform[2];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___teleporterTargetPoses_22 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___teleporterTargetPoses_22), (void*)L_14);
		// public bool[] teleporterValid = new bool[2];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_15 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___teleporterValid_23 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___teleporterValid_23), (void*)L_15);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void firstFloor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void firstFloor_Start_mDE0EBF1F592461C6AADC81786959BE5B72DDEDAD (firstFloor_t3666C341582FB31E775C79F61B26D32FAECD00E1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void firstFloor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void firstFloor_Update_m0512B94E4709C9F8C40D4E33963F5529F6C68B81 (firstFloor_t3666C341582FB31E775C79F61B26D32FAECD00E1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void firstFloor::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void firstFloor_addPoints_m70216DA018E4A5FBB7FA21A51D9A80023C4E6E19 (firstFloor_t3666C341582FB31E775C79F61B26D32FAECD00E1* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points.totalPoints += n;
		int32_t L_0 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		int32_t L_1 = ___n0;
		((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void firstFloor::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void firstFloor_OnTriggerEnter_mD075F74A1667BDA3A3B72F495AA91C83437774BF (firstFloor_t3666C341582FB31E775C79F61B26D32FAECD00E1* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other.gameObject.tag == "rock")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94, NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// int newPoint = 3;
		V_0 = 3;
		// addPoints(newPoint);
		int32_t L_4 = V_0;
		firstFloor_addPoints_m70216DA018E4A5FBB7FA21A51D9A80023C4E6E19(__this, L_4, NULL);
		// pntDisplay.text = newPoint.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___pntDisplay_4;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_6);
		// GetComponent<Collider>().enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_7);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_7, (bool)0, NULL);
		// audioS = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8;
		L_8 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioS_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioS_5), (void*)L_8);
		// audioS.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___audioS_5;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void firstFloor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void firstFloor__ctor_m1F88313E3798451C850AA2FB069A9C651E5225BE (firstFloor_t3666C341582FB31E775C79F61B26D32FAECD00E1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void secondFloor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secondFloor_Start_mD9192A3650791929B323FA537E1118E9F1ADCAB5 (secondFloor_tF11F06BA1D256EA827F5663423BBE02748A3BC82* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void secondFloor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secondFloor_Update_m0AEA610F3F361FC351AB54B265F057B55BF4639A (secondFloor_tF11F06BA1D256EA827F5663423BBE02748A3BC82* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void secondFloor::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secondFloor_addPoints_mF92130780031B6978E713712D32A674B9F446E58 (secondFloor_tF11F06BA1D256EA827F5663423BBE02748A3BC82* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points.totalPoints += n;
		int32_t L_0 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		int32_t L_1 = ___n0;
		((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void secondFloor::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secondFloor_OnTriggerEnter_mCA785182FEC989E58BD1148B6978C437A36049E2 (secondFloor_tF11F06BA1D256EA827F5663423BBE02748A3BC82* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other.gameObject.tag == "rock")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94, NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// int newPoint = 2;
		V_0 = 2;
		// addPoints(newPoint);
		int32_t L_4 = V_0;
		secondFloor_addPoints_mF92130780031B6978E713712D32A674B9F446E58(__this, L_4, NULL);
		// pntDisplay.text = newPoint.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___pntDisplay_4;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_6);
		// GetComponent<Collider>().enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_7);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_7, (bool)0, NULL);
		// audioS = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8;
		L_8 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioS_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioS_5), (void*)L_8);
		// audioS.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___audioS_5;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void secondFloor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void secondFloor__ctor_m129720C7C1865585B833597171638880B41AE3EF (secondFloor_tF11F06BA1D256EA827F5663423BBE02748A3BC82* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void thirdFloor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thirdFloor_Start_m85FE005C70A26F57F3B7845BF82D9A5642E8C99B (thirdFloor_t33DD42D65D665A432161FD19FA3126703D5272C8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void thirdFloor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thirdFloor_Update_m16F8E35BDB7A3B1B919243E068B72D75CDD4B2D9 (thirdFloor_t33DD42D65D665A432161FD19FA3126703D5272C8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void thirdFloor::addPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thirdFloor_addPoints_mD5C6CCCB14E3E72679F0BC2A16AADAE25E5F6402 (thirdFloor_t33DD42D65D665A432161FD19FA3126703D5272C8* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points.totalPoints += n;
		int32_t L_0 = ((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4;
		int32_t L_1 = ___n0;
		((Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_StaticFields*)il2cpp_codegen_static_fields_for(Points_tF10CC61A9E818CA28C573D89F911610BFDB894F8_il2cpp_TypeInfo_var))->___totalPoints_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void thirdFloor::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thirdFloor_OnTriggerEnter_m9147F5B62D6E5FCCE0377124211853311F393286 (thirdFloor_t33DD42D65D665A432161FD19FA3126703D5272C8* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other.gameObject.tag == "rock")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral387C7C2EA4D782FA85BF1E1227CBFC82AD1FAE94, NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// int newPoint = 1;
		V_0 = 1;
		// addPoints(newPoint);
		int32_t L_4 = V_0;
		thirdFloor_addPoints_mD5C6CCCB14E3E72679F0BC2A16AADAE25E5F6402(__this, L_4, NULL);
		// pntDisplay.text = newPoint.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___pntDisplay_4;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_6);
		// GetComponent<Collider>().enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_7);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_7, (bool)0, NULL);
		// audioS = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8;
		L_8 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioS_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioS_5), (void*)L_8);
		// audioS.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___audioS_5;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void thirdFloor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thirdFloor__ctor_m1600BE627B3F59CD02D6287781EDADD42F99B0C4 (thirdFloor_t33DD42D65D665A432161FD19FA3126703D5272C8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SecondaryTrigger_ExpectCollider_mD83AEC8D44A2734CEFBE088ECB2383DF08B07880_inline (SecondaryTrigger_tEFA796C49F850AE9589B8D7B3351192ADBCC1BE3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	{
		// expectedCollider = collider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		__this->___expectedCollider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___expectedCollider_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___axis1, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___axis1;
		float* L_2 = ___angle0;
		Quaternion_Internal_ToAxisAngleRad_m36090778CAC5E93CADAD17A95B7C7028E93CA1BF(L_0, L_1, L_2, NULL);
		float* L_3 = ___angle0;
		float* L_4 = ___angle0;
		float L_5 = *((float*)L_4);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
