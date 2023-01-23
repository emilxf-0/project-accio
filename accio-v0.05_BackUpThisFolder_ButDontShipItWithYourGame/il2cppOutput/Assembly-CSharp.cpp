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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<System.AggregateException>
struct Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<PlayerInfo>
struct Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF;
// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>
struct IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ButtonID
struct ButtonID_tF0AB9EBA5391E35C4FBCAF82D018ADC6ECAA3DFD;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A;
// DatabaseAPI
struct DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90;
// Firebase.Database.DatabaseError
struct DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9;
// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// GameInfo
struct GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HealthManager
struct HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InputHandler
struct InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569;
// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D;
// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1;
// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F;
// Firebase.Database.InternalQuery
struct InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerHandler
struct PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635;
// PlayerInfo
struct PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223;
// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneHandler
struct SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Sequence
struct Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2;
// SequenceItem
struct SequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
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
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7;
// DatabaseAPI/<>c
struct U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104;
// DatabaseAPI/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0;
// DatabaseAPI/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40;
// DatabaseAPI/OnLoadedDelegate
struct OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4;
// InputHandler/<>c
struct U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral1090161D0379725282A0205A6F1840BED277027B;
IL2CPP_EXTERN_C String_t* _stringLiteral181609EFAE5EC9C856AD1AC942072280C195A474;
IL2CPP_EXTERN_C String_t* _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral25514B48925A5DE9C83427E48F799BF0FEB42A93;
IL2CPP_EXTERN_C String_t* _stringLiteral30D71740CA7916667382A631E50177702C30C707;
IL2CPP_EXTERN_C String_t* _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79;
IL2CPP_EXTERN_C String_t* _stringLiteral3A503577F690479C6F3AA7A4D17FDBD623714E67;
IL2CPP_EXTERN_C String_t* _stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207;
IL2CPP_EXTERN_C String_t* _stringLiteral485D3F0A6F15241C80F33933679BC4E5D9AC2AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral48F93B5D18D25B75E37A02AEEB813A104981DC0E;
IL2CPP_EXTERN_C String_t* _stringLiteral4C29FA1F21938804FF7C3140D01CE3FE794689EC;
IL2CPP_EXTERN_C String_t* _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4;
IL2CPP_EXTERN_C String_t* _stringLiteral5A02B81CEA47E87BA8CF4FF3983F242311DE3D20;
IL2CPP_EXTERN_C String_t* _stringLiteral5DAD4B412BEFB535CF54146E048A5A42C9885B40;
IL2CPP_EXTERN_C String_t* _stringLiteral60D34F3ABA93E197EEEEA526E1CA1E1059BC9A10;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED5833CF35286EBF8662B7B5949F0D742BBEC3F;
IL2CPP_EXTERN_C String_t* _stringLiteral75BE285870029084FFACFEB0B2472DD5862F9913;
IL2CPP_EXTERN_C String_t* _stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral7D590B7E8DD45B43A105BBAE26310B8CE8760C4B;
IL2CPP_EXTERN_C String_t* _stringLiteral85D147150C682407E9398510E6FE61FE6EA2CFBE;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral9639C842BFD74C0ECCB4384255E61AABC5447AEB;
IL2CPP_EXTERN_C String_t* _stringLiteral9C562D614DF55C77761E9A17F3F2C3C421C18BEE;
IL2CPP_EXTERN_C String_t* _stringLiteralA542A225425C3B8519416431BC92595370E5D46E;
IL2CPP_EXTERN_C String_t* _stringLiteralA72E5A6E1AB0EFE1738D765BF25A9F7393420EBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA821BC887FE90FD4673136323F4710B2A897B458;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3F170B4DDE1DBB05D6B688D812CD764632DC23;
IL2CPP_EXTERN_C String_t* _stringLiteralD8AAC8FBD383DD9252986F6FD5A2E50E384EF5BC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE64EA7DEE8415BA10E2E9AB472A46BAA1B3C92F9;
IL2CPP_EXTERN_C String_t* _stringLiteralECBDA4CCE95ED7C4964BF58BE4079D52CC515C41;
IL2CPP_EXTERN_C String_t* _stringLiteralF4CA2323B213118FDA106B0C7026519D746F31D4;
IL2CPP_EXTERN_C const RuntimeMethod* DatabaseAPI_U3CLoadFromFirebaseU3Eb__20_0_m8B70BB417BCD109206DC512A4BB60FF5D908C5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_InstantiateEnemyAction_m7AFB56E614A7E01386131346F1601B11BB3514D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_PlayerDeath_mA2CFC11A1140BC2B7128275F14B4A1CFAA7791C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873_mDA7B46F57BBC3E14B5643DF8D9907E4F8125C2F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223_m5C034FFFB0D1490C085D140EEF8CA2B163E820B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m30797A03C735FCE9FC1DF0606BA53A04ED3E519A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m14A218880BA483B4CA1462CB44A852582C1E953A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerHandler_U3CAwakeU3Eb__5_0_mC5505CE2CE7EE078231AD24B61AE521462E2F9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneHandler_LoginSuccessful_m5C1A18F34B33AF62320417247EA2EC84C74B5DAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDataTestU3Eb__15_0_mCDEA0679F94FCA7E0B6B4FB2DE29AE0C843621A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CLoadDataMultipleU3Eb__13_0_m1997AD1E924D923BD6F75D3347AFEE850B2C50AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterNewUserU3Eb__16_0_m876EEB0EEFBAAC942FAF705E71A835682B221DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSendActionU3Eb__13_0_m1DF2D3A0CF802EE211E2457B38E1A658C233915D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSendActionU3Eb__13_1_m94CA67B75EB5DC6811670912CAE76B13CA44B3D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSignInU3Eb__17_0_m3EB24E71E87AC61CF9A10C149DB48F95354162C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSimpleSignInU3Eb__14_0_mD22C85C461475CBE2A5B0A507D18DC09789DD71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CSendActionU3Eb__0_m0799679B1D9BA85E4B39CB14C685758342BA9EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CListenForEnemyActionU3Eg__CurrentListenerU7C0_m1AAEF8182E88614D17FC63879B6B7AB279701231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
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

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A  : public RuntimeObject
{
	// Firebase.Database.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::parentSnapshot
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___parentSnapshot_2;
	// Firebase.Database.DataSnapshot/DataSnapshotList Firebase.Database.DataSnapshot::parentList
	DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___parentList_3;
};

// Firebase.Database.DatabaseError
struct DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9  : public RuntimeObject
{
	// System.Int32 Firebase.Database.DatabaseError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_15;
	// System.String Firebase.Database.DatabaseError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_16;
	// System.String Firebase.Database.DatabaseError::<Details>k__BackingField
	String_t* ___U3CDetailsU3Ek__BackingField_17;
};

struct DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.String> Firebase.Database.DatabaseError::ErrorReasons
	RuntimeObject* ___ErrorReasons_13;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Firebase.Database.DatabaseError::ErrorCodes
	RuntimeObject* ___ErrorCodes_14;
};

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};

struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960  : public RuntimeObject
{
	// Firebase.Database.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___internalDatabase_2;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_3;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___U3CAppU3Ek__BackingField_4;
};

struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* ___databases_5;
};

// PlayerInfo
struct PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223  : public RuntimeObject
{
	// System.String PlayerInfo::playerID
	String_t* ___playerID_0;
	// System.Single PlayerInfo::playerReactionTime
	float ___playerReactionTime_1;
	// System.Boolean PlayerInfo::correctInput
	bool ___correctInput_2;
};

// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED  : public RuntimeObject
{
	// Firebase.Database.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* ___childListener_3;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// DatabaseAPI/<>c
struct U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104  : public RuntimeObject
{
};

struct U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields
{
	// DatabaseAPI/<>c DatabaseAPI/<>c::<>9
	U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>> DatabaseAPI/<>c::<>9__13_0
	Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* ___U3CU3E9__13_0_1;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>> DatabaseAPI/<>c::<>9__14_0
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___U3CU3E9__14_0_2;
	// System.Action`1<System.Threading.Tasks.Task> DatabaseAPI/<>c::<>9__15_0
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___U3CU3E9__15_0_3;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>> DatabaseAPI/<>c::<>9__16_0
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___U3CU3E9__16_0_4;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>> DatabaseAPI/<>c::<>9__17_0
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___U3CU3E9__17_0_5;
};

// DatabaseAPI/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0  : public RuntimeObject
{
	// System.Action`1<System.AggregateException> DatabaseAPI/<>c__DisplayClass21_0::fallback
	Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* ___fallback_0;
	// System.Action DatabaseAPI/<>c__DisplayClass21_0::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_1;
};

// DatabaseAPI/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40  : public RuntimeObject
{
	// System.Action`1<System.AggregateException> DatabaseAPI/<>c__DisplayClass22_0::fallback
	Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* ___fallback_0;
	// System.Action`1<PlayerInfo> DatabaseAPI/<>c__DisplayClass22_0::callback
	Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A* ___callback_1;
};

// InputHandler/<>c
struct U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62  : public RuntimeObject
{
};

struct U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields
{
	// InputHandler/<>c InputHandler/<>c::<>9
	U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62* ___U3CU3E9_0;
	// System.Action InputHandler/<>c::<>9__13_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__13_0_1;
	// System.Action`1<System.AggregateException> InputHandler/<>c::<>9__13_1
	Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* ___U3CU3E9__13_1_2;
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

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___m_result_22;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___U3CDatabaseErrorU3Ek__BackingField_2;
	// System.String Firebase.Database.ChildChangedEventArgs::<PreviousChildName>k__BackingField
	String_t* ___U3CPreviousChildNameU3Ek__BackingField_3;
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

// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D  : public Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED
{
	// Firebase.Database.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___U3CDatabaseU3Ek__BackingField_5;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
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

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___currentUser_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___stateChangedImpl_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___idTokenChangedImpl_8;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_9;
};

struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* ___appCPtrToAuth_10;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserInfoInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserInfoInterface::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9  : public MulticastDelegate_t
{
};

// System.Action`1<System.AggregateException>
struct Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<PlayerInfo>
struct Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A  : public UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___authProxy_3;
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

// DatabaseAPI/OnLoadedDelegate
struct OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4  : public MulticastDelegate_t
{
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ButtonID
struct ButtonID_tF0AB9EBA5391E35C4FBCAF82D018ADC6ECAA3DFD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ButtonID::buttonID
	String_t* ___buttonID_4;
};

// DatabaseAPI
struct DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean DatabaseAPI::isListening
	bool ___isListening_5;
	// PlayerHandler DatabaseAPI::playerHandler
	PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* ___playerHandler_7;
	// Firebase.Auth.FirebaseAuth DatabaseAPI::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_8;
	// Firebase.Database.FirebaseDatabase DatabaseAPI::db
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___db_9;
};

struct DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields
{
	// DatabaseAPI DatabaseAPI::instance
	DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* ___instance_4;
	// System.Action DatabaseAPI::LoginSuccessful
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___LoginSuccessful_6;
};

// GameInfo
struct GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameInfo::gameSessionID
	int32_t ___gameSessionID_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String GameManager::playerID
	String_t* ___playerID_5;
	// UnityEngine.GameObject GameManager::gameOver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOver_6;
	// HealthManager GameManager::healthManager
	HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* ___healthManager_7;
	// Sequence GameManager::sequence
	Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* ___sequence_8;
	// Timer GameManager::timer
	Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* ___timer_9;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// HealthManager
struct HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider HealthManager::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// System.Single HealthManager::maxHealth
	float ___maxHealth_5;
	// System.Single HealthManager::playerHealth
	float ___playerHealth_6;
	// System.Single HealthManager::currentHealth
	float ___currentHealth_7;
};

struct HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_StaticFields
{
	// System.Action HealthManager::PlayerDeath
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PlayerDeath_8;
};

