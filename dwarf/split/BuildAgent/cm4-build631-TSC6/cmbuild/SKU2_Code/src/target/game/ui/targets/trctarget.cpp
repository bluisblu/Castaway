/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\trctarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F4A6C -> 0x801F60CC
*/
// Range: 0x801F4A6C -> 0x801F4D8C
void * TRCTarget::TRCTarget(class TRCTarget * const this /* r28 */) {
    // References
    // -> static const char * const TRC_loaded;
    // -> struct [anonymous] __vt__9TRCTarget;
}

// Range: 0x801F4D8C -> 0x801F4E28
void * TRCTarget::~TRCTarget(class TRCTarget * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__9TRCTarget;
}

// Range: 0x801F4E28 -> 0x801F4E2C
void TRCTarget::SelectionCallback() {}

// Range: 0x801F4E2C -> 0x801F4E30
void TRCTarget::ZeroInputCallback() {}

// Range: 0x801F4E30 -> 0x801F4E34
void TRCTarget::Update() {}

// Range: 0x801F4E34 -> 0x801F4F54
void TRCTarget::HideDialog(class TRCTarget * const this /* r29 */) {
    // Local variables
    class UIScreenManager * pUISM; // r30
    class EController * pCtrl; // r0

    // References
    // -> class GameData _gd;
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801F4F54 -> 0x801F4FE0
void TRCTarget::ShowCoreDialog(class TRCTarget * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F4FE0 -> 0x801F5074
void TRCTarget::ShowExtensionDialog(class TRCTarget * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F5074 -> 0x801F5124
void TRCTarget::ShowBatteryLowDialog(class TRCTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801F5124 -> 0x801F5278
void TRCTarget::SpawnDialog(class TRCTarget * const this /* r29 */) {
    // Local variables
    class EController * pCtrl; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801F5278 -> 0x801F53EC
char * TRCTarget::GetVariable(class TRCTarget * const this /* r28 */, const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801F53EC -> 0x801F5560
unsigned short * TRCTarget::GetLocalizable(class TRCTarget * const this /* r29 */, const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    int num; // r0
    unsigned short * outString; // r30
}

// Range: 0x801F5560 -> 0x801F5758
void TRCTarget::SetVariable(class TRCTarget * const this /* r29 */, const char * szCommand /* r31 */) {
    // Local variables
    class UIScreenManager * pUISM; // r0

    // References
    // -> class EGlobal _globals;
    // -> static const char * const TRC_loaded;
}

// Range: 0x801F5758 -> 0x801F5A10
void TRCTarget::CalculateBackgroundSize(class TRCTarget * const this /* r29 */) {
    // Local variables
    class EVec2 vTLdummy; // r1+0x60
    class EVec2 bodyTextSize; // r1+0x58
    float backdropHeight; // f31
    class EVec2 titleTextSize; // r1+0x50
}

// Range: 0x801F5A10 -> 0x801F5BB8
float TRCTarget::CalculateMaxOptionWidth(class TRCTarget * const this /* r29 */) {
    // Local variables
    float optionWidth; // f31
    class EVec2 size; // r1+0x60
    class EVec2 vTLdummy; // r1+0x58
    class EVec2 vBRdummy; // r1+0x50
}

// Range: 0x801F5BB8 -> 0x801F5C70
class EVec2 TRCTarget::GetOptionTextSize(class EVec2 * ret /* r28 */, unsigned short * text /* r29 */, class EVec2 & vTL /* r30 */, class EVec2 & vBR /* r31 */) {
    // Local variables
    class AptParagraph paragraph; // r1+0x18
    class EVec4 vColor; // r1+0x8
}

// Range: 0x801F5C70 -> 0x801F60BC
void TRCTarget::SetupWidgets(class TRCTarget * const this /* r31 */) {
    // Local variables
    int i; // r28
    float titleY; // f31
    float optionsY; // f31
    int i; // r28
    int i; // r28

    // References
    // -> char * TRC_buttonN_Table[3];
}

// Range: 0x801F60BC -> 0x801F60CC
void TRCTarget::HideDialog() {}


