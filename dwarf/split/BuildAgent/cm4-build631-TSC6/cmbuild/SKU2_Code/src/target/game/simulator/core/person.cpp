/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\person.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C2ACC -> 0x800CD7E0
*/
// Range: 0x800C2ACC -> 0x800C2B04
void * ActionQueue::ActionQueue(class ActionQueue * const this /* r31 */) {}

// Range: 0x800C2B68 -> 0x800C2C04
unsigned int ActionQueue::CountVisible(const class ActionQueue * const this /* r27 */) {
    // Local variables
    unsigned int visibleInteractionCount; // r31
    signed short previousActionID; // r30
    int i; // r29
    const class Interaction & action; // r28
}

// Range: 0x800C2C04 -> 0x800C2D14
void ActionQueue::AddActionToHUD(class ActionQueue * const this /* r31 */, int index /* r28 */) {
    // Local variables
    const class Interaction & action; // r30
    class ERShader * pShader; // r1+0x8
    int shaderID; // r29
    int insertGUID; // r28

    // References
    // -> class GameData _gd;
}

// Range: 0x800C2D14 -> 0x800C2DFC
void ActionQueue::SendActionToSimSwitcher(class ActionQueue * const this /* r28 */, int index /* r29 */) {
    // Local variables
    const class Interaction & action; // r31
    class ERShader * pShader; // r1+0x8
    int shaderID; // r30
    int insertGUID; // r29

    // References
    // -> class GameData _gd;
}

// Range: 0x800C2DFC -> 0x800C2E70
void ActionQueue::RemoveActionFromHUD(class ActionQueue * const this /* r30 */, int index /* r31 */) {
    // Local variables
    const class Interaction & action; // r4

    // References
    // -> class GameData _gd;
}

// Range: 0x800C2E70 -> 0x800C2EDC
unsigned char ActionQueue::SetActionText(class ActionQueue * const this /* r29 */, const class BString2 & text /* r30 */, unsigned int depth /* r31 */) {}

// Range: 0x800C2EDC -> 0x800C2F94
unsigned char ActionQueue::SetIconObject(class ActionQueue * const this /* r28 */, class cXObject * iconObject /* r29 */, unsigned int depth /* r30 */) {
    // Local variables
    class Interaction & action; // r31
}

// Range: 0x800C2F94 -> 0x800C3044
unsigned char ActionQueue::IsVisibleAction(const class ActionQueue * const this /* r29 */, const class Interaction & action /* r30 */) {
    // Local variables
    unsigned char bActionVisible; // r31
}

// Range: 0x800C3044 -> 0x800C30CC
unsigned int ActionQueue::FindVisualInsertGUID(const class ActionQueue * const this /* r29 */) {
    // Local variables
    unsigned int searchIndex; // r31
    const class Interaction & action; // r30
}

// Range: 0x800C30CC -> 0x800C3154
unsigned char ActionQueue::UpdateAction(class ActionQueue * const this /* r30 */, unsigned int depth /* r31 */) {
    // Local variables
    class Interaction & queueAction; // r0
}

// Range: 0x800C3154 -> 0x800C31D4
unsigned char ActionQueue::Insert(class ActionQueue * const this /* r30 */, unsigned int depth /* r31 */) {}

// Range: 0x800C31D4 -> 0x800C32C8
unsigned char ActionQueue::Remove(class ActionQueue * const this /* r29 */, unsigned int depth /* r30 */) {
    // Local variables
    unsigned char bVisible; // r0
}

// Range: 0x800C32C8 -> 0x800C3310
unsigned char ActionQueue::Enqueue(class ActionQueue * const this /* r30 */, const class Interaction & action /* r31 */) {}