// InputHandler
struct InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text InputHandler::userEmail
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___userEmail_4;
	// TMPro.TMP_Text InputHandler::userPassword
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___userPassword_5;
	// UnityEngine.GameObject InputHandler::loginPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loginPanel_6;
	// TMPro.TMP_Text InputHandler::signupEmail
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___signupEmail_7;
	// TMPro.TMP_Text InputHandler::signupPassword
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___signupPassword_8;
	// UnityEngine.GameObject InputHandler::signupPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___signupPanel_9;
};

// PlayerHandler
struct PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text PlayerHandler::welcomeMessage
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___welcomeMessage_5;
	// UnityEngine.UI.Slider PlayerHandler::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_6;
	// UnityEngine.UI.Image PlayerHandler::playerColor
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___playerColor_7;
	// System.String PlayerHandler::playerID
	String_t* ___playerID_8;
};

// SceneHandler
struct SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Sequence
struct Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> Sequence::currentSequence
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___currentSequence_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> Sequence::currentItemImage
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___currentItemImage_5;
	// UnityEngine.GameObject Sequence::sequenceItemPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sequenceItemPrefab_6;
	// UnityEngine.Transform Sequence::sequenceTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sequenceTransform_7;
	// System.String Sequence::currentSequenceItem
	String_t* ___currentSequenceItem_8;
	// System.Boolean Sequence::inputMatchSequence
	bool ___inputMatchSequence_9;
	// System.Int32 Sequence::item
	int32_t ___item_10;
};

// SequenceItem
struct SequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Sprite> SequenceItem::possibleActions
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___possibleActions_4;
};

