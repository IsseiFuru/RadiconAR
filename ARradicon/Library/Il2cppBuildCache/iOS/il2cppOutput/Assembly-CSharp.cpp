﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25;
// System.Action`1<System.Char>
struct Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>
struct Action_1_tE686CB45310C93027FB8807EA850F98C6359CFDC;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>
struct Action_1_t6475D5D91A13ED3DABF991AABA92EA0A37A390A2;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t60883A4CFEE1C0A716394E3EE73F871D77F80B55;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB5E2CD2A901D793313BBCF6D6FE1332A7777DC6E;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tB353249C3A9426006E3B35E1A984C36C636E0AD8;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_tB4733AEB4365F5C621193590A8A6F53E3A0E61FA;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0D7774CBEE7827744440205CF327276346298BD3;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t69444E6E06FA6776283024710ADC0302F2700BFD;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_tAE84735071B78277703DB9996DE2E5C4456317C5;
// System.Collections.Generic.List`1<ARradicon.Car/AxleInfo>
struct List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Action`1<System.Char>[]
struct Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>[]
struct Action_1U5BU5D_tD84CA1853924C86FD517B4D7A7E87D49BAA73A41;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>[]
struct Action_1U5BU5D_tD20E5CCCE01D5DCAF7978D26BAB68EA449EE48C4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>[]
struct Action_2U5BU5D_t964BAA23876B6439197CD9848EA20D6E8509FA45;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>[]
struct Action_3U5BU5D_t92203D605F11CC13CE42F8D1A91831E5C1462FF9;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>[]
struct Func_3U5BU5D_tE06D1FF2EB9A6305AC3B19E79AC9DB6D5DC5A07D;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tB15D20D7F6055DC631E18756771B3586B402B843;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_tECC65D7E585BEDA7CC2049A4E4EAA5CD6EC63296;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD;
// UnityEngine.InputSystem.Controls.KeyControl[]
struct KeyControlU5BU5D_t631D22F097B730844D53A2E96BC75B023707E135;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_tB15C531F8446E5BB53123716B7E6DDFF07263A6F;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ARradicon.Car/AxleInfo[]
struct AxleInfoU5BU5D_t1DDB34D69F79D2622D3900BB80CBC0A7EDE4B795;
// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t44D489D7EACD8EA0F9F44A9645249D88E19FA9FF;
// UnityEngine.InputSystem.Users.InputUser/UserData[]
struct UserDataU5BU5D_t50823987F5D169B74554D503AE1CE25F8DF4049E;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_tE2DC6350A80CC3DA4ECAC5632F9C589B67743D39;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.InputSystem.Controls.AnyKeyControl
struct AnyKeyControl_t662EBC0B49B972084F39121A2DB1CCCA60AF3680;
// ARradicon.AppearOnPlane
struct AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// AudioSwitch
struct AudioSwitch_t2115C8EE2B722778C2A571A2DB068579CC412A01;
// ARradicon.BackTitle
struct BackTitle_t002326B021598D64FFA47066ED227ADEF5427A8A;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraSwitch
struct CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// ARradicon.Car
struct Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// ARradicon.GameStart
struct GameStart_t8996BAFAB7A9A5C4117955D246085E5944A3AB1B;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B;
// UnityEngine.InputSystem.UI.InputSystemUIInputModule
struct InputSystemUIInputModule_t667C409072ACE6A5F7D0A1AE382404C8F1096B6E;
// UnityEngine.InputSystem.InputValue
struct InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t05A114EE80E1DAACBA39E345B06EAC8101F1BB78;
// UnityEngine.InputSystem.Keyboard
struct Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1;
// LevelReset
struct LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// ARradicon.LightEstimation
struct LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuSceneLoader
struct MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityStandardAssets.SceneUtils.ParticleSceneControls
struct ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646;
// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// SceneAndURLLoader
struct SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// ARradicon.Car/AxleInfo
struct AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E;
// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent
struct ControlsChangedEvent_tC088D8DBBCA3C07B69CEC4B0B528E42AB55C5BE4;
// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent
struct DeviceLostEvent_t0B0A9B20C8BB1B8A5D9C075684274171CB0186BE;
// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent
struct DeviceRegainedEvent_t28F3A952F7181DCD734ED096CA71B4E82C2BA2CB;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F0FE817E5A43233622FDB8C665DA9E616668DA3;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4CE604FB387971B1B1B634FE7B9B0E52DA841259;
IL2CPP_EXTERN_C String_t* _stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCB58ADA4BAD8DDF4649F957E605B9DA589188AF8;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_mFABB52C3F831D88EBB501F539B3BA598D7F569E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8128C06B570552EB33AC3CFC2ABEBE314EDFED2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9AE657FA69C10CC8F6BC20D22F0B10433867C95E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m08CE17A35A12D72D03DFB519D8087054EDEAB5D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mFB21C5C839A2974F31F46066906360F8975F69F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LightEstimation_FrameChanged_m5943C3759F72B6F6D3C7A0B36BDF6336FC8A205E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m29D34F8221DCA8524FD880AA750524326A01A387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mE17E1034CE9FC6D3E512287D4365DBD58EDF5376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mCF8EA21EB849E629CB12759C7751EC75A9404528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212 ;
struct UserData_tFA4DBE0658A3759DDAAEE227A2E926F926B5EE6F_marshaled_com;
struct UserData_tFA4DBE0658A3759DDAAEE227A2E926F926B5EE6F_marshaled_pinvoke;

struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____items_1)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__items_1() const { return ____items_1; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields, ____emptyArray_5)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____items_1)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__items_1() const { return ____items_1; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields, ____emptyArray_5)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ARradicon.Car/AxleInfo>
struct List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AxleInfoU5BU5D_t1DDB34D69F79D2622D3900BB80CBC0A7EDE4B795* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678, ____items_1)); }
	inline AxleInfoU5BU5D_t1DDB34D69F79D2622D3900BB80CBC0A7EDE4B795* get__items_1() const { return ____items_1; }
	inline AxleInfoU5BU5D_t1DDB34D69F79D2622D3900BB80CBC0A7EDE4B795** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AxleInfoU5BU5D_t1DDB34D69F79D2622D3900BB80CBC0A7EDE4B795* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AxleInfoU5BU5D_t1DDB34D69F79D2622D3900BB80CBC0A7EDE4B795* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678_StaticFields, ____emptyArray_5)); }
	inline AxleInfoU5BU5D_t1DDB34D69F79D2622D3900BB80CBC0A7EDE4B795* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AxleInfoU5BU5D_t1DDB34D69F79D2622D3900BB80CBC0A7EDE4B795** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AxleInfoU5BU5D_t1DDB34D69F79D2622D3900BB80CBC0A7EDE4B795* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// ARradicon.Car/AxleInfo
struct AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B  : public RuntimeObject
{
public:
	// UnityEngine.WheelCollider ARradicon.Car/AxleInfo::leftWheel
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___leftWheel_0;
	// UnityEngine.WheelCollider ARradicon.Car/AxleInfo::rightWheel
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___rightWheel_1;
	// System.Boolean ARradicon.Car/AxleInfo::motor
	bool ___motor_2;
	// System.Boolean ARradicon.Car/AxleInfo::steering
	bool ___steering_3;

public:
	inline static int32_t get_offset_of_leftWheel_0() { return static_cast<int32_t>(offsetof(AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B, ___leftWheel_0)); }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * get_leftWheel_0() const { return ___leftWheel_0; }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** get_address_of_leftWheel_0() { return &___leftWheel_0; }
	inline void set_leftWheel_0(WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		___leftWheel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftWheel_0), (void*)value);
	}

	inline static int32_t get_offset_of_rightWheel_1() { return static_cast<int32_t>(offsetof(AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B, ___rightWheel_1)); }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * get_rightWheel_1() const { return ___rightWheel_1; }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** get_address_of_rightWheel_1() { return &___rightWheel_1; }
	inline void set_rightWheel_1(WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		___rightWheel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightWheel_1), (void*)value);
	}

	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B, ___motor_2)); }
	inline bool get_motor_2() const { return ___motor_2; }
	inline bool* get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(bool value)
	{
		___motor_2 = value;
	}

	inline static int32_t get_offset_of_steering_3() { return static_cast<int32_t>(offsetof(AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B, ___steering_3)); }
	inline bool get_steering_3() const { return ___steering_3; }
	inline bool* get_address_of_steering_3() { return &___steering_3; }
	inline void set_steering_3(bool value)
	{
		___steering_3 = value;
	}
};


// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E  : public RuntimeObject
{
public:
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[] UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList::items
	DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E, ___items_0)); }
	inline DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* get_items_0() const { return ___items_0; }
	inline DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<ARradicon.Car/AxleInfo>
struct Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563, ___list_0)); }
	inline List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 * get_list_0() const { return ___list_0; }
	inline List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563, ___current_3)); }
	inline AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * get_current_3() const { return ___current_3; }
	inline AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>>
struct InlinedArray_1_tD457753D3A5A98E93452F4CB53191E415733A208 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD457753D3A5A98E93452F4CB53191E415733A208, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD457753D3A5A98E93452F4CB53191E415733A208, ___firstValue_1)); }
	inline Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD457753D3A5A98E93452F4CB53191E415733A208, ___additionalValues_2)); }
	inline Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>>
struct InlinedArray_1_t472E918FFB1ECC20DABD56600F71A326D3D8E8FD 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tE686CB45310C93027FB8807EA850F98C6359CFDC * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tD84CA1853924C86FD517B4D7A7E87D49BAA73A41* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t472E918FFB1ECC20DABD56600F71A326D3D8E8FD, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t472E918FFB1ECC20DABD56600F71A326D3D8E8FD, ___firstValue_1)); }
	inline Action_1_tE686CB45310C93027FB8807EA850F98C6359CFDC * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tE686CB45310C93027FB8807EA850F98C6359CFDC ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tE686CB45310C93027FB8807EA850F98C6359CFDC * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t472E918FFB1ECC20DABD56600F71A326D3D8E8FD, ___additionalValues_2)); }
	inline Action_1U5BU5D_tD84CA1853924C86FD517B4D7A7E87D49BAA73A41* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_tD84CA1853924C86FD517B4D7A7E87D49BAA73A41** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_tD84CA1853924C86FD517B4D7A7E87D49BAA73A41* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t6475D5D91A13ED3DABF991AABA92EA0A37A390A2 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tD20E5CCCE01D5DCAF7978D26BAB68EA449EE48C4* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A, ___firstValue_1)); }
	inline Action_1_t6475D5D91A13ED3DABF991AABA92EA0A37A390A2 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t6475D5D91A13ED3DABF991AABA92EA0A37A390A2 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t6475D5D91A13ED3DABF991AABA92EA0A37A390A2 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A, ___additionalValues_2)); }
	inline Action_1U5BU5D_tD20E5CCCE01D5DCAF7978D26BAB68EA449EE48C4* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_tD20E5CCCE01D5DCAF7978D26BAB68EA449EE48C4** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_tD20E5CCCE01D5DCAF7978D26BAB68EA449EE48C4* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A, ___firstValue_1)); }
	inline Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A, ___additionalValues_2)); }
	inline Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t9E4A9A4CF1E83372C1E29CA1CC2F5D356E039210* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t60883A4CFEE1C0A716394E3EE73F871D77F80B55 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_t964BAA23876B6439197CD9848EA20D6E8509FA45* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0, ___firstValue_1)); }
	inline Action_2_t60883A4CFEE1C0A716394E3EE73F871D77F80B55 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_t60883A4CFEE1C0A716394E3EE73F871D77F80B55 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_t60883A4CFEE1C0A716394E3EE73F871D77F80B55 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0, ___additionalValues_2)); }
	inline Action_2U5BU5D_t964BAA23876B6439197CD9848EA20D6E8509FA45* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_t964BAA23876B6439197CD9848EA20D6E8509FA45** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_t964BAA23876B6439197CD9848EA20D6E8509FA45* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_3_tB353249C3A9426006E3B35E1A984C36C636E0AD8 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_3U5BU5D_t92203D605F11CC13CE42F8D1A91831E5C1462FF9* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06, ___firstValue_1)); }
	inline Action_3_tB353249C3A9426006E3B35E1A984C36C636E0AD8 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_3_tB353249C3A9426006E3B35E1A984C36C636E0AD8 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_3_tB353249C3A9426006E3B35E1A984C36C636E0AD8 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06, ___additionalValues_2)); }
	inline Action_3U5BU5D_t92203D605F11CC13CE42F8D1A91831E5C1462FF9* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_3U5BU5D_t92203D605F11CC13CE42F8D1A91831E5C1462FF9** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_3U5BU5D_t92203D605F11CC13CE42F8D1A91831E5C1462FF9* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Func_3_tB4733AEB4365F5C621193590A8A6F53E3A0E61FA * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Func_3U5BU5D_tE06D1FF2EB9A6305AC3B19E79AC9DB6D5DC5A07D* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089, ___firstValue_1)); }
	inline Func_3_tB4733AEB4365F5C621193590A8A6F53E3A0E61FA * get_firstValue_1() const { return ___firstValue_1; }
	inline Func_3_tB4733AEB4365F5C621193590A8A6F53E3A0E61FA ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Func_3_tB4733AEB4365F5C621193590A8A6F53E3A0E61FA * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089, ___additionalValues_2)); }
	inline Func_3U5BU5D_tE06D1FF2EB9A6305AC3B19E79AC9DB6D5DC5A07D* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Func_3U5BU5D_tE06D1FF2EB9A6305AC3B19E79AC9DB6D5DC5A07D** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Func_3U5BU5D_tE06D1FF2EB9A6305AC3B19E79AC9DB6D5DC5A07D* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___firstValue_1)); }
	inline InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Nullable`1<System.Double>
struct Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 
{
public:
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;

public:
	inline static int32_t get_offset_of_shr0_0() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr0_0)); }
	inline float get_shr0_0() const { return ___shr0_0; }
	inline float* get_address_of_shr0_0() { return &___shr0_0; }
	inline void set_shr0_0(float value)
	{
		___shr0_0 = value;
	}

	inline static int32_t get_offset_of_shr1_1() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr1_1)); }
	inline float get_shr1_1() const { return ___shr1_1; }
	inline float* get_address_of_shr1_1() { return &___shr1_1; }
	inline void set_shr1_1(float value)
	{
		___shr1_1 = value;
	}

	inline static int32_t get_offset_of_shr2_2() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr2_2)); }
	inline float get_shr2_2() const { return ___shr2_2; }
	inline float* get_address_of_shr2_2() { return &___shr2_2; }
	inline void set_shr2_2(float value)
	{
		___shr2_2 = value;
	}

	inline static int32_t get_offset_of_shr3_3() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr3_3)); }
	inline float get_shr3_3() const { return ___shr3_3; }
	inline float* get_address_of_shr3_3() { return &___shr3_3; }
	inline void set_shr3_3(float value)
	{
		___shr3_3 = value;
	}

	inline static int32_t get_offset_of_shr4_4() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr4_4)); }
	inline float get_shr4_4() const { return ___shr4_4; }
	inline float* get_address_of_shr4_4() { return &___shr4_4; }
	inline void set_shr4_4(float value)
	{
		___shr4_4 = value;
	}

	inline static int32_t get_offset_of_shr5_5() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr5_5)); }
	inline float get_shr5_5() const { return ___shr5_5; }
	inline float* get_address_of_shr5_5() { return &___shr5_5; }
	inline void set_shr5_5(float value)
	{
		___shr5_5 = value;
	}

	inline static int32_t get_offset_of_shr6_6() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr6_6)); }
	inline float get_shr6_6() const { return ___shr6_6; }
	inline float* get_address_of_shr6_6() { return &___shr6_6; }
	inline void set_shr6_6(float value)
	{
		___shr6_6 = value;
	}

	inline static int32_t get_offset_of_shr7_7() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr7_7)); }
	inline float get_shr7_7() const { return ___shr7_7; }
	inline float* get_address_of_shr7_7() { return &___shr7_7; }
	inline void set_shr7_7(float value)
	{
		___shr7_7 = value;
	}

	inline static int32_t get_offset_of_shr8_8() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shr8_8)); }
	inline float get_shr8_8() const { return ___shr8_8; }
	inline float* get_address_of_shr8_8() { return &___shr8_8; }
	inline void set_shr8_8(float value)
	{
		___shr8_8 = value;
	}

	inline static int32_t get_offset_of_shg0_9() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg0_9)); }
	inline float get_shg0_9() const { return ___shg0_9; }
	inline float* get_address_of_shg0_9() { return &___shg0_9; }
	inline void set_shg0_9(float value)
	{
		___shg0_9 = value;
	}

	inline static int32_t get_offset_of_shg1_10() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg1_10)); }
	inline float get_shg1_10() const { return ___shg1_10; }
	inline float* get_address_of_shg1_10() { return &___shg1_10; }
	inline void set_shg1_10(float value)
	{
		___shg1_10 = value;
	}

	inline static int32_t get_offset_of_shg2_11() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg2_11)); }
	inline float get_shg2_11() const { return ___shg2_11; }
	inline float* get_address_of_shg2_11() { return &___shg2_11; }
	inline void set_shg2_11(float value)
	{
		___shg2_11 = value;
	}

	inline static int32_t get_offset_of_shg3_12() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg3_12)); }
	inline float get_shg3_12() const { return ___shg3_12; }
	inline float* get_address_of_shg3_12() { return &___shg3_12; }
	inline void set_shg3_12(float value)
	{
		___shg3_12 = value;
	}

	inline static int32_t get_offset_of_shg4_13() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg4_13)); }
	inline float get_shg4_13() const { return ___shg4_13; }
	inline float* get_address_of_shg4_13() { return &___shg4_13; }
	inline void set_shg4_13(float value)
	{
		___shg4_13 = value;
	}

	inline static int32_t get_offset_of_shg5_14() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg5_14)); }
	inline float get_shg5_14() const { return ___shg5_14; }
	inline float* get_address_of_shg5_14() { return &___shg5_14; }
	inline void set_shg5_14(float value)
	{
		___shg5_14 = value;
	}

	inline static int32_t get_offset_of_shg6_15() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg6_15)); }
	inline float get_shg6_15() const { return ___shg6_15; }
	inline float* get_address_of_shg6_15() { return &___shg6_15; }
	inline void set_shg6_15(float value)
	{
		___shg6_15 = value;
	}

	inline static int32_t get_offset_of_shg7_16() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg7_16)); }
	inline float get_shg7_16() const { return ___shg7_16; }
	inline float* get_address_of_shg7_16() { return &___shg7_16; }
	inline void set_shg7_16(float value)
	{
		___shg7_16 = value;
	}

	inline static int32_t get_offset_of_shg8_17() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shg8_17)); }
	inline float get_shg8_17() const { return ___shg8_17; }
	inline float* get_address_of_shg8_17() { return &___shg8_17; }
	inline void set_shg8_17(float value)
	{
		___shg8_17 = value;
	}

	inline static int32_t get_offset_of_shb0_18() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb0_18)); }
	inline float get_shb0_18() const { return ___shb0_18; }
	inline float* get_address_of_shb0_18() { return &___shb0_18; }
	inline void set_shb0_18(float value)
	{
		___shb0_18 = value;
	}

	inline static int32_t get_offset_of_shb1_19() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb1_19)); }
	inline float get_shb1_19() const { return ___shb1_19; }
	inline float* get_address_of_shb1_19() { return &___shb1_19; }
	inline void set_shb1_19(float value)
	{
		___shb1_19 = value;
	}

	inline static int32_t get_offset_of_shb2_20() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb2_20)); }
	inline float get_shb2_20() const { return ___shb2_20; }
	inline float* get_address_of_shb2_20() { return &___shb2_20; }
	inline void set_shb2_20(float value)
	{
		___shb2_20 = value;
	}

	inline static int32_t get_offset_of_shb3_21() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb3_21)); }
	inline float get_shb3_21() const { return ___shb3_21; }
	inline float* get_address_of_shb3_21() { return &___shb3_21; }
	inline void set_shb3_21(float value)
	{
		___shb3_21 = value;
	}

	inline static int32_t get_offset_of_shb4_22() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb4_22)); }
	inline float get_shb4_22() const { return ___shb4_22; }
	inline float* get_address_of_shb4_22() { return &___shb4_22; }
	inline void set_shb4_22(float value)
	{
		___shb4_22 = value;
	}

	inline static int32_t get_offset_of_shb5_23() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb5_23)); }
	inline float get_shb5_23() const { return ___shb5_23; }
	inline float* get_address_of_shb5_23() { return &___shb5_23; }
	inline void set_shb5_23(float value)
	{
		___shb5_23 = value;
	}

	inline static int32_t get_offset_of_shb6_24() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb6_24)); }
	inline float get_shb6_24() const { return ___shb6_24; }
	inline float* get_address_of_shb6_24() { return &___shb6_24; }
	inline void set_shb6_24(float value)
	{
		___shb6_24 = value;
	}

	inline static int32_t get_offset_of_shb7_25() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb7_25)); }
	inline float get_shb7_25() const { return ___shb7_25; }
	inline float* get_address_of_shb7_25() { return &___shb7_25; }
	inline void set_shb7_25(float value)
	{
		___shb7_25 = value;
	}

	inline static int32_t get_offset_of_shb8_26() { return static_cast<int32_t>(offsetof(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64, ___shb8_26)); }
	inline float get_shb8_26() const { return ___shb8_26; }
	inline float* get_address_of_shb8_26() { return &___shb8_26; }
	inline void set_shb8_26(float value)
	{
		___shb8_26 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4, ___m_State_0)); }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4_marshaled_pinvoke
{
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4_marshaled_com
{
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6 
{
public:
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___m_DeviceArray_2;

public:
	inline static int32_t get_offset_of_m_HaveValue_0() { return static_cast<int32_t>(offsetof(DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6, ___m_HaveValue_0)); }
	inline bool get_m_HaveValue_0() const { return ___m_HaveValue_0; }
	inline bool* get_address_of_m_HaveValue_0() { return &___m_HaveValue_0; }
	inline void set_m_HaveValue_0(bool value)
	{
		___m_HaveValue_0 = value;
	}

	inline static int32_t get_offset_of_m_DeviceCount_1() { return static_cast<int32_t>(offsetof(DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6, ___m_DeviceCount_1)); }
	inline int32_t get_m_DeviceCount_1() const { return ___m_DeviceCount_1; }
	inline int32_t* get_address_of_m_DeviceCount_1() { return &___m_DeviceCount_1; }
	inline void set_m_DeviceCount_1(int32_t value)
	{
		___m_DeviceCount_1 = value;
	}

	inline static int32_t get_offset_of_m_DeviceArray_2() { return static_cast<int32_t>(offsetof(DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6, ___m_DeviceArray_2)); }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* get_m_DeviceArray_2() const { return ___m_DeviceArray_2; }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523** get_address_of_m_DeviceArray_2() { return &___m_DeviceArray_2; }
	inline void set_m_DeviceArray_2(InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* value)
	{
		___m_DeviceArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceArray_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___m_DeviceArray_2;
};

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_tE1AE12491CC77457A3FE01D5F107E7AA156C4C57 
{
public:
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::device
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * ___device_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::userId
	uint32_t ___userId_1;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(OngoingAccountSelection_tE1AE12491CC77457A3FE01D5F107E7AA156C4C57, ___device_0)); }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * get_device_0() const { return ___device_0; }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B ** get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * value)
	{
		___device_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_0), (void*)value);
	}

	inline static int32_t get_offset_of_userId_1() { return static_cast<int32_t>(offsetof(OngoingAccountSelection_tE1AE12491CC77457A3FE01D5F107E7AA156C4C57, ___userId_1)); }
	inline uint32_t get_userId_1() const { return ___userId_1; }
	inline uint32_t* get_address_of_userId_1() { return &___userId_1; }
	inline void set_userId_1(uint32_t value)
	{
		___userId_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_tE1AE12491CC77457A3FE01D5F107E7AA156C4C57_marshaled_pinvoke
{
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_tE1AE12491CC77457A3FE01D5F107E7AA156C4C57_marshaled_com
{
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * ___device_0;
	uint32_t ___userId_1;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A, ___m_Callbacks_1)); }
	inline InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_tFEE2210C467325648ED90EC38C86789812A8ED8A  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E, ___m_Callbacks_1)); }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t525C8B8DED6F9D0AF2D3ED1D69E67BCAB0F2A43A  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3, ___m_Callbacks_1)); }
	inline InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t3B2788766E3F6E089580D6831EDE33E419D90DC0  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C, ___m_Callbacks_1)); }
	inline InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_tC0B6BA838E6CD454F830FC5C7E490D0F9E9DCD06  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322, ___m_Callbacks_1)); }
	inline InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t3DC6A8D9A3C0BB414AE8538CEF47196743DAA089  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>
