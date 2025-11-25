/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\objectmanipulator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006DDB0 -> 0x80072790
*/
// Range: 0x8006DDB0 -> 0x8006DDEC
unsigned char is_object_cloneable() {
    // Local variables
    signed short mvflags; // r0
}

// Range: 0x8006DDEC -> 0x8006DE34
void PlacementObject::ClearDrawOverride(class PlacementObject * const this /* r31 */) {}

// Range: 0x8006DE34 -> 0x8006DE3C
unsigned char PlacementObject::GetDrawOverrideFlag() {}

// Range: 0x8006DE3C -> 0x8006DE44
class FTilePt & PlacementObject::GetOverrideLocation() {}

// Range: 0x8006DE44 -> 0x8006DE4C
class cXObject * PlacementObject::GetObjectInHand() {}

// Range: 0x8006DE4C -> 0x8006DE60
unsigned char PlacementObject::ObjectIsInHand() {}

// Range: 0x8006DE60 -> 0x8006DE68
class cXMTObject * PlacementObject::GetGridObject() {}

// Range: 0x8006DE68 -> 0x8006DE78
void PlacementObject::GetOriginalPos(const class PlacementObject * const this /* r5 */) {}

// Range: 0x8006DE78 -> 0x8006DE80
signed short PlacementObject::GetOriginalDir() {}

// Range: 0x8006DE80 -> 0x8006DEC8
void * ObjectManipulatorParams::ObjectManipulatorParams(struct ObjectManipulatorParams * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule17ObjectManipulator23ObjectManipulatorParams;
}

// Range: 0x8006DEC8 -> 0x8006DF78
void * ObjectManipulator::ObjectManipulator(class ObjectManipulator * const this /* r29 */) {
    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
    // -> struct [anonymous] __vt__Q216InteractorModule17ObjectManipulator;
}

// Range: 0x8006DF78 -> 0x8006DFE0
void * ObjectManipulator::~ObjectManipulator(class ObjectManipulator * const this /* r30 */) {}

// Range: 0x8006DFE0 -> 0x8006E018
void ObjectManipulator::OnCreate(class ObjectManipulator * const this /* r31 */) {}

// Range: 0x8006E018 -> 0x8006E050
void ObjectManipulator::OnDestroy(class ObjectManipulator * const this /* r31 */) {}