// Timer
struct Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text Timer::timerText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___timerText_4;
	// System.Single Timer::timeValue
	float ___timeValue_5;
	// System.Single Timer::playerTime
	float ___playerTime_6;
	// System.Boolean Timer::timerOn
	bool ___timerOn_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C  : public RuntimeArray
{
	ALIGN_FIELD (8) Exception_t* m_Items[1];

	inline Exception_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Exception_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Exception_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Exception_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Exception_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Exception_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Object>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m8F426832790ADC614F3A870ECFAB11ABBBDDDC43_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___task0, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___continuation1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void HealthManager::add_PlayerDeath(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_add_PlayerDeath_m8E072556B15403C334E5C6FA167AEDEDA294761E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void HealthManager::remove_PlayerDeath(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_remove_PlayerDeath_m892236843AD8108B4FF5529421F00C05A9AA0A5F (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// DatabaseAPI DatabaseAPI::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7 (const RuntimeMethod* method) ;
// System.Void DatabaseAPI::SetPlayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SetPlayerID_m97FBDAAF3F92FECC928A7C86480E865741E09227 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<PlayerInfo>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8AAB915BE4A3469EB94B11BA4018EE58BB92AF62 (Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.AggregateException>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m78A7C2B9F7AF842B773B7AF181450959F41345F6 (Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DatabaseAPI::ListenForEnemyAction(System.Action`1<PlayerInfo>,System.Action`1<System.AggregateException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_ListenForEnemyAction_m1376970491891173E30C7B67582EB9EE5CB89618 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A* ___callback0, Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* ___fallback1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void GameManager::CompareTimeStamps(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CompareTimeStamps_mE0CDD65CEFDA9ED6648F7B2466F6308112228864 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ___enemyTimeStamp0, const RuntimeMethod* method) ;
// System.Single GameManager::GetHitPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameManager_GetHitPoints_m59ECD9117FF75EBC4294BBC6B36C2632D8D5A05F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void HealthManager::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_TakeDamage_m7A0B2ED642EC8F5E07542ECA2FFD0E510F964F9D (HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* __this, float ___damageTaken0, const RuntimeMethod* method) ;
// System.Void HealthManager::Heal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_Heal_m08245EA8AA755C031A38F09A9384E5CD0181E8CE (HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* __this, float ___hpToHeal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Sequence::NewSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_NewSequence_m8CE8BBDAE427639B0E80B7A169EC82D59A45C0BB (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, const RuntimeMethod* method) ;
// System.Void Timer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Reset_mE76F5A192F38D2B18349B481D3D18891F4D2A63F (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) ;
// System.Single Timer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Timer_GetCurrentTime_m29A07228820A4E675991DAD9D907C7007BD41E72 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) ;
// System.Void Sequence::CompareInputWithSequence(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_CompareInputWithSequence_mE86C6C4C02A8B764EDC7D18EF1E4406950F3B15B (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, String_t* ___buttonID0, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::SimpleSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SimpleSignIn_m85ED09B7D9498AB7E04E6128CBAE0D67B7F831DA (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetTimer_m1A121805653CFF828D6A107DA797C97BD5D7B011 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::ResetGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetGame_mAA7635DBAEDF23E8D37A64870D9D66D0A695D20C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::RegisterNewUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_RegisterNewUser_m6E29F2979EBDB2F029146A5F4116F86008BA6FEA (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::SignIn(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SignIn_m6E52D457F24A95C690CB31B0A7FEEBED8F5939AC (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method) ;
// System.Void PlayerInfo::.ctor(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_mE265E47FE3A99A339B8D08225D3B4B5C7F8B3057 (PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* __this, String_t* ___playerID0, float ___playerReactionTime1, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::SendAction(PlayerInfo,System.Action,System.Action`1<System.AggregateException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SendAction_mF123CCD880621554C1B0C050C93C5B3D9F856B31 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* ___playerInfo0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* ___fallback2, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SignOut_mFA99B20921EE77BD7F3AC05E8CABF3F9614B5EDA (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) ;
// System.Void InputHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22F1700AED629A1C6D4CB62AD6EF83D65E917084 (U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F (const RuntimeMethod* method) ;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118 (const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.String Firebase.Auth.FirebaseUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::DataTest(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_DataTest_mAAC4C18AD580FA4938D27D73F8F9974FA7FF247D (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___userID0, String_t* ___data1, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::LoadDataMultiple(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_LoadDataMultiple_m4C356AFE6D5D2FAFF9F18973752930A17A71B6E5 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___path0, const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, String_t* ___pathString0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m47FFCA5D7CA1940EDC58E9D6F823C7710794F537 (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<Firebase.Database.DataSnapshot>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663 (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___task0, Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* ___continuation1, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50*, Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m8F426832790ADC614F3A870ECFAB11ABBBDDDC43_gshared)(___task0, ___continuation1, method);
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInAnonymouslyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInAnonymouslyAsync_m91C897537BC9A9FB984F24E9C960D74B8995ECA8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007 (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<Firebase.Auth.FirebaseUser>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___continuation1, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m8F426832790ADC614F3A870ECFAB11ABBBDDDC43_gshared)(___task0, ___continuation1, method);
}
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetValueAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_SetValueAsync_m4BF66416AA9AD3C1022FAC34FB3E7B22F355DC00 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_m6BDD5EFACC9A21E8AA0A27D6C6BCCA15C000566C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___continuation1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::CreateUserWithEmailAndPasswordAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_CreateUserWithEmailAndPasswordAsync_m90F9E8CBBDBFC03A6B7AF634A61DF47B1618658B (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithEmailAndPasswordAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInWithEmailAndPasswordAsync_mAA4074C7F5BC11678AF9FCAFB7BE86F751072E5E (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_SignOut_m6334FED9987E29CCB5AAAF8AC50A894BFF8AF5C8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetRawJsonValueAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, String_t* ___jsonValue0, const RuntimeMethod* method) ;
// System.Void DatabaseAPI/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m4F3A6F5103942E49EF5E39353CDC78BAF9559DF9 (U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Push()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* DatabaseReference_Push_m167EAF33521AB5504DDF4F6315AFADE24506C7D2 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___continuationAction0, const RuntimeMethod* method) ;
// System.Void DatabaseAPI/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mD6179E717CB4D051525044F22966ADB6220A0FD3 (U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m14849F15A7BB20B55074D3BAB73D286633141489 (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Firebase.Database.Query::add_ChildAdded(System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_add_ChildAdded_mCB6843F4431382018722A56F33E7430B5451A2AE (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::RemoveValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_RemoveValueAsync_m1B7F2203C12AD5FB5B04FE24CDAB4A94388694D3 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::get_Result()
inline DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* __this, const RuntimeMethod* method)
{
	return ((  DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* (*) (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.String Firebase.Database.DataSnapshot::GetRawJsonValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Void PlayerHandler::LoadColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_LoadColor_m6378313161E667B04290752BCBC9A284D2CDA10A (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, String_t* ___color0, const RuntimeMethod* method) ;
// System.Void DatabaseAPI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22C1B62301BA90D9CF0A6380CE1DAAE1E4273FD7 (U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Children_m5A77ABE26BB1750F85677DF6E03D02560F6F6632 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.String Firebase.Auth.FirebaseUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_DisplayName_m813DCB1BFDE089FBF49FF697E77A48C85183CC6C (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.AggregateException>::Invoke(T)
inline void Action_1_Invoke_m9288FB33A518B5F8989A24AC20D8A125114DC406_inline (Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* __this, AggregateException_t51B6205846DFB356B94452702201DD239D44422F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C*, AggregateException_t51B6205846DFB356B94452702201DD239D44422F*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::get_DatabaseError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ChildChangedEventArgs_get_DatabaseError_m3E2E8C34E3295739FB544BFB47819616B11DF07C_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, const RuntimeMethod* method) ;
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.AggregateException::.ctor(System.Exception[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_mE5898BED8E2DBD0CDB82837AEF7E9A26A6074AA9 (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___innerExceptions0, const RuntimeMethod* method) ;
// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::get_Snapshot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ChildChangedEventArgs_get_Snapshot_m100ACE866E445C613AEC004CF99B9EED54C6F270_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<PlayerInfo>(System.String)
inline PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* JsonUtility_FromJson_TisPlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223_m5C034FFFB0D1490C085D140EEF8CA2B163E820B9 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.Void System.Action`1<PlayerInfo>::Invoke(T)
inline void Action_1_Invoke_mB1637BACEE96F2284A0EA195CB50EFFD9EF4C108_inline (Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A* __this, PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A*, PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___call0, method);
}
// System.Void DatabaseAPI::LoadFromFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_LoadFromFirebase_mD1A08021B5DB2522A191D45BC93534CFFE403592 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) ;
// System.Void PlayerHandler::SetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_SetColor_m037A995A11DC202ED6E34C805B042680AB231231 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::SaveToFirebase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SaveToFirebase_mFC39570E925B8028411CC2B69D7CEE981F6D9189 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___data0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::add_LoginSuccessful(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_add_LoginSuccessful_m543213F71A566F37A021B16B8F31520B57CB5A2C (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void DatabaseAPI::remove_LoginSuccessful(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_remove_LoginSuccessful_m7718D00DDFFCC546A2682BBE7279302C17AED36F (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void Sequence::CreateSequence(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_CreateSequence_m48E50538495ADA06C542CD34CAA37376737F0454 (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, int32_t ___lengthOfSequence0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<SequenceItem>()
inline SequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873* GameObject_GetComponent_TisSequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873_mDA7B46F57BBC3E14B5643DF8D9907E4F8125C2F6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Image>::Add(T)
inline void List_1_Add_m30797A03C735FCE9FC1DF0606BA53A04ED3E519A_inline (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19*, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UI.Image>::get_Item(System.Int32)
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4 (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void Sequence::UpdateSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_UpdateSequence_mB6C4819B5C9674D830E3263749F2ED5536D83EF2 (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Image>::Clear()
inline void List_1_Clear_m14A218880BA483B4CA1462CB44A852582C1E953A_inline (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Sequence::DestroySequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_DestroySequence_m07D5050A72767EF5A41908B5078BCE1C50F669BE (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Image>::.ctor()
inline void List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::.ctor()
inline void List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void Timer::DisplayTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_DisplayTime_m0C2F09C5C83D3690074D77FAE3AE0A8DDBB647E9 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, float ___timeToDisplay0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF (float ___H0, float ___S1, float ___V2, bool ___hdr3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void ButtonID::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonID__ctor_m8928637603EAB078AFC20144AEF9D79FB7C40D24 (ButtonID_tF0AB9EBA5391E35C4FBCAF82D018ADC6ECAA3DFD* __this, const RuntimeMethod* method) 
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
// System.Void GameInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInfo__ctor_m25EF2A1449134DAB68FD8DAE3AB8C5C79049937C (GameInfo_tB32FAD4AE9A8509BA50B278895BA8EEF9D325174* __this, const RuntimeMethod* method) 
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
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A02B81CEA47E87BA8CF4FF3983F242311DE3D20);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.Log("Game manager doesn't exist");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5A02B81CEA47E87BA8CF4FF3983F242311DE3D20, NULL);
	}

IL_0017:
	{
		// return instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance != this)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		return;
	}

IL_0026:
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void GameManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnEnable_mCBA3C942196F2FE284CA416B26833E78468F635E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_PlayerDeath_mA2CFC11A1140BC2B7128275F14B4A1CFAA7791C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HealthManager.PlayerDeath += PlayerDeath;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)GameManager_PlayerDeath_mA2CFC11A1140BC2B7128275F14B4A1CFAA7791C9_RuntimeMethod_var), NULL);
		HealthManager_add_PlayerDeath_m8E072556B15403C334E5C6FA167AEDEDA294761E(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDisable_mF3CB4DACBE9C8FF46B0ED4D4E7BD71315230B968 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_PlayerDeath_mA2CFC11A1140BC2B7128275F14B4A1CFAA7791C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HealthManager.PlayerDeath -= PlayerDeath;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)GameManager_PlayerDeath_mA2CFC11A1140BC2B7128275F14B4A1CFAA7791C9_RuntimeMethod_var), NULL);
		HealthManager_remove_PlayerDeath_m892236843AD8108B4FF5529421F00C05A9AA0A5F(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_InstantiateEnemyAction_m7AFB56E614A7E01386131346F1601B11BB3514D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DatabaseAPI.Instance.SetPlayerID();
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_0;
		L_0 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		NullCheck(L_0);
		DatabaseAPI_SetPlayerID_m97FBDAAF3F92FECC928A7C86480E865741E09227(L_0, NULL);
		// DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_1;
		L_1 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A* L_2 = (Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A*)il2cpp_codegen_object_new(Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m8AAB915BE4A3469EB94B11BA4018EE58BB92AF62(L_2, __this, (intptr_t)((void*)GameManager_InstantiateEnemyAction_m7AFB56E614A7E01386131346F1601B11BB3514D9_RuntimeMethod_var), NULL);
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_3 = (Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C*)il2cpp_codegen_object_new(Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m78A7C2B9F7AF842B773B7AF181450959F41345F6(L_3, NULL, (intptr_t)((void*)Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		DatabaseAPI_ListenForEnemyAction_m1376970491891173E30C7B67582EB9EE5CB89618(L_1, L_2, L_3, NULL);
		// DatabaseAPI.Instance.isListening = true;
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_4;
		L_4 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		NullCheck(L_4);
		L_4->___isListening_5 = (bool)1;
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_InstantiateEnemyAction_m7AFB56E614A7E01386131346F1601B11BB3514D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.B))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)98), NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_1;
		L_1 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A* L_2 = (Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A*)il2cpp_codegen_object_new(Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m8AAB915BE4A3469EB94B11BA4018EE58BB92AF62(L_2, __this, (intptr_t)((void*)GameManager_InstantiateEnemyAction_m7AFB56E614A7E01386131346F1601B11BB3514D9_RuntimeMethod_var), NULL);
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_3 = (Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C*)il2cpp_codegen_object_new(Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m78A7C2B9F7AF842B773B7AF181450959F41345F6(L_3, NULL, (intptr_t)((void*)Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		DatabaseAPI_ListenForEnemyAction_m1376970491891173E30C7B67582EB9EE5CB89618(L_1, L_2, L_3, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void GameManager::InstantiateEnemyAction(PlayerInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InstantiateEnemyAction_m7AFB56E614A7E01386131346F1601B11BB3514D9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* ___playerInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	float V_1 = 0.0f;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// var playerID = $"{playerInfo.playerID}";
		PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* L_0 = ___playerInfo0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___playerID_0;
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000f;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000f:
	{
		V_0 = G_B2_0;
		// var enemyReactionTime = float.Parse($"{playerInfo.playerReactionTime}");
		PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* L_3 = ___playerInfo0;
		NullCheck(L_3);
		float L_4 = L_3->___playerReactionTime_1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_6, NULL);
		float L_8;
		L_8 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_7, NULL);
		V_1 = L_8;
		// if (this.playerID == playerID)
		String_t* L_9 = __this->___playerID_5;
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		return;
	}

IL_003a:
	{
		// CompareTimeStamps(enemyReactionTime);
		float L_12 = V_1;
		GameManager_CompareTimeStamps_mE0CDD65CEFDA9ED6648F7B2466F6308112228864(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Void GameManager::CompareTimeStamps(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CompareTimeStamps_mE0CDD65CEFDA9ED6648F7B2466F6308112228864 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ___enemyTimeStamp0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var player = GetHitPoints();
		float L_0;
		L_0 = GameManager_GetHitPoints_m59ECD9117FF75EBC4294BBC6B36C2632D8D5A05F(__this, NULL);
		// var enemy = enemyTimeStamp;
		float L_1 = ___enemyTimeStamp0;
		V_0 = L_1;
		// var hitPoints = Mathf.Abs(player - enemy);
		float L_2 = L_0;
		float L_3 = V_0;
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_2, L_3)));
		// if (player > enemy || sequence.inputMatchSequence == false)
		float L_5 = V_0;
		if ((((float)L_2) > ((float)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* L_6 = __this->___sequence_8;
		NullCheck(L_6);
		bool L_7 = L_6->___inputMatchSequence_9;
		if (L_7)
		{
			goto IL_0032;
		}
	}

IL_0021:
	{
		// healthManager.TakeDamage(0.1f);
		HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* L_8 = __this->___healthManager_7;
		NullCheck(L_8);
		HealthManager_TakeDamage_m7A0B2ED642EC8F5E07542ECA2FFD0E510F964F9D(L_8, (0.100000001f), NULL);
		return;
	}

IL_0032:
	{
		// healthManager.Heal(0.05f);
		HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* L_9 = __this->___healthManager_7;
		NullCheck(L_9);
		HealthManager_Heal_m08245EA8AA755C031A38F09A9384E5CD0181E8CE(L_9, (0.0500000007f), NULL);
		// }
		return;
	}
}
// System.Void GameManager::PlayerDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_PlayerDeath_mA2CFC11A1140BC2B7128275F14B4A1CFAA7791C9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// gameOver.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameOver_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ResetGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetGame_mAA7635DBAEDF23E8D37A64870D9D66D0A695D20C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// healthManager.currentHealth = healthManager.maxHealth;
		HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* L_0 = __this->___healthManager_7;
		HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* L_1 = __this->___healthManager_7;
		NullCheck(L_1);
		float L_2 = L_1->___maxHealth_5;
		NullCheck(L_0);
		L_0->___currentHealth_7 = L_2;
		// gameOver.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___gameOver_6;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// sequence.NewSequence();
		Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* L_4 = __this->___sequence_8;
		NullCheck(L_4);
		Sequence_NewSequence_m8CE8BBDAE427639B0E80B7A169EC82D59A45C0BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void GameManager::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetTimer_m1A121805653CFF828D6A107DA797C97BD5D7B011 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// timer.Reset();
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_0 = __this->___timer_9;
		NullCheck(L_0);
		Timer_Reset_mE76F5A192F38D2B18349B481D3D18891F4D2A63F(L_0, NULL);
		// }
		return;
	}
}
// System.Single GameManager::GetHitPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameManager_GetHitPoints_m59ECD9117FF75EBC4294BBC6B36C2632D8D5A05F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// return timer.GetCurrentTime();
		Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* L_0 = __this->___timer_9;
		NullCheck(L_0);
		float L_1;
		L_1 = Timer_GetCurrentTime_m29A07228820A4E675991DAD9D907C7007BD41E72(L_0, NULL);
		return L_1;
	}
}
// System.Single GameManager::EnemyHitPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameManager_EnemyHitPoints_m186C7837A3033E79D978280FB81E08A4BA6C8B01 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// var hitPoints = 0.1f;
		// return hitPoints;
		return (0.100000001f);
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48F93B5D18D25B75E37A02AEEB813A104981DC0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string playerID = "187";
		__this->___playerID_5 = _stringLiteral48F93B5D18D25B75E37A02AEEB813A104981DC0E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerID_5), (void*)_stringLiteral48F93B5D18D25B75E37A02AEEB813A104981DC0E);
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
// System.Void HealthManager::add_PlayerDeath(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_add_PlayerDeath_m8E072556B15403C334E5C6FA167AEDEDA294761E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_StaticFields*)il2cpp_codegen_static_fields_for(HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_il2cpp_TypeInfo_var))->___PlayerDeath_8;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_StaticFields*)il2cpp_codegen_static_fields_for(HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_il2cpp_TypeInfo_var))->___PlayerDeath_8), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void HealthManager::remove_PlayerDeath(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_remove_PlayerDeath_m892236843AD8108B4FF5529421F00C05A9AA0A5F (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_StaticFields*)il2cpp_codegen_static_fields_for(HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_il2cpp_TypeInfo_var))->___PlayerDeath_8;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_StaticFields*)il2cpp_codegen_static_fields_for(HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_il2cpp_TypeInfo_var))->___PlayerDeath_8), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void HealthManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_Start_mDED1A83AF5E9BFB2DB9869B52C4C9D64039725AD (HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* __this, const RuntimeMethod* method) 
{
	{
		// slider.value = maxHealth;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = __this->___maxHealth_5;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// currentHealth = maxHealth;
		float L_2 = __this->___maxHealth_5;
		__this->___currentHealth_7 = L_2;
		// playerHealth = maxHealth;
		float L_3 = __this->___maxHealth_5;
		__this->___playerHealth_6 = L_3;
		// }
		return;
	}
}
// System.Void HealthManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_Update_mF727F76A6594BECDCAB01E8BCF302BA02F395D34 (HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* __this, const RuntimeMethod* method) 
{
	{
		// slider.value = currentHealth;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1 = __this->___currentHealth_7;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void HealthManager::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_TakeDamage_m7A0B2ED642EC8F5E07542ECA2FFD0E510F964F9D (HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* __this, float ___damageTaken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D34F3ABA93E197EEEEA526E1CA1E1059BC9A10);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Damage taken: " + damageTaken);
		String_t* L_0;
		L_0 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___damageTaken0), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral60D34F3ABA93E197EEEEA526E1CA1E1059BC9A10, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// currentHealth -= damageTaken;
		float L_2 = __this->___currentHealth_7;
		float L_3 = ___damageTaken0;
		__this->___currentHealth_7 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// if (currentHealth <= 0)
		float L_4 = __this->___currentHealth_7;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		// PlayerDeath.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_StaticFields*)il2cpp_codegen_static_fields_for(HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E_il2cpp_TypeInfo_var))->___PlayerDeath_8;
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void HealthManager::Heal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager_Heal_m08245EA8AA755C031A38F09A9384E5CD0181E8CE (HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* __this, float ___hpToHeal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64EA7DEE8415BA10E2E9AB472A46BAA1B3C92F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Healed: " + hpToHeal);
		String_t* L_0;
		L_0 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___hpToHeal0), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE64EA7DEE8415BA10E2E9AB472A46BAA1B3C92F9, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// currentHealth += hpToHeal;
		float L_2 = __this->___currentHealth_7;
		float L_3 = ___hpToHeal0;
		__this->___currentHealth_7 = ((float)il2cpp_codegen_add(L_2, L_3));
		// }
		return;
	}
}
// System.Void HealthManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthManager__ctor_mB388E33873161D61C1F4188A9E6A6C3B41D96A5F (HealthManager_tAB319BBC8107B1FA06DBCCECA09BC6961E87241E* __this, const RuntimeMethod* method) 
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
// System.Void InputHandler::GetButtonInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_GetButtonInput_mADE16A6208266BEF9E2D79FE5E5B175A911B4E82 (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.sequence.CompareInputWithSequence(id);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* L_1 = L_0->___sequence_8;
		String_t* L_2 = ___id0;
		NullCheck(L_1);
		Sequence_CompareInputWithSequence_mE86C6C4C02A8B764EDC7D18EF1E4406950F3B15B(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::CompareTimeStamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_CompareTimeStamps_m555792A76AF519B626F8D04BDC2FCDBFCF32AFC9 (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InputHandler::PlayWithoutLoggingIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_PlayWithoutLoggingIn_m08AD99CC4C60DF0CFD4F31F7E0F87ED566D07E80 (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, const RuntimeMethod* method) 
{
	{
		// DatabaseAPI.Instance.SimpleSignIn();
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_0;
		L_0 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		NullCheck(L_0);
		DatabaseAPI_SimpleSignIn_m85ED09B7D9498AB7E04E6128CBAE0D67B7F831DA(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::ResetTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_ResetTimer_mD440DD0ABCBC7A687859E169006CE7C467F937B6 (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.ResetTimer();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		GameManager_ResetTimer_m1A121805653CFF828D6A107DA797C97BD5D7B011(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::ResetGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_ResetGame_m315E6EACC6923F8DA9EED73773275E4AA62C360F (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.ResetGame();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		GameManager_ResetGame_mAA7635DBAEDF23E8D37A64870D9D66D0A695D20C(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::RegNewUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_RegNewUser_mFDC8E5A98EF80C0D5ED7B67FE5ACB4FA2A4C4EC0 (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var email = signupEmail.text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___signupEmail_7;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_0);
		V_0 = L_1;
		// var password = signupPassword.text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___signupPassword_8;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_2);
		V_1 = L_3;
		// DatabaseAPI.Instance.RegisterNewUser(email, password);
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_4;
		L_4 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		String_t* L_5 = V_0;
		String_t* L_6 = V_1;
		NullCheck(L_4);
		DatabaseAPI_RegisterNewUser_m6E29F2979EBDB2F029146A5F4116F86008BA6FEA(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::SignInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_SignInUser_m790B957B0008E0C34AB9B499049D9D70F8885023 (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var email = userEmail.text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___userEmail_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_0);
		V_0 = L_1;
		// var password = userPassword.text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___userPassword_5;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_2);
		V_1 = L_3;
		// DatabaseAPI.Instance.SignIn(email, password);
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_4;
		L_4 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		String_t* L_5 = V_0;
		String_t* L_6 = V_1;
		NullCheck(L_4);
		DatabaseAPI_SignIn_m6E52D457F24A95C690CB31B0A7FEEBED8F5939AC(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::SendAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_SendAction_mA9F62E02277A10671EA72B622A040BCD425D2FDF (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSendActionU3Eb__13_0_m1DF2D3A0CF802EE211E2457B38E1A658C233915D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSendActionU3Eb__13_1_m94CA67B75EB5DC6811670912CAE76B13CA44B3D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* G_B2_1 = NULL;
	DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* G_B2_2 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* G_B1_1 = NULL;
	DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* G_B1_2 = NULL;
	Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_1 = NULL;
	PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* G_B4_2 = NULL;
	DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* G_B4_3 = NULL;
	Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_1 = NULL;
	PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* G_B3_2 = NULL;
	DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* G_B3_3 = NULL;
	{
		// var playerReaction = GameManager.Instance.GetHitPoints();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = GameManager_GetHitPoints_m59ECD9117FF75EBC4294BBC6B36C2632D8D5A05F(L_0, NULL);
		V_0 = L_1;
		// var playerID = GameManager.Instance.playerID;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2;
		L_2 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_2);
		String_t* L_3 = L_2->___playerID_5;
		V_1 = L_3;
		// DatabaseAPI.Instance.SendAction(new PlayerInfo(playerID, playerReaction), () =>
		// {
		//     // Action was sent!
		// }, exception => { Debug.Log(exception); });
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_4;
		L_4 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		String_t* L_5 = V_1;
		float L_6 = V_0;
		PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* L_7 = (PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223*)il2cpp_codegen_object_new(PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PlayerInfo__ctor_mE265E47FE3A99A339B8D08225D3B4B5C7F8B3057(L_7, L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = L_8;
		G_B1_0 = L_9;
		G_B1_1 = L_7;
		G_B1_2 = L_4;
		if (L_9)
		{
			G_B2_0 = L_9;
			G_B2_1 = L_7;
			G_B2_2 = L_4;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var);
		U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62* L_10 = ((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CSendActionU3Eb__13_0_m1DF2D3A0CF802EE211E2457B38E1A658C233915D_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = L_11;
		((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1), (void*)L_12);
		G_B2_0 = L_12;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0041:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var);
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_13 = ((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_2;
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_14 = L_13;
		G_B3_0 = L_14;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		if (L_14)
		{
			G_B4_0 = L_14;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			G_B4_3 = G_B2_2;
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var);
		U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62* L_15 = ((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_16 = (Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C*)il2cpp_codegen_object_new(Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m78A7C2B9F7AF842B773B7AF181450959F41345F6(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CSendActionU3Eb__13_1_m94CA67B75EB5DC6811670912CAE76B13CA44B3D9_RuntimeMethod_var), NULL);
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_17 = L_16;
		((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9__13_1_2), (void*)L_17);
		G_B4_0 = L_17;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0060:
	{
		NullCheck(G_B4_3);
		DatabaseAPI_SendAction_mF123CCD880621554C1B0C050C93C5B3D9F856B31(G_B4_3, G_B4_2, G_B4_1, G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::ShowPanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_ShowPanel_m95A16DBEC45D3AB61DDCBA429D48C4C540F6C3CB (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, String_t* ___panelName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D590B7E8DD45B43A105BBAE26310B8CE8760C4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8AAC8FBD383DD9252986F6FD5A2E50E384EF5BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(nameof(loginPanel));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7D590B7E8DD45B43A105BBAE26310B8CE8760C4B, NULL);
		String_t* L_0 = ___panelName0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral7D590B7E8DD45B43A105BBAE26310B8CE8760C4B, NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2 = ___panelName0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralD8AAC8FBD383DD9252986F6FD5A2E50E384EF5BC, NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_0025:
	{
		// loginPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___loginPanel_6;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// break;
		return;
	}

IL_0032:
	{
		// signupPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___signupPanel_9;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::HidePanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_HidePanel_m4316B2BCD09D1C6D24F22AC9B2E74875306D20EE (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, String_t* ___panelName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D590B7E8DD45B43A105BBAE26310B8CE8760C4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8AAC8FBD383DD9252986F6FD5A2E50E384EF5BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___panelName0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral7D590B7E8DD45B43A105BBAE26310B8CE8760C4B, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___panelName0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralD8AAC8FBD383DD9252986F6FD5A2E50E384EF5BC, NULL);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_001b:
	{
		// loginPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___loginPanel_6;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// break;
		return;
	}

IL_0028:
	{
		// signupPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___signupPanel_9;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::SignOutFromGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_SignOutFromGame_m4BB35D6CD42684A24400F269FCB816AF98021A7D (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, const RuntimeMethod* method) 
{
	{
		// DatabaseAPI.Instance.SignOut();
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_0;
		L_0 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		NullCheck(L_0);
		DatabaseAPI_SignOut_mFA99B20921EE77BD7F3AC05E8CABF3F9614B5EDA(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler__ctor_m6F970BFB5070CD4229F65C8544F51C4B5994654B (InputHandler_tB7F76670D49DAB5D76D0D1193F3A30EF4AF86710* __this, const RuntimeMethod* method) 
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
// System.Void InputHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEC56A1806B7707E49DAA0BFD54150075816ABB31 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62* L_0 = (U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62*)il2cpp_codegen_object_new(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m22F1700AED629A1C6D4CB62AD6EF83D65E917084(L_0, NULL);
		((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void InputHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22F1700AED629A1C6D4CB62AD6EF83D65E917084 (U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void InputHandler/<>c::<SendAction>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSendActionU3Eb__13_0_m1DF2D3A0CF802EE211E2457B38E1A658C233915D (U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62* __this, const RuntimeMethod* method) 
{
	{
		// }, exception => { Debug.Log(exception); });
		return;
	}
}
// System.Void InputHandler/<>c::<SendAction>b__13_1(System.AggregateException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSendActionU3Eb__13_1_m94CA67B75EB5DC6811670912CAE76B13CA44B3D9 (U3CU3Ec_t64B910E364D0F47FB06F2B9E1939A3D1AD12EE62* __this, AggregateException_t51B6205846DFB356B94452702201DD239D44422F* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// }, exception => { Debug.Log(exception); });
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_0 = ___exception0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }, exception => { Debug.Log(exception); });
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
// DatabaseAPI DatabaseAPI::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85D147150C682407E9398510E6FE61FE6EA2CFBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_0 = ((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.Log("DatabaseAPI doesn't exist");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral85D147150C682407E9398510E6FE61FE6EA2CFBE, NULL);
	}

IL_0017:
	{
		// return instance;
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_2 = ((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void DatabaseAPI::add_LoginSuccessful(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_add_LoginSuccessful_m543213F71A566F37A021B16B8F31520B57CB5A2C (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___LoginSuccessful_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___LoginSuccessful_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void DatabaseAPI::remove_LoginSuccessful(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_remove_LoginSuccessful_m7718D00DDFFCC546A2682BBE7279302C17AED36F (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___LoginSuccessful_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___LoginSuccessful_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void DatabaseAPI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_Awake_m80B8603B01F34FD4B3D4430828423C41BF4C3723 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// auth = FirebaseAuth.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0;
		L_0 = FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F(NULL);
		__this->___auth_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___auth_8), (void*)L_0);
		// db = FirebaseDatabase.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_1;
		L_1 = FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118(NULL);
		__this->___db_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___db_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void DatabaseAPI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_Update_m48A5C01EF6C1223B9F0DA47A5DC404372F0654E9 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9639C842BFD74C0ECCB4384255E61AABC5447AEB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// SimpleSignIn();
		DatabaseAPI_SimpleSignIn_m85ED09B7D9498AB7E04E6128CBAE0D67B7F831DA(__this, NULL);
	}

IL_000f:
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)100), NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// DataTest(auth.CurrentUser.UserId, Random.Range(0, 100).ToString());
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_2 = __this->___auth_8;
		NullCheck(L_2);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_3;
		L_3 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_3, NULL);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)100), NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		DatabaseAPI_DataTest_mAAC4C18AD580FA4938D27D73F8F9974FA7FF247D(__this, L_4, L_6, NULL);
	}

IL_003e:
	{
		// if (Input.GetKeyDown(KeyCode.E))
		bool L_7;
		L_7 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)101), NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// LoadDataMultiple("game session/");
		DatabaseAPI_LoadDataMultiple_m4C356AFE6D5D2FAFF9F18973752930A17A71B6E5(__this, _stringLiteral9639C842BFD74C0ECCB4384255E61AABC5447AEB, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void DatabaseAPI::LoadDataMultiple(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_LoadDataMultiple_m4C356AFE6D5D2FAFF9F18973752930A17A71B6E5 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CLoadDataMultipleU3Eb__13_0_m1997AD1E924D923BD6F75D3347AFEE850B2C50AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* G_B2_0 = NULL;
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* G_B2_1 = NULL;
	Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* G_B1_0 = NULL;
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* G_B1_1 = NULL;
	{
		// db.RootReference.Child(path).GetValueAsync().ContinueWithOnMainThread(task =>
		// {
		//     string jsonData = task.Result.GetRawJsonValue();
		// 
		//     if (task.Exception != null)
		//         Debug.LogWarning(task.Exception);
		// 
		//     foreach (var item in task.Result.Children)
		//     {
		//         Debug.Log(item.GetRawJsonValue());
		//     }
		// });
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0 = __this->___db_9;
		NullCheck(L_0);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_1;
		L_1 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_0, NULL);
		String_t* L_2 = ___path0;
		NullCheck(L_1);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_3;
		L_3 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_1, L_2, NULL);
		NullCheck(L_3);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_4;
		L_4 = Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_5 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1;
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = L_4;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_4;
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* L_7 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_8 = (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*)il2cpp_codegen_object_new(Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m47FFCA5D7CA1940EDC58E9D6F823C7710794F537(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CLoadDataMultipleU3Eb__13_0_m1997AD1E924D923BD6F75D3347AFEE850B2C50AD_RuntimeMethod_var), NULL);
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_9 = L_8;
		((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1), (void*)L_9);
		G_B2_0 = L_9;
		G_B2_1 = G_B1_1;
	}

IL_0035:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
		L_10 = TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663(G_B2_1, G_B2_0, TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DatabaseAPI::SimpleSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SimpleSignIn_m85ED09B7D9498AB7E04E6128CBAE0D67B7F831DA (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSimpleSignInU3Eb__14_0_mD22C85C461475CBE2A5B0A507D18DC09789DD71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* G_B4_0 = NULL;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* G_B4_1 = NULL;
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* G_B3_0 = NULL;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* G_B3_1 = NULL;
	{
		// if (auth.CurrentUser != null)
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___auth_8;
		NullCheck(L_0);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_1;
		L_1 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// LoginSuccessful.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___LoginSuccessful_6;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		return;
	}

IL_0018:
	{
		// auth.SignInAnonymouslyAsync().ContinueWithOnMainThread(task => {
		// if (task.Exception != null)
		// {
		//     Debug.LogWarning(task.Exception);
		// }
		// else
		// {
		//     FirebaseUser newUser = task.Result;
		//     Debug.LogFormat("User signed in successfully: {0} ({1})",
		//         newUser.DisplayName, newUser.UserId);
		// 
		//     LoginSuccessful.Invoke();
		// }
		// });
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_3 = __this->___auth_8;
		NullCheck(L_3);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_4;
		L_4 = FirebaseAuth_SignInAnonymouslyAsync_m91C897537BC9A9FB984F24E9C960D74B8995ECA8(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_5 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_2;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* L_7 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_8 = (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*)il2cpp_codegen_object_new(Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CSimpleSignInU3Eb__14_0_mD22C85C461475CBE2A5B0A507D18DC09789DD71F_RuntimeMethod_var), NULL);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_9 = L_8;
		((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_2), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0042:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
		L_10 = TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D(G_B4_1, G_B4_0, TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DatabaseAPI::DataTest(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_DataTest_mAAC4C18AD580FA4938D27D73F8F9974FA7FF247D (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___userID0, String_t* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDataTestU3Eb__15_0_mCDEA0679F94FCA7E0B6B4FB2DE29AE0C843621A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C29FA1F21938804FF7C3140D01CE3FE794689EC);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* G_B2_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B2_1 = NULL;
	Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* G_B1_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B1_1 = NULL;
	{
		// Debug.Log("Trying to write data...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4C29FA1F21938804FF7C3140D01CE3FE794689EC, NULL);
		// db.RootReference.Child("users").Child(userID).SetValueAsync(data).ContinueWithOnMainThread(task =>
		// {
		//     if (task.Exception != null)
		//         Debug.LogWarning(task.Exception);
		//     else
		//         Debug.Log("DataTestWrite: Complete");
		// });
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0 = __this->___db_9;
		NullCheck(L_0);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_1;
		L_1 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_0, NULL);
		NullCheck(L_1);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_2;
		L_2 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_1, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, NULL);
		String_t* L_3 = ___userID0;
		NullCheck(L_2);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_4;
		L_4 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_2, L_3, NULL);
		String_t* L_5 = ___data1;
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = DatabaseReference_SetValueAsync_m4BF66416AA9AD3C1022FAC34FB3E7B22F355DC00(L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_7 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_3;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_6;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_6;
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* L_9 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_10 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CDataTestU3Eb__15_0_mCDEA0679F94FCA7E0B6B4FB2DE29AE0C843621A7_RuntimeMethod_var), NULL);
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_11 = L_10;
		((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_3), (void*)L_11);
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
	}

IL_004a:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
		L_12 = TaskExtension_ContinueWithOnMainThread_m6BDD5EFACC9A21E8AA0A27D6C6BCCA15C000566C(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void DatabaseAPI::RegisterNewUser(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_RegisterNewUser_m6E29F2979EBDB2F029146A5F4116F86008BA6FEA (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterNewUserU3Eb__16_0_m876EEB0EEFBAAC942FAF705E71A835682B221DD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25514B48925A5DE9C83427E48F799BF0FEB42A93);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* G_B2_0 = NULL;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* G_B2_1 = NULL;
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* G_B1_0 = NULL;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* G_B1_1 = NULL;
	{
		// Debug.Log("Starting Registration");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral25514B48925A5DE9C83427E48F799BF0FEB42A93, NULL);
		// auth.CreateUserWithEmailAndPasswordAsync(email, password).ContinueWithOnMainThread(task =>
		// {
		//     if (task.Exception != null)
		//     {
		//         Debug.LogWarning(task.Exception);
		//     }
		//     else
		//     {
		//         FirebaseUser newUser = task.Result;
		//         Debug.LogFormat("User Registered: {0} ({1})",
		//             newUser.DisplayName, newUser.UserId);
		//     }
		// });
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___auth_8;
		String_t* L_1 = ___email0;
		String_t* L_2 = ___password1;
		NullCheck(L_0);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_3;
		L_3 = FirebaseAuth_CreateUserWithEmailAndPasswordAsync_m90F9E8CBBDBFC03A6B7AF634A61DF47B1618658B(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_4 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_4;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* L_6 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_7 = (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*)il2cpp_codegen_object_new(Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CRegisterNewUserU3Eb__16_0_m876EEB0EEFBAAC942FAF705E71A835682B221DD3_RuntimeMethod_var), NULL);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_8 = L_7;
		((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_4), (void*)L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_0036:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D(G_B2_1, G_B2_0, TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DatabaseAPI::SignIn(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SignIn_m6E52D457F24A95C690CB31B0A7FEEBED8F5939AC (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSignInU3Eb__17_0_m3EB24E71E87AC61CF9A10C149DB48F95354162C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* G_B2_0 = NULL;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* G_B2_1 = NULL;
	Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* G_B1_0 = NULL;
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* G_B1_1 = NULL;
	{
		// auth.SignInWithEmailAndPasswordAsync(email, password).ContinueWithOnMainThread(task =>
		// {
		//     if (task.Exception != null)
		//     {
		//         Debug.LogWarning(task.Exception);
		//     }
		//     else
		//     {
		//         FirebaseUser newUser = task.Result;
		//         Debug.LogFormat("User signed in successfully: {0} ({1})",
		//             newUser.DisplayName, newUser.UserId);
		// 
		//         LoginSuccessful.Invoke();
		//     }
		// });
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___auth_8;
		String_t* L_1 = ___email0;
		String_t* L_2 = ___password1;
		NullCheck(L_0);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_3;
		L_3 = FirebaseAuth_SignInWithEmailAndPasswordAsync_mAA4074C7F5BC11678AF9FCAFB7BE86F751072E5E(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_4 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_5;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* L_6 = ((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_7 = (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*)il2cpp_codegen_object_new(Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CSignInU3Eb__17_0_m3EB24E71E87AC61CF9A10C149DB48F95354162C4_RuntimeMethod_var), NULL);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_8 = L_7;
		((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9__17_0_5), (void*)L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
	}

IL_002c:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D(G_B2_1, G_B2_0, TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_mD5BE69D2600038AE98F9B00302CEB3CE0497401D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DatabaseAPI::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SignOut_mFA99B20921EE77BD7F3AC05E8CABF3F9614B5EDA (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C562D614DF55C77761E9A17F3F2C3C421C18BEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("User" + auth.CurrentUser.UserId + " signed out");
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = __this->___auth_8;
		NullCheck(L_0);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_1;
		L_1 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D, L_2, _stringLiteral9C562D614DF55C77761E9A17F3F2C3C421C18BEE, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// auth.SignOut();
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_4 = __this->___auth_8;
		NullCheck(L_4);
		FirebaseAuth_SignOut_m6334FED9987E29CCB5AAAF8AC50A894BFF8AF5C8(L_4, NULL);
		// }
		return;
	}
}
// System.Void DatabaseAPI::SaveToFirebase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SaveToFirebase_mFC39570E925B8028411CC2B69D7CEE981F6D9189 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var userId = FirebaseAuth.DefaultInstance.CurrentUser.UserId;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0;
		L_0 = FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F(NULL);
		NullCheck(L_0);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_1;
		L_1 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_1, NULL);
		V_0 = L_2;
		// db.RootReference.Child("users").Child(userId).SetRawJsonValueAsync(data);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_3 = __this->___db_9;
		NullCheck(L_3);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_4;
		L_4 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_3, NULL);
		NullCheck(L_4);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_5;
		L_5 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_4, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, NULL);
		String_t* L_6 = V_0;
		NullCheck(L_5);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_7;
		L_7 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_5, L_6, NULL);
		String_t* L_8 = ___data0;
		NullCheck(L_7);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void DatabaseAPI::LoadFromFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_LoadFromFirebase_mD1A08021B5DB2522A191D45BC93534CFFE403592 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseAPI_U3CLoadFromFirebaseU3Eb__20_0_m8B70BB417BCD109206DC512A4BB60FF5D908C5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var userId = FirebaseAuth.DefaultInstance.CurrentUser.UserId;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0;
		L_0 = FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F(NULL);
		NullCheck(L_0);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_1;
		L_1 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_1, NULL);
		V_0 = L_2;
		// db.RootReference.Child("users").Child(userId).GetValueAsync().ContinueWithOnMainThread(task =>
		// {
		//     if (task.Exception != null)
		//     {
		//         Debug.LogError(task.Exception);
		//     }
		// 
		//     //here we get the result from our database.
		//     DataSnapshot snap = task.Result;
		// 
		//     //And send the json data to a function that can update our game.
		//     Debug.Log(snap.GetRawJsonValue());
		//     playerHandler.LoadColor(snap.GetRawJsonValue());
		// 
		// });
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_3 = __this->___db_9;
		NullCheck(L_3);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_4;
		L_4 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_3, NULL);
		NullCheck(L_4);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_5;
		L_5 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_4, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, NULL);
		String_t* L_6 = V_0;
		NullCheck(L_5);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_7;
		L_7 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_5, L_6, NULL);
		NullCheck(L_7);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_8;
		L_8 = Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5(L_7, NULL);
		Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756* L_9 = (Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756*)il2cpp_codegen_object_new(Action_1_t6D282A37DC0C7DDE378FC025B10C7E8F62E6A756_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m47FFCA5D7CA1940EDC58E9D6F823C7710794F537(L_9, __this, (intptr_t)((void*)DatabaseAPI_U3CLoadFromFirebaseU3Eb__20_0_m8B70BB417BCD109206DC512A4BB60FF5D908C5B3_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
		L_10 = TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663(L_8, L_9, TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m34EE846F3B17E56D07CDBC98DFEB849B8FAC2663_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DatabaseAPI::SendAction(PlayerInfo,System.Action,System.Action`1<System.AggregateException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SendAction_mF123CCD880621554C1B0C050C93C5B3D9F856B31 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* ___playerInfo0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* ___fallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CSendActionU3Eb__0_m0799679B1D9BA85E4B39CB14C685758342BA9EF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ED5833CF35286EBF8662B7B5949F0D742BBEC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA542A225425C3B8519416431BC92595370E5D46E);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0* L_0 = (U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_m4F3A6F5103942E49EF5E39353CDC78BAF9559DF9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0* L_1 = V_0;
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_2 = ___fallback2;
		NullCheck(L_1);
		L_1->___fallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fallback_0), (void*)L_2);
		U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0* L_3 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___callback1;
		NullCheck(L_3);
		L_3->___callback_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_1), (void*)L_4);
		// var gameID = "123456";
		V_1 = _stringLiteral6ED5833CF35286EBF8662B7B5949F0D742BBEC3F;
		// var playerInfoJson = JsonUtility.ToJson(playerInfo);
		PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* L_5 = ___playerInfo0;
		String_t* L_6;
		L_6 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_5, NULL);
		V_2 = L_6;
		// db.RootReference.Child("game session").Child(gameID).Push().SetRawJsonValueAsync(playerInfoJson)
		//     .ContinueWith(task =>
		//     {
		//         if (task.IsCanceled || task.IsFaulted)
		//         {
		//             fallback(task.Exception);
		//         }
		// 
		//         else callback();
		// 
		//     });
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_7 = __this->___db_9;
		NullCheck(L_7);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_8;
		L_8 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_7, NULL);
		NullCheck(L_8);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_9;
		L_9 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_8, _stringLiteralA542A225425C3B8519416431BC92595370E5D46E, NULL);
		String_t* L_10 = V_1;
		NullCheck(L_9);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_11;
		L_11 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_9, L_10, NULL);
		NullCheck(L_11);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_12;
		L_12 = DatabaseReference_Push_m167EAF33521AB5504DDF4F6315AFADE24506C7D2(L_11, NULL);
		String_t* L_13 = V_2;
		NullCheck(L_12);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
		L_14 = DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080(L_12, L_13, NULL);
		U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0* L_15 = V_0;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_16 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CSendActionU3Eb__0_m0799679B1D9BA85E4B39CB14C685758342BA9EF8_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17;
		L_17 = Task_ContinueWith_m4150CBD0F7AC870F40F5E8D84E265B47A642C06C(L_14, L_16, NULL);
		// }
		return;
	}
}
// System.Void DatabaseAPI::ListenForEnemyAction(System.Action`1<PlayerInfo>,System.Action`1<System.AggregateException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_ListenForEnemyAction_m1376970491891173E30C7B67582EB9EE5CB89618 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A* ___callback0, Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* ___fallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CListenForEnemyActionU3Eg__CurrentListenerU7C0_m1AAEF8182E88614D17FC63879B6B7AB279701231_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ED5833CF35286EBF8662B7B5949F0D742BBEC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA542A225425C3B8519416431BC92595370E5D46E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC3F170B4DDE1DBB05D6B688D812CD764632DC23);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40* L_0 = (U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass22_0__ctor_mD6179E717CB4D051525044F22966ADB6220A0FD3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40* L_1 = V_0;
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_2 = ___fallback1;
		NullCheck(L_1);
		L_1->___fallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fallback_0), (void*)L_2);
		U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40* L_3 = V_0;
		Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A* L_4 = ___callback0;
		NullCheck(L_3);
		L_3->___callback_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_1), (void*)L_4);
		// if (isListening)
		bool L_5 = __this->___isListening_5;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// var gameID = "123456";
		V_1 = _stringLiteral6ED5833CF35286EBF8662B7B5949F0D742BBEC3F;
		// Debug.Log("I'm listening!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBC3F170B4DDE1DBB05D6B688D812CD764632DC23, NULL);
		// db.RootReference.Child("game session").Child(gameID).ChildAdded += CurrentListener;
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_6 = __this->___db_9;
		NullCheck(L_6);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_7;
		L_7 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_6, NULL);
		NullCheck(L_7);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_8;
		L_8 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_7, _stringLiteralA542A225425C3B8519416431BC92595370E5D46E, NULL);
		String_t* L_9 = V_1;
		NullCheck(L_8);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_10;
		L_10 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_8, L_9, NULL);
		U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40* L_11 = V_0;
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_12 = (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)il2cpp_codegen_object_new(EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		EventHandler_1__ctor_m14849F15A7BB20B55074D3BAB73D286633141489(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass22_0_U3CListenForEnemyActionU3Eg__CurrentListenerU7C0_m1AAEF8182E88614D17FC63879B6B7AB279701231_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Query_add_ChildAdded_mCB6843F4431382018722A56F33E7430B5451A2AE(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void DatabaseAPI::SetPlayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_SetPlayerID_m97FBDAAF3F92FECC928A7C86480E865741E09227 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.playerID = auth.CurrentUser.UserId;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_1 = __this->___auth_8;
		NullCheck(L_1);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_2;
		L_2 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_2, NULL);
		NullCheck(L_0);
		L_0->___playerID_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___playerID_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void DatabaseAPI::DeleteGameSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_DeleteGameSession_m021C5445277E3761F088D293A2B7D6AB76C8DA99 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ED5833CF35286EBF8662B7B5949F0D742BBEC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA542A225425C3B8519416431BC92595370E5D46E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var gameID = "123456";
		V_0 = _stringLiteral6ED5833CF35286EBF8662B7B5949F0D742BBEC3F;
		// db.RootReference.Child("game session").Child(gameID).RemoveValueAsync();
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0 = __this->___db_9;
		NullCheck(L_0);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_1;
		L_1 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_0, NULL);
		NullCheck(L_1);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_2;
		L_2 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_1, _stringLiteralA542A225425C3B8519416431BC92595370E5D46E, NULL);
		String_t* L_3 = V_0;
		NullCheck(L_2);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_4;
		L_4 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_2, L_3, NULL);
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = DatabaseReference_RemoveValueAsync_m1B7F2203C12AD5FB5B04FE24CDAB4A94388694D3(L_4, NULL);
		// }
		return;
	}
}
// System.Void DatabaseAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI__ctor_m6310CE8758D504F3AEFDD41CE4D367E130EE22F5 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DatabaseAPI::<LoadFromFirebase>b__20_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseAPI_U3CLoadFromFirebaseU3Eb__20_0_m8B70BB417BCD109206DC512A4BB60FF5D908C5B3 (DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* __this, Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* V_0 = NULL;
	{
		// if (task.Exception != null)
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_0 = ___task0;
		NullCheck(L_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_1;
		L_1 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError(task.Exception);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_2 = ___task0;
		NullCheck(L_2);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_3;
		L_3 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_3, NULL);
	}

