/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\siminteractor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007715C -> 0x80078D54
*/
// Range: 0x8007715C -> 0x800771B4
void * FadeSquare::FadeSquare(class FadeSquare * const this /* r31 */) {
    // References
    // -> class EModelManager _modelman;
}

// Range: 0x800771B4 -> 0x80077230
void * FadeSquare::~FadeSquare(class FadeSquare * const this /* r30 */) {
    // References
    // -> class EModelManager _modelman;
}

// Range: 0x80077230 -> 0x8007727C
void FadeSquare::StartDraw(class FadeSquare * const this /* r30 */, unsigned char initEfect /* r31 */) {}

// Range: 0x8007727C -> 0x80077288
void FadeSquare::StartFade() {}

// Range: 0x80077288 -> 0x8007729C
void FadeSquare::StopDraw() {}

// Range: 0x8007729C -> 0x80077344
void FadeSquare::Update(class FadeSquare * const this /* r31 */, float elapsedTime /* f31 */) {
    // References
    // -> class EModelManager _modelman;
}

// Range: 0x80077344 -> 0x8007735C
unsigned char FadeSquare::ShouldDraw() {}

// Range: 0x8007735C -> 0x8007752C
void FadeSquare::Draw(class FadeSquare * const this /* r27 */, class ERC * pERC /* r28 */, class EVec3 & color /* r29 */) {
    // Local variables
    struct ELights lightList; // r1+0x60
    class ESimsCam * pCam; // r30
    float swapTmp; // f1
    class EMat4 orient; // r1+0x20

    // References
    // -> class PlumbBobParms s_plumbBobParms;
    // -> class EGlobal _globals;
}

// Range: 0x8007752C -> 0x8007760C
void * SimInteractor::SimInteractor(class SimInteractor * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule13SimInteractor;
}

// Range: 0x8007760C -> 0x800776BC
void * SimInteractor::~SimInteractor(class SimInteractor * const this /* r30 */) {
    // References
    // -> class GameData _gd;
    // -> struct [anonymous] __vt__Q216InteractorModule13SimInteractor;
}

// Range: 0x800776BC -> 0x800776F4
void SimInteractor::OnCreate(class SimInteractor * const this /* r31 */) {}

// Range: 0x800776F4 -> 0x8007772C
void SimInteractor::OnDestroy(class SimInteractor * const this /* r31 */) {}

// Range: 0x8007772C -> 0x800778C8
void SimInteractor::OnStart(class SimInteractor * const this /* r31 */) {
    // Local variables
    struct ButtonSemantic butSems[5]; // r1+0x40
    struct StickSemantic stickSems[4]; // r1+0x20
    int i; // r22

    // References
    // -> class EVec3 s_invalidPos;
}

