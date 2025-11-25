/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\plumbbob.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023F418 -> 0x8023FFB0
*/
// Range: 0x8023F418 -> 0x8023F424
void PlumbBobStack::Reset() {}

// Range: 0x8023F424 -> 0x8023F478
void PlumbBob::PlumbBobOrderTableCallback(struct ELevelDrawData & renderParam /* r31 */) {}

// Range: 0x8023F478 -> 0x8023F588
void * PlumbBob::PlumbBob(class PlumbBob * const this /* r30 */) {}

// Range: 0x8023F588 -> 0x8023F5B8
void PlumbBob::StartupAll() {
    // References
    // -> class PlumbBob * s_pPlumbBob;
}

// Range: 0x8023F5B8 -> 0x8023F5F8
void PlumbBob::ShutdownAll() {
    // References
    // -> class PlumbBob * s_pPlumbBob;
}

// Range: 0x8023F5F8 -> 0x8023F674
void PlumbBob::Startup(class PlumbBob * const this /* r31 */) {
    // References
    // -> class PlumbBobParms s_plumbBobParms;
}

// Range: 0x8023F674 -> 0x8023F6C4
void PlumbBob::Shutdown(class PlumbBob * const this /* r30 */) {}

// Range: 0x8023F6C4 -> 0x8023F73C
void * PlumbBob::~PlumbBob(class PlumbBob * const this /* r30 */) {}

// Range: 0x8023F73C -> 0x8023F808
void PlumbBob::SetState(class PlumbBob * const this /* r30 */) {
    // References
    // -> class PlumbBobParms s_plumbBobParms;
}

// Range: 0x8023F808 -> 0x8023F820
unsigned int PlumbBob::SetModel() {}

// Range: 0x8023F820 -> 0x8023F838
unsigned int PlumbBob::SetShadow() {}

// Range: 0x8023F838 -> 0x8023F898
void PlumbBob::SetColor(class PlumbBob * const this /* r30 */, class EVec3 * color /* r31 */) {
    // References
    // -> class PlumbBobParms s_plumbBobParms;
}

// Range: 0x8023F898 -> 0x8023F8A8
void PlumbBob::SetPlayerColor() {
    // References
    // -> class PlumbBobParms s_plumbBobParms;
}

// Range: 0x8023F8A8 -> 0x8023F930
void PlumbBob::SetScaleFromTween(class PlumbBob * const this /* r31 */, float tween /* f31 */) {
    // References
    // -> class PlumbBobParms s_plumbBobParms;
    // -> class EGlobal _globals;
}

// Range: 0x8023F930 -> 0x8023FCB4
void PlumbBob::Update(class PlumbBob * const this /* r31 */) {
    // Local variables
    float inc; // f2
    float inc; // f31
    int morphToModel; // r30
    enum PlumbBob_EffectState postMorphEffect; // r29
    unsigned int resID; // r4

    // References
    // -> float _dt;
    // -> class GameData _gd;
}

// Range: 0x8023FCB4 -> 0x8023FD24
void PlumbBob::DrawShadow(class PlumbBob * const this /* r30 */, class ERC * prc /* r31 */) {}

// Range: 0x8023FD24 -> 0x8023FEAC
void PlumbBob::Draw(class PlumbBob * const this /* r27 */, class ERC * prc /* r28 */) {
    // Local variables
    class cXPerson * plumbbobPerson; // r30
    class ESim * sim; // r0
    unsigned int plumbbobState; // r0
    class ESimsCam * pCam; // r29
    float swapTmp; // f1

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8023FEAC -> 0x8023FF9C
void * PlumbBobParms::PlumbBobParms(class PlumbBobParms * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13PlumbBobParms;
}

// Range: 0x8023FF9C -> 0x8023FFB0
void PlumbBobParms::Calculate() {}


