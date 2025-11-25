/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\mditarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B37B8 -> 0x801B47F4
*/
// Range: 0x801B37B8 -> 0x801B39A4
void * MDITarget::MDITarget(class MDITarget * const this /* r29 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9MDITarget;
}

// Range: 0x801B39A4 -> 0x801B3A2C
void * MDITarget::~MDITarget(class MDITarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9MDITarget;
}

// Range: 0x801B3A2C -> 0x801B3AC8
void MDITarget::SetVariable(class MDITarget * const this /* r30 */, const char * szCommand /* r31 */) {
    // Local variables
    class UIReflow reflow; // r1+0x8
}

// Range: 0x801B3AC8 -> 0x801B3C30
char * MDITarget::GetVariable(class MDITarget * const this /* r28 */, const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801B3C30 -> 0x801B3D34
unsigned short * MDITarget::GetLocalizable(class MDITarget * const this /* r29 */, const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x801B3D34 -> 0x801B3F00
void MDITarget::Update(class MDITarget * const this /* r31 */) {
    // Local variables
    class UIReflow reflow; // r1+0x20
    class UIReflow reflow; // r1+0x8

    // References
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x801B3F00 -> 0x801B3F0C
void MDITarget::ShowModelessDialog() {}

// Range: 0x801B3F0C -> 0x801B3F18
void MDITarget::HideModelessDialog() {}

// Range: 0x801B3F18 -> 0x801B3FB0
unsigned char MDITarget::IsDuplicate(const class UIDialog * pDialog /* r29 */) {
    // Local variables
    unsigned char rc; // r31
    struct ModelessDialog * record; // r30
}

// Range: 0x801B3FB0 -> 0x801B4130
void MDITarget::SpawnModelessDialog(class MDITarget * const this /* r28 */, class UIDialog * pDialog /* r29 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x801B4168 -> 0x801B41F8
void MDITarget::AddToList() {
    // Local variables
    struct ModelessDialog * record; // r5
    struct ModelessDialog * record; // r6
}

// Range: 0x801B41F8 -> 0x801B4200
int MDITarget::CountModelessDialogs() {}

// Range: 0x801B4200 -> 0x801B4258
void MDITarget::DeleteAllModelessDialogs(class MDITarget * const this /* r30 */) {
    // Local variables
    struct ModelessDialog * next; // r31
}

// Range: 0x801B4258 -> 0x801B425C
void MDITarget::CleanupModelessDialogs() {}

// Range: 0x801B425C -> 0x801B47F4
void MDITarget::SetupModelessDialog(class MDITarget * const this /* r30 */) {
    // Local variables
    class EVec2 vIconBGBox; // r1+0x50
    class EVec2 vIconBox; // r1+0x48
    class UIReflow r; // r1+0x68
    class EVec2 vIconPos; // r1+0x40
    class EVec2 vBodyBox; // r1+0x38
    class EVec2 vBodyPos; // r1+0x30
    class EVec2 vTitleBox; // r1+0x28
    class EVec2 vTitlePos; // r1+0x20
    class AptParagraph paragraph; // r1+0x80
    class EVec4 vColor; // r1+0x58
    class EVec2 vTL; // r1+0x18
    float backdropHeight; // f2
    float width; // f0
    float dtime; // f1
    class EVec2 vBackdropBox; // r1+0x10
    unsigned int yMiddleHeight; // r29

    // References
    // -> class EGlobal _globals;
}