// Range: 0x800778C8 -> 0x8007792C
void SimInteractor::OnStop(class SimInteractor * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8007792C -> 0x800779D8
void SimInteractor::ParseControls(class SimInteractor * const this /* r30 */) {
    // References
    // -> class NewControlParms s_newControlParms;
}

// Range: 0x800779D8 -> 0x8007812C
void SimInteractor::Update(class SimInteractor * const this /* r30 */) {
    // Local variables
    class EVec3 selectedSimPos; // r1+0x64
    const class cXPerson * pPerson; // r4
    class FTilePt simTile; // r1+0x20
    class EVec3 centerOfSquare; // r1+0x58
    class EVec3 centerOfSquare; // r1+0x4C
    int i; // r28
    class EVec3 testPos; // r1+0x40
    class EVec2 vecToSimPos2D; // r1+0x18
    class EVec2 curPos2D; // r1+0x10
    float dist; // f0
    float dz; // f2
    class EVec3 centerOfSquare; // r1+0x34
    int i; // r28
    class cXPerson * pNewPlayer; // r4
    const class FTilePt & simPos; // r0
    class EVec3 newInteractorPos; // r1+0x28
    unsigned char forceReleaseSimSwitcher; // r4

    // References
    // -> class GameData _gd;
    // -> class NewControlParms s_newControlParms;
    // -> class EVec3 s_invalidPos;
    // -> class EGlobal _globals;
    // -> float _dt;
}

// Range: 0x8007812C -> 0x80078174
float SimInteractor::GetBeamScale() {}

// Range: 0x80078174 -> 0x80078194
void SimInteractor::GetInteractorInfo(class SimInteractor * const this /* r5 */) {}

// Range: 0x80078194 -> 0x800781A4
void SimInteractor::PreDraw(class SimInteractor * const this /* r0 */) {}

// Range: 0x800781A4 -> 0x800781B4
void SimInteractor::Draw(class SimInteractor * const this /* r0 */) {}

// Range: 0x800781B4 -> 0x800782B8
void SimInteractor::OnCommandRepeated(class SimInteractor * const this /* r29 */, enum InteractorCommand cmd /* r30 */) {
    // Local variables
    class cXPerson * player; // r31

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x800782B8 -> 0x800785AC
void SimInteractor::OnCommandPressed(class SimInteractor * const this /* r31 */, enum InteractorCommand cmd /* r28 */) {
    // Local variables
    class cXPerson * player; // r29
    struct InteractorParams params; // r1+0x14
    unsigned char doSwitch; // r29
    class CameraDirector * camDir; // r30
    const class FTilePt & simPos; // r0
    class EVec3 newInteractorPos; // r1+0x8

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x800785AC -> 0x800786AC
void SimInteractor::OnCommandReleased() {
    // References
    // -> class GameData _gd;
}

// Range: 0x800786AC -> 0x8007870C
void SimInteractor::OnCommandUpdate() {}

// Range: 0x8007870C -> 0x80078744
void SimInteractor::ResetInputState(class SimInteractor * const this /* r31 */) {}

// Range: 0x80078744 -> 0x80078794
void SimInteractor::ImmediatelyCutCursorAndCameraToPos(class SimInteractor * const this /* r30 */, const class EVec3 & pos /* r31 */) {}

// Range: 0x80078794 -> 0x800787B0
void SimInteractor::ResetSnapTimer() {
    // References
    // -> class NewControlParms s_newControlParms;
}

// Range: 0x800787B0 -> 0x800787EC
float SimInteractor::GetSelectionRadius(class SimInteractor * const this /* r31 */) {
    // Local variables
    float radius; // f1
}

// Range: 0x800787EC -> 0x800788E8
void SimInteractor::UpdateOverlapIntersection(class SimInteractor * const this /* r30 */, struct OverlapData * pOverlapData /* r31 */) {
    // Local variables
    class EVec3 center; // r1+0x14
    class EVec3 delta; // r1+0x8
    float dist2; // f0
}

// Range: 0x800788E8 -> 0x80078AB0
void SimInteractor::ExecuteActionMenu(class SimInteractor * const this /* r28 */) {
    // Local variables
    class TNodeList objList; // r1+0x8
    class ObjectSlot * os; // r31
    class cXObject * pObj; // r30
    class ISimInstance * handSimInstance; // r0
    class NLIteratorPtrType * nli; // r29
    class ISimInstance * pIobject; // r0
    class FlashPiMenu * pPiMenu; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80078AB0 -> 0x80078ABC
void SimInteractor::ReturnPlumbobToSim() {}

// Range: 0x80078ABC -> 0x80078AF0
unsigned char SimInteractor::IsSimulatorPaused() {}

// Range: 0x80078AF0 -> 0x80078CC8
void SimInteractor::UpdateObjectHighlights(class SimInteractor * const this /* r29 */, class EIObjectMan * objMan /* r30 */) {
    // Local variables
    class cXObject * pSelectedObject; // r31
    class ISimInstance * pSelectedInstance; // r0
    class TNodeList allObjects; // r1+0x8
    class NLIteratorPtrType * i; // r31
    class ISimInstance * instance; // r30
    class EBound3 cursorBound; // r1+0x18
    float radius; // f0
    const class EBound3 & mBound; // r0
    unsigned char shouldHighlight; // r5
    unsigned char overlap; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x80078CC8 -> 0x80078CFC
void SimInteractor::SetupCamera() {
    // Local variables
    class ESimsCam * pCam; // r0
}

// Range: 0x80078CFC -> 0x80078D54
unsigned char SimInteractor::ChooseAction(class Interaction * pAction /* r31 */) {}