struct InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OngoingAccountSelection_tE1AE12491CC77457A3FE01D5F107E7AA156C4C57  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OngoingAccountSelectionU5BU5D_t44D489D7EACD8EA0F9F44A9645249D88E19FA9FF* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A, ___firstValue_1)); }
	inline OngoingAccountSelection_tE1AE12491CC77457A3FE01D5F107E7AA156C4C57  get_firstValue_1() const { return ___firstValue_1; }
	inline OngoingAccountSelection_tE1AE12491CC77457A3FE01D5F107E7AA156C4C57 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(OngoingAccountSelection_tE1AE12491CC77457A3FE01D5F107E7AA156C4C57  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___device_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A, ___additionalValues_2)); }
	inline OngoingAccountSelectionU5BU5D_t44D489D7EACD8EA0F9F44A9645249D88E19FA9FF* get_additionalValues_2() const { return ___additionalValues_2; }
	inline OngoingAccountSelectionU5BU5D_t44D489D7EACD8EA0F9F44A9645249D88E19FA9FF** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(OngoingAccountSelectionU5BU5D_t44D489D7EACD8EA0F9F44A9645249D88E19FA9FF* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___value_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_value_0() const { return ___value_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E 
{
public:
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E, ___value_0)); }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  get_value_0() const { return ___value_0; }
	inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t3B595A2AE929CD12012561DD1915B2D35F57218A 
{
public:
	// T System.Nullable`1::value
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3B595A2AE929CD12012561DD1915B2D35F57218A, ___value_0)); }
	inline CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4  get_value_0() const { return ___value_0; }
	inline CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_State_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3B595A2AE929CD12012561DD1915B2D35F57218A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Rendering.AmbientMode
struct AmbientMode_t7AA88458DFE050FF09D48541DF558E06379BDC6C 
{
public:
	// System.Int32 UnityEngine.Rendering.AmbientMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AmbientMode_t7AA88458DFE050FF09D48541DF558E06379BDC6C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.CameraFacingDirection
struct CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.CameraFacingDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFacingDirection_tBD399103FCCBB7D35472AF597BA12FC26CB9F0A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t573CBB96E832D97A59EE6B5EBF79568A5C83042A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatBit_2)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSBit_4)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatInt_6)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUInt_8)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatShort_10)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUShort_12)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatByte_14)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSByte_16)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatLong_18)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatULong_20)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatFloat_22)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatDouble_24)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2_26)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3_27)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Byte_32 = value;
	}
};


// UnityEngine.InputSystem.Key
struct Key_t5B1D3E0238D12B973524E24FBBDC02EA626668B6 
{
public:
	// System.Int32 UnityEngine.InputSystem.Key::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Key_t5B1D3E0238D12B973524E24FBBDC02EA626668B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.LightEstimation
struct LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.LightEstimation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimation_tD66BC916A1BD1A48133EAA6F2DFD3F2F45909B93, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimationMode_tE07D0ADA96C21197E44E8E906DF0FCECB7DAEC56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.PlayerNotifications
struct PlayerNotifications_tE0985BD01D0C5FC2151B2312084D83188A6B2067 
{
public:
	// System.Int32 UnityEngine.InputSystem.PlayerNotifications::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerNotifications_tE0985BD01D0C5FC2151B2312084D83188A6B2067, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_t46C43183F1EDCDFC5B889B8A2C06B86C658047EA 
{
public:
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Clamp_t46C43183F1EDCDFC5B889B8A2C06B86C658047EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.GraphicRaycaster/BlockingObjects
struct BlockingObjects_t3E2C52C921D1DE2C3EDB3FBC0685E319727BE810 
{
public:
	// System.Int32 UnityEngine.UI.GraphicRaycaster/BlockingObjects::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlockingObjects_t3E2C52C921D1DE2C3EDB3FBC0685E319727BE810, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t904B93767740996C64FD20D5C1425440048E7BBF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t904B93767740996C64FD20D5C1425440048E7BBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tB40D8B346595D970F7AE011F634BEC05E2861605 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tB40D8B346595D970F7AE011F634BEC05E2861605, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.SceneUtils.ParticleSceneControls/AlignMode
struct AlignMode_tF0D113E79436A0DC5CF24C6BABE7EEEE0F25CF2F 
{
public:
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/AlignMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlignMode_tF0D113E79436A0DC5CF24C6BABE7EEEE0F25CF2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.SceneUtils.ParticleSceneControls/Mode
struct Mode_tD50EE54888EE10F71F5224B8057142A70BB88532 
{
public:
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tD50EE54888EE10F71F5224B8057142A70BB88532, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 
{
public:
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;

public:
	inline static int32_t get_offset_of_U3CaverageColorTemperatureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CaverageColorTemperatureU3Ek__BackingField_0)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CaverageColorTemperatureU3Ek__BackingField_0() const { return ___U3CaverageColorTemperatureU3Ek__BackingField_0; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CaverageColorTemperatureU3Ek__BackingField_0() { return &___U3CaverageColorTemperatureU3Ek__BackingField_0; }
	inline void set_U3CaverageColorTemperatureU3Ek__BackingField_0(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CaverageColorTemperatureU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CcolorCorrectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CcolorCorrectionU3Ek__BackingField_1)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_U3CcolorCorrectionU3Ek__BackingField_1() const { return ___U3CcolorCorrectionU3Ek__BackingField_1; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_U3CcolorCorrectionU3Ek__BackingField_1() { return &___U3CcolorCorrectionU3Ek__BackingField_1; }
	inline void set_U3CcolorCorrectionU3Ek__BackingField_1(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___U3CcolorCorrectionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightIntensityLumensU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightIntensityLumensU3Ek__BackingField_2)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CmainLightIntensityLumensU3Ek__BackingField_2() const { return ___U3CmainLightIntensityLumensU3Ek__BackingField_2; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CmainLightIntensityLumensU3Ek__BackingField_2() { return &___U3CmainLightIntensityLumensU3Ek__BackingField_2; }
	inline void set_U3CmainLightIntensityLumensU3Ek__BackingField_2(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CmainLightIntensityLumensU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightColorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightColorU3Ek__BackingField_3)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_U3CmainLightColorU3Ek__BackingField_3() const { return ___U3CmainLightColorU3Ek__BackingField_3; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_U3CmainLightColorU3Ek__BackingField_3() { return &___U3CmainLightColorU3Ek__BackingField_3; }
	inline void set_U3CmainLightColorU3Ek__BackingField_3(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___U3CmainLightColorU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmainLightDirectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CmainLightDirectionU3Ek__BackingField_4)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_U3CmainLightDirectionU3Ek__BackingField_4() const { return ___U3CmainLightDirectionU3Ek__BackingField_4; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_U3CmainLightDirectionU3Ek__BackingField_4() { return &___U3CmainLightDirectionU3Ek__BackingField_4; }
	inline void set_U3CmainLightDirectionU3Ek__BackingField_4(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___U3CmainLightDirectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CambientSphericalHarmonicsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___U3CambientSphericalHarmonicsU3Ek__BackingField_5)); }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  get_U3CambientSphericalHarmonicsU3Ek__BackingField_5() const { return ___U3CambientSphericalHarmonicsU3Ek__BackingField_5; }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * get_address_of_U3CambientSphericalHarmonicsU3Ek__BackingField_5() { return &___U3CambientSphericalHarmonicsU3Ek__BackingField_5; }
	inline void set_U3CambientSphericalHarmonicsU3Ek__BackingField_5(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  value)
	{
		___U3CambientSphericalHarmonicsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_AverageBrightness_6() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_AverageBrightness_6)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_AverageBrightness_6() const { return ___m_AverageBrightness_6; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_AverageBrightness_6() { return &___m_AverageBrightness_6; }
	inline void set_m_AverageBrightness_6(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_AverageBrightness_6 = value;
	}

	inline static int32_t get_offset_of_m_AverageIntensityInLumens_7() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_AverageIntensityInLumens_7)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_AverageIntensityInLumens_7() const { return ___m_AverageIntensityInLumens_7; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_AverageIntensityInLumens_7() { return &___m_AverageIntensityInLumens_7; }
	inline void set_m_AverageIntensityInLumens_7(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_AverageIntensityInLumens_7 = value;
	}

	inline static int32_t get_offset_of_m_MainLightBrightness_8() { return static_cast<int32_t>(offsetof(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423, ___m_MainLightBrightness_8)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_MainLightBrightness_8() const { return ___m_MainLightBrightness_8; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_MainLightBrightness_8() { return &___m_MainLightBrightness_8; }
	inline void set_m_MainLightBrightness_8(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_MainLightBrightness_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_pinvoke
{
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_com
{
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageBrightness_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_AverageIntensityInLumens_7;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_MainLightBrightness_8;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.InputValue
struct InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D  : public RuntimeObject
{
public:
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t3B595A2AE929CD12012561DD1915B2D35F57218A  ___m_Context_0;

public:
	inline static int32_t get_offset_of_m_Context_0() { return static_cast<int32_t>(offsetof(InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D, ___m_Context_0)); }
	inline Nullable_1_t3B595A2AE929CD12012561DD1915B2D35F57218A  get_m_Context_0() const { return ___m_Context_0; }
	inline Nullable_1_t3B595A2AE929CD12012561DD1915B2D35F57218A * get_address_of_m_Context_0() { return &___m_Context_0; }
	inline void set_m_Context_0(Nullable_1_t3B595A2AE929CD12012561DD1915B2D35F57218A  value)
	{
		___m_Context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Context_0))->___value_0))->___m_State_0), (void*)NULL);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC 
{
public:
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::pairingStateVersion
	int32_t ___pairingStateVersion_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/GlobalState::lastUserId
	uint32_t ___lastUserId_1;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserCount
	int32_t ___allUserCount_2;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDeviceCount
	int32_t ___allPairedDeviceCount_3;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDeviceCount
	int32_t ___allLostDeviceCount_4;
	// UnityEngine.InputSystem.Users.InputUser[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUsers
	InputUserU5BU5D_tECC65D7E585BEDA7CC2049A4E4EAA5CD6EC63296* ___allUsers_5;
	// UnityEngine.InputSystem.Users.InputUser/UserData[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserData
	UserDataU5BU5D_t50823987F5D169B74554D503AE1CE25F8DF4049E* ___allUserData_6;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDevices
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___allPairedDevices_7;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDevices
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___allLostDevices_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection> UnityEngine.InputSystem.Users.InputUser/GlobalState::ongoingAccountSelections
	InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A  ___ongoingAccountSelections_9;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onChange
	CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C  ___onChange_10;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onUnpairedDeviceUsed
	CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3  ___onUnpairedDeviceUsed_11;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onPreFilterUnpairedDeviceUsed
	CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322  ___onPreFilterUnpairedDeviceUsed_12;
	// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::actionChangeDelegate
	Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * ___actionChangeDelegate_13;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeDelegate
	Action_2_tB5E2CD2A901D793313BBCF6D6FE1332A7777DC6E * ___onDeviceChangeDelegate_14;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventDelegate
	Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * ___onEventDelegate_15;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onActionChangeHooked
	bool ___onActionChangeHooked_16;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeHooked
	bool ___onDeviceChangeHooked_17;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventHooked
	bool ___onEventHooked_18;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::listenForUnpairedDeviceActivity
	int32_t ___listenForUnpairedDeviceActivity_19;

public:
	inline static int32_t get_offset_of_pairingStateVersion_0() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___pairingStateVersion_0)); }
	inline int32_t get_pairingStateVersion_0() const { return ___pairingStateVersion_0; }
	inline int32_t* get_address_of_pairingStateVersion_0() { return &___pairingStateVersion_0; }
	inline void set_pairingStateVersion_0(int32_t value)
	{
		___pairingStateVersion_0 = value;
	}

	inline static int32_t get_offset_of_lastUserId_1() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___lastUserId_1)); }
	inline uint32_t get_lastUserId_1() const { return ___lastUserId_1; }
	inline uint32_t* get_address_of_lastUserId_1() { return &___lastUserId_1; }
	inline void set_lastUserId_1(uint32_t value)
	{
		___lastUserId_1 = value;
	}

	inline static int32_t get_offset_of_allUserCount_2() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___allUserCount_2)); }
	inline int32_t get_allUserCount_2() const { return ___allUserCount_2; }
	inline int32_t* get_address_of_allUserCount_2() { return &___allUserCount_2; }
	inline void set_allUserCount_2(int32_t value)
	{
		___allUserCount_2 = value;
	}

	inline static int32_t get_offset_of_allPairedDeviceCount_3() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___allPairedDeviceCount_3)); }
	inline int32_t get_allPairedDeviceCount_3() const { return ___allPairedDeviceCount_3; }
	inline int32_t* get_address_of_allPairedDeviceCount_3() { return &___allPairedDeviceCount_3; }
	inline void set_allPairedDeviceCount_3(int32_t value)
	{
		___allPairedDeviceCount_3 = value;
	}

	inline static int32_t get_offset_of_allLostDeviceCount_4() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___allLostDeviceCount_4)); }
	inline int32_t get_allLostDeviceCount_4() const { return ___allLostDeviceCount_4; }
	inline int32_t* get_address_of_allLostDeviceCount_4() { return &___allLostDeviceCount_4; }
	inline void set_allLostDeviceCount_4(int32_t value)
	{
		___allLostDeviceCount_4 = value;
	}

	inline static int32_t get_offset_of_allUsers_5() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___allUsers_5)); }
	inline InputUserU5BU5D_tECC65D7E585BEDA7CC2049A4E4EAA5CD6EC63296* get_allUsers_5() const { return ___allUsers_5; }
	inline InputUserU5BU5D_tECC65D7E585BEDA7CC2049A4E4EAA5CD6EC63296** get_address_of_allUsers_5() { return &___allUsers_5; }
	inline void set_allUsers_5(InputUserU5BU5D_tECC65D7E585BEDA7CC2049A4E4EAA5CD6EC63296* value)
	{
		___allUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_allUserData_6() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___allUserData_6)); }
	inline UserDataU5BU5D_t50823987F5D169B74554D503AE1CE25F8DF4049E* get_allUserData_6() const { return ___allUserData_6; }
	inline UserDataU5BU5D_t50823987F5D169B74554D503AE1CE25F8DF4049E** get_address_of_allUserData_6() { return &___allUserData_6; }
	inline void set_allUserData_6(UserDataU5BU5D_t50823987F5D169B74554D503AE1CE25F8DF4049E* value)
	{
		___allUserData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allUserData_6), (void*)value);
	}

	inline static int32_t get_offset_of_allPairedDevices_7() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___allPairedDevices_7)); }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* get_allPairedDevices_7() const { return ___allPairedDevices_7; }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523** get_address_of_allPairedDevices_7() { return &___allPairedDevices_7; }
	inline void set_allPairedDevices_7(InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* value)
	{
		___allPairedDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allPairedDevices_7), (void*)value);
	}

	inline static int32_t get_offset_of_allLostDevices_8() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___allLostDevices_8)); }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* get_allLostDevices_8() const { return ___allLostDevices_8; }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523** get_address_of_allLostDevices_8() { return &___allLostDevices_8; }
	inline void set_allLostDevices_8(InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* value)
	{
		___allLostDevices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLostDevices_8), (void*)value);
	}

	inline static int32_t get_offset_of_ongoingAccountSelections_9() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___ongoingAccountSelections_9)); }
	inline InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A  get_ongoingAccountSelections_9() const { return ___ongoingAccountSelections_9; }
	inline InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A * get_address_of_ongoingAccountSelections_9() { return &___ongoingAccountSelections_9; }
	inline void set_ongoingAccountSelections_9(InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A  value)
	{
		___ongoingAccountSelections_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___ongoingAccountSelections_9))->___firstValue_1))->___device_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ongoingAccountSelections_9))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onChange_10() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___onChange_10)); }
	inline CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C  get_onChange_10() const { return ___onChange_10; }
	inline CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C * get_address_of_onChange_10() { return &___onChange_10; }
	inline void set_onChange_10(CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C  value)
	{
		___onChange_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onChange_10))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onUnpairedDeviceUsed_11() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___onUnpairedDeviceUsed_11)); }
	inline CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3  get_onUnpairedDeviceUsed_11() const { return ___onUnpairedDeviceUsed_11; }
	inline CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3 * get_address_of_onUnpairedDeviceUsed_11() { return &___onUnpairedDeviceUsed_11; }
	inline void set_onUnpairedDeviceUsed_11(CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3  value)
	{
		___onUnpairedDeviceUsed_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onUnpairedDeviceUsed_11))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onPreFilterUnpairedDeviceUsed_12() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___onPreFilterUnpairedDeviceUsed_12)); }
	inline CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322  get_onPreFilterUnpairedDeviceUsed_12() const { return ___onPreFilterUnpairedDeviceUsed_12; }
	inline CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322 * get_address_of_onPreFilterUnpairedDeviceUsed_12() { return &___onPreFilterUnpairedDeviceUsed_12; }
	inline void set_onPreFilterUnpairedDeviceUsed_12(CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322  value)
	{
		___onPreFilterUnpairedDeviceUsed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_actionChangeDelegate_13() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___actionChangeDelegate_13)); }
	inline Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * get_actionChangeDelegate_13() const { return ___actionChangeDelegate_13; }
	inline Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A ** get_address_of_actionChangeDelegate_13() { return &___actionChangeDelegate_13; }
	inline void set_actionChangeDelegate_13(Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * value)
	{
		___actionChangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionChangeDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_onDeviceChangeDelegate_14() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___onDeviceChangeDelegate_14)); }
	inline Action_2_tB5E2CD2A901D793313BBCF6D6FE1332A7777DC6E * get_onDeviceChangeDelegate_14() const { return ___onDeviceChangeDelegate_14; }
	inline Action_2_tB5E2CD2A901D793313BBCF6D6FE1332A7777DC6E ** get_address_of_onDeviceChangeDelegate_14() { return &___onDeviceChangeDelegate_14; }
	inline void set_onDeviceChangeDelegate_14(Action_2_tB5E2CD2A901D793313BBCF6D6FE1332A7777DC6E * value)
	{
		___onDeviceChangeDelegate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDeviceChangeDelegate_14), (void*)value);
	}

	inline static int32_t get_offset_of_onEventDelegate_15() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___onEventDelegate_15)); }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * get_onEventDelegate_15() const { return ___onEventDelegate_15; }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 ** get_address_of_onEventDelegate_15() { return &___onEventDelegate_15; }
	inline void set_onEventDelegate_15(Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * value)
	{
		___onEventDelegate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onEventDelegate_15), (void*)value);
	}

	inline static int32_t get_offset_of_onActionChangeHooked_16() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___onActionChangeHooked_16)); }
	inline bool get_onActionChangeHooked_16() const { return ___onActionChangeHooked_16; }
	inline bool* get_address_of_onActionChangeHooked_16() { return &___onActionChangeHooked_16; }
	inline void set_onActionChangeHooked_16(bool value)
	{
		___onActionChangeHooked_16 = value;
	}

	inline static int32_t get_offset_of_onDeviceChangeHooked_17() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___onDeviceChangeHooked_17)); }
	inline bool get_onDeviceChangeHooked_17() const { return ___onDeviceChangeHooked_17; }
	inline bool* get_address_of_onDeviceChangeHooked_17() { return &___onDeviceChangeHooked_17; }
	inline void set_onDeviceChangeHooked_17(bool value)
	{
		___onDeviceChangeHooked_17 = value;
	}

	inline static int32_t get_offset_of_onEventHooked_18() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___onEventHooked_18)); }
	inline bool get_onEventHooked_18() const { return ___onEventHooked_18; }
	inline bool* get_address_of_onEventHooked_18() { return &___onEventHooked_18; }
	inline void set_onEventHooked_18(bool value)
	{
		___onEventHooked_18 = value;
	}

	inline static int32_t get_offset_of_listenForUnpairedDeviceActivity_19() { return static_cast<int32_t>(offsetof(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC, ___listenForUnpairedDeviceActivity_19)); }
	inline int32_t get_listenForUnpairedDeviceActivity_19() const { return ___listenForUnpairedDeviceActivity_19; }
	inline int32_t* get_address_of_listenForUnpairedDeviceActivity_19() { return &___listenForUnpairedDeviceActivity_19; }
	inline void set_listenForUnpairedDeviceActivity_19(int32_t value)
	{
		___listenForUnpairedDeviceActivity_19 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC_marshaled_pinvoke
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212 * ___allUsers_5;
	UserData_tFA4DBE0658A3759DDAAEE227A2E926F926B5EE6F_marshaled_pinvoke* ___allUserData_6;
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___allPairedDevices_7;
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___allLostDevices_8;
	InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A  ___ongoingAccountSelections_9;
	CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C  ___onChange_10;
	CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3  ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322  ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC_marshaled_com
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212 * ___allUsers_5;
	UserData_tFA4DBE0658A3759DDAAEE227A2E926F926B5EE6F_marshaled_com* ___allUserData_6;
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___allPairedDevices_7;
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___allLostDevices_8;
	InlinedArray_1_t204B2122E08E30A8CAEBD621B68255980976B75A  ___ongoingAccountSelections_9;
	CallbackArray_1_tE29E6707CD8E66031B4E7E56F60C04A79DF6661C  ___onChange_10;
	CallbackArray_1_t000FE5CBA8549EFEC48D9C4F1E5CFC3A212535D3  ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t012D280F461419E002F368A5579C5258A4B38322  ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_0;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/Mode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::mode
	int32_t ___mode_1;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/AlignMode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::align
	int32_t ___align_2;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::maxCount
	int32_t ___maxCount_3;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::minDist
	float ___minDist_4;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::camOffset
	int32_t ___camOffset_5;
	// System.String UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::instructionText
	String_t* ___instructionText_6;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___transform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_0() const { return ___transform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_0), (void*)value);
	}

	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_align_2() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___align_2)); }
	inline int32_t get_align_2() const { return ___align_2; }
	inline int32_t* get_address_of_align_2() { return &___align_2; }
	inline void set_align_2(int32_t value)
	{
		___align_2 = value;
	}

	inline static int32_t get_offset_of_maxCount_3() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___maxCount_3)); }
	inline int32_t get_maxCount_3() const { return ___maxCount_3; }
	inline int32_t* get_address_of_maxCount_3() { return &___maxCount_3; }
	inline void set_maxCount_3(int32_t value)
	{
		___maxCount_3 = value;
	}

	inline static int32_t get_offset_of_minDist_4() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___minDist_4)); }
	inline float get_minDist_4() const { return ___minDist_4; }
	inline float* get_address_of_minDist_4() { return &___minDist_4; }
	inline void set_minDist_4(float value)
	{
		___minDist_4 = value;
	}

	inline static int32_t get_offset_of_camOffset_5() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___camOffset_5)); }
	inline int32_t get_camOffset_5() const { return ___camOffset_5; }
	inline int32_t* get_address_of_camOffset_5() { return &___camOffset_5; }
	inline void set_camOffset_5(int32_t value)
	{
		___camOffset_5 = value;
	}

	inline static int32_t get_offset_of_instructionText_6() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___instructionText_6)); }
	inline String_t* get_instructionText_6() const { return ___instructionText_6; }
	inline String_t** get_address_of_instructionText_6() { return &___instructionText_6; }
	inline void set_instructionText_6(String_t* value)
	{
		___instructionText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instructionText_6), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD 
{
public:
	// T System.Nullable`1::value
	InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___value_0)); }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  get_value_0() const { return ___value_0; }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 
{
public:
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3ClightEstimationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3ClightEstimationU3Ek__BackingField_0)); }
	inline ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  get_U3ClightEstimationU3Ek__BackingField_0() const { return ___U3ClightEstimationU3Ek__BackingField_0; }
	inline ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * get_address_of_U3ClightEstimationU3Ek__BackingField_0() { return &___U3ClightEstimationU3Ek__BackingField_0; }
	inline void set_U3ClightEstimationU3Ek__BackingField_0(ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  value)
	{
		___U3ClightEstimationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtimestampNsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CtimestampNsU3Ek__BackingField_1)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_U3CtimestampNsU3Ek__BackingField_1() const { return ___U3CtimestampNsU3Ek__BackingField_1; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_U3CtimestampNsU3Ek__BackingField_1() { return &___U3CtimestampNsU3Ek__BackingField_1; }
	inline void set_U3CtimestampNsU3Ek__BackingField_1(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___U3CtimestampNsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CprojectionMatrixU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CprojectionMatrixU3Ek__BackingField_2)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get_U3CprojectionMatrixU3Ek__BackingField_2() const { return ___U3CprojectionMatrixU3Ek__BackingField_2; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of_U3CprojectionMatrixU3Ek__BackingField_2() { return &___U3CprojectionMatrixU3Ek__BackingField_2; }
	inline void set_U3CprojectionMatrixU3Ek__BackingField_2(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		___U3CprojectionMatrixU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayMatrixU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CdisplayMatrixU3Ek__BackingField_3)); }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  get_U3CdisplayMatrixU3Ek__BackingField_3() const { return ___U3CdisplayMatrixU3Ek__BackingField_3; }
	inline Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E * get_address_of_U3CdisplayMatrixU3Ek__BackingField_3() { return &___U3CdisplayMatrixU3Ek__BackingField_3; }
	inline void set_U3CdisplayMatrixU3Ek__BackingField_3(Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  value)
	{
		___U3CdisplayMatrixU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtexturesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CtexturesU3Ek__BackingField_4)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_U3CtexturesU3Ek__BackingField_4() const { return ___U3CtexturesU3Ek__BackingField_4; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_U3CtexturesU3Ek__BackingField_4() { return &___U3CtexturesU3Ek__BackingField_4; }
	inline void set_U3CtexturesU3Ek__BackingField_4(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___U3CtexturesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtexturesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertyNameIdsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CpropertyNameIdsU3Ek__BackingField_5)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CpropertyNameIdsU3Ek__BackingField_5() const { return ___U3CpropertyNameIdsU3Ek__BackingField_5; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CpropertyNameIdsU3Ek__BackingField_5() { return &___U3CpropertyNameIdsU3Ek__BackingField_5; }
	inline void set_U3CpropertyNameIdsU3Ek__BackingField_5(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CpropertyNameIdsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyNameIdsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexposureDurationU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CexposureDurationU3Ek__BackingField_6)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CexposureDurationU3Ek__BackingField_6() const { return ___U3CexposureDurationU3Ek__BackingField_6; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CexposureDurationU3Ek__BackingField_6() { return &___U3CexposureDurationU3Ek__BackingField_6; }
	inline void set_U3CexposureDurationU3Ek__BackingField_6(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CexposureDurationU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CexposureOffsetU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CexposureOffsetU3Ek__BackingField_7)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_U3CexposureOffsetU3Ek__BackingField_7() const { return ___U3CexposureOffsetU3Ek__BackingField_7; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_U3CexposureOffsetU3Ek__BackingField_7() { return &___U3CexposureOffsetU3Ek__BackingField_7; }
	inline void set_U3CexposureOffsetU3Ek__BackingField_7(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___U3CexposureOffsetU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CenabledMaterialKeywordsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CenabledMaterialKeywordsU3Ek__BackingField_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CenabledMaterialKeywordsU3Ek__BackingField_8() const { return ___U3CenabledMaterialKeywordsU3Ek__BackingField_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CenabledMaterialKeywordsU3Ek__BackingField_8() { return &___U3CenabledMaterialKeywordsU3Ek__BackingField_8; }
	inline void set_U3CenabledMaterialKeywordsU3Ek__BackingField_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CenabledMaterialKeywordsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CenabledMaterialKeywordsU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() const { return ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CdisabledMaterialKeywordsU3Ek__BackingField_9() { return &___U3CdisabledMaterialKeywordsU3Ek__BackingField_9; }
	inline void set_U3CdisabledMaterialKeywordsU3Ek__BackingField_9(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CdisabledMaterialKeywordsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisabledMaterialKeywordsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcameraGrainTextureU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CcameraGrainTextureU3Ek__BackingField_10)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_U3CcameraGrainTextureU3Ek__BackingField_10() const { return ___U3CcameraGrainTextureU3Ek__BackingField_10; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_U3CcameraGrainTextureU3Ek__BackingField_10() { return &___U3CcameraGrainTextureU3Ek__BackingField_10; }
	inline void set_U3CcameraGrainTextureU3Ek__BackingField_10(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___U3CcameraGrainTextureU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcameraGrainTextureU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoiseIntensityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42, ___U3CnoiseIntensityU3Ek__BackingField_11)); }
	inline float get_U3CnoiseIntensityU3Ek__BackingField_11() const { return ___U3CnoiseIntensityU3Ek__BackingField_11; }
	inline float* get_address_of_U3CnoiseIntensityU3Ek__BackingField_11() { return &___U3CnoiseIntensityU3Ek__BackingField_11; }
	inline void set_U3CnoiseIntensityU3Ek__BackingField_11(float value)
	{
		___U3CnoiseIntensityU3Ek__BackingField_11 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42_marshaled_pinvoke
{
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42_marshaled_com
{
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_tBC3CF93247D9ED5D94966DBCDFCDE51AF9779E8E  ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___U3CtexturesU3Ek__BackingField_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtrackableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CtrackableU3Ek__BackingField_1)); }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * get_U3CtrackableU3Ek__BackingField_1() const { return ___U3CtrackableU3Ek__BackingField_1; }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 ** get_address_of_U3CtrackableU3Ek__BackingField_1() { return &___U3CtrackableU3Ek__BackingField_1; }
	inline void set_U3CtrackableU3Ek__BackingField_1(ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * value)
	{
		___U3CtrackableU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackableU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hit_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Hit_2)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_m_Hit_2() const { return ___m_Hit_2; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_m_Hit_2() { return &___m_Hit_2; }
	inline void set_m_Hit_2(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___m_Hit_2 = value;
	}

	inline static int32_t get_offset_of_m_Transform_3() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Transform_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_3() const { return ___m_Transform_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_3() { return &___m_Transform_3; }
	inline void set_m_Transform_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 
{
public:
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;

public:
	inline static int32_t get_offset_of_m_Descriptor_1() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Descriptor_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_Descriptor_1() const { return ___m_Descriptor_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_Descriptor_1() { return &___m_Descriptor_1; }
	inline void set_m_Descriptor_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_Descriptor_1 = value;
	}

	inline static int32_t get_offset_of_m_Texture_2() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Texture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_2() const { return ___m_Texture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_2() { return &___m_Texture_2; }
	inline void set_m_Texture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_pinvoke
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_com
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_StateBlock_0)); }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Name_1)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Layout_7)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Variants_8)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Device_9)); }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Parent_10)); }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DefaultState_18)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MinValue_19)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MaxValue_20)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MaxValue_20 = value;
	}
};


// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212 
{
public:
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212, ___m_Id_1)); }
	inline uint32_t get_m_Id_1() const { return ___m_Id_1; }
	inline uint32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(uint32_t value)
	{
		___m_Id_1 = value;
	}
};

struct InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212_StaticFields
{
public:
	// UnityEngine.InputSystem.Users.InputUser/GlobalState UnityEngine.InputSystem.Users.InputUser::s_GlobalState
	GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC  ___s_GlobalState_2;

public:
	inline static int32_t get_offset_of_s_GlobalState_2() { return static_cast<int32_t>(offsetof(InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212_StaticFields, ___s_GlobalState_2)); }
	inline GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC  get_s_GlobalState_2() const { return ___s_GlobalState_2; }
	inline GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC * get_address_of_s_GlobalState_2() { return &___s_GlobalState_2; }
	inline void set_s_GlobalState_2(GlobalState_t6226FDF7E4830BA04ED5382C6DCDAFA7313FB4AC  value)
	{
		___s_GlobalState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___allUsers_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___allUserData_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___allPairedDevices_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___allLostDevices_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___ongoingAccountSelections_9))->___firstValue_1))->___device_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_2))->___ongoingAccountSelections_9))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onChange_10))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onUnpairedDeviceUsed_11))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_2))->___onPreFilterUnpairedDeviceUsed_12))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___actionChangeDelegate_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___onDeviceChangeDelegate_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalState_2))->___onEventDelegate_15), (void*)NULL);
		#endif
	}
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tB15D20D7F6055DC631E18756771B3586B402B843* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  ___m_BindingMask_8;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6  ___m_Devices_9;

public:
	inline static int32_t get_offset_of_m_ActionMaps_5() { return static_cast<int32_t>(offsetof(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE, ___m_ActionMaps_5)); }
	inline InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* get_m_ActionMaps_5() const { return ___m_ActionMaps_5; }
	inline InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E** get_address_of_m_ActionMaps_5() { return &___m_ActionMaps_5; }
	inline void set_m_ActionMaps_5(InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* value)
	{
		___m_ActionMaps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMaps_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemes_6() { return static_cast<int32_t>(offsetof(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE, ___m_ControlSchemes_6)); }
	inline InputControlSchemeU5BU5D_tB15D20D7F6055DC631E18756771B3586B402B843* get_m_ControlSchemes_6() const { return ___m_ControlSchemes_6; }
	inline InputControlSchemeU5BU5D_tB15D20D7F6055DC631E18756771B3586B402B843** get_address_of_m_ControlSchemes_6() { return &___m_ControlSchemes_6; }
	inline void set_m_ControlSchemes_6(InputControlSchemeU5BU5D_tB15D20D7F6055DC631E18756771B3586B402B843* value)
	{
		___m_ControlSchemes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlSchemes_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStateForAllMaps_7() { return static_cast<int32_t>(offsetof(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE, ___m_SharedStateForAllMaps_7)); }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * get_m_SharedStateForAllMaps_7() const { return ___m_SharedStateForAllMaps_7; }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 ** get_address_of_m_SharedStateForAllMaps_7() { return &___m_SharedStateForAllMaps_7; }
	inline void set_m_SharedStateForAllMaps_7(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * value)
	{
		___m_SharedStateForAllMaps_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStateForAllMaps_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE, ___m_BindingMask_8)); }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Devices_9() { return static_cast<int32_t>(offsetof(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE, ___m_Devices_9)); }
	inline DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6  get_m_Devices_9() const { return ___m_Devices_9; }
	inline DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6 * get_address_of_m_Devices_9() { return &___m_Devices_9; }
	inline void set_m_Devices_9(DeviceArray_t0175227B230F0E7A220F37042A0298BD0E44E6B6  value)
	{
		___m_Devices_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Devices_9))->___m_DeviceArray_2), (void*)NULL);
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_35;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_Description_28)); }
	inline InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_t84DCBFF5DAE52142DCE4327AB34CB2F920FB200F  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_35() { return static_cast<int32_t>(offsetof(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B, ___m_StateOffsetToControlMap_35)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_35() const { return ___m_StateOffsetToControlMap_35; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_35() { return &___m_StateOffsetToControlMap_35; }
	inline void set_m_StateOffsetToControlMap_35(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_35), (void*)value);
	}
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRCameraSubsystem_t3B32F6EA8A2E4D23AF240B5D21C34759D2613AC9 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t5ACA7E75885D8B9D7B85548B84BF43976A5038DC * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t69444E6E06FA6776283024710ADC0302F2700BFD ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t69444E6E06FA6776283024710ADC0302F2700BFD * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t6D435690E62CDB3645DB1A76F3B7B8B6069BDB4F * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t42260E8F78DDBD1A6947677665395B70FA8816C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// ARradicon.AppearOnPlane
struct AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ARradicon.AppearOnPlane::message
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___message_4;
	// UnityEngine.UI.Text ARradicon.AppearOnPlane::debugPosition
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___debugPosition_5;
	// UnityEngine.GameObject ARradicon.AppearOnPlane::placementPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___placementPrefab_6;
	// UnityEngine.XR.ARFoundation.ARPlaneManager ARradicon.AppearOnPlane::planeManager
	ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * ___planeManager_7;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARradicon.AppearOnPlane::raycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ___raycastManager_8;
	// UnityEngine.InputSystem.PlayerInput ARradicon.AppearOnPlane::playerInput
	PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 * ___playerInput_9;
	// System.Boolean ARradicon.AppearOnPlane::isReady
	bool ___isReady_10;
	// UnityEngine.GameObject ARradicon.AppearOnPlane::instantiatedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___instantiatedObject_11;

public:
	inline static int32_t get_offset_of_message_4() { return static_cast<int32_t>(offsetof(AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1, ___message_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_message_4() const { return ___message_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_message_4() { return &___message_4; }
	inline void set_message_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___message_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_4), (void*)value);
	}

	inline static int32_t get_offset_of_debugPosition_5() { return static_cast<int32_t>(offsetof(AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1, ___debugPosition_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_debugPosition_5() const { return ___debugPosition_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_debugPosition_5() { return &___debugPosition_5; }
	inline void set_debugPosition_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___debugPosition_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugPosition_5), (void*)value);
	}

	inline static int32_t get_offset_of_placementPrefab_6() { return static_cast<int32_t>(offsetof(AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1, ___placementPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_placementPrefab_6() const { return ___placementPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_placementPrefab_6() { return &___placementPrefab_6; }
	inline void set_placementPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___placementPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_planeManager_7() { return static_cast<int32_t>(offsetof(AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1, ___planeManager_7)); }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * get_planeManager_7() const { return ___planeManager_7; }
	inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 ** get_address_of_planeManager_7() { return &___planeManager_7; }
	inline void set_planeManager_7(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * value)
	{
		___planeManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planeManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_raycastManager_8() { return static_cast<int32_t>(offsetof(AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1, ___raycastManager_8)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get_raycastManager_8() const { return ___raycastManager_8; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of_raycastManager_8() { return &___raycastManager_8; }
	inline void set_raycastManager_8(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		___raycastManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_playerInput_9() { return static_cast<int32_t>(offsetof(AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1, ___playerInput_9)); }
	inline PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 * get_playerInput_9() const { return ___playerInput_9; }
	inline PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 ** get_address_of_playerInput_9() { return &___playerInput_9; }
	inline void set_playerInput_9(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 * value)
	{
		___playerInput_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerInput_9), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_10() { return static_cast<int32_t>(offsetof(AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1, ___isReady_10)); }
	inline bool get_isReady_10() const { return ___isReady_10; }
	inline bool* get_address_of_isReady_10() { return &___isReady_10; }
	inline void set_isReady_10(bool value)
	{
		___isReady_10 = value;
	}

	inline static int32_t get_offset_of_instantiatedObject_11() { return static_cast<int32_t>(offsetof(AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1, ___instantiatedObject_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_instantiatedObject_11() const { return ___instantiatedObject_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_instantiatedObject_11() { return &___instantiatedObject_11; }
	inline void set_instantiatedObject_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___instantiatedObject_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiatedObject_11), (void*)value);
	}
};


// AudioSwitch
struct AudioSwitch_t2115C8EE2B722778C2A571A2DB068579CC412A01  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF  : public InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;

public:
	inline static int32_t get_offset_of_clamp_22() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___clamp_22)); }
	inline int32_t get_clamp_22() const { return ___clamp_22; }
	inline int32_t* get_address_of_clamp_22() { return &___clamp_22; }
	inline void set_clamp_22(int32_t value)
	{
		___clamp_22 = value;
	}

	inline static int32_t get_offset_of_clampMin_23() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___clampMin_23)); }
	inline float get_clampMin_23() const { return ___clampMin_23; }
	inline float* get_address_of_clampMin_23() { return &___clampMin_23; }
	inline void set_clampMin_23(float value)
	{
		___clampMin_23 = value;
	}

	inline static int32_t get_offset_of_clampMax_24() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___clampMax_24)); }
	inline float get_clampMax_24() const { return ___clampMax_24; }
	inline float* get_address_of_clampMax_24() { return &___clampMax_24; }
	inline void set_clampMax_24(float value)
	{
		___clampMax_24 = value;
	}

	inline static int32_t get_offset_of_clampConstant_25() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___clampConstant_25)); }
	inline float get_clampConstant_25() const { return ___clampConstant_25; }
	inline float* get_address_of_clampConstant_25() { return &___clampConstant_25; }
	inline void set_clampConstant_25(float value)
	{
		___clampConstant_25 = value;
	}

	inline static int32_t get_offset_of_invert_26() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___invert_26)); }
	inline bool get_invert_26() const { return ___invert_26; }
	inline bool* get_address_of_invert_26() { return &___invert_26; }
	inline void set_invert_26(bool value)
	{
		___invert_26 = value;
	}

	inline static int32_t get_offset_of_normalize_27() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___normalize_27)); }
	inline bool get_normalize_27() const { return ___normalize_27; }
	inline bool* get_address_of_normalize_27() { return &___normalize_27; }
	inline void set_normalize_27(bool value)
	{
		___normalize_27 = value;
	}

	inline static int32_t get_offset_of_normalizeMin_28() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___normalizeMin_28)); }
	inline float get_normalizeMin_28() const { return ___normalizeMin_28; }
	inline float* get_address_of_normalizeMin_28() { return &___normalizeMin_28; }
	inline void set_normalizeMin_28(float value)
	{
		___normalizeMin_28 = value;
	}

	inline static int32_t get_offset_of_normalizeMax_29() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___normalizeMax_29)); }
	inline float get_normalizeMax_29() const { return ___normalizeMax_29; }
	inline float* get_address_of_normalizeMax_29() { return &___normalizeMax_29; }
	inline void set_normalizeMax_29(float value)
	{
		___normalizeMax_29 = value;
	}

	inline static int32_t get_offset_of_normalizeZero_30() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___normalizeZero_30)); }
	inline float get_normalizeZero_30() const { return ___normalizeZero_30; }
	inline float* get_address_of_normalizeZero_30() { return &___normalizeZero_30; }
	inline void set_normalizeZero_30(float value)
	{
		___normalizeZero_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___scale_31)); }
	inline bool get_scale_31() const { return ___scale_31; }
	inline bool* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(bool value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_32() { return static_cast<int32_t>(offsetof(AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF, ___scaleFactor_32)); }
	inline float get_scaleFactor_32() const { return ___scaleFactor_32; }
	inline float* get_address_of_scaleFactor_32() { return &___scaleFactor_32; }
	inline void set_scaleFactor_32(float value)
	{
		___scaleFactor_32 = value;
	}
};


// ARradicon.BackTitle
struct BackTitle_t002326B021598D64FFA47066ED227ADEF5427A8A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CameraSwitch
struct CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] CameraSwitch::objects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___objects_4;
	// UnityEngine.UI.Text CameraSwitch::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_5;
	// System.Int32 CameraSwitch::m_CurrentActiveObject
	int32_t ___m_CurrentActiveObject_6;

public:
	inline static int32_t get_offset_of_objects_4() { return static_cast<int32_t>(offsetof(CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D, ___objects_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_objects_4() const { return ___objects_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_objects_4() { return &___objects_4; }
	inline void set_objects_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___objects_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D, ___text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_5() const { return ___text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentActiveObject_6() { return static_cast<int32_t>(offsetof(CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D, ___m_CurrentActiveObject_6)); }
	inline int32_t get_m_CurrentActiveObject_6() const { return ___m_CurrentActiveObject_6; }
	inline int32_t* get_address_of_m_CurrentActiveObject_6() { return &___m_CurrentActiveObject_6; }
	inline void set_m_CurrentActiveObject_6(int32_t value)
	{
		___m_CurrentActiveObject_6 = value;
	}
};


// ARradicon.Car
struct Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 ARradicon.Car::_velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____velocity_4;
	// System.Collections.Generic.List`1<ARradicon.Car/AxleInfo> ARradicon.Car::axleInfos
	List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 * ___axleInfos_5;
	// System.Single ARradicon.Car::maxMotorTorque
	float ___maxMotorTorque_6;
	// System.Single ARradicon.Car::maxSteeringAngle
	float ___maxSteeringAngle_7;
	// System.Single ARradicon.Car::motor
	float ___motor_8;
	// System.Single ARradicon.Car::steering
	float ___steering_9;

public:
	inline static int32_t get_offset_of__velocity_4() { return static_cast<int32_t>(offsetof(Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B, ____velocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__velocity_4() const { return ____velocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__velocity_4() { return &____velocity_4; }
	inline void set__velocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____velocity_4 = value;
	}

	inline static int32_t get_offset_of_axleInfos_5() { return static_cast<int32_t>(offsetof(Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B, ___axleInfos_5)); }
	inline List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 * get_axleInfos_5() const { return ___axleInfos_5; }
	inline List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 ** get_address_of_axleInfos_5() { return &___axleInfos_5; }
	inline void set_axleInfos_5(List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 * value)
	{
		___axleInfos_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axleInfos_5), (void*)value);
	}

	inline static int32_t get_offset_of_maxMotorTorque_6() { return static_cast<int32_t>(offsetof(Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B, ___maxMotorTorque_6)); }
	inline float get_maxMotorTorque_6() const { return ___maxMotorTorque_6; }
	inline float* get_address_of_maxMotorTorque_6() { return &___maxMotorTorque_6; }
	inline void set_maxMotorTorque_6(float value)
	{
		___maxMotorTorque_6 = value;
	}

	inline static int32_t get_offset_of_maxSteeringAngle_7() { return static_cast<int32_t>(offsetof(Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B, ___maxSteeringAngle_7)); }
	inline float get_maxSteeringAngle_7() const { return ___maxSteeringAngle_7; }
	inline float* get_address_of_maxSteeringAngle_7() { return &___maxSteeringAngle_7; }
	inline void set_maxSteeringAngle_7(float value)
	{
		___maxSteeringAngle_7 = value;
	}

	inline static int32_t get_offset_of_motor_8() { return static_cast<int32_t>(offsetof(Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B, ___motor_8)); }
	inline float get_motor_8() const { return ___motor_8; }
	inline float* get_address_of_motor_8() { return &___motor_8; }
	inline void set_motor_8(float value)
	{
		___motor_8 = value;
	}

	inline static int32_t get_offset_of_steering_9() { return static_cast<int32_t>(offsetof(Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B, ___steering_9)); }
	inline float get_steering_9() const { return ___steering_9; }
	inline float* get_address_of_steering_9() { return &___steering_9; }
	inline void set_steering_9(float value)
	{
		___steering_9 = value;
	}
};


// ARradicon.GameStart
struct GameStart_t8996BAFAB7A9A5C4117955D246085E5944A3AB1B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.InputSystem.Keyboard
struct Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1  : public InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B
{
public:
	// UnityEngine.InputSystem.Controls.AnyKeyControl UnityEngine.InputSystem.Keyboard::<anyKey>k__BackingField
	AnyKeyControl_t662EBC0B49B972084F39121A2DB1CCCA60AF3680 * ___U3CanyKeyU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<shiftKey>k__BackingField
	ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * ___U3CshiftKeyU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<ctrlKey>k__BackingField
	ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * ___U3CctrlKeyU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<altKey>k__BackingField
	ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * ___U3CaltKeyU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<imeSelected>k__BackingField
	ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * ___U3CimeSelectedU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>> UnityEngine.InputSystem.Keyboard::m_TextInputListeners
	InlinedArray_1_tD457753D3A5A98E93452F4CB53191E415733A208  ___m_TextInputListeners_46;
	// System.String UnityEngine.InputSystem.Keyboard::m_KeyboardLayoutName
	String_t* ___m_KeyboardLayoutName_47;
	// UnityEngine.InputSystem.Controls.KeyControl[] UnityEngine.InputSystem.Keyboard::m_Keys
	KeyControlU5BU5D_t631D22F097B730844D53A2E96BC75B023707E135* ___m_Keys_48;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>> UnityEngine.InputSystem.Keyboard::m_ImeCompositionListeners
	InlinedArray_1_t472E918FFB1ECC20DABD56600F71A326D3D8E8FD  ___m_ImeCompositionListeners_49;

public:
	inline static int32_t get_offset_of_U3CanyKeyU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1, ___U3CanyKeyU3Ek__BackingField_40)); }
	inline AnyKeyControl_t662EBC0B49B972084F39121A2DB1CCCA60AF3680 * get_U3CanyKeyU3Ek__BackingField_40() const { return ___U3CanyKeyU3Ek__BackingField_40; }
	inline AnyKeyControl_t662EBC0B49B972084F39121A2DB1CCCA60AF3680 ** get_address_of_U3CanyKeyU3Ek__BackingField_40() { return &___U3CanyKeyU3Ek__BackingField_40; }
	inline void set_U3CanyKeyU3Ek__BackingField_40(AnyKeyControl_t662EBC0B49B972084F39121A2DB1CCCA60AF3680 * value)
	{
		___U3CanyKeyU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CanyKeyU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshiftKeyU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1, ___U3CshiftKeyU3Ek__BackingField_41)); }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * get_U3CshiftKeyU3Ek__BackingField_41() const { return ___U3CshiftKeyU3Ek__BackingField_41; }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** get_address_of_U3CshiftKeyU3Ek__BackingField_41() { return &___U3CshiftKeyU3Ek__BackingField_41; }
	inline void set_U3CshiftKeyU3Ek__BackingField_41(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		___U3CshiftKeyU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshiftKeyU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CctrlKeyU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1, ___U3CctrlKeyU3Ek__BackingField_42)); }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * get_U3CctrlKeyU3Ek__BackingField_42() const { return ___U3CctrlKeyU3Ek__BackingField_42; }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** get_address_of_U3CctrlKeyU3Ek__BackingField_42() { return &___U3CctrlKeyU3Ek__BackingField_42; }
	inline void set_U3CctrlKeyU3Ek__BackingField_42(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		___U3CctrlKeyU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CctrlKeyU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaltKeyU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1, ___U3CaltKeyU3Ek__BackingField_43)); }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * get_U3CaltKeyU3Ek__BackingField_43() const { return ___U3CaltKeyU3Ek__BackingField_43; }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** get_address_of_U3CaltKeyU3Ek__BackingField_43() { return &___U3CaltKeyU3Ek__BackingField_43; }
	inline void set_U3CaltKeyU3Ek__BackingField_43(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		___U3CaltKeyU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaltKeyU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimeSelectedU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1, ___U3CimeSelectedU3Ek__BackingField_44)); }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * get_U3CimeSelectedU3Ek__BackingField_44() const { return ___U3CimeSelectedU3Ek__BackingField_44; }
	inline ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 ** get_address_of_U3CimeSelectedU3Ek__BackingField_44() { return &___U3CimeSelectedU3Ek__BackingField_44; }
	inline void set_U3CimeSelectedU3Ek__BackingField_44(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * value)
	{
		___U3CimeSelectedU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimeSelectedU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextInputListeners_46() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1, ___m_TextInputListeners_46)); }
	inline InlinedArray_1_tD457753D3A5A98E93452F4CB53191E415733A208  get_m_TextInputListeners_46() const { return ___m_TextInputListeners_46; }
	inline InlinedArray_1_tD457753D3A5A98E93452F4CB53191E415733A208 * get_address_of_m_TextInputListeners_46() { return &___m_TextInputListeners_46; }
	inline void set_m_TextInputListeners_46(InlinedArray_1_tD457753D3A5A98E93452F4CB53191E415733A208  value)
	{
		___m_TextInputListeners_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextInputListeners_46))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextInputListeners_46))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_KeyboardLayoutName_47() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1, ___m_KeyboardLayoutName_47)); }
	inline String_t* get_m_KeyboardLayoutName_47() const { return ___m_KeyboardLayoutName_47; }
	inline String_t** get_address_of_m_KeyboardLayoutName_47() { return &___m_KeyboardLayoutName_47; }
	inline void set_m_KeyboardLayoutName_47(String_t* value)
	{
		___m_KeyboardLayoutName_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyboardLayoutName_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_Keys_48() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1, ___m_Keys_48)); }
	inline KeyControlU5BU5D_t631D22F097B730844D53A2E96BC75B023707E135* get_m_Keys_48() const { return ___m_Keys_48; }
	inline KeyControlU5BU5D_t631D22F097B730844D53A2E96BC75B023707E135** get_address_of_m_Keys_48() { return &___m_Keys_48; }
	inline void set_m_Keys_48(KeyControlU5BU5D_t631D22F097B730844D53A2E96BC75B023707E135* value)
	{
		___m_Keys_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keys_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImeCompositionListeners_49() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1, ___m_ImeCompositionListeners_49)); }
	inline InlinedArray_1_t472E918FFB1ECC20DABD56600F71A326D3D8E8FD  get_m_ImeCompositionListeners_49() const { return ___m_ImeCompositionListeners_49; }
	inline InlinedArray_1_t472E918FFB1ECC20DABD56600F71A326D3D8E8FD * get_address_of_m_ImeCompositionListeners_49() { return &___m_ImeCompositionListeners_49; }
	inline void set_m_ImeCompositionListeners_49(InlinedArray_1_t472E918FFB1ECC20DABD56600F71A326D3D8E8FD  value)
	{
		___m_ImeCompositionListeners_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ImeCompositionListeners_49))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ImeCompositionListeners_49))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

