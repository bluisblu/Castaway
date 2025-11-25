/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\m2mtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B0388 -> 0x801B372C
*/
// Range: 0x801B0388 -> 0x801B0908
void * M2MTarget::M2MTarget(class M2MTarget * const this /* r30 */) {
    // Local variables
    int source; // r0
    class UIScreenManager * pUISM; // r27
    int j; // r28

    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9M2MTarget;
}

// Range: 0x801B0908 -> 0x801B0A0C
void * M2MTarget::~M2MTarget(class M2MTarget * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__9M2MTarget;
}

// Range: 0x801B0A0C -> 0x801B0BC4
char * M2MTarget::GetVariable(class M2MTarget * const this /* r28 */, const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801B0BC4 -> 0x801B0DF4
unsigned short * M2MTarget::GetLocalizable(class M2MTarget * const this /* r29 */, const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned int nItem; // r4
    unsigned short * outString; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B0DF4 -> 0x801B0F4C
void M2MTarget::SetVariable(class M2MTarget * const this /* r29 */, const char * szCommand /* r30 */) {
    // Local variables
    unsigned char bItemEnabled; // r0
}

// Range: 0x801B0F4C -> 0x801B101C
void M2MTarget::ReflowButtonSelection(class M2MTarget * const this /* r26 */) {
    // Local variables
    int j; // r27

    // References
    // -> char * M2M_buttonN_Table[8];
}

// Range: 0x801B101C -> 0x801B1368
void M2MTarget::Update(class M2MTarget * const this /* r31 */) {
    // Local variables
    unsigned int numSel; // r30
    unsigned int currentSel; // r29
    class EController * pCtrl; // r28
    unsigned char bCardInSlot1; // r1+0x9
    unsigned char bCardInSlot2; // r1+0x8

    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801B1368 -> 0x801B14E8
void M2MTarget::PollLoadSaveTarget(class M2MTarget * const this /* r31 */) {
    // Local variables
    int result; // r0
}

// Range: 0x801B14E8 -> 0x801B18D8
void M2MTarget::SelectionCallback(class M2MTarget * const this /* r31 */, int selected /* r28 */) {
    // Local variables
    int source; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B18D8 -> 0x801B18DC
void M2MTarget::ZeroInputCallback() {}

// Range: 0x801B18DC -> 0x801B193C
void M2MTarget::DialogClosedCallback(class M2MTarget * const this /* r31 */) {}

// Range: 0x801B193C -> 0x801B19DC
void M2MTarget::OnCancel(class M2MTarget * const this /* r30 */) {}

// Range: 0x801B19DC -> 0x801B1B38
void M2MTarget::OnSaveLoadSucceed(class M2MTarget * const this /* r30 */) {
    // Local variables
    int source; // r0
}

// Range: 0x801B1B38 -> 0x801B1C70
void M2MTarget::OnSaveLoadFailed(class M2MTarget * const this /* r30 */, unsigned char retrySaveLoad /* r31 */) {}

// Range: 0x801B1C70 -> 0x801B1CB4
void M2MTarget::OnSlotSelectItemSelected() {}

// Range: 0x801B1CB4 -> 0x801B1CE0
int M2MTarget::OnGetNumItems() {
    // Local variables
    int n_result; // r3
}

// Range: 0x801B1CE0 -> 0x801B1CE8
int M2MTarget::GetDevice() {}

// Range: 0x801B1CE8 -> 0x801B1CF8
void M2MTarget::SetDevice() {}

// Range: 0x801B1CF8 -> 0x801B1E68
void M2MTarget::SpawnNoSpaceDialog(class M2MTarget * const this /* r29 */, enum NoSpaceType dialogType /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B1E68 -> 0x801B1F40
void M2MTarget::SpawnConfirmStartNewGameDialog(class M2MTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B1F40 -> 0x801B2028
void M2MTarget::SpawnContinueNoMemCardDialog(class M2MTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2028 -> 0x801B2118
void M2MTarget::SpawnSaveBeforeQuitCASDialog(class M2MTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2118 -> 0x801B2208
void M2MTarget::SpawnSaveBeforeQuitGameDialog(class M2MTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2208 -> 0x801B22E0
void M2MTarget::SpawnNoSaveBeforeQuitDialog(class M2MTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B22E0 -> 0x801B2420
void M2MTarget::GetItemTextDeviceSelect(class M2MTarget * const this /* r29 */, int device_ /* r31 */, unsigned short * retStr /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2420 -> 0x801B27E0
void M2MTarget::GetItemTextSaveGameSelect(class M2MTarget * const this /* r30 */, int save_ /* r28 */, unsigned short * retStr /* r31 */) {
    // Local variables
    unsigned char bHasSave; // r1+0x8
    class MemoryDevicePort_t temp_port; // r1+0x50

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B27E0 -> 0x801B287C
unsigned char M2MTarget::IsItemEnabledDeviceSelect(class M2MTarget * const this /* r31 */) {
    // Local variables
    unsigned char b_result; // r3
    enum EMC_OpStatus ops; // r0
}

// Range: 0x801B287C -> 0x801B28CC
unsigned char M2MTarget::IsItemEnabledSaveGameSelect() {
    // Local variables
    unsigned char b_result; // r1+0x8
    class MemoryDevicePort_t port; // r1+0x10
}

// Range: 0x801B28CC -> 0x801B28D4
unsigned char M2MTarget::DoesMemoryDeviceExist() {}

// Range: 0x801B28D4 -> 0x801B2920
void M2MTarget::StartLoadedGame(class M2MTarget * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B2920 -> 0x801B2A24
void M2MTarget::ReturnFailureDestination(class M2MTarget * const this /* r31 */) {
    // Local variables
    int source; // r0

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801B2A24 -> 0x801B2AB8
void M2MTarget::StartNGCMemoryCardBootChecks(class M2MTarget * const this /* r31 */) {}

// Range: 0x801B2AB8 -> 0x801B2C5C
void M2MTarget::UpdateWidgetState(class M2MTarget * const this /* r27 */) {
    // Local variables
    int j; // r29
    int j; // r28

    // References
    // -> char * M2M_buttonN_Table[8];
}

// Range: 0x801B2C5C -> 0x801B2D2C
void M2MTarget::FillWidget(class M2MTarget * const this /* r30 */) {
    // Local variables
    int itemIndex; // r31
    unsigned char bItemEnabled; // r0
}

// Range: 0x801B2D2C -> 0x801B2DBC
void M2MTarget::HideWidget(class M2MTarget * const this /* r31 */) {}

// Range: 0x801B2DBC -> 0x801B3128
void M2MTarget::SetupWidgetLayout(class M2MTarget * const this /* r30 */) {
    // Local variables
    class EVec2 vBackdropPos; // r1+0x20
    class EVec2 vBodyBox; // r1+0x18
    class EVec2 vBodyPos; // r1+0x10
    void * scratch; // r0
    class AptParagraph paragraph; // r1+0x38
    class EVec4 vColor; // r1+0x28
    class EVec2 vTL; // r1+0x8
    float backdropHeight; // f31
    float optionsY; // f31
    int j; // r28

    // References
    // -> char * M2M_buttonN_Table[8];
}

// Range: 0x801B3128 -> 0x801B31FC
void M2MTarget::UpdateSelection(class M2MTarget * const this /* r27 */, int direction_ /* r28 */) {
    // Local variables
    int save; // r30
    unsigned char bDone; // r29
}

// Range: 0x801B31FC -> 0x801B3260
unsigned char M2MTarget::IsItemEnabled() {
    // Local variables
    unsigned char b_result; // r5
}

// Range: 0x801B3260 -> 0x801B32AC
void M2MTarget::CalcNumItems(class M2MTarget * const this /* r31 */) {}

// Range: 0x801B32AC -> 0x801B34A0
void M2MTarget::SetCurrState(class M2MTarget * const this /* r31 */) {}

// Range: 0x801B34A0 -> 0x801B3550
void M2MTarget::UnloadDialog(class M2MTarget * const this /* r30 */) {
    // Local variables
    int j; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B3550 -> 0x801B3618
void M2MTarget::PrepareNewGame(class M2MTarget * const this /* r31 */) {
    // Local variables
    unsigned char bHasSpace; // r1+0x9
    unsigned int nHDDSpaceStatus; // r1+0xC
    unsigned char bHasSave; // r1+0x8
    class MemoryDevicePort_t temp_port; // r1+0x10
}

// Range: 0x801B3618 -> 0x801B36B4
void M2MTarget::PrepareLoadGame(class M2MTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B36B4 -> 0x801B36E8
void M2MTarget::PushButtonFilters(class M2MTarget * const this /* r31 */) {}

// Range: 0x801B36E8 -> 0x801B372C
void M2MTarget::PopButtonFilters(class M2MTarget * const this /* r31 */) {}


