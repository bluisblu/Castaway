/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\g2dtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A588C -> 0x801A8584
*/
// Range: 0x801A588C -> 0x801A5C50
void * G2DTarget::G2DTarget(class G2DTarget * const this /* r27 */) {
    // References
    // -> unsigned char m_bInitComplete;
    // -> static const char * const G2D_loaded;
    // -> struct [anonymous] __vt__9G2DTarget;
}

// Range: 0x801A5C50 -> 0x801A5D54
void * G2DTarget::~G2DTarget(class G2DTarget * const this /* r29 */) {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> unsigned char m_bInitComplete;
    // -> struct [anonymous] __vt__9G2DTarget;
}

// Range: 0x801A5D54 -> 0x801A5EE8
char * G2DTarget::GetVariable(class G2DTarget * const this /* r28 */, const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801A5EE8 -> 0x801A5F38
void G2DDummyPrintf() {}

// Range: 0x801A5F38 -> 0x801A6108
unsigned short * G2DTarget::GetLocalizable(class G2DTarget * const this /* r27 */, const char * szVar /* r28 */) {
    // Local variables
    unsigned short * wideStr; // r29
    int num; // r0
    unsigned short * outString; // r30
}

// Range: 0x801A6108 -> 0x801A64D8
void G2DTarget::SetVariable(class G2DTarget * const this /* r31 */, const char * szCommand /* r28 */, const char * szParams /* r30 */) {
    // Local variables
    int save; // r5
    int save; // r5

    // References
    // -> static const char * const G2D_loaded;
}

// Range: 0x801A64D8 -> 0x801A65C0
void G2DTarget::ReflowButtonSelection(class G2DTarget * const this /* r26 */) {
    // Local variables
    int sel[3]; // r1+0x8
    int i; // r0
    int i; // r27

    // References
    // -> char * G2D_buttonN_Table[3];
}

// Range: 0x801A65C0 -> 0x801A68EC
void G2DTarget::Update(class G2DTarget * const this /* r31 */) {
    // Local variables
    class UIReflow reflow; // r1+0x18
    class EController * pCtrl; // r29
    class EVec2 dummy; // r1+0x10
    unsigned int selectedItem; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class AptViewer * _gpAptViewer;
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x801A68EC -> 0x801A6934
void G2DTarget::HideDialog() {}

// Range: 0x801A6934 -> 0x801A6990
void G2DTarget::HideDialogCursor(class G2DTarget * const this /* r31 */) {}

// Range: 0x801A6990 -> 0x801A69B8
void G2DTarget::HideDialogRunCallbacks() {}

// Range: 0x801A69B8 -> 0x801A69C0
unsigned char G2DTarget::IsG2DActive() {}

// Range: 0x801A69C0 -> 0x801A69C8
unsigned char G2DTarget::IsG2DSpawned() {}

// Range: 0x801A69C8 -> 0x801A69CC
void G2DTarget::PushAptButtonFilters() {}

// Range: 0x801A69CC -> 0x801A6A00
void G2DTarget::PushAptButtonFiltersForPlayer(class G2DTarget * const this /* r31 */) {}

// Range: 0x801A6A00 -> 0x801A6A58
void G2DTarget::PopAptButtonFilters(class G2DTarget * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A6A58 -> 0x801A6D38
void G2DTarget::SpawnDialog(class G2DTarget * const this /* r30 */, class UIDialog * dialogSetup /* r31 */) {
    // Local variables
    class InteractorManager * pIntMgr; // r29
    class Interactor * pInteractor; // r0

    // References
    // -> class GameData _gd;
    // -> unsigned int g_g2dDialogTimeout;
    // -> class EGlobal _globals;
}

// Range: 0x801A6D38 -> 0x801A71E4
void G2DTarget::CalculateBackgroundSize(class G2DTarget * const this /* r31 */) {
    // Local variables
    unsigned short * wideStr; // r29
    class EVec2 vTLdummy; // r1+0xB0
    float backdropHeight; // f31
    class EVec2 body1TextSize; // r1+0xA8
    class EVec2 body1TextSize; // r1+0xA0
    class EVec2 body2TextSize; // r1+0x98
    class EVec2 body1TextSize; // r1+0x90
    class EVec2 titleTextSize; // r1+0x88
}

// Range: 0x801A71E4 -> 0x801A7474
void G2DTarget::CalculateBody1AndBody2(class G2DTarget * const this /* r31 */) {
    // Local variables
    class EVec2 vTLdummy; // r1+0x20
    class EVec4 vColor; // r1+0x28
    class AptParagraph paragraph; // r1+0x38
    class BString2 body1[2]; // r1+0x18
    class BString2 body2[2]; // r1+0x10
    int current; // r27
    int previous; // r28
    int lineBoundary; // r26
    int bodyEnd; // r0
    int body; // r25
    class BString2 & b1; // r24
    class BString2 & b2; // r23
    int wordEnd; // r22
    int wordLen; // r22
    class BString2 word; // r1+0xC
}

// Range: 0x801A7474 -> 0x801A7628
float G2DTarget::CalculateMaxOptionWidth(class G2DTarget * const this /* r29 */) {
    // Local variables
    float optionWidth; // f31
    class EVec2 size; // r1+0x60
    class EVec2 vTLdummy; // r1+0x58
    class EVec2 vBRdummy; // r1+0x50
}

// Range: 0x801A7628 -> 0x801A76F4
class EVec2 G2DTarget::GetOptionTextSize(class EVec2 * ret /* r28 */, unsigned short * text /* r29 */, float fontSize /* f31 */, class EVec2 & vTL /* r30 */, class EVec2 & vBR /* r31 */) {
    // Local variables
    class AptParagraph paragraph; // r1+0x18
    class EVec4 vColor; // r1+0x8
}

// Range: 0x801A76F4 -> 0x801A7C8C
void G2DTarget::SetupWidgets(class G2DTarget * const this /* r31 */) {
    // Local variables
    int i; // r28
    float titleY; // f31
    float optionsY; // f31
    int i; // r28
    int i; // r28

    // References
    // -> char * G2D_buttonN_Table[3];
}

// Range: 0x801A7C8C -> 0x801A7DAC
void G2DTarget::UnloadDialog(class G2DTarget * const this /* r29 */) {}

// Range: 0x801A7DAC -> 0x801A7F64
void G2DTarget::SetShaders(class G2DTarget * const this /* r27 */, class UIDialog * dialogSetup /* r28 */) {
    // Local variables
    signed short pictureHeight; // r30
    signed short pictureWidth; // r29
}

// Range: 0x801A7F64 -> 0x801A7F84
void G2DTarget::ExecuteSelectionCallback() {}

// Range: 0x801A7F84 -> 0x801A7FA4
void G2DTarget::ExecuteZeroInputCallback() {}

// Range: 0x801A7FA4 -> 0x801A8030
void G2DTarget::ExecuteDialogClosedCallback(class G2DTarget * const this /* r31 */) {
    // Local variables
    class CBFunctor0 * save_cb; // r0
}

// Range: 0x801A8030 -> 0x801A833C
void G2DTarget::SetupDialogData(class G2DTarget * const this /* r29 */, class UIDialog * dialogSetup /* r30 */) {}

// Range: 0x801A833C -> 0x801A83C4
void G2DTarget::UnloadUI(class G2DTarget * const this /* r30 */) {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801A83C4 -> 0x801A83D8
unsigned char G2DTarget::CheckPlayerInput() {}

// Range: 0x801A83D8 -> 0x801A845C
unsigned char G2DTarget::ServiceG2DShutdown(class G2DTarget * const this /* r31 */) {
    // Local variables
    unsigned char rc; // r4
}

// Range: 0x801A845C -> 0x801A84E8
void * UIDialog::~UIDialog(class UIDialog * const this /* r30 */) {}

// Range: 0x801A84E8 -> 0x801A84FC
void UIDialog::SpawnDialog() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A84FC -> 0x801A8574
void UIDialog::HideDialog(class UIDialog * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A8574 -> 0x801A8584
void UIDialog::HideDialogCursor() {
    // References
    // -> class EGlobal _globals;
}


