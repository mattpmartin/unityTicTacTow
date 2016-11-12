#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// GameController
struct GameController_t2782302542;
// GridSpace
struct GridSpace_t3273240896;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.UI.Button
struct Button_t3896396478;
// Player
struct Player_t2393081601;
// PlayerColour
struct PlayerColour_t3744214061;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameController2782302542.h"
#include "AssemblyU2DCSharp_GameController2782302542MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "AssemblyU2DCSharp_GridSpace3273240896MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine.UI_ArrayTypes.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "AssemblyU2DCSharp_GridSpace3273240896.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable1885181538MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Button3896396478.h"
#include "UnityEngine_UI_UnityEngine_UI_Image538875265.h"
#include "AssemblyU2DCSharp_PlayerColour3744214061.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic836799438MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic836799438.h"
#include "AssemblyU2DCSharp_Player2393081601MethodDeclarations.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerColour3744214061MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponentInParent_TisIl2CppObject_m1297875695_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponentInParent_TisIl2CppObject_m1297875695(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponentInParent_TisIl2CppObject_m1297875695_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInParent<GridSpace>()
#define Component_GetComponentInParent_TisGridSpace_t3273240896_m1570635914(__this, method) ((  GridSpace_t3273240896 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponentInParent_TisIl2CppObject_m1297875695_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.UI.Button>()
#define Component_GetComponentInParent_TisButton_t3896396478_m720413813(__this, method) ((  Button_t3896396478 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponentInParent_TisIl2CppObject_m1297875695_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m4168274701 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::SetGameControllersOnButtons()
extern const MethodInfo* Component_GetComponentInParent_TisGridSpace_t3273240896_m1570635914_MethodInfo_var;
extern const uint32_t GameController_SetGameControllersOnButtons_m411787402_MetadataUsageId;
extern "C"  void GameController_SetGameControllersOnButtons_m411787402 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_SetGameControllersOnButtons_m411787402_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		TextU5BU5D_t3798907012* L_0 = __this->get_buttonList_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		Text_t9039225 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GridSpace_t3273240896 * L_4 = Component_GetComponentInParent_TisGridSpace_t3273240896_m1570635914(L_3, /*hidden argument*/Component_GetComponentInParent_TisGridSpace_t3273240896_m1570635914_MethodInfo_var);
		NullCheck(L_4);
		GridSpace_SetGameControllerReference_m920450854(L_4, __this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		TextU5BU5D_t3798907012* L_7 = __this->get_buttonList_2();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GameController::Awake()
extern "C"  void GameController_Awake_m110912624 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	{
		GameController_SetGameControllersOnButtons_m411787402(__this, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_0 = __this->get_gameOverPanel_4();
		NullCheck(L_0);
		GameObject_SetActive_m3538205401(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_1 = __this->get_restartButton_6();
		NullCheck(L_1);
		GameObject_SetActive_m3538205401(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_moveCount_12(0);
		return;
	}
}
// System.String GameController::GetPlayerSide()
extern "C"  String_t* GameController_GetPlayerSide_m3421618166 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_playerSide_3();
		return L_0;
	}
}
// System.Void GameController::EndTurn()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3091780;
extern const uint32_t GameController_EndTurn_m4088631203_MetadataUsageId;
extern "C"  void GameController_EndTurn_m4088631203 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_EndTurn_m4088631203_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = __this->get_moveCount_12();
		__this->set_moveCount_12(((int32_t)((int32_t)L_0+(int32_t)1)));
		TextU5BU5D_t3798907012* L_1 = __this->get_buttonList_2();
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		Text_t9039225 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		String_t* L_5 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		TextU5BU5D_t3798907012* L_7 = __this->get_buttonList_2();
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		int32_t L_8 = 1;
		Text_t9039225 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_9);
		String_t* L_11 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		TextU5BU5D_t3798907012* L_13 = __this->get_buttonList_2();
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
		int32_t L_14 = 2;
		Text_t9039225 * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_15);
		String_t* L_17 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_19 = __this->get_playerSide_3();
		GameController_GameOver_m3933496869(__this, L_19, /*hidden argument*/NULL);
		goto IL_0371;
	}