struct Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1_StaticFields
{
public:
	// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::<current>k__BackingField
	Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * ___U3CcurrentU3Ek__BackingField_45;

public:
	inline static int32_t get_offset_of_U3CcurrentU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1_StaticFields, ___U3CcurrentU3Ek__BackingField_45)); }
	inline Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * get_U3CcurrentU3Ek__BackingField_45() const { return ___U3CcurrentU3Ek__BackingField_45; }
	inline Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 ** get_address_of_U3CcurrentU3Ek__BackingField_45() { return &___U3CcurrentU3Ek__BackingField_45; }
	inline void set_U3CcurrentU3Ek__BackingField_45(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * value)
	{
		___U3CcurrentU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3Ek__BackingField_45), (void*)value);
	}
};


// LevelReset
struct LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ARradicon.LightEstimation
struct LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ARradicon.LightEstimation::message
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___message_4;
	// UnityEngine.XR.ARFoundation.ARCameraManager ARradicon.LightEstimation::cameraManager
	ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ___cameraManager_5;
	// UnityEngine.GameObject ARradicon.LightEstimation::worldSpaceObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___worldSpaceObject_6;
	// UnityEngine.Light ARradicon.LightEstimation::directionalLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___directionalLight_7;
	// System.Boolean ARradicon.LightEstimation::isReady
	bool ___isReady_8;
	// System.Nullable`1<System.Single> ARradicon.LightEstimation::brightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___brightness_9;
	// System.Nullable`1<System.Single> ARradicon.LightEstimation::colorTemperature
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___colorTemperature_10;
	// System.Nullable`1<UnityEngine.Color> ARradicon.LightEstimation::colorCorrection
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___colorCorrection_11;
	// System.Nullable`1<UnityEngine.Vector3> ARradicon.LightEstimation::mainLightDirection
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___mainLightDirection_12;
	// System.Nullable`1<UnityEngine.Color> ARradicon.LightEstimation::mainLightColor
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___mainLightColor_13;
	// System.Nullable`1<System.Single> ARradicon.LightEstimation::averageMainLightBrightness
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___averageMainLightBrightness_14;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> ARradicon.LightEstimation::sphericalHarmonics
	Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ___sphericalHarmonics_15;

public:
	inline static int32_t get_offset_of_message_4() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___message_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_message_4() const { return ___message_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_message_4() { return &___message_4; }
	inline void set_message_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___message_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_4), (void*)value);
	}

	inline static int32_t get_offset_of_cameraManager_5() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___cameraManager_5)); }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * get_cameraManager_5() const { return ___cameraManager_5; }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 ** get_address_of_cameraManager_5() { return &___cameraManager_5; }
	inline void set_cameraManager_5(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * value)
	{
		___cameraManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_worldSpaceObject_6() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___worldSpaceObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_worldSpaceObject_6() const { return ___worldSpaceObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_worldSpaceObject_6() { return &___worldSpaceObject_6; }
	inline void set_worldSpaceObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___worldSpaceObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldSpaceObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_directionalLight_7() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___directionalLight_7)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_directionalLight_7() const { return ___directionalLight_7; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_directionalLight_7() { return &___directionalLight_7; }
	inline void set_directionalLight_7(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___directionalLight_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directionalLight_7), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_8() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___isReady_8)); }
	inline bool get_isReady_8() const { return ___isReady_8; }
	inline bool* get_address_of_isReady_8() { return &___isReady_8; }
	inline void set_isReady_8(bool value)
	{
		___isReady_8 = value;
	}

	inline static int32_t get_offset_of_brightness_9() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___brightness_9)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_brightness_9() const { return ___brightness_9; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_brightness_9() { return &___brightness_9; }
	inline void set_brightness_9(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___brightness_9 = value;
	}

	inline static int32_t get_offset_of_colorTemperature_10() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___colorTemperature_10)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_colorTemperature_10() const { return ___colorTemperature_10; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_colorTemperature_10() { return &___colorTemperature_10; }
	inline void set_colorTemperature_10(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___colorTemperature_10 = value;
	}

	inline static int32_t get_offset_of_colorCorrection_11() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___colorCorrection_11)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_colorCorrection_11() const { return ___colorCorrection_11; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_colorCorrection_11() { return &___colorCorrection_11; }
	inline void set_colorCorrection_11(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___colorCorrection_11 = value;
	}

	inline static int32_t get_offset_of_mainLightDirection_12() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___mainLightDirection_12)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_mainLightDirection_12() const { return ___mainLightDirection_12; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_mainLightDirection_12() { return &___mainLightDirection_12; }
	inline void set_mainLightDirection_12(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___mainLightDirection_12 = value;
	}

	inline static int32_t get_offset_of_mainLightColor_13() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___mainLightColor_13)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_mainLightColor_13() const { return ___mainLightColor_13; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_mainLightColor_13() { return &___mainLightColor_13; }
	inline void set_mainLightColor_13(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___mainLightColor_13 = value;
	}

	inline static int32_t get_offset_of_averageMainLightBrightness_14() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___averageMainLightBrightness_14)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_averageMainLightBrightness_14() const { return ___averageMainLightBrightness_14; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_averageMainLightBrightness_14() { return &___averageMainLightBrightness_14; }
	inline void set_averageMainLightBrightness_14(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___averageMainLightBrightness_14 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonics_15() { return static_cast<int32_t>(offsetof(LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F, ___sphericalHarmonics_15)); }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  get_sphericalHarmonics_15() const { return ___sphericalHarmonics_15; }
	inline Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * get_address_of_sphericalHarmonics_15() { return &___sphericalHarmonics_15; }
	inline void set_sphericalHarmonics_15(Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  value)
	{
		___sphericalHarmonics_15 = value;
	}
};


// MenuSceneLoader
struct MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MenuSceneLoader::menuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuUI_4;
	// UnityEngine.GameObject MenuSceneLoader::m_Go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Go_5;

public:
	inline static int32_t get_offset_of_menuUI_4() { return static_cast<int32_t>(offsetof(MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2, ___menuUI_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuUI_4() const { return ___menuUI_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuUI_4() { return &___menuUI_4; }
	inline void set_menuUI_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Go_5() { return static_cast<int32_t>(offsetof(MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2, ___m_Go_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Go_5() const { return ___m_Go_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Go_5() { return &___m_Go_5; }
	inline void set_m_Go_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Go_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Go_5), (void*)value);
	}
};


// UnityStandardAssets.SceneUtils.ParticleSceneControls
struct ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList UnityStandardAssets.SceneUtils.ParticleSceneControls::demoParticles
	DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * ___demoParticles_4;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::spawnOffset
	float ___spawnOffset_5;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::multiply
	float ___multiply_6;
	// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::clearOnChange
	bool ___clearOnChange_7;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::titleText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___titleText_8;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::sceneCamera
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___sceneCamera_9;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::instructionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___instructionText_10;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::previousButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___previousButton_11;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::nextButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___nextButton_12;
	// UnityEngine.UI.GraphicRaycaster UnityStandardAssets.SceneUtils.ParticleSceneControls::graphicRaycaster
	GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * ___graphicRaycaster_13;
	// UnityEngine.EventSystems.EventSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::eventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem_14;
	// UnityStandardAssets.Effects.ParticleSystemMultiplier UnityStandardAssets.SceneUtils.ParticleSceneControls::m_ParticleMultiplier
	ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * ___m_ParticleMultiplier_15;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CurrentParticleList
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___m_CurrentParticleList_16;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::m_Instance
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Instance_17;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CamOffsetVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CamOffsetVelocity_19;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_LastPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LastPos_20;

public:
	inline static int32_t get_offset_of_demoParticles_4() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___demoParticles_4)); }
	inline DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * get_demoParticles_4() const { return ___demoParticles_4; }
	inline DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E ** get_address_of_demoParticles_4() { return &___demoParticles_4; }
	inline void set_demoParticles_4(DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * value)
	{
		___demoParticles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___demoParticles_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawnOffset_5() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___spawnOffset_5)); }
	inline float get_spawnOffset_5() const { return ___spawnOffset_5; }
	inline float* get_address_of_spawnOffset_5() { return &___spawnOffset_5; }
	inline void set_spawnOffset_5(float value)
	{
		___spawnOffset_5 = value;
	}

	inline static int32_t get_offset_of_multiply_6() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___multiply_6)); }
	inline float get_multiply_6() const { return ___multiply_6; }
	inline float* get_address_of_multiply_6() { return &___multiply_6; }
	inline void set_multiply_6(float value)
	{
		___multiply_6 = value;
	}

	inline static int32_t get_offset_of_clearOnChange_7() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___clearOnChange_7)); }
	inline bool get_clearOnChange_7() const { return ___clearOnChange_7; }
	inline bool* get_address_of_clearOnChange_7() { return &___clearOnChange_7; }
	inline void set_clearOnChange_7(bool value)
	{
		___clearOnChange_7 = value;
	}

	inline static int32_t get_offset_of_titleText_8() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___titleText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_titleText_8() const { return ___titleText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_titleText_8() { return &___titleText_8; }
	inline void set_titleText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___titleText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleText_8), (void*)value);
	}

	inline static int32_t get_offset_of_sceneCamera_9() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___sceneCamera_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_sceneCamera_9() const { return ___sceneCamera_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_sceneCamera_9() { return &___sceneCamera_9; }
	inline void set_sceneCamera_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___sceneCamera_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneCamera_9), (void*)value);
	}

	inline static int32_t get_offset_of_instructionText_10() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___instructionText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_instructionText_10() const { return ___instructionText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_instructionText_10() { return &___instructionText_10; }
	inline void set_instructionText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___instructionText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instructionText_10), (void*)value);
	}

	inline static int32_t get_offset_of_previousButton_11() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___previousButton_11)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_previousButton_11() const { return ___previousButton_11; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_previousButton_11() { return &___previousButton_11; }
	inline void set_previousButton_11(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___previousButton_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousButton_11), (void*)value);
	}

	inline static int32_t get_offset_of_nextButton_12() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___nextButton_12)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_nextButton_12() const { return ___nextButton_12; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_nextButton_12() { return &___nextButton_12; }
	inline void set_nextButton_12(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___nextButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_graphicRaycaster_13() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___graphicRaycaster_13)); }
	inline GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * get_graphicRaycaster_13() const { return ___graphicRaycaster_13; }
	inline GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 ** get_address_of_graphicRaycaster_13() { return &___graphicRaycaster_13; }
	inline void set_graphicRaycaster_13(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * value)
	{
		___graphicRaycaster_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphicRaycaster_13), (void*)value);
	}

	inline static int32_t get_offset_of_eventSystem_14() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___eventSystem_14)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_eventSystem_14() const { return ___eventSystem_14; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_eventSystem_14() { return &___eventSystem_14; }
	inline void set_eventSystem_14(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___eventSystem_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystem_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParticleMultiplier_15() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_ParticleMultiplier_15)); }
	inline ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * get_m_ParticleMultiplier_15() const { return ___m_ParticleMultiplier_15; }
	inline ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 ** get_address_of_m_ParticleMultiplier_15() { return &___m_ParticleMultiplier_15; }
	inline void set_m_ParticleMultiplier_15(ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * value)
	{
		___m_ParticleMultiplier_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleMultiplier_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentParticleList_16() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_CurrentParticleList_16)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_m_CurrentParticleList_16() const { return ___m_CurrentParticleList_16; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_m_CurrentParticleList_16() { return &___m_CurrentParticleList_16; }
	inline void set_m_CurrentParticleList_16(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___m_CurrentParticleList_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentParticleList_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Instance_17() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_Instance_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Instance_17() const { return ___m_Instance_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Instance_17() { return &___m_Instance_17; }
	inline void set_m_Instance_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Instance_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_CamOffsetVelocity_19() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_CamOffsetVelocity_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CamOffsetVelocity_19() const { return ___m_CamOffsetVelocity_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CamOffsetVelocity_19() { return &___m_CamOffsetVelocity_19; }
	inline void set_m_CamOffsetVelocity_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CamOffsetVelocity_19 = value;
	}

	inline static int32_t get_offset_of_m_LastPos_20() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_LastPos_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LastPos_20() const { return ___m_LastPos_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LastPos_20() { return &___m_LastPos_20; }
	inline void set_m_LastPos_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LastPos_20 = value;
	}
};

struct ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields
{
public:
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls::s_SelectedIndex
	int32_t ___s_SelectedIndex_18;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::s_Selected
	DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * ___s_Selected_21;

public:
	inline static int32_t get_offset_of_s_SelectedIndex_18() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields, ___s_SelectedIndex_18)); }
	inline int32_t get_s_SelectedIndex_18() const { return ___s_SelectedIndex_18; }
	inline int32_t* get_address_of_s_SelectedIndex_18() { return &___s_SelectedIndex_18; }
	inline void set_s_SelectedIndex_18(int32_t value)
	{
		___s_SelectedIndex_18 = value;
	}

	inline static int32_t get_offset_of_s_Selected_21() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields, ___s_Selected_21)); }
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * get_s_Selected_21() const { return ___s_Selected_21; }
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B ** get_address_of_s_Selected_21() { return &___s_Selected_21; }
	inline void set_s_Selected_21(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * value)
	{
		___s_Selected_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selected_21), (void*)value);
	}
};


// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityStandardAssets.Effects.ParticleSystemMultiplier::multiplier
	float ___multiplier_4;

public:
	inline static int32_t get_offset_of_multiplier_4() { return static_cast<int32_t>(offsetof(ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646, ___multiplier_4)); }
	inline float get_multiplier_4() const { return ___multiplier_4; }
	inline float* get_address_of_multiplier_4() { return &___multiplier_4; }
	inline void set_multiplier_4(float value)
	{
		___multiplier_4 = value;
	}
};


// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Toggle PauseMenu::m_MenuToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___m_MenuToggle_4;
	// System.Single PauseMenu::m_TimeScaleRef
	float ___m_TimeScaleRef_5;
	// System.Single PauseMenu::m_VolumeRef
	float ___m_VolumeRef_6;
	// System.Boolean PauseMenu::m_Paused
	bool ___m_Paused_7;

public:
	inline static int32_t get_offset_of_m_MenuToggle_4() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_MenuToggle_4)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_m_MenuToggle_4() const { return ___m_MenuToggle_4; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_m_MenuToggle_4() { return &___m_MenuToggle_4; }
	inline void set_m_MenuToggle_4(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___m_MenuToggle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuToggle_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_TimeScaleRef_5() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_TimeScaleRef_5)); }
	inline float get_m_TimeScaleRef_5() const { return ___m_TimeScaleRef_5; }
	inline float* get_address_of_m_TimeScaleRef_5() { return &___m_TimeScaleRef_5; }
	inline void set_m_TimeScaleRef_5(float value)
	{
		___m_TimeScaleRef_5 = value;
	}

	inline static int32_t get_offset_of_m_VolumeRef_6() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_VolumeRef_6)); }
	inline float get_m_VolumeRef_6() const { return ___m_VolumeRef_6; }
	inline float* get_address_of_m_VolumeRef_6() { return &___m_VolumeRef_6; }
	inline void set_m_VolumeRef_6(float value)
	{
		___m_VolumeRef_6 = value;
	}

	inline static int32_t get_offset_of_m_Paused_7() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_Paused_7)); }
	inline bool get_m_Paused_7() const { return ___m_Paused_7; }
	inline bool* get_address_of_m_Paused_7() { return &___m_Paused_7; }
	inline void set_m_Paused_7(bool value)
	{
		___m_Paused_7 = value;
	}
};


// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::surfaceOffset
	float ___surfaceOffset_4;
	// UnityEngine.GameObject UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::setTargetOn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___setTargetOn_5;

public:
	inline static int32_t get_offset_of_surfaceOffset_4() { return static_cast<int32_t>(offsetof(PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310, ___surfaceOffset_4)); }
	inline float get_surfaceOffset_4() const { return ___surfaceOffset_4; }
	inline float* get_address_of_surfaceOffset_4() { return &___surfaceOffset_4; }
	inline void set_surfaceOffset_4(float value)
	{
		___surfaceOffset_4 = value;
	}

	inline static int32_t get_offset_of_setTargetOn_5() { return static_cast<int32_t>(offsetof(PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310, ___setTargetOn_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_setTargetOn_5() const { return ___setTargetOn_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_setTargetOn_5() { return &___setTargetOn_5; }
	inline void set_setTargetOn_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___setTargetOn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setTargetOn_5), (void*)value);
	}
};


// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::m_Actions
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Actions_7;
	// UnityEngine.InputSystem.PlayerNotifications UnityEngine.InputSystem.PlayerInput::m_NotificationBehavior
	int32_t ___m_NotificationBehavior_8;
	// UnityEngine.InputSystem.UI.InputSystemUIInputModule UnityEngine.InputSystem.PlayerInput::m_UIInputModule
	InputSystemUIInputModule_t667C409072ACE6A5F7D0A1AE382404C8F1096B6E * ___m_UIInputModule_9;
	// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent UnityEngine.InputSystem.PlayerInput::m_DeviceLostEvent
	DeviceLostEvent_t0B0A9B20C8BB1B8A5D9C075684274171CB0186BE * ___m_DeviceLostEvent_10;
	// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedEvent
	DeviceRegainedEvent_t28F3A952F7181DCD734ED096CA71B4E82C2BA2CB * ___m_DeviceRegainedEvent_11;
	// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent UnityEngine.InputSystem.PlayerInput::m_ControlsChangedEvent
	ControlsChangedEvent_tC088D8DBBCA3C07B69CEC4B0B528E42AB55C5BE4 * ___m_ControlsChangedEvent_12;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] UnityEngine.InputSystem.PlayerInput::m_ActionEvents
	ActionEventU5BU5D_tE2DC6350A80CC3DA4ECAC5632F9C589B67743D39* ___m_ActionEvents_13;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_NeverAutoSwitchControlSchemes
	bool ___m_NeverAutoSwitchControlSchemes_14;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultControlScheme
	String_t* ___m_DefaultControlScheme_15;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_16;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_SplitScreenIndex
	int32_t ___m_SplitScreenIndex_17;
	// UnityEngine.Camera UnityEngine.InputSystem.PlayerInput::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_18;
	// UnityEngine.InputSystem.InputValue UnityEngine.InputSystem.PlayerInput::m_InputValueObject
	InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D * ___m_InputValueObject_19;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.PlayerInput::m_CurrentActionMap
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_CurrentActionMap_20;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_PlayerIndex
	int32_t ___m_PlayerIndex_21;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_InputActive
	bool ___m_InputActive_22;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_Enabled
	bool ___m_Enabled_23;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_ActionsInitialized
	bool ___m_ActionsInitialized_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.InputSystem.PlayerInput::m_ActionMessageNames
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___m_ActionMessageNames_25;
	// UnityEngine.InputSystem.Users.InputUser UnityEngine.InputSystem.PlayerInput::m_InputUser
	InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212  ___m_InputUser_26;
	// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredDelegate
	Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 * ___m_ActionTriggeredDelegate_27;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceLostCallbacks
	CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A  ___m_DeviceLostCallbacks_28;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedCallbacks
	CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A  ___m_DeviceRegainedCallbacks_29;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_ControlsChangedCallbacks
	CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A  ___m_ControlsChangedCallbacks_30;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredCallbacks
	CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  ___m_ActionTriggeredCallbacks_31;
	// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.PlayerInput::m_UnpairedDeviceUsedDelegate
	Action_2_t60883A4CFEE1C0A716394E3EE73F871D77F80B55 * ___m_UnpairedDeviceUsedDelegate_32;
	// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.PlayerInput::m_PreFilterUnpairedDeviceUsedDelegate
	Func_3_tB4733AEB4365F5C621193590A8A6F53E3A0E61FA * ___m_PreFilterUnpairedDeviceUsedDelegate_33;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnUnpairedDeviceUsedHooked
	bool ___m_OnUnpairedDeviceUsedHooked_34;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.PlayerInput::m_DeviceChangeDelegate
	Action_2_tB5E2CD2A901D793313BBCF6D6FE1332A7777DC6E * ___m_DeviceChangeDelegate_35;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnDeviceChangeHooked
	bool ___m_OnDeviceChangeHooked_36;