IL_0013:
	{
		// DataSnapshot snap = task.Result;
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_4 = ___task0;
		NullCheck(L_4);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_5;
		L_5 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_4, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		V_0 = L_5;
		// Debug.Log(snap.GetRawJsonValue());
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// playerHandler.LoadColor(snap.GetRawJsonValue());
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_8 = __this->___playerHandler_7;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591(L_9, NULL);
		NullCheck(L_8);
		PlayerHandler_LoadColor_m6378313161E667B04290752BCBC9A284D2CDA10A(L_8, L_10, NULL);
		// });
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
void OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_Multicast(OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, String_t* ___jsonData0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* currentDelegate = reinterpret_cast<OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___jsonData0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_OpenInst(OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, String_t* ___jsonData0, const RuntimeMethod* method)
{
	NullCheck(___jsonData0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___jsonData0, method);
}
void OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_OpenStatic(OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, String_t* ___jsonData0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___jsonData0, method);
}
void OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_OpenStaticInvoker(OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, String_t* ___jsonData0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___jsonData0);
}
void OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_ClosedStaticInvoker(OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, String_t* ___jsonData0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___jsonData0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4 (OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, String_t* ___jsonData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___jsonData0' to native representation
	char* ____jsonData0_marshaled = NULL;
	____jsonData0_marshaled = il2cpp_codegen_marshal_string(___jsonData0);

	// Native function invocation
	il2cppPInvokeFunc(____jsonData0_marshaled);

	// Marshaling cleanup of parameter '___jsonData0' native representation
	il2cpp_codegen_marshal_free(____jsonData0_marshaled);
	____jsonData0_marshaled = NULL;

}
// System.Void DatabaseAPI/OnLoadedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoadedDelegate__ctor_mB53E1F643C309D8722DFE790D1B350926670812A (OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C_Multicast;
}
// System.Void DatabaseAPI/OnLoadedDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoadedDelegate_Invoke_m871C3B763AC670A082384D2199E1723D6290EC3C (OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, String_t* ___jsonData0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___jsonData0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DatabaseAPI/OnLoadedDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnLoadedDelegate_BeginInvoke_mFBEA4B9A4252D9A8FFCD49CA72AB315FBC70C736 (OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, String_t* ___jsonData0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___jsonData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void DatabaseAPI/OnLoadedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoadedDelegate_EndInvoke_mEE1B2B072B76B1499549A8736893925E465771FB (OnLoadedDelegate_tDB65C445FD4AEEA103E5C840AF5FA23B420ACEB4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DatabaseAPI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFD8C0467B49C0F8253C3175C4461C25BB1954681 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* L_0 = (U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104*)il2cpp_codegen_object_new(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m22C1B62301BA90D9CF0A6380CE1DAAE1E4273FD7(L_0, NULL);
		((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DatabaseAPI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22C1B62301BA90D9CF0A6380CE1DAAE1E4273FD7 (U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DatabaseAPI/<>c::<LoadDataMultiple>b__13_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadDataMultipleU3Eb__13_0_m1997AD1E924D923BD6F75D3347AFEE850B2C50AD (U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* __this, Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// string jsonData = task.Result.GetRawJsonValue();
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_0 = ___task0;
		NullCheck(L_0);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_1;
		L_1 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_0, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591(L_1, NULL);
		// if (task.Exception != null)
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_3 = ___task0;
		NullCheck(L_3);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_4;
		L_4 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_3, NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogWarning(task.Exception);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_5 = ___task0;
		NullCheck(L_5);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6;
		L_6 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_6, NULL);
	}

IL_001f:
	{
		// foreach (var item in task.Result.Children)
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_7 = ___task0;
		NullCheck(L_7);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_8;
		L_8 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_7, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = DataSnapshot_get_Children_m5A77ABE26BB1750F85677DF6E03D02560F6F6632(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var, L_9);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_0;
					if (!L_11)
					{
						goto IL_0055;
					}
				}
				{
					RuntimeObject* L_12 = V_0;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_0032_1:
			{
				// foreach (var item in task.Result.Children)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_14;
				L_14 = InterfaceFuncInvoker0< DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var, L_13);
				// Debug.Log(item.GetRawJsonValue());
				NullCheck(L_14);
				String_t* L_15;
				L_15 = DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591(L_14, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
			}

IL_0042_1:
			{
				// foreach (var item in task.Result.Children)
				RuntimeObject* L_16 = V_0;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// });
		return;
	}
}
// System.Void DatabaseAPI/<>c::<SimpleSignIn>b__14_0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSimpleSignInU3Eb__14_0_mD22C85C461475CBE2A5B0A507D18DC09789DD71F (U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DAD4B412BEFB535CF54146E048A5A42C9885B40);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_0 = NULL;
	{
		// if (task.Exception != null)
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = ___task0;
		NullCheck(L_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_1;
		L_1 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning(task.Exception);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_2 = ___task0;
		NullCheck(L_2);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_3;
		L_3 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_3, NULL);
		return;
	}

IL_0014:
	{
		// FirebaseUser newUser = task.Result;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_4 = ___task0;
		NullCheck(L_4);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_5;
		L_5 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_4, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		V_0 = L_5;
		// Debug.LogFormat("User signed in successfully: {0} ({1})",
		//     newUser.DisplayName, newUser.UserId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = FirebaseUser_get_DisplayName_m813DCB1BFDE089FBF49FF697E77A48C85183CC6C(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral5DAD4B412BEFB535CF54146E048A5A42C9885B40, L_10, NULL);
		// LoginSuccessful.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___LoginSuccessful_6;
		NullCheck(L_13);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_13, NULL);
		// });
		return;
	}
}
// System.Void DatabaseAPI/<>c::<DataTest>b__15_0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CDataTestU3Eb__15_0_mCDEA0679F94FCA7E0B6B4FB2DE29AE0C843621A7 (U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75BE285870029084FFACFEB0B2472DD5862F9913);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.Exception != null)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___task0;
		NullCheck(L_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_1;
		L_1 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning(task.Exception);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___task0;
		NullCheck(L_2);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_3;
		L_3 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_3, NULL);
		return;
	}

