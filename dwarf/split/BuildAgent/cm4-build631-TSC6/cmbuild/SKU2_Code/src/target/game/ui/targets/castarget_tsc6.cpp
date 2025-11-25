/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\castarget_tsc6.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018E50C -> 0x80196E88
*/
// Range: 0x8018E50C -> 0x8018E7E0
void * CASTargetTSC6::CASTargetTSC6(class CASTargetTSC6 * const this /* r28 */, unsigned char skipUI /* r29 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__13CASTargetTSC6;
}

// Range: 0x8018E838 -> 0x8018EAA0
void * CASTargetTSC6::~CASTargetTSC6(class CASTargetTSC6 * const this /* r30 */) {
    // Local variables
    class UIScreenManager * pUISM; // r28
    unsigned int i; // r27

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__13CASTargetTSC6;
}

// Range: 0x8018EAA0 -> 0x8018EE18
void CASTargetTSC6::Init(class CASTargetTSC6 * const this /* r29 */, unsigned char bSkipUI /* r30 */) {
    // Local variables
    unsigned int i; // r26

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x8018EE18 -> 0x8018EFD0
unsigned char CASTargetTSC6::IsShutdown(class CASTargetTSC6 * const this /* r29 */) {
    // Local variables
    unsigned char rc; // r30
    class UIScreenManager * pUISM; // r3
    class UIScreenManager * pUISM; // r3

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x8018EFD0 -> 0x8018F050
void CASTargetTSC6::PreloadGridIconShaders() {
    // Local variables
    int i; // r28

    // References
    // -> class ERShader * s_pGridIconShaders[17];
    // -> unsigned int kGRID_SHADERS_IDS[17];
    // -> class EShaderManager _shaderman;
}

// Range: 0x8018F050 -> 0x8018F0B8
void CASTargetTSC6::UnloadGridIconShaders() {
    // Local variables
    int i; // r29

    // References
    // -> class ERShader * s_pGridIconShaders[17];
}

// Range: 0x8018F0B8 -> 0x8018F1B4
void CASTargetTSC6::PreloadIdleAnimations() {
    // Local variables
    unsigned int nNumAnimationsPerGender; // r0
    unsigned int i; // r29
    unsigned int i; // r26

    // References
    // -> class ERCharacter * s_pIdleAnimCharacters;
    // -> class ECharacterManager _characterman;
    // -> unsigned int s_nCasMaleSimAnimations[39];
    // -> class EAnimManager _animman;
    // -> class ERAnim * * s_pIdleAnimations;
    // -> unsigned int s_nCasFemaleSimAnimations[39];
}

// Range: 0x8018F1B4 -> 0x8018F264
void CASTargetTSC6::UnloadIdleAnimations() {
    // Local variables
    unsigned int nNumAnimationsPerGender; // r0
    unsigned int nNumAnimations; // r29
    unsigned int i; // r28

    // References
    // -> class ERCharacter * s_pIdleAnimCharacters;
    // -> class ERAnim * * s_pIdleAnimations;
}

// Range: 0x8018F264 -> 0x8018F5C4
void CASTargetTSC6::SetVariable(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, const char * szValue /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x8018F5C4 -> 0x8018F91C
void CASTargetTSC6::SetVariable_CGR_Hit(class CASTargetTSC6 * const this /* r31 */, const char * szValue /* r30 */) {
    // Local variables
    int bHitOption; // r0
    int option; // r0
    class InventoryItems * pInventory; // r0
    enum eBodyPart bodyPart; // r30
    class CasSimDescription * pSimDesc; // r0
    class SimBodyPart * pSimBodyPart; // r30
    unsigned char nMaxTexture; // r0
    int changeEvent; // r1+0xC

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018F91C -> 0x8018FAFC
void CASTargetTSC6::SetVariable_CGR_Delete(class CASTargetTSC6 * const this /* r31 */, const char * szValue /* r29 */) {
    // Local variables
    int bHitOption; // r0
    int option; // r0
    signed short nInstanceID; // r0
    class InventoryItems * pInventory; // r0
    class InventoryItem * pItem; // r30
    class ClothingItem * pClothingItem; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8018FAFC -> 0x8018FCE8
void CASTargetTSC6::SetVariable_CMU_morphVal(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r30 */, const char * szValue /* r29 */) {
    // Local variables
    char buf[3]; // r1+0x8
    int slider; // r0
    enum eMorphRegion currMorphRegion; // r31
    enum eSpecies species; // r30
    class CasSimDescription * pSimDesc; // r0
    float fMorphValue; // f30
    float fScale; // f0
    enum eMorphTargetRegion morphTargetParamRegion; // r29
    enum eLatticeMorphRegion latticeMorphParamRegion; // r29
}

// Range: 0x8018FCE8 -> 0x8018FE9C
void CASTargetTSC6::SetVariable_CMU_sexSet(class CASTargetTSC6 * const this /* r30 */, const char * szValue /* r31 */) {
    // Local variables
    class EString strCostumeName; // r1+0xC
    class EString strDatasetName; // r1+0x8
    class ERDataset * pRes; // r3
    class ERDataset * pRes; // r3

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x8018FE9C -> 0x8018FF90
void CASTargetTSC6::SetVariable_CMU_Randomize(class CASTargetTSC6 * const this /* r30 */) {
    // Local variables
    class CasSimDescription * pSimDesc; // r31
}

// Range: 0x8018FF90 -> 0x8018FFF0
void CASTargetTSC6::SetVariable_CHT_Accept(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x8018FFF0 -> 0x801902AC
void CASTargetTSC6::SetVariable_CAS_nav(class CASTargetTSC6 * const this /* r28 */, const char * szValue /* r29 */) {
    // Local variables
    unsigned char bNavResult; // r0
    unsigned int nTotalPersVal; // r31
    signed char i; // r30
    class CasSimDescription * pSimDesc; // r30
    signed char i; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801902AC -> 0x801903B8
void CASTargetTSC6::OnButtonSelect(class CASTargetTSC6 * const this /* r30 */, const char * szParams /* r31 */) {
    // Local variables
    int button_number; // r0
    enum eCASMenuButtons button_selected; // r4
}

// Range: 0x801903B8 -> 0x80190470
void CASTargetTSC6::OnButtonSelect_GenderScreen(class CASTargetTSC6 * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80190470 -> 0x80190590
void CASTargetTSC6::OnButtonSelect_MainScreen(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x80190590 -> 0x801905EC
void CASTargetTSC6::OnButtonSelect_BodyScreen() {}

// Range: 0x801905EC -> 0x801906A8
void CASTargetTSC6::OnButtonSelect_BodyMorphBodyScreen(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x801906A8 -> 0x801907E0
void CASTargetTSC6::OnButtonSelect_BodyMorphHeadScreen(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x801907E0 -> 0x80190994
void CASTargetTSC6::OnButtonSelect_FashionScreen(class CASTargetTSC6 * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80190994 -> 0x80190AD0
void CASTargetTSC6::OnButtonSelect_FashionHeadScreen(class CASTargetTSC6 * const this /* r30 */, enum eCASMenuButtons button_selected /* r31 */) {}

// Range: 0x80190AD0 -> 0x80190AF0
void CASTargetTSC6::OnButtonSelect_FashionTopScreen() {}

// Range: 0x80190AF0 -> 0x80190B18
void CASTargetTSC6::OnButtonSelect_FashionBottomScreen() {}

// Range: 0x80190B18 -> 0x80190B40
void CASTargetTSC6::OnButtonSelect_FashionAccessoriesScreen() {}

// Range: 0x80190B40 -> 0x80190CC8
void CASTargetTSC6::OnButtonSelect_FashionDesignScreen(class CASTargetTSC6 * const this /* r26 */) {
    // Local variables
    class InventoryItems * pInventory; // r29
    signed short nCurrentDyesInInventory[9]; // r1+0x1C
    signed short color; // r28
    signed short nDiff; // r27
}

// Range: 0x80190CC8 -> 0x80190E58
void CASTargetTSC6::OnButtonChange(class CASTargetTSC6 * const this /* r30 */, const char * szParams /* r31 */) {
    // Local variables
    int button_number; // r0
}

// Range: 0x80190E58 -> 0x8019117C
void CASTargetTSC6::HandleArrowButton(class CASTargetTSC6 * const this /* r29 */, const char * szValue /* r30 */) {
    // Local variables
    int option; // r0
    int changeEvent; // r1+0x8
    enum eCASMenuButtons button; // r30
}

// Range: 0x8019117C -> 0x8019148C
char * CASTargetTSC6::GetVariable(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
    unsigned char bUseArchetype; // r0
    unsigned char bIsDeletable; // r0
    signed short nInstanceID; // r0
    class InventoryItems * pInventory; // r0
    class InventoryItem * pItem; // r31
    class ClothingItem * pClothingItem; // r0
    class InventoryItems * pInventory; // r0
    signed short nCurrentDyesInInventory[9]; // r1+0x10
}

// Range: 0x8019148C -> 0x801915F8
float CASTargetTSC6::GetVariable_CMU_iniMorph(class CASTargetTSC6 * const this /* r30 */, const char * szVar /* r29 */) {
    // Local variables
    class CasSimDescription * pSimDesc; // r31
    char buf[3]; // r1+0x8
    int slider; // r0
    enum eMorphRegion currMorphRegion; // r30
    float fScale; // f31
    enum eSpecies species; // r29
    enum eLatticeMorphRegion latticeMorphParamRegion; // r30
    enum eMorphTargetRegion morphTargetParamRegion; // r30
}

// Range: 0x801915F8 -> 0x80191788
unsigned short * CASTargetTSC6::GetLocalizable(class CASTargetTSC6 * const this /* r29 */, const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x80191788 -> 0x8019193C
void CASTargetTSC6::GetLocalizable_GenderScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8019193C -> 0x80191BD8
void CASTargetTSC6::GetLocalizable_MainScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80191BD8 -> 0x80191FC4
void CASTargetTSC6::GetLocalizable_BodyScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // Local variables
    char buf[10]; // r1+0x30
    class CasSimDescription * pSimDesc; // r0
    char buf[10]; // r1+0x24
    class CasSimDescription * pSimDesc; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80191FC4 -> 0x801921C0
void CASTargetTSC6::GetLocalizable_BodyMorphBodyScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801921C0 -> 0x80192474
void CASTargetTSC6::GetLocalizable_BodyMorphHeadScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80192474 -> 0x80192718
void CASTargetTSC6::GetLocalizable_FashionScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80192718 -> 0x80192D40
void CASTargetTSC6::GetLocalizable_FashionHeadScreen(class CASTargetTSC6 * const this /* r31 */, const char * szVar /* r28 */, unsigned short * wideStr /* r29 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80192D40 -> 0x80192EA4
void CASTargetTSC6::GetLocalizable_FashionTopScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80192EA4 -> 0x801930B0
void CASTargetTSC6::GetLocalizable_FashionBottomScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801930B0 -> 0x801932CC
void CASTargetTSC6::GetLocalizable_FashionAccessoriesScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r29 */, unsigned short * wideStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801932CC -> 0x80193648
void CASTargetTSC6::GetLocalizable_FashionDesignScreen(class CASTargetTSC6 * const this /* r28 */, const char * szVar /* r27 */, unsigned short * wideStr /* r29 */) {
    // Local variables
    char buf[3]; // r1+0x2C
    int buttonIndex; // r0
    enum eCASMenuButtons actualButton; // r0
    char buf[8]; // r1+0x30
    int buttonIndex; // r0
    enum eCASMenuButtons actualButton; // r30
    char outputStr[32]; // r1+0x38

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80193648 -> 0x80193958
void CASTargetTSC6::InstallCMUFlashCommands(class CASTargetTSC6 * const this /* r30 */) {}

// Range: 0x80193958 -> 0x80193970
void CASTargetTSC6::HideFlashUIScreen() {}

// Range: 0x80193970 -> 0x801939EC
void CASTargetTSC6::RefreshCurrentScreen(class CASTargetTSC6 * const this /* r31 */) {
    // Local variables
    char highlightedButton[8]; // r1+0x10
    char * const params[2]; // r1+0x8
}

// Range: 0x801939EC -> 0x80193A74
void CASTargetTSC6::RefreshFlashUIScreen(class CASTargetTSC6 * const this /* r30 */, struct CASUIScreenState & newScreen /* r31 */) {
    // Local variables
    char highlightedButton[8]; // r1+0x10
    char * const params[2]; // r1+0x8
}

// Range: 0x80193A74 -> 0x80193B7C
void CASTargetTSC6::RestorePreviousFlashScreen(class CASTargetTSC6 * const this /* r31 */, unsigned char bRefresh /* r30 */) {}

// Range: 0x80193B7C -> 0x80193C00
void CASTargetTSC6::InitializeToScreen(class CASTargetTSC6 * const this /* r29 */, struct CASUIScreenState & currScreen /* r30 */, enum eScreenName screenId /* r31 */) {}

// Range: 0x80193C00 -> 0x80193D34
void CASTargetTSC6::OverlayNewFlashScreen(class CASTargetTSC6 * const this /* r31 */, enum eScreenName screenId /* r30 */) {
    // Local variables
    struct CASUIScreenState newScreen; // r1+0x48
}

// Range: 0x80193D34 -> 0x80193DD0
void CASTargetTSC6::OverlayNewFlashScreenHidePrevious(class CASTargetTSC6 * const this /* r30 */, enum eScreenName screenId /* r31 */) {
    // Local variables
    struct CASUIScreenState newScreen; // r1+0x8
}

// Range: 0x80193DD0 -> 0x80193E34
void CASTargetTSC6::OverlayGridScreenHideCurrentScreen(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x80193E34 -> 0x80193E98
void CASTargetTSC6::OverlayPersonalScreen(class CASTargetTSC6 * const this /* r30 */, unsigned char mode /* r31 */) {}

// Range: 0x80193E98 -> 0x80193EEC
void CASTargetTSC6::OverlayArchetypeScreen(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x80193EEC -> 0x80194208
int CASTargetTSC6::BuildButtonString(class CASTargetTSC6 * const this /* r29 */, char * buttonStr /* r31 */, enum eCASMenuButtons * fashionDesignButtons /* r30 */) {
    // Local variables
    int numButtons; // r0
}

// Range: 0x80194208 -> 0x80194254
int CASTargetTSC6::GetExtraButtons() {
    // Local variables
    int extraButtons; // r3
}

// Range: 0x80194254 -> 0x80194444
int CASTargetTSC6::FashionDesignBuildButtonStr(class CASTargetTSC6 * const this /* r25 */, char * buttonStr /* r26 */, enum eCASMenuButtons * fashionDesignButtons /* r27 */) {
    // Local variables
    class BitFlags nModFlags; // r1+0xC
    int changeEvent; // r1+0x8
    int subOption; // r21
    int buttonIndex; // r31
    unsigned char displayDyeCount; // r30
    class CasSimState * pSimState; // r29
    class CasSimDescription * pSimDesc; // r28
    int nCurPartFocus; // r20
    unsigned char bTestMod; // r3
    enum eBodyPart bodyPart; // r0
}

// Range: 0x80194444 -> 0x801944F4
enum eMorphRegion CASTargetTSC6::ConvertIndexToMorphRegion() {}

// Range: 0x801944F4 -> 0x801946CC
unsigned char CASTargetTSC6::ConvertPartUIFocusOptionToChangeEvent() {
    // Local variables
    unsigned char retResult; // r3
}

// Range: 0x801946CC -> 0x80194758
enum eBodyPart CASTargetTSC6::ConvertPartUIFocusToBodyPart() {}

// Range: 0x80194758 -> 0x80194A10
void CASTargetTSC6::PrintCurrentAndMaxOptionString(class CASTargetTSC6 * const this /* r30 */, char * outputStr /* r31 */, int curPartUIFocus /* r25 */, int suboptionNum /* r26 */) {
    // Local variables
    class CasSimDescription * pSimDesc; // r29
    int currOption; // r28
    int maxOption; // r27
    enum eBodyPart bodyPart; // r4
    class SimBodyPart * pBodyPart; // r29
    class SimBodyPart * pBodyPart; // r29
    class SimBodyPart * pBodyPart; // r29
    int nNumPossibleStyles; // r28
    int nCurrentOption; // r0
}

// Range: 0x80194A10 -> 0x80194B28
void CASTargetTSC6::LaunchKeyboard(class CASTargetTSC6 * const this /* r29 */) {
    // Local variables
    struct KeyboardWorkOrder KeyboardWorkorder[2]; // r1+0x8
}

// Range: 0x80194B28 -> 0x80194B9C
void CASTargetTSC6::RemoveKeyboard(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x80194B9C -> 0x80194C48
void CASTargetTSC6::SaveName(class CASTargetTSC6 * const this /* r28 */) {
    // Local variables
    unsigned short * firstName; // r30
    unsigned short * lastName; // r29
}

// Range: 0x80194C48 -> 0x80194DD0
void CASTargetTSC6::Update(class CASTargetTSC6 * const this /* r29 */) {
    // Local variables
    class EVec2 dummy; // r1+0x8
    unsigned int i; // r30

    // References
    // -> float _dt;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x80194DD0 -> 0x80194E98
void CASTargetTSC6::Draw(class CASTargetTSC6 * const this /* r30 */, class ERC * prc /* r31 */) {}

// Range: 0x80194E98 -> 0x80194EE4
void CASTargetTSC6::GotoInitialScreen() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80194EE4 -> 0x801952F0
int CASTargetTSC6::GetCurrentUIFocus(const class CASTargetTSC6 * const this /* r30 */, struct CASUIScreenState & screen /* r31 */) {}

// Range: 0x801952F0 -> 0x8019532C
unsigned char CASTargetTSC6::IsViewingMirror() {}

// Range: 0x8019532C -> 0x801953B4
void CASTargetTSC6::EnterCASEditMode(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x801953B4 -> 0x801954F4
void CASTargetTSC6::StartupMediator(class CASTargetTSC6 * const this /* r30 */, unsigned char bSkipUI /* r31 */) {
    // Local variables
    int nCASMode; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801954F4 -> 0x80195630
void CASTargetTSC6::ShutdownMediator(class CASTargetTSC6 * const this /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x80195630 -> 0x801959E4
void CASTargetTSC6::ChangeMediator(class CASTargetTSC6 * const this /* r29 */, int nSimNum /* r30 */, class CasSimState * pCharState /* r25 */) {
    // Local variables
    class CasSimDescription * pSimDesc; // r0
    unsigned int nSlotNum; // r26
    int neighborId; // r0
    unsigned int i; // r25
    class CasSimDescription & simDesc; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x801959E4 -> 0x80195A98
class CasScene * CASTargetTSC6::CreateScene() {
    // Local variables
    class CasScene * pScene; // r31
}

// Range: 0x80195A98 -> 0x80195BA4
void CASTargetTSC6::BroadcastNewFocus(class CASTargetTSC6 * const this /* r31 */) {
    // Local variables
    int uiFocus; // r30
    enum FocusArea eventFocus; // r0
}

// Range: 0x80195BA4 -> 0x80195BE8
void CASTargetTSC6::GobackAndRestore(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x80195BE8 -> 0x80195CA8
void CASTargetTSC6::BackoutAndShutdown(class CASTargetTSC6 * const this /* r30 */, unsigned char saveBeforeQuit /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x80195CA8 -> 0x80195D4C
unsigned char CASTargetTSC6::UnloadLastScreen(class CASTargetTSC6 * const this /* r29 */) {
    // Local variables
    class UIScreenManager * pUISM; // r31
    unsigned char rc; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80195D4C -> 0x80195D8C
void CASTargetTSC6::GotoGame(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x80195D8C -> 0x80195E88
void CASTargetTSC6::Shutdown(class CASTargetTSC6 * const this /* r30 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80195E88 -> 0x80195FE8
void CASTargetTSC6::SpawnYesNoDialog(class CASTargetTSC6 * const this /* r24 */, enum eCASDialogNavOptions navOption /* r25 */, const unsigned short * msg /* r26 */, const unsigned short * title /* r27 */, int preselected /* r28 */, class CBFunctor1 * pCallback /* r29 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80195FE8 -> 0x80196148
void CASTargetTSC6::DialogYesNoSelectionCallback(class CASTargetTSC6 * const this /* r31 */, int selection /* r30 */) {}

// Range: 0x80196148 -> 0x8019628C
void CASTargetTSC6::DeleteSelectedClothingItem(class CASTargetTSC6 * const this /* r31 */) {
    // Local variables
    signed short nInstanceID; // r0
    class InventoryItems * pInventory; // r29
    class InventoryItem * pItem; // r28
    class ClothingItem * pClothingItem; // r27
}

// Range: 0x8019628C -> 0x80196458
void CASTargetTSC6::ChangeToSelectedArchetype(class CASTargetTSC6 * const this /* r28 */) {
    // Local variables
    class CasSimDescription & storedSimDescription; // r30
    enum eArchetype archetype; // r29
    class EString strCostumeName; // r1+0xC
    class EString strDatasetName; // r1+0x8
    class ERDataset * pRes; // r3
    class CasSimDescription newSimDescription; // r1+0x28

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x80196458 -> 0x8019645C
void CASTargetTSC6::DialogNoSelectionCallback() {}

// Range: 0x8019645C -> 0x80196568
void CASTargetTSC6::SpawnOKDialog(class CASTargetTSC6 * const this /* r27 */, const unsigned short * msg /* r28 */, const unsigned short * title /* r29 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80196568 -> 0x801965A0
void CASTargetTSC6::DialogOKSelectionCallback(class CASTargetTSC6 * const this /* r31 */) {}

// Range: 0x801965A0 -> 0x80196930
void CASTargetTSC6::AddBonusClothingItem(class CASTargetTSC6 * const this /* r30 */, int nCheatID /* r31 */) {
    // Local variables
    class InventoryItems * pInventory; // r25
    enum eBodyPart bodyPart[5]; // r1+0x2C
    class EString strClothingSetName[5]; // r1+0x18
    int nNumAddedClothingItems; // r24
    int i; // r24
    unsigned char bCreatedSuccessfully; // r23
    int i; // r22
    signed short nClothingItemID; // r0
    int i; // r22

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80196930 -> 0x80196AE4
unsigned char CASTargetTSC6::SaveCASDataToNeighborhood(class CASTargetTSC6 * const this /* r26 */) {
    // Local variables
    unsigned char bResult; // r29
    int source; // r0
    int nFirstSim; // r28
    int i; // r27
    class StackString2 * pFamilyName; // r27
    class CasSimDescription & simDesc; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x80196AE4 -> 0x80196E88
void CASTargetTSC6::SaveSimToFamilySlot(class CASTargetTSC6 * const this /* r26 */, int nSimNum /* r27 */) {
    // Local variables
    unsigned int nSlotNum; // r29
    int neighborId; // r0
    unsigned int i; // r24
    class ENeighborhoodCustomChar & simCustomData; // r28
    unsigned short * firstName; // r24
    unsigned short * lastName; // r25
    class CasSimDescription * pSimDesc; // r24
    int neighborId; // r24
    class Neighbor * pNeighbor; // r0
    int familyNum; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}