public:
	inline static int32_t get_offset_of_m_Actions_7() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_Actions_7)); }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * get_m_Actions_7() const { return ___m_Actions_7; }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE ** get_address_of_m_Actions_7() { return &___m_Actions_7; }
	inline void set_m_Actions_7(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * value)
	{
		___m_Actions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_NotificationBehavior_8() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_NotificationBehavior_8)); }
	inline int32_t get_m_NotificationBehavior_8() const { return ___m_NotificationBehavior_8; }
	inline int32_t* get_address_of_m_NotificationBehavior_8() { return &___m_NotificationBehavior_8; }
	inline void set_m_NotificationBehavior_8(int32_t value)
	{
		___m_NotificationBehavior_8 = value;
	}

	inline static int32_t get_offset_of_m_UIInputModule_9() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_UIInputModule_9)); }
	inline InputSystemUIInputModule_t667C409072ACE6A5F7D0A1AE382404C8F1096B6E * get_m_UIInputModule_9() const { return ___m_UIInputModule_9; }
	inline InputSystemUIInputModule_t667C409072ACE6A5F7D0A1AE382404C8F1096B6E ** get_address_of_m_UIInputModule_9() { return &___m_UIInputModule_9; }
	inline void set_m_UIInputModule_9(InputSystemUIInputModule_t667C409072ACE6A5F7D0A1AE382404C8F1096B6E * value)
	{
		___m_UIInputModule_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UIInputModule_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceLostEvent_10() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_DeviceLostEvent_10)); }
	inline DeviceLostEvent_t0B0A9B20C8BB1B8A5D9C075684274171CB0186BE * get_m_DeviceLostEvent_10() const { return ___m_DeviceLostEvent_10; }
	inline DeviceLostEvent_t0B0A9B20C8BB1B8A5D9C075684274171CB0186BE ** get_address_of_m_DeviceLostEvent_10() { return &___m_DeviceLostEvent_10; }
	inline void set_m_DeviceLostEvent_10(DeviceLostEvent_t0B0A9B20C8BB1B8A5D9C075684274171CB0186BE * value)
	{
		___m_DeviceLostEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceLostEvent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceRegainedEvent_11() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_DeviceRegainedEvent_11)); }
	inline DeviceRegainedEvent_t28F3A952F7181DCD734ED096CA71B4E82C2BA2CB * get_m_DeviceRegainedEvent_11() const { return ___m_DeviceRegainedEvent_11; }
	inline DeviceRegainedEvent_t28F3A952F7181DCD734ED096CA71B4E82C2BA2CB ** get_address_of_m_DeviceRegainedEvent_11() { return &___m_DeviceRegainedEvent_11; }
	inline void set_m_DeviceRegainedEvent_11(DeviceRegainedEvent_t28F3A952F7181DCD734ED096CA71B4E82C2BA2CB * value)
	{
		___m_DeviceRegainedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceRegainedEvent_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsChangedEvent_12() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_ControlsChangedEvent_12)); }
	inline ControlsChangedEvent_tC088D8DBBCA3C07B69CEC4B0B528E42AB55C5BE4 * get_m_ControlsChangedEvent_12() const { return ___m_ControlsChangedEvent_12; }
	inline ControlsChangedEvent_tC088D8DBBCA3C07B69CEC4B0B528E42AB55C5BE4 ** get_address_of_m_ControlsChangedEvent_12() { return &___m_ControlsChangedEvent_12; }
	inline void set_m_ControlsChangedEvent_12(ControlsChangedEvent_tC088D8DBBCA3C07B69CEC4B0B528E42AB55C5BE4 * value)
	{
		___m_ControlsChangedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsChangedEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionEvents_13() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_ActionEvents_13)); }
	inline ActionEventU5BU5D_tE2DC6350A80CC3DA4ECAC5632F9C589B67743D39* get_m_ActionEvents_13() const { return ___m_ActionEvents_13; }
	inline ActionEventU5BU5D_tE2DC6350A80CC3DA4ECAC5632F9C589B67743D39** get_address_of_m_ActionEvents_13() { return &___m_ActionEvents_13; }
	inline void set_m_ActionEvents_13(ActionEventU5BU5D_tE2DC6350A80CC3DA4ECAC5632F9C589B67743D39* value)
	{
		___m_ActionEvents_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionEvents_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeverAutoSwitchControlSchemes_14() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_NeverAutoSwitchControlSchemes_14)); }
	inline bool get_m_NeverAutoSwitchControlSchemes_14() const { return ___m_NeverAutoSwitchControlSchemes_14; }
	inline bool* get_address_of_m_NeverAutoSwitchControlSchemes_14() { return &___m_NeverAutoSwitchControlSchemes_14; }
	inline void set_m_NeverAutoSwitchControlSchemes_14(bool value)
	{
		___m_NeverAutoSwitchControlSchemes_14 = value;
	}

	inline static int32_t get_offset_of_m_DefaultControlScheme_15() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_DefaultControlScheme_15)); }
	inline String_t* get_m_DefaultControlScheme_15() const { return ___m_DefaultControlScheme_15; }
	inline String_t** get_address_of_m_DefaultControlScheme_15() { return &___m_DefaultControlScheme_15; }
	inline void set_m_DefaultControlScheme_15(String_t* value)
	{
		___m_DefaultControlScheme_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultControlScheme_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultActionMap_16() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_DefaultActionMap_16)); }
	inline String_t* get_m_DefaultActionMap_16() const { return ___m_DefaultActionMap_16; }
	inline String_t** get_address_of_m_DefaultActionMap_16() { return &___m_DefaultActionMap_16; }
	inline void set_m_DefaultActionMap_16(String_t* value)
	{
		___m_DefaultActionMap_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultActionMap_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_SplitScreenIndex_17() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_SplitScreenIndex_17)); }
	inline int32_t get_m_SplitScreenIndex_17() const { return ___m_SplitScreenIndex_17; }
	inline int32_t* get_address_of_m_SplitScreenIndex_17() { return &___m_SplitScreenIndex_17; }
	inline void set_m_SplitScreenIndex_17(int32_t value)
	{
		___m_SplitScreenIndex_17 = value;
	}

	inline static int32_t get_offset_of_m_Camera_18() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_Camera_18)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_18() const { return ___m_Camera_18; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_18() { return &___m_Camera_18; }
	inline void set_m_Camera_18(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputValueObject_19() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_InputValueObject_19)); }
	inline InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D * get_m_InputValueObject_19() const { return ___m_InputValueObject_19; }
	inline InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D ** get_address_of_m_InputValueObject_19() { return &___m_InputValueObject_19; }
	inline void set_m_InputValueObject_19(InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D * value)
	{
		___m_InputValueObject_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputValueObject_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentActionMap_20() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_CurrentActionMap_20)); }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * get_m_CurrentActionMap_20() const { return ___m_CurrentActionMap_20; }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 ** get_address_of_m_CurrentActionMap_20() { return &___m_CurrentActionMap_20; }
	inline void set_m_CurrentActionMap_20(InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * value)
	{
		___m_CurrentActionMap_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentActionMap_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerIndex_21() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_PlayerIndex_21)); }
	inline int32_t get_m_PlayerIndex_21() const { return ___m_PlayerIndex_21; }
	inline int32_t* get_address_of_m_PlayerIndex_21() { return &___m_PlayerIndex_21; }
	inline void set_m_PlayerIndex_21(int32_t value)
	{
		___m_PlayerIndex_21 = value;
	}

	inline static int32_t get_offset_of_m_InputActive_22() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_InputActive_22)); }
	inline bool get_m_InputActive_22() const { return ___m_InputActive_22; }
	inline bool* get_address_of_m_InputActive_22() { return &___m_InputActive_22; }
	inline void set_m_InputActive_22(bool value)
	{
		___m_InputActive_22 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_23() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_Enabled_23)); }
	inline bool get_m_Enabled_23() const { return ___m_Enabled_23; }
	inline bool* get_address_of_m_Enabled_23() { return &___m_Enabled_23; }
	inline void set_m_Enabled_23(bool value)
	{
		___m_Enabled_23 = value;
	}

	inline static int32_t get_offset_of_m_ActionsInitialized_24() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_ActionsInitialized_24)); }
	inline bool get_m_ActionsInitialized_24() const { return ___m_ActionsInitialized_24; }
	inline bool* get_address_of_m_ActionsInitialized_24() { return &___m_ActionsInitialized_24; }
	inline void set_m_ActionsInitialized_24(bool value)
	{
		___m_ActionsInitialized_24 = value;
	}

	inline static int32_t get_offset_of_m_ActionMessageNames_25() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_ActionMessageNames_25)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_m_ActionMessageNames_25() const { return ___m_ActionMessageNames_25; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_m_ActionMessageNames_25() { return &___m_ActionMessageNames_25; }
	inline void set_m_ActionMessageNames_25(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___m_ActionMessageNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMessageNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputUser_26() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_InputUser_26)); }
	inline InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212  get_m_InputUser_26() const { return ___m_InputUser_26; }
	inline InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212 * get_address_of_m_InputUser_26() { return &___m_InputUser_26; }
	inline void set_m_InputUser_26(InputUser_tE639B69DD362EC41F7FE8F16893A2888CB7B9212  value)
	{
		___m_InputUser_26 = value;
	}

	inline static int32_t get_offset_of_m_ActionTriggeredDelegate_27() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_ActionTriggeredDelegate_27)); }
	inline Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 * get_m_ActionTriggeredDelegate_27() const { return ___m_ActionTriggeredDelegate_27; }
	inline Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 ** get_address_of_m_ActionTriggeredDelegate_27() { return &___m_ActionTriggeredDelegate_27; }
	inline void set_m_ActionTriggeredDelegate_27(Action_1_tAED2C418BD95BD9110B5682873A2791E281FDBA7 * value)
	{
		___m_ActionTriggeredDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionTriggeredDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceLostCallbacks_28() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_DeviceLostCallbacks_28)); }
	inline CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A  get_m_DeviceLostCallbacks_28() const { return ___m_DeviceLostCallbacks_28; }
	inline CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A * get_address_of_m_DeviceLostCallbacks_28() { return &___m_DeviceLostCallbacks_28; }
	inline void set_m_DeviceLostCallbacks_28(CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A  value)
	{
		___m_DeviceLostCallbacks_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceLostCallbacks_28))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DeviceRegainedCallbacks_29() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_DeviceRegainedCallbacks_29)); }
	inline CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A  get_m_DeviceRegainedCallbacks_29() const { return ___m_DeviceRegainedCallbacks_29; }
	inline CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A * get_address_of_m_DeviceRegainedCallbacks_29() { return &___m_DeviceRegainedCallbacks_29; }
	inline void set_m_DeviceRegainedCallbacks_29(CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A  value)
	{
		___m_DeviceRegainedCallbacks_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DeviceRegainedCallbacks_29))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlsChangedCallbacks_30() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_ControlsChangedCallbacks_30)); }
	inline CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A  get_m_ControlsChangedCallbacks_30() const { return ___m_ControlsChangedCallbacks_30; }
	inline CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A * get_address_of_m_ControlsChangedCallbacks_30() { return &___m_ControlsChangedCallbacks_30; }
	inline void set_m_ControlsChangedCallbacks_30(CallbackArray_1_t7F93D2B0C3D6E25243BD5103943EBD6AD201C30A  value)
	{
		___m_ControlsChangedCallbacks_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ControlsChangedCallbacks_30))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ActionTriggeredCallbacks_31() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_ActionTriggeredCallbacks_31)); }
	inline CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  get_m_ActionTriggeredCallbacks_31() const { return ___m_ActionTriggeredCallbacks_31; }
	inline CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E * get_address_of_m_ActionTriggeredCallbacks_31() { return &___m_ActionTriggeredCallbacks_31; }
	inline void set_m_ActionTriggeredCallbacks_31(CallbackArray_1_tCBA1CEF3330A20B6F11706FAAE12A783C31B7D3E  value)
	{
		___m_ActionTriggeredCallbacks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_ActionTriggeredCallbacks_31))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_UnpairedDeviceUsedDelegate_32() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_UnpairedDeviceUsedDelegate_32)); }
	inline Action_2_t60883A4CFEE1C0A716394E3EE73F871D77F80B55 * get_m_UnpairedDeviceUsedDelegate_32() const { return ___m_UnpairedDeviceUsedDelegate_32; }
	inline Action_2_t60883A4CFEE1C0A716394E3EE73F871D77F80B55 ** get_address_of_m_UnpairedDeviceUsedDelegate_32() { return &___m_UnpairedDeviceUsedDelegate_32; }
	inline void set_m_UnpairedDeviceUsedDelegate_32(Action_2_t60883A4CFEE1C0A716394E3EE73F871D77F80B55 * value)
	{
		___m_UnpairedDeviceUsedDelegate_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnpairedDeviceUsedDelegate_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreFilterUnpairedDeviceUsedDelegate_33() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_PreFilterUnpairedDeviceUsedDelegate_33)); }
	inline Func_3_tB4733AEB4365F5C621193590A8A6F53E3A0E61FA * get_m_PreFilterUnpairedDeviceUsedDelegate_33() const { return ___m_PreFilterUnpairedDeviceUsedDelegate_33; }
	inline Func_3_tB4733AEB4365F5C621193590A8A6F53E3A0E61FA ** get_address_of_m_PreFilterUnpairedDeviceUsedDelegate_33() { return &___m_PreFilterUnpairedDeviceUsedDelegate_33; }
	inline void set_m_PreFilterUnpairedDeviceUsedDelegate_33(Func_3_tB4733AEB4365F5C621193590A8A6F53E3A0E61FA * value)
	{
		___m_PreFilterUnpairedDeviceUsedDelegate_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreFilterUnpairedDeviceUsedDelegate_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnUnpairedDeviceUsedHooked_34() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_OnUnpairedDeviceUsedHooked_34)); }
	inline bool get_m_OnUnpairedDeviceUsedHooked_34() const { return ___m_OnUnpairedDeviceUsedHooked_34; }
	inline bool* get_address_of_m_OnUnpairedDeviceUsedHooked_34() { return &___m_OnUnpairedDeviceUsedHooked_34; }
	inline void set_m_OnUnpairedDeviceUsedHooked_34(bool value)
	{
		___m_OnUnpairedDeviceUsedHooked_34 = value;
	}

	inline static int32_t get_offset_of_m_DeviceChangeDelegate_35() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_DeviceChangeDelegate_35)); }
	inline Action_2_tB5E2CD2A901D793313BBCF6D6FE1332A7777DC6E * get_m_DeviceChangeDelegate_35() const { return ___m_DeviceChangeDelegate_35; }
	inline Action_2_tB5E2CD2A901D793313BBCF6D6FE1332A7777DC6E ** get_address_of_m_DeviceChangeDelegate_35() { return &___m_DeviceChangeDelegate_35; }
	inline void set_m_DeviceChangeDelegate_35(Action_2_tB5E2CD2A901D793313BBCF6D6FE1332A7777DC6E * value)
	{
		___m_DeviceChangeDelegate_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceChangeDelegate_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeviceChangeHooked_36() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5, ___m_OnDeviceChangeHooked_36)); }
	inline bool get_m_OnDeviceChangeHooked_36() const { return ___m_OnDeviceChangeHooked_36; }
	inline bool* get_address_of_m_OnDeviceChangeHooked_36() { return &___m_OnDeviceChangeHooked_36; }
	inline void set_m_OnDeviceChangeHooked_36(bool value)
	{
		___m_OnDeviceChangeHooked_36 = value;
	}
};

struct PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_AllActivePlayersCount
	int32_t ___s_AllActivePlayersCount_37;
	// UnityEngine.InputSystem.PlayerInput[] UnityEngine.InputSystem.PlayerInput::s_AllActivePlayers
	PlayerInputU5BU5D_tB15C531F8446E5BB53123716B7E6DDFF07263A6F* ___s_AllActivePlayers_38;
	// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.PlayerInput::s_UserChangeDelegate
	Action_3_tB353249C3A9426006E3B35E1A984C36C636E0AD8 * ___s_UserChangeDelegate_39;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevicesCount
	int32_t ___s_InitPairWithDevicesCount_40;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevices
	InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* ___s_InitPairWithDevices_41;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPlayerIndex
	int32_t ___s_InitPlayerIndex_42;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitSplitScreenIndex
	int32_t ___s_InitSplitScreenIndex_43;
	// System.String UnityEngine.InputSystem.PlayerInput::s_InitControlScheme
	String_t* ___s_InitControlScheme_44;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::s_DestroyIfDeviceSetupUnsuccessful
	bool ___s_DestroyIfDeviceSetupUnsuccessful_45;

public:
	inline static int32_t get_offset_of_s_AllActivePlayersCount_37() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields, ___s_AllActivePlayersCount_37)); }
	inline int32_t get_s_AllActivePlayersCount_37() const { return ___s_AllActivePlayersCount_37; }
	inline int32_t* get_address_of_s_AllActivePlayersCount_37() { return &___s_AllActivePlayersCount_37; }
	inline void set_s_AllActivePlayersCount_37(int32_t value)
	{
		___s_AllActivePlayersCount_37 = value;
	}

	inline static int32_t get_offset_of_s_AllActivePlayers_38() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields, ___s_AllActivePlayers_38)); }
	inline PlayerInputU5BU5D_tB15C531F8446E5BB53123716B7E6DDFF07263A6F* get_s_AllActivePlayers_38() const { return ___s_AllActivePlayers_38; }
	inline PlayerInputU5BU5D_tB15C531F8446E5BB53123716B7E6DDFF07263A6F** get_address_of_s_AllActivePlayers_38() { return &___s_AllActivePlayers_38; }
	inline void set_s_AllActivePlayers_38(PlayerInputU5BU5D_tB15C531F8446E5BB53123716B7E6DDFF07263A6F* value)
	{
		___s_AllActivePlayers_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_AllActivePlayers_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_UserChangeDelegate_39() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields, ___s_UserChangeDelegate_39)); }
	inline Action_3_tB353249C3A9426006E3B35E1A984C36C636E0AD8 * get_s_UserChangeDelegate_39() const { return ___s_UserChangeDelegate_39; }
	inline Action_3_tB353249C3A9426006E3B35E1A984C36C636E0AD8 ** get_address_of_s_UserChangeDelegate_39() { return &___s_UserChangeDelegate_39; }
	inline void set_s_UserChangeDelegate_39(Action_3_tB353249C3A9426006E3B35E1A984C36C636E0AD8 * value)
	{
		___s_UserChangeDelegate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UserChangeDelegate_39), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitPairWithDevicesCount_40() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields, ___s_InitPairWithDevicesCount_40)); }
	inline int32_t get_s_InitPairWithDevicesCount_40() const { return ___s_InitPairWithDevicesCount_40; }
	inline int32_t* get_address_of_s_InitPairWithDevicesCount_40() { return &___s_InitPairWithDevicesCount_40; }
	inline void set_s_InitPairWithDevicesCount_40(int32_t value)
	{
		___s_InitPairWithDevicesCount_40 = value;
	}

	inline static int32_t get_offset_of_s_InitPairWithDevices_41() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields, ___s_InitPairWithDevices_41)); }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* get_s_InitPairWithDevices_41() const { return ___s_InitPairWithDevices_41; }
	inline InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523** get_address_of_s_InitPairWithDevices_41() { return &___s_InitPairWithDevices_41; }
	inline void set_s_InitPairWithDevices_41(InputDeviceU5BU5D_tD2BA1C48FAB6E1637FC3C55E2EE445EB94958523* value)
	{
		___s_InitPairWithDevices_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitPairWithDevices_41), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitPlayerIndex_42() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields, ___s_InitPlayerIndex_42)); }
	inline int32_t get_s_InitPlayerIndex_42() const { return ___s_InitPlayerIndex_42; }
	inline int32_t* get_address_of_s_InitPlayerIndex_42() { return &___s_InitPlayerIndex_42; }
	inline void set_s_InitPlayerIndex_42(int32_t value)
	{
		___s_InitPlayerIndex_42 = value;
	}

	inline static int32_t get_offset_of_s_InitSplitScreenIndex_43() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields, ___s_InitSplitScreenIndex_43)); }
	inline int32_t get_s_InitSplitScreenIndex_43() const { return ___s_InitSplitScreenIndex_43; }
	inline int32_t* get_address_of_s_InitSplitScreenIndex_43() { return &___s_InitSplitScreenIndex_43; }
	inline void set_s_InitSplitScreenIndex_43(int32_t value)
	{
		___s_InitSplitScreenIndex_43 = value;
	}

	inline static int32_t get_offset_of_s_InitControlScheme_44() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields, ___s_InitControlScheme_44)); }
	inline String_t* get_s_InitControlScheme_44() const { return ___s_InitControlScheme_44; }
	inline String_t** get_address_of_s_InitControlScheme_44() { return &___s_InitControlScheme_44; }
	inline void set_s_InitControlScheme_44(String_t* value)
	{
		___s_InitControlScheme_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitControlScheme_44), (void*)value);
	}

	inline static int32_t get_offset_of_s_DestroyIfDeviceSetupUnsuccessful_45() { return static_cast<int32_t>(offsetof(PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_StaticFields, ___s_DestroyIfDeviceSetupUnsuccessful_45)); }
	inline bool get_s_DestroyIfDeviceSetupUnsuccessful_45() const { return ___s_DestroyIfDeviceSetupUnsuccessful_45; }
	inline bool* get_address_of_s_DestroyIfDeviceSetupUnsuccessful_45() { return &___s_DestroyIfDeviceSetupUnsuccessful_45; }
	inline void set_s_DestroyIfDeviceSetupUnsuccessful_45(bool value)
	{
		___s_DestroyIfDeviceSetupUnsuccessful_45 = value;
	}
};


// SceneAndURLLoader
struct SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PauseMenu SceneAndURLLoader::m_PauseMenu
	PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * ___m_PauseMenu_4;

public:
	inline static int32_t get_offset_of_m_PauseMenu_4() { return static_cast<int32_t>(offsetof(SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E, ___m_PauseMenu_4)); }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * get_m_PauseMenu_4() const { return ___m_PauseMenu_4; }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 ** get_address_of_m_PauseMenu_4() { return &___m_PauseMenu_4; }
	inline void set_m_PauseMenu_4(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * value)
	{
		___m_PauseMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PauseMenu_4), (void*)value);
	}
};


// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::FullSpeedTex
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___FullSpeedTex_4;
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::SlowSpeedTex
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SlowSpeedTex_5;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::fullSpeed
	float ___fullSpeed_6;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::slowSpeed
	float ___slowSpeed_7;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.SlowMoButton::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_8;
	// System.Boolean UnityStandardAssets.SceneUtils.SlowMoButton::m_SlowMo
	bool ___m_SlowMo_9;