// Range: 0x800C3310 -> 0x800C336C
void ActionQueue::DisableHUDAccess(class ActionQueue * const this /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x800C336C -> 0x800C3414
void ActionQueue::EnableHUDAccess(class ActionQueue * const this /* r30 */) {
    // Local variables
    unsigned char go; // r31
    unsigned int depth; // r31

    // References
    // -> class GameData _gd;
}

// Range: 0x800C3414 -> 0x800C346C
void ActionQueue::SendAllActionsToSimSwitcher(class ActionQueue * const this /* r30 */) {
    // Local variables
    unsigned int depth; // r31
}

// Range: 0x800C346C -> 0x800C35FC
void cXPerson::InitializeMotiveStatics() {
    // Local variables
    class MotiveCurveSet & curves; // r29
    int c; // r28
    class MotiveCurveSet & curves; // r28
    int c; // r29
    class MotiveCurveSet & curves; // r28
    int c; // r29

    // References
    // -> class MotiveCurveArray sBoarMoodWeightCurves;
    // -> class MotiveCurveArray sChimpMoodWeightCurves;
    // -> class MotiveCurveArray sAdultMoodWeightCurves;
    // -> static int sMotiveCurveMap[11];
    // -> unsigned char sMoodCurvesSetup;
}

// Range: 0x800C35FC -> 0x800C36F0
void cXPerson::CleanupMotiveStatics() {
    // Local variables
    class MotiveCurveSet & curves; // r30
    int c; // r29
    class MotiveCurveSet & curves; // r29
    int c; // r30
    class MotiveCurveSet & curves; // r29
    int c; // r30

    // References
    // -> class MotiveCurveArray sBoarMoodWeightCurves;
    // -> class MotiveCurveArray sChimpMoodWeightCurves;
    // -> class MotiveCurveArray sAdultMoodWeightCurves;
    // -> unsigned char sMoodCurvesSetup;
}

// Range: 0x800C36F0 -> 0x800C37D8
void cXPerson::LoadMotiveEffects(class cXPerson * const this /* r30 */) {
    // Local variables
    signed short AdWeightCurveFileID; // r31
}

// Range: 0x800C37D8 -> 0x800C383C
void MotiveInc::DoStream(struct MotiveInc * const this /* r30 */, class ReconBuffer * r /* r31 */) {}

// Range: 0x800C383C -> 0x800C3914
unsigned char TypedMotiveInc::ShouldMotiveBeApplied(struct TypedMotiveInc * const this /* r30 */, class cXPerson * person /* r31 */) {}

// Range: 0x800C3914 -> 0x800C391C
class ConstantsClient * GetAutonomyConstantsClient() {
    // References
    // -> static class AutonomyConstantsClient sTheAutonomyClient;
}

// Range: 0x800C391C -> 0x800C3B88
void AutonomyConstantsClient::UpdateConstants(class AutonomyConstantsClient * const this /* r31 */) {
    // Local variables
    unsigned int fileID; // r29
    signed short id; // r0
    class ConsoleAutoRefCount mc; // r1+0x8

    // References
    // -> static unsigned char sAutonomyConstantsLoaded;
    // -> float gFunctionalScoreDistanceAttenuation;
    // -> int gInteractionRandCount;
    // -> float gMinAutonomySittingScore;
    // -> float gVisHighAttenuation;
    // -> float gVisModerateAttenuation;
    // -> float gVisLowAttenuation;
    // -> float gHighAttenuation;
    // -> float gModerateAttenuation;
    // -> float gLowAttenuation;
    // -> float gMinAutonomyVisitorScore;
    // -> float gMinAutonomyFamilyScore;
}

// Range: 0x800C3B88 -> 0x800C3BE8
void ObjectRecord::DoStream(struct ObjectRecord * const this /* r30 */, class ReconBuffer * r /* r31 */) {}

// Range: 0x800C3BE8 -> 0x800C3D68
void * cXPerson::cXPerson(class cXPerson * const this /* r29 */, class ObjSelector * selector /* r30 */) {
    // References
    // -> int g_CollisionGridSize;
    // -> int g_CollisionBucketSize;
    // -> class CCollisionGrid * m_sCollisionGrid;
    // -> struct [anonymous] __vt__8cXPerson;
}

// Range: 0x800C3D68 -> 0x800C3FAC
void * cXPerson::~cXPerson(class cXPerson * const this /* r25 */) {
    // Local variables
    unsigned short id; // r31
    class cXPerson * pAwarePerson; // r31
    class Neighbor * pNeighbor; // r30
    class cXPerson * newPerson; // r29
    int i; // r28
    class cXPerson * currentPerson; // r27

    // References
    // -> struct [anonymous] __vt__8cXPerson;
}

// Range: 0x800C40C4 -> 0x800C435C
void cXPerson::Initialize(class cXPerson * const this /* r30 */) {
    // Local variables
    class ObjectSlot rightHandSlot; // r1+0x2C
    class ObjectSlot leftHandSlot; // r1+0x8
    class Neighbor * pNeighbor; // r31
    class SpriteSlot headSlot; // r1+0x50

    // References
    // -> static unsigned char sAutonomyConstantsLoaded;
    // -> unsigned char sMoodCurvesSetup;
}

// Range: 0x800C435C -> 0x800C445C
void cXPerson::Reset(class cXPerson * const this /* r27 */, unsigned char simonce /* r28 */) {
    // Local variables
    signed short visitorStatus; // r0
    signed short visitorType; // r0
    signed short visitorSchedule; // r0
}

// Range: 0x800C445C -> 0x800C45E8
void cXPerson::PostLoad(class cXPerson * const this /* r29 */, int version /* r30 */, enum TransitionType transitionType /* r31 */) {
    // Local variables
    unsigned char isPlaceholder; // r0
}

// Range: 0x800C45E8 -> 0x800C4620
void cXPerson::PreSave(class cXPerson * const this /* r31 */) {}

// Range: 0x800C4620 -> 0x800C47F0
enum TreeReturnCode cXPerson::TrySetMotiveDelta(class cXPerson * const this /* r29 */, class StackElem * elem /* r30 */, class XPrimParam * param /* r31 */) {
    // Local variables
    signed short incPerHour; // r1+0xA
    signed short maxValue; // r1+0x8
    unsigned long size; // r0
    struct MotiveInc motiveInc; // r1+0xC

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800C47F0 -> 0x800C498C
enum TreeReturnCode cXPerson::TryGosubFoundAction(class cXPerson * const this /* r28 */) {
    // Local variables
    class cXObject * theObject; // r31
    const class ITreeTable * theTable; // r30
    int entryIndex; // r29
    const class ITreeTableEntry * entry; // r0
    signed short treeID; // r0
    signed short stackVars[4]; // r1+0x8
    class Interaction temp; // r1+0x10

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800C498C -> 0x800C4D3C
enum TreeReturnCode cXPerson::TryLookTowards(class cXPerson * const this /* r31 */, class StackElem * elem /* r27 */, class XPrimParam * param /* r28 */) {
    // Local variables
    class FTilePt pt0; // r1+0x28
    class EGlobal & Globals; // r0
    float Angle; // f31
    class EVec3 vTemp; // r1+0x30
    class FTilePt pt2; // r1+0x20
    enum TreeReturnCode result; // r30
    class cXObject * stackObj; // r29
    class FTilePt pt1; // r1+0x18
    class FTilePt pt2; // r1+0x10
    class FTilePt delta; // r1+0x8
    enum TreeReturnCode result; // r29

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800C4D3C -> 0x800C4FE4
enum TreeReturnCode cXPerson::TryGotoRoutingSlot(class cXPerson * const this /* r31 */, class StackElem * elem /* r27 */, class XPrimParam * param /* r28 */) {
    // Local variables
    class cXObject * to; // r30
    class RoutingSlot * rs; // r29
    int slotNum; // r29
    int slotNum; // r29
    int slotNum; // r29
    enum TreeReturnCode ret_val; // r0
    enum TreeReturnCode ret_val; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800C4FE4 -> 0x800C51F0
enum TreeReturnCode cXPerson::FollowGetRoutingSlot(class cXPerson * const this /* r31 */, class XPrimParam * param /* r27 */, class cXObject * to /* r28 */, class RoutingSlot * * rs /* r29 */) {
    // Local variables
    int slotNum; // r30
    int slotNum; // r30
    int slotNum; // r30

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800C51F0 -> 0x800C530C
unsigned char cXPerson::FollowIsPathUpdated(class cXPerson * const this /* r29 */, class cXObject * to /* r30 */) {
    // Local variables
    int last_room; // r31
    int cur_room; // r0
    int tar_dist; // r0
    int target_delta; // r0
}

// Range: 0x800C530C -> 0x800C5A48
enum TreeReturnCode cXPerson::TryFollowSims(class cXPerson * const this /* r28 */, class StackElem * elem /* r29 */, class XPrimParam * param /* r30 */) {
    // Local variables
    signed short locals[2]; // r1+0x14
    class XRoute * route; // r0
    int oldTargetIndex; // [invalid]
    int size; // r27
    class FTilePt start_point; // r1+0x30
    float distance; // f30
    int i; // r31
    class FTilePt end_point; // r1+0x28
    float x1; // f0
    float x2; // f0
    float dx; // f29
    float y1; // f0
    float y2; // f0
    float dy; // f0
    float dist; // f1
    signed short temp; // r27
    class cXObject * to; // r31
    int dist; // r0
    class RoutingSlot * rs; // r1+0x10
    enum TreeReturnCode ret; // r0
    class XRoute * route; // r27
    unsigned char need_to_route; // r0
    int dist; // r0
    int oldTargetIndex; // r0
    int oldTargetIndex; // [invalid]
    int dist; // r0
    float x1; // r1+0xC
    float x2; // f0
    float dx; // f29
    float y1; // r1+0x8
    float y2; // f0
    float dy; // f30
    float dist; // f1
    class FTilePt new_point; // r1+0x20
    int fdestsize; // [invalid]
    int ftempsize; // r0
    int i; // [invalid]
    int j; // r26
    int j; // r26
    int i; // r25
    int i; // r24
    int oldTargetIndex; // r24
    class FTilePt old_point; // r1+0x18
    class XRoute * route; // r0
    enum TreeReturnCode ret; // r3

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800C5A48 -> 0x800C5AA4
void cXPerson::RemoveAllFromRoutingQueue(class cXPerson * pPerson /* r1+0x8 */) {
    // References
    // -> class Queue s_RoutingQueue;
}

// Range: 0x800C5AA4 -> 0x800C5B00
void cXPerson::RemoveAllFromTrappedQueue(class cXPerson * pPerson /* r1+0x8 */) {
    // References
    // -> class Queue s_TrappedQueue;
}

// Range: 0x800C5B00 -> 0x800C5BA4
unsigned char cXPerson::PopFromRoutingQueue(class cXPerson * pPerson /* r1+0x8 */) {
    // References
    // -> class Queue s_RoutingQueue;
}

// Range: 0x800C5BA4 -> 0x800C5C0C
unsigned char cXPerson::CanRouteThisFrame(class cXPerson * const this /* r31 */) {
    // References
    // -> class Queue s_RoutingQueue;
    // -> int s_nNumRoutedThisFrame;
}

// Range: 0x800C5C0C -> 0x800C5C74
unsigned char cXPerson::CanAskOthersToMoveThisFrame(class cXPerson * const this /* r31 */) {
    // References
    // -> class Queue s_RoutingQueue;
    // -> int s_nNumRoutedThisFrame;
}

// Range: 0x800C5C74 -> 0x800C61F0
enum TreeReturnCode cXPerson::GotoRoutingSlot(class cXPerson * const this /* r30 */, class cXObject * to /* r27 */, const class RoutingSlot * const rs /* r29 */, int & primState /* r31 */) {
    // Local variables
    class cXMTObject * pCurrent; // r28
    struct ObjDefinition * pObjDefinition; // r0
    class XRoute temp; // r1+0x10
    class XRoute * route; // r29
    enum TreeReturnCode result; // r1+0xC
    unsigned char bYieldPrimitive; // r1+0x8
}

// Range: 0x800C61F0 -> 0x800C6460
enum RoutingState cXPerson::Routing_Initial(class cXPerson * const this /* r26 */, unsigned char & bYieldPrimitive /* r31 */, enum TreeReturnCode & result /* r27 */) {
    // Local variables
    class XRoute * route; // r29
    class cXObject * dest; // r28
    signed short obj_type; // r0
    class XRoute * i; // r29
    class cXObject * chair; // r28
    signed short standTreeID; // r0
    signed short stck[4]; // r1+0x8

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800C6460 -> 0x800C65C4
enum RoutingState cXPerson::Routing_WaitingForPortal(class cXPerson * const this /* r26 */, unsigned char & bYieldPrimitive /* r27 */, enum TreeReturnCode & result /* r28 */) {
    // Local variables
    class XRoute * route; // r30
    class cXObject * dest; // r29
    class cXPortal * lastPortal; // r29
}

// Range: 0x800C65C4 -> 0x800C66E0
enum RoutingState cXPerson::Routing_Walking(class cXPerson * const this /* r28 */, unsigned char & bYieldPrimitive /* r29 */, enum TreeReturnCode & result /* r30 */) {
    // Local variables
    class XRoute * route; // r31
}

// Range: 0x800C66E0 -> 0x800C676C
enum RoutingState cXPerson::Routing_WaitingForSit(class cXPerson * const this /* r30 */) {
    // Local variables
    class XRoute * route; // r31
    signed short chairResult; // r0
}

// Range: 0x800C676C -> 0x800C6808
enum RoutingState cXPerson::Routing_WaitingForStand(class cXPerson * const this /* r30 */) {
    // Local variables
    class XRoute * route; // r31
}

// Range: 0x800C6808 -> 0x800C69DC
enum RoutingState cXPerson::Routing_Trapped(class cXPerson * const this /* r1+0x8 */, unsigned char & bYieldPrimitive /* r31 */, enum TreeReturnCode & result /* r29 */) {
    // Local variables
    class XRoute * route; // r29
    class FTilePt lastLoc; // r1+0x10
    int sdist; // r0

    // References
    // -> int s_nNumRoutedThisFrame;
    // -> class Queue s_RoutingQueue;
}

// Range: 0x800C69DC -> 0x800C6A64
enum RoutingState cXPerson::Routing_Failed(class cXPerson * const this /* r28 */, unsigned char & bYieldPrimitive /* r29 */, enum TreeReturnCode & result /* r30 */) {
    // Local variables
    class XRoute * route; // r31
}

// Range: 0x800C6A64 -> 0x800C6C78
enum RoutingState cXPerson::Routing_Succeeded(class cXPerson * const this /* r27 */, unsigned char & bYieldPrimitive /* r28 */, enum TreeReturnCode & result /* r29 */) {
    // Local variables
    class XRoute * route; // r31
    unsigned char canPlace; // r30
    class FTilePt final; // r1+0x8
}

// Range: 0x800C6C78 -> 0x800C6CD0
enum RoutingState cXPerson::Routing_WalkingSucceeded(unsigned char & bYieldPrimitive /* r31 */) {}

// Range: 0x800C6CD0 -> 0x800C6D28
enum RoutingState cXPerson::Routing_WalkingFailed(unsigned char & bYieldPrimitive /* r31 */) {}

// Range: 0x800C6D28 -> 0x800C6D80
enum RoutingState cXPerson::Routing_WalkTerminated(unsigned char & bYieldPrimitive /* r31 */) {}

// Range: 0x800C6D80 -> 0x800C6DE8
enum RoutingState cXPerson::Routing_FoundPath(class cXPerson * const this /* r30 */, unsigned char & bYieldPrimitive /* r31 */) {
    // Local variables
    class XRoute * route; // r0
    float distAccurate; // f0
}

// Range: 0x800C6DE8 -> 0x800C6F20
enum RoutingState cXPerson::Routing_Waiting(class cXPerson * const this /* r27 */, unsigned char & bYieldPrimitive /* r28 */, enum TreeReturnCode & result /* r29 */) {
    // Local variables
    class XRoute * route; // r31
    int waitStartTicks; // r30
    int ticksPassed; // r0
    signed short treeID; // r0
}

// Range: 0x800C6F20 -> 0x800C7140
enum RoutingState cXPerson::Routing_WaitingForPersonToMove(class cXPerson * const this /* r27 */, unsigned char & bYieldPrimitive /* r28 */, enum TreeReturnCode & result /* r29 */) {
    // Local variables
    class XRoute * route; // r30
    signed short treeID; // r0
    int ticksPassed; // r0
    signed short treeID; // r0
}

// Range: 0x800C7140 -> 0x800C7198
enum RoutingState cXPerson::Routing_RouteInvalidatedWhileWalking(unsigned char & bYieldPrimitive /* r31 */) {}

// Range: 0x800C7198 -> 0x800C7300
enum RoutingState cXPerson::Routing_NeedFailureFeedback(class cXPerson * const this /* r27 */, unsigned char & bYieldPrimitive /* r28 */, enum TreeReturnCode & result /* r29 */) {
    // Local variables
    class XRoute * route; // r30
    class RoutingSlot * slot; // r0
    signed short treeID; // r0
    signed short params[4]; // r1+0x8
}

// Range: 0x800C7300 -> 0x800C7350
enum RoutingState cXPerson::Routing_WaitingForFailureFeedback(class cXPerson * const this /* r31 */) {
    // Local variables
    class XRoute * route; // r0
}

// Range: 0x800C7350 -> 0x800C747C
enum RoutingState cXPerson::Routing_FoundGoals(class cXPerson * const this /* r1+0x8 */, unsigned char & bYieldPrimitive /* r28 */, enum TreeReturnCode & result /* r29 */) {
    // Local variables
    class XRoute * route; // r0

    // References
    // -> int s_nNumRoutedThisFrame;
    // -> class Queue s_RoutingQueue;
}

// Range: 0x800C747C -> 0x800C7490
enum RoutingState cXPerson::Routing_ObjectDeleted() {}

// Range: 0x800C7490 -> 0x800C74E8
enum RoutingState cXPerson::Routing_ObjectDeletedWhileWalking(unsigned char & bYieldPrimitive /* r31 */) {}

// Range: 0x800C74E8 -> 0x800C76A8
void cXPerson::CleanUpAfterFinishingRoute(class cXPerson * const this /* r25 */, enum RoutingState currentState /* r26 */) {
    // Local variables
    class XRoute * route; // r29
    int interactionID; // r0
    int iNumPeople; // r0
    int i; // r28
    class cXPerson * person; // r0
    class XRoute * hisRoute; // r27
}

// Range: 0x800C76A8 -> 0x800C7AC0
unsigned char cXPerson::AskOthersToMove(class cXPerson * const this /* r30 */, class XRoute * inRoute /* r31 */) {
    // Local variables
    int iNumPeople; // r0
    int i; // r26
    int j; // r25
    class cXPerson * consideredPerson; // r1+0xC
    class Interactor * interactor; // r0
    class SAnimator2 * sanim; // r0
    class cXPerson * p2; // r0
    class vector & rtStack; // r24
    class XRoute * rt; // r23
    class XRoute testRoute; // r1+0x28
    class TileList destList; // r1+0x18
    unsigned char bTestRoutePathFound; // r0
    class FTilePt * pt; // r23
    class FTilePt * nextPt; // r24
    class cXPerson * found; // r25
    int xinc; // r0
    int yinc; // r0
    float tinc; // f29
    float t; // f28
    class FTilePt curPt; // r1+0x10
    class cXPerson * * i; // r26

    // References
    // -> class EGlobal _globals;
    // -> static class vector consider;
}

// Range: 0x800C7AC0 -> 0x800C7B30
static unsigned char IsMoveOutOfWay(const class Interaction * action /* r31 */) {}

// Range: 0x800C7B30 -> 0x800C7BA4
static unsigned char IsAskedToMove(class cXPerson * p /* r30 */) {
    // Local variables
    unsigned int qsize; // r31
}

// Range: 0x800C7BA4 -> 0x800C7DD4
unsigned char cXPerson::MoveOutOfWay(class cXPerson * const this /* r28 */, int priority /* r29 */) {
    // Local variables
    class ObjSelector * destSel; // r31
    signed short newDestID; // r0
    class cXObject * destObj; // r30
    class RoutingSlot rs; // r1+0x48
    class Interaction moveOutOfWay; // r1+0x8
}

// Range: 0x800C7DD4 -> 0x800C8344
unsigned char cXPerson::MoveOutOfWay(class cXPerson * const this /* r28 */, class XRoute * inRoute /* r29 */, class TileList & desiredPath /* r24 */) {
    // Local variables
    class XRoute * myRoute; // r0
    class FTilePt x0; // r1+0x28
    class FTilePt x1; // r1+0x20
    class FTilePt * pt; // r31
    class FTilePt * nextPt; // r26
    class FTileRect rect; // r1+0x40
    int state; // r25
    int xinc; // r0
    int yinc; // r0
    float tinc; // f29
    float t; // f28
    class FTilePt curPt; // r1+0x18
    class ObjSelector * destSel; // r25
    signed short newDestID; // r0
    class cXObject * destObj; // r30
    class RoutingSlot rs; // r1+0x90
    class FTilePt delta; // r1+0x10
    int dir; // r0
    class XRoute testRoute; // r1+0xCC
    class TileList destList; // r1+0x30
    unsigned char bTestRoutePathFound; // r0
    class cXPerson * router; // r0
    int priority; // r0
    class Interaction moveOutOfWay; // r1+0x50
}

// Range: 0x800C8344 -> 0x800C838C
class XRoute * cXPerson::GetCurrentRoute(class cXPerson * const this /* r31 */) {
    // Local variables
    class XRoute * temp; // r0
}

// Range: 0x800C838C -> 0x800C8874
enum TreeReturnCode cXPerson::InitRoute(class cXPerson * const this /* r31 */, class XRoute * route /* r26 */) {
    // Local variables
    class cXObject * to; // r29
    class RoutingSlot * rs; // r28
    unsigned short myRoomId; // r0
    class Room * myRoom; // r0
    unsigned char success; // r3
    enum TreeReturnCode result; // r27
    struct RouteGoal & goal; // r0
    class cXObject * obj; // r30
    unsigned char gosubSucceeded; // r0
    class FTilePt finalPoint; // r1+0x58
    class FTilePt toLoc; // r1+0x50
    class FTilePt dirFinderPoint; // r1+0x48
    class FTilePt nextToLastPoint; // r1+0x40
    class FTilePt delta; // r1+0x38
    int dir; // r27
    int dir; // r27
    int dir; // r27
}

// Range: 0x800C8874 -> 0x800C8B2C
enum TreeReturnCode cXPerson::TryGotoRelative(class cXPerson * const this /* r28 */, class StackElem * elem /* r29 */, class XPrimParam * param /* r30 */) {
    // Local variables
    class cXObject * to; // r31
    class RoutingSlot rs; // r1+0x8
}

// Range: 0x800C8B2C -> 0x800C8C2C
unsigned char cXPerson::TryRoomRouting(class cXPerson * const this /* r29 */, class XRoute * route /* r30 */) {
    // Local variables
    class cXPortal * best; // r31
    signed short treeID; // r0
}

// Range: 0x800C8C2C -> 0x800C8DB8
enum TreeReturnCode cXPerson::TryElement(class cXPerson * const this /* r29 */, class StackElem * elem /* r30 */, class XPrimParam * param /* r31 */) {
    // Local variables
    enum TreeReturnCode result; // r7
    int beh; // r0
}

// Range: 0x800C8DB8 -> 0x800C8FB4
unsigned char cXPerson::Simulate(class cXPerson * const this /* r31 */, int ticks /* r29 */) {
    // Local variables
    unsigned char engaged; // r30
    struct MotiveInc * i; // r29
    float & motive; // r0
    float inc; // f1
    float limit; // f2
    unsigned int i; // r29
}

// Range: 0x800C8FB4 -> 0x800C8FC0
int cXPerson::ReconType() {}

// Range: 0x800C8FC0 -> 0x800C91E4
void cXPerson::ReconStream(class cXPerson * const this /* r28 */, class ReconBuffer * r /* r29 */, int version /* r30 */) {
    // Local variables
    signed short * buf; // r31
    int actionCount; // r1+0x8
    int cnt; // r31
    class Interaction & actionInQueue; // r0
}

// Range: 0x800C91E4 -> 0x800C91F4
float cXPerson::GetMotive() {}

// Range: 0x800C91F4 -> 0x800C9204
float * cXPerson::GetMotiveRef() {}

// Range: 0x800C9204 -> 0x800C9214
void cXPerson::SetMotive() {}

// Range: 0x800C9214 -> 0x800C9484
void cXPerson::SimMotives(class cXPerson * const this /* r30 */) {
    // Local variables
    class IGoalUnlock * unlocks; // r31
}

// Range: 0x800C9484 -> 0x800C95A0
void cXPerson::CalcHappy(class cXPerson * const this /* r29 */) {
    // Local variables
    float motSum; // f31
    float wghtSum; // f30
    class MotiveCurveSet * curves; // r30
    class MotiveCurve * c; // r31
    float mot; // f29
    float wght; // f0

    // References
    // -> class MotiveCurveArray sBoarMoodWeightCurves;
    // -> class MotiveCurveArray sChimpMoodWeightCurves;
    // -> class MotiveCurveArray sAdultMoodWeightCurves;
}

// Range: 0x800C95A0 -> 0x800C9734
unsigned char cXPerson::RunImmediateAction(class cXPerson * const this /* r25 */, class Interaction * interaction /* r26 */) {
    // Local variables
    class cXObject * obj; // r27
    class ObjTestSim check; // r1+0x8
    signed short oldPri; // r0

    // References
    // -> static class cXPerson * sImmediatePerson;
    // -> static class Interaction * sImmediateAction;
}

// Range: 0x800C9734 -> 0x800C9744
unsigned char cXPerson::IsIdle() {}

// Range: 0x800C9744 -> 0x800C9A9C
unsigned char cXPerson::AddAction(class cXPerson * const this /* r30 */, class Interaction * interaction /* r31 */) {
    // Local variables
    const class ITreeTableEntry * entry; // r27
    const class Interaction * last; // r27
    int priority; // r0
    int interactionCount; // r0
    unsigned char bQueueTooBig; // r26
    int lowPriorityInteractions; // r25
    int depth; // r24
    const class Interaction & queuedInteraction; // r23
    int curPriority; // r0
    int depth; // r23
    const class Interaction & queuedInteraction; // r24
    int curPriority; // r0

    // References
    // -> static class cXPerson * sImmediatePerson;
    // -> static class Interaction * sImmediateAction;
}

// Range: 0x800C9A9C -> 0x800C9BF8
unsigned char cXPerson::RemoveAction(class cXPerson * const this /* r28 */, int actionID /* r29 */) {
    // Local variables
    class Interaction * interaction; // r31
    unsigned int depth; // r30
    class Interaction newAction; // r1+0x8
}

// Range: 0x800C9BF8 -> 0x800C9CDC
unsigned char cXPerson::CancelLastAction(class cXPerson * const this /* r28 */) {
    // Local variables
    int numQueuedActions; // r0
    int interactionID; // r30
    int subInteractionID; // r29
    const class Interaction * queueAction; // r0
    const class Interaction * prevAction; // r0
    const class Interaction & curAction; // r0
    unsigned char retcode; // r3
}

// Range: 0x800C9CDC -> 0x800C9DAC
unsigned char cXPerson::CancelAllActions(class cXPerson * const this /* r30 */) {
    // Local variables
    int numActions; // r0
    int nextAction; // r31
    const class Interaction * pAction; // r0
    class Interaction pAction; // r1+0x8
}

// Range: 0x800C9DAC -> 0x800C9E2C
unsigned char cXPerson::CancelAllButLastActions(class cXPerson * const this /* r30 */) {
    // Local variables
    int numActions; // r0
    int nextAction; // r31
    const class Interaction * pAction; // r0
}

// Range: 0x800C9E2C -> 0x800C9EA4
class Interaction * cXPerson::GetIndAction(class cXPerson * const this /* r30 */, int index /* r31 */) {}

// Range: 0x800C9EA4 -> 0x800C9EC8
class Interaction & cXPerson::GetCurrentAction() {
    // References
    // -> static class Interaction s_emptyCurrentInteraction;
}

// Range: 0x800C9EC8 -> 0x800C9F08
class cXObject * cXPerson::GetCurrentInteractionStackObject() {}

// Range: 0x800C9F08 -> 0x800C9F4C
class cXPerson * cXPerson::GetInteractionPerson() {
    // Local variables
    class cXObject * obj; // r0
}

// Range: 0x800C9F4C -> 0x800CA0C0
unsigned char cXPerson::ShouldInterrupt(class cXPerson * const this /* r28 */) {
    // Local variables
    unsigned char interrupt; // r30
    const class Interaction & currentActionRef; // r31
    unsigned int firstPendingAction; // r31
    const class Interaction & pendingActionRef; // r29
    class Interaction & interaction; // r0
}

// Range: 0x800CA0C0 -> 0x800CA140
enum TreeReturnCode cXPerson::TryTestInteractingWith(class cXPerson * const this /* r29 */) {
    // Local variables
    signed short objectID; // r31
    struct ObjectRecord * i; // r30
}

// Range: 0x800CA140 -> 0x800CA440
enum TreeReturnCode cXPerson::TryChangeSuit(class cXPerson * const this /* r29 */, class StackElem * elem /* r31 */, class XPrimParam * param /* r30 */) {
    // Local variables
    unsigned int fileID; // r31
    const struct NPC * pServiceNPC; // r0
    enum OutfitS2C newOutfit; // r31
    class AUTOPTR propTable; // r1+0x8
    const struct PropRef * suitName; // r31

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800CA440 -> 0x800CA554
enum TreeReturnCode cXPerson::TryIdleForInput(class cXPerson * const this /* r28 */, class StackElem * elem /* r29 */, class XPrimParam * param /* r30 */) {
    // Local variables
    unsigned char interrupt; // r0
    signed short * dec; // r5

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800CA554 -> 0x800CA828
enum TreeReturnCode cXPerson::executeInterruptOnIdlePrimitve(class cXPerson * const this /* r31 */, class StackElem * elem /* r25 */, signed short * dec /* r26 */, unsigned char interruptable /* r27 */) {
    // Local variables
    class Interaction & interaction; // r28
    class cXObject * obj; // r27
    unsigned char wasVisible; // r0
    class ObjTestSim check; // r1+0x8
    signed short treeID; // r0

    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800CA828 -> 0x800CAA88
enum TreeReturnCode cXPerson::TryIdleAnimate(class cXPerson * const this /* r31 */, class StackElem * elem /* r27 */, class XPrimParam * param /* r28 */) {
    // Local variables
    signed char beh; // r0
    enum TreeReturnCode retCode; // r0
    class DirectInteractor * dc_interactor; // r0
    class EAnimController * pAC; // r29

    // References
    // -> unsigned char g_bTreeAssert;
    // -> class EGlobal _globals;
}

// Range: 0x800CAA88 -> 0x800CAD00
enum TreeReturnCode cXPerson::TryFindBestAction(class cXPerson * const this /* r30 */, class StackElem * elem /* r31 */, class XPrimParam * param /* r25 */) {
    // Local variables
    unsigned char runFBA; // r1+0x9
    enum TreeReturnCode result; // r0
    class ObjTestSim testSim; // r1+0x18
    int arraySize; // r0
    int startingObject; // r28
    signed short room; // r1+0xE
    signed short owner; // r1+0xC
    signed short data; // r1+0xA
    unsigned char bIsPrimarySim; // r27
    float baseHappy; // f31
    int index; // r26
    class cXObject * obj; // r25
    class InteractionList unscoredInteractions; // r1+0x10
    unsigned char bYield; // r1+0x8
    struct ScoredInteraction * chosenInteraction; // r0

    // References
    // -> static int checkTreeCount;
}

// Range: 0x800CAD00 -> 0x800CAE8C
enum TreeReturnCode cXPerson::TestAutonomy(class cXPerson * const this /* r29 */, unsigned char & runFBA /* r30 */) {
    // Local variables
    signed short nFreeWillOverride; // r0
    class InteractorManager * interactorManager; // r31
    class DirectInteractor * dc_interactor; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x800CAE8C -> 0x800CAFE0
void cXPerson::GatherInteractions(class cXPerson * const this /* r31 */, class cXObject * obj /* r27 */, class InteractionList & unscoredInteractions /* r28 */, class ObjTestSim & testSim /* r29 */, unsigned char bIsPrimarySim /* r30 */) {
    // Local variables
    class cFixedWorld * pWorld; // r31
    class CTilePt objectLocation; // r1+0x8
    unsigned char bSuppressNPCAdvertisement; // r0
}

// Range: 0x800CAFE0 -> 0x800CB4DC
void cXPerson::ScoreInteractions(class cXPerson * const this /* r26 */, class cXObject * obj /* r27 */, class InteractionList & unscoredInteractions /* r28 */, class list & fInteractions /* r29 */, class ObjTestSim & testSim /* r30 */, float baseHappy /* f27 */) {
    // Local variables
    int relationshipFlags; // r20
    unsigned char owned; // r0
    enum tCheckTreeStatus$57559game_simulator_core2_unity_cpp prefixTreeStatus; // r19
    float distance; // f0
    float totalHappy; // f0
    const class ITreeTable * pTreeTable; // r0
    signed short prefixCheckTreeID; // r31
    struct ScoredInteraction scoredInteraction; // r1+0x18
    class iterator i; // r1+0x14
    unsigned char allowingCheckTreeAds; // r0
    unsigned char goAhead; // r0
    class TTabScratchEntry * pScratchEntry; // r1+0x10
    const class ITreeTableEntry * pEntry; // r22
    float attenuation; // f28
    const class ITreeTable * pTreeTable; // r0

    // References
    // -> unsigned char sbAllowingCheckTreeAds;
    // -> static int checkTreeCount;
}

// Range: 0x800CB4DC -> 0x800CB608
int cXPerson::CalcInteractionRandCount(class cXPerson * const this /* r28 */) {
    // Local variables
    float lowestMotive; // f31
    int i; // r30
    int motiveId; // r29
    int result; // r3

    // References
    // -> int gInteractionRandCount;
    // -> static int sMotiveCurveMap[11];
    // -> unsigned char sUseScalingInteractionRange;
}

// Range: 0x800CB608 -> 0x800CBA48
struct ScoredInteraction * cXPerson::SelectInteraction(class cXPerson * const this /* r24 */, class list & fInteractions /* r25 */, unsigned char & bYield /* r26 */) {
    // Local variables
    int sciSize; // [invalid]
    class map prefixTestMap; // r1+0x40
    int interactionRandCount; // r29
    struct ListIterator sci; // r1+0x30
    int count; // r23
    int i; // r28
    unsigned char goAhead; // r28
    int pick; // r31
    int listSize; // r27
    int i; // r22
    struct ScoredInteraction & interactionCandidate; // r0
    class cXObject * supposedStackObject; // r0
    signed short stackLocals[4]; // r1+0x38
    struct rbtree_iterator it; // r1+0x2C
    unsigned char avail; // r22

    // References
    // -> float gMinAutonomySittingScore;
    // -> static int checkTreeCount;
    // -> static float kMaxCheckTreesToRunInOneTick;
    // -> signed short sDumpTFBACount;
    // -> unsigned char sDumpTFBA;
}

// Range: 0x800CBA48 -> 0x800CBA60
unsigned char __lt() {}

// Range: 0x800CBA60 -> 0x800CBB34
void cXPerson::UpdateCurrentRoom(class cXPerson * const this /* r27 */) {
    // Local variables
    unsigned short newRoomID; // r0
    class RoomManager * room_mgr; // r30
    class Room * oldRoom; // r29
    class Room * newRoom; // r28
}

// Range: 0x800CBB34 -> 0x800CBB68
void cXPerson::Place(class cXPerson * const this /* r31 */) {}

// Range: 0x800CBB68 -> 0x800CBBAC
enum TreeReturnCode cXPerson::TrySocialMode() {
    // References
    // -> unsigned char g_bTreeAssert;
}

// Range: 0x800CBBAC -> 0x800CBC1C
void cXPerson::SetHilite(class cXPerson * const this /* r30 */, int newMask /* r31 */) {}

// Range: 0x800CBC1C -> 0x800CBC28
unsigned char cXPerson::IsSelected() {}

// Range: 0x800CBC28 -> 0x800CBD24
unsigned char cXPerson::IsSelectableByPlayer(class cXPerson * const this /* r30 */) {
    // Local variables
    unsigned char rc; // r0
    int whichFamilyId; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800CBD24 -> 0x800CBDA4
unsigned char cXPerson::IsPrimarySim(class cXPerson * const this /* r30 */, int player /* r31 */) {
    // Local variables
    class Neighbor * p1Neighbor; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x800CBDA4 -> 0x800CBDD4
void cXPerson::AttachToHUD() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x800CBDD4 -> 0x800CBDDC
void cXPerson::SendActionQueueToSimSwitcher() {}

// Range: 0x800CBDDC -> 0x800CBE28
void cXPerson::ForceLocation(class cXPerson * const this /* r31 */) {}

// Range: 0x800CBE28 -> 0x800CBEF8
unsigned char cXPerson::GosubObjectTree(class cXPerson * const this /* r29 */, class cXObject * obj /* r30 */, unsigned char hasIcon /* r31 */) {
    // Local variables
    struct ObjectRecord newRec; // r1+0x8
}

// Range: 0x800CBEF8 -> 0x800CC088
void cXPerson::StackJustPopped(class cXPerson * const this /* r28 */) {
    // Local variables
    unsigned char bPoppedObject; // r31
    int newStackSize; // r30
    struct ObjectRecord * last; // r29
    struct ObjectRecord * i; // r30
}

// Range: 0x800CC088 -> 0x800CC0CC
void cXPerson::SetCurrentAction(class cXPerson * const this /* r31 */) {}

// Range: 0x800CC0CC -> 0x800CC218
void cXPerson::UpdateCurrentAction(class cXPerson * const this /* r30 */) {
    // Local variables
    class Interaction blankInterationToClearCurrent; // r1+0x8
    class Interaction & currentActionRef; // r31
}

// Range: 0x800CC218 -> 0x800CC90C
void cXPerson::Cleanup(class cXPerson * const this /* r30 */, class cXObject * respect /* r31 */) {
    // Local variables
    unsigned char involved; // r29
    struct ObjectRecord * i; // r27
    class XRoute * it; // r27
    struct ObjectRecord * last; // r0
    class cXObject * obj; // r27
    int targetStackSize; // r29
    class FTilePt loc; // r1+0x10
    int lev; // r27
    class FindGoodLocationParams fglp; // r1+0x18
    int interactionIndex; // r27
    class Interaction & currentActionRef; // r28
    const class Interaction & inter; // r28
    class XRoute * rt; // r27

    // References
    // -> static class cXPerson * sImmediatePerson;
    // -> static class Interaction * sImmediateAction;
}

// Range: 0x800CC90C -> 0x800CC9A4
void cXPerson::CompleteCurrentAction(class cXPerson * const this /* r31 */) {
    // Local variables
    const class Interaction & interaction; // r0
}

// Range: 0x800CC9A4 -> 0x800CCA04
void cXPerson::DeleteTopAction(class cXPerson * const this /* r30 */) {
    // Local variables
    unsigned int firstPendingAction; // r31
    const class Interaction & action; // r0
}

// Range: 0x800CCA04 -> 0x800CCABC
void cXPerson::ActionSkipped(class cXPerson * const this /* r28 */, const class Interaction & action /* r29 */) {
    // Local variables
    class cXObject * obj; // r31
    unsigned int depth; // r30
}

// Range: 0x800CCABC -> 0x800CCAC8
void cXPerson::SetNeighbor() {}

// Range: 0x800CCAC8 -> 0x800CCAE0
unsigned char cXPerson::IsSleeping() {}

// Range: 0x800CCAE0 -> 0x800CCB68
unsigned char cXPerson::IsAtWork(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCB68 -> 0x800CCBB0
enum tSimType cXPerson::GetSimType(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCBB0 -> 0x800CCBF8
unsigned char cXPerson::IsPet(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCBF8 -> 0x800CCC74
unsigned char cXPerson::IsBoar(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCC74 -> 0x800CCCBC
unsigned char cXPerson::IsDog(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCCBC -> 0x800CCD04
unsigned char cXPerson::IsCat(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCD04 -> 0x800CCD58
unsigned char cXPerson::IsChild(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCD58 -> 0x800CCDB4
unsigned char cXPerson::IsMale(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCDB4 -> 0x800CCDDC
unsigned char cXPerson::IsFemale() {}

// Range: 0x800CCDDC -> 0x800CCE00
unsigned char cXPerson::IsAdult() {}

// Range: 0x800CCE00 -> 0x800CCE60
void cXPerson::InvalidateRoutes(class cXPerson * const this /* r30 */) {
    // Local variables
    class XRoute * i; // r31
}

// Range: 0x800CCE60 -> 0x800CCF08
unsigned char cXPerson::UserCanPickup(class cXPerson * const this /* r31 */) {
    // References
    // -> class cXObject * gPlacementConflict;
    // -> int gPlacementError;
}

// Range: 0x800CCF08 -> 0x800CCF50
void cXPerson::Turn(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCF50 -> 0x800CCFA4
unsigned char cXPerson::IsModelLoaded(class cXPerson * const this /* r31 */) {}

// Range: 0x800CCFA4 -> 0x800CD028
unsigned char cXPerson::IsPersonDying(class cXPerson * const this /* r30 */) {
    // Local variables
    int i; // r31
    class StackElem * pFrame; // r0
}

// Range: 0x800CD028 -> 0x800CD034
void cXPerson::SetCurrentActionText() {}

// Range: 0x800CD034 -> 0x800CD098
void cXPerson::SetIdlePlayerSimAutonomous(class cXPerson * const this /* r31 */) {
    // Local variables
    class InteractorManager * interactorManager; // r0
    class DirectInteractor * dc_interactor; // r5

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800CD098 -> 0x800CD114
unsigned char cXPerson::IsCarryingDCObject(class cXPerson * const this /* r31 */) {
    // Local variables
    signed short obj_group; // r0
}

// Range: 0x800CD114 -> 0x800CD174
class CasSimDescription * cXPerson::GetNonCostumedSimDescription(class cXPerson * const this /* r31 */) {}

// Range: 0x800CD174 -> 0x800CD1C4
class cXObject * cXPerson::GetControllingObject(class cXPerson * const this /* r31 */) {
    // Local variables
    int size; // r0
}

// Range: 0x800CD1C4 -> 0x800CD1D8
unsigned char cXPerson::SetAwareOfObject() {}

// Range: 0x800CD1D8 -> 0x800CD1EC
unsigned char cXPerson::SetAwareOfObjectKilled() {}

// Range: 0x800CD1EC -> 0x800CD200
unsigned char cXPerson::ClearAwareOfObject() {}

// Range: 0x800CD200 -> 0x800CD210
void cXPerson::SetPersonData() {}

// Range: 0x800CD210 -> 0x800CD2BC
void cXPerson::UpdatetoNewPersonData(signed short * oldstyle /* r28 */) {
    // Local variables
    int i; // r31
    int i; // r29
}

// Range: 0x800CD2BC -> 0x800CD2F4
unsigned char cXPerson::isValidPersonDataField() {}

// Range: 0x800CD2F4 -> 0x800CD308
int cXPerson::TranslasteToNewPersonDataIndex() {
    // References
    // -> signed char sOldPersondataIndexArray[80];
}

// Range: 0x800CD308 -> 0x800CD448
int cXPerson::TranslasteToOldPersonDataIndex() {}

// Range: 0x800CD448 -> 0x800CD48C
class CCollisionGrid * cXPerson::GetStaticCollisionGrid() {
    // References
    // -> class CCollisionGrid * m_sCollisionGrid;
}

// Range: 0x800CD48C -> 0x800CD4BC
void cXPerson::DeleteCollisionGrid() {
    // References
    // -> class CCollisionGrid * m_sCollisionGrid;
}

// Range: 0x800CD4BC -> 0x800CD668
void cXPerson::ApplyDamage(class cXPerson * const this /* r31 */, const struct DamageEvent & damage /* r29 */, signed short nArmorMultiplier /* r30 */) {
    // Local variables
    struct Armor armor; // r1+0x18
    struct DamageEvent actualDamage; // r1+0x10
    unsigned char bAnyDamageLeft; // r8
    int i; // r9
    class BitFlags simDamageResult; // r1+0x8
    class ESim * pESim; // r0
}

// Range: 0x800CD668 -> 0x800CD738
void cXPerson::CalcArmorAgainstDamage(class cXPerson * const this /* r31 */, const struct DamageEvent & damage /* r29 */, struct Armor & armor /* r30 */) {
    // Local variables
    class InventoryItems * pInventory; // r31
}

// Range: 0x800CD738 -> 0x800CD778
void * AutonomyConstantsClient::AutonomyConstantsClient(class AutonomyConstantsClient * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__23AutonomyConstantsClient;
}