IL_0076:
	{
		TextU5BU5D_t3798907012* L_20 = __this->get_buttonList_2();
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		int32_t L_21 = 3;
		Text_t9039225 * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_22);
		String_t* L_24 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00de;
		}
	}
	{
		TextU5BU5D_t3798907012* L_26 = __this->get_buttonList_2();
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 4);
		int32_t L_27 = 4;
		Text_t9039225 * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_28);
		String_t* L_30 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00de;
		}
	}
	{
		TextU5BU5D_t3798907012* L_32 = __this->get_buttonList_2();
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 5);
		int32_t L_33 = 5;
		Text_t9039225 * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_34);
		String_t* L_36 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00de;
		}
	}
	{
		String_t* L_38 = __this->get_playerSide_3();
		GameController_GameOver_m3933496869(__this, L_38, /*hidden argument*/NULL);
		goto IL_0371;
	}

IL_00de:
	{
		TextU5BU5D_t3798907012* L_39 = __this->get_buttonList_2();
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 6);
		int32_t L_40 = 6;
		Text_t9039225 * L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_41);
		String_t* L_43 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_44 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0146;
		}
	}
	{
		TextU5BU5D_t3798907012* L_45 = __this->get_buttonList_2();
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 7);
		int32_t L_46 = 7;
		Text_t9039225 * L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_47);
		String_t* L_49 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0146;
		}
	}
	{
		TextU5BU5D_t3798907012* L_51 = __this->get_buttonList_2();
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 8);
		int32_t L_52 = 8;
		Text_t9039225 * L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_53);
		String_t* L_55 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_56 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0146;
		}
	}
	{
		String_t* L_57 = __this->get_playerSide_3();
		GameController_GameOver_m3933496869(__this, L_57, /*hidden argument*/NULL);
		goto IL_0371;
	}

IL_0146:
	{
		TextU5BU5D_t3798907012* L_58 = __this->get_buttonList_2();
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
		int32_t L_59 = 0;
		Text_t9039225 * L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_60);
		String_t* L_62 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_63 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_01ae;
		}
	}
	{
		TextU5BU5D_t3798907012* L_64 = __this->get_buttonList_2();
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, 3);
		int32_t L_65 = 3;
		Text_t9039225 * L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_66);
		String_t* L_68 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_01ae;
		}
	}
	{
		TextU5BU5D_t3798907012* L_70 = __this->get_buttonList_2();
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 6);
		int32_t L_71 = 6;
		Text_t9039225 * L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		String_t* L_73 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_72);
		String_t* L_74 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_75 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_01ae;
		}
	}
	{
		String_t* L_76 = __this->get_playerSide_3();
		GameController_GameOver_m3933496869(__this, L_76, /*hidden argument*/NULL);
		goto IL_0371;
	}

IL_01ae:
	{
		TextU5BU5D_t3798907012* L_77 = __this->get_buttonList_2();
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		int32_t L_78 = 1;
		Text_t9039225 * L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		String_t* L_80 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_79);
		String_t* L_81 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_82 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_0216;
		}
	}
	{
		TextU5BU5D_t3798907012* L_83 = __this->get_buttonList_2();
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, 4);
		int32_t L_84 = 4;
		Text_t9039225 * L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		String_t* L_86 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_85);
		String_t* L_87 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_88 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_86, L_87, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0216;
		}
	}
	{
		TextU5BU5D_t3798907012* L_89 = __this->get_buttonList_2();
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 7);
		int32_t L_90 = 7;
		Text_t9039225 * L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		String_t* L_92 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_91);
		String_t* L_93 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_94 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_92, L_93, /*hidden argument*/NULL);
		if (!L_94)
		{
			goto IL_0216;
		}
	}
	{
		String_t* L_95 = __this->get_playerSide_3();
		GameController_GameOver_m3933496869(__this, L_95, /*hidden argument*/NULL);
		goto IL_0371;
	}