public:
	inline static int32_t get_offset_of_FullSpeedTex_4() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___FullSpeedTex_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_FullSpeedTex_4() const { return ___FullSpeedTex_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_FullSpeedTex_4() { return &___FullSpeedTex_4; }
	inline void set_FullSpeedTex_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___FullSpeedTex_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullSpeedTex_4), (void*)value);
	}

	inline static int32_t get_offset_of_SlowSpeedTex_5() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___SlowSpeedTex_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SlowSpeedTex_5() const { return ___SlowSpeedTex_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SlowSpeedTex_5() { return &___SlowSpeedTex_5; }
	inline void set_SlowSpeedTex_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SlowSpeedTex_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SlowSpeedTex_5), (void*)value);
	}

	inline static int32_t get_offset_of_fullSpeed_6() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___fullSpeed_6)); }
	inline float get_fullSpeed_6() const { return ___fullSpeed_6; }
	inline float* get_address_of_fullSpeed_6() { return &___fullSpeed_6; }
	inline void set_fullSpeed_6(float value)
	{
		___fullSpeed_6 = value;
	}

	inline static int32_t get_offset_of_slowSpeed_7() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___slowSpeed_7)); }
	inline float get_slowSpeed_7() const { return ___slowSpeed_7; }
	inline float* get_address_of_slowSpeed_7() { return &___slowSpeed_7; }
	inline void set_slowSpeed_7(float value)
	{
		___slowSpeed_7 = value;
	}

	inline static int32_t get_offset_of_button_8() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___button_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_8() const { return ___button_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_8() { return &___button_8; }
	inline void set_button_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SlowMo_9() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___m_SlowMo_9)); }
	inline bool get_m_SlowMo_9() const { return ___m_SlowMo_9; }
	inline bool* get_address_of_m_SlowMo_9() { return &___m_SlowMo_9; }
	inline void set_m_SlowMo_9(bool value)
	{
		___m_SlowMo_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7  : public SubsystemLifecycleManager_3_t0E334FAE91D54B85E9314C55C4CDCB207ED1BCC5
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_Trackables_9)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7, ___m_PendingAdds_10)); }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t712D6B074B6A493ABA07777BD08F1A62D9DE2534 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Added_11)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Updated_12)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7_StaticFields, ___s_Removed_13)); }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t5B83F86DDCFED5733853B8CB94D674B62A54C276 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045  : public SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_Trackables_9)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_PendingAdds_10)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Added_11)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Updated_12)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Removed_13)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874  : public SubsystemLifecycleManager_3_tC083C76968A3985FEAC936C1BBC3D5F306890A2C
{
public:
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  ___m_CameraGrainInfo_18;

public:
	inline static int32_t get_offset_of_m_FocusMode_7() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FocusMode_7)); }
	inline int32_t get_m_FocusMode_7() const { return ___m_FocusMode_7; }
	inline int32_t* get_address_of_m_FocusMode_7() { return &___m_FocusMode_7; }
	inline void set_m_FocusMode_7(int32_t value)
	{
		___m_FocusMode_7 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimationMode_8() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimationMode_8)); }
	inline int32_t get_m_LightEstimationMode_8() const { return ___m_LightEstimationMode_8; }
	inline int32_t* get_address_of_m_LightEstimationMode_8() { return &___m_LightEstimationMode_8; }
	inline void set_m_LightEstimationMode_8(int32_t value)
	{
		___m_LightEstimationMode_8 = value;
	}

	inline static int32_t get_offset_of_m_AutoFocus_9() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_AutoFocus_9)); }
	inline bool get_m_AutoFocus_9() const { return ___m_AutoFocus_9; }
	inline bool* get_address_of_m_AutoFocus_9() { return &___m_AutoFocus_9; }
	inline void set_m_AutoFocus_9(bool value)
	{
		___m_AutoFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimation_10() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_LightEstimation_10)); }
	inline int32_t get_m_LightEstimation_10() const { return ___m_LightEstimation_10; }
	inline int32_t* get_address_of_m_LightEstimation_10() { return &___m_LightEstimation_10; }
	inline void set_m_LightEstimation_10(int32_t value)
	{
		___m_LightEstimation_10 = value;
	}

	inline static int32_t get_offset_of_m_FacingDirection_11() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_FacingDirection_11)); }
	inline int32_t get_m_FacingDirection_11() const { return ___m_FacingDirection_11; }
	inline int32_t* get_address_of_m_FacingDirection_11() { return &___m_FacingDirection_11; }
	inline void set_m_FacingDirection_11(int32_t value)
	{
		___m_FacingDirection_11 = value;
	}

	inline static int32_t get_offset_of_frameReceived_12() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___frameReceived_12)); }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * get_frameReceived_12() const { return ___frameReceived_12; }
	inline Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 ** get_address_of_frameReceived_12() { return &___frameReceived_12; }
	inline void set_frameReceived_12(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * value)
	{
		___frameReceived_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReceived_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextureInfos_15() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_TextureInfos_15)); }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * get_m_TextureInfos_15() const { return ___m_TextureInfos_15; }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A ** get_address_of_m_TextureInfos_15() { return &___m_TextureInfos_15; }
	inline void set_m_TextureInfos_15(List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * value)
	{
		___m_TextureInfos_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextureInfos_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Camera_16() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_Camera_16)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_16() const { return ___m_Camera_16; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_16() { return &___m_Camera_16; }
	inline void set_m_Camera_16(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreRenderInvertCullingValue_17() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_PreRenderInvertCullingValue_17)); }
	inline bool get_m_PreRenderInvertCullingValue_17() const { return ___m_PreRenderInvertCullingValue_17; }
	inline bool* get_address_of_m_PreRenderInvertCullingValue_17() { return &___m_PreRenderInvertCullingValue_17; }
	inline void set_m_PreRenderInvertCullingValue_17(bool value)
	{
		___m_PreRenderInvertCullingValue_17 = value;
	}

	inline static int32_t get_offset_of_m_CameraGrainInfo_18() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874, ___m_CameraGrainInfo_18)); }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  get_m_CameraGrainInfo_18() const { return ___m_CameraGrainInfo_18; }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * get_address_of_m_CameraGrainInfo_18() { return &___m_CameraGrainInfo_18; }
	inline void set_m_CameraGrainInfo_18(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		___m_CameraGrainInfo_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CameraGrainInfo_18))->___m_Texture_2), (void*)NULL);
	}
};

struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___s_PropertyIds_14;

public:
	inline static int32_t get_offset_of_s_Textures_13() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_Textures_13)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_s_Textures_13() const { return ___s_Textures_13; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_s_Textures_13() { return &___s_Textures_13; }
	inline void set_s_Textures_13(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___s_Textures_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Textures_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_PropertyIds_14() { return static_cast<int32_t>(offsetof(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874_StaticFields, ___s_PropertyIds_14)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_s_PropertyIds_14() const { return ___s_PropertyIds_14; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_s_PropertyIds_14() { return &___s_PropertyIds_14; }
	inline void set_s_PropertyIds_14(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___s_PropertyIds_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PropertyIds_14), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___m_RootRaycaster_4;

public:
	inline static int32_t get_offset_of_m_RootRaycaster_4() { return static_cast<int32_t>(offsetof(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876, ___m_RootRaycaster_4)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_m_RootRaycaster_4() const { return ___m_RootRaycaster_4; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_m_RootRaycaster_4() { return &___m_RootRaycaster_4; }
	inline void set_m_RootRaycaster_4(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___m_RootRaycaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootRaycaster_4), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7  : public AxisControl_tEF3889C417C729DF242C522547C8E461B4A598EF
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;

public:
	inline static int32_t get_offset_of_pressPoint_33() { return static_cast<int32_t>(offsetof(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7, ___pressPoint_33)); }
	inline float get_pressPoint_33() const { return ___pressPoint_33; }
	inline float* get_address_of_pressPoint_33() { return &___pressPoint_33; }
	inline void set_pressPoint_33(float value)
	{
		___pressPoint_33 = value;
	}
};

struct ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7_StaticFields
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;

public:
	inline static int32_t get_offset_of_s_GlobalDefaultButtonPressPoint_34() { return static_cast<int32_t>(offsetof(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7_StaticFields, ___s_GlobalDefaultButtonPressPoint_34)); }
	inline float get_s_GlobalDefaultButtonPressPoint_34() const { return ___s_GlobalDefaultButtonPressPoint_34; }
	inline float* get_address_of_s_GlobalDefaultButtonPressPoint_34() { return &___s_GlobalDefaultButtonPressPoint_34; }
	inline void set_s_GlobalDefaultButtonPressPoint_34(float value)
	{
		___s_GlobalDefaultButtonPressPoint_34 = value;
	}

	inline static int32_t get_offset_of_s_GlobalDefaultButtonReleaseThreshold_35() { return static_cast<int32_t>(offsetof(ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7_StaticFields, ___s_GlobalDefaultButtonReleaseThreshold_35)); }
	inline float get_s_GlobalDefaultButtonReleaseThreshold_35() const { return ___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline float* get_address_of_s_GlobalDefaultButtonReleaseThreshold_35() { return &___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline void set_s_GlobalDefaultButtonReleaseThreshold_35(float value)
	{
		___s_GlobalDefaultButtonReleaseThreshold_35 = value;
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4  : public ARTrackableManager_5_tB03CF7F1B5B39FA73203E7F2342207BD4FF540B7
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * ___planesChanged_16;

public:
	inline static int32_t get_offset_of_m_PlanePrefab_14() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_PlanePrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PlanePrefab_14() const { return ___m_PlanePrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PlanePrefab_14() { return &___m_PlanePrefab_14; }
	inline void set_m_PlanePrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PlanePrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlanePrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_DetectionMode_15() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___m_DetectionMode_15)); }
	inline int32_t get_m_DetectionMode_15() const { return ___m_DetectionMode_15; }
	inline int32_t* get_address_of_m_DetectionMode_15() { return &___m_DetectionMode_15; }
	inline void set_m_DetectionMode_15(int32_t value)
	{
		___m_DetectionMode_15 = value;
	}

	inline static int32_t get_offset_of_planesChanged_16() { return static_cast<int32_t>(offsetof(ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4, ___planesChanged_16)); }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * get_planesChanged_16() const { return ___planesChanged_16; }
	inline Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 ** get_address_of_planesChanged_16() { return &___planesChanged_16; }
	inline void set_planesChanged_16(Action_1_tCEBED0DA57F23A7A92A05B380E69C5D67FEE4C25 * value)
	{
		___planesChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planesChanged_16), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F  : public ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * ___m_Raycasters_19;

public:
	inline static int32_t get_offset_of_m_RaycastPrefab_14() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_RaycastPrefab_14() const { return ___m_RaycastPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_RaycastPrefab_14() { return &___m_RaycastPrefab_14; }
	inline void set_m_RaycastPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_RaycastPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastViewportDelegate_17() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastViewportDelegate_17)); }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * get_m_RaycastViewportDelegate_17() const { return ___m_RaycastViewportDelegate_17; }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 ** get_address_of_m_RaycastViewportDelegate_17() { return &___m_RaycastViewportDelegate_17; }
	inline void set_m_RaycastViewportDelegate_17(Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * value)
	{
		___m_RaycastViewportDelegate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastViewportDelegate_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastRayDelegate_18() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastRayDelegate_18)); }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * get_m_RaycastRayDelegate_18() const { return ___m_RaycastRayDelegate_18; }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 ** get_address_of_m_RaycastRayDelegate_18() { return &___m_RaycastRayDelegate_18; }
	inline void set_m_RaycastRayDelegate_18(Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * value)
	{
		___m_RaycastRayDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastRayDelegate_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Raycasters_19() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_Raycasters_19)); }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * get_m_Raycasters_19() const { return ___m_Raycasters_19; }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 ** get_address_of_m_Raycasters_19() { return &___m_Raycasters_19; }
	inline void set_m_Raycasters_19(List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * value)
	{
		___m_Raycasters_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Raycasters_19), (void*)value);
	}
};

struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * ___s_NativeRaycastHits_16;

public:
	inline static int32_t get_offset_of_s_RaycastHitComparer_15() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_RaycastHitComparer_15)); }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * get_s_RaycastHitComparer_15() const { return ___s_RaycastHitComparer_15; }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE ** get_address_of_s_RaycastHitComparer_15() { return &___s_RaycastHitComparer_15; }
	inline void set_s_RaycastHitComparer_15(Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * value)
	{
		___s_RaycastHitComparer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastHitComparer_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_NativeRaycastHits_16() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_NativeRaycastHits_16)); }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * get_s_NativeRaycastHits_16() const { return ___s_NativeRaycastHits_16; }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 ** get_address_of_s_NativeRaycastHits_16() { return &___s_NativeRaycastHits_16; }
	inline void set_s_NativeRaycastHits_16(List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * value)
	{
		___s_NativeRaycastHits_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NativeRaycastHits_16), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6  : public BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876
{
public:
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * ___m_RaycastResults_10;

public:
	inline static int32_t get_offset_of_m_IgnoreReversedGraphics_6() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_IgnoreReversedGraphics_6)); }
	inline bool get_m_IgnoreReversedGraphics_6() const { return ___m_IgnoreReversedGraphics_6; }
	inline bool* get_address_of_m_IgnoreReversedGraphics_6() { return &___m_IgnoreReversedGraphics_6; }
	inline void set_m_IgnoreReversedGraphics_6(bool value)
	{
		___m_IgnoreReversedGraphics_6 = value;
	}

	inline static int32_t get_offset_of_m_BlockingObjects_7() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_BlockingObjects_7)); }
	inline int32_t get_m_BlockingObjects_7() const { return ___m_BlockingObjects_7; }
	inline int32_t* get_address_of_m_BlockingObjects_7() { return &___m_BlockingObjects_7; }
	inline void set_m_BlockingObjects_7(int32_t value)
	{
		___m_BlockingObjects_7 = value;
	}

	inline static int32_t get_offset_of_m_BlockingMask_8() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_BlockingMask_8)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_BlockingMask_8() const { return ___m_BlockingMask_8; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_BlockingMask_8() { return &___m_BlockingMask_8; }
	inline void set_m_BlockingMask_8(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_BlockingMask_8 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_Canvas_9)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastResults_10() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_RaycastResults_10)); }
	inline List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * get_m_RaycastResults_10() const { return ___m_RaycastResults_10; }
	inline List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA ** get_address_of_m_RaycastResults_10() { return &___m_RaycastResults_10; }
	inline void set_m_RaycastResults_10(List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * value)
	{
		___m_RaycastResults_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResults_10), (void*)value);
	}
};

struct GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * ___s_SortedGraphics_11;