// Range: 0x8006E050 -> 0x8006E20C
void ObjectManipulator::OnStart(class ObjectManipulator * const this /* r29 */, const struct InteractorParams * pParams /* r30 */) {
    // Local variables
    struct ButtonSemantic butSems[8]; // r1+0x30
    struct StickSemantic stickSems[4]; // r1+0x10

    // References
    // -> class GameData _gd;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8006E20C -> 0x8006E28C
void ObjectManipulator::OnStop(class ObjectManipulator * const this /* r31 */) {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8006E28C -> 0x8006E300
void ObjectManipulator::OnCommandUpdate() {}

// Range: 0x8006E300 -> 0x8006E36C
void ObjectManipulator::OnCommandReleased() {}

// Range: 0x8006E36C -> 0x8006E37C
void ObjectManipulator::PreDraw(class ObjectManipulator * const this /* r0 */) {}

// Range: 0x8006E37C -> 0x8006E38C
void ObjectManipulator::Draw(class ObjectManipulator * const this /* r0 */) {}

// Range: 0x8006E38C -> 0x8006EAC8
void ObjectManipulator::Update(class ObjectManipulator * const this /* r30 */, float deltaT /* f31 */) {
    // Local variables
    unsigned char bMoveEnabled; // r31
    class cXObject * handObject; // r28
    class EVec2 screenCoords; // r1+0x48
    class EVec3 worldCoords; // r1+0x78
    class FTilePt gridCoords; // r1+0x40
    unsigned char bTileMove; // r27
    class cXMTObject * mtObjStart; // r27
    int xSize; // r1+0x10
    int ySize; // r1+0xC
    int xOffset; // r28
    int yOffset; // r29
    class FTileRect rect; // r1+0x68
    class FTilePt tileCenter; // r1+0x38
    int minX; // r5
    int maxX; // r27
    int minY; // r28
    int maxY; // r29
    class FTilePt snapPosTile; // r1+0x30
    class EVec3 worldSnapPos; // r1+0x5C
    unsigned char bWasPlaced; // r27
    struct PlacementData placeData; // r1+0x28
    struct PlacementData placeData; // r1+0x20
    float dz; // f2

    // References
    // -> class NewControlParms s_newControlParms;
    // -> class GameData _gd;
    // -> unsigned char m_lastBlueprintMode;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8006EAC8 -> 0x8006EB1C
void ObjectManipulator::UpdateObjectGrabOffset(class ObjectManipulator * const this /* r31 */) {}

// Range: 0x8006EB1C -> 0x8006EC5C
unsigned char ObjectManipulator::ResetGrab(class ObjectManipulator * const this /* r30 */) {
    // Local variables
    class cXObject * pObject; // r31
    class EVec3 objcenter; // r1+0x28
    const class FTilePt & objectftilept; // r31
    class EVec3 objectpos; // r1+0x1C
    class EVec3 newoffset; // r1+0x10
    class EVec2 screenpt; // r1+0x8
}

// Range: 0x8006EC5C -> 0x8006EDA0
unsigned char ObjectManipulator::GradualCenterToObject(class ObjectManipulator * const this /* r30 */) {
    // Local variables
    class cXObject * pObject; // r31
    class EVec3 newOffset; // r1+0x44
    class EVec3 cameraTarget; // r1+0x38
    int lotId; // r0
    float k_z; // f31
    class EVec3 objCenter; // r1+0x2C

    // References
    // -> float s_gridDrawOffset[27];
    // -> class EGlobal _globals;
}

// Range: 0x8006EDA0 -> 0x8006EE10
unsigned char ObjectManipulator::LockCursorToObject(class ObjectManipulator * const this /* r31 */) {
    // Local variables
    class cXObject * pObject; // r0
    class EVec3 cursorFocus; // r1+0x10
    class EVec2 screenpt; // r1+0x8
}

// Range: 0x8006EE10 -> 0x8006F01C
void ObjectManipulator::UpdateObjectHighlights(class ObjectManipulator * const this /* r26 */, class EIObjectMan * objMan /* r27 */) {
    // Local variables
    class cXObject * pSelectedObject; // r31
    class ISimInstance * pSelectedInstance; // r0
    class TNodeList allObjects; // r1+0x10
    class EBound3 cursorBound; // r1+0x20
    class ISimInstance * instance; // r31
    unsigned char shouldHighlight; // r30
    unsigned char overlap; // r0
    class NLIteratorPtrType * i; // r29
    const class EBound3 & currbounds; // r28
    class cXObject * pXObj; // r27
    struct OverlapData overlapData; // r1+0x8

    // References
    // -> class GameData _gd;
}

// Range: 0x8006F01C -> 0x8006F0EC
void ObjectManipulator::UpdateOverlapIntersection(class ObjectManipulator * const this /* r30 */, struct OverlapData * pOverlapData /* r31 */) {
    // Local variables
    class EVec3 center; // r1+0x14
    class EVec3 delta; // r1+0x8
    float dist2; // f0
}

// Range: 0x8006F0EC -> 0x8006F0F4
void ObjectManipulator::SetIsCursorModelEnabled() {}

// Range: 0x8006F0F4 -> 0x8006F0FC
unsigned char ObjectManipulator::GetIsCursorModelEnabled() {}

// Range: 0x8006F0FC -> 0x8006F104
class PlacementObject & ObjectManipulator::GetPlacementObject() {}

// Range: 0x8006F104 -> 0x8006F160
void * GrabManipulatorParams::GrabManipulatorParams(struct GrabManipulatorParams * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule15GrabManipulator21GrabManipulatorParams;
}

// Range: 0x8006F1B8 -> 0x8006F210
void * CallbackData::CallbackData(struct CallbackData * const this /* r30 */, unsigned char bIsCloneMode /* r31 */) {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule15GrabManipulator12CallbackData;
}

// Range: 0x8006F210 -> 0x8006F25C
void * GrabManipulator::GrabManipulator(class GrabManipulator * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule15GrabManipulator;
}

// Range: 0x8006F2B4 -> 0x8006F31C
void * GrabManipulator::~GrabManipulator(class GrabManipulator * const this /* r30 */) {}

// Range: 0x8006F31C -> 0x8006F320
void GrabManipulator::OnCreate() {}

// Range: 0x8006F320 -> 0x8006F3A0
void GrabManipulator::OnStart(class GrabManipulator * const this /* r30 */, const struct InteractorParams * pParams /* r31 */) {}

// Range: 0x8006F450 -> 0x8006F7A8
void GrabManipulator::OnCommandPressed(class GrabManipulator * const this /* r31 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x20
    struct CallbackData cbd; // r1+0x8

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
    // -> unsigned char m_blueprintMode;
    // -> int _framecount;
    // -> class EGlobal _globals;
}

// Range: 0x8006F800 -> 0x8006F8A8
void GrabManipulator::OnCommandRepeated() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x8006F8A8 -> 0x8006F944
void GrabManipulator::CancelCurrentGrab(class GrabManipulator * const this /* r31 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x8
}

// Range: 0x8006F944 -> 0x8006FB14
void GrabManipulator::TryGrabbingWorldObject(class GrabManipulator * const this /* r27 */) {
    // Local variables
    class TNodeList objList; // r1+0x8
    class NLIteratorPtrType * iter; // r31
    class ISimInstance * pInst; // r0
    signed short objId; // r0
    unsigned long cloneablecount; // r31
    class ISimInstance * pISimInstance; // r30
    class cXObject * pObject; // r29
    class NLIteratorPtrType * it; // r28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8006FB14 -> 0x8006FFB4
void GrabManipulator::TryGrabbingWorldObjectFromId(class GrabManipulator * const this /* r31 */, signed short objectId /* r27 */) {
    // Local variables
    class cXObject * pObject; // r28
    class cXMTObject * pMTObject; // r0
    class EVec3 objorigin; // r1+0x9C
    class ESimsCam * pCamera; // r0
    class EVec2 current_screen_pos; // r1+0x10
    class EVec3 ray_dir; // r1+0x90
    class E3DWindow * win; // r0
    class EVec3 cam_pos; // r1+0x84
    class ISimInstance * instance; // r29
    class EVec3 hit_pos; // r1+0x78
    class EVec3 hit_pos2; // r1+0x6C
    float hit_dist; // r1+0x8
    unsigned char failed; // r30
    class EVec3 hitPosAverage; // r1+0x60
    class EVec3 offset; // r1+0x54
    class ObjSelector * pSrcSelector; // r0
    int price; // r0
    int funds; // r0
    int guid; // r0
    class cXObject * pNewObject; // r28
    signed short srcdir; // r0
    unsigned long index; // r29
    struct CallbackData cbd; // r1+0xC0
    struct CallbackData cbd; // r1+0xA8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8006FFB4 -> 0x8007012C
void GrabManipulator::DestroyObjectInHand(class GrabManipulator * const this /* r29 */, enum eDestroyObjectContext context /* r31 */) {
    // Local variables
    class cXObject * pObject; // r30
    class ObjSelector * pObjSelector; // r0

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
}

// Range: 0x8007012C -> 0x800702D4
void GrabManipulator::DropCurrentObject(class GrabManipulator * const this /* r29 */) {
    // Local variables
    class cXObject * pPlacedObject; // r30
    class FTilePt snapTileLoc; // r1+0x10
    struct PlacementData placeData; // r1+0x8
    unsigned char objectInHand; // r0
    struct CallbackData cbd; // r1+0x18

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
}

// Range: 0x800702D4 -> 0x80070378
void GrabManipulator::TryRemoveCurrentObjectFromWorld(class GrabManipulator * const this /* r31 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x8
}

// Range: 0x80070378 -> 0x80070900
unsigned char GrabManipulator::OnUndoButton(class GrabManipulator * const this /* r30 */) {
    // Local variables
    class InventoryItems * pInventory; // r0
    class cXObject * pObject; // r28
    class ObjSelector * pObjSelector; // r0
    struct PlacementData placedata; // r1+0x8
    class PlacementObject placer; // r1+0x40
    struct UndoRedoCommand command; // r1+0x28
    struct CallbackData cbd; // r1+0x10

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
}

// Range: 0x80070900 -> 0x80070950
unsigned char GrabManipulator::CanPickupObject() {
    // Local variables
    class cXObject * pObjectLead; // r0
}

// Range: 0x80070950 -> 0x8007099C
void * CallbackData::CallbackData(struct CallbackData * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule16PlaceManipulator12CallbackData;
}

// Range: 0x8007099C -> 0x800709FC
void * PlaceManipulatorParams::PlaceManipulatorParams(struct PlaceManipulatorParams * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__Q316InteractorModule16PlaceManipulator22PlaceManipulatorParams;
}

// Range: 0x800709FC -> 0x80070A48
void * PlaceManipulator::PlaceManipulator(class PlaceManipulator * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__Q216InteractorModule16PlaceManipulator;
}

// Range: 0x80070AA0 -> 0x80070B08
void * PlaceManipulator::~PlaceManipulator(class PlaceManipulator * const this /* r30 */) {}

// Range: 0x80070B08 -> 0x80070B40
void PlaceManipulator::OnCreate(class PlaceManipulator * const this /* r31 */) {}

// Range: 0x80070B40 -> 0x80070BF4
void PlaceManipulator::OnStart(class PlaceManipulator * const this /* r30 */, const struct InteractorParams * pParams /* r31 */) {
    // Local variables
    class ESimsCam * pSimsCam; // r0
    const struct PlaceManipulatorParams * pPlaceManipulatorParams; // [invalid]

    // References
    // -> class GameData _gd;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80070BF4 -> 0x80070DF4
void PlaceManipulator::OnCommandPressed(class PlaceManipulator * const this /* r31 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x20
    struct CallbackData cbd; // r1+0x8

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80070E4C -> 0x80070EF4
void PlaceManipulator::OnCommandRepeated() {
    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80070EF4 -> 0x80070FC0
void PlaceManipulator::StartPlacement(class PlaceManipulator * const this /* r29 */) {
    // Local variables
    class cXObject * pObject; // r31
    unsigned long index; // r30
}

// Range: 0x80071024 -> 0x80071204
void PlaceManipulator::TryPlacingCurrentObject(class PlaceManipulator * const this /* r28 */) {
    // Local variables
    class cXObject * pSavedObject; // r29
    class FTilePt snapTileLoc; // r1+0x18
    struct PlacementData placeData; // r1+0x10
    signed short saveddirection; // r0
    struct CallbackData cbd; // r1+0x30
    class EVec2 screenpt; // r1+0x8

    // References
    // -> struct UndoRedoCommand m_UndoRedoCommand;
}

// Range: 0x80071204 -> 0x80071370
void PlaceManipulator::CancelSession(class PlaceManipulator * const this /* r29 */) {
    // Local variables
    struct CallbackData cbd; // r1+0x28
    unsigned char bRecomputeLightingGrid; // r31
    class cXObject * pObject; // r30
    class EVec2 screenpt; // r1+0x10

    // References
    // -> unsigned char m_blueprintMode;
}

// Range: 0x80071370 -> 0x800713C4
void * PlacementObject::PlacementObject(class PlacementObject * const this /* r30 */) {}

// Range: 0x800713C4 -> 0x80071404
void * PlacementObject::~PlacementObject(class PlacementObject * const this /* r31 */) {}

// Range: 0x80071404 -> 0x80071520
unsigned char PlacementObject::SetObjectColor(class cXObject * pObject /* r31 */, unsigned char colorindex /* r30 */) {
    // Local variables
    class ISimInstance * pISimInstance; // r0
    class cXMTObject * pMTObject; // r0
}

// Range: 0x80071520 -> 0x800715FC
unsigned char PlacementObject::CreateNewPlacementObjectFromGuid(class PlacementObject * const this /* r29 */, unsigned int objectGUID /* r30 */, unsigned char colorindex /* r31 */) {
    // Local variables
    float firevalue; // f0
}

// Range: 0x800715FC -> 0x800716D0
unsigned char PlacementObject::GrabExistingObjectInstanceFromId(class PlacementObject * const this /* r30 */) {
    // Local variables
    class cXObject * pObject; // r0
}

// Range: 0x800716D0 -> 0x8007194C
void PlacementObject::CreateGridObject(class PlacementObject * const this /* r27 */, const class FTilePt & location /* r28 */, class cXObject * pObjectInHand /* r29 */) {
    // Local variables
    class ObjSelector * pGridSelector; // r31
    class cXMTObject * pMTObject; // r30
    class cXMTObject * pMTObj; // r29
    class cXMTObject * pGridObject; // r0
    class cXMTObject * curObj; // r29
}

// Range: 0x8007194C -> 0x800719E0
class cXMTObject * PlacementObject::CreateGridTile(class PlacementObject * const this /* r28 */, class ObjSelector * pGridSelector /* r29 */) {
    // Local variables
    class ObjectModule * pObjectModule; // r30
}

// Range: 0x800719E0 -> 0x80071A40
void PlacementObject::DestroyGridObject(class cXMTObject * & pLeadGridObject /* r30 */) {}

// Range: 0x80071A40 -> 0x80071A9C
unsigned char PlacementObject::InitializeGridObject(class cXMTObject * pGridObject /* r31 */) {}

// Range: 0x80071A9C -> 0x80071B50
void PlacementObject::AssignOffsetsToGridObject(class cXMTObject * pLeadGridObject /* r30 */, class cXObject * pObjectInHandLead /* r31 */) {
    // Local variables
    class cXMTObject * pLead; // r31
    class cXMTObject * pGridObject; // [invalid]
}

// Range: 0x80071B50 -> 0x80071BE4
void PlacementObject::Pickup(class PlacementObject * const this /* r31 */) {
    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80071BE4 -> 0x80071C4C
unsigned char PlacementObject::IsLegalToPlaceAtLocation(class PlacementObject * const this /* r29 */, class FTilePt & location /* r30 */, struct PlacementData & placeData /* r31 */) {}

// Range: 0x80071C4C -> 0x80071D60
void PlacementObject::Place(class PlacementObject * const this /* r29 */, const class FTilePt & location /* r30 */, struct PlacementData & placeData /* r31 */) {
    // Local variables
    unsigned char bCanPlace; // r0

    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80071D60 -> 0x80071DD8
unsigned char PlacementObject::Drop(class PlacementObject * const this /* r31 */) {}

// Range: 0x80071DD8 -> 0x80071DDC
void PlacementObject::Initialize() {}

// Range: 0x80071DDC -> 0x80071DF4
unsigned char PlacementObject::CanObjectBeDestroyed() {}

// Range: 0x80071DF4 -> 0x80071E78
unsigned char PlacementObject::Destroy(class PlacementObject * const this /* r30 */) {
    // Local variables
    unsigned char bWasDestroyed; // r31

    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80071E78 -> 0x80071F78
void PlacementObject::Reset(class PlacementObject * const this /* r30 */) {
    // Local variables
    class cXObject * pObject; // r31
    class cXMTObject * pMTObj; // r0
    class cXMTObject * pMTObject; // r31
}

// Range: 0x80071F78 -> 0x80071FC0
void PlacementObject::ResetDirection(class PlacementObject * const this /* r4 */) {
    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80071FC0 -> 0x80072008
void PlacementObject::SetDirection(class PlacementObject * const this /* r5 */) {
    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x80072008 -> 0x800723FC
void PlacementObject::Rotate(class PlacementObject * const this /* r31 */, enum RotateDirection dirToRotate /* r26 */) {
    // Local variables
    int theta; // r30
    class FTilePt loc; // r1+0x10
    int rotCount; // r29
    class cXObject * pLeadObject; // r0
    class cXMTObject * srch; // r28
    int slotCnt; // r27
    class cXObject * child; // r26
    int slotCnt; // r26
    class cXObject * child; // r27
    struct PlacementData placeData; // r1+0x8
    const struct ResData * pResData; // r0
    unsigned char bIsLegalToPlace; // r0

    // References
    // -> unsigned char s_handlingPlacementObject;
}

// Range: 0x800723FC -> 0x800725A4
void PlacementObject::ResetLocation(class PlacementObject * const this /* r30 */) {
    // Local variables
    struct PlacementData placeData; // r1+0x8
    unsigned char bIsLegalToPlace; // r0
    class cXMTObject * mtobj; // r0
}

// Range: 0x800725A4 -> 0x80072790
void PlacementObject::SetShaderToValidState(class PlacementObject * const this /* r27 */, unsigned char bIsValidState /* r26 */) {
    // Local variables
    class cFixedWorld * world; // r29
    class FTilePt firstLoc; // r1+0x20
    class cXMTObject * pCurrentObject; // r28
    unsigned char bIsValid; // r27
    class FTilePt curLoc; // r1+0x18
    class ISimInstance * pCurrentInstance; // r30
    class cXMTObject * pCurrentObject; // r27
    class ISimInstance * pCurrentInstance; // r28
}