IL_0014:
	{
		// Debug.Log("DataTestWrite: Complete");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral75BE285870029084FFACFEB0B2472DD5862F9913, NULL);
		// });
		return;
	}
}
// System.Void DatabaseAPI/<>c::<RegisterNewUser>b__16_0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterNewUserU3Eb__16_0_m876EEB0EEFBAAC942FAF705E71A835682B221DD3 (U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA821BC887FE90FD4673136323F4710B2A897B458);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_0 = NULL;
	{
		// if (task.Exception != null)
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = ___task0;
		NullCheck(L_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_1;
		L_1 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning(task.Exception);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_2 = ___task0;
		NullCheck(L_2);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_3;
		L_3 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_3, NULL);
		return;
	}

IL_0014:
	{
		// FirebaseUser newUser = task.Result;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_4 = ___task0;
		NullCheck(L_4);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_5;
		L_5 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_4, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		V_0 = L_5;
		// Debug.LogFormat("User Registered: {0} ({1})",
		//     newUser.DisplayName, newUser.UserId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = FirebaseUser_get_DisplayName_m813DCB1BFDE089FBF49FF697E77A48C85183CC6C(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralA821BC887FE90FD4673136323F4710B2A897B458, L_10, NULL);
		// });
		return;
	}
}
// System.Void DatabaseAPI/<>c::<SignIn>b__17_0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSignInU3Eb__17_0_m3EB24E71E87AC61CF9A10C149DB48F95354162C4 (U3CU3Ec_t6AB45FA4100F7C2F0C7C22099698BAD0A4534104* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DAD4B412BEFB535CF54146E048A5A42C9885B40);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_0 = NULL;
	{
		// if (task.Exception != null)
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = ___task0;
		NullCheck(L_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_1;
		L_1 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning(task.Exception);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_2 = ___task0;
		NullCheck(L_2);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_3;
		L_3 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_3, NULL);
		return;
	}