public:
	inline static int32_t get_offset_of_s_SortedGraphics_11() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6_StaticFields, ___s_SortedGraphics_11)); }
	inline List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * get_s_SortedGraphics_11() const { return ___s_SortedGraphics_11; }
	inline List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA ** get_address_of_s_SortedGraphics_11() { return &___s_SortedGraphics_11; }
	inline void set_s_SortedGraphics_11(List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * value)
	{
		___s_SortedGraphics_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SortedGraphics_11), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t05A114EE80E1DAACBA39E345B06EAC8101F1BB78  : public ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7
{
public:
	// UnityEngine.InputSystem.Key UnityEngine.InputSystem.Controls.KeyControl::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_37;
	// System.Int32 UnityEngine.InputSystem.Controls.KeyControl::m_ScanCode
	int32_t ___m_ScanCode_38;

public:
	inline static int32_t get_offset_of_U3CkeyCodeU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(KeyControl_t05A114EE80E1DAACBA39E345B06EAC8101F1BB78, ___U3CkeyCodeU3Ek__BackingField_37)); }
	inline int32_t get_U3CkeyCodeU3Ek__BackingField_37() const { return ___U3CkeyCodeU3Ek__BackingField_37; }
	inline int32_t* get_address_of_U3CkeyCodeU3Ek__BackingField_37() { return &___U3CkeyCodeU3Ek__BackingField_37; }
	inline void set_U3CkeyCodeU3Ek__BackingField_37(int32_t value)
	{
		___U3CkeyCodeU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_m_ScanCode_38() { return static_cast<int32_t>(offsetof(KeyControl_t05A114EE80E1DAACBA39E345B06EAC8101F1BB78, ___m_ScanCode_38)); }
	inline int32_t get_m_ScanCode_38() const { return ___m_ScanCode_38; }
	inline int32_t* get_address_of_m_ScanCode_38() { return &___m_ScanCode_38; }
	inline void set_m_ScanCode_38(int32_t value)
	{
		___m_ScanCode_38 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * m_Items[1];

public:
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  m_Items[1];

public:
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputValue_Get_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mFB21C5C839A2974F31F46066906360F8975F69F7_gshared (InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_gshared (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mE17E1034CE9FC6D3E512287D4365DBD58EDF5376_gshared_inline (Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  Nullable_1_get_Value_mCF8EA21EB849E629CB12759C7751EC75A9404528_gshared (Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_gshared (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.InputSystem.PlayerInput>()
inline PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 * Component_GetComponent_TisPlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_mFABB52C3F831D88EBB501F539B3BA598D7F569E0 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::get_planePrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ARPlaneManager_get_planePrefab_m3C00DB153DAE1813C0174CE0668913D2D2F74AE6_inline (ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::get_actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * PlayerInput_get_actions_m8F47C8353306CE307FB83D091C763A0877B71E91 (PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 * __this, const RuntimeMethod* method);
// System.Void ARradicon.AppearOnPlane::ShowMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppearOnPlane_ShowMessage_mF2203FB2639F2ACE6ADB5DF0023A58DF0A855F7B (AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1 * __this, String_t* ___text0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputValue_Get_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mFB21C5C839A2974F31F46066906360F8975F69F7 (InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D *, const RuntimeMethod*))InputValue_Get_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mFB21C5C839A2974F31F46066906360F8975F69F7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201 (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650 (ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, int32_t, const RuntimeMethod*))List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * Keyboard_get_current_m01CD47AB0E48881AFED0E143B85DBF8348313496_inline (const RuntimeMethod* method);
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_qKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t05A114EE80E1DAACBA39E345B06EAC8101F1BB78 * Keyboard_get_qKey_mAEB34F99390C624395F4243CDC765689AB8A6212 (Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasReleasedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasReleasedThisFrame_mDD554331078FD755B44BAC8AC15BC9BB3CFB7543 (ButtonControl_tB12DB7F67C4E11C6F0F152F5B3D74C915FD829B7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_rKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t05A114EE80E1DAACBA39E345B06EAC8101F1BB78 * Keyboard_get_rKey_m55C5882ECB4D948F2476072A958012990DD2DF3B (Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * __this, const RuntimeMethod* method);
// System.Void ARradicon.Car::OnReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_OnReset_m98960499637F06F8772BBB4DE7FD63ECC7B0356C (Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ARradicon.Car/AxleInfo>::GetEnumerator()
inline Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563  List_1_GetEnumerator_m29D34F8221DCA8524FD880AA750524326A01A387 (List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563  (*) (List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<ARradicon.Car/AxleInfo>::get_Current()
inline AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * Enumerator_get_Current_m08CE17A35A12D72D03DFB519D8087054EDEAB5D2_inline (Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 * __this, const RuntimeMethod* method)
{
	return ((  AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * (*) (Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<ARradicon.Car/AxleInfo>::MoveNext()
inline bool Enumerator_MoveNext_m9AE657FA69C10CC8F6BC20D22F0B10433867C95E (Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ARradicon.Car/AxleInfo>::Dispose()
inline void Enumerator_Dispose_m8128C06B570552EB33AC3CFC2ABEBE314EDFED2E (Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F (int32_t ___index0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_tA2F349FE839781469A0344CF6039B51512394275 * Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Light_tA2F349FE839781469A0344CF6039B51512394275 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16 (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_m89E016132AD25B2F5402EB0996DAC4E5D6B1C035 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_mDB7093508DC69244620BA73A5DBEF42C1C9C4B64 (ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * __this, Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::get_lightEstimation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline (ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_averageBrightness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ARLightEstimationData_get_averageBrightness_m7BCFDB0BE6EE1B92029CE7360F6D9FA4CC19591A (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_averageColorTemperature()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ARLightEstimationData_get_averageColorTemperature_m5D21E92478B8C1436495FD31867F60F0CE1A149C_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_colorTemperature(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_colorTemperature_m058BA7D83D5E42A95242137F23013E95EB13398B (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_colorCorrection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ARLightEstimationData_get_colorCorrection_m8C619600F9750BC8C114CD5C88FAF56021B7CF64_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_mainLightDirection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ARLightEstimationData_get_mainLightDirection_m1B27244869717BFB708E7B632145241F2C61E777_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *, const RuntimeMethod*))Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_mainLightColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ARLightEstimationData_get_mainLightColor_m1AD9A36FE8877ED40B779894AE5E9B978775BD0C_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_averageMainLightBrightness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ARLightEstimationData_get_averageMainLightBrightness_mF054E11FCAA365FFFEE0CEAFCB415822F4C24800 (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_ambientSphericalHarmonics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ARLightEstimationData_get_ambientSphericalHarmonics_mF68F20C0029F23EA4C67E69A2149501EC8FAA1DA_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::get_HasValue()
inline bool Nullable_1_get_HasValue_mE17E1034CE9FC6D3E512287D4365DBD58EDF5376_inline (Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E *, const RuntimeMethod*))Nullable_1_get_HasValue_mE17E1034CE9FC6D3E512287D4365DBD58EDF5376_gshared_inline)(__this, method);
}
// System.Void UnityEngine.RenderSettings::set_ambientMode(UnityEngine.Rendering.AmbientMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientMode_mE14A1AA6475471C282CE090BE7AC86D2AF64F47B (int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::get_Value()
inline SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  Nullable_1_get_Value_mCF8EA21EB849E629CB12759C7751EC75A9404528 (Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * __this, const RuntimeMethod* method)
{
	return ((  SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  (*) (Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E *, const RuntimeMethod*))Nullable_1_get_Value_mCF8EA21EB849E629CB12759C7751EC75A9404528_gshared)(__this, method);
}
// System.Void UnityEngine.RenderSettings::set_ambientProbe(UnityEngine.Rendering.SphericalHarmonicsL2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientProbe_m70DB5A2D154320EB11A778D6009AFFFD9DAC3736 (SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, int32_t ___i0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::CheckForGuiCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSceneControls_CheckForGuiCollision_mB8EDC5E34CE1B59986991852009A011D9514A8FB (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Effects.ParticleSystemMultiplier>()
inline ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
inline void List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982 (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, int32_t ___count0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_mE644EE1603DFF2087224FF6364EA0204D04D7939_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3 (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioListener::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344 (const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m8973DC956DD5235381EE4ACB4A182AA5BF0EF2EA (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<PauseMenu>()
inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * Selectable_get_targetGraphic_mF2D1BFB9DE33BAB553933533CC4A9135A37F4A72_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_targetGraphic_m668325D43E18A35560B4176477D004ECDB9C9604 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void ARradicon.AppearOnPlane::ShowMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppearOnPlane_ShowMessage_mF2203FB2639F2ACE6ADB5DF0023A58DF0A855F7B (AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void ShowMessage(string text) { message.text = $"{text}\r\n"; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_message_4();
		String_t* L_1 = ___text0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// void ShowMessage(string text) { message.text = $"{text}\r\n"; }
		return;
	}
}
// System.Void ARradicon.AppearOnPlane::ShowDebug(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppearOnPlane_ShowDebug_m5BAEE040A9C96260C279A2D21E91A29A6537E569 (AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void ShowDebug(string text) { debugPosition.text = $"{text}\r\n"; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_debugPosition_5();
		String_t* L_1 = ___text0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// void ShowDebug(string text) { debugPosition.text = $"{text}\r\n"; }
		return;
	}
}
// System.Void ARradicon.AppearOnPlane::AddMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppearOnPlane_AddMessage_m74675B14474B99EE975B9C26FA3A94ECCCA59B02 (AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void AddMessage(string text) { message.text += $"{text}\r\n"; }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_message_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		String_t* L_3 = ___text0;
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, L_3, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// void AddMessage(string text) { message.text += $"{text}\r\n"; }
		return;
	}
}
// System.Void ARradicon.AppearOnPlane::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppearOnPlane_Awake_m271EB52CA895CEE7E8CDBDA90533D99F4D2BBFD2 (AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_mFABB52C3F831D88EBB501F539B3BA598D7F569E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB58ADA4BAD8DDF4649F957E605B9DA589188AF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (message == null) { Application.Quit(); }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_message_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (message == null) { Application.Quit(); }
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0013:
	{
		// planeManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_2;
		L_2 = Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846(__this, /*hidden argument*/Component_GetComponent_TisARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4_m7BA2917E127FC45DCAF97AF959F8BE832F8D1846_RuntimeMethod_var);
		__this->set_planeManager_7(L_2);
		// playerInput = GetComponent<PlayerInput>();
		PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 * L_3;
		L_3 = Component_GetComponent_TisPlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_mFABB52C3F831D88EBB501F539B3BA598D7F569E0(__this, /*hidden argument*/Component_GetComponent_TisPlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5_mFABB52C3F831D88EBB501F539B3BA598D7F569E0_RuntimeMethod_var);
		__this->set_playerInput_9(L_3);
		// raycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_4;
		L_4 = Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770(__this, /*hidden argument*/Component_GetComponent_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m06FA2C50C4CE43EB1459B81753EFF12567E93770_RuntimeMethod_var);
		__this->set_raycastManager_8(L_4);
		// if (placementPrefab == null || planeManager == null
		//     || planeManager.planePrefab == null || raycastManager == null
		//     || playerInput == null || playerInput.actions == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_placementPrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0095;
		}
	}
	{
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_7 = __this->get_planeManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0095;
		}
	}
	{
		ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * L_9 = __this->get_planeManager_7();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = ARPlaneManager_get_planePrefab_m3C00DB153DAE1813C0174CE0668913D2D2F74AE6_inline(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0095;
		}
	}
	{
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_12 = __this->get_raycastManager_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0095;
		}
	}
	{
		PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 * L_14 = __this->get_playerInput_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0095;
		}
	}
	{
		PlayerInput_t9D70277FD22ABF9210A6B8EB738728BD1B59FDC5 * L_16 = __this->get_playerInput_9();
		NullCheck(L_16);
		InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * L_17;
		L_17 = PlayerInput_get_actions_m8F47C8353306CE307FB83D091C763A0877B71E91(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a8;
		}
	}

IL_0095:
	{
		// isReady = false;
		__this->set_isReady_10((bool)0);
		// ShowMessage("エラー：SerializeFieldなどの設定不備");
		AppearOnPlane_ShowMessage_mF2203FB2639F2ACE6ADB5DF0023A58DF0A855F7B(__this, _stringLiteralCB58ADA4BAD8DDF4649F957E605B9DA589188AF8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a8:
	{
		// isReady = true;
		__this->set_isReady_10((bool)1);
		// }
		return;
	}
}
// System.Void ARradicon.AppearOnPlane::OnTouch(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppearOnPlane_OnTouch_m31473152EC00BEE3EB0C827156000E6220B921F3 (AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1 * __this, InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D * ___touchInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mFB21C5C839A2974F31F46066906360F8975F69F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * V_1 = NULL;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!isReady) { return; }
		bool L_0 = __this->get_isReady_10();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isReady) { return; }
		return;
	}

IL_0009:
	{
		// var touchPosition = touchInfo.Get<Vector2>();
		InputValue_tE8202DB53B8AF57D77D883BEB31D2801CBF20E2D * L_1 = ___touchInfo0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = InputValue_Get_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mFB21C5C839A2974F31F46066906360F8975F69F7(L_1, /*hidden argument*/InputValue_Get_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mFB21C5C839A2974F31F46066906360F8975F69F7_RuntimeMethod_var);
		V_0 = L_2;
		// if (touchPosition.y >= 900)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		float L_4 = L_3.get_y_1();
		if ((!(((float)L_4) >= ((float)(900.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		// var hits = new List<ARRaycastHit>();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_5 = (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *)il2cpp_codegen_object_new(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201(L_5, /*hidden argument*/List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		V_1 = L_5;
		// if (raycastManager.Raycast(touchPosition, hits, TrackableType.PlaneEstimated))
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_6 = __this->get_raycastManager_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_8 = V_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650(L_6, L_7, L_8, 8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0085;
		}
	}
	{
		// var hitPose = hits[0].pose;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_10 = V_1;
		NullCheck(L_10);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_11;
		L_11 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_10, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_3 = L_11;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_12;
		L_12 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_3), /*hidden argument*/NULL);
		V_2 = L_12;
		// if (instantiatedObject == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_instantiatedObject_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		// instantiatedObject = Instantiate(placementPrefab, hitPose.position, hitPose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_placementPrefab_6();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_16 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = L_16.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_18 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = L_18.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_17, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_instantiatedObject_11(L_20);
		// }
		return;
	}

IL_006f:
	{
		// instantiatedObject.transform.position = hitPose.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_instantiatedObject_11();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_23 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = L_23.get_position_0();
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_24, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void ARradicon.AppearOnPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppearOnPlane__ctor_mECEC7718F2FD3441F82F81332908FF251CC5D1B3 (AppearOnPlane_t50956104B83C20F0FD38F6F5A9D81D42BD1EF5C1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AudioSwitch::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSwitch_Awake_mFBE834BB490E57A7101D9F461D9A0B435D9C6586 (AudioSwitch_t2115C8EE2B722778C2A571A2DB068579CC412A01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Mute", 0) == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, 0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// AudioListener.volume = 1f;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0018:
	{
		// AudioListener.volume = 0f;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioSwitch::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSwitch_OnGUI_m066C2320F43D41E9646CC7C50993C4D44B7326B4 (AudioSwitch_t2115C8EE2B722778C2A571A2DB068579CC412A01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE604FB387971B1B1B634FE7B9B0E52DA841259);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GUI.Button(new Rect(850, 30, 400, 60), "サウンドON/OFF"))
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_0), (850.0f), (30.0f), (400.0f), (60.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_0, _stringLiteral4CE604FB387971B1B1B634FE7B9B0E52DA841259, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// if (PlayerPrefs.GetInt("Mute", 0) == 0)
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, 0, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		// AudioListener.volume = 0f;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE((0.0f), /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Mute", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0048:
	{
		// AudioListener.volume = 1f;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE((1.0f), /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Mute", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7B3F14DD378FB78A91E09F98B359C1CA37EF1E1D, 0, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void AudioSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSwitch__ctor_mA55434CCADE508F37D81C90CBD6987DEC24966DB (AudioSwitch_t2115C8EE2B722778C2A571A2DB068579CC412A01 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARradicon.BackTitle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackTitle_Update_mCF1043CF841F34D7BA4777793C62EA0D53860679 (BackTitle_t002326B021598D64FFA47066ED227ADEF5427A8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var keybord = Keyboard.current;
		Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * L_0;
		L_0 = Keyboard_get_current_m01CD47AB0E48881AFED0E143B85DBF8348313496_inline(/*hidden argument*/NULL);
		// var qKey = keybord.qKey;
		NullCheck(L_0);
		KeyControl_t05A114EE80E1DAACBA39E345B06EAC8101F1BB78 * L_1;
		L_1 = Keyboard_get_qKey_mAEB34F99390C624395F4243CDC765689AB8A6212(L_0, /*hidden argument*/NULL);
		// if (qKey.wasReleasedThisFrame)
		NullCheck(L_1);
		bool L_2;
		L_2 = ButtonControl_get_wasReleasedThisFrame_mDD554331078FD755B44BAC8AC15BC9BB3CFB7543(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// SceneManager.LoadScene("Title");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void ARradicon.BackTitle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackTitle__ctor_mF83D783BD0EBA7139C74885EC9A43D57D8914BD9 (BackTitle_t002326B021598D64FFA47066ED227ADEF5427A8A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraSwitch::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_OnEnable_mD422991EDD9D880928644EE1BC4E557EE644679C (CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D * __this, const RuntimeMethod* method)
{
	{
		// text.text = objects[m_CurrentActiveObject].name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_objects_4();
		int32_t L_2 = __this->get_m_CurrentActiveObject_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void CameraSwitch::NextCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_NextCamera_m38AB4521C129032FA1DA5154E09D36D0FE2DB257 (CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// int nextactiveobject = m_CurrentActiveObject + 1 >= objects.Length ? 0 : m_CurrentActiveObject + 1;
		int32_t L_0 = __this->get_m_CurrentActiveObject_6();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_objects_4();
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->get_m_CurrentActiveObject_6();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < objects.Length; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_0022:
	{
		// objects[i].SetActive(i == nextactiveobject);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_objects_4();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0), /*hidden argument*/NULL);
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_10 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_objects_4();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		// m_CurrentActiveObject = nextactiveobject;
		int32_t L_12 = V_0;
		__this->set_m_CurrentActiveObject_6(L_12);
		// text.text = objects[m_CurrentActiveObject].name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_text_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_objects_4();
		int32_t L_15 = __this->get_m_CurrentActiveObject_6();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// }
		return;
	}
}
// System.Void CameraSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch__ctor_m550FCA9B0C24BBBC8BDBCAAAAA7BBF26312399FE (CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARradicon.Car::OnMove(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_OnMove_m96BF1E5A87F69938B10256D7B2CFD089A28C4CD5 (Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B * __this, CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var axis = context.ReadValue<Vector2>();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(&___context0), /*hidden argument*/CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_RuntimeMethod_var);
		V_0 = L_0;
		// Debug.Log(maxMotorTorque+ ","+ axis.x);
		float* L_1 = __this->get_address_of_maxMotorTorque_6();
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_1, /*hidden argument*/NULL);
		float* L_3 = (&V_0)->get_address_of_x_0();
		String_t* L_4;
		L_4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// motor = maxMotorTorque * axis.y;
		float L_6 = __this->get_maxMotorTorque_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = L_7.get_y_1();
		__this->set_motor_8(((float)il2cpp_codegen_multiply((float)L_6, (float)L_8)));
		// steering = maxSteeringAngle * axis.x;
		float L_9 = __this->get_maxSteeringAngle_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		float L_11 = L_10.get_x_0();
		__this->set_steering_9(((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)));
		// }
		return;
	}
}
// System.Void ARradicon.Car::OnReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_OnReset_m98960499637F06F8772BBB4DE7FD63ECC7B0356C (Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0FE817E5A43233622FDB8C665DA9E616668DA3);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// var Cam = Camera.main.gameObject;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Debug.Log("Press:R or Buttrn");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1F0FE817E5A43233622FDB8C665DA9E616668DA3, /*hidden argument*/NULL);
		// this.transform.rotation = Quaternion.Euler(0, Cam.transform.localEulerAngles.y, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), L_6, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_2, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARradicon.Car::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car_FixedUpdate_m98F158FE70E18D0F7626EF0AF064212D94CA84FA (Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8128C06B570552EB33AC3CFC2ABEBE314EDFED2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9AE657FA69C10CC8F6BC20D22F0B10433867C95E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m08CE17A35A12D72D03DFB519D8087054EDEAB5D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m29D34F8221DCA8524FD880AA750524326A01A387_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var keybord = Keyboard.current;
		Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * L_0;
		L_0 = Keyboard_get_current_m01CD47AB0E48881AFED0E143B85DBF8348313496_inline(/*hidden argument*/NULL);
		// var rKey = keybord.rKey;
		NullCheck(L_0);
		KeyControl_t05A114EE80E1DAACBA39E345B06EAC8101F1BB78 * L_1;
		L_1 = Keyboard_get_rKey_m55C5882ECB4D948F2476072A958012990DD2DF3B(L_0, /*hidden argument*/NULL);
		// if (rKey.wasReleasedThisFrame)
		NullCheck(L_1);
		bool L_2;
		L_2 = ButtonControl_get_wasReleasedThisFrame_mDD554331078FD755B44BAC8AC15BC9BB3CFB7543(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// OnReset();
		Car_OnReset_m98960499637F06F8772BBB4DE7FD63ECC7B0356C(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// foreach (AxleInfo axleInfo in axleInfos)
		List_1_t9FE15CBEFAA591AB4206BCFEBA091CDC5E92F678 * L_3 = __this->get_axleInfos_5();
		NullCheck(L_3);
		Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563  L_4;
		L_4 = List_1_GetEnumerator_m29D34F8221DCA8524FD880AA750524326A01A387(L_3, /*hidden argument*/List_1_GetEnumerator_m29D34F8221DCA8524FD880AA750524326A01A387_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0025:
		{
			// foreach (AxleInfo axleInfo in axleInfos)
			AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * L_5;
			L_5 = Enumerator_get_Current_m08CE17A35A12D72D03DFB519D8087054EDEAB5D2_inline((Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m08CE17A35A12D72D03DFB519D8087054EDEAB5D2_RuntimeMethod_var);
			V_1 = L_5;
			// if (axleInfo.steering)
			AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = L_6->get_steering_3();
			if (!L_7)
			{
				goto IL_0057;
			}
		}

IL_0035:
		{
			// axleInfo.leftWheel.steerAngle = steering;
			AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * L_8 = V_1;
			NullCheck(L_8);
			WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_9 = L_8->get_leftWheel_0();
			float L_10 = __this->get_steering_9();
			NullCheck(L_9);
			WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_9, L_10, /*hidden argument*/NULL);
			// axleInfo.rightWheel.steerAngle = steering;
			AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * L_11 = V_1;
			NullCheck(L_11);
			WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_12 = L_11->get_rightWheel_1();
			float L_13 = __this->get_steering_9();
			NullCheck(L_12);
			WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0057:
		{
			// if (axleInfo.motor)
			AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = L_14->get_motor_2();
			if (!L_15)
			{
				goto IL_0081;
			}
		}

IL_005f:
		{
			// axleInfo.leftWheel.motorTorque = motor;
			AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * L_16 = V_1;
			NullCheck(L_16);
			WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_17 = L_16->get_leftWheel_0();
			float L_18 = __this->get_motor_8();
			NullCheck(L_17);
			WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_17, L_18, /*hidden argument*/NULL);
			// axleInfo.rightWheel.motorTorque = motor;
			AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * L_19 = V_1;
			NullCheck(L_19);
			WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_20 = L_19->get_rightWheel_1();
			float L_21 = __this->get_motor_8();
			NullCheck(L_20);
			WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_20, L_21, /*hidden argument*/NULL);
		}

IL_0081:
		{
			// foreach (AxleInfo axleInfo in axleInfos)
			bool L_22;
			L_22 = Enumerator_MoveNext_m9AE657FA69C10CC8F6BC20D22F0B10433867C95E((Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9AE657FA69C10CC8F6BC20D22F0B10433867C95E_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0025;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8128C06B570552EB33AC3CFC2ABEBE314EDFED2E((Enumerator_t439EC329E380ED4F32FA5F63CFB90189C5085563 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m8128C06B570552EB33AC3CFC2ABEBE314EDFED2E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void ARradicon.Car::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Car__ctor_m4D0E52F98BC45A9A8EBFD3377D52F688F8AB0C6E (Car_tCC7B3ABF70B2EE1514FAE101EC44D7BA6FA57C4B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARradicon.GameStart::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStart_Update_mE8BCCED6A8AB614362A3A6A2C3223B01C3610FF8 (GameStart_t8996BAFAB7A9A5C4117955D246085E5944A3AB1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// SceneManager.LoadScene("Main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void ARradicon.GameStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStart__ctor_m07D29F8CC51D1F3272B05905C928083279B8B209 (GameStart_t8996BAFAB7A9A5C4117955D246085E5944A3AB1B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LevelReset::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset_OnPointerClick_m9625C8235343CB1DE6B089AD6F2D5ACF738072A4 (LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetSceneAt(0).name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F(0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelReset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset__ctor_mFD2BB9AF1A9D7E795DDAAE2F33C1F0EB1FB31F07 (LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARradicon.LightEstimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation_Awake_mCBEB57176CE490BBFBB1D45713050A8FEF39E418 (LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// directionalLight = GetComponent<Light>();
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_0;
		L_0 = Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA(__this, /*hidden argument*/Component_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m78431E28004B9C0FF3A712F157BFEDF8D42E36EA_RuntimeMethod_var);
		__this->set_directionalLight_7(L_0);
		// if (directionalLight == null || cameraManager == null
		//     || worldSpaceObject == null )
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_1 = __this->get_directionalLight_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_3 = __this->get_cameraManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_worldSpaceObject_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}

IL_0036:
	{
		// isReady = false;
		__this->set_isReady_8((bool)0);
		// }
		return;
	}

IL_003e:
	{
		// else { isReady = true; }
		__this->set_isReady_8((bool)1);
		// }
		return;
	}
}
// System.Void ARradicon.LightEstimation::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation_OnEnable_mE22220E7D717BB644EBDB4F1FA36B56FA36D7156 (LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightEstimation_FrameChanged_m5943C3759F72B6F6D3C7A0B36BDF6336FC8A205E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isReady) { return; }
		bool L_0 = __this->get_isReady_8();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isReady) { return; }
		return;
	}

IL_0009:
	{
		// cameraManager.frameReceived += FrameChanged;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_1 = __this->get_cameraManager_5();
		Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * L_2 = (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *)il2cpp_codegen_object_new(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16(L_2, __this, (intptr_t)((intptr_t)LightEstimation_FrameChanged_m5943C3759F72B6F6D3C7A0B36BDF6336FC8A205E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		NullCheck(L_1);
		ARCameraManager_add_frameReceived_m89E016132AD25B2F5402EB0996DAC4E5D6B1C035(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARradicon.LightEstimation::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation_OnDisable_m50477059EBFDB57D86763ACDDA6D67C6D24B2E0C (LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightEstimation_FrameChanged_m5943C3759F72B6F6D3C7A0B36BDF6336FC8A205E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isReady) { return; }
		bool L_0 = __this->get_isReady_8();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isReady) { return; }
		return;
	}

IL_0009:
	{
		// cameraManager.frameReceived -= FrameChanged;
		ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * L_1 = __this->get_cameraManager_5();
		Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 * L_2 = (Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68 *)il2cpp_codegen_object_new(Action_1_tA34B23CE57B7192055F9BF04AA14FCCB2ED91C68_il2cpp_TypeInfo_var);
		Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16(L_2, __this, (intptr_t)((intptr_t)LightEstimation_FrameChanged_m5943C3759F72B6F6D3C7A0B36BDF6336FC8A205E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5F656FA67BDEAF94CFE4483389771AB19C419D16_RuntimeMethod_var);
		NullCheck(L_1);
		ARCameraManager_remove_frameReceived_mDB7093508DC69244620BA73A5DBEF42C1C9C4B64(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARradicon.LightEstimation::FrameChanged(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation_FrameChanged_m5943C3759F72B6F6D3C7A0B36BDF6336FC8A205E (LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F * __this, ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mE17E1034CE9FC6D3E512287D4365DBD58EDF5376_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mCF8EA21EB849E629CB12759C7751EC75A9404528_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!isReady) { return; }
		bool L_0 = __this->get_isReady_8();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isReady) { return; }
		return;
	}

IL_0009:
	{
		// var lightEst = eventArgs.lightEstimation;
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_1;
		L_1 = ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline((ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 *)(&___eventArgs0), /*hidden argument*/NULL);
		V_0 = L_1;
		// brightness = lightEst.averageBrightness;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_2;
		L_2 = ARLightEstimationData_get_averageBrightness_m7BCFDB0BE6EE1B92029CE7360F6D9FA4CC19591A((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		__this->set_brightness_9(L_2);
		// if (brightness.HasValue) { directionalLight.intensity = brightness.Value; }
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_3 = __this->get_address_of_brightness_9();
		bool L_4;
		L_4 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_3, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// if (brightness.HasValue) { directionalLight.intensity = brightness.Value; }
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_5 = __this->get_directionalLight_7();
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_6 = __this->get_address_of_brightness_9();
		float L_7;
		L_7 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_6, /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		NullCheck(L_5);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// colorTemperature = lightEst.averageColorTemperature;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_8;
		L_8 = ARLightEstimationData_get_averageColorTemperature_m5D21E92478B8C1436495FD31867F60F0CE1A149C_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		__this->set_colorTemperature_10(L_8);
		// if (colorTemperature.HasValue) { directionalLight.colorTemperature = colorTemperature.Value; }
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_9 = __this->get_address_of_colorTemperature_10();
		bool L_10;
		L_10 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_9, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		// if (colorTemperature.HasValue) { directionalLight.colorTemperature = colorTemperature.Value; }
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_11 = __this->get_directionalLight_7();
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_12 = __this->get_address_of_colorTemperature_10();
		float L_13;
		L_13 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_12, /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		NullCheck(L_11);
		Light_set_colorTemperature_m058BA7D83D5E42A95242137F23013E95EB13398B(L_11, L_13, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// colorCorrection = lightEst.colorCorrection;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_14;
		L_14 = ARLightEstimationData_get_colorCorrection_m8C619600F9750BC8C114CD5C88FAF56021B7CF64_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		__this->set_colorCorrection_11(L_14);
		// if (colorCorrection.HasValue) { directionalLight.color = colorCorrection.Value; }
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * L_15 = __this->get_address_of_colorCorrection_11();
		bool L_16;
		L_16 = Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)L_15, /*hidden argument*/Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00a1;
		}
	}
	{
		// if (colorCorrection.HasValue) { directionalLight.color = colorCorrection.Value; }
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_17 = __this->get_directionalLight_7();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * L_18 = __this->get_address_of_colorCorrection_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)L_18, /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		NullCheck(L_17);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_17, L_19, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// mainLightDirection = lightEst.mainLightDirection;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_20;
		L_20 = ARLightEstimationData_get_mainLightDirection_m1B27244869717BFB708E7B632145241F2C61E777_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		__this->set_mainLightDirection_12(L_20);
		// if(mainLightDirection.HasValue)
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_21 = __this->get_address_of_mainLightDirection_12();
		bool L_22;
		L_22 = Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_inline((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_21, /*hidden argument*/Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_00db;
		}
	}
	{
		// directionalLight.transform.rotation = Quaternion.LookRotation(mainLightDirection.Value);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_23 = __this->get_directionalLight_7();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * L_25 = __this->get_address_of_mainLightDirection_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B((Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 *)L_25, /*hidden argument*/Nullable_1_get_Value_mB540D7D195D223057F4CCA57AC0982EEE816F79B_RuntimeMethod_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_24, L_27, /*hidden argument*/NULL);
	}

IL_00db:
	{
		// mainLightColor = lightEst.mainLightColor;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_28;
		L_28 = ARLightEstimationData_get_mainLightColor_m1AD9A36FE8877ED40B779894AE5E9B978775BD0C_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		__this->set_mainLightColor_13(L_28);
		// if (mainLightColor.HasValue)
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * L_29 = __this->get_address_of_mainLightColor_13();
		bool L_30;
		L_30 = Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)L_29, /*hidden argument*/Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_010b;
		}
	}
	{
		// { directionalLight.color = mainLightColor.Value; }
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_31 = __this->get_directionalLight_7();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * L_32 = __this->get_address_of_mainLightColor_13();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)L_32, /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		NullCheck(L_31);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_31, L_33, /*hidden argument*/NULL);
	}

IL_010b:
	{
		// averageMainLightBrightness = lightEst.averageMainLightBrightness;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_34;
		L_34 = ARLightEstimationData_get_averageMainLightBrightness_mF054E11FCAA365FFFEE0CEAFCB415822F4C24800((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		__this->set_averageMainLightBrightness_14(L_34);
		// if(averageMainLightBrightness.HasValue)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_35 = __this->get_address_of_averageMainLightBrightness_14();
		bool L_36;
		L_36 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_35, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (!L_36)
		{
			goto IL_013b;
		}
	}
	{
		// { directionalLight.intensity = averageMainLightBrightness.Value; }
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_37 = __this->get_directionalLight_7();
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_38 = __this->get_address_of_averageMainLightBrightness_14();
		float L_39;
		L_39 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_38, /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		NullCheck(L_37);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_37, L_39, /*hidden argument*/NULL);
	}

IL_013b:
	{
		// sphericalHarmonics = lightEst.ambientSphericalHarmonics;
		Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  L_40;
		L_40 = ARLightEstimationData_get_ambientSphericalHarmonics_mF68F20C0029F23EA4C67E69A2149501EC8FAA1DA_inline((ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 *)(&V_0), /*hidden argument*/NULL);
		__this->set_sphericalHarmonics_15(L_40);
		// if(sphericalHarmonics.HasValue)
		Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * L_41 = __this->get_address_of_sphericalHarmonics_15();
		bool L_42;
		L_42 = Nullable_1_get_HasValue_mE17E1034CE9FC6D3E512287D4365DBD58EDF5376_inline((Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E *)L_41, /*hidden argument*/Nullable_1_get_HasValue_mE17E1034CE9FC6D3E512287D4365DBD58EDF5376_RuntimeMethod_var);
		if (!L_42)
		{
			goto IL_016b;
		}
	}
	{
		// RenderSettings.ambientMode = AmbientMode.Skybox;
		RenderSettings_set_ambientMode_mE14A1AA6475471C282CE090BE7AC86D2AF64F47B(0, /*hidden argument*/NULL);
		// RenderSettings.ambientProbe = sphericalHarmonics.Value;
		Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * L_43 = __this->get_address_of_sphericalHarmonics_15();
		SphericalHarmonicsL2_tD2EC2ADCA26B9BE05036C3ABCF3CC049EC73EA64  L_44;
		L_44 = Nullable_1_get_Value_mCF8EA21EB849E629CB12759C7751EC75A9404528((Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E *)L_43, /*hidden argument*/Nullable_1_get_Value_mCF8EA21EB849E629CB12759C7751EC75A9404528_RuntimeMethod_var);
		RenderSettings_set_ambientProbe_m70DB5A2D154320EB11A778D6009AFFFD9DAC3736(L_44, /*hidden argument*/NULL);
	}

IL_016b:
	{
		// }
		return;
	}
}
// System.Void ARradicon.LightEstimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimation__ctor_m217EDDFE9FB38BF76C34AA3BC3B9006CACFCB1B1 (LightEstimation_tEDC6BE17009A29A29B18AC6890AEA618834EFF7F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuSceneLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader_Awake_m18B4E09AAFDC9578469D066C50A8AC0054AA34AC (MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Go == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_Go_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Go = Instantiate(menuUI);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_menuUI_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		__this->set_m_Go_5(L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void MenuSceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader__ctor_m27FD45CA6C6C8B579D2FA4EEDABBA35F2C7EF6BC (MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Awake_m3268C5B5B81D4EE59C85C27AED5CA3956C284DA4 (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Select(s_SelectedIndex);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A(__this, L_0, /*hidden argument*/NULL);
		// previousButton.onClick.AddListener(Previous);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_previousButton_11();
		NullCheck(L_1);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_2;
		L_2 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_1, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_2, L_3, /*hidden argument*/NULL);
		// nextButton.onClick.AddListener(Next);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_nextButton_12();
		NullCheck(L_4);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_5;
		L_5 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_4, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_6, __this, (intptr_t)((intptr_t)ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_OnDisable_mEB5EAF7BC1928EBEFD83E651459327948255D811 (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// previousButton.onClick.RemoveListener (Previous);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_previousButton_11();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_1, L_2, /*hidden argument*/NULL);
		// nextButton.onClick.RemoveListener (Next);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_nextButton_12();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63 (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_SelectedIndex--;
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_SelectedIndex_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (s_SelectedIndex == -1)
		int32_t L_1 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		// s_SelectedIndex = demoParticles.items.Length - 1;
		DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * L_2 = __this->get_demoParticles_4();
		NullCheck(L_2);
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_3 = L_2->get_items_0();
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_SelectedIndex_18(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)1)));
	}

IL_0028:
	{
		// Select(s_SelectedIndex);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_4 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_SelectedIndex++;
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_SelectedIndex_18(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (s_SelectedIndex == demoParticles.items.Length)
		int32_t L_1 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * L_2 = __this->get_demoParticles_4();
		NullCheck(L_2);
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_3 = L_2->get_items_0();
		NullCheck(L_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		// s_SelectedIndex = 0;
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_SelectedIndex_18(0);
	}

IL_0026:
	{
		// Select(s_SelectedIndex);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_4 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Update_m7B5894AE70D3733C901BFFF529195AC1467D632B (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		// sceneCamera.localPosition = Vector3.SmoothDamp(sceneCamera.localPosition, Vector3.forward*-s_Selected.camOffset,
		//                                            ref m_CamOffsetVelocity, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_sceneCamera_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_sceneCamera_9();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_4 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_camOffset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, ((float)((float)((-L_5)))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_m_CamOffsetVelocity_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_2, L_6, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_7, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_8, /*hidden argument*/NULL);
		// if (s_Selected.mode == Mode.Activate)
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_9 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_mode_1();
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// if (CheckForGuiCollision()) return;
		bool L_11;
		L_11 = ParticleSceneControls_CheckForGuiCollision_mB8EDC5E34CE1B59986991852009A011D9514A8FB(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		// if (CheckForGuiCollision()) return;
		return;
	}

IL_0052:
	{
		// bool oneShotClick = (Input.GetMouseButtonDown(0) && s_Selected.mode == Mode.Instantiate);
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_13 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_mode_1();
		G_B7_0 = ((((int32_t)L_14) == ((int32_t)1))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B7_0 = 0;
	}

IL_006a:
	{
		// bool repeat = (Input.GetMouseButton(0) && s_Selected.mode == Mode.Trail);
		bool L_15;
		L_15 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		if (!L_15)
		{
			G_B9_0 = G_B7_0;
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_16 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_mode_1();
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)2))? 1 : 0);
		G_B10_1 = G_B8_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_0082:
	{
		V_0 = (bool)G_B10_0;
		// if (oneShotClick || repeat)
		bool L_18 = V_0;
		if (!((int32_t)((int32_t)G_B10_1|(int32_t)L_18)))
		{
			goto IL_0241;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
		L_19 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_19);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_21;
		L_21 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_19, L_20, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_22;
		L_22 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_21, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0241;
		}
	}
	{
		// var rot = Quaternion.LookRotation(hit.normal);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// if (s_Selected.align == AlignMode.Up)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_25 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_align_2();
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00c5;
		}
	}
	{
		// rot = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		V_2 = L_27;
	}

IL_00c5:
	{
		// var pos = hit.point + hit.normal*spawnOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		float L_30 = __this->get_spawnOffset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_28, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		// if ((pos - m_LastPos).magnitude > s_Selected.minDist)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_m_LastPos_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_33, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		float L_36;
		L_36 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_37 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_37);
		float L_38 = L_37->get_minDist_4();
		if ((!(((float)L_36) > ((float)L_38))))
		{
			goto IL_0241;
		}
	}
	{
		// if (s_Selected.mode != Mode.Trail || m_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_39 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_mode_1();
		if ((!(((uint32_t)L_40) == ((uint32_t)2))))
		{
			goto IL_0126;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = __this->get_m_Instance_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_41, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_01ce;
		}
	}

IL_0126:
	{
		// m_Instance = (Transform) Instantiate(s_Selected.transform, pos, rot);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_43 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = L_43->get_transform_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_44, L_45, L_46, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		__this->set_m_Instance_17(L_47);
		// if (m_ParticleMultiplier != null)
		ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * L_48 = __this->get_m_ParticleMultiplier_15();
		bool L_49;
		L_49 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_48, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0161;
		}
	}
	{
		// m_Instance.GetComponent<ParticleSystemMultiplier>().multiplier = multiply;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50 = __this->get_m_Instance_17();
		NullCheck(L_50);
		ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * L_51;
		L_51 = Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5(L_50, /*hidden argument*/Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		float L_52 = __this->get_multiply_6();
		NullCheck(L_51);
		L_51->set_multiplier_4(L_52);
	}

IL_0161:
	{
		// m_CurrentParticleList.Add(m_Instance);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_53 = __this->get_m_CurrentParticleList_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = __this->get_m_Instance_17();
		NullCheck(L_53);
		List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982(L_53, L_54, /*hidden argument*/List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		// if (s_Selected.maxCount > 0 && m_CurrentParticleList.Count > s_Selected.maxCount)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_55 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_55);
		int32_t L_56 = L_55->get_maxCount_3();
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01e6;
		}
	}
	{
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_57 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_57, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_59 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_59);
		int32_t L_60 = L_59->get_maxCount_3();
		if ((((int32_t)L_58) <= ((int32_t)L_60)))
		{
			goto IL_01e6;
		}
	}
	{
		// if (m_CurrentParticleList[0] != null)
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_61 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_61);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_61, 0, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_62, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_01c0;
		}
	}
	{
		// Destroy(m_CurrentParticleList[0].gameObject);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_64 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_64, 0, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_65);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66;
		L_66 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_66, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		// m_CurrentParticleList.RemoveAt(0);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_67 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_67);
		List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E(L_67, 0, /*hidden argument*/List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var);
		// }
		goto IL_01e6;
	}

IL_01ce:
	{
		// m_Instance.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68 = __this->get_m_Instance_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = V_3;
		NullCheck(L_68);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_68, L_69, /*hidden argument*/NULL);
		// m_Instance.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70 = __this->get_m_Instance_17();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_71 = V_2;
		NullCheck(L_70);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_70, L_71, /*hidden argument*/NULL);
	}

IL_01e6:
	{
		// if (s_Selected.mode == Mode.Trail)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_72 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_72);
		int32_t L_73 = L_72->get_mode_1();
		if ((!(((uint32_t)L_73) == ((uint32_t)2))))
		{
			goto IL_0228;
		}
	}
	{
		// var emission = m_Instance.transform.GetComponent<ParticleSystem>().emission;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74 = __this->get_m_Instance_17();
		NullCheck(L_74);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_76;
		L_76 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(L_75, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		NullCheck(L_76);
		EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  L_77;
		L_77 = ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1(L_76, /*hidden argument*/NULL);
		V_5 = L_77;
		// emission.enabled = false;
		EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1((EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *)(&V_5), (bool)0, /*hidden argument*/NULL);
		// m_Instance.transform.GetComponent<ParticleSystem>().Emit(1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78 = __this->get_m_Instance_17();
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_80;
		L_80 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(L_79, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		NullCheck(L_80);
		ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28(L_80, 1, /*hidden argument*/NULL);
	}

IL_0228:
	{
		// m_Instance.parent = hit.transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81 = __this->get_m_Instance_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_81);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_81, L_82, /*hidden argument*/NULL);
		// m_LastPos = pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = V_3;
		__this->set_m_LastPos_20(L_83);
	}

IL_0241:
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::CheckForGuiCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSceneControls_CheckForGuiCollision_mB8EDC5E34CE1B59986991852009A011D9514A8FB (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_0 = NULL;
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * V_1 = NULL;
	{
		// PointerEventData eventData = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0 = __this->get_eventSystem_14();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// eventData.pressPosition = Input.mousePosition;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		PointerEventData_set_pressPosition_mE644EE1603DFF2087224FF6364EA0204D04D7939_inline(L_2, L_4, /*hidden argument*/NULL);
		// eventData.position = Input.mousePosition;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline(L_5, L_7, /*hidden argument*/NULL);
		// List<RaycastResult> list = new List<RaycastResult>();
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_8 = (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)il2cpp_codegen_object_new(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3(L_8, /*hidden argument*/List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		V_1 = L_8;
		// graphicRaycaster.Raycast(eventData, list);
		GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * L_9 = __this->get_graphicRaycaster_13();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_10 = V_0;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_11 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *, List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * >::Invoke(17 /* System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>) */, L_9, L_10, L_11);
		// return list.Count > 0;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline(L_12, /*hidden argument*/List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		return (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* V_0 = NULL;
	int32_t V_1 = 0;
	DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * V_2 = NULL;
	{
		// s_Selected = demoParticles.items[i];
		DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * L_0 = __this->get_demoParticles_4();
		NullCheck(L_0);
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_1 = L_0->get_items_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_Selected_21(L_4);
		// m_Instance = null;
		__this->set_m_Instance_17((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// foreach (var otherEffect in demoParticles.items)
		DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * L_5 = __this->get_demoParticles_4();
		NullCheck(L_5);
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_6 = L_5->get_items_0();
		V_0 = L_6;
		V_1 = 0;
		goto IL_0052;
	}

IL_0029:
	{
		// foreach (var otherEffect in demoParticles.items)
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// if ((otherEffect != s_Selected) && (otherEffect.mode == Mode.Activate))
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_12 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		if ((((RuntimeObject*)(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B *)L_11) == ((RuntimeObject*)(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B *)L_12)))
		{
			goto IL_004e;
		}
	}
	{
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_mode_1();
		if (L_14)
		{
			goto IL_004e;
		}
	}
	{
		// otherEffect.transform.gameObject.SetActive(false);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_15 = V_2;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = L_15->get_transform_0();
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0052:
	{
		// foreach (var otherEffect in demoParticles.items)
		int32_t L_19 = V_1;
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_Selected.mode == Mode.Activate)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_21 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_21);
		int32_t L_22 = L_21->get_mode_1();
		if (L_22)
		{
			goto IL_0079;
		}
	}
	{
		// s_Selected.transform.gameObject.SetActive(true);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_23 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = L_23->get_transform_0();
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// m_ParticleMultiplier = s_Selected.transform.GetComponent<ParticleSystemMultiplier>();
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_26 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = L_26->get_transform_0();
		NullCheck(L_27);
		ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * L_28;
		L_28 = Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5(L_27, /*hidden argument*/Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		__this->set_m_ParticleMultiplier_15(L_28);
		// multiply = 1;
		__this->set_multiply_6((1.0f));
		// if (clearOnChange)
		bool L_29 = __this->get_clearOnChange_7();
		if (!L_29)
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_00c5;
	}

IL_00a3:
	{
		// Destroy(m_CurrentParticleList[0].gameObject);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_30 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_30, 0, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_31);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_32, /*hidden argument*/NULL);
		// m_CurrentParticleList.RemoveAt(0);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_33 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_33);
		List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E(L_33, 0, /*hidden argument*/List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var);
	}

IL_00c5:
	{
		// while (m_CurrentParticleList.Count > 0)
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_34 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_34, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}

IL_00d3:
	{
		// instructionText.text = s_Selected.instructionText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = __this->get_instructionText_10();
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_37 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_37);
		String_t* L_38 = L_37->get_instructionText_6();
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_38);
		// titleText.text = s_Selected.transform.name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39 = __this->get_titleText_8();
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_40 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = L_40->get_transform_0();
		NullCheck(L_41);
		String_t* L_42;
		L_42 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_41, /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_42);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls__ctor_mFE76B488C636F213B77193EDFF38F514A3186631 (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float spawnOffset = 0.5f;
		__this->set_spawnOffset_5((0.5f));
		// public float multiply = 1;
		__this->set_multiply_6((1.0f));
		// private List<Transform> m_CurrentParticleList = new List<Transform>();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_0 = (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)il2cpp_codegen_object_new(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F(L_0, /*hidden argument*/List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		__this->set_m_CurrentParticleList_16(L_0);
		// private Vector3 m_CamOffsetVelocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_CamOffsetVelocity_19(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls__cctor_mBA868BA9BC2400AD1AB420B3D0AB42D863358338 (const RuntimeMethod* method)
{
	{
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
// System.Void PauseMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Awake_mB04BCBDA84AEC654D1976EC3DF61A0CF68D2C86C (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MenuToggle = GetComponent <Toggle> ();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0;
		L_0 = Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F(__this, /*hidden argument*/Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F_RuntimeMethod_var);
		__this->set_m_MenuToggle_4(L_0);
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m8973DC956DD5235381EE4ACB4A182AA5BF0EF2EA (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// m_TimeScaleRef = Time.timeScale;
		float L_0;
		L_0 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		__this->set_m_TimeScaleRef_5(L_0);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// m_VolumeRef = AudioListener.volume;
		float L_1;
		L_1 = AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344(/*hidden argument*/NULL);
		__this->set_m_VolumeRef_6(L_1);
		// AudioListener.volume = 0f;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE((0.0f), /*hidden argument*/NULL);
		// m_Paused = true;
		__this->set_m_Paused_7((bool)1);
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = m_TimeScaleRef;
		float L_0 = __this->get_m_TimeScaleRef_5();
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(L_0, /*hidden argument*/NULL);
		// AudioListener.volume = m_VolumeRef;
		float L_1 = __this->get_m_VolumeRef_6();
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE(L_1, /*hidden argument*/NULL);
		// m_Paused = false;
		__this->set_m_Paused_7((bool)0);
		// }
		return;
	}
}
// System.Void PauseMenu::OnMenuStatusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnMenuStatusChange_mD1E8BD9B9CCB274A83FFF0FE2E06E6ABD0361B4A (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// if (m_MenuToggle.isOn && !m_Paused)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = __this->get_m_MenuToggle_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = __this->get_m_Paused_7();
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// MenuOn();
		PauseMenu_MenuOn_m8973DC956DD5235381EE4ACB4A182AA5BF0EF2EA(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// else if (!m_MenuToggle.isOn && m_Paused)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_3 = __this->get_m_MenuToggle_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		bool L_5 = __this->get_m_Paused_7();
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// MenuOff();
		PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_mA1A281F3359C234E5CF24FFEAC20C12C48D69018 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// private float m_TimeScaleRef = 1f;
		__this->set_m_TimeScaleRef_5((1.0f));
		// private float m_VolumeRef = 1f;
		__this->set_m_VolumeRef_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse_Update_m28E68FE68FA0185C0D20A6001F4C262868348BE3 (PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_1);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_3;
		L_3 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_1, L_2, /*hidden argument*/NULL);
		// if (!Physics.Raycast(ray, out hit))
		bool L_4;
		L_4 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_3, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (L_4)
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
		// transform.position = hit.point + hit.normal*surfaceOffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		float L_8 = __this->get_surfaceOffset_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_10, /*hidden argument*/NULL);
		// if (setTargetOn != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_setTargetOn_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// setTargetOn.SendMessage("SetTarget", transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_setTargetOn_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_13, _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309, L_14, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse__ctor_m3582FA7DC3CF8198244F9EB014FE12AC97985FE7 (PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310 * __this, const RuntimeMethod* method)
{
	{
		// public float surfaceOffset = 1.5f;
		__this->set_surfaceOffset_4((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SceneAndURLLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_Awake_m8F276157A2A5FA943EF7918D6CCDB81273317E23 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu = GetComponentInChildren <PauseMenu> ();
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_0;
		L_0 = Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615(__this, /*hidden argument*/Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615_RuntimeMethod_var);
		__this->set_m_PauseMenu_4(L_0);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::SceneLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_SceneLoad_m2B09BD48F419F49A6BD461DBC7B2290EC8632B06 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu.MenuOff ();
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_0 = __this->get_m_PauseMenu_4();
		NullCheck(L_0);
		PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName);
		String_t* L_1 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::LoadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_LoadURL_m47E3E286E80F2D5B3E6A164C32F7E1B473532AE2 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		// Application.OpenURL(url);
		String_t* L_0 = ___url0;
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader__ctor_m6DEE574FADF9E3E894594690CB2755F69D5D4BE5 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_Start_m8F334286C4BEE772EAA4842F431E01BB4929A04C (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	{
		// m_SlowMo = false;
		__this->set_m_SlowMo_9((bool)0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_OnDestroy_mE8D51330ED641B12795E984B6F0ECCB00536DBDB (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::ChangeSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_ChangeSpeed_m0C19576C039AA7BBBC478C87A6C964376BA58EAB (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * V_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B3_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_0 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * G_B4_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B4_1 = NULL;
	float G_B8_0 = 0.0f;
	{
		// m_SlowMo = !m_SlowMo;
		bool L_0 = __this->get_m_SlowMo_9();
		__this->set_m_SlowMo_9((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// var image = button.targetGraphic as Image;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_button_8();
		NullCheck(L_1);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_2;
		L_2 = Selectable_get_targetGraphic_mF2D1BFB9DE33BAB553933533CC4A9135A37F4A72_inline(L_1, /*hidden argument*/NULL);
		V_0 = ((Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *)IsInstClass((RuntimeObject*)L_2, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_il2cpp_TypeInfo_var));
		// if (image != null)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// image.sprite = m_SlowMo ? SlowSpeedTex : FullSpeedTex;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = V_0;
		bool L_6 = __this->get_m_SlowMo_9();
		G_B2_0 = L_5;
		if (L_6)
		{
			G_B3_0 = L_5;
			goto IL_003a;
		}
	}
	{
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_FullSpeedTex_4();
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_0040;
	}

IL_003a:
	{
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_SlowSpeedTex_5();
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_0040:
	{
		NullCheck(G_B4_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(G_B4_1, G_B4_0, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// button.targetGraphic = image;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_button_8();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = V_0;
		NullCheck(L_9);
		Selectable_set_targetGraphic_m668325D43E18A35560B4176477D004ECDB9C9604(L_9, L_10, /*hidden argument*/NULL);
		// Time.timeScale = m_SlowMo ? slowSpeed : fullSpeed;
		bool L_11 = __this->get_m_SlowMo_9();
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		float L_12 = __this->get_fullSpeed_6();
		G_B8_0 = L_12;
		goto IL_0067;
	}

IL_0061:
	{
		float L_13 = __this->get_slowSpeed_7();
		G_B8_0 = L_13;
	}

IL_0067:
	{
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton__ctor_m993A85A43C7462445119B63636FD65A6F8C0F6BF (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	{
		// public float fullSpeed = 1;
		__this->set_fullSpeed_6((1.0f));
		// public float slowSpeed = 0.3f;
		__this->set_slowSpeed_7((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARradicon.Car/AxleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxleInfo__ctor_m8F020C945A2165B93DA540C7441D56AA9D1BA086 (AxleInfo_tB6241CC924CE4B4EBB4B7D9492D806AF0ED4562B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoParticleSystem__ctor_mA046B73C934441755CA5D57991D7C453645AD8CE (DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * __this, const RuntimeMethod* method)
{
	{
		// public int camOffset = 15;
		__this->set_camOffset_5(((int32_t)15));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoParticleSystemList__ctor_mAFBB16272EB2E695826211DD030553401DF6E83B (DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ARPlaneManager_get_planePrefab_m3C00DB153DAE1813C0174CE0668913D2D2F74AE6_inline (ARPlaneManager_t4700B0BC3E8B6CD35F8D925701C89A5A21DDBAD4 * __this, const RuntimeMethod* method)
{
	{
		// get => m_PlanePrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_PlanePrefab_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * Keyboard_get_current_m01CD47AB0E48881AFED0E143B85DBF8348313496_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Keyboard current { get; private set; }
		Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1 * L_0 = ((Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1_StaticFields*)il2cpp_codegen_static_fields_for(Keyboard_t1EE06EE88E8C76A4753D4A42152D0F8CAC4993A1_il2cpp_TypeInfo_var))->get_U3CcurrentU3Ek__BackingField_45();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  ARCameraFrameEventArgs_get_lightEstimation_mF7F18FF1750F72C07C05D0C94AA6498FF227E8AD_inline (ARCameraFrameEventArgs_t6DC46EA4DDD08CB3703AE73DA3D08CB7634FDB42 * __this, const RuntimeMethod* method)
{
	{
		// public ARLightEstimationData lightEstimation { get; set; }
		ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423  L_0 = __this->get_U3ClightEstimationU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ARLightEstimationData_get_averageColorTemperature_m5D21E92478B8C1436495FD31867F60F0CE1A149C_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method)
{
	{
		// public float? averageColorTemperature { get; set; }
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_0 = __this->get_U3CaverageColorTemperatureU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ARLightEstimationData_get_colorCorrection_m8C619600F9750BC8C114CD5C88FAF56021B7CF64_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method)
{
	{
		// public Color? colorCorrection { get; set; }
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_0 = __this->get_U3CcolorCorrectionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ARLightEstimationData_get_mainLightDirection_m1B27244869717BFB708E7B632145241F2C61E777_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3? mainLightDirection { get; set; }
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_0 = __this->get_U3CmainLightDirectionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ARLightEstimationData_get_mainLightColor_m1AD9A36FE8877ED40B779894AE5E9B978775BD0C_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method)
{
	{
		// public Color? mainLightColor { get; set; }
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_0 = __this->get_U3CmainLightColorU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  ARLightEstimationData_get_ambientSphericalHarmonics_mF68F20C0029F23EA4C67E69A2149501EC8FAA1DA_inline (ARLightEstimationData_tC7EC4FC85F9EDACE1CED2BB3D2DC659DE43B8423 * __this, const RuntimeMethod* method)
{
	{
		// public SphericalHarmonicsL2? ambientSphericalHarmonics { get; set; }
		Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E  L_0 = __this->get_U3CambientSphericalHarmonicsU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_mE644EE1603DFF2087224FF6364EA0204D04D7939_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CpressPositionU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * Selectable_get_targetGraphic_mF2D1BFB9DE33BAB553933533CC4A9135A37F4A72_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method)
{
	{
		// public Graphic           targetGraphic     { get { return m_TargetGraphic; } set { if (SetPropertyUtility.SetClass(ref m_TargetGraphic, value))     OnSetProperty(); } }
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_m_TargetGraphic_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* L_2 = (ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)L_2, (int32_t)L_3);
		return (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB9EAE3168E00BA12AA7E1233A4A0007FD12BB9E7_gshared_inline (Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mE17E1034CE9FC6D3E512287D4365DBD58EDF5376_gshared_inline (Nullable_1_t87378933461FE259D349B667A2D4FE02B800A81E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