IL_0216:
	{
		TextU5BU5D_t3798907012* L_96 = __this->get_buttonList_2();
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, 2);
		int32_t L_97 = 2;
		Text_t9039225 * L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_98);
		String_t* L_99 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_98);
		String_t* L_100 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_101 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_99, L_100, /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_027e;
		}
	}
	{
		TextU5BU5D_t3798907012* L_102 = __this->get_buttonList_2();
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, 5);
		int32_t L_103 = 5;
		Text_t9039225 * L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_104);
		String_t* L_105 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_104);
		String_t* L_106 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_107 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_105, L_106, /*hidden argument*/NULL);
		if (!L_107)
		{
			goto IL_027e;
		}
	}
	{
		TextU5BU5D_t3798907012* L_108 = __this->get_buttonList_2();
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, 8);
		int32_t L_109 = 8;
		Text_t9039225 * L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_110);
		String_t* L_111 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_110);
		String_t* L_112 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_113 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_111, L_112, /*hidden argument*/NULL);
		if (!L_113)
		{
			goto IL_027e;
		}
	}
	{
		String_t* L_114 = __this->get_playerSide_3();
		GameController_GameOver_m3933496869(__this, L_114, /*hidden argument*/NULL);
		goto IL_0371;
	}

IL_027e:
	{
		TextU5BU5D_t3798907012* L_115 = __this->get_buttonList_2();
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, 0);
		int32_t L_116 = 0;
		Text_t9039225 * L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		String_t* L_118 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_117);
		String_t* L_119 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_120 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_118, L_119, /*hidden argument*/NULL);
		if (!L_120)
		{
			goto IL_02e6;
		}
	}
	{
		TextU5BU5D_t3798907012* L_121 = __this->get_buttonList_2();
		NullCheck(L_121);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_121, 4);
		int32_t L_122 = 4;
		Text_t9039225 * L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_123);
		String_t* L_124 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_123);
		String_t* L_125 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_126 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_124, L_125, /*hidden argument*/NULL);
		if (!L_126)
		{
			goto IL_02e6;
		}
	}
	{
		TextU5BU5D_t3798907012* L_127 = __this->get_buttonList_2();
		NullCheck(L_127);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_127, 8);
		int32_t L_128 = 8;
		Text_t9039225 * L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_129);
		String_t* L_130 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_129);
		String_t* L_131 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_132 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/NULL);
		if (!L_132)
		{
			goto IL_02e6;
		}
	}
	{
		String_t* L_133 = __this->get_playerSide_3();
		GameController_GameOver_m3933496869(__this, L_133, /*hidden argument*/NULL);
		goto IL_0371;
	}

IL_02e6:
	{
		TextU5BU5D_t3798907012* L_134 = __this->get_buttonList_2();
		NullCheck(L_134);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_134, 2);
		int32_t L_135 = 2;
		Text_t9039225 * L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_136);
		String_t* L_137 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_136);
		String_t* L_138 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_139 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_137, L_138, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_034e;
		}
	}
	{
		TextU5BU5D_t3798907012* L_140 = __this->get_buttonList_2();
		NullCheck(L_140);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_140, 4);
		int32_t L_141 = 4;
		Text_t9039225 * L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_142);
		String_t* L_143 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_142);
		String_t* L_144 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_145 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_143, L_144, /*hidden argument*/NULL);
		if (!L_145)
		{
			goto IL_034e;
		}
	}
	{
		TextU5BU5D_t3798907012* L_146 = __this->get_buttonList_2();
		NullCheck(L_146);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_146, 6);
		int32_t L_147 = 6;
		Text_t9039225 * L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		NullCheck(L_148);
		String_t* L_149 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_148);
		String_t* L_150 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_151 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_149, L_150, /*hidden argument*/NULL);
		if (!L_151)
		{
			goto IL_034e;
		}
	}
	{
		String_t* L_152 = __this->get_playerSide_3();
		GameController_GameOver_m3933496869(__this, L_152, /*hidden argument*/NULL);
		goto IL_0371;
	}

IL_034e:
	{
		int32_t L_153 = __this->get_moveCount_12();
		if ((((int32_t)L_153) < ((int32_t)((int32_t)9))))
		{
			goto IL_036b;
		}
	}
	{
		GameController_GameOver_m3933496869(__this, _stringLiteral3091780, /*hidden argument*/NULL);
		goto IL_0371;
	}

IL_036b:
	{
		GameController_ChangeSide_m3920337790(__this, /*hidden argument*/NULL);
	}