IL_0014:
	{
		// FirebaseUser newUser = task.Result;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_4 = ___task0;
		NullCheck(L_4);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_5;
		L_5 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_4, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		V_0 = L_5;
		// Debug.LogFormat("User signed in successfully: {0} ({1})",
		//     newUser.DisplayName, newUser.UserId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = FirebaseUser_get_DisplayName_m813DCB1BFDE089FBF49FF697E77A48C85183CC6C(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral5DAD4B412BEFB535CF54146E048A5A42C9885B40, L_10, NULL);
		// LoginSuccessful.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = ((DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90_il2cpp_TypeInfo_var))->___LoginSuccessful_6;
		NullCheck(L_13);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_13, NULL);
		// });
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
// System.Void DatabaseAPI/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m4F3A6F5103942E49EF5E39353CDC78BAF9559DF9 (U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DatabaseAPI/<>c__DisplayClass21_0::<SendAction>b__0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CSendActionU3Eb__0_m0799679B1D9BA85E4B39CB14C685758342BA9EF8 (U3CU3Ec__DisplayClass21_0_t831D33EE31799E6C68FCC0A3DC539AAC76E135E0* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) 
{
	{
		// if (task.IsCanceled || task.IsFaulted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___task0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}

IL_0010:
	{
		// fallback(task.Exception);
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_4 = __this->___fallback_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = ___task0;
		NullCheck(L_5);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6;
		L_6 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_5, NULL);
		NullCheck(L_4);
		Action_1_Invoke_m9288FB33A518B5F8989A24AC20D8A125114DC406_inline(L_4, L_6, NULL);
		return;
	}

IL_0022:
	{
		// else callback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = __this->___callback_1;
		NullCheck(L_7);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_7, NULL);
		// });
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
// System.Void DatabaseAPI/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mD6179E717CB4D051525044F22966ADB6220A0FD3 (U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DatabaseAPI/<>c__DisplayClass22_0::<ListenForEnemyAction>g__CurrentListener|0(System.Object,Firebase.Database.ChildChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CListenForEnemyActionU3Eg__CurrentListenerU7C0_m1AAEF8182E88614D17FC63879B6B7AB279701231 (U3CU3Ec__DisplayClass22_0_t9F79A0FE8B186C57F0A822DF0926360EA2390B40* __this, RuntimeObject* ___o0, ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223_m5C034FFFB0D1490C085D140EEF8CA2B163E820B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (args.DatabaseError != null) fallback(new AggregateException(new Exception(args.DatabaseError.Message)));
		ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* L_0 = ___args1;
		NullCheck(L_0);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_1;
		L_1 = ChildChangedEventArgs_get_DatabaseError_m3E2E8C34E3295739FB544BFB47819616B11DF07C_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (args.DatabaseError != null) fallback(new AggregateException(new Exception(args.DatabaseError.Message)));
		Action_1_t61593C338E105ED3F15948F7A591D59808D3CB3C* L_2 = __this->___fallback_0;
		ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* L_3 = (ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C*)(ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C*)SZArrayNew(ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C_il2cpp_TypeInfo_var, (uint32_t)1);
		ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* L_4 = L_3;
		ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* L_5 = ___args1;
		NullCheck(L_5);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_6;
		L_6 = ChildChangedEventArgs_get_DatabaseError_m3E2E8C34E3295739FB544BFB47819616B11DF07C_inline(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE_inline(L_6, NULL);
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, L_7, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Exception_t*)L_8);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_9 = (AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)il2cpp_codegen_object_new(AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AggregateException__ctor_mE5898BED8E2DBD0CDB82837AEF7E9A26A6074AA9(L_9, L_4, NULL);
		NullCheck(L_2);
		Action_1_Invoke_m9288FB33A518B5F8989A24AC20D8A125114DC406_inline(L_2, L_9, NULL);
		return;
	}

