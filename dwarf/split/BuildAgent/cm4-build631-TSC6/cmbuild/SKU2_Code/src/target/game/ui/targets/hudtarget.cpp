/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\hudtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CB3B4 -> 0x801CC788
*/
// Range: 0x801CB3B4 -> 0x801CB4B4
unsigned char StartFire() {
    // Local variables
    class ObjSelector * const pFireSel; // r28
    signed short objid; // r0
    class cXObject * pObj; // r31
    int attemptcount; // r27
    int xsize; // r0
    int ysize; // r0
    int x; // r31
    int y; // r0
}

// Range: 0x801CB4B4 -> 0x801CB4B8
void CUCS2ToUTF8() {}

// Range: 0x801CB4B8 -> 0x801CB4DC
unsigned int GetTutorialLocks() {
    // Local variables
    unsigned int tutorialLocks; // r3

    // References
    // -> static unsigned int tutorialLockTable[8];
}

// Range: 0x801CB4DC -> 0x801CB6DC
void * HUDTarget::HUDTarget(class HUDTarget * const this /* r29 */) {
    // References
    // -> class GameData _gd;
    // -> class ERFont * m_pFont;
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9HUDTarget;
}

// Range: 0x801CB6DC -> 0x801CB7A0
void * HUDTarget::~HUDTarget(class HUDTarget * const this /* r30 */) {
    // References
    // -> class GameData _gd;
    // -> struct [anonymous] __vt__9HUDTarget;
}

// Range: 0x801CB7A0 -> 0x801CB814
void HUDTarget::AttachControllers(class HUDTarget * const this /* r30 */) {
    // Local variables
    class EController * pController0; // r31

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x801CB814 -> 0x801CB86C
void HUDTarget::ReleaseControllers(class HUDTarget * const this /* r31 */) {
    // Local variables
    class EController * pController0; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x801CB86C -> 0x801CB870
void HUDTarget::SetVariable() {}

// Range: 0x801CB870 -> 0x801CBA28
void HUDTarget::SetPlayerVariable(class HUDTarget * const this /* r28 */, const char * szCommand /* r29 */, const char * szParams /* r30 */) {
    // Local variables
    unsigned int newState; // r0
}

// Range: 0x801CBA28 -> 0x801CBA2C
char * HUDTarget::GetVariable() {}

// Range: 0x801CBA2C -> 0x801CBBFC
char * HUDTarget::GetPlayerVariable(class HUDTarget * const this /* r28 */, const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CBBFC -> 0x801CBC00
unsigned short * HUDTarget::GetLocalizable() {}

// Range: 0x801CBC00 -> 0x801CBE18
unsigned short * HUDTarget::GetPlayerLocalizable(class HUDTarget * const this /* r28 */, const char * szVar /* r29 */) {
    // Local variables
    unsigned short * wideStr; // r30
    const char * houseName; // r29
    const unsigned short * name; // r4
    unsigned short * outString; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CBE18 -> 0x801CBE90
void HUDTarget::ShowHUD(class HUDTarget * const this /* r31 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801CBE90 -> 0x801CBF00
void HUDTarget::HideHUD(const class HUDTarget * const this /* r31 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801CBF00 -> 0x801CBF10
void HUDTarget::OnPlayerHUDShow() {}

// Range: 0x801CBF10 -> 0x801CBF1C
void HUDTarget::OnPlayerHUDHide() {}

// Range: 0x801CBF1C -> 0x801CBF80
void HUDTarget::OnPlayerHUDHideStart(class HUDTarget * const this /* r31 */) {}

// Range: 0x801CBF80 -> 0x801CBF84
void HUDTarget::OnHUDShow() {}

// Range: 0x801CBF84 -> 0x801CBF88
void HUDTarget::OnHUDHideStart() {}

// Range: 0x801CBF88 -> 0x801CBF8C
void HUDTarget::OnHUDHide() {}

// Range: 0x801CBF8C -> 0x801CC038
void HUDTarget::InstallHUDIcons(class HUDTarget * const this /* r30 */) {
    // References
    // -> static char * s_strMeterIcons[5];
}

// Range: 0x801CC038 -> 0x801CC128
unsigned char HUDTarget::ShouldHUDBeVisible(const class HUDTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801CC128 -> 0x801CC15C
void HUDTarget::UpdateTutorialLocks() {
    // Local variables
    unsigned char unlocked; // r0

    // References
    // -> static int tutorialStage;
}

// Range: 0x801CC15C -> 0x801CC1A8
void HUDTarget::Update(class HUDTarget * const this /* r31 */) {}

// Range: 0x801CC1A8 -> 0x801CC274
void HUDTarget::UpdateClock() {
    // Local variables
    class cSimulator * simulator; // r31
    unsigned int hour; // r31
}

// Range: 0x801CC274 -> 0x801CC290
void HUDTarget::UpdateActivePlayer() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CC290 -> 0x801CC300
void HUDTarget::AddMenu(class HUDTarget * const this /* r27 */, class cXObject * pObj /* r28 */, const class BString2 & strName /* r29 */, unsigned int shaderID /* r30 */, class ERShader * pShader /* r31 */) {}

// Range: 0x801CC300 -> 0x801CC380
void HUDTarget::AddMenuItem(const class HUDTarget * const this /* r25 */, class cXObject * pObj /* r26 */, class Interaction * pAction /* r27 */, const class BString2 & strName /* r28 */, unsigned int shaderID /* r29 */, class ERShader * pShader /* r30 */, unsigned char bDisabled /* r31 */) {}

// Range: 0x801CC380 -> 0x801CC3D4
void HUDTarget::NotifyMenuRemoveObj(class HUDTarget * const this /* r31 */) {}

// Range: 0x801CC3D4 -> 0x801CC3E8
void HUDTarget::NotifyLotEndOccured() {}

// Range: 0x801CC3E8 -> 0x801CC3FC
void HUDTarget::NotifyLotStartOccured() {}

// Range: 0x801CC3FC -> 0x801CC444
void HUDTarget::CompleteMenu(class HUDTarget * const this /* r31 */) {}

// Range: 0x801CC444 -> 0x801CC4A8
unsigned char HUDTarget::ShowMenu(class HUDTarget * const this /* r30 */, unsigned char dcObjectChange /* r31 */) {
    // Local variables
    unsigned char rc; // r4
}

// Range: 0x801CC4A8 -> 0x801CC52C
unsigned char HUDTarget::IsMenuAvailable(const class HUDTarget * const this /* r30 */) {
    // Local variables
    unsigned char rc; // r31
}

// Range: 0x801CC52C -> 0x801CC544
void HUDTarget::CloseMenu() {}

// Range: 0x801CC544 -> 0x801CC614
unsigned char HUDTarget::RequestHUD(class HUDTarget * const this /* r31 */) {
    // Local variables
    char strPlayerNum[8]; // r1+0x10
    char strHudMode[8]; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x801CC614 -> 0x801CC640
unsigned char HUDTarget::AddHUDControl() {}

// Range: 0x801CC640 -> 0x801CC668
unsigned char HUDTarget::RemoveHUDControl() {}

// Range: 0x801CC668 -> 0x801CC6CC
unsigned char HUDTarget::ManageHUD() {}

// Range: 0x801CC6CC -> 0x801CC778
unsigned char HUDTarget::ApplyMotiveCurveArray(class HUDTarget * const this /* r29 */, unsigned int namespaceID /* r30 */, signed short curveTable /* r31 */) {}

// Range: 0x801CC778 -> 0x801CC788
void HUDTarget::GotoMainMenu() {}


