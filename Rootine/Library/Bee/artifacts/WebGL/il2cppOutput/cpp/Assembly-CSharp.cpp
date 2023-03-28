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

// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_tB645F646DB079054A9500B09427CB02A88372D3F;
// System.Collections.Generic.List`1<DepotMineral>
struct List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<GameplayMineral>
struct List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// DepotMineral[]
struct DepotMineralU5BU5D_t025B581AD25BD7027F286B313C5045E0F5D04CDF;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// GameplayMineral[]
struct GameplayMineralU5BU5D_tE74B576D91BFF04015E02496B706C54EABB6BA92;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Mineral[]
struct MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// AbsorbDetection
struct AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A;
// AnimationFunction
struct AnimationFunction_t60C55E8CD02A712A25E293CFAA2CC913DC462DD2;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// Ant
struct Ant_t8371E02AB3CC87EF2137AC4FF22A06724E1A2260;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BounceCell
struct BounceCell_t66FF2AE965EC0CD0444FFD6B4AEA374390B7E58B;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Depot
struct Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED;
// Earthworm
struct Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1;
// Elevator
struct Elevator_tF03070A2E82DD6E16D94CC955989DB2D579DDAFB;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// ExplodeMineral
struct ExplodeMineral_t014C3CE082B12666EBD261AA3024998B4195C453;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameplayController
struct GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86;
// GroundChecker
struct GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InventorySO
struct InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C;
// InventoryUIController
struct InventoryUIController_t0083D0A833B85EC0C25F6BEC30AD5E2A3289A4DD;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// MineralController
struct MineralController_tF0597B48F747285166A4E5E682B72FF8444BA5BE;
// MineralSpawner
struct MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// SpecialEvent
struct SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// Switch
struct Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerNumber_tC19AD064EA9846735076B752ED038FFB804F4650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04D4617D2E5A20AA108F175EB4AA6A879E1542E3;
IL2CPP_EXTERN_C String_t* _stringLiteral0FCC38344659B579DB77F290A5AC05655C9B6C77;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD6121B8BC41E22F650391372E1EAAFC707E5B6;
IL2CPP_EXTERN_C String_t* _stringLiteral243E3CFCEFA0E9775A9DF5CA57CB1F0DD9FD1D6C;
IL2CPP_EXTERN_C String_t* _stringLiteral266D6900BD9E2C93E471674078458473CF3B789E;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC5D1BE7736EE14FD7CD3595FF085DA8DD9079F;
IL2CPP_EXTERN_C String_t* _stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F;
IL2CPP_EXTERN_C String_t* _stringLiteral443435B09235A175A9BAB9C338B7A82BBA49ABB2;
IL2CPP_EXTERN_C String_t* _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6;
IL2CPP_EXTERN_C String_t* _stringLiteral467425751A9985C0190321829D579F1263E05B9C;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral67757DA0D226B5929EE9969817B567FF04B07649;
IL2CPP_EXTERN_C String_t* _stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15;
IL2CPP_EXTERN_C String_t* _stringLiteral69D1B73433FB13CC97A119FCFFB9E69B47556858;
IL2CPP_EXTERN_C String_t* _stringLiteral6A2140566BC73231C818F0C8C27543521C40F07D;
IL2CPP_EXTERN_C String_t* _stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral86BF038C4BB01B667E877F6BAA55ED17674BDBEC;
IL2CPP_EXTERN_C String_t* _stringLiteral88DED5DBB9EE7AE2C8F184A83F0A703726562B56;
IL2CPP_EXTERN_C String_t* _stringLiteral929A23A2983F97CC7B26736DA8B306344BF825B2;
IL2CPP_EXTERN_C String_t* _stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38;
IL2CPP_EXTERN_C String_t* _stringLiteralA3914B015CFFD1691CD11715D85D039DAEDE40E2;
IL2CPP_EXTERN_C String_t* _stringLiteralAA80ECAB0397BA68ECDAA93F5789072C0AC4DACB;
IL2CPP_EXTERN_C String_t* _stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489;
IL2CPP_EXTERN_C String_t* _stringLiteralB495B5BE416FE56440C4F7FE8923894CCC28E57C;
IL2CPP_EXTERN_C String_t* _stringLiteralB854FB00C4B4A27C3F1B8572007239AB388C7ABA;
IL2CPP_EXTERN_C String_t* _stringLiteralB8BDCD28E40D848FF218A108022AEC2089B2C29F;
IL2CPP_EXTERN_C String_t* _stringLiteralBF8ED00C7890A45DABE28F256EA6C49881905EE2;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDD35B142A09BA27140479767A51838C58DAC7EC2;
IL2CPP_EXTERN_C String_t* _stringLiteralE0056B976C82A16471C1EC65E67557F32F8BD277;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralECA948737BB3B84FE3299E2DE0476CEE838F37E3;
IL2CPP_EXTERN_C String_t* _stringLiteralFD2FA13E89A7323125661F38211D4E7F334E0C5E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4F2C6B32CA9EBFFD0B2321C9899EC33153A2E1D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC3A878F779C27DAC557F336C5CF5C1B754349922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA2766A2E8A4DE7936B4BB30B4FFA68396096EDCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDepot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED_m350B5EF60BE7564D991FD491A64F79323C96FC4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m00CC3B1F1080210C23BDE6BCC885717C96D27066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m41FA096CC2F01F9CD9375BB7917F9434F8231340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA4A766A208D3E0F115C8EF99CF37DB851337D158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

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

// System.Collections.Generic.List`1<DepotMineral>
struct List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DepotMineralU5BU5D_t025B581AD25BD7027F286B313C5045E0F5D04CDF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<GameplayMineral>
struct List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameplayMineralU5BU5D_tE74B576D91BFF04015E02496B706C54EABB6BA92* ____items_1;
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>
struct Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// DepotMineral
struct DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 
{
	// System.String DepotMineral::mineralName
	String_t* ___mineralName_0;
	// System.Int32 DepotMineral::amount
	int32_t ___amount_1;
};
// Native definition for P/Invoke marshalling of DepotMineral
struct DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshaled_pinvoke
{
	char* ___mineralName_0;
	int32_t ___amount_1;
};
// Native definition for COM marshalling of DepotMineral
struct DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshaled_com
{
	Il2CppChar* ___mineralName_0;
	int32_t ___amount_1;
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

// GameplayMineral
struct GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A 
{
	// System.String GameplayMineral::mineralName
	String_t* ___mineralName_0;
	// System.Int32 GameplayMineral::amount
	int32_t ___amount_1;
};
// Native definition for P/Invoke marshalling of GameplayMineral
struct GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshaled_pinvoke
{
	char* ___mineralName_0;
	int32_t ___amount_1;
};
// Native definition for COM marshalling of GameplayMineral
struct GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshaled_com
{
	Il2CppChar* ___mineralName_0;
	int32_t ___amount_1;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// Mineral
struct Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700 
{
	// UnityEngine.GameObject Mineral::mineral
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mineral_0;
	// System.Int32 Mineral::weight
	int32_t ___weight_1;
};
// Native definition for P/Invoke marshalling of Mineral
struct Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mineral_0;
	int32_t ___weight_1;
};
// Native definition for COM marshalling of Mineral
struct Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mineral_0;
	int32_t ___weight_1;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// System.Collections.Generic.List`1/Enumerator<DepotMineral>
struct Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 ____current_3;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.ContactPoint2D
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// InventorySO
struct InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// PlayerNumber InventorySO::playerNumber
	int32_t ___playerNumber_4;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> InventorySO::heldMinerals
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___heldMinerals_5;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___stopped_6;
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AbsorbDetection
struct AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask AbsorbDetection::mineralLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mineralLayer_4;
	// UnityEngine.LayerMask AbsorbDetection::waterLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___waterLayer_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AbsorbDetection::absorbedMinerals
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___absorbedMinerals_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> AbsorbDetection::absorbedWater
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___absorbedWater_7;
};

// AnimationFunction
struct AnimationFunction_t60C55E8CD02A712A25E293CFAA2CC913DC462DD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Ant
struct Ant_t8371E02AB3CC87EF2137AC4FF22A06724E1A2260  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Ant::speed
	float ___speed_4;
	// System.Single Ant::dirChangeTime
	float ___dirChangeTime_5;
	// System.Single Ant::duration
	float ___duration_6;
	// System.Single Ant::timer
	float ___timer_7;
	// UnityEngine.Vector2 Ant::movement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movement_8;
	// UnityEngine.Transform Ant::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_9;
	// UnityEngine.Rigidbody2D Ant::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_10;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BounceCell
struct BounceCell_t66FF2AE965EC0CD0444FFD6B4AEA374390B7E58B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip BounceCell::bounceSFX
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___bounceSFX_4;
	// UnityEngine.Animator BounceCell::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// UnityEngine.AudioSource BounceCell::sfxAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sfxAudioSource_6;
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraController::offsetHorizontal
	float ___offsetHorizontal_4;
	// System.Single CameraController::offsetVertical
	float ___offsetVertical_5;
	// System.Single CameraController::offsetSmoothing
	float ___offsetSmoothing_6;
	// UnityEngine.Transform[] CameraController::player
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___player_7;
	// UnityEngine.Vector3 CameraController::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_8;
	// UnityEngine.Vector3 CameraController::centerPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___centerPoint_9;
};

// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// Depot
struct Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Depot::maxCapacity
	int32_t ___maxCapacity_4;
	// System.Single Depot::depotCooldown
	float ___depotCooldown_5;
	// UnityEngine.AudioSource Depot::sfxAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sfxAudioSource_6;
	// UnityEngine.AudioClip Depot::chain
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___chain_7;
	// UnityEngine.AudioClip Depot::store
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___store_8;
	// UnityEngine.Sprite[] Depot::depotState
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___depotState_9;
	// System.Collections.Generic.List`1<DepotMineral> Depot::depotMinerals
	List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* ___depotMinerals_10;
	// System.Single Depot::timer
	float ___timer_11;
};

// Earthworm
struct Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Mineral[] Earthworm::minerals
	MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* ___minerals_4;
	// UnityEngine.Transform Earthworm::mineralSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mineralSpawnPoint_5;
	// System.Single Earthworm::speed
	float ___speed_6;
	// System.Single Earthworm::dirX
	float ___dirX_7;
	// System.Single Earthworm::dirY
	float ___dirY_8;
	// System.Single Earthworm::duration
	float ___duration_9;
	// System.Single Earthworm::spawnRateTime
	float ___spawnRateTime_10;
	// System.Single Earthworm::spawnCooldown
	float ___spawnCooldown_11;
	// UnityEngine.Rigidbody2D Earthworm::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_12;
};

// Elevator
struct Elevator_tF03070A2E82DD6E16D94CC955989DB2D579DDAFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Elevator::startPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___startPoint_4;
	// UnityEngine.Transform Elevator::stopPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___stopPoint_5;
	// System.Boolean Elevator::isLift
	bool ___isLift_6;
	// System.Single Elevator::step
	float ___step_7;
};

// ExplodeMineral
struct ExplodeMineral_t014C3CE082B12666EBD261AA3024998B4195C453  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ExplodeMineral::speed
	float ___speed_4;
	// UnityEngine.Rigidbody2D ExplodeMineral::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_5;
};

// GameplayController
struct GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Weather GameplayController::weather
	int32_t ___weather_5;
	// System.Single GameplayController::moisture
	float ___moisture_6;
	// System.Single GameplayController::temperature
	float ___temperature_7;
	// System.Single GameplayController::time
	float ___time_8;
	// System.Single GameplayController::timeRate
	float ___timeRate_9;
	// System.Single GameplayController::targetMineral
	float ___targetMineral_10;
	// System.Single GameplayController::targetWater
	float ___targetWater_11;
	// System.Boolean GameplayController::isPause
	bool ___isPause_12;
	// MineralSpawner GameplayController::mineralSpawner
	MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* ___mineralSpawner_13;
	// UIController GameplayController::UI
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___UI_14;
	// UnityEngine.GameObject GameplayController::sky
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sky_15;
	// UnityEngine.GameObject[] GameplayController::weatherFX
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___weatherFX_16;
	// System.Collections.Generic.List`1<GameplayMineral> GameplayController::minerals
	List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* ___minerals_17;
	// UnityEngine.GameObject GameplayController::winning
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winning_18;
	// UnityEngine.GameObject GameplayController::gameOver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOver_19;
	// UnityEngine.AudioClip[] GameplayController::sfxAudios
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___sfxAudios_20;
	// UnityEngine.AudioClip[] GameplayController::bgmAudios
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___bgmAudios_21;
	// UnityEngine.AudioSource GameplayController::sfxAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sfxAudioSource_22;
	// UnityEngine.AudioSource GameplayController::bgmAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgmAudioSource_23;
	// System.Single GameplayController::currentMineral
	float ___currentMineral_24;
	// System.Single GameplayController::currentWater
	float ___currentWater_25;
	// System.Single GameplayController::remainingTime
	float ___remainingTime_26;
};

// GroundChecker
struct GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask GroundChecker::groundLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayer_4;
	// System.Boolean GroundChecker::isGround
	bool ___isGround_5;
};

// InventoryUIController
struct InventoryUIController_t0083D0A833B85EC0C25F6BEC30AD5E2A3289A4DD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform InventoryUIController::inventoryPanel
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___inventoryPanel_4;
	// PlayerController InventoryUIController::player
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___player_5;
	// UnityEngine.UI.Text InventoryUIController::playerNumberText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___playerNumberText_6;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Menu::transition
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___transition_4;
	// UnityEngine.Playables.PlayableDirector Menu::selectDirector
	PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* ___selectDirector_5;
	// UnityEngine.UI.Text Menu::PhloemPlayer
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PhloemPlayer_6;
	// UnityEngine.UI.Text Menu::XylemPlayer
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___XylemPlayer_7;
	// UnityEngine.UI.Image Menu::P1Border
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___P1Border_8;
	// UnityEngine.UI.Image Menu::P2Border
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___P2Border_9;
	// UnityEngine.AudioClip[] Menu::sfxAudios
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___sfxAudios_10;
	// UnityEngine.AudioClip Menu::bgmAudio
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___bgmAudio_11;
	// UnityEngine.AudioSource Menu::bgmAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgmAudioSource_12;
	// UnityEngine.AudioSource Menu::sfxAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sfxAudioSource_13;
};

// MineralController
struct MineralController_tF0597B48F747285166A4E5E682B72FF8444BA5BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MineralController::speed
	float ___speed_4;
	// System.Single MineralController::duration
	float ___duration_5;
	// System.Single MineralController::cooldown
	float ___cooldown_6;
	// UnityEngine.Rigidbody2D MineralController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_7;
	// UnityEngine.Vector2 MineralController::currentDir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentDir_8;
	// UnityEngine.Vector2 MineralController::newDir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newDir_9;
};

// MineralSpawner
struct MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Mineral[] MineralSpawner::minerals
	MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* ___minerals_4;
	// UnityEngine.LayerMask MineralSpawner::groundLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayer_5;
	// UnityEngine.GameObject MineralSpawner::water
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___water_6;
	// UnityEngine.Transform MineralSpawner::top
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___top_7;
	// UnityEngine.Transform MineralSpawner::right
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___right_8;
	// UnityEngine.Transform MineralSpawner::left
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___left_9;
	// UnityEngine.Transform MineralSpawner::bottom
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bottom_10;
	// System.Int32 MineralSpawner::mineralSpawnAmount
	int32_t ___mineralSpawnAmount_11;
	// System.Int32 MineralSpawner::waterSpawnAmount
	int32_t ___waterSpawnAmount_12;
	// System.Single MineralSpawner::spawnRateTime
	float ___spawnRateTime_13;
	// System.Single MineralSpawner::waterSpawnRateTime
	float ___waterSpawnRateTime_14;
	// System.Single MineralSpawner::waterSpawnRate
	float ___waterSpawnRate_15;
	// System.Single MineralSpawner::spawnCooldown
	float ___spawnCooldown_16;
	// System.Single MineralSpawner::waterCooldown
	float ___waterCooldown_17;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerController::speed
	float ___speed_4;
	// System.Single PlayerController::jumpPower
	float ___jumpPower_5;
	// System.Single PlayerController::dashDelayTime
	float ___dashDelayTime_6;
	// PlayerNumber PlayerController::playerNumber
	int32_t ___playerNumber_7;
	// InventorySO PlayerController::inventory
	InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* ___inventory_8;
	// System.Boolean PlayerController::isGround
	bool ___isGround_9;
	// System.Boolean PlayerController::isDash
	bool ___isDash_10;
	// System.Boolean PlayerController::isIdle
	bool ___isIdle_11;
	// System.Boolean PlayerController::canSend
	bool ___canSend_12;
	// System.Boolean PlayerController::canPressSwitch
	bool ___canPressSwitch_13;
	// System.Single PlayerController::input
	float ___input_14;
	// System.Single PlayerController::dashTime
	float ___dashTime_15;
	// System.Single PlayerController::dashCooldown
	float ___dashCooldown_16;
	// UnityEngine.KeyCode PlayerController::leftKey
	int32_t ___leftKey_17;
	// UnityEngine.KeyCode PlayerController::rightKey
	int32_t ___rightKey_18;
	// UnityEngine.KeyCode PlayerController::jumpKey
	int32_t ___jumpKey_19;
	// UnityEngine.KeyCode PlayerController::absorbKey
	int32_t ___absorbKey_20;
	// UnityEngine.KeyCode PlayerController::dashKey
	int32_t ___dashKey_21;
	// UnityEngine.KeyCode PlayerController::interactKey
	int32_t ___interactKey_22;
	// UnityEngine.Vector2 PlayerController::movement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movement_23;
	// UnityEngine.Vector2 PlayerController::lastMovement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastMovement_24;
	// UnityEngine.Rigidbody2D PlayerController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_25;
	// Depot PlayerController::depot
	Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* ___depot_26;
	// UnityEngine.Animator PlayerController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_27;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlayerController::heldMinerals
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___heldMinerals_28;
	// UnityEngine.AudioSource PlayerController::sfxAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sfxAudioSource_29;
	// UnityEngine.GameObject PlayerController::explodedMineral
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explodedMineral_30;
	// GroundChecker PlayerController::groundChecker
	GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6* ___groundChecker_31;
	// AbsorbDetection PlayerController::absorbDetection
	AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* ___absorbDetection_32;
	// UnityEngine.Animator PlayerController::dashBarAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___dashBarAnimator_33;
	// UnityEngine.AudioClip[] PlayerController::sfxAudios
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___sfxAudios_34;
};

// SpecialEvent
struct SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Events SpecialEvent::specialEvent
	int32_t ___specialEvent_4;
	// System.Single SpecialEvent::eventOccurTime
	float ___eventOccurTime_5;
	// UnityEngine.GameObject[] SpecialEvent::insect
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___insect_6;
	// UnityEngine.Transform SpecialEvent::earthwormSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___earthwormSpawnPoint_7;
	// UnityEngine.Transform[] SpecialEvent::antSpawnPoint
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___antSpawnPoint_8;
	// System.Single SpecialEvent::timer
	float ___timer_9;
};

// Switch
struct Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Depot Switch::depot
	Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* ___depot_4;
	// UnityEngine.Animator Switch::depotAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___depotAnimator_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text[] UIController::mineralTexts
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___mineralTexts_4;
	// UnityEngine.UI.Text UIController::moistureText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___moistureText_5;
	// UnityEngine.UI.Text UIController::temperatureText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___temperatureText_6;
	// UnityEngine.UI.Text UIController::depthText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___depthText_7;
	// UnityEngine.UI.Text UIController::timeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___timeText_8;
	// UnityEngine.GameObject UIController::mineralCircle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mineralCircle_9;
	// UnityEngine.GameObject UIController::waterCircle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waterCircle_10;
	// UnityEngine.RectTransform UIController::tempBar
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___tempBar_11;
	// UnityEngine.RectTransform UIController::moistBar
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___moistBar_12;
	// UnityEngine.GameObject[] UIController::mineralStatus
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___mineralStatus_13;
	// UnityEngine.AudioClip[] UIController::sfxAudios
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___sfxAudios_14;
	// System.Boolean UIController::isMineralRotating
	bool ___isMineralRotating_15;
	// System.Boolean UIController::isWaterRotating
	bool ___isWaterRotating_16;
	// UnityEngine.AudioSource UIController::sfxAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sfxAudioSource_17;
	// UnityEngine.Transform UIController::mainCam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mainCam_18;
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<DepotMineral>
struct List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DepotMineralU5BU5D_t025B581AD25BD7027F286B313C5045E0F5D04CDF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DepotMineral>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<GameplayMineral>
struct List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameplayMineralU5BU5D_tE74B576D91BFF04015E02496B706C54EABB6BA92* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GameplayMineral>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// DepotMineral

// DepotMineral

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// GameplayMineral

// GameplayMineral

// System.Int32

// System.Int32

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// Mineral

// Mineral

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Collections.Generic.List`1/Enumerator<DepotMineral>

// System.Collections.Generic.List`1/Enumerator<DepotMineral>

// UnityEngine.Collision2D

// UnityEngine.Collision2D

// UnityEngine.ContactPoint2D

// UnityEngine.ContactPoint2D

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// InventorySO

// InventorySO

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.Playables.PlayableDirector

// UnityEngine.Playables.PlayableDirector

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// AbsorbDetection

// AbsorbDetection

// AnimationFunction

// AnimationFunction

// Ant

