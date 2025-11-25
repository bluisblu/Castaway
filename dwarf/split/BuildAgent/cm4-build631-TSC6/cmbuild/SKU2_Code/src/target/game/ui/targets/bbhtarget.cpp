/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\bbhtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A0578 -> 0x801A1D48
*/
// Range: 0x801A0578 -> 0x801A09C0
void * BBHTarget::BBHTarget(class BBHTarget * const this /* r31 */, unsigned char inventory /* r29 */) {
    // References
    // -> class EGlobal _globals;
    // -> static const char * const BBH_wii_floorplan;
    // -> static const char * const BBH_wii_trash;
    // -> static const char * const BBH_wii_x;
    // -> static const char * const BBH_wii_place;
    // -> static const char * const BBH_wii_undo;
    // -> static const char * const BBH_wii_rotate;
    // -> static const char * const BBH_wii_grid;
    // -> static const char * const BBH_wii_move;
    // -> static const char * const BBH_wii_button_minus;
    // -> static const char * const BBH_wii_button_plus;
    // -> static const char * const BBH_wii_button_Z;
    // -> static const char * const BBH_wii_button_C;
    // -> static const char * const BBH_wii_analog_stick;
    // -> static const char * const BBH_wii_button_B;
    // -> static const char * const BBH_wii_button_A;
    // -> static const char * const BBH_wii_button_2;
    // -> static const char * const BBH_wii_button_1;
    // -> static const char * const BBH_exit_text;
    // -> static const char * const BBH_puck;
    // -> static const char * const BBH_item_backdrop;
    // -> static const char * const BBH_icon_backdrop;
    // -> static const char * const BBH_item;
    // -> static const char * const BBH_callout_undo;
    // -> static const char * const BBH_mode;
    // -> static const char * const BBH_money;
    // -> static const char * const BBH_price;
    // -> static const char * const BBH_hide_callback;
    // -> static const char * const BBH_show_callback;
    // -> static const char * const BBH_exists;
    // -> struct [anonymous] __vt__9BBHTarget;
}

// Range: 0x801A09C0 -> 0x801A0A7C
void * BBHTarget::~BBHTarget(class BBHTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9BBHTarget;
}

// Range: 0x801A0A7C -> 0x801A0CA4
void BBHTarget::SetVariable(class BBHTarget * const this /* r29 */, const char * szCommand /* r30 */) {
    // Local variables
    int index; // r0

    // References
    // -> class EGlobal _globals;
    // -> static const char * const BBH_hide_callback;
    // -> static const char * const BBH_show_callback;
    // -> class EGraphics * _pGfx;
}

// Range: 0x801A0CA4 -> 0x801A0D14
char * BBHTarget::GetVariable(const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31

    // References
    // -> static const char * const BBH_exists;
}

// Range: 0x801A0D14 -> 0x801A0E80
unsigned short * BBHTarget::GetLocalizable(class BBHTarget * const this /* r30 */, const char * szVar /* r31 */) {
    // Local variables
    unsigned short wideStr[8192]; // r1+0x18
    const unsigned short * const pString; // r0
    const unsigned short * const pString; // r3
    unsigned short * outString; // r31

    // References
    // -> static const char * const BBH_exit_text;
    // -> class EGlobal _globals;
    // -> static const char * const BBH_callout_undo;
    // -> static const char * const BBH_mode;
}

// Range: 0x801A0E80 -> 0x801A1020
void BBHTarget::Update(class BBHTarget * const this /* r30 */) {}

// Range: 0x801A1020 -> 0x801A1120
void BBHTarget::SetCurrentPriceAndShaderID(class BBHTarget * const this /* r29 */, struct BBHPriceInfo * priceInfo /* r6 */, unsigned int shaderID /* r30 */) {
    // Local variables
    int toolActiveNext; // r31
}

// Range: 0x801A1120 -> 0x801A1160
void BBHTarget::SetCurrentPrice() {}

// Range: 0x801A1160 -> 0x801A125C
void BBHTarget::ReflowWiiWidgets(class BBHTarget * const this /* r27 */, unsigned char isGrabMode /* r28 */, unsigned char isRemovable /* r29 */, unsigned char isSwitch /* r30 */) {}

// Range: 0x801A125C -> 0x801A13C0
void BBHTarget::ReflowPriceWidgets(class BBHTarget * const this /* r28 */) {
    // Local variables
    unsigned short * wideStr; // r29
    class EVec2 priceBox; // r1+0x18
    int priceTextHalf; // r29
}

// Range: 0x801A13C0 -> 0x801A1478
void BBHTarget::ReflowToolNameGadget(class BBHTarget * const this /* r29 */, unsigned short * text /* r30 */) {
    // Local variables
    class EVec2 textBox; // r1+0x18
    int toolTextLength; // r31
}

// Range: 0x801A1478 -> 0x801A14CC
void BBHTarget::SetCurrentShader() {
    // References
    // -> static const char * const BBH_item;
}

// Range: 0x801A14CC -> 0x801A14D4
unsigned char BBHTarget::IsBuildBuyHUDActive() {}

// Range: 0x801A14D4 -> 0x801A1520
void BBHTarget::ShowBuildBuyHUD(class BBHTarget * const this /* r31 */) {}

// Range: 0x801A1520 -> 0x801A156C
void BBHTarget::HideBuildBuyHUD(class BBHTarget * const this /* r31 */) {}

// Range: 0x801A156C -> 0x801A1640
void BBHTarget::UpdateBuildBuyHUD(class BBHTarget * const this /* r29 */) {
    // Local variables
    int dollars; // r30
    class cSimulator * pSimulator; // r0
    class StackString2 strMoney; // r1+0x8

    // References
    // -> static int recordOfDollars;
}

// Range: 0x801A1640 -> 0x801A1654
void BBHTarget::SetSellingPig() {}

// Range: 0x801A1654 -> 0x801A166C
void BBHTarget::SetBBHMode() {}

// Range: 0x801A166C -> 0x801A1770
void BBHTarget::ReflowIconsOpen(class BBHTarget * const this /* r29 */) {
    // Local variables
    int i; // r30
    int i; // r30
}

// Range: 0x801A1770 -> 0x801A1834
void BBHTarget::ReflowIconAnimation(class BBHTarget * const this /* r29 */, int swfNum /* r31 */, int currentToolState /* r30 */) {
    // Local variables
    char animBuffer[50]; // r1+0x8

    // References
    // -> char * SwfNameTable[5];
    // -> char * IconStateNames[26];
    // -> static int ToolStates[2][10][5];
}

// Range: 0x801A1834 -> 0x801A1900
class EVec2 BBHTarget::GetOptionTextSize(class EVec2 * ret /* r28 */, unsigned short * text /* r29 */, class EVec2 & vTL /* r30 */, class EVec2 & vBR /* r31 */, float fontSize /* f31 */) {
    // Local variables
    class AptParagraph paragraph; // r1+0x18
    class EVec4 vColor; // r1+0x8
}

// Range: 0x801A1900 -> 0x801A1A5C
void BBHTarget::MakeBBHPriceInfoString(class BBHTarget * const this /* r31 */, unsigned short * wideStr /* r30 */) {
    // Local variables
    unsigned short scratchSpace[2048]; // r1+0x8
    int average; // r5
}

// Range: 0x801A1A5C -> 0x801A1B70
class ELocString BBHTarget::GetCurrentToolName() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A1B70 -> 0x801A1D20
void BBHTarget::UpdateCornerIcon(class BBHTarget * const this /* r31 */) {}

// Range: 0x801A1D20 -> 0x801A1D48
unsigned char BBHTarget::ShowCloneToolCallout() {}


