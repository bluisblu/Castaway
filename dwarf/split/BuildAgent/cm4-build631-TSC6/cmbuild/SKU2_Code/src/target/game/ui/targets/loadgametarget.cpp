/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\loadgametarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CC8A0 -> 0x801CECAC
*/
// Range: 0x801CC8A0 -> 0x801CCA98
void * LoadGameTarget::LoadGameTarget(class LoadGameTarget * const this /* r26 */, class M2MTarget * parent /* r27 */, const class MemoryDevicePort_t & port_ /* r28 */, int loadGameFlags_ /* r31 */) {
    // References
    // -> unsigned int gNumDiskErrors;
    // -> struct [anonymous] __vt__14LoadGameTarget;
}

// Range: 0x801CCA98 -> 0x801CCB4C
void * LoadGameTarget::~LoadGameTarget(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> struct [anonymous] __vt__14LoadGameTarget;
}

// Range: 0x801CCB4C -> 0x801CCF68
void LoadGameTarget::SelectionCallback() {}

// Range: 0x801CCF68 -> 0x801CCFC4
void LoadGameTarget::ZeroInputCallback() {}

// Range: 0x801CCFC4 -> 0x801CD3A0
void LoadGameTarget::Update(class LoadGameTarget * const this /* r31 */) {
    // Local variables
    unsigned char bCardInSlot; // r1+0x9
    enum EMC_OpStatus ops; // r0
    unsigned char bIsFormatted; // r1+0x8

    // References
    // -> class EEngine * _pEngine;
    // -> unsigned int gNumDiskErrors;
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x801CD3A0 -> 0x801CD3A8
int LoadGameTarget::GetResult() {}

// Range: 0x801CD3A8 -> 0x801CD644
unsigned char LoadGameTarget::PerformMemoryCardChecks(class LoadGameTarget * const this /* r31 */) {
    // Local variables
    enum EMC_OpStatus ops; // r0
    unsigned char bWrongDevice; // r1+0xD
    unsigned char bCardDamaged; // r1+0xC
    unsigned char bCardCorrupt; // r1+0xB
    unsigned char bCardFormatted; // r1+0xA
    unsigned char bHasSave; // r1+0x9
    unsigned char bInvalidGame; // r1+0x8
}

// Range: 0x801CD644 -> 0x801CD778
unsigned char LoadGameTarget::PerformLoad(class LoadGameTarget * const this /* r29 */) {
    // Local variables
    enum EMC_OpStatus ops; // r0
    class NghResFile * pFile; // r30
    class NghResFile resFile; // r1+0x68
    class OptionsRecon tempOptions; // r1+0x8

    // References
    // -> class GameData _gd;
}

// Range: 0x801CD778 -> 0x801CD8CC
void LoadGameTarget::SpawnCheckingDialog(class LoadGameTarget * const this /* r29 */, unsigned char amDeleting /* r30 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CD8CC -> 0x801CDA64
void LoadGameTarget::SpawnWrongDeviceDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CDA64 -> 0x801CDC30
void LoadGameTarget::SpawnCardDamagedDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CDC30 -> 0x801CDD4C
void LoadGameTarget::SpawnCardCorruptDialog(class LoadGameTarget * const this /* r31 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CDD4C -> 0x801CDEF0
void LoadGameTarget::SpawnWrongSaveDialog(class LoadGameTarget * const this /* r29 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CDEF0 -> 0x801CE00C
void LoadGameTarget::SpawnNoSaveDialog(class LoadGameTarget * const this /* r31 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CE00C -> 0x801CE14C
void LoadGameTarget::SpawnLoadConfirmDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CE14C -> 0x801CE254
void LoadGameTarget::SpawnLoadingDialog(class LoadGameTarget * const this /* r31 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CE254 -> 0x801CE328
void LoadGameTarget::SpawnLoadSucceededDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CE328 -> 0x801CE4CC
void LoadGameTarget::SpawnLoadFailedDialog(class LoadGameTarget * const this /* r29 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CE4CC -> 0x801CE5D8
void LoadGameTarget::SpawnMemCardRemovedDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
    // -> class EGlobal _globals;
}

// Range: 0x801CE5D8 -> 0x801CE6A8
void LoadGameTarget::SpawnFormatDecideDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CE6A8 -> 0x801CE778
void LoadGameTarget::SpawnFormatConfirmDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CE778 -> 0x801CE818
void LoadGameTarget::SpawnFormattingDialog(class LoadGameTarget * const this /* r31 */) {
    // References
    // -> class EEngine * _pEngine;
    // -> class EGlobal _globals;
}

// Range: 0x801CE818 -> 0x801CE8E8
void LoadGameTarget::SpawnFormatCancelDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CE8E8 -> 0x801CEA40
void LoadGameTarget::SpawnFormatFailDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CEA40 -> 0x801CEAF4
void LoadGameTarget::SpawnFormatSuccessDialog(class LoadGameTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801CEAF4 -> 0x801CEC2C
void LoadGameTarget::BackgroundPerformLoad(class LoadGameTarget * const this /* r31 */) {
    // Local variables
    class EController * pCtrl; // r0
    class EController * pCtrl; // r0

    // References
    // -> unsigned char g_backgroundLoadInProgress;
    // -> class AptViewer * _gpAptViewer;
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x801CEC2C -> 0x801CEC7C
void LoadGameTarget::BGCall_PerformLoad(class LoadGameTarget * const this /* r31 */) {
    // References
    // -> class Background * _pBackground;
    // -> class BG _bg;
}

// Range: 0x801CEC7C -> 0x801CECAC
void LoadGameTarget::BGExec_PerformLoad() {
    // References
    // -> class BG _bg;
}