IL_0371:
	{
		return;
	}
}
// System.Void GameController::GameOver(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3091780;
extern Il2CppCodeGenString* _stringLiteral3173510997;
extern Il2CppCodeGenString* _stringLiteral999716522;
extern const uint32_t GameController_GameOver_m3933496869_MetadataUsageId;
extern "C"  void GameController_GameOver_m3933496869 (GameController_t2782302542 * __this, String_t* ___winningPlayer0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_GameOver_m3933496869_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_SetBoardInteractable_m4002537506(__this, (bool)0, /*hidden argument*/NULL);
		String_t* L_0 = ___winningPlayer0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_0, _stringLiteral3091780, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		GameController_SetGameOverText_m3871131874(__this, _stringLiteral3173510997, /*hidden argument*/NULL);
		GameController_SetPlayerColourInactive_m2956610117(__this, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_002d:
	{
		String_t* L_2 = ___winningPlayer0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m138640077(NULL /*static, unused*/, L_2, _stringLiteral999716522, /*hidden argument*/NULL);
		GameController_SetGameOverText_m3871131874(__this, L_3, /*hidden argument*/NULL);
	}

IL_003e:
	{
		GameObject_t3674682005 * L_4 = __this->get_restartButton_6();
		NullCheck(L_4);
		GameObject_SetActive_m3538205401(L_4, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::ChangeSide()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral88;
extern Il2CppCodeGenString* _stringLiteral79;
extern const uint32_t GameController_ChangeSide_m3920337790_MetadataUsageId;
extern "C"  void GameController_ChangeSide_m3920337790 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_ChangeSide_m3920337790_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameController_t2782302542 * G_B2_0 = NULL;
	GameController_t2782302542 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	GameController_t2782302542 * G_B3_1 = NULL;
	{
		String_t* L_0 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_0, _stringLiteral88, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = _stringLiteral79;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = _stringLiteral88;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_playerSide_3(G_B3_0);
		String_t* L_2 = __this->get_playerSide_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_2, _stringLiteral88, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		Player_t2393081601 * L_4 = __this->get_playerX_7();
		Player_t2393081601 * L_5 = __this->get_playerO_8();
		GameController_SetPlayerColours_m903907243(__this, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_0056:
	{
		Player_t2393081601 * L_6 = __this->get_playerO_8();
		Player_t2393081601 * L_7 = __this->get_playerX_7();
		GameController_SetPlayerColours_m903907243(__this, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void GameController::SetGameOverText(System.String)
extern "C"  void GameController_SetGameOverText_m3871131874 (GameController_t2782302542 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		GameObject_t3674682005 * L_0 = __this->get_gameOverPanel_4();
		NullCheck(L_0);
		GameObject_SetActive_m3538205401(L_0, (bool)1, /*hidden argument*/NULL);
		Text_t9039225 * L_1 = __this->get_gameOverText_5();
		String_t* L_2 = ___value0;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void GameController::ResetGame()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t GameController_ResetGame_m3845078220_MetadataUsageId;
extern "C"  void GameController_ResetGame_m3845078220 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_ResetGame_m3845078220_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->set_moveCount_12(0);
		GameObject_t3674682005 * L_0 = __this->get_gameOverPanel_4();
		NullCheck(L_0);
		GameObject_SetActive_m3538205401(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		TextU5BU5D_t3798907012* L_1 = __this->get_buttonList_2();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		Text_t9039225 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		TextU5BU5D_t3798907012* L_8 = __this->get_buttonList_2();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		GameObject_t3674682005 * L_9 = __this->get_restartButton_6();
		NullCheck(L_9);
		GameObject_SetActive_m3538205401(L_9, (bool)0, /*hidden argument*/NULL);
		GameController_SetPlayerButtons_m4178069740(__this, (bool)1, /*hidden argument*/NULL);
		GameController_SetPlayerColourInactive_m2956610117(__this, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_10 = __this->get_startInfo_9();
		NullCheck(L_10);
		GameObject_SetActive_m3538205401(L_10, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::SetBoardInteractable(System.Boolean)
extern const MethodInfo* Component_GetComponentInParent_TisButton_t3896396478_m720413813_MethodInfo_var;
extern const uint32_t GameController_SetBoardInteractable_m4002537506_MetadataUsageId;
extern "C"  void GameController_SetBoardInteractable_m4002537506 (GameController_t2782302542 * __this, bool ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_SetBoardInteractable_m4002537506_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		TextU5BU5D_t3798907012* L_0 = __this->get_buttonList_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		Text_t9039225 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Button_t3896396478 * L_4 = Component_GetComponentInParent_TisButton_t3896396478_m720413813(L_3, /*hidden argument*/Component_GetComponentInParent_TisButton_t3896396478_m720413813_MethodInfo_var);
		bool L_5 = ___value0;
		NullCheck(L_4);
		Selectable_set_interactable_m2686686419(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		TextU5BU5D_t3798907012* L_8 = __this->get_buttonList_2();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GameController::SetPlayerColours(Player,Player)
extern "C"  void GameController_SetPlayerColours_m903907243 (GameController_t2782302542 * __this, Player_t2393081601 * ___newPlayer0, Player_t2393081601 * ___oldPlayer1, const MethodInfo* method)
{
	{
		Player_t2393081601 * L_0 = ___newPlayer0;
		NullCheck(L_0);
		Image_t538875265 * L_1 = L_0->get_panel_0();
		PlayerColour_t3744214061 * L_2 = __this->get_activePlayerColour_10();
		NullCheck(L_2);
		Color_t4194546905  L_3 = L_2->get_panelColour_0();
		NullCheck(L_1);
		VirtActionInvoker1< Color_t4194546905  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_3);
		Player_t2393081601 * L_4 = ___newPlayer0;
		NullCheck(L_4);
		Text_t9039225 * L_5 = L_4->get_text_1();
		PlayerColour_t3744214061 * L_6 = __this->get_activePlayerColour_10();
		NullCheck(L_6);
		Color_t4194546905  L_7 = L_6->get_textColour_1();
		NullCheck(L_5);
		VirtActionInvoker1< Color_t4194546905  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		Player_t2393081601 * L_8 = ___oldPlayer1;
		NullCheck(L_8);
		Image_t538875265 * L_9 = L_8->get_panel_0();
		PlayerColour_t3744214061 * L_10 = __this->get_inactivePlayerColour_11();
		NullCheck(L_10);
		Color_t4194546905  L_11 = L_10->get_panelColour_0();
		NullCheck(L_9);
		VirtActionInvoker1< Color_t4194546905  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_11);
		Player_t2393081601 * L_12 = ___oldPlayer1;
		NullCheck(L_12);
		Text_t9039225 * L_13 = L_12->get_text_1();
		PlayerColour_t3744214061 * L_14 = __this->get_inactivePlayerColour_11();
		NullCheck(L_14);
		Color_t4194546905  L_15 = L_14->get_textColour_1();
		NullCheck(L_13);
		VirtActionInvoker1< Color_t4194546905  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_15);
		return;
	}
}
// System.Void GameController::SetStartingSide(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral88;
extern const uint32_t GameController_SetStartingSide_m1964263646_MetadataUsageId;
extern "C"  void GameController_SetStartingSide_m1964263646 (GameController_t2782302542 * __this, String_t* ___startingSide0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameController_SetStartingSide_m1964263646_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___startingSide0;
		__this->set_playerSide_3(L_0);
		String_t* L_1 = ___startingSide0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_1, _stringLiteral88, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Player_t2393081601 * L_3 = __this->get_playerX_7();
		Player_t2393081601 * L_4 = __this->get_playerO_8();
		GameController_SetPlayerColours_m903907243(__this, L_3, L_4, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_002e:
	{
		Player_t2393081601 * L_5 = __this->get_playerO_8();
		Player_t2393081601 * L_6 = __this->get_playerX_7();
		GameController_SetPlayerColours_m903907243(__this, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0040:
	{
		GameController_StartGame_m2751531423(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::StartGame()
extern "C"  void GameController_StartGame_m2751531423 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	{
		GameController_SetBoardInteractable_m4002537506(__this, (bool)1, /*hidden argument*/NULL);
		GameController_SetPlayerButtons_m4178069740(__this, (bool)0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_0 = __this->get_startInfo_9();
		NullCheck(L_0);
		GameObject_SetActive_m3538205401(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::SetPlayerButtons(System.Boolean)
extern "C"  void GameController_SetPlayerButtons_m4178069740 (GameController_t2782302542 * __this, bool ___value0, const MethodInfo* method)
{
	{
		Player_t2393081601 * L_0 = __this->get_playerO_8();
		NullCheck(L_0);
		Button_t3896396478 * L_1 = L_0->get_button_2();
		bool L_2 = ___value0;
		NullCheck(L_1);
		Selectable_set_interactable_m2686686419(L_1, L_2, /*hidden argument*/NULL);
		Player_t2393081601 * L_3 = __this->get_playerX_7();
		NullCheck(L_3);
		Button_t3896396478 * L_4 = L_3->get_button_2();
		bool L_5 = ___value0;
		NullCheck(L_4);
		Selectable_set_interactable_m2686686419(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::SetPlayerColourInactive()
extern "C"  void GameController_SetPlayerColourInactive_m2956610117 (GameController_t2782302542 * __this, const MethodInfo* method)
{
	{
		Player_t2393081601 * L_0 = __this->get_playerO_8();
		NullCheck(L_0);
		Image_t538875265 * L_1 = L_0->get_panel_0();
		PlayerColour_t3744214061 * L_2 = __this->get_inactivePlayerColour_11();
		NullCheck(L_2);
		Color_t4194546905  L_3 = L_2->get_panelColour_0();
		NullCheck(L_1);
		VirtActionInvoker1< Color_t4194546905  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_3);
		Player_t2393081601 * L_4 = __this->get_playerO_8();
		NullCheck(L_4);
		Text_t9039225 * L_5 = L_4->get_text_1();
		PlayerColour_t3744214061 * L_6 = __this->get_inactivePlayerColour_11();
		NullCheck(L_6);
		Color_t4194546905  L_7 = L_6->get_textColour_1();
		NullCheck(L_5);
		VirtActionInvoker1< Color_t4194546905  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		Player_t2393081601 * L_8 = __this->get_playerX_7();
		NullCheck(L_8);
		Image_t538875265 * L_9 = L_8->get_panel_0();
		PlayerColour_t3744214061 * L_10 = __this->get_inactivePlayerColour_11();
		NullCheck(L_10);
		Color_t4194546905  L_11 = L_10->get_panelColour_0();
		NullCheck(L_9);
		VirtActionInvoker1< Color_t4194546905  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_11);
		Player_t2393081601 * L_12 = __this->get_playerX_7();
		NullCheck(L_12);
		Text_t9039225 * L_13 = L_12->get_text_1();
		PlayerColour_t3744214061 * L_14 = __this->get_inactivePlayerColour_11();
		NullCheck(L_14);
		Color_t4194546905  L_15 = L_14->get_textColour_1();
		NullCheck(L_13);
		VirtActionInvoker1< Color_t4194546905  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_15);
		return;
	}
}
// System.Void GridSpace::.ctor()
extern "C"  void GridSpace__ctor_m4290038827 (GridSpace_t3273240896 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GridSpace::SetSpace()
extern "C"  void GridSpace_SetSpace_m2120770685 (GridSpace_t3273240896 * __this, const MethodInfo* method)
{
	{
		Text_t9039225 * L_0 = __this->get_buttonText_3();
		GameController_t2782302542 * L_1 = __this->get_gameController_4();
		NullCheck(L_1);
		String_t* L_2 = GameController_GetPlayerSide_m3421618166(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		Button_t3896396478 * L_3 = __this->get_button_2();
		NullCheck(L_3);
		Selectable_set_interactable_m2686686419(L_3, (bool)0, /*hidden argument*/NULL);
		GameController_t2782302542 * L_4 = __this->get_gameController_4();
		NullCheck(L_4);
		GameController_EndTurn_m4088631203(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GridSpace::SetGameControllerReference(GameController)
extern "C"  void GridSpace_SetGameControllerReference_m920450854 (GridSpace_t3273240896 * __this, GameController_t2782302542 * ___controller0, const MethodInfo* method)
{
	{
		GameController_t2782302542 * L_0 = ___controller0;
		__this->set_gameController_4(L_0);
		return;
	}
}
// System.Void Player::.ctor()
extern "C"  void Player__ctor_m871706298 (Player_t2393081601 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerColour::.ctor()
extern "C"  void PlayerColour__ctor_m2322999566 (PlayerColour_t3744214061 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