IL_0032:
	{
		// else callback(JsonUtility.FromJson<PlayerInfo>(args.Snapshot.GetRawJsonValue()));
		Action_1_t574E3469EDEC78DB2275F8C5D32A6BEDF8BBC64A* L_10 = __this->___callback_1;
		ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* L_11 = ___args1;
		NullCheck(L_11);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_12;
		L_12 = ChildChangedEventArgs_get_Snapshot_m100ACE866E445C613AEC004CF99B9EED54C6F270_inline(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = DataSnapshot_GetRawJsonValue_m1C68374C193D549348050EC403C01F68AB3A1591(L_12, NULL);
		PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* L_14;
		L_14 = JsonUtility_FromJson_TisPlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223_m5C034FFFB0D1490C085D140EEF8CA2B163E820B9(L_13, JsonUtility_FromJson_TisPlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223_m5C034FFFB0D1490C085D140EEF8CA2B163E820B9_RuntimeMethod_var);
		NullCheck(L_10);
		Action_1_Invoke_mB1637BACEE96F2284A0EA195CB50EFFD9EF4C108_inline(L_10, L_14, NULL);
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
// System.Void PlayerHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_Awake_m3089A9E74F9A9776083B128E1405FCC59DED6E41 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHandler_U3CAwakeU3Eb__5_0_mC5505CE2CE7EE078231AD24B61AE521462E2F9B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider.onValueChanged.AddListener(delegate { SetColor(); });
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_6;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)PlayerHandler_U3CAwakeU3Eb__5_0_mC5505CE2CE7EE078231AD24B61AE521462E2F9B2_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_1, L_2, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// DatabaseAPI.Instance.LoadFromFirebase();
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_3;
		L_3 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		NullCheck(L_3);
		DatabaseAPI_LoadFromFirebase_mD1A08021B5DB2522A191D45BC93534CFFE403592(L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerHandler::LoadColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_LoadColor_m6378313161E667B04290752BCBC9A284D2CDA10A (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, String_t* ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181609EFAE5EC9C856AD1AC942072280C195A474);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30D71740CA7916667382A631E50177702C30C707);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral485D3F0A6F15241C80F33933679BC4E5D9AC2AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA72E5A6E1AB0EFE1738D765BF25A9F7393420EBD);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// Debug.Log("LoadColor: " + color);
		String_t* L_0 = ___color0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA72E5A6E1AB0EFE1738D765BF25A9F7393420EBD, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// float colorFloat = float.Parse(color);
		String_t* L_2 = ___color0;
		float L_3;
		L_3 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_2, NULL);
		V_0 = L_3;
		// Debug.Log("Float: " + colorFloat);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral181609EFAE5EC9C856AD1AC942072280C195A474, L_4, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// slider.value = colorFloat;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = __this->___slider_6;
		float L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_7);
		// Debug.Log("Slider value is: " + slider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___slider_6;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		V_1 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral485D3F0A6F15241C80F33933679BC4E5D9AC2AF7, L_10, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// playerColor.color = Color.HSVToRGB(slider.value, 0.85f,0.85f );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___playerColor_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_13 = __this->___slider_6;
		NullCheck(L_13);
		float L_14;
		L_14 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_14, (0.850000024f), (0.850000024f), NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_15);
		// Debug.Log("N?got ?r knas");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral30D71740CA7916667382A631E50177702C30C707, NULL);
		// }
		return;
	}
}
// System.Void PlayerHandler::SetColorToBlue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_SetColorToBlue_mD20E8C2487F681D148BE0608997554FC45339803 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	{
		// slider.value = 0.6f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_6;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (0.600000024f));
		// }
		return;
	}
}
// System.Void PlayerHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_Update_m96206795F36877BC6DAA415738F1C5871202DB0A (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	{
		// SetColor();
		PlayerHandler_SetColor_m037A995A11DC202ED6E34C805B042680AB231231(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerHandler::SetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_SetColor_m037A995A11DC202ED6E34C805B042680AB231231 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	{
		// playerColor.color = Color.HSVToRGB(slider.value, 0.85f,0.85f );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___playerColor_7;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_6;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_2, (0.850000024f), (0.850000024f), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void PlayerHandler::SaveColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_SaveColor_mB4D8839D5B4454F091C2A4749483B0936FAB5136 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// DatabaseAPI.Instance.SaveToFirebase(slider.value.ToString());
		DatabaseAPI_t452C2BE9108F20F28328031825BB07E89E900C90* L_0;
		L_0 = DatabaseAPI_get_Instance_m5A490656E49EA4CC07A13D81E153577B2A7C7DF7(NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_6;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_0);
		DatabaseAPI_SaveToFirebase_mFC39570E925B8028411CC2B69D7CEE981F6D9189(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler__ctor_m7BD446FA50C46A82EBD9FF916A2994C4D77D69F4 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PlayerHandler::<Awake>b__5_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_U3CAwakeU3Eb__5_0_mC5505CE2CE7EE078231AD24B61AE521462E2F9B2 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, float ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// slider.onValueChanged.AddListener(delegate { SetColor(); });
		PlayerHandler_SetColor_m037A995A11DC202ED6E34C805B042680AB231231(__this, NULL);
		// slider.onValueChanged.AddListener(delegate { SetColor(); });
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
// System.Void PlayerInfo::.ctor(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInfo__ctor_mE265E47FE3A99A339B8D08225D3B4B5C7F8B3057 (PlayerInfo_tC66DD3EB75091432EAF7085658AC2B0065A41223* __this, String_t* ___playerID0, float ___playerReactionTime1, const RuntimeMethod* method) 
{
	{
		// public PlayerInfo(string playerID, float playerReactionTime)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.playerID = playerID;
		String_t* L_0 = ___playerID0;
		__this->___playerID_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerID_0), (void*)L_0);
		// this.playerReactionTime = playerReactionTime;
		float L_1 = ___playerReactionTime1;
		__this->___playerReactionTime_1 = L_1;
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
// System.Void SceneHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_Start_m4075C3F571ED56FDD3C05296DF0931B63D30E326 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1090161D0379725282A0205A6F1840BED277027B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A503577F690479C6F3AA7A4D17FDBD623714E67);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetSceneByName("Matchmaking").isLoaded)
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9(_stringLiteral3A503577F690479C6F3AA7A4D17FDBD623714E67, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Invoke(nameof(ConnectToGame), 2f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral1090161D0379725282A0205A6F1840BED277027B, (2.0f), NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void SceneHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_OnEnable_mB6D780EBC6379238BACB5EFD3355B03352FEFB54 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneHandler_LoginSuccessful_m5C1A18F34B33AF62320417247EA2EC84C74B5DAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DatabaseAPI.LoginSuccessful += LoginSuccessful;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)SceneHandler_LoginSuccessful_m5C1A18F34B33AF62320417247EA2EC84C74B5DAE_RuntimeMethod_var), NULL);
		DatabaseAPI_add_LoginSuccessful_m543213F71A566F37A021B16B8F31520B57CB5A2C(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_OnDisable_mB643EEF0995DE491C6319FC61BB298A446BED537 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneHandler_LoginSuccessful_m5C1A18F34B33AF62320417247EA2EC84C74B5DAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DatabaseAPI.LoginSuccessful -= LoginSuccessful;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)SceneHandler_LoginSuccessful_m5C1A18F34B33AF62320417247EA2EC84C74B5DAE_RuntimeMethod_var), NULL);
		DatabaseAPI_remove_LoginSuccessful_m7718D00DDFFCC546A2682BBE7279302C17AED36F(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneHandler::GoToMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_GoToMainMenu_m18F385F794CFF874D83A6A198CB7E8F8340B0690 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return;
	}
}
// System.Void SceneHandler::LoginSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_LoginSuccessful_m5C1A18F34B33AF62320417247EA2EC84C74B5DAE (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4CA2323B213118FDA106B0C7026519D746F31D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MatchMaking");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF4CA2323B213118FDA106B0C7026519D746F31D4, NULL);
		// }
		return;
	}
}
// System.Void SceneHandler::ConnectToGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_ConnectToGame_m68BFBA97CBF85ACB07DDAE613E87DFA56E397560 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GamePlay");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, NULL);
		// }
		return;
	}
}
// System.Void SceneHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler__ctor_m344669B2EC0EC11DCF76A16B7127D50324641B68 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
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
// System.Void Sequence::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_Start_mD0B7540CF916915768694A14D70CAF2199EE5766 (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, const RuntimeMethod* method) 
{
	{
		// CreateSequence(4);
		Sequence_CreateSequence_m48E50538495ADA06C542CD34CAA37376737F0454(__this, 4, NULL);
		// }
		return;
	}
}
// System.Void Sequence::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_Update_m56820AB5F082A2714B2FC2763830D61DA6E69FAA (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetSceneByName("GamePlay").isLoaded == true)
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC((&V_0), NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// currentSequenceItem = currentSequence[item];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___currentSequence_4;
		int32_t L_3 = __this->___item_10;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_2, L_3, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		__this->___currentSequenceItem_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSequenceItem_8), (void*)L_4);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Sequence::CreateSequence(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_CreateSequence_m48E50538495ADA06C542CD34CAA37376737F0454 (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, int32_t ___lengthOfSequence0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873_mDA7B46F57BBC3E14B5643DF8D9907E4F8125C2F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m30797A03C735FCE9FC1DF0606BA53A04ED3E519A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// for (int i = 0; i < lengthOfSequence; i++)
		V_0 = 0;
		goto IL_00cc;
	}

IL_0007:
	{
		// var randomDirection = Random.Range(0, 3);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		V_1 = L_0;
		// var newArrow = Instantiate(sequenceItemPrefab, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___sequenceItemPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_2 = L_5;
		// newArrow.transform.SetParent(sequenceTransform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___sequenceTransform_7;
		NullCheck(L_7);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_7, L_8, (bool)0, NULL);
		// newArrow.GetComponent<Image>().sprite = newArrow.GetComponent<SequenceItem>().possibleActions[randomDirection];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		NullCheck(L_9);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10;
		L_10 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_9, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		SequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873* L_12;
		L_12 = GameObject_GetComponent_TisSequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873_mDA7B46F57BBC3E14B5643DF8D9907E4F8125C2F6(L_11, GameObject_GetComponent_TisSequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873_mDA7B46F57BBC3E14B5643DF8D9907E4F8125C2F6_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_13 = L_12->___possibleActions_4;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15;
		L_15 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_13, L_14, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_15, NULL);
		// currentItemImage.Add(newArrow.GetComponent<Image>());
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_16 = __this->___currentItemImage_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
		NullCheck(L_17);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18;
		L_18 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_17, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_16);
		List_1_Add_m30797A03C735FCE9FC1DF0606BA53A04ED3E519A_inline(L_16, L_18, List_1_Add_m30797A03C735FCE9FC1DF0606BA53A04ED3E519A_RuntimeMethod_var);
		int32_t L_19 = V_1;
		switch (L_19)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_00a6;
			}
			case 3:
			{
				goto IL_00b8;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_0082:
	{
		// currentSequence.Add("right");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = __this->___currentSequence_4;
		NullCheck(L_20);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_20, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_00c8;
	}

IL_0094:
	{
		// currentSequence.Add("left");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = __this->___currentSequence_4;
		NullCheck(L_21);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_21, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_00c8;
	}

IL_00a6:
	{
		// currentSequence.Add("up");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = __this->___currentSequence_4;
		NullCheck(L_22);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_22, _stringLiteral1B22F82E513C1BB368DFDBFDFB5FB8C1178CA305, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// break;
		goto IL_00c8;
	}

IL_00b8:
	{
		// currentSequence.Add("down");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = __this->___currentSequence_4;
		NullCheck(L_23);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_23, _stringLiteral5379C25D8F9979AD371949D2F3201B2D326743A4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_00c8:
	{
		// for (int i = 0; i < lengthOfSequence; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00cc:
	{
		// for (int i = 0; i < lengthOfSequence; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = ___lengthOfSequence0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Sequence::CompareInputWithSequence(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_CompareInputWithSequence_mE86C6C4C02A8B764EDC7D18EF1E4406950F3B15B (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, String_t* ___buttonID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonID == currentSequenceItem)
		String_t* L_0 = ___buttonID0;
		String_t* L_1 = __this->___currentSequenceItem_8;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// inputMatchSequence = true;
		__this->___inputMatchSequence_9 = (bool)1;
		// currentItemImage[item].color = Color.green;
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_3 = __this->___currentItemImage_5;
		int32_t L_4 = __this->___item_10;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4(L_3, L_4, List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		goto IL_0054;
	}

IL_0032:
	{
		// inputMatchSequence = false;
		__this->___inputMatchSequence_9 = (bool)0;
		// currentItemImage[item].color = Color.red;
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_7 = __this->___currentItemImage_5;
		int32_t L_8 = __this->___item_10;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4(L_7, L_8, List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
	}

IL_0054:
	{
		// UpdateSequence();
		Sequence_UpdateSequence_mB6C4819B5C9674D830E3263749F2ED5536D83EF2(__this, NULL);
		// }
		return;
	}
}
// System.Void Sequence::UpdateSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_UpdateSequence_mB6C4819B5C9674D830E3263749F2ED5536D83EF2 (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBDA4CCE95ED7C4964BF58BE4079D52CC515C41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (item != currentSequence.Count - 1)
		int32_t L_0 = __this->___item_10;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___currentSequence_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0024;
		}
	}
	{
		// item++;
		int32_t L_3 = __this->___item_10;
		__this->___item_10 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}

IL_0024:
	{
		// item = 0;
		__this->___item_10 = 0;
		// Invoke(nameof(NewSequence), 0.2f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralECBDA4CCE95ED7C4964BF58BE4079D52CC515C41, (0.200000003f), NULL);
		// }
		return;
	}
}
// System.Void Sequence::NewSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_NewSequence_m8CE8BBDAE427639B0E80B7A169EC82D59A45C0BB (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m14A218880BA483B4CA1462CB44A852582C1E953A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentSequence.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___currentSequence_4;
		NullCheck(L_0);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_0, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// currentItemImage.Clear();
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_1 = __this->___currentItemImage_5;
		NullCheck(L_1);
		List_1_Clear_m14A218880BA483B4CA1462CB44A852582C1E953A_inline(L_1, List_1_Clear_m14A218880BA483B4CA1462CB44A852582C1E953A_RuntimeMethod_var);
		// DestroySequence();
		Sequence_DestroySequence_m07D5050A72767EF5A41908B5078BCE1C50F669BE(__this, NULL);
		// CreateSequence(4);
		Sequence_CreateSequence_m48E50538495ADA06C542CD34CAA37376737F0454(__this, 4, NULL);
		// }
		return;
	}
}
// System.Void Sequence::DestroySequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_DestroySequence_m07D5050A72767EF5A41908B5078BCE1C50F669BE (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (Transform child in sequenceTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___sequenceTransform_7;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_000e_1:
			{
				// foreach (Transform child in sequenceTransform)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(child.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_0023_1:
			{
				// foreach (Transform child in sequenceTransform)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Sequence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence__ctor_m29E605CBCBB516343C628DC75A12F09D7C08D895 (Sequence_tDBB5554C0515568317CC3075FF030825286CDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> currentSequence = new();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___currentSequence_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSequence_4), (void*)L_0);
		// public List<Image> currentItemImage = new();
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_1 = (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19*)il2cpp_codegen_object_new(List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D(L_1, List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D_RuntimeMethod_var);
		__this->___currentItemImage_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentItemImage_5), (void*)L_1);
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
// System.Void SequenceItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequenceItem__ctor_mFE812680D1719FA3B2DC39F73CB715DE86158FA9 (SequenceItem_tAD47C7C655011AF6B5CD9D81A1191D81E0A7E873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Sprite> possibleActions = new();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_0, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->___possibleActions_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___possibleActions_4), (void*)L_0);
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
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_m6820D211A06B2E5E24795D7EBE67EE865F39BC43 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// timeValue = playerTime;
		float L_0 = __this->___playerTime_6;
		__this->___timeValue_5 = L_0;
		// timerOn = true;
		__this->___timerOn_7 = (bool)1;
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m3AC30EFD54E8E1010F6E601AE179212E71E6B2CD (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// if (timerOn)
		bool L_0 = __this->___timerOn_7;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// timeValue += Time.deltaTime;
		float L_1 = __this->___timeValue_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeValue_5 = ((float)il2cpp_codegen_add(L_1, L_2));
		goto IL_0027;
	}

IL_001c:
	{
		// timeValue = 0;
		__this->___timeValue_5 = (0.0f);
	}

IL_0027:
	{
		// DisplayTime(timeValue);
		float L_3 = __this->___timeValue_5;
		Timer_DisplayTime_m0C2F09C5C83D3690074D77FAE3AE0A8DDBB647E9(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Timer::DisplayTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_DisplayTime_m0C2F09C5C83D3690074D77FAE3AE0A8DDBB647E9 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, float ___timeToDisplay0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float seconds = timeValue % 60;
		float L_0 = __this->___timeValue_5;
		V_0 = (fmodf(L_0, (60.0f)));
		// timerText.text = string.Format("{0:00}", seconds);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___timerText_4;
		float L_2 = V_0;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3, L_4, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Single Timer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Timer_GetCurrentTime_m29A07228820A4E675991DAD9D907C7007BD41E72 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// float seconds = timeValue % 60;
		float L_0 = __this->___timeValue_5;
		// return seconds;
		return (fmodf(L_0, (60.0f)));
	}
}
// System.Void Timer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Reset_mE76F5A192F38D2B18349B481D3D18891F4D2A63F (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		// timeValue = 0;
		__this->___timeValue_5 = (0.0f);
		// }
		return;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m5FF13F1DAD0527F97E229A1904A8AD662731C4B5 (Timer_t2FE811324BD2C741B8D6EBC18E20230874E35A20* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ChildChangedEventArgs_get_DatabaseError_m3E2E8C34E3295739FB544BFB47819616B11DF07C_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, const RuntimeMethod* method) 
{
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = __this->___U3CDatabaseErrorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ChildChangedEventArgs_get_Snapshot_m100ACE866E445C613AEC004CF99B9EED54C6F270_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, const RuntimeMethod* method) 
{
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = __this->___U3CSnapshotU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___H0;
		float L_1 = ___S1;
		float L_2 = ___V2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