// Ant

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BounceCell

// BounceCell

// CameraController

// CameraController

// UnityEngine.CircleCollider2D

// UnityEngine.CircleCollider2D

// Depot

// Depot

// Earthworm

// Earthworm

// Elevator

// Elevator

// ExplodeMineral

// ExplodeMineral

// GameplayController
struct GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields
{
	// GameplayController GameplayController::instance
	GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* ___instance_4;
};

// GameplayController

// GroundChecker

// GroundChecker

// InventoryUIController

// InventoryUIController

// Menu

// Menu

// MineralController

// MineralController

// MineralSpawner

// MineralSpawner

// PlayerController

// PlayerController

// SpecialEvent

// SpecialEvent

// Switch

// Switch

// UIController

// UIController

// UnityEngine.UI.Image
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

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* m_Items[1];

	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
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
// Mineral[]
struct MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E  : public RuntimeArray
{
	ALIGN_FIELD (8) Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700 m_Items[1];

	inline Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mineral_0), (void*)NULL);
	}
	inline Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mineral_0), (void*)NULL);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 m_Items[1];

	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DepotMineral>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478 List_1_GetEnumerator_m00CC3B1F1080210C23BDE6BCC885717C96D27066_gshared (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<DepotMineral>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4F2C6B32CA9EBFFD0B2321C9899EC33153A2E1D2_gshared (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<DepotMineral>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 Enumerator_get_Current_mA2766A2E8A4DE7936B4BB30B4FFA68396096EDCE_gshared_inline (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DepotMineral>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC3A878F779C27DAC557F336C5CF5C1B754349922_gshared (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<DepotMineral>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_gshared_inline (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<DepotMineral>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_gshared (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DepotMineral>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C_gshared (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, int32_t ___0_index, DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DepotMineral>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m41FA096CC2F01F9CD9375BB7917F9434F8231340_gshared (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<GameplayMineral>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_gshared (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameplayMineral>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660_gshared (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* __this, int32_t ___0_index, GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<GameplayMineral>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_gshared_inline (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameplayMineral>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA4A766A208D3E0F115C8EF99CF37DB851337D158_gshared (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_point, float ___1_radius, int32_t ___2_layerMask, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CameraController::GetCenterPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraController_GetCenterPoint_m6CEA9913CBE0AA5193087368FF9BCFF81A010C2D (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DepotMineral>::GetEnumerator()
inline Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478 List_1_GetEnumerator_m00CC3B1F1080210C23BDE6BCC885717C96D27066 (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478 (*) (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8*, const RuntimeMethod*))List_1_GetEnumerator_m00CC3B1F1080210C23BDE6BCC885717C96D27066_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DepotMineral>::Dispose()
inline void Enumerator_Dispose_m4F2C6B32CA9EBFFD0B2321C9899EC33153A2E1D2 (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478*, const RuntimeMethod*))Enumerator_Dispose_m4F2C6B32CA9EBFFD0B2321C9899EC33153A2E1D2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DepotMineral>::get_Current()
inline DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 Enumerator_get_Current_mA2766A2E8A4DE7936B4BB30B4FFA68396096EDCE_inline (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478* __this, const RuntimeMethod* method)
{
	return ((  DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 (*) (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478*, const RuntimeMethod*))Enumerator_get_Current_mA2766A2E8A4DE7936B4BB30B4FFA68396096EDCE_gshared_inline)(__this, method);
}
// System.Void GameplayController::AddMineral(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_AddMineral_mB38B658E9A194C64A393B19291E761505F00C86A (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, String_t* ___0_itemName, int32_t ___1_amount, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DepotMineral>::MoveNext()
inline bool Enumerator_MoveNext_mC3A878F779C27DAC557F336C5CF5C1B754349922 (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478*, const RuntimeMethod*))Enumerator_MoveNext_mC3A878F779C27DAC557F336C5CF5C1B754349922_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<DepotMineral>::get_Count()
inline int32_t List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_inline (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8*, const RuntimeMethod*))List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_gshared_inline)(__this, method);
}
// System.Void GameplayController::GetMineralTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_GetMineralTrigger_mF9113CFE54682DE4E0E5F7884CAC35480D215792 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// System.Void GameplayController::GetWaterTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_GetWaterTrigger_mE0327DB80759277FF82B2E3136AA80FB7B226F16 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void Depot::ClearAllMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depot_ClearAllMinerals_m66ECC9B0561154BB206D6DEDE41376B9918CF591 (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, const RuntimeMethod* method) ;
// System.Int32 Depot::TotalMineralAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depot_TotalMineralAmount_mD819EBBD439E71EBA13504AE3E94BDBB7AEC800B (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<DepotMineral>::get_Item(System.Int32)
inline DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 (*) (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8*, int32_t, const RuntimeMethod*))List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_gshared)(__this, ___0_index, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DepotMineral>::set_Item(System.Int32,T)
inline void List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, int32_t ___0_index, DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8*, int32_t, DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8, const RuntimeMethod*))List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<DepotMineral>::.ctor()
inline void List_1__ctor_m41FA096CC2F01F9CD9375BB7917F9434F8231340 (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8*, const RuntimeMethod*))List_1__ctor_m41FA096CC2F01F9CD9375BB7917F9434F8231340_gshared)(__this, method);
}
// System.Void Earthworm::MineralBuff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Earthworm_MineralBuff_m54CD788C835290B7F16F2928C798EE6EE6347E4C (Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Earthworm::GetRandomMineral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Earthworm_GetRandomMineral_mC51F35ADAF0858009ACA1BD2EA1925E5FAA6D655 (Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Int32 Earthworm::GetRandomWeightedIndex(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Earthworm_GetRandomWeightedIndex_m4D9B0C0A024B81464E2E07CA9912AE72E3CE0067 (Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_weights, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_current, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void GameplayController::InitializeWeather()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_InitializeWeather_mB74E80A6D1AFAADA0DB61C36F1ED5FF3667A44B4 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// System.Void GameplayController::TimeTicking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_TimeTicking_m5C92A9C3F50BF8C9818481CFF6101F75DD97E436 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// System.Single GameplayController::CalculateMineralPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameplayController_CalculateMineralPoint_mF2131E2CAF0EBFB37C345670C232CB614F120E2A (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<GameplayMineral>::get_Item(System.Int32)
inline GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A (*) (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028*, int32_t, const RuntimeMethod*))List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_gshared)(__this, ___0_index, method);
}
// System.Void GameplayController::Winning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_Winning_mE8B083C8E425665DF9FB02628FFFF09F38A2481B (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// System.Void GameplayController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_GameOver_m49E2CFB4F42BFBDA20267D110F29D8053659145C (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// System.Void GameplayController::PlaySFX(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_PlaySFX_mBE3BFF826997F813849F2F39F82DF1D8C2206865 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_sfx, const RuntimeMethod* method) ;
// System.Void GameplayController::InitializeMineralWeights(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_InitializeMineralWeights_m2AC1164E770A2E93C78D8D1F4883E369E2F39FC2 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, int32_t ___0_primaryWeight, int32_t ___1_secondaryWeight, int32_t ___2_microWeight, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UIController::SetMineralRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetMineralRotate_m7F080FF16A64E929672B27769F23AB2A250D0E6F (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::SetWaterRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetWaterRotate_mB833F96C73341FB08B6178443E9DFAFC33D2189E (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GameplayMineral>::set_Item(System.Int32,T)
inline void List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660 (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* __this, int32_t ___0_index, GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028*, int32_t, GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A, const RuntimeMethod*))List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Int32 System.Collections.Generic.List`1<GameplayMineral>::get_Count()
inline int32_t List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_inline (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028*, const RuntimeMethod*))List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GameplayMineral>::.ctor()
inline void List_1__ctor_mA4A766A208D3E0F115C8EF99CF37DB851337D158 (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028*, const RuntimeMethod*))List_1__ctor_mA4A766A208D3E0F115C8EF99CF37DB851337D158_gshared)(__this, method);
}
// System.Boolean GroundChecker::CheckGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroundChecker_CheckGround_m354340F9411E1AAD2EFF4ABE40D3D7CBF08F22B7 (GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void InventoryUIController::InitializeInventoryUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUIController_InitializeInventoryUI_mFCB158024BFB8859B484A0639ECE3392CE6891A0 (InventoryUIController_t0083D0A833B85EC0C25F6BEC30AD5E2A3289A4DD* __this, const RuntimeMethod* method) ;
// System.Void InventoryUIController::UpdateInventoryUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUIController_UpdateInventoryUI_mBBAFD213D1FA4C78D617AC27FB0A82924A852A6F (InventoryUIController_t0083D0A833B85EC0C25F6BEC30AD5E2A3289A4DD* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Count()
inline int32_t List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Sprite>::GetEnumerator()
inline Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>::Dispose()
inline void Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>::get_Current()
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_inline (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324* __this, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Sprite>::MoveNext()
inline bool Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Playables.PlayableDirector::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableDirector_Play_m937BA3BFAA11918A42D9D7874C0668DDD4B40988 (PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Physics2D::IgnoreCollision(UnityEngine.Collider2D,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreCollision_mFE023CDD902A5068236266648DAB8E9FD8EE387F (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collider1, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___1_collider2, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.ContactPoint2D::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21 (ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Reflect(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Reflect_m8EDA5309E17DC341CB13DDD7D59EBF73EAB7797F_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_inDirection, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_inNormal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics2D::IgnoreCollision(UnityEngine.Collider2D,UnityEngine.Collider2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreCollision_mA05835421D23AACF69E76082124F4F983B9E2BDD (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_collider1, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___1_collider2, bool ___2_ignore, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void InventorySO::AddItem(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySO_AddItem_m7314D73C0FB0812165DC9FA49AC1B2DF63081C61 (InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method) ;
// System.Void PlayerController::AddItem(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AddItem_mAD8D92ADAE285E1517DEE21C3AB8AD35189709E4 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void MineralSpawner::SpawnRandomMineral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralSpawner_SpawnRandomMineral_m3D3FC9449EE4D2EA3FC3182892FE01F3A0A25F71 (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) ;
// System.Void MineralSpawner::SpawnWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralSpawner_SpawnWater_mDFE3A586D39FE858B4DAB691DA33613DD3C1F4EB (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 MineralSpawner::RandomSpawnPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MineralSpawner_RandomSpawnPosition_m0B893E6F205778F159EC5C333C6EBA3FE6DC685C (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject MineralSpawner::GetRandomMineral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MineralSpawner_GetRandomMineral_m496FEA89EBBF333D378393AEDD5294DF98BA03F6 (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) ;
// System.Int32 MineralSpawner::GetRandomWeightedIndex(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MineralSpawner_GetRandomWeightedIndex_m555ECFAC0CA24C58394CE4D747763E184B41AFEB (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_weights, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::Add(T)
inline void List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::Clear()
inline void List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void PlayerController::InitializePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_InitializePlayer_m80756620BB95EB91B32AC37C8F0BF5134047D9B8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Depot>()
inline Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* GameObject_GetComponent_TisDepot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED_m350B5EF60BE7564D991FD491A64F79323C96FC4F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void PlayerController::MovementInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MovementInput_mF6229A4B5AC0913A081545C9120B0C76101B0FE9 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void PlayerController::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void InventorySO::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySO_Clear_m330B01782C902EAFB520D471E8AA31549B54405F (InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean AbsorbDetection::canAbsorb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbsorbDetection_canAbsorb_m53BB3B4274381681ABF5E34F9C8D7C786F51BD2A (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Absorb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Absorb_mC65DBC033B3FD829AE8823969F44E0FC4F4AB8A8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean AbsorbDetection::canAbsorbWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbsorbDetection_canAbsorbWater_m819D582D25C7FAA2AFE7D0310D82CF67EE80E54D (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void AbsorbDetection::ClearAllMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbsorbDetection_ClearAllMinerals_m1C94CCA9790787E5AE06852239353FA4F70B8FFF (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) ;
// System.Void AbsorbDetection::ClearAllWaters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbsorbDetection_ClearAllWaters_mE7361F31A47394394F9D700E8D66C9E4D1A9EEFD (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Dash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Dash_m7082027589323790E1340238C1376F5380414DF2 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::SendMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SendMinerals_m9266D250D59C4C59548F9AB53E6FA9C2C18F0ACB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::LiftDepot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_LiftDepot_mB1651F38DEBA4CDFC5795A54A11440DD2345A8BF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::PlaySFX(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_PlaySFX_mF3F42674E35DBD7C5466777C79BAFBAB579FAE84 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_sfx, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> AbsorbDetection::GetAbsorbedMinerals()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* AbsorbDetection_GetAbsorbedMinerals_m8986CF735E60E5D5995E8DB1BF2820ECB9552CF1_inline (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.CircleCollider2D>()
inline CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider2D::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_isTrigger_m19D5227BAB5D41F212D515C1E2CA433C2FEF7A48 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> AbsorbDetection::GetAbsorbedWater()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* AbsorbDetection_GetAbsorbedWater_m4197B6F02FA91E93B7C0E7425F692C08DAAE2557_inline (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) ;
// System.Void Depot::AddItem(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depot_AddItem_mE571EF197ABB44A2CD0B6CB6C200CA21E0C891B2 (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, String_t* ___0_itemName, int32_t ___1_amount, const RuntimeMethod* method) ;
// System.Void Depot::UpdateDepotState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depot_UpdateDepotState_mA18AEEA22877428E27D786167455DD5F704157F5 (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void SpecialEvent::InitializeSpecialEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialEvent_InitializeSpecialEvent_m8B497AE1D98B165B3A353203A710A3CFD7E72AC9 (SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UIController::UpdateMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateMinerals_m1140BCBA186C641E9DC2A31B86318FAE23B5AD6C (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::UpdateEnvironmentInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateEnvironmentInfo_mC90E68B60BADB663B93B578769E0D18A41A72AEF (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::UpdateGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateGoal_m1EFAA7602FF6F1E77ACD137AD2F84C23DF0C488D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::UpdateDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateDepth_m3E3D36067ED5C67D69AF5B5986BE9115B425C93A (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::UpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateTime_m76CBFA0E35EFEE430CDCE2E7834CCBD0C6549E00 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::SwitchStatusTab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SwitchStatusTab_m008DD28271FA2DD6D724C1255DF9F551E626A9F1 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Int32 GameplayController::GetMineralAmountOfIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameplayController_GetMineralAmountOfIndex_m7E4DA0FC2958F6901B5F70E99275209C4883CC55 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Single GameplayController::GetCurrentMineral()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameplayController_GetCurrentMineral_m0A7FF6497FFD825309C1B157BA8DA117C4C7F9DD_inline (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, float ___2_angle, const RuntimeMethod* method) ;
// System.Single GameplayController::GetCurrentWater()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameplayController_GetCurrentWater_m460BF080CB650E31F08A674610601A59ED8FBE9D_inline (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UIController::PlaySFX(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_PlaySFX_m6826501DCAC4446D60575CE97396490B281624E1 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_sfx, const RuntimeMethod* method) ;
// System.Single GameplayController::GetRemainingTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameplayController_GetRemainingTime_mE013B0C1A1018501A640627525A8A1BFF828FF6D_inline (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Void AbsorbDetection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbsorbDetection_Start_m7C3857AED63D113AAF2D1B8D13E49BFE29DBA0DD (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AbsorbDetection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbsorbDetection_Update_m958957EC0C38C3F3485AD12B42B4C6D31D8B0FFD (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean AbsorbDetection::canAbsorb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbsorbDetection_canAbsorb_m53BB3B4274381681ABF5E34F9C8D7C786F51BD2A (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_0 = NULL;
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_1 = NULL;
	int32_t V_2 = 0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_3 = NULL;
	{
		// Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position,4f,mineralLayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___mineralLayer_4;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_5;
		L_5 = Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9(L_2, (4.0f), L_4, NULL);
		V_0 = L_5;
		// if(colliders.Length > 0)
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_6 = V_0;
		if (!(((RuntimeArray*)L_6)->max_length))
		{
			goto IL_0051;
		}
	}
	{
		// foreach(Collider2D collider in colliders){
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_7 = V_0;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0049;
	}

IL_0030:
	{
		// foreach(Collider2D collider in colliders){
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// absorbedMinerals.Add(collider.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___absorbedMinerals_6;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_12, L_14, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0049:
	{
		// foreach(Collider2D collider in colliders){
		int32_t L_16 = V_2;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0051:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean AbsorbDetection::canAbsorbWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbsorbDetection_canAbsorbWater_m819D582D25C7FAA2AFE7D0310D82CF67EE80E54D (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_0 = NULL;
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_1 = NULL;
	int32_t V_2 = 0;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_3 = NULL;
	{
		// Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position,4f,waterLayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___waterLayer_5;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_5;
		L_5 = Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9(L_2, (4.0f), L_4, NULL);
		V_0 = L_5;
		// if(colliders.Length > 0){
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_6 = V_0;
		if (!(((RuntimeArray*)L_6)->max_length))
		{
			goto IL_0051;
		}
	}
	{
		// foreach(Collider2D collider in colliders){
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_7 = V_0;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0049;
	}

IL_0030:
	{
		// foreach(Collider2D collider in colliders){
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// absorbedWater.Add(collider.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = __this->___absorbedWater_7;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_12, L_14, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0049:
	{
		// foreach(Collider2D collider in colliders){
		int32_t L_16 = V_2;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0051:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> AbsorbDetection::GetAbsorbedMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* AbsorbDetection_GetAbsorbedMinerals_m8986CF735E60E5D5995E8DB1BF2820ECB9552CF1 (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	{
		// return absorbedMinerals;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___absorbedMinerals_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> AbsorbDetection::GetAbsorbedWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* AbsorbDetection_GetAbsorbedWater_m4197B6F02FA91E93B7C0E7425F692C08DAAE2557 (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	{
		// return absorbedWater;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___absorbedWater_7;
		return L_0;
	}
}
// System.Void AbsorbDetection::ClearAllMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbsorbDetection_ClearAllMinerals_m1C94CCA9790787E5AE06852239353FA4F70B8FFF (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// absorbedMinerals.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___absorbedMinerals_6;
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_0, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AbsorbDetection::ClearAllWaters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbsorbDetection_ClearAllWaters_mE7361F31A47394394F9D700E8D66C9E4D1A9EEFD (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// absorbedWater.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___absorbedWater_7;
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_0, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AbsorbDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbsorbDetection__ctor_mC95DF3C8D7EF45E008E75FB5569177078F4F176D (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> absorbedMinerals = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___absorbedMinerals_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___absorbedMinerals_6), (void*)L_0);
		// private List<GameObject> absorbedWater = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___absorbedWater_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___absorbedWater_7), (void*)L_1);
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
// System.Void AnimationFunction::SetInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFunction_SetInactive_mFBF17A04D5AEE4F663155415D80F4F783B07A045 (AnimationFunction_t60C55E8CD02A712A25E293CFAA2CC913DC462DD2* __this, const RuntimeMethod* method) 
{
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void AnimationFunction::SelfDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFunction_SelfDestroy_mA75254B381C0B1E98B138CC30CDD9181BAEF56B0 (AnimationFunction_t60C55E8CD02A712A25E293CFAA2CC913DC462DD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void AnimationFunction::NextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFunction_NextScene_m9229D2FCF91A204BD3C762317328B927880A0A1C (AnimationFunction_t60C55E8CD02A712A25E293CFAA2CC913DC462DD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void AnimationFunction::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFunction_Unpause_m6615D02DCFBC14705FFBAD61229FB318F7584B5D (AnimationFunction_t60C55E8CD02A712A25E293CFAA2CC913DC462DD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameplayController.instance.isPause = false;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		L_0->___isPause_12 = (bool)0;
		// }
		return;
	}
}
// System.Void AnimationFunction::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFunction_Pause_m64A95CD8B96F8FFC5710CEB0CEC143BE06AA2B51 (AnimationFunction_t60C55E8CD02A712A25E293CFAA2CC913DC462DD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameplayController.instance.isPause = true;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		L_0->___isPause_12 = (bool)1;
		// }
		return;
	}
}
// System.Void AnimationFunction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationFunction__ctor_mF9A6437B42F3F75801A97BCE88C2E4533DC735F9 (AnimationFunction_t60C55E8CD02A712A25E293CFAA2CC913DC462DD2* __this, const RuntimeMethod* method) 
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
// System.Void Ant::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ant_Start_m0C8EA96F36D810982D4828BBCA0441B5CA142C16 (Ant_t8371E02AB3CC87EF2137AC4FF22A06724E1A2260* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_10), (void*)L_0);
		// timer = dirChangeTime;
		float L_1 = __this->___dirChangeTime_5;
		__this->___timer_7 = L_1;
		// movement = new Vector2(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		__this->___movement_8 = L_4;
		// }
		return;
	}
}
// System.Void Ant::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ant_Update_m990CB37FA91BFFA70F54337892FFA943519439F5 (Ant_t8371E02AB3CC87EF2137AC4FF22A06724E1A2260* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameplayController.instance.isPause)
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPause_12;
		if (L_1)
		{
			goto IL_008f;
		}
	}
	{
		// if (duration > 0)
		float L_2 = __this->___duration_6;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0084;
		}
	}
	{
		// duration -= Time.deltaTime;
		float L_3 = __this->___duration_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___duration_6 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// if (timer > 0)
		float L_5 = __this->___timer_7;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		// timer -= Time.deltaTime;
		float L_6 = __this->___timer_7;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_7 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		return;
	}

IL_004e:
	{
		// movement = new Vector2(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		float L_9;
		L_9 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		__this->___movement_8 = L_10;
		// timer = dirChangeTime;
		float L_11 = __this->___dirChangeTime_5;
		__this->___timer_7 = L_11;
		return;
	}

IL_0084:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Ant::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ant_FixedUpdate_m0801AAB081151BD13BC8C0BD9768D9B02EDD7D8C (Ant_t8371E02AB3CC87EF2137AC4FF22A06724E1A2260* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// rb.velocity = movement * speed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rb_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___movement_8;
		float L_2 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_3, NULL);
		// float angle = Mathf.Atan2(movement.y, movement.x) * Mathf.Rad2Deg;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___movement_8);
		float L_5 = L_4->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___movement_8);
		float L_7 = L_6->___x_0;
		float L_8;
		L_8 = atan2f(L_5, L_7);
		V_0 = ((float)il2cpp_codegen_multiply(L_8, (57.2957802f)));
		// transform.rotation = Quaternion.AngleAxis(angle - 90, Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_subtract(L_10, (90.0f))), L_11, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_12, NULL);
		// }
		return;
	}
}
// System.Void Ant::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ant_OnTriggerEnter2D_m24BEBB9E53EBCFA2B088D5BF1A33DE559651888C (Ant_t8371E02AB3CC87EF2137AC4FF22A06724E1A2260* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB854FB00C4B4A27C3F1B8572007239AB388C7ABA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.layer == 6)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_001a;
		}
	}
	{
		// other.gameObject.SetActive(false);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_001a:
	{
		// if (other.gameObject.CompareTag("Surface"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		bool L_7;
		L_7 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_6, _stringLiteralB854FB00C4B4A27C3F1B8572007239AB388C7ABA, NULL);
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		// rb.velocity = new Vector2(rb.velocity.x, rb.velocity.y * -1f);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8 = __this->___rb_10;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___rb_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_9, NULL);
		float L_11 = L_10.___x_0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12 = __this->___rb_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_12, NULL);
		float L_14 = L_13.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_11, ((float)il2cpp_codegen_multiply(L_14, (-1.0f))), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_8, L_15, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Ant::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ant__ctor_m580926F72A188B208C0C41DC0134E7E8039572EA (Ant_t8371E02AB3CC87EF2137AC4FF22A06724E1A2260* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 3f, dirChangeTime = 5f, duration = 20f;
		__this->___speed_4 = (3.0f);
		// public float speed = 3f, dirChangeTime = 5f, duration = 20f;
		__this->___dirChangeTime_5 = (5.0f);
		// public float speed = 3f, dirChangeTime = 5f, duration = 20f;
		__this->___duration_6 = (20.0f);
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
// System.Void BounceCell::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BounceCell_Start_m672E8EE01ED9F5D6A55A42520B6884469D8A2ADF (BounceCell_t66FF2AE965EC0CD0444FFD6B4AEA374390B7E58B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_5), (void*)L_0);
		// sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_1, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___sfxAudioSource_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sfxAudioSource_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void BounceCell::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BounceCell_Update_m104FC7D6CCADE800CACFF016B0E8439BEFD839A5 (BounceCell_t66FF2AE965EC0CD0444FFD6B4AEA374390B7E58B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BounceCell::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BounceCell_OnCollisionEnter2D_m2CAD41100D758AC00CCFF083C2983D06BBCB77FF (BounceCell_t66FF2AE965EC0CD0444FFD6B4AEA374390B7E58B* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443435B09235A175A9BAB9C338B7A82BBA49ABB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.collider.CompareTag("Foot")){
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F, NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		// sfxAudioSource.PlayOneShot(bounceSFX);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sfxAudioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___bounceSFX_4;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// animator.SetBool("isSpring",true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___animator_5;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral443435B09235A175A9BAB9C338B7A82BBA49ABB2, (bool)1, NULL);
		// other.collider.transform.parent.GetComponent<Rigidbody2D>().velocity = new Vector2(0f,10f);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_6 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7;
		L_7 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_10;
		L_10 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(L_9, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (0.0f), (10.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_10, L_11, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void BounceCell::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BounceCell_OnCollisionExit2D_mF6B1A752CBB79A36FE17D7684E32C9EF62B1FA7B (BounceCell_t66FF2AE965EC0CD0444FFD6B4AEA374390B7E58B* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443435B09235A175A9BAB9C338B7A82BBA49ABB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.collider.CompareTag("Foot")){
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// animator.SetBool("isSpring",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_5;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral443435B09235A175A9BAB9C338B7A82BBA49ABB2, (bool)0, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void BounceCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BounceCell__ctor_mA36F4292E9F29808B1F3F7D134D20BA95D30545C (BounceCell_t66FF2AE965EC0CD0444FFD6B4AEA374390B7E58B* __this, const RuntimeMethod* method) 
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_m8EAAC188934ECCBD009EC00751280DCFF4D96C71 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// centerPoint = GetCenterPoint();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CameraController_GetCenterPoint_m6CEA9913CBE0AA5193087368FF9BCFF81A010C2D(__this, NULL);
		__this->___centerPoint_9 = L_0;
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_mBCB871B23DBA60444D43AB56D780478BA3D355E6 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// centerPoint = GetCenterPoint();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CameraController_GetCenterPoint_m6CEA9913CBE0AA5193087368FF9BCFF81A010C2D(__this, NULL);
		__this->___centerPoint_9 = L_0;
		// targetPosition = new Vector3(centerPoint.x + offsetHorizontal, centerPoint.y + offsetVertical,this.transform.position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___centerPoint_9);
		float L_2 = L_1->___x_2;
		float L_3 = __this->___offsetHorizontal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___centerPoint_9);
		float L_5 = L_4->___y_3;
		float L_6 = __this->___offsetVertical_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), ((float)il2cpp_codegen_add(L_2, L_3)), ((float)il2cpp_codegen_add(L_5, L_6)), L_9, /*hidden argument*/NULL);
		__this->___targetPosition_8 = L_10;
		// transform.position = Vector3.Lerp(transform.position,targetPosition,offsetSmoothing*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___targetPosition_8;
		float L_15 = __this->___offsetSmoothing_6;
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_13, L_14, ((float)il2cpp_codegen_multiply(L_15, L_16)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_17, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 CameraController::GetCenterPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraController_GetCenterPoint_m6CEA9913CBE0AA5193087368FF9BCFF81A010C2D (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float xPos = (player[0].position.x + player[1].position.x)/2f;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___player_7;
		int32_t L_1 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___player_7;
		int32_t L_6 = 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		// float yPos = (player[0].position.y + player[1].position.y)/2f;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___player_7;
		int32_t L_11 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = __this->___player_7;
		int32_t L_16 = 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___y_3;
		V_0 = ((float)(((float)il2cpp_codegen_add(L_14, L_19))/(2.0f)));
		// return new Vector3(xPos,yPos,transform.position.z);
		float L_20 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)(((float)il2cpp_codegen_add(L_4, L_9))/(2.0f))), L_20, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private Transform[] player = new Transform[2];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___player_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_7), (void*)L_0);
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
// Conversion methods for marshalling of: DepotMineral
IL2CPP_EXTERN_C void DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshal_pinvoke(const DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8& unmarshaled, DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshaled_pinvoke& marshaled)
{
	marshaled.___mineralName_0 = il2cpp_codegen_marshal_string(unmarshaled.___mineralName_0);
	marshaled.___amount_1 = unmarshaled.___amount_1;
}
IL2CPP_EXTERN_C void DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshal_pinvoke_back(const DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshaled_pinvoke& marshaled, DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8& unmarshaled)
{
	unmarshaled.___mineralName_0 = il2cpp_codegen_marshal_string_result(marshaled.___mineralName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mineralName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mineralName_0));
	int32_t unmarshaledamount_temp_1 = 0;
	unmarshaledamount_temp_1 = marshaled.___amount_1;
	unmarshaled.___amount_1 = unmarshaledamount_temp_1;
}
// Conversion method for clean up from marshalling of: DepotMineral
IL2CPP_EXTERN_C void DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshal_pinvoke_cleanup(DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mineralName_0);
	marshaled.___mineralName_0 = NULL;
}
// Conversion methods for marshalling of: DepotMineral
IL2CPP_EXTERN_C void DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshal_com(const DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8& unmarshaled, DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshaled_com& marshaled)
{
	marshaled.___mineralName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___mineralName_0);
	marshaled.___amount_1 = unmarshaled.___amount_1;
}
IL2CPP_EXTERN_C void DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshal_com_back(const DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshaled_com& marshaled, DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8& unmarshaled)
{
	unmarshaled.___mineralName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___mineralName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mineralName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mineralName_0));
	int32_t unmarshaledamount_temp_1 = 0;
	unmarshaledamount_temp_1 = marshaled.___amount_1;
	unmarshaled.___amount_1 = unmarshaledamount_temp_1;
}
// Conversion method for clean up from marshalling of: DepotMineral
IL2CPP_EXTERN_C void DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshal_com_cleanup(DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mineralName_0);
	marshaled.___mineralName_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Depot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depot_Start_mD4C023DDD920932DA5440B2EA0EE209D826D1D90 (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___sfxAudioSource_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sfxAudioSource_6), (void*)L_1);
		// timer = depotCooldown;
		float L_2 = __this->___depotCooldown_5;
		__this->___timer_11 = L_2;
		// }
		return;
	}
}
// System.Void Depot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depot_Update_mA67C077728C44255FC936AB5D3561FD8DF374B92 (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4F2C6B32CA9EBFFD0B2321C9899EC33153A2E1D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC3A878F779C27DAC557F336C5CF5C1B754349922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA2766A2E8A4DE7936B4BB30B4FFA68396096EDCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m00CC3B1F1080210C23BDE6BCC885717C96D27066_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04D4617D2E5A20AA108F175EB4AA6A879E1542E3);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!GameplayController.instance.isPause)
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPause_12;
		if (L_1)
		{
			goto IL_0103;
		}
	}
	{
		// if (GetComponent<Animator>().GetBool("isLifting"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		bool L_3;
		L_3 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_2, _stringLiteral04D4617D2E5A20AA108F175EB4AA6A879E1542E3, NULL);
		if (!L_3)
		{
			goto IL_0103;
		}
	}
	{
		// if (timer > 0)
		float L_4 = __this->___timer_11;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		// timer -= Time.deltaTime;
		float L_5 = __this->___timer_11;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_11 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		return;
	}

IL_0044:
	{
		// sfxAudioSource.PlayOneShot(chain);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___sfxAudioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->___chain_7;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_7, L_8, NULL);
		// GetComponent<Animator>().SetBool("isLifting", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_9, _stringLiteral04D4617D2E5A20AA108F175EB4AA6A879E1542E3, (bool)0, NULL);
		// foreach (DepotMineral mineral in depotMinerals)
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_10 = __this->___depotMinerals_10;
		Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478 L_11;
		L_11 = List_1_GetEnumerator_m00CC3B1F1080210C23BDE6BCC885717C96D27066(L_10, List_1_GetEnumerator_m00CC3B1F1080210C23BDE6BCC885717C96D27066_RuntimeMethod_var);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4F2C6B32CA9EBFFD0B2321C9899EC33153A2E1D2((&V_0), Enumerator_Dispose_m4F2C6B32CA9EBFFD0B2321C9899EC33153A2E1D2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0092_1;
			}

IL_0074_1:
			{
				// foreach (DepotMineral mineral in depotMinerals)
				DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_12;
				L_12 = Enumerator_get_Current_mA2766A2E8A4DE7936B4BB30B4FFA68396096EDCE_inline((&V_0), Enumerator_get_Current_mA2766A2E8A4DE7936B4BB30B4FFA68396096EDCE_RuntimeMethod_var);
				V_1 = L_12;
				// GameplayController.instance.AddMineral(mineral.mineralName, mineral.amount);
				GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_13 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
				DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_14 = V_1;
				String_t* L_15 = L_14.___mineralName_0;
				DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_16 = V_1;
				int32_t L_17 = L_16.___amount_1;
				GameplayController_AddMineral_mB38B658E9A194C64A393B19291E761505F00C86A(L_13, L_15, L_17, NULL);
			}

IL_0092_1:
			{
				// foreach (DepotMineral mineral in depotMinerals)
				bool L_18;
				L_18 = Enumerator_MoveNext_mC3A878F779C27DAC557F336C5CF5C1B754349922((&V_0), Enumerator_MoveNext_mC3A878F779C27DAC557F336C5CF5C1B754349922_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0074_1;
				}
			}
			{
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		// if(depotMinerals.Count > 0){
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_19 = __this->___depotMinerals_10;
		int32_t L_20;
		L_20 = List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_inline(L_19, List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_RuntimeMethod_var);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		// sfxAudioSource.PlayOneShot(store);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___sfxAudioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_22 = __this->___store_8;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_21, L_22, NULL);
	}

IL_00ca:
	{
		// GameplayController.instance.GetMineralTrigger();
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_23 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		GameplayController_GetMineralTrigger_mF9113CFE54682DE4E0E5F7884CAC35480D215792(L_23, NULL);
		// GameplayController.instance.GetWaterTrigger();
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_24 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		GameplayController_GetWaterTrigger_mE0327DB80759277FF82B2E3136AA80FB7B226F16(L_24, NULL);
		// GetComponent<SpriteRenderer>().sprite = depotState[0];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_25;
		L_25 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_26 = __this->___depotState_9;
		int32_t L_27 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_28 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_25, L_28, NULL);
		// ClearAllMinerals();
		Depot_ClearAllMinerals_m66ECC9B0561154BB206D6DEDE41376B9918CF591(__this, NULL);
		// timer = depotCooldown;
		float L_29 = __this->___depotCooldown_5;
		__this->___timer_11 = L_29;
	}

IL_0103:
	{
		// }
		return;
	}
}
// System.Void Depot::UpdateDepotState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depot_UpdateDepotState_mA18AEEA22877428E27D786167455DD5F704157F5 (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TotalMineralAmount() < 1)
		int32_t L_0;
		L_0 = Depot_TotalMineralAmount_mD819EBBD439E71EBA13504AE3E94BDBB7AEC800B(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		// GetComponent<SpriteRenderer>().sprite = depotState[0];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_2 = __this->___depotState_9;
		int32_t L_3 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_1, L_4, NULL);
		return;
	}

IL_001d:
	{
		// else if (TotalMineralAmount() < 8)
		int32_t L_5;
		L_5 = Depot_TotalMineralAmount_mD819EBBD439E71EBA13504AE3E94BDBB7AEC800B(__this, NULL);
		if ((((int32_t)L_5) >= ((int32_t)8)))
		{
			goto IL_003a;
		}
	}
	{
		// GetComponent<SpriteRenderer>().sprite = depotState[1];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6;
		L_6 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_7 = __this->___depotState_9;
		int32_t L_8 = 1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_6, L_9, NULL);
		return;
	}

IL_003a:
	{
		// else if (TotalMineralAmount() < 15)
		int32_t L_10;
		L_10 = Depot_TotalMineralAmount_mD819EBBD439E71EBA13504AE3E94BDBB7AEC800B(__this, NULL);
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)15))))
		{
			goto IL_0058;
		}
	}
	{
		// GetComponent<SpriteRenderer>().sprite = depotState[2];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11;
		L_11 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_12 = __this->___depotState_9;
		int32_t L_13 = 2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_11, L_14, NULL);
		return;
	}

IL_0058:
	{
		// else if (TotalMineralAmount() < 20)
		int32_t L_15;
		L_15 = Depot_TotalMineralAmount_mD819EBBD439E71EBA13504AE3E94BDBB7AEC800B(__this, NULL);
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)20))))
		{
			goto IL_0075;
		}
	}
	{
		// GetComponent<SpriteRenderer>().sprite = depotState[3];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16;
		L_16 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_17 = __this->___depotState_9;
		int32_t L_18 = 3;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_16, L_19, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Depot::AddItem(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depot_AddItem_mE571EF197ABB44A2CD0B6CB6C200CA21E0C891B2 (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, String_t* ___0_itemName, int32_t ___1_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < depotMinerals.Count; i++)
		V_0 = 0;
		goto IL_0048;
	}

IL_0004:
	{
		// if (depotMinerals[i].mineralName == itemName)
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_0 = __this->___depotMinerals_10;
		int32_t L_1 = V_0;
		DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_2;
		L_2 = List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C(L_0, L_1, List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_RuntimeMethod_var);
		String_t* L_3 = L_2.___mineralName_0;
		String_t* L_4 = ___0_itemName;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// DepotMineral mineral = depotMinerals[i];
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_6 = __this->___depotMinerals_10;
		int32_t L_7 = V_0;
		DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_8;
		L_8 = List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C(L_6, L_7, List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_RuntimeMethod_var);
		V_1 = L_8;
		// mineral.amount += amount;
		int32_t* L_9 = (&(&V_1)->___amount_1);
		int32_t* L_10 = L_9;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___1_amount;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, L_12));
		// depotMinerals[i] = mineral;
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_13 = __this->___depotMinerals_10;
		int32_t L_14 = V_0;
		DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_15 = V_1;
		List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C(L_13, L_14, L_15, List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C_RuntimeMethod_var);
		// break;
		return;
	}

IL_0044:
	{
		// for (int i = 0; i < depotMinerals.Count; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		// for (int i = 0; i < depotMinerals.Count; i++)
		int32_t L_17 = V_0;
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_18 = __this->___depotMinerals_10;
		int32_t L_19;
		L_19 = List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_inline(L_18, List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Depot::ClearAllMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depot_ClearAllMinerals_m66ECC9B0561154BB206D6DEDE41376B9918CF591 (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < depotMinerals.Count; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// DepotMineral mineral = depotMinerals[i];
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_0 = __this->___depotMinerals_10;
		int32_t L_1 = V_0;
		DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_2;
		L_2 = List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C(L_0, L_1, List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_RuntimeMethod_var);
		V_1 = L_2;
		// mineral.amount = 0;
		(&V_1)->___amount_1 = 0;
		// depotMinerals[i] = mineral;
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_3 = __this->___depotMinerals_10;
		int32_t L_4 = V_0;
		DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_5 = V_1;
		List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C(L_3, L_4, L_5, List_1_set_Item_mF28801CAC39FADC0D2201FA894042D2C5CA7571C_RuntimeMethod_var);
		// for (int i = 0; i < depotMinerals.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < depotMinerals.Count; i++)
		int32_t L_7 = V_0;
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_8 = __this->___depotMinerals_10;
		int32_t L_9;
		L_9 = List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_inline(L_8, List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Depot::TotalMineralAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Depot_TotalMineralAmount_mD819EBBD439E71EBA13504AE3E94BDBB7AEC800B (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int totalAmount = 0;
		V_0 = 0;
		// for (int i = 0; i < depotMinerals.Count; i++)
		V_1 = 0;
		goto IL_001e;
	}

IL_0006:
	{
		// totalAmount += depotMinerals[i].amount;
		int32_t L_0 = V_0;
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_1 = __this->___depotMinerals_10;
		int32_t L_2 = V_1;
		DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_3;
		L_3 = List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C(L_1, L_2, List_1_get_Item_m1BDA6FCCB6D33190EED87A25C63E6CE621A4083C_RuntimeMethod_var);
		int32_t L_4 = L_3.___amount_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_4));
		// for (int i = 0; i < depotMinerals.Count; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < depotMinerals.Count; i++)
		int32_t L_6 = V_1;
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_7 = __this->___depotMinerals_10;
		int32_t L_8;
		L_8 = List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_inline(L_7, List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0006;
		}
	}
	{
		// return totalAmount;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void Depot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Depot__ctor_m676A6774CDEAC4F945D0AE33137B4D8CAFFDF883 (Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m41FA096CC2F01F9CD9375BB7917F9434F8231340_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int maxCapacity = 20;
		__this->___maxCapacity_4 = ((int32_t)20);
		// public float depotCooldown = 5f;
		__this->___depotCooldown_5 = (5.0f);
		// [SerializeField] private List<DepotMineral> depotMinerals = new List<DepotMineral>();
		List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* L_0 = (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8*)il2cpp_codegen_object_new(List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8_il2cpp_TypeInfo_var);
		List_1__ctor_m41FA096CC2F01F9CD9375BB7917F9434F8231340(L_0, List_1__ctor_m41FA096CC2F01F9CD9375BB7917F9434F8231340_RuntimeMethod_var);
		__this->___depotMinerals_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depotMinerals_10), (void*)L_0);
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
// System.Void Earthworm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Earthworm_Start_mEE31BC15F70360FB2E06366B1B19DEFC5756C2C2 (Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void Earthworm::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Earthworm_Update_m318A1A9495FEE9E94F236F04EFB521601DA135EA (Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameplayController.instance.isPause)
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPause_12;
		if (L_1)
		{
			goto IL_0059;
		}
	}
	{
		// rb.velocity = new Vector2(-speed, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_12;
		float L_3 = __this->___speed_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((-L_3)), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_2, L_4, NULL);
		// MineralBuff();
		Earthworm_MineralBuff_m54CD788C835290B7F16F2928C798EE6EE6347E4C(__this, NULL);
		// if(duration > 0){
		float L_5 = __this->___duration_9;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		// duration -= Time.deltaTime;
		float L_6 = __this->___duration_9;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___duration_9 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		return;
	}

IL_004e:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Earthworm::MineralBuff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Earthworm_MineralBuff_m54CD788C835290B7F16F2928C798EE6EE6347E4C (Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spawnCooldown > 0)
		float L_0 = __this->___spawnCooldown_11;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// spawnCooldown -= Time.deltaTime;
		float L_1 = __this->___spawnCooldown_11;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnCooldown_11 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		return;
	}

IL_0020:
	{
		// GameObject mineral = Instantiate(GetRandomMineral(), mineralSpawnPoint.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Earthworm_GetRandomMineral_mC51F35ADAF0858009ACA1BD2EA1925E5FAA6D655(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___mineralSpawnPoint_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// spawnCooldown = spawnRateTime;
		float L_8 = __this->___spawnRateTime_10;
		__this->___spawnCooldown_11 = L_8;
		// }
		return;
	}
}
// System.Int32 Earthworm::GetRandomWeightedIndex(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Earthworm_GetRandomWeightedIndex_m4D9B0C0A024B81464E2E07CA9912AE72E3CE0067 (Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_weights, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int weightSum = 0;
		V_0 = 0;
		// for (int i = 0; i < weights.Length; i++)
		V_3 = 0;
		goto IL_0010;
	}

IL_0006:
	{
		// weightSum += weights[i];
		int32_t L_0 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_weights;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_4));
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_5 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0010:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_6 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_weights;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// int index = 0;
		V_1 = 0;
		// int lastIndex = weights.Length - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_weights;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1));
		goto IL_0038;
	}

IL_0020:
	{
		// if (UnityEngine.Random.Range(0, weightSum) < weights[index])
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_weights;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) >= ((int32_t)L_14)))
		{
			goto IL_002e;
		}
	}
	{
		// return index;
		int32_t L_15 = V_1;
		return L_15;
	}

IL_002e:
	{
		// weightSum -= weights[index++];
		int32_t L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___0_weights;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = L_19;
		int32_t L_21 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, L_21));
	}

IL_0038:
	{
		// while (index < lastIndex)
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0020;
		}
	}
	{
		// return index;
		int32_t L_24 = V_1;
		return L_24;
	}
}
// UnityEngine.GameObject Earthworm::GetRandomMineral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Earthworm_GetRandomMineral_mC51F35ADAF0858009ACA1BD2EA1925E5FAA6D655 (Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// int[] weights = new int[minerals.Length];
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_0 = __this->___minerals_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for (int i = 0; i < minerals.Length; i++)
		V_1 = 0;
		goto IL_002a;
	}

IL_0012:
	{
		// weights[i] = minerals[i].weight;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_4 = __this->___minerals_4;
		int32_t L_5 = V_1;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___weight_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_6);
		// for (int i = 0; i < minerals.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < minerals.Length; i++)
		int32_t L_8 = V_1;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_9 = __this->___minerals_4;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// return minerals[GetRandomWeightedIndex(weights)].mineral;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_10 = __this->___minerals_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12;
		L_12 = Earthworm_GetRandomWeightedIndex_m4D9B0C0A024B81464E2E07CA9912AE72E3CE0067(__this, L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___mineral_0;
		return L_13;
	}
}
// System.Void Earthworm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Earthworm__ctor_mE35357C0FB6BB2D18DAB4B236685B6AB6CB23D59 (Earthworm_t793F63F13099A3F2BAEE6BCE2ABC878D122A34F1* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 2f, dirX, dirY, duration = 150f;
		__this->___speed_6 = (2.0f);
		// public float speed = 2f, dirX, dirY, duration = 150f;
		__this->___duration_9 = (150.0f);
		// public float spawnRateTime = 1f;
		__this->___spawnRateTime_10 = (1.0f);
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
// System.Void Elevator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_Start_m7E446DD2A64F42D518669B2DE281AFEB79C60E09 (Elevator_tF03070A2E82DD6E16D94CC955989DB2D579DDAFB* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = startPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___startPoint_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// isLift = false;
		__this->___isLift_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Elevator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_Update_mA54771E6725ACB929EB80B4E80B019513088D336 (Elevator_tF03070A2E82DD6E16D94CC955989DB2D579DDAFB* __this, const RuntimeMethod* method) 
{
	{
		// if(isLift){
		bool L_0 = __this->___isLift_6;
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		// step = 2f * Time.deltaTime;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___step_7 = ((float)il2cpp_codegen_multiply((2.0f), L_1));
		// transform.position = Vector2.MoveTowards(transform.position,stopPoint.transform.position,step);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___stopPoint_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		float L_10 = __this->___step_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_5, L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_12, NULL);
		return;
	}

IL_005a:
	{
		// step = 2f * Time.deltaTime;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___step_7 = ((float)il2cpp_codegen_multiply((2.0f), L_13));
		// transform.position = Vector2.MoveTowards(transform.position,startPoint.transform.position,step);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___startPoint_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_20, NULL);
		float L_22 = __this->___step_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_17, L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_23, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_24, NULL);
		// }
		return;
	}
}
// System.Void Elevator::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_OnCollisionEnter2D_m78DF78552FB17C15721852BCF63B44961A11F9CF (Elevator_tF03070A2E82DD6E16D94CC955989DB2D579DDAFB* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.collider.CompareTag("Foot")){
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// isLift = true;
		__this->___isLift_6 = (bool)1;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Elevator::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator_OnCollisionExit2D_m93BBE18BF072B861E132044454722AB7EF0647C9 (Elevator_tF03070A2E82DD6E16D94CC955989DB2D579DDAFB* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.collider.CompareTag("Foot")){
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// isLift = false;
		__this->___isLift_6 = (bool)0;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Elevator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elevator__ctor_m31219F3FDC758F607ABB1683CEF805F2A375CCA1 (Elevator_tF03070A2E82DD6E16D94CC955989DB2D579DDAFB* __this, const RuntimeMethod* method) 
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
// System.Void ExplodeMineral::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeMineral_Start_mC585E6D2583DBD3791FCD4212ACCDFE1A448378F (ExplodeMineral_t014C3CE082B12666EBD261AA3024998B4195C453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// speed = Random.Range(0.5f,2f);
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (2.0f), NULL);
		__this->___speed_4 = L_1;
		// rb.velocity = new Vector2(Mathf.Sign(Random.Range(-1f, 1f)) * speed, Mathf.Sign(Random.Range(-1f, 1f)) * speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_5;
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		float L_4;
		L_4 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_3, NULL);
		float L_5 = __this->___speed_4;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		float L_7;
		L_7 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_6, NULL);
		float L_8 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_2, L_9, NULL);
		// transform.localScale = new Vector2(Random.Range(0.5f,1f),Random.Range(0.5f,1f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (1.0f), NULL);
		float L_12;
		L_12 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (1.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), L_11, L_12, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_14, NULL);
		// }
		return;
	}
}
// System.Void ExplodeMineral::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeMineral__ctor_m9D3A42A9ADC0A4811F785D77A12916D9BCA69FE6 (ExplodeMineral_t014C3CE082B12666EBD261AA3024998B4195C453* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: GameplayMineral
IL2CPP_EXTERN_C void GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshal_pinvoke(const GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A& unmarshaled, GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshaled_pinvoke& marshaled)
{
	marshaled.___mineralName_0 = il2cpp_codegen_marshal_string(unmarshaled.___mineralName_0);
	marshaled.___amount_1 = unmarshaled.___amount_1;
}
IL2CPP_EXTERN_C void GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshal_pinvoke_back(const GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshaled_pinvoke& marshaled, GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A& unmarshaled)
{
	unmarshaled.___mineralName_0 = il2cpp_codegen_marshal_string_result(marshaled.___mineralName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mineralName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mineralName_0));
	int32_t unmarshaledamount_temp_1 = 0;
	unmarshaledamount_temp_1 = marshaled.___amount_1;
	unmarshaled.___amount_1 = unmarshaledamount_temp_1;
}
// Conversion method for clean up from marshalling of: GameplayMineral
IL2CPP_EXTERN_C void GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshal_pinvoke_cleanup(GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mineralName_0);
	marshaled.___mineralName_0 = NULL;
}
// Conversion methods for marshalling of: GameplayMineral
IL2CPP_EXTERN_C void GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshal_com(const GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A& unmarshaled, GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshaled_com& marshaled)
{
	marshaled.___mineralName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___mineralName_0);
	marshaled.___amount_1 = unmarshaled.___amount_1;
}
IL2CPP_EXTERN_C void GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshal_com_back(const GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshaled_com& marshaled, GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A& unmarshaled)
{
	unmarshaled.___mineralName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___mineralName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mineralName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mineralName_0));
	int32_t unmarshaledamount_temp_1 = 0;
	unmarshaledamount_temp_1 = marshaled.___amount_1;
	unmarshaled.___amount_1 = unmarshaledamount_temp_1;
}
// Conversion method for clean up from marshalling of: GameplayMineral
IL2CPP_EXTERN_C void GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshal_com_cleanup(GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mineralName_0);
	marshaled.___mineralName_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameplayController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_Start_mF33E3CD87580144D525A6FCBB732F317661E7CDE (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB495B5BE416FE56440C4F7FE8923894CCC28E57C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___sfxAudioSource_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sfxAudioSource_22), (void*)L_1);
		// bgmAudioSource = GameObject.Find("Gameplay/BGM Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB495B5BE416FE56440C4F7FE8923894CCC28E57C, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_2, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___bgmAudioSource_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bgmAudioSource_23), (void*)L_3);
		// instance = this;
		((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// isPause = true;
		__this->___isPause_12 = (bool)1;
		// remainingTime = time;
		float L_4 = __this->___time_8;
		__this->___remainingTime_26 = L_4;
		// InitializeWeather();
		GameplayController_InitializeWeather_mB74E80A6D1AFAADA0DB61C36F1ED5FF3667A44B4(__this, NULL);
		// }
		return;
	}
}
// System.Void GameplayController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_Update_m3A7DA9CF71B4E6515A21C981711612A31D262949 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isPause)
		bool L_0 = __this->___isPause_12;
		if (L_0)
		{
			goto IL_007b;
		}
	}
	{
		// TimeTicking();
		GameplayController_TimeTicking_m5C92A9C3F50BF8C9818481CFF6101F75DD97E436(__this, NULL);
		// currentMineral = CalculateMineralPoint();
		float L_1;
		L_1 = GameplayController_CalculateMineralPoint_mF2131E2CAF0EBFB37C345670C232CB614F120E2A(__this, NULL);
		__this->___currentMineral_24 = L_1;
		// currentWater = (minerals[14].amount) * 5f;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_2 = __this->___minerals_17;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_3;
		L_3 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_2, ((int32_t)14), List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		int32_t L_4 = L_3.___amount_1;
		__this->___currentWater_25 = ((float)il2cpp_codegen_multiply(((float)L_4), (5.0f)));
		// if (currentMineral >= targetMineral && currentWater >= targetWater && remainingTime > 0)
		float L_5 = __this->___currentMineral_24;
		float L_6 = __this->___targetMineral_10;
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_0068;
		}
	}
	{
		float L_7 = __this->___currentWater_25;
		float L_8 = __this->___targetWater_11;
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			goto IL_0068;
		}
	}
	{
		float L_9 = __this->___remainingTime_26;
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		// Winning();
		GameplayController_Winning_mE8B083C8E425665DF9FB02628FFFF09F38A2481B(__this, NULL);
	}

IL_0068:
	{
		// if (remainingTime < 0)
		float L_10 = __this->___remainingTime_26;
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_007b;
		}
	}
	{
		// GameOver();
		GameplayController_GameOver_m49E2CFB4F42BFBDA20267D110F29D8053659145C(__this, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Single GameplayController::CalculateMineralPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameplayController_CalculateMineralPoint_mF2131E2CAF0EBFB37C345670C232CB614F120E2A (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float mineralPoint = 0;
		V_0 = (0.0f);
		// for(int i = 0 ; i < 14 ; i++){
		V_1 = 0;
		goto IL_0065;
	}

IL_000a:
	{
		// if(i < 3){
		int32_t L_0 = V_1;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_002b;
		}
	}
	{
		// mineralPoint += (minerals[i].amount * 5f);
		float L_1 = V_0;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_2 = __this->___minerals_17;
		int32_t L_3 = V_1;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_4;
		L_4 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_2, L_3, List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		int32_t L_5 = L_4.___amount_1;
		V_0 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)L_5), (5.0f)))));
		goto IL_0061;
	}

IL_002b:
	{
		// }else if(i < 6){
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) >= ((int32_t)6)))
		{
			goto IL_004c;
		}
	}
	{
		// mineralPoint += (minerals[i].amount * 3f);
		float L_7 = V_0;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_8 = __this->___minerals_17;
		int32_t L_9 = V_1;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_10;
		L_10 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_8, L_9, List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		int32_t L_11 = L_10.___amount_1;
		V_0 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(((float)L_11), (3.0f)))));
		goto IL_0061;
	}

IL_004c:
	{
		// mineralPoint += (minerals[i].amount);
		float L_12 = V_0;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_13 = __this->___minerals_17;
		int32_t L_14 = V_1;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_15;
		L_15 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_13, L_14, List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		int32_t L_16 = L_15.___amount_1;
		V_0 = ((float)il2cpp_codegen_add(L_12, ((float)L_16)));
	}

IL_0061:
	{
		// for(int i = 0 ; i < 14 ; i++){
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0065:
	{
		// for(int i = 0 ; i < 14 ; i++){
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)14))))
		{
			goto IL_000a;
		}
	}
	{
		// return mineralPoint;
		float L_19 = V_0;
		return L_19;
	}
}
// System.Void GameplayController::Winning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_Winning_mE8B083C8E425665DF9FB02628FFFF09F38A2481B (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// PlaySFX(sfxAudios[0]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___sfxAudios_20;
		int32_t L_1 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		GameplayController_PlaySFX_mBE3BFF826997F813849F2F39F82DF1D8C2206865(__this, L_2, NULL);
		// winning.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___winning_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// isPause = true;
		__this->___isPause_12 = (bool)1;
		// }
		return;
	}
}
// System.Void GameplayController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_GameOver_m49E2CFB4F42BFBDA20267D110F29D8053659145C (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// gameOver.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameOver_19;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// isPause = true;
		__this->___isPause_12 = (bool)1;
		// }
		return;
	}
}
// System.Void GameplayController::InitializeWeather()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_InitializeWeather_mB74E80A6D1AFAADA0DB61C36F1ED5FF3667A44B4 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (weather)
		int32_t L_0 = __this->___weather_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0120;
			}
			case 1:
			{
				goto IL_019f;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_021f;
			}
			case 4:
			{
				goto IL_0022;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		// moisture = Random.Range(0.25f, 0.45f);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.25f), (0.449999988f), NULL);
		__this->___moisture_6 = L_2;
		// temperature = Random.Range(18, 27);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)18), ((int32_t)27), NULL);
		__this->___temperature_7 = ((float)L_3);
		// mineralSpawner.spawnRateTime = 3f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_4 = __this->___mineralSpawner_13;
		L_4->___spawnRateTime_13 = (3.0f);
		// mineralSpawner.waterSpawnRateTime = 4f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_5 = __this->___mineralSpawner_13;
		L_5->___waterSpawnRateTime_14 = (4.0f);
		// mineralSpawner.mineralSpawnAmount = 7;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_6 = __this->___mineralSpawner_13;
		L_6->___mineralSpawnAmount_11 = 7;
		// mineralSpawner.waterSpawnAmount = 7;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_7 = __this->___mineralSpawner_13;
		L_7->___waterSpawnAmount_12 = 7;
		// bgmAudioSource.PlayOneShot(bgmAudios[0]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___bgmAudioSource_23;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_9 = __this->___bgmAudios_21;
		int32_t L_10 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_8, L_11, NULL);
		// weatherFX[0].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___weatherFX_16;
		int32_t L_13 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// break;
		return;
	}

IL_00a1:
	{
		// moisture = Random.Range(0.1f, 0.24f);
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.100000001f), (0.239999995f), NULL);
		__this->___moisture_6 = L_15;
		// temperature = Random.Range(28, 40);
		int32_t L_16;
		L_16 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)28), ((int32_t)40), NULL);
		__this->___temperature_7 = ((float)L_16);
		// mineralSpawner.spawnRateTime = 2f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_17 = __this->___mineralSpawner_13;
		L_17->___spawnRateTime_13 = (2.0f);
		// mineralSpawner.waterSpawnRateTime = 6f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_18 = __this->___mineralSpawner_13;
		L_18->___waterSpawnRateTime_14 = (6.0f);
		// mineralSpawner.mineralSpawnAmount = 7;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_19 = __this->___mineralSpawner_13;
		L_19->___mineralSpawnAmount_11 = 7;
		// mineralSpawner.waterSpawnAmount = 5;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_20 = __this->___mineralSpawner_13;
		L_20->___waterSpawnAmount_12 = 5;
		// bgmAudioSource.PlayOneShot(bgmAudios[0]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = __this->___bgmAudioSource_23;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_22 = __this->___bgmAudios_21;
		int32_t L_23 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_21, L_24, NULL);
		// weatherFX[0].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___weatherFX_16;
		int32_t L_26 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// break;
		return;
	}

IL_0120:
	{
		// moisture = Random.Range(0.35f, 0.65f);
		float L_28;
		L_28 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.349999994f), (0.649999976f), NULL);
		__this->___moisture_6 = L_28;
		// temperature = Random.Range(20, 25);
		int32_t L_29;
		L_29 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)20), ((int32_t)25), NULL);
		__this->___temperature_7 = ((float)L_29);
		// mineralSpawner.spawnRateTime = 4f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_30 = __this->___mineralSpawner_13;
		L_30->___spawnRateTime_13 = (4.0f);
		// mineralSpawner.waterSpawnRateTime = 3f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_31 = __this->___mineralSpawner_13;
		L_31->___waterSpawnRateTime_14 = (3.0f);
		// mineralSpawner.mineralSpawnAmount = 6;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_32 = __this->___mineralSpawner_13;
		L_32->___mineralSpawnAmount_11 = 6;
		// mineralSpawner.waterSpawnAmount = 8;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_33 = __this->___mineralSpawner_13;
		L_33->___waterSpawnAmount_12 = 8;
		// bgmAudioSource.PlayOneShot(bgmAudios[1]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_34 = __this->___bgmAudioSource_23;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_35 = __this->___bgmAudios_21;
		int32_t L_36 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_37 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_34, L_37, NULL);
		// weatherFX[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_38 = __this->___weatherFX_16;
		int32_t L_39 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)1, NULL);
		// break;
		return;
	}

IL_019f:
	{
		// moisture = Random.Range(0.5f, 0.85f);
		float L_41;
		L_41 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (0.850000024f), NULL);
		__this->___moisture_6 = L_41;
		// temperature = Random.Range(20, 25);
		int32_t L_42;
		L_42 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)20), ((int32_t)25), NULL);
		__this->___temperature_7 = ((float)L_42);
		// mineralSpawner.spawnRateTime = 5f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_43 = __this->___mineralSpawner_13;
		L_43->___spawnRateTime_13 = (5.0f);
		// mineralSpawner.waterSpawnRateTime = 2f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_44 = __this->___mineralSpawner_13;
		L_44->___waterSpawnRateTime_14 = (2.0f);
		// mineralSpawner.mineralSpawnAmount = 5;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_45 = __this->___mineralSpawner_13;
		L_45->___mineralSpawnAmount_11 = 5;
		// mineralSpawner.waterSpawnAmount = 9;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_46 = __this->___mineralSpawner_13;
		L_46->___waterSpawnAmount_12 = ((int32_t)9);
		// bgmAudioSource.PlayOneShot(bgmAudios[1]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_47 = __this->___bgmAudioSource_23;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_48 = __this->___bgmAudios_21;
		int32_t L_49 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_47, L_50, NULL);
		// weatherFX[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_51 = __this->___weatherFX_16;
		int32_t L_52 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)1, NULL);
		// break;
		return;
	}

IL_021f:
	{
		// moisture = Random.Range(0.05f, 0.15f);
		float L_54;
		L_54 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0500000007f), (0.150000006f), NULL);
		__this->___moisture_6 = L_54;
		// temperature = Random.Range(3, 15);
		int32_t L_55;
		L_55 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(3, ((int32_t)15), NULL);
		__this->___temperature_7 = ((float)L_55);
		// mineralSpawner.spawnRateTime = 4f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_56 = __this->___mineralSpawner_13;
		L_56->___spawnRateTime_13 = (4.0f);
		// mineralSpawner.waterSpawnRateTime = 5f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_57 = __this->___mineralSpawner_13;
		L_57->___waterSpawnRateTime_14 = (5.0f);
		// mineralSpawner.mineralSpawnAmount = 6;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_58 = __this->___mineralSpawner_13;
		L_58->___mineralSpawnAmount_11 = 6;
		// mineralSpawner.waterSpawnAmount = 6;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_59 = __this->___mineralSpawner_13;
		L_59->___waterSpawnAmount_12 = 6;
		// weatherFX[0].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_60 = __this->___weatherFX_16;
		int32_t L_61 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameplayController::InitializeWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_InitializeWeight_m34C1B1D957EC3516C07A3DE6E6120B9343CA1463 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (weather)
		int32_t L_0 = __this->___weather_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_008a;
			}
			case 4:
			{
				goto IL_0022;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		// InitializeMineralWeights(3, 2, 1);
		GameplayController_InitializeMineralWeights_m2AC1164E770A2E93C78D8D1F4883E369E2F39FC2(__this, 3, 2, 1, NULL);
		// mineralSpawner.waterSpawnRate = 0.6f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_2 = __this->___mineralSpawner_13;
		L_2->___waterSpawnRate_15 = (0.600000024f);
		// break;
		return;
	}

IL_003c:
	{
		// InitializeMineralWeights(3, 2, 3);
		GameplayController_InitializeMineralWeights_m2AC1164E770A2E93C78D8D1F4883E369E2F39FC2(__this, 3, 2, 3, NULL);
		// mineralSpawner.waterSpawnRate = 0.3f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_3 = __this->___mineralSpawner_13;
		L_3->___waterSpawnRate_15 = (0.300000012f);
		// break;
		return;
	}

IL_0056:
	{
		// InitializeMineralWeights(2, 2, 1);
		GameplayController_InitializeMineralWeights_m2AC1164E770A2E93C78D8D1F4883E369E2F39FC2(__this, 2, 2, 1, NULL);
		// mineralSpawner.waterSpawnRate = 0.75f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_4 = __this->___mineralSpawner_13;
		L_4->___waterSpawnRate_15 = (0.75f);
		// break;
		return;
	}

IL_0070:
	{
		// InitializeMineralWeights(2, 1, 1);
		GameplayController_InitializeMineralWeights_m2AC1164E770A2E93C78D8D1F4883E369E2F39FC2(__this, 2, 1, 1, NULL);
		// mineralSpawner.waterSpawnRate = 0.9f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_5 = __this->___mineralSpawner_13;
		L_5->___waterSpawnRate_15 = (0.899999976f);
		// break;
		return;
	}

IL_008a:
	{
		// InitializeMineralWeights(1, 1, 1);
		GameplayController_InitializeMineralWeights_m2AC1164E770A2E93C78D8D1F4883E369E2F39FC2(__this, 1, 1, 1, NULL);
		// mineralSpawner.waterSpawnRate = 0.3f;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_6 = __this->___mineralSpawner_13;
		L_6->___waterSpawnRate_15 = (0.300000012f);
		// }
		return;
	}
}
// System.Void GameplayController::InitializeMineralWeights(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_InitializeMineralWeights_m2AC1164E770A2E93C78D8D1F4883E369E2F39FC2 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, int32_t ___0_primaryWeight, int32_t ___1_secondaryWeight, int32_t ___2_microWeight, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < mineralSpawner.minerals.Length; i++)
		V_0 = 0;
		goto IL_0059;
	}

IL_0004:
	{
		// if (i < 3)
		int32_t L_0 = V_0;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		// mineralSpawner.minerals[i].weight = primaryWeight;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_1 = __this->___mineralSpawner_13;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_2 = L_1->___minerals_4;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_primaryWeight;
		((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___weight_1 = L_4;
		goto IL_0055;
	}

IL_0021:
	{
		// else if (i < 6)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)6)))
		{
			goto IL_003e;
		}
	}
	{
		// mineralSpawner.minerals[i].weight = secondaryWeight;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_6 = __this->___mineralSpawner_13;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_7 = L_6->___minerals_4;
		int32_t L_8 = V_0;
		int32_t L_9 = ___1_secondaryWeight;
		((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___weight_1 = L_9;
		goto IL_0055;
	}

IL_003e:
	{
		// mineralSpawner.minerals[i].weight = microWeight;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_10 = __this->___mineralSpawner_13;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_11 = L_10->___minerals_4;
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_microWeight;
		((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___weight_1 = L_13;
	}

IL_0055:
	{
		// for (int i = 0; i < mineralSpawner.minerals.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0059:
	{
		// for (int i = 0; i < mineralSpawner.minerals.Length; i++)
		int32_t L_15 = V_0;
		MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* L_16 = __this->___mineralSpawner_13;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_17 = L_16->___minerals_4;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameplayController::TimeTicking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_TimeTicking_m5C92A9C3F50BF8C9818481CFF6101F75DD97E436 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sky.GetComponent<Rigidbody2D>().velocity = new Vector2(0, (timeRate));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___sky_15;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_0, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		float L_2 = __this->___timeRate_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), L_2, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_1, L_3, NULL);
		// remainingTime -= Time.deltaTime;
		float L_4 = __this->___remainingTime_26;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___remainingTime_26 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// }
		return;
	}
}
// System.Void GameplayController::GetMineralTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_GetMineralTrigger_mF9113CFE54682DE4E0E5F7884CAC35480D215792 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// if(currentMineral < targetMineral){
		float L_0 = __this->___currentMineral_24;
		float L_1 = __this->___targetMineral_10;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// UI.SetMineralRotate();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_2 = __this->___UI_14;
		UIController_SetMineralRotate_m7F080FF16A64E929672B27769F23AB2A250D0E6F(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GameplayController::GetWaterTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_GetWaterTrigger_mE0327DB80759277FF82B2E3136AA80FB7B226F16 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// if(currentWater < targetWater){
		float L_0 = __this->___currentWater_25;
		float L_1 = __this->___targetWater_11;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// UI.SetWaterRotate();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_2 = __this->___UI_14;
		UIController_SetWaterRotate_mB833F96C73341FB08B6178443E9DFAFC33D2189E(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Single GameplayController::GetCurrentMineral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameplayController_GetCurrentMineral_m0A7FF6497FFD825309C1B157BA8DA117C4C7F9DD (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// return this.currentMineral;
		float L_0 = __this->___currentMineral_24;
		return L_0;
	}
}
// System.Single GameplayController::GetCurrentWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameplayController_GetCurrentWater_m460BF080CB650E31F08A674610601A59ED8FBE9D (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// return this.currentWater;
		float L_0 = __this->___currentWater_25;
		return L_0;
	}
}
// System.Single GameplayController::GetRemainingTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameplayController_GetRemainingTime_mE013B0C1A1018501A640627525A8A1BFF828FF6D (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// return this.remainingTime;
		float L_0 = __this->___remainingTime_26;
		return L_0;
	}
}
// System.Void GameplayController::AddMineral(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_AddMineral_mB38B658E9A194C64A393B19291E761505F00C86A (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, String_t* ___0_itemName, int32_t ___1_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < minerals.Count; i++)
		V_0 = 0;
		goto IL_0048;
	}

IL_0004:
	{
		// if (minerals[i].mineralName == itemName)
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_0 = __this->___minerals_17;
		int32_t L_1 = V_0;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_2;
		L_2 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_0, L_1, List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		String_t* L_3 = L_2.___mineralName_0;
		String_t* L_4 = ___0_itemName;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// GameplayMineral gameplayMineral = minerals[i];
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_6 = __this->___minerals_17;
		int32_t L_7 = V_0;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_8;
		L_8 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_6, L_7, List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		V_1 = L_8;
		// gameplayMineral.amount += amount;
		int32_t* L_9 = (&(&V_1)->___amount_1);
		int32_t* L_10 = L_9;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___1_amount;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, L_12));
		// minerals[i] = gameplayMineral;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_13 = __this->___minerals_17;
		int32_t L_14 = V_0;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_15 = V_1;
		List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660(L_13, L_14, L_15, List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660_RuntimeMethod_var);
		// break;
		return;
	}

IL_0044:
	{
		// for (int i = 0; i < minerals.Count; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		// for (int i = 0; i < minerals.Count; i++)
		int32_t L_17 = V_0;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_18 = __this->___minerals_17;
		int32_t L_19;
		L_19 = List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_inline(L_18, List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameplayController::ClearAllMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_ClearAllMinerals_m86CE1715FC7575826801C710C1079880BC02AB2D (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < minerals.Count; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// GameplayMineral gameplayMineral = minerals[i];
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_0 = __this->___minerals_17;
		int32_t L_1 = V_0;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_2;
		L_2 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_0, L_1, List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		V_1 = L_2;
		// gameplayMineral.amount = 0;
		(&V_1)->___amount_1 = 0;
		// minerals[i] = gameplayMineral;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_3 = __this->___minerals_17;
		int32_t L_4 = V_0;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_5 = V_1;
		List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660(L_3, L_4, L_5, List_1_set_Item_m6ADD6144B7FB77FEAC6C88F065FFD16074F3A660_RuntimeMethod_var);
		// for (int i = 0; i < minerals.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < minerals.Count; i++)
		int32_t L_7 = V_0;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_8 = __this->___minerals_17;
		int32_t L_9;
		L_9 = List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_inline(L_8, List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 GameplayController::GetMineralAmountOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameplayController_GetMineralAmountOf_mD3B80C7F00BFED2C3A98C4D5DFB84E2D358C1947 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, String_t* ___0_mineralName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < minerals.Count; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		// if (minerals[i].mineralName == mineralName)
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_0 = __this->___minerals_17;
		int32_t L_1 = V_0;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_2;
		L_2 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_0, L_1, List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		String_t* L_3 = L_2.___mineralName_0;
		String_t* L_4 = ___0_mineralName;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// return minerals[i].amount;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_6 = __this->___minerals_17;
		int32_t L_7 = V_0;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_8;
		L_8 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_6, L_7, List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		int32_t L_9 = L_8.___amount_1;
		return L_9;
	}

IL_002f:
	{
		// for (int i = 0; i < minerals.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < minerals.Count; i++)
		int32_t L_11 = V_0;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_12 = __this->___minerals_17;
		int32_t L_13;
		L_13 = List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_inline(L_12, List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_RuntimeMethod_var);
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
// System.Int32 GameplayController::GetMineralAmountOfIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameplayController_GetMineralAmountOfIndex_m7E4DA0FC2958F6901B5F70E99275209C4883CC55 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return minerals[index].amount;
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_0 = __this->___minerals_17;
		int32_t L_1 = ___0_index;
		GameplayMineral_tE9D65939FEAAF25C95EBEC56AD9597DB40A8526A L_2;
		L_2 = List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D(L_0, L_1, List_1_get_Item_m069B83DF8FC914B16D47BD0704C1385F817CC33D_RuntimeMethod_var);
		int32_t L_3 = L_2.___amount_1;
		return L_3;
	}
}
// System.Void GameplayController::PlaySFX(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_PlaySFX_mBE3BFF826997F813849F2F39F82DF1D8C2206865 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_sfx, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(sfx);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_sfx;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GameplayController::Replay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_Replay_mBB6D63743CE561BBB645CD8E3BF242FBDB720D80 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameplayController::NextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController_NextLevel_m0831A2296596C161E43A063AD063E2D251E24948 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void GameplayController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameplayController__ctor_m441511367D2E06F8D5E9FCBEAF6354DEDC6ACCE2 (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA4A766A208D3E0F115C8EF99CF37DB851337D158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float moisture, temperature, time = 150, timeRate = 5, targetMineral = 100f, targetWater = 100f;
		__this->___time_8 = (150.0f);
		// public float moisture, temperature, time = 150, timeRate = 5, targetMineral = 100f, targetWater = 100f;
		__this->___timeRate_9 = (5.0f);
		// public float moisture, temperature, time = 150, timeRate = 5, targetMineral = 100f, targetWater = 100f;
		__this->___targetMineral_10 = (100.0f);
		// public float moisture, temperature, time = 150, timeRate = 5, targetMineral = 100f, targetWater = 100f;
		__this->___targetWater_11 = (100.0f);
		// public bool isPause = true;
		__this->___isPause_12 = (bool)1;
		// [SerializeField] private List<GameplayMineral> minerals = new List<GameplayMineral>();
		List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* L_0 = (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028*)il2cpp_codegen_object_new(List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028_il2cpp_TypeInfo_var);
		List_1__ctor_mA4A766A208D3E0F115C8EF99CF37DB851337D158(L_0, List_1__ctor_mA4A766A208D3E0F115C8EF99CF37DB851337D158_RuntimeMethod_var);
		__this->___minerals_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minerals_17), (void*)L_0);
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
// System.Void GroundChecker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundChecker_Start_mAF2650CFBE9716B7A3FDDDE046CD4A48CE974B68 (GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GroundChecker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundChecker_Update_mB2E05CAD57FAD0FDD73956C4A4B85E3C37BFEF28 (GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6* __this, const RuntimeMethod* method) 
{
	{
		// isGround = CheckGround();
		bool L_0;
		L_0 = GroundChecker_CheckGround_m354340F9411E1AAD2EFF4ABE40D3D7CBF08F22B7(__this, NULL);
		__this->___isGround_5 = L_0;
		// }
		return;
	}
}
// System.Boolean GroundChecker::CheckGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroundChecker_CheckGround_m354340F9411E1AAD2EFF4ABE40D3D7CBF08F22B7 (GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, 0.3f, groundLayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___groundLayer_4;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_5;
		L_5 = Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9(L_2, (0.300000012f), L_4, NULL);
		// if (colliders.Length > 0)
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			goto IL_002a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void GroundChecker::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundChecker_OnCollisionEnter2D_m3A3D8412C0A8C0AFCBA745006A0AA5863D31FC81 (GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.collider.CompareTag("Player")){
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// this.gameObject.transform.parent.GetComponent<PlayerController>().Jump();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(L_5, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908(L_6, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void GroundChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundChecker__ctor_m90E830A853321EC217C5C3D522A92D2E9EC5D4F1 (GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6* __this, const RuntimeMethod* method) 
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
// System.Void InventoryUIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUIController_Start_m4C9D104A39AC5EE6AEFF6ED718BDE0F3342B2E71 (InventoryUIController_t0083D0A833B85EC0C25F6BEC30AD5E2A3289A4DD* __this, const RuntimeMethod* method) 
{
	{
		// InitializeInventoryUI();
		InventoryUIController_InitializeInventoryUI_mFCB158024BFB8859B484A0639ECE3392CE6891A0(__this, NULL);
		// }
		return;
	}
}
// System.Void InventoryUIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUIController_Update_m71B9155561558241219CFC7109D1D3F94711D62B (InventoryUIController_t0083D0A833B85EC0C25F6BEC30AD5E2A3289A4DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!GameplayController.instance.isPause){
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPause_12;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// UpdateInventoryUI();
		InventoryUIController_UpdateInventoryUI_mBBAFD213D1FA4C78D617AC27FB0A82924A852A6F(__this, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void InventoryUIController::InitializeInventoryUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUIController_InitializeInventoryUI_mFCB158024BFB8859B484A0639ECE3392CE6891A0 (InventoryUIController_t0083D0A833B85EC0C25F6BEC30AD5E2A3289A4DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerNumber_tC19AD064EA9846735076B752ED038FFB804F4650_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD2FA13E89A7323125661F38211D4E7F334E0C5E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// playerNumberText.text = "Player " + player.playerNumber;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___playerNumberText_6;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___player_5;
		int32_t* L_2 = (&L_1->___playerNumber_7);
		Il2CppFakeBox<int32_t> L_3(PlayerNumber_tC19AD064EA9846735076B752ED038FFB804F4650_il2cpp_TypeInfo_var, L_2);
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFD2FA13E89A7323125661F38211D4E7F334E0C5E, L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// for (int i = 0; i < inventoryPanel.childCount; i++)
		V_0 = 0;
		goto IL_0050;
	}

IL_002f:
	{
		// inventoryPanel.GetChild(i).GetChild(0).gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___inventoryPanel_4;
		int32_t L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// for (int i = 0; i < inventoryPanel.childCount; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0050:
	{
		// for (int i = 0; i < inventoryPanel.childCount; i++)
		int32_t L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___inventoryPanel_4;
		int32_t L_14;
		L_14 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_13, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_002f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InventoryUIController::UpdateInventoryUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUIController_UpdateInventoryUI_mBBAFD213D1FA4C78D617AC27FB0A82924A852A6F (InventoryUIController_t0083D0A833B85EC0C25F6BEC30AD5E2A3289A4DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_3 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_4 = NULL;
	{
		// List<Sprite> heldMinerals = player.inventory.heldMinerals;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = __this->___player_5;
		InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* L_1 = L_0->___inventory_8;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_2 = L_1->___heldMinerals_5;
		V_0 = L_2;
		// int i = 0;
		V_1 = 0;
		// if (heldMinerals.Count > 0)
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_3 = V_0;
		int32_t L_4;
		L_4 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_3, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		// foreach(Sprite mineral in heldMinerals)
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_5 = V_0;
		Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 L_6;
		L_6 = List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3(L_5, List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3_RuntimeMethod_var);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C((&V_2), Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0074_1;
			}

IL_0025_1:
			{
				// foreach(Sprite mineral in heldMinerals)
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7;
				L_7 = Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_inline((&V_2), Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_RuntimeMethod_var);
				V_3 = L_7;
				// Image item = inventoryPanel.GetChild(i).GetChild(0).gameObject.GetComponent<Image>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___inventoryPanel_4;
				int32_t L_9 = V_1;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
				L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, L_9, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, 0, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
				L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
				V_4 = L_13;
				// if (!item.gameObject.activeSelf)
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = V_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
				L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
				bool L_16;
				L_16 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_15, NULL);
				if (L_16)
				{
					goto IL_0070_1;
				}
			}
			{
				// item.sprite = mineral;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = V_4;
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = V_3;
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_17, L_18, NULL);
				// item.gameObject.SetActive(true);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = V_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
				L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
				goto IL_0074_1;
			}

IL_0070_1:
			{
				// i++;
				int32_t L_21 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
			}

IL_0074_1:
			{
				// foreach(Sprite mineral in heldMinerals)
				bool L_22;
				L_22 = Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A((&V_2), Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// InitializeInventoryUI();
		InventoryUIController_InitializeInventoryUI_mFCB158024BFB8859B484A0639ECE3392CE6891A0(__this, NULL);
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void InventoryUIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryUIController__ctor_m261BD4567D501C8DD501D41051D234974F56C464 (InventoryUIController_t0083D0A833B85EC0C25F6BEC30AD5E2A3289A4DD* __this, const RuntimeMethod* method) 
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral243E3CFCEFA0E9775A9DF5CA57CB1F0DD9FD1D6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69D1B73433FB13CC97A119FCFFB9E69B47556858);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sfxAudioSource = GameObject.Find("SFX Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral243E3CFCEFA0E9775A9DF5CA57CB1F0DD9FD1D6C, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___sfxAudioSource_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sfxAudioSource_13), (void*)L_1);
		// bgmAudioSource = GameObject.Find("BGM Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral69D1B73433FB13CC97A119FCFFB9E69B47556858, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_2, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___bgmAudioSource_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bgmAudioSource_12), (void*)L_3);
		// PhloemPlayer.text = "P1";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___PhloemPlayer_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		// XylemPlayer.text = "P2";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___XylemPlayer_7;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		// bgmAudioSource.PlayOneShot(bgmAudio);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___bgmAudioSource_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = __this->___bgmAudio_11;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Update_m664984862D794DB3E17B79AFC35D12A9ED961B5D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Menu::SelectCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_SelectCharacter_m41D571AC87A3733567F1BEC39D7A4884D25AC307 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(sfxAudios[0]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_13;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___sfxAudios_10;
		int32_t L_2 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_3, NULL);
		// selectDirector.Play();
		PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* L_4 = __this->___selectDirector_5;
		PlayableDirector_Play_m937BA3BFAA11918A42D9D7874C0668DDD4B40988(L_4, NULL);
		// }
		return;
	}
}
// System.Void Menu::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Exit_mB3A4039FE6F2C3691206AA64A7962965187E26BD (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(sfxAudios[0]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_13;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___sfxAudios_10;
		int32_t L_2 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_3, NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Menu::SwitchCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_SwitchCharacter_m9021C222A7B3803450D949D00E0D47031325E39C (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_1 = NULL;
	{
		// sfxAudioSource.PlayOneShot(sfxAudios[0]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_13;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___sfxAudios_10;
		int32_t L_2 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_3, NULL);
		// string temp = PhloemPlayer.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___PhloemPlayer_6;
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		V_0 = L_5;
		// PhloemPlayer.text = XylemPlayer.text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___PhloemPlayer_6;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___XylemPlayer_7;
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// XylemPlayer.text = temp;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___XylemPlayer_7;
		String_t* L_10 = V_0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
		// Sprite tmp = P1Border.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___P1Border_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12;
		L_12 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_11, NULL);
		V_1 = L_12;
		// P1Border.sprite = P2Border.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___P1Border_8;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___P2Border_9;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15;
		L_15 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_14, NULL);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_13, L_15, NULL);
		// P2Border.sprite = tmp;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___P2Border_9;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = V_1;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void Menu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_PlayGame_mB3BBBB5BF9F14D79F02AE8CEE052CC1F7B2858E4 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FCC38344659B579DB77F290A5AC05655C9B6C77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929A23A2983F97CC7B26736DA8B306344BF825B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	String_t* G_B6_1 = NULL;
	{
		// sfxAudioSource.PlayOneShot(sfxAudios[1]);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_13;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___sfxAudios_10;
		int32_t L_2 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_3, NULL);
		// PlayerPrefs.SetInt("phloemPlayer",PhloemPlayer.text == "P1" ? 1 : 2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___PhloemPlayer_6;
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, NULL);
		G_B1_0 = _stringLiteral0FCC38344659B579DB77F290A5AC05655C9B6C77;
		if (L_6)
		{
			G_B2_0 = _stringLiteral0FCC38344659B579DB77F290A5AC05655C9B6C77;
			goto IL_0032;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_0032:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(G_B3_1, G_B3_0, NULL);
		// PlayerPrefs.SetInt("xylemPlayer",XylemPlayer.text == "P1" ? 1 : 2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___XylemPlayer_7;
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, NULL);
		G_B4_0 = _stringLiteral929A23A2983F97CC7B26736DA8B306344BF825B2;
		if (L_9)
		{
			G_B5_0 = _stringLiteral929A23A2983F97CC7B26736DA8B306344BF825B2;
			goto IL_0057;
		}
	}
	{
		G_B6_0 = 2;
		G_B6_1 = G_B4_0;
		goto IL_0058;
	}

IL_0057:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0058:
	{
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(G_B6_1, G_B6_0, NULL);
		// transition.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___transition_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
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
// System.Void MineralController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralController_Start_m029BDAFDAAA4AFCC00761FCC95B80F2E1FA882D5 (MineralController_tF0597B48F747285166A4E5E682B72FF8444BA5BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_0);
		// rb.velocity = new Vector2(Mathf.Sign(Random.Range(-1f, 1f)) * speed, Mathf.Sign(Random.Range(-1f, 1f)) * speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rb_7;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		float L_3;
		L_3 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_2, NULL);
		float L_4 = __this->___speed_4;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-1.0f), (1.0f), NULL);
		float L_6;
		L_6 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_5, NULL);
		float L_7 = __this->___speed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_3, L_4)), ((float)il2cpp_codegen_multiply(L_6, L_7)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_1, L_8, NULL);
		// currentDir = rb.velocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___rb_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_9, NULL);
		__this->___currentDir_8 = L_10;
		// cooldown = duration;
		float L_11 = __this->___duration_5;
		__this->___cooldown_6 = L_11;
		// }
		return;
	}
}
// System.Void MineralController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralController_Update_mACC233E5319A0DC7CEF2571FF18F1B353062F02B (MineralController_tF0597B48F747285166A4E5E682B72FF8444BA5BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameplayController.instance.isPause)
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPause_12;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		// if (cooldown > 0)
		float L_2 = __this->___cooldown_6;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// cooldown -= Time.deltaTime;
		float L_3 = __this->___cooldown_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___cooldown_6 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		return;
	}

IL_002c:
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void MineralController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralController_OnCollisionEnter2D_m1F4E5EADFFE579660D2E9B925EE1E4D41A242921 (MineralController_tF0597B48F747285166A4E5E682B72FF8444BA5BE* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.collider.CompareTag("Player") || other.collider.CompareTag("Foot"))
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_3 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4;
		L_4 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_3, NULL);
		bool L_5;
		L_5 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_4, _stringLiteral42838CCDE46EC9A55A8E5BD30B13C5339AEE7E5F, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}

IL_0024:
	{
		// Physics2D.IgnoreCollision(other.collider.GetComponent<Collider2D>(), GetComponent<Collider2D>());
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_6 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7;
		L_7 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_6, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8;
		L_8 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(L_7, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_9;
		L_9 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Physics2D_IgnoreCollision_mFE023CDD902A5068236266648DAB8E9FD8EE387F(L_8, L_9, NULL);
		return;
	}

IL_003b:
	{
		// newDir = Vector2.Reflect(currentDir, other.contacts[0].normal);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___currentDir_8;
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_11 = ___0_other;
		ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* L_12;
		L_12 = Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21(((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_Reflect_m8EDA5309E17DC341CB13DDD7D59EBF73EAB7797F_inline(L_10, L_13, NULL);
		__this->___newDir_9 = L_14;
		// rb.velocity = newDir;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15 = __this->___rb_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___newDir_9;
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_15, L_16, NULL);
		// currentDir = rb.velocity;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_17 = __this->___rb_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_17, NULL);
		__this->___currentDir_8 = L_18;
		// Physics2D.IgnoreCollision(other.collider.GetComponent<Collider2D>(), GetComponent<Collider2D>(), false);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_19 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_20;
		L_20 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_19, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_21;
		L_21 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(L_20, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_22;
		L_22 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Physics2D_IgnoreCollision_mA05835421D23AACF69E76082124F4F983B9E2BDD(L_21, L_22, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MineralController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralController_OnTriggerEnter2D_mDEE22217D54D99B55F623BF2AE07D253BAA55CB8 (MineralController_tF0597B48F747285166A4E5E682B72FF8444BA5BE* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_other;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_00e4;
		}
	}
	{
		// if (other.GetComponent<PlayerController>().inventory.heldMinerals.Count < 6)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2 = ___0_other;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3;
		L_3 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(L_2, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* L_4 = L_3->___inventory_8;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_5 = L_4->___heldMinerals_5;
		int32_t L_6;
		L_6 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_5, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if ((((int32_t)L_6) >= ((int32_t)6)))
		{
			goto IL_00e4;
		}
	}
	{
		// if (other.gameObject.name == "Phloem" && this.gameObject.layer == 6)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15, NULL);
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_12;
		L_12 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)6))))
		{
			goto IL_0083;
		}
	}
	{
		// other.GetComponent<PlayerController>().inventory.AddItem(this.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13 = ___0_other;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_14;
		L_14 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(L_13, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* L_15 = L_14->___inventory_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		InventorySO_AddItem_m7314D73C0FB0812165DC9FA49AC1B2DF63081C61(L_15, L_16, NULL);
		// other.GetComponent<PlayerController>().AddItem(this.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_17 = ___0_other;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_18;
		L_18 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(L_17, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		PlayerController_AddItem_mAD8D92ADAE285E1517DEE21C3AB8AD35189709E4(L_18, L_19, NULL);
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
	}

IL_0083:
	{
		// if (other.gameObject.name == "Xylem" && this.gameObject.tag == "Water")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_21 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		String_t* L_23;
		L_23 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_22, NULL);
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E, NULL);
		if (!L_24)
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_26;
		L_26 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_25, NULL);
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6, NULL);
		if (!L_27)
		{
			goto IL_00e4;
		}
	}
	{
		// other.GetComponent<PlayerController>().inventory.AddItem(this.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_28 = ___0_other;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_29;
		L_29 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(L_28, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* L_30 = L_29->___inventory_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		InventorySO_AddItem_m7314D73C0FB0812165DC9FA49AC1B2DF63081C61(L_30, L_31, NULL);
		// other.GetComponent<PlayerController>().AddItem(this.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_32 = ___0_other;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_33;
		L_33 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(L_32, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		PlayerController_AddItem_mAD8D92ADAE285E1517DEE21C3AB8AD35189709E4(L_33, L_34, NULL);
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void MineralController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralController__ctor_m677F0FDA1897A849264C644A131B982052175BEA (MineralController_tF0597B48F747285166A4E5E682B72FF8444BA5BE* __this, const RuntimeMethod* method) 
{
	{
		// public float duration = 30;
		__this->___duration_5 = (30.0f);
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
// Conversion methods for marshalling of: Mineral
IL2CPP_EXTERN_C void Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshal_pinvoke(const Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700& unmarshaled, Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mineral_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mineral' of type 'Mineral': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mineral_0Exception, NULL);
}
IL2CPP_EXTERN_C void Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshal_pinvoke_back(const Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshaled_pinvoke& marshaled, Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700& unmarshaled)
{
	Exception_t* ___mineral_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mineral' of type 'Mineral': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mineral_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mineral
IL2CPP_EXTERN_C void Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshal_pinvoke_cleanup(Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mineral
IL2CPP_EXTERN_C void Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshal_com(const Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700& unmarshaled, Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshaled_com& marshaled)
{
	Exception_t* ___mineral_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mineral' of type 'Mineral': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mineral_0Exception, NULL);
}
IL2CPP_EXTERN_C void Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshal_com_back(const Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshaled_com& marshaled, Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700& unmarshaled)
{
	Exception_t* ___mineral_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mineral' of type 'Mineral': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mineral_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mineral
IL2CPP_EXTERN_C void Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshal_com_cleanup(Mineral_tAF4471AE4B3C75C0B0DD992283F5F2B19ABEB700_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MineralSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralSpawner_Start_mAFAD3A92FF5DE8E6B425A60232BA5CB69A745928 (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MineralSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralSpawner_Update_m9515C68AF57BC6FEFF0E9908371FB89F1C9A7D2E (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameplayController.instance.isPause)
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPause_12;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// SpawnRandomMineral();
		MineralSpawner_SpawnRandomMineral_m3D3FC9449EE4D2EA3FC3182892FE01F3A0A25F71(__this, NULL);
		// SpawnWater();
		MineralSpawner_SpawnWater_mDFE3A586D39FE858B4DAB691DA33613DD3C1F4EB(__this, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void MineralSpawner::SpawnWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralSpawner_SpawnWater_mDFE3A586D39FE858B4DAB691DA33613DD3C1F4EB (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) 
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
		// if (waterCooldown > 0)
		float L_0 = __this->___waterCooldown_17;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// waterCooldown -= Time.deltaTime;
		float L_1 = __this->___waterCooldown_17;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___waterCooldown_17 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		return;
	}

IL_0020:
	{
		// if (UnityEngine.Random.Range(0f, 1f) < waterSpawnRate)
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		float L_4 = __this->___waterSpawnRate_15;
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_0064;
		}
	}
	{
		// for (int i = 0; i < waterSpawnAmount; i++)
		V_0 = 0;
		goto IL_005b;
	}

IL_003b:
	{
		// Instantiate(water, RandomSpawnPosition(), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___water_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = MineralSpawner_RandomSpawnPosition_m0B893E6F205778F159EC5C333C6EBA3FE6DC685C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// for (int i = 0; i < waterSpawnAmount; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < waterSpawnAmount; i++)
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___waterSpawnAmount_12;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003b;
		}
	}

IL_0064:
	{
		// waterCooldown = waterSpawnRateTime;
		float L_13 = __this->___waterSpawnRateTime_14;
		__this->___waterCooldown_17 = L_13;
		// }
		return;
	}
}
// System.Void MineralSpawner::SpawnRandomMineral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralSpawner_SpawnRandomMineral_m3D3FC9449EE4D2EA3FC3182892FE01F3A0A25F71 (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) 
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
		// if (spawnCooldown > 0)
		float L_0 = __this->___spawnCooldown_16;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// spawnCooldown -= Time.deltaTime;
		float L_1 = __this->___spawnCooldown_16;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___spawnCooldown_16 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		return;
	}

IL_0020:
	{
		// for (int i = 0; i < mineralSpawnAmount; i++)
		V_0 = 0;
		goto IL_0044;
	}

IL_0024:
	{
		// GameObject mineral = Instantiate(GetRandomMineral(), RandomSpawnPosition(), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = MineralSpawner_GetRandomMineral_m496FEA89EBBF333D378393AEDD5294DF98BA03F6(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = MineralSpawner_RandomSpawnPosition_m0B893E6F205778F159EC5C333C6EBA3FE6DC685C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// for (int i = 0; i < mineralSpawnAmount; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0044:
	{
		// for (int i = 0; i < mineralSpawnAmount; i++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___mineralSpawnAmount_11;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0024;
		}
	}
	{
		// spawnCooldown = spawnRateTime;
		float L_11 = __this->___spawnRateTime_13;
		__this->___spawnCooldown_16 = L_11;
		// }
		return;
	}
}
// UnityEngine.Vector2 MineralSpawner::RandomSpawnPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MineralSpawner_RandomSpawnPosition_m0B893E6F205778F159EC5C333C6EBA3FE6DC685C (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector2(UnityEngine.Random.Range(left.position.x, right.position.x), UnityEngine.Random.Range(top.position.y, bottom.position.y));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___left_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___right_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_2, L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___top_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___bottom_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_9, L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), L_6, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Int32 MineralSpawner::GetRandomWeightedIndex(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MineralSpawner_GetRandomWeightedIndex_m555ECFAC0CA24C58394CE4D747763E184B41AFEB (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_weights, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int weightSum = 0;
		V_0 = 0;
		// for (int i = 0; i < weights.Length; i++)
		V_3 = 0;
		goto IL_0010;
	}

IL_0006:
	{
		// weightSum += weights[i];
		int32_t L_0 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_weights;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_4));
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_5 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0010:
	{
		// for (int i = 0; i < weights.Length; i++)
		int32_t L_6 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___0_weights;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// int index = 0;
		V_1 = 0;
		// int lastIndex = weights.Length - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_weights;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1));
		goto IL_0038;
	}

IL_0020:
	{
		// if (UnityEngine.Random.Range(0, weightSum) < weights[index])
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_weights;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) >= ((int32_t)L_14)))
		{
			goto IL_002e;
		}
	}
	{
		// return index;
		int32_t L_15 = V_1;
		return L_15;
	}

IL_002e:
	{
		// weightSum -= weights[index++];
		int32_t L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___0_weights;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = L_19;
		int32_t L_21 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, L_21));
	}

IL_0038:
	{
		// while (index < lastIndex)
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0020;
		}
	}
	{
		// return index;
		int32_t L_24 = V_1;
		return L_24;
	}
}
// UnityEngine.GameObject MineralSpawner::GetRandomMineral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* MineralSpawner_GetRandomMineral_m496FEA89EBBF333D378393AEDD5294DF98BA03F6 (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// int[] weights = new int[minerals.Length];
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_0 = __this->___minerals_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for (int i = 0; i < minerals.Length; i++)
		V_1 = 0;
		goto IL_002a;
	}

IL_0012:
	{
		// weights[i] = minerals[i].weight;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_4 = __this->___minerals_4;
		int32_t L_5 = V_1;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___weight_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_6);
		// for (int i = 0; i < minerals.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < minerals.Length; i++)
		int32_t L_8 = V_1;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_9 = __this->___minerals_4;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// return minerals[GetRandomWeightedIndex(weights)].mineral;
		MineralU5BU5D_t3452B7CF4E070169D23B5BA9A005C1712E5E9F5E* L_10 = __this->___minerals_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12;
		L_12 = MineralSpawner_GetRandomWeightedIndex_m555ECFAC0CA24C58394CE4D747763E184B41AFEB(__this, L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___mineral_0;
		return L_13;
	}
}
// System.Void MineralSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MineralSpawner__ctor_mFEFDC2D01EAE20FF867792F3E4633AA1F67F82F1 (MineralSpawner_t0334ACFEFD4161FC9F53820C6FD34BEA8B82C516* __this, const RuntimeMethod* method) 
{
	{
		// public int mineralSpawnAmount = 1, waterSpawnAmount = 1;
		__this->___mineralSpawnAmount_11 = 1;
		// public int mineralSpawnAmount = 1, waterSpawnAmount = 1;
		__this->___waterSpawnAmount_12 = 1;
		// public float spawnRateTime = 2f, waterSpawnRateTime = 2f, waterSpawnRate = 0.7f;
		__this->___spawnRateTime_13 = (2.0f);
		// public float spawnRateTime = 2f, waterSpawnRateTime = 2f, waterSpawnRate = 0.7f;
		__this->___waterSpawnRateTime_14 = (2.0f);
		// public float spawnRateTime = 2f, waterSpawnRateTime = 2f, waterSpawnRate = 0.7f;
		__this->___waterSpawnRate_15 = (0.699999988f);
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
// System.Void InventorySO::AddItem(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySO_AddItem_m7314D73C0FB0812165DC9FA49AC1B2DF63081C61 (InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heldMinerals.Add(item.GetComponent<SpriteRenderer>().sprite);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->___heldMinerals_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_item;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_1, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_2, NULL);
		List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_inline(L_0, L_3, List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void InventorySO::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySO_Clear_m330B01782C902EAFB520D471E8AA31549B54405F (InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heldMinerals.Clear();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->___heldMinerals_5;
		List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_inline(L_0, List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void InventorySO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySO__ctor_m0B6B237F06652D4616FEB75F6EC608C1A3795EB5 (InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FCC38344659B579DB77F290A5AC05655C9B6C77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929A23A2983F97CC7B26736DA8B306344BF825B2);
		s_Il2CppMethodInitialized = true;
	}
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B3_0 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B4_1 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B8_0 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B9_1 = NULL;
	{
		// if(this.gameObject.name == "Phloem"){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// playerNumber = (PlayerPrefs.GetInt("phloemPlayer") == 1 ? PlayerNumber.P1 : PlayerNumber.P2);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral0FCC38344659B579DB77F290A5AC05655C9B6C77, NULL);
		G_B2_0 = __this;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B3_0 = __this;
			goto IL_0028;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0029:
	{
		G_B4_1->___playerNumber_7 = G_B4_0;
		return;
	}

IL_002f:
	{
		// }else if(this.gameObject.name == "Xylem"){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E, NULL);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		// playerNumber = (PlayerPrefs.GetInt("xylemPlayer") == 1? PlayerNumber.P1 : PlayerNumber.P2);
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral929A23A2983F97CC7B26736DA8B306344BF825B2, NULL);
		G_B7_0 = __this;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			G_B8_0 = __this;
			goto IL_0057;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_0058;
	}

IL_0057:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0058:
	{
		G_B9_1->___playerNumber_7 = G_B9_0;
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDepot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED_m350B5EF60BE7564D991FD491A64F79323C96FC4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DED5DBB9EE7AE2C8F184A83F0A703726562B56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializePlayer();
		PlayerController_InitializePlayer_m80756620BB95EB91B32AC37C8F0BF5134047D9B8(__this, NULL);
		// dashCooldown = 0f;
		__this->___dashCooldown_16 = (0.0f);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_25), (void*)L_0);
		// depot = GameObject.FindGameObjectWithTag("Depot").GetComponent<Depot>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral88DED5DBB9EE7AE2C8F184A83F0A703726562B56, NULL);
		Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* L_2;
		L_2 = GameObject_GetComponent_TisDepot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED_m350B5EF60BE7564D991FD491A64F79323C96FC4F(L_1, GameObject_GetComponent_TisDepot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED_m350B5EF60BE7564D991FD491A64F79323C96FC4F_RuntimeMethod_var);
		__this->___depot_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depot_26), (void*)L_2);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_27 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_27), (void*)L_3);
		// sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_4, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___sfxAudioSource_29 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sfxAudioSource_29), (void*)L_5);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BD6121B8BC41E22F650391372E1EAAFC707E5B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA80ECAB0397BA68ECDAA93F5789072C0AC4DACB);
		s_Il2CppMethodInitialized = true;
	}
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B3_0 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* G_B4_1 = NULL;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B10_0 = NULL;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B9_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* G_B11_1 = NULL;
	{
		// if (!GameplayController.instance.isPause)
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPause_12;
		if (L_1)
		{
			goto IL_015a;
		}
	}
	{
		// MovementInput();
		PlayerController_MovementInput_mF6229A4B5AC0913A081545C9120B0C76101B0FE9(__this, NULL);
		// movement = new Vector2(speed * input, rb.velocity.y);
		float L_2 = __this->___speed_4;
		float L_3 = __this->___input_14;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_4, NULL);
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((float)il2cpp_codegen_multiply(L_2, L_3)), L_6, /*hidden argument*/NULL);
		__this->___movement_23 = L_7;
		// isIdle = (movement.magnitude > 0 ? false : true);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___movement_23);
		float L_9;
		L_9 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_8, NULL);
		G_B2_0 = __this;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			G_B3_0 = __this;
			goto IL_0053;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0054;
	}

IL_0053:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0054:
	{
		G_B4_1->___isIdle_11 = (bool)G_B4_0;
		// if (!isIdle)
		bool L_10 = __this->___isIdle_11;
		if (L_10)
		{
			goto IL_006d;
		}
	}
	{
		// lastMovement = movement;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___movement_23;
		__this->___lastMovement_24 = L_11;
	}

IL_006d:
	{
		// if (isDash)
		bool L_12 = __this->___isDash_10;
		if (!L_12)
		{
			goto IL_010c;
		}
	}
	{
		// if (dashTime > 0)
		float L_13 = __this->___dashTime_15;
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_00e7;
		}
	}
	{
		// dashTime -= Time.deltaTime;
		float L_14 = __this->___dashTime_15;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___dashTime_15 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// rb.AddForce(lastMovement.x > 0 ? Vector2.right * 30f : Vector2.left * 30f);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_16 = __this->___rb_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___lastMovement_24);
		float L_18 = L_17->___x_0;
		G_B9_0 = L_16;
		if ((((float)L_18) > ((float)(0.0f))))
		{
			G_B10_0 = L_16;
			goto IL_00c0;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_19, (30.0f), NULL);
		G_B11_0 = L_20;
		G_B11_1 = G_B9_0;
		goto IL_00cf;
	}

IL_00c0:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_21, (30.0f), NULL);
		G_B11_0 = L_22;
		G_B11_1 = G_B10_0;
	}

IL_00cf:
	{
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(G_B11_1, G_B11_0, NULL);
		// animator.SetBool("isDash",true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_27;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_23, _stringLiteral1BD6121B8BC41E22F650391372E1EAAFC707E5B6, (bool)1, NULL);
		goto IL_011e;
	}

IL_00e7:
	{
		// isDash = false;
		__this->___isDash_10 = (bool)0;
		// dashTime = 0.3f;
		__this->___dashTime_15 = (0.300000012f);
		// animator.SetBool("isDash",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_27;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_24, _stringLiteral1BD6121B8BC41E22F650391372E1EAAFC707E5B6, (bool)0, NULL);
		goto IL_011e;
	}

IL_010c:
	{
		// dashCooldown -= Time.deltaTime;
		float L_25 = __this->___dashCooldown_16;
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___dashCooldown_16 = ((float)il2cpp_codegen_subtract(L_25, L_26));
	}

IL_011e:
	{
		// animator.SetFloat("Speed",movement.magnitude);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->___movement_23);
		float L_29;
		L_29 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_28, NULL);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_27, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_29, NULL);
		// animator.SetBool("isGround",groundChecker.isGround);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___animator_27;
		GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6* L_31 = __this->___groundChecker_31;
		bool L_32 = L_31->___isGround_5;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_30, _stringLiteralAA80ECAB0397BA68ECDAA93F5789072C0AC4DACB, L_32, NULL);
		// Flip();
		PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E(__this, NULL);
	}

IL_015a:
	{
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m6D906D8B13844542B81CC49BA19760F747CEC8C0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameplayController.instance.isPause)
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPause_12;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// rb.velocity = movement;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___movement_23;
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_2, L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PlayerController::InitializePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_InitializePlayer_m80756620BB95EB91B32AC37C8F0BF5134047D9B8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (playerNumber)
		int32_t L_0 = __this->___playerNumber_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0084;
	}

IL_0010:
	{
		// leftKey = KeyCode.A;
		__this->___leftKey_17 = ((int32_t)97);
		// rightKey = KeyCode.D;
		__this->___rightKey_18 = ((int32_t)100);
		// jumpKey = KeyCode.W;
		__this->___jumpKey_19 = ((int32_t)119);
		// absorbKey = KeyCode.Q;
		__this->___absorbKey_20 = ((int32_t)113);
		// dashKey = KeyCode.LeftShift;
		__this->___dashKey_21 = ((int32_t)304);
		// interactKey = KeyCode.E;
		__this->___interactKey_22 = ((int32_t)101);
		// break;
		goto IL_0084;
	}

IL_0045:
	{
		// leftKey = KeyCode.LeftArrow;
		__this->___leftKey_17 = ((int32_t)276);
		// rightKey = KeyCode.RightArrow;
		__this->___rightKey_18 = ((int32_t)275);
		// jumpKey = KeyCode.UpArrow;
		__this->___jumpKey_19 = ((int32_t)273);
		// absorbKey = KeyCode.RightControl;
		__this->___absorbKey_20 = ((int32_t)305);
		// dashKey = KeyCode.RightShift;
		__this->___dashKey_21 = ((int32_t)303);
		// interactKey = KeyCode.Slash;
		__this->___interactKey_22 = ((int32_t)47);
	}

IL_0084:
	{
		// inventory.Clear();
		InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* L_3 = __this->___inventory_8;
		InventorySO_Clear_m330B01782C902EAFB520D471E8AA31549B54405F(L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::MovementInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MovementInput_mF6229A4B5AC0913A081545C9120B0C76101B0FE9 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey(leftKey))
		int32_t L_0 = __this->___leftKey_17;
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// input = -1f;
		__this->___input_14 = (-1.0f);
		goto IL_003f;
	}

IL_001a:
	{
		// if (Input.GetKey(rightKey))
		int32_t L_2 = __this->___rightKey_18;
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_2, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// input = 1f;
		__this->___input_14 = (1.0f);
		goto IL_003f;
	}

IL_0034:
	{
		// input = 0f;
		__this->___input_14 = (0.0f);
	}

IL_003f:
	{
		// if (Input.GetKeyDown(jumpKey) && groundChecker.isGround)
		int32_t L_4 = __this->___jumpKey_19;
		bool L_5;
		L_5 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_4, NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		GroundChecker_t10381586385205575BA4F8A71D9FC76983697EB6* L_6 = __this->___groundChecker_31;
		bool L_7 = L_6->___isGround_5;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// Jump();
		PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908(__this, NULL);
	}

IL_005f:
	{
		// if (Input.GetKey(absorbKey) && inventory.heldMinerals.Count < 6)
		int32_t L_8 = __this->___absorbKey_20;
		bool L_9;
		L_9 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_8, NULL);
		if (!L_9)
		{
			goto IL_00d3;
		}
	}
	{
		InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* L_10 = __this->___inventory_8;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_11 = L_10->___heldMinerals_5;
		int32_t L_12;
		L_12 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_11, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if ((((int32_t)L_12) >= ((int32_t)6)))
		{
			goto IL_00d3;
		}
	}
	{
		// if(this.gameObject.name == "Phloem" && absorbDetection.canAbsorb())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15, NULL);
		if (!L_15)
		{
			goto IL_00a9;
		}
	}
	{
		AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* L_16 = __this->___absorbDetection_32;
		bool L_17;
		L_17 = AbsorbDetection_canAbsorb_m53BB3B4274381681ABF5E34F9C8D7C786F51BD2A(L_16, NULL);
		if (!L_17)
		{
			goto IL_00a9;
		}
	}
	{
		// Absorb();
		PlayerController_Absorb_mC65DBC033B3FD829AE8823969F44E0FC4F4AB8A8(__this, NULL);
	}

IL_00a9:
	{
		// if(this.gameObject.name == "Xylem" && absorbDetection.canAbsorbWater())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E, NULL);
		if (!L_20)
		{
			goto IL_00d3;
		}
	}
	{
		AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* L_21 = __this->___absorbDetection_32;
		bool L_22;
		L_22 = AbsorbDetection_canAbsorbWater_m819D582D25C7FAA2AFE7D0310D82CF67EE80E54D(L_21, NULL);
		if (!L_22)
		{
			goto IL_00d3;
		}
	}
	{
		// Absorb();
		PlayerController_Absorb_mC65DBC033B3FD829AE8823969F44E0FC4F4AB8A8(__this, NULL);
	}

IL_00d3:
	{
		// if(Input.GetKeyUp(absorbKey)){
		int32_t L_23 = __this->___absorbKey_20;
		bool L_24;
		L_24 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(L_23, NULL);
		if (!L_24)
		{
			goto IL_0124;
		}
	}
	{
		// if(this.gameObject.name == "Phloem")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_26;
		L_26 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_25, NULL);
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15, NULL);
		if (!L_27)
		{
			goto IL_0102;
		}
	}
	{
		// absorbDetection.ClearAllMinerals();
		AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* L_28 = __this->___absorbDetection_32;
		AbsorbDetection_ClearAllMinerals_m1C94CCA9790787E5AE06852239353FA4F70B8FFF(L_28, NULL);
	}

IL_0102:
	{
		// if(this.gameObject.name == "Xylem")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E, NULL);
		if (!L_31)
		{
			goto IL_0124;
		}
	}
	{
		// absorbDetection.ClearAllWaters();
		AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* L_32 = __this->___absorbDetection_32;
		AbsorbDetection_ClearAllWaters_mE7361F31A47394394F9D700E8D66C9E4D1A9EEFD(L_32, NULL);
	}

IL_0124:
	{
		// if (Input.GetKeyDown(dashKey) && dashCooldown <= 0)
		int32_t L_33 = __this->___dashKey_21;
		bool L_34;
		L_34 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_33, NULL);
		if (!L_34)
		{
			goto IL_0144;
		}
	}
	{
		float L_35 = __this->___dashCooldown_16;
		if ((!(((float)L_35) <= ((float)(0.0f)))))
		{
			goto IL_0144;
		}
	}
	{
		// Dash();
		PlayerController_Dash_m7082027589323790E1340238C1376F5380414DF2(__this, NULL);
	}

IL_0144:
	{
		// if (Input.GetKeyDown(interactKey) && canSend)
		int32_t L_36 = __this->___interactKey_22;
		bool L_37;
		L_37 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_36, NULL);
		if (!L_37)
		{
			goto IL_015f;
		}
	}
	{
		bool L_38 = __this->___canSend_12;
		if (!L_38)
		{
			goto IL_015f;
		}
	}
	{
		// SendMinerals();
		PlayerController_SendMinerals_m9266D250D59C4C59548F9AB53E6FA9C2C18F0ACB(__this, NULL);
	}

IL_015f:
	{
		// if(Input.GetKeyDown(interactKey) && canPressSwitch){
		int32_t L_39 = __this->___interactKey_22;
		bool L_40;
		L_40 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_39, NULL);
		if (!L_40)
		{
			goto IL_017a;
		}
	}
	{
		bool L_41 = __this->___canPressSwitch_13;
		if (!L_41)
		{
			goto IL_017a;
		}
	}
	{
		// LiftDepot();
		PlayerController_LiftDepot_mB1651F38DEBA4CDFC5795A54A11440DD2345A8BF(__this, NULL);
	}

IL_017a:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// PlaySFX(sfxAudios[1]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___sfxAudios_34;
		int32_t L_1 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		PlayerController_PlaySFX_mF3F42674E35DBD7C5466777C79BAFBAB579FAE84(__this, L_2, NULL);
		// rb.velocity = new Vector2(0, jumpPower);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rb_25;
		float L_4 = __this->___jumpPower_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), L_4, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Flip_m4DCA6E3D5321C39FF73F66C0040646A2965ECD3E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lastMovement.x > Mathf.Epsilon)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___lastMovement_24);
		float L_1 = L_0->___x_0;
		float L_2 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		// GetComponent<SpriteRenderer>().flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_3, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		// GetComponent<SpriteRenderer>().flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Dash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Dash_m7082027589323790E1340238C1376F5380414DF2 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// PlaySFX(sfxAudios[3]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___sfxAudios_34;
		int32_t L_1 = 3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		PlayerController_PlaySFX_mF3F42674E35DBD7C5466777C79BAFBAB579FAE84(__this, L_2, NULL);
		// isDash = true;
		__this->___isDash_10 = (bool)1;
		// dashBarAnimator.gameObject.SetActive(true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___dashBarAnimator_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// dashCooldown = dashDelayTime;
		float L_5 = __this->___dashDelayTime_6;
		__this->___dashCooldown_16 = L_5;
		// }
		return;
	}
}
// System.Void PlayerController::Absorb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Absorb_mC65DBC033B3FD829AE8823969F44E0FC4F4AB8A8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	float V_2 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	float V_4 = 0.0f;
	{
		// if (this.gameObject.name == "Phloem")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral67D369D2472501FE84B7C74FB3B868AB1C0FAA15, NULL);
		if (!L_2)
		{
			goto IL_009f;
		}
	}
	{
		// List<GameObject> minerals = absorbDetection.GetAbsorbedMinerals();
		AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* L_3 = __this->___absorbDetection_32;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4;
		L_4 = AbsorbDetection_GetAbsorbedMinerals_m8986CF735E60E5D5995E8DB1BF2820ECB9552CF1_inline(L_3, NULL);
		// foreach (GameObject mineral in minerals)
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_5;
		L_5 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_4, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0091:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0083_1;
			}

IL_002d_1:
			{
				// foreach (GameObject mineral in minerals)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
				L_6 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_6;
				// float step = 0.05f * Time.deltaTime;
				float L_7;
				L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
				V_2 = ((float)il2cpp_codegen_multiply((0.0500000007f), L_7));
				// mineral.transform.position = Vector2.MoveTowards(mineral.transform.position, transform.position, step);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
				L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
				L_13 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_12, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
				L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
				L_16 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_15, NULL);
				float L_17 = V_2;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
				L_18 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_13, L_16, L_17, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_19, NULL);
				// mineral.GetComponent<CircleCollider2D>().isTrigger = true;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
				CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_21;
				L_21 = GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D(L_20, GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var);
				Collider2D_set_isTrigger_m19D5227BAB5D41F212D515C1E2CA433C2FEF7A48(L_21, (bool)1, NULL);
			}

IL_0083_1:
			{
				// foreach (GameObject mineral in minerals)
				bool L_22;
				L_22 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_013d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009f:
	{
		// }else if(this.gameObject.name == "Xylem"){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_24;
		L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral7427EF8726A3E982E974F2396459FAB5E2C4811E, NULL);
		if (!L_25)
		{
			goto IL_013d;
		}
	}
	{
		// List<GameObject> waters = absorbDetection.GetAbsorbedWater();
		AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* L_26 = __this->___absorbDetection_32;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_27;
		L_27 = AbsorbDetection_GetAbsorbedWater_m4197B6F02FA91E93B7C0E7425F692C08DAAE2557_inline(L_26, NULL);
		// foreach(GameObject water in waters){
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_28;
		L_28 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_27, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0124_1;
			}

IL_00cc_1:
			{
				// foreach(GameObject water in waters){
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
				L_29 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_3 = L_29;
				// float step = 0.1f * Time.deltaTime;
				float L_30;
				L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
				V_4 = ((float)il2cpp_codegen_multiply((0.100000001f), L_30));
				// water.transform.position = Vector2.MoveTowards(water.transform.position, transform.position, step);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
				L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_3;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
				L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
				L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
				L_36 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_35, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
				L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
				L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
				L_39 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_38, NULL);
				float L_40 = V_4;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
				L_41 = Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline(L_36, L_39, L_40, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_41, NULL);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_32, L_42, NULL);
				// water.GetComponent<CircleCollider2D>().isTrigger = true;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_3;
				CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_44;
				L_44 = GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D(L_43, GameObject_GetComponent_TisCircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786_mB5E3595DAFCC77B3E6EE7098FF9377F11381CF4D_RuntimeMethod_var);
				Collider2D_set_isTrigger_m19D5227BAB5D41F212D515C1E2CA433C2FEF7A48(L_44, (bool)1, NULL);
			}

IL_0124_1:
			{
				// foreach(GameObject water in waters){
				bool L_45;
				L_45 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_00cc_1;
				}
			}
			{
				goto IL_013d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013d:
	{
		// }
		return;
	}
}
// System.Void PlayerController::SendMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SendMinerals_m9266D250D59C4C59548F9AB53E6FA9C2C18F0ACB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// PlaySFX(sfxAudios[0]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___sfxAudios_34;
		int32_t L_1 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		PlayerController_PlaySFX_mF3F42674E35DBD7C5466777C79BAFBAB579FAE84(__this, L_2, NULL);
		// foreach (GameObject mineral in heldMinerals)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___heldMinerals_28;
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_4;
		L_4 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_3, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_001c_1:
			{
				// foreach (GameObject mineral in heldMinerals)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_5;
				// depot.AddItem(mineral.tag,1);
				Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* L_6 = __this->___depot_26;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
				String_t* L_8;
				L_8 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_7, NULL);
				Depot_AddItem_mE571EF197ABB44A2CD0B6CB6C200CA21E0C891B2(L_6, L_8, 1, NULL);
			}

IL_0036_1:
			{
				// foreach (GameObject mineral in heldMinerals)
				bool L_9;
				L_9 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_001c_1;
				}
			}
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
		// depot.UpdateDepotState();
		Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* L_10 = __this->___depot_26;
		Depot_UpdateDepotState_mA18AEEA22877428E27D786167455DD5F704157F5(L_10, NULL);
		// heldMinerals.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___heldMinerals_28;
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_11, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// inventory.Clear();
		InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* L_12 = __this->___inventory_8;
		InventorySO_Clear_m330B01782C902EAFB520D471E8AA31549B54405F(L_12, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::LiftDepot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_LiftDepot_mB1651F38DEBA4CDFC5795A54A11440DD2345A8BF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04D4617D2E5A20AA108F175EB4AA6A879E1542E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaySFX(sfxAudios[4]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___sfxAudios_34;
		int32_t L_1 = 4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		PlayerController_PlaySFX_mF3F42674E35DBD7C5466777C79BAFBAB579FAE84(__this, L_2, NULL);
		// depot.GetComponent<Animator>().SetBool("isLifting",true);
		Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* L_3 = __this->___depot_26;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_3, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral04D4617D2E5A20AA108F175EB4AA6A879E1542E3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::AddItem(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AddItem_mAD8D92ADAE285E1517DEE21C3AB8AD35189709E4 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaySFX(sfxAudios[2]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___sfxAudios_34;
		int32_t L_1 = 2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		PlayerController_PlaySFX_mF3F42674E35DBD7C5466777C79BAFBAB579FAE84(__this, L_2, NULL);
		// heldMinerals.Add(item);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___heldMinerals_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_item;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_3, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m28C67E4361403BA9990C1E6D9526F78362591667 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_1 = NULL;
	{
		// if (other.collider.CompareTag("Player"))
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_00ac;
		}
	}
	{
		// if (isDash)
		bool L_3 = __this->___isDash_10;
		if (!L_3)
		{
			goto IL_00ac;
		}
	}
	{
		// foreach (Sprite mineral in other.collider.GetComponent<PlayerController>().inventory.heldMinerals)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_4 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5;
		L_5 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_4, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(L_5, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* L_7 = L_6->___inventory_8;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_8 = L_7->___heldMinerals_5;
		Enumerator_tD2EB3DD5FD266C0F9F7DE350E94815F08A9F9324 L_9;
		L_9 = List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3(L_8, List_1_GetEnumerator_m287A2DC6A1FC1EF8920E8244CF0BFC04723260F3_RuntimeMethod_var);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0089:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C((&V_0), Enumerator_Dispose_mC2944E5125933569A7157B7C90399BEF9C44313C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007e_1;
			}

IL_003d_1:
			{
				// foreach (Sprite mineral in other.collider.GetComponent<PlayerController>().inventory.heldMinerals)
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10;
				L_10 = Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_inline((&V_0), Enumerator_get_Current_m91DC3318511183BDAADD91C8791135AE5A2B71ED_RuntimeMethod_var);
				V_1 = L_10;
				// PlaySFX(sfxAudios[5]);
				AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_11 = __this->___sfxAudios_34;
				int32_t L_12 = 5;
				AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
				PlayerController_PlaySFX_mF3F42674E35DBD7C5466777C79BAFBAB579FAE84(__this, L_13, NULL);
				// GameObject explodedItem = Instantiate(explodedMineral, other.collider.transform.position, Quaternion.identity);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___explodedMineral_30;
				Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_15 = ___0_other;
				Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16;
				L_16 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_15, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
				L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
				L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
				L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
				L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_14, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				// explodedItem.GetComponent<SpriteRenderer>().sprite = mineral;
				SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_21;
				L_21 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_20, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22 = V_1;
				SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_21, L_22, NULL);
			}

IL_007e_1:
			{
				// foreach (Sprite mineral in other.collider.GetComponent<PlayerController>().inventory.heldMinerals)
				bool L_23;
				L_23 = Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A((&V_0), Enumerator_MoveNext_m779FA5FCE005ABE1D7E9C78A5B14684BA7FA864A_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_003d_1;
				}
			}
			{
				goto IL_0097;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
		// other.collider.GetComponent<PlayerController>().inventory.Clear();
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_24 = ___0_other;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_25;
		L_25 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_24, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_26;
		L_26 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(L_25, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		InventorySO_tED4824DDA9FBF3BEB455E8DB2472982E2466C09C* L_27 = L_26->___inventory_8;
		InventorySO_Clear_m330B01782C902EAFB520D471E8AA31549B54405F(L_27, NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter2D_mB82BB8D400DC3E0E6B7117AE1A94E72E99CF53FB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DED5DBB9EE7AE2C8F184A83F0A703726562B56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0056B976C82A16471C1EC65E67557F32F8BD277);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Depot") && heldMinerals.Count > 0)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_other;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral88DED5DBB9EE7AE2C8F184A83F0A703726562B56, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___heldMinerals_28;
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// canSend = true;
		__this->___canSend_12 = (bool)1;
	}

IL_0022:
	{
		// if(other.CompareTag("Switch")){
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___0_other;
		bool L_5;
		L_5 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_4, _stringLiteralE0056B976C82A16471C1EC65E67557F32F8BD277, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// canPressSwitch = true;
		__this->___canPressSwitch_13 = (bool)1;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerExit2D_m5CAE524A5D39820CC859733FA61A7AEB9E9DF644 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DED5DBB9EE7AE2C8F184A83F0A703726562B56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0056B976C82A16471C1EC65E67557F32F8BD277);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Depot"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_other;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral88DED5DBB9EE7AE2C8F184A83F0A703726562B56, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// canSend = false;
		__this->___canSend_12 = (bool)0;
	}

IL_0014:
	{
		// if(other.CompareTag("Switch") ){
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2 = ___0_other;
		bool L_3;
		L_3 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_2, _stringLiteralE0056B976C82A16471C1EC65E67557F32F8BD277, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// canPressSwitch = false;
		__this->___canPressSwitch_13 = (bool)0;
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void PlayerController::PlaySFX(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_PlaySFX_mF3F42674E35DBD7C5466777C79BAFBAB579FAE84 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_sfx, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(sfx);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_29;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_sfx;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float input, dashTime = 0.3f, dashCooldown;
		__this->___dashTime_15 = (0.300000012f);
		// private List<GameObject> heldMinerals = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___heldMinerals_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heldMinerals_28), (void*)L_0);
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
// System.Void SpecialEvent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialEvent_Start_m88F565A662A9D7379ED626E9C5385F816EBCA039 (SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0* __this, const RuntimeMethod* method) 
{
	{
		// InitializeSpecialEvent();
		SpecialEvent_InitializeSpecialEvent_m8B497AE1D98B165B3A353203A710A3CFD7E72AC9(__this, NULL);
		// timer = eventOccurTime / 3f;
		float L_0 = __this->___eventOccurTime_5;
		__this->___timer_9 = ((float)(L_0/(3.0f)));
		// }
		return;
	}
}
// System.Void SpecialEvent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialEvent_Update_mAA55BABA399B950C0B513F52E8BB6FE4870A560F (SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0* G_B5_0 = NULL;
	SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0* G_B6_1 = NULL;
	{
		// if (!GameplayController.instance.isPause)
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_0 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPause_12;
		if (L_1)
		{
			goto IL_005c;
		}
	}
	{
		// if (timer > 0)
		float L_2 = __this->___timer_9;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// timer -= Time.deltaTime;
		float L_3 = __this->___timer_9;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_9 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		return;
	}

IL_002c:
	{
		// specialEvent = (int)Random.Range(1f, 3f) % 2 == 0 ? Events.Ant : Events.Earthworm;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (3.0f), NULL);
		G_B4_0 = __this;
		if (!((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_5)%2)))
		{
			G_B5_0 = __this;
			goto IL_0044;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0045;
	}

IL_0044:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0045:
	{
		G_B6_1->___specialEvent_4 = G_B6_0;
		// InitializeSpecialEvent();
		SpecialEvent_InitializeSpecialEvent_m8B497AE1D98B165B3A353203A710A3CFD7E72AC9(__this, NULL);
		// timer = eventOccurTime;
		float L_6 = __this->___eventOccurTime_5;
		__this->___timer_9 = L_6;
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void SpecialEvent::InitializeSpecialEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialEvent_InitializeSpecialEvent_m8B497AE1D98B165B3A353203A710A3CFD7E72AC9 (SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (specialEvent)
		int32_t L_0 = __this->___specialEvent_4;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		return;
	}

IL_000f:
	{
		// Instantiate(insect[0], new Vector2(earthwormSpawnPoint.position.x, Random.Range(-17f, -1f)), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___insect_6;
		int32_t L_4 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___earthwormSpawnPoint_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9;
		L_9 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-17.0f), (-1.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// break;
		return;
	}

IL_004c:
	{
		// for (int i = 0; i < 3; i++)
		V_1 = 0;
		goto IL_00c3;
	}

IL_0050:
	{
		// Instantiate(insect[1], new Vector2(Random.Range(antSpawnPoint[3].position.x, antSpawnPoint[1].position.x), Random.Range(antSpawnPoint[2].position.y, antSpawnPoint[0].position.y)), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___insect_6;
		int32_t L_15 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = __this->___antSpawnPoint_8;
		int32_t L_18 = 3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___x_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_22 = __this->___antSpawnPoint_8;
		int32_t L_23 = 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		float L_27;
		L_27 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_21, L_26, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_28 = __this->___antSpawnPoint_8;
		int32_t L_29 = 2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___y_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_33 = __this->___antSpawnPoint_8;
		int32_t L_34 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37 = L_36.___y_3;
		float L_38;
		L_38 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_32, L_37, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_39), L_27, L_38, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_39, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_40, L_41, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// for (int i = 0; i < 3; i++)
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00c3:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_44 = V_1;
		if ((((int32_t)L_44) < ((int32_t)3)))
		{
			goto IL_0050;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SpecialEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialEvent__ctor_m044DA41500E6803949CEC36AAD6C4E8074E9D5F7 (SpecialEvent_t553D133613B609BBC399B26C56D292915794FEA0* __this, const RuntimeMethod* method) 
{
	{
		// public float eventOccurTime = 30;
		__this->___eventOccurTime_5 = (30.0f);
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
// System.Void Switch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_Start_m7F61F8E2F32F8949B8EC4648823728615F5D6B0B (Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDepot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED_m350B5EF60BE7564D991FD491A64F79323C96FC4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DED5DBB9EE7AE2C8F184A83F0A703726562B56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// depot = GameObject.FindGameObjectWithTag("Depot").GetComponent<Depot>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral88DED5DBB9EE7AE2C8F184A83F0A703726562B56, NULL);
		Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* L_1;
		L_1 = GameObject_GetComponent_TisDepot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED_m350B5EF60BE7564D991FD491A64F79323C96FC4F(L_0, GameObject_GetComponent_TisDepot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED_m350B5EF60BE7564D991FD491A64F79323C96FC4F_RuntimeMethod_var);
		__this->___depot_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depot_4), (void*)L_1);
		// depotAnimator = depot.gameObject.GetComponent<Animator>();
		Depot_tCC53A05E78F5797707B2B635DB3B2FBA864622ED* L_2 = __this->___depot_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_3, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___depotAnimator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depotAnimator_5), (void*)L_4);
		// }
		return;
	}
}
// System.Void Switch::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_Update_m1054888BEAE100C2ACBF24BF178026BEEFD07F79 (Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Switch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch__ctor_m5B451533A9E45C8B5AEF4629DE69167757044B92 (Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E* __this, const RuntimeMethod* method) 
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
// System.Void UIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Start_mDB390A5128712606F938A56F294FBDE7DFE649D4 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainCam = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_0, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		__this->___mainCam_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCam_18), (void*)L_1);
		// sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral67757DA0D226B5929EE9969817B567FF04B07649, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_2, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___sfxAudioSource_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sfxAudioSource_17), (void*)L_3);
		// }
		return;
	}
}
// System.Void UIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Update_m8F538932F53B831D5B82191902ADADACD32B108B (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// UpdateMinerals();
		UIController_UpdateMinerals_m1140BCBA186C641E9DC2A31B86318FAE23B5AD6C(__this, NULL);
		// UpdateEnvironmentInfo();
		UIController_UpdateEnvironmentInfo_mC90E68B60BADB663B93B578769E0D18A41A72AEF(__this, NULL);
		// UpdateGoal();
		UIController_UpdateGoal_m1EFAA7602FF6F1E77ACD137AD2F84C23DF0C488D(__this, NULL);
		// UpdateDepth();
		UIController_UpdateDepth_m3E3D36067ED5C67D69AF5B5986BE9115B425C93A(__this, NULL);
		// UpdateTime();
		UIController_UpdateTime_m76CBFA0E35EFEE430CDCE2E7834CCBD0C6549E00(__this, NULL);
		// if (Input.GetKeyDown(KeyCode.Tab))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)9), NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// SwitchStatusTab();
		UIController_SwitchStatusTab_m008DD28271FA2DD6D724C1255DF9F551E626A9F1(__this, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UIController::UpdateMinerals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateMinerals_m1140BCBA186C641E9DC2A31B86318FAE23B5AD6C (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF8ED00C7890A45DABE28F256EA6C49881905EE2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* V_1 = NULL;
	int32_t V_2 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// int i = 0;
		V_0 = 0;
		// foreach (Text mineral in mineralTexts)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_0 = __this->___mineralTexts_4;
		V_1 = L_0;
		V_2 = 0;
		goto IL_003d;
	}

IL_000d:
	{
		// foreach (Text mineral in mineralTexts)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// if (i < 14)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)14))))
		{
			goto IL_0039;
		}
	}
	{
		// mineral.text = GameplayController.instance.GetMineralAmountOfIndex(i).ToString("##0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = V_3;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_7 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = GameplayController_GetMineralAmountOfIndex_m7E4DA0FC2958F6901B5F70E99275209C4883CC55(L_7, L_8, NULL);
		V_4 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_4), _stringLiteralBF8ED00C7890A45DABE28F256EA6C49881905EE2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		// i++;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003d:
	{
		// foreach (Text mineral in mineralTexts)
		int32_t L_13 = V_2;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIController::UpdateGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateGoal_m1EFAA7602FF6F1E77ACD137AD2F84C23DF0C488D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A2140566BC73231C818F0C8C27543521C40F07D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3914B015CFFD1691CD11715D85D039DAEDE40E2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B12_0 = 0.0f;
	{
		// if (isMineralRotating)
		bool L_0 = __this->___isMineralRotating_15;
		if (!L_0)
		{
			goto IL_00ad;
		}
	}
	{
		// float currentMineral = GameplayController.instance.GetCurrentMineral();
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_1 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_2;
		L_2 = GameplayController_GetCurrentMineral_m0A7FF6497FFD825309C1B157BA8DA117C4C7F9DD_inline(L_1, NULL);
		V_0 = L_2;
		// if (currentMineral > GameplayController.instance.targetMineral)
		float L_3 = V_0;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_4 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_5 = L_4->___targetMineral_10;
		if ((!(((float)L_3) > ((float)L_5))))
		{
			goto IL_002e;
		}
	}
	{
		// currentMineral = GameplayController.instance.targetMineral;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_6 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_7 = L_6->___targetMineral_10;
		V_0 = L_7;
	}

IL_002e:
	{
		// Vector3 to = new Vector3(0, 0, 90f + (currentMineral * 90f / GameplayController.instance.targetMineral));
		float L_8 = V_0;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_9 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_10 = L_9->___targetMineral_10;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), (0.0f), (0.0f), ((float)il2cpp_codegen_add((90.0f), ((float)(((float)il2cpp_codegen_multiply(L_8, (90.0f)))/L_10)))), NULL);
		// if (mineralCircle.transform.eulerAngles.z <= to.z)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___mineralCircle_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_12, NULL);
		float L_14 = L_13.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16 = L_15.___z_4;
		if ((!(((float)L_14) <= ((float)L_16))))
		{
			goto IL_00a6;
		}
	}
	{
		// mineralCircle.transform.RotateAround(mineralCircle.transform.position, Vector3.forward, 10 * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___mineralCircle_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___mineralCircle_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_18, L_21, L_22, ((float)il2cpp_codegen_multiply((10.0f), L_23)), NULL);
		goto IL_00ad;
	}

IL_00a6:
	{
		// isMineralRotating = false;
		__this->___isMineralRotating_15 = (bool)0;
	}

IL_00ad:
	{
		// if (isWaterRotating)
		bool L_24 = __this->___isWaterRotating_16;
		if (!L_24)
		{
			goto IL_01cf;
		}
	}
	{
		// float currentWater = GameplayController.instance.GetCurrentWater();
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_25 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_26;
		L_26 = GameplayController_GetCurrentWater_m460BF080CB650E31F08A674610601A59ED8FBE9D_inline(L_25, NULL);
		V_2 = L_26;
		// if (currentWater > GameplayController.instance.targetWater)
		float L_27 = V_2;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_28 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_29 = L_28->___targetWater_11;
		if ((!(((float)L_27) > ((float)L_29))))
		{
			goto IL_00db;
		}
	}
	{
		// currentWater = GameplayController.instance.targetWater;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_30 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_31 = L_30->___targetWater_11;
		V_2 = L_31;
	}

IL_00db:
	{
		// Vector3 to = new Vector3(0, 0, 360f - (currentWater * 90f / GameplayController.instance.targetWater));
		float L_32 = V_2;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_33 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_34 = L_33->___targetWater_11;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), (0.0f), (0.0f), ((float)il2cpp_codegen_subtract((360.0f), ((float)(((float)il2cpp_codegen_multiply(L_32, (90.0f)))/L_34)))), NULL);
		// print("to.z " + to.z);
		float* L_35 = (&(&V_3)->___z_4);
		String_t* L_36;
		L_36 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_35, NULL);
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6A2140566BC73231C818F0C8C27543521C40F07D, L_36, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_37, NULL);
		// print("eulerangle " + Mathf.Abs(waterCircle.transform.eulerAngles.z - 360));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___waterCircle_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_39, NULL);
		float L_41 = L_40.___z_4;
		float L_42;
		L_42 = fabsf(((float)il2cpp_codegen_subtract(L_41, (360.0f))));
		V_4 = L_42;
		String_t* L_43;
		L_43 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		String_t* L_44;
		L_44 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA3914B015CFFD1691CD11715D85D039DAEDE40E2, L_43, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_44, NULL);
		// if ((waterCircle.transform.eulerAngles.z == 0 ? 360 : waterCircle.transform.eulerAngles.z) >= to.z)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___waterCircle_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_46, NULL);
		float L_48 = L_47.___z_4;
		if ((((float)L_48) == ((float)(0.0f))))
		{
			goto IL_018a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___waterCircle_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_50, NULL);
		float L_52 = L_51.___z_4;
		G_B12_0 = L_52;
		goto IL_018f;
	}

IL_018a:
	{
		G_B12_0 = (360.0f);
	}

IL_018f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		float L_54 = L_53.___z_4;
		if ((!(((float)G_B12_0) >= ((float)L_54))))
		{
			goto IL_01c8;
		}
	}
	{
		// waterCircle.transform.RotateAround(waterCircle.transform.position, Vector3.back, 10 * Time.deltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___waterCircle_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_55, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___waterCircle_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_61;
		L_61 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_56, L_59, L_60, ((float)il2cpp_codegen_multiply((10.0f), L_61)), NULL);
		return;
	}

IL_01c8:
	{
		// isWaterRotating = false;
		__this->___isWaterRotating_16 = (bool)0;
	}

IL_01cf:
	{
		// }
		return;
	}
}
// System.Void UIController::UpdateEnvironmentInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateEnvironmentInfo_mC90E68B60BADB663B93B578769E0D18A41A72AEF (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral266D6900BD9E2C93E471674078458473CF3B789E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral467425751A9985C0190321829D579F1263E05B9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BF038C4BB01B667E877F6BAA55ED17674BDBEC);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// moistureText.text = "Moisture : " + (GameplayController.instance.moisture).ToString("##0.0%");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___moistureText_5;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_1 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float* L_2 = (&L_1->___moisture_6);
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_2, _stringLiteral467425751A9985C0190321829D579F1263E05B9C, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral86BF038C4BB01B667E877F6BAA55ED17674BDBEC, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// temperatureText.text = GameplayController.instance.temperature.ToString() + " Celsius";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___temperatureText_6;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_6 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float* L_7 = (&L_6->___temperature_7);
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteral266D6900BD9E2C93E471674078458473CF3B789E, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// tempBar.sizeDelta = new Vector2((GameplayController.instance.temperature / 40f) * 202f, tempBar.rect.height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___tempBar_11;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_11 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_12 = L_11->___temperature_7;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___tempBar_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		L_14 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_13, NULL);
		V_0 = L_14;
		float L_15;
		L_15 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_multiply(((float)(L_12/(40.0f))), (202.0f))), L_15, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_10, L_16, NULL);
		// moistBar.sizeDelta = new Vector2((GameplayController.instance.moisture) * 202f, moistBar.rect.height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___moistBar_12;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_18 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_19 = L_18->___moisture_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___moistBar_12;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21;
		L_21 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_20, NULL);
		V_0 = L_21;
		float L_22;
		L_22 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), ((float)il2cpp_codegen_multiply(L_19, (202.0f))), L_22, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_17, L_23, NULL);
		// }
		return;
	}
}
// System.Void UIController::SetWaterRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetWaterRotate_mB833F96C73341FB08B6178443E9DFAFC33D2189E (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// isWaterRotating = true;
		__this->___isWaterRotating_16 = (bool)1;
		// }
		return;
	}
}
// System.Void UIController::SetMineralRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetMineralRotate_m7F080FF16A64E929672B27769F23AB2A250D0E6F (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// isMineralRotating = true;
		__this->___isMineralRotating_15 = (bool)1;
		// }
		return;
	}
}
// System.Void UIController::SwitchStatusTab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SwitchStatusTab_m008DD28271FA2DD6D724C1255DF9F551E626A9F1 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECA948737BB3B84FE3299E2DE0476CEE838F37E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaySFX(sfxAudios[0]);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___sfxAudios_14;
		int32_t L_1 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		UIController_PlaySFX_m6826501DCAC4446D60575CE97396490B281624E1(__this, L_2, NULL);
		// if (mineralStatus[0].activeSelf)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___mineralStatus_13;
		int32_t L_4 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// mineralStatus[0].GetComponent<Animator>().SetBool("isClose", true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___mineralStatus_13;
		int32_t L_8 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10;
		L_10 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_9, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_10, _stringLiteralECA948737BB3B84FE3299E2DE0476CEE838F37E3, (bool)1, NULL);
		// mineralStatus[1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___mineralStatus_13;
		int32_t L_12 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		return;
	}

IL_0044:
	{
		// else if (mineralStatus[1].activeSelf)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___mineralStatus_13;
		int32_t L_15 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_16, NULL);
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		// mineralStatus[1].GetComponent<Animator>().SetBool("isClose", true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___mineralStatus_13;
		int32_t L_19 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21;
		L_21 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_20, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_21, _stringLiteralECA948737BB3B84FE3299E2DE0476CEE838F37E3, (bool)1, NULL);
		// mineralStatus[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = __this->___mineralStatus_13;
		int32_t L_23 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void UIController::UpdateDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateDepth_m3E3D36067ED5C67D69AF5B5986BE9115B425C93A (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8BDCD28E40D848FF218A108022AEC2089B2C29F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD35B142A09BA27140479767A51838C58DAC7EC2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (mainCam.position.y <= 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___mainCam_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// depthText.text = (Mathf.Abs(mainCam.position.y * 10f)).ToString("##0.0") + " M";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___depthText_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___mainCam_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_multiply(L_6, (10.0f))));
		V_0 = L_7;
		String_t* L_8;
		L_8 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralDD35B142A09BA27140479767A51838C58DAC7EC2, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteralB8BDCD28E40D848FF218A108022AEC2089B2C29F, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_9);
		return;
	}

IL_0055:
	{
		// depthText.text = "Ground";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___depthText_7;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		// }
		return;
	}
}
// System.Void UIController::UpdateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateTime_m76CBFA0E35EFEE430CDCE2E7834CCBD0C6549E00 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC5D1BE7736EE14FD7CD3595FF085DA8DD9079F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF8ED00C7890A45DABE28F256EA6C49881905EE2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// timeText.text = "Remain Time: " + GameplayController.instance.GetRemainingTime().ToString("##0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___timeText_8;
		GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* L_1 = ((GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_StaticFields*)il2cpp_codegen_static_fields_for(GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86_il2cpp_TypeInfo_var))->___instance_4;
		float L_2;
		L_2 = GameplayController_GetRemainingTime_mE013B0C1A1018501A640627525A8A1BFF828FF6D_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralBF8ED00C7890A45DABE28F256EA6C49881905EE2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2BC5D1BE7736EE14FD7CD3595FF085DA8DD9079F, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void UIController::PlaySFX(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_PlaySFX_m6826501DCAC4446D60575CE97396490B281624E1 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_sfx, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(sfx);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_sfx;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_mFF218DBC8CCEFE36AAC295D2376501658CD8B7A2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_m138E823B0F25EF10A2261E57C5706232E8EA9A9A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_current, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_target;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_current;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_target;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_current;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_13 = ___2_maxDistanceDelta;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = ___2_maxDistanceDelta;
		float L_16 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply(L_15, L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		G_B6_0 = G_B4_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___1_target;
		V_5 = L_18;
		goto IL_0079;
	}

IL_004f:
	{
		float L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_3 = ((float)L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___0_current;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___2_maxDistanceDelta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___0_current;
		float L_27 = L_26.___y_1;
		float L_28 = V_1;
		float L_29 = V_3;
		float L_30 = ___2_maxDistanceDelta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)(L_28/L_29)), L_30)))), /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_0079;
	}

IL_0079:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Reflect_m8EDA5309E17DC341CB13DDD7D59EBF73EAB7797F_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_inDirection, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_inNormal, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_inNormal;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_inDirection;
		float L_2;
		L_2 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_0, L_1, NULL);
		V_0 = ((float)il2cpp_codegen_multiply((-2.0f), L_2));
		float L_3 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_inNormal;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_inDirection;
		float L_7 = L_6.___x_0;
		float L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___1_inNormal;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___0_inDirection;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, L_5)), L_7)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_10)), L_12)), /*hidden argument*/NULL);
		V_1 = L_13;
		goto IL_0035;
	}

IL_0035:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___leftVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* AbsorbDetection_GetAbsorbedMinerals_m8986CF735E60E5D5995E8DB1BF2820ECB9552CF1_inline (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	{
		// return absorbedMinerals;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___absorbedMinerals_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* AbsorbDetection_GetAbsorbedWater_m4197B6F02FA91E93B7C0E7425F692C08DAAE2557_inline (AbsorbDetection_tA51888C7D75692376E8C40265130131AD0A8496A* __this, const RuntimeMethod* method) 
{
	{
		// return absorbedWater;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___absorbedWater_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameplayController_GetCurrentMineral_m0A7FF6497FFD825309C1B157BA8DA117C4C7F9DD_inline (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// return this.currentMineral;
		float L_0 = __this->___currentMineral_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameplayController_GetCurrentWater_m460BF080CB650E31F08A674610601A59ED8FBE9D_inline (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// return this.currentWater;
		float L_0 = __this->___currentWater_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GameplayController_GetRemainingTime_mE013B0C1A1018501A640627525A8A1BFF828FF6D_inline (GameplayController_t5AAB4643DFC9592410C5135E4FDB3425B9D5FE86* __this, const RuntimeMethod* method) 
{
	{
		// return this.remainingTime;
		float L_0 = __this->___remainingTime_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 Enumerator_get_Current_mA2766A2E8A4DE7936B4BB30B4FFA68396096EDCE_gshared_inline (Enumerator_t04DA1F5BC6E398EF5691BC503C84B8E6E1E60478* __this, const RuntimeMethod* method) 
{
	{
		DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8 L_0 = (DepotMineral_t5D04B095EA6E03B168D3CFF26C378A1E963BF6B8)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7A970B9A77B6DD7B5F9474C65C682CFD13EC06D4_gshared_inline (List_1_t4FF8E2D26918C9A176CA30097B906FED785FECE8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m939A68C2AA0F007132CAB5D276818E8711BDC3E1_gshared_inline (List_1_t7FEBE8767EF3D2EB6986568D9C962EB4121C2028* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
