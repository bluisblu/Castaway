/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\chimp_animator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80020030 -> 0x80021800
*/
// Range: 0x80020030 -> 0x8002006C
void * ChimpAnimator::ChimpAnimator(class ChimpAnimator * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13ChimpAnimator;
}

// Range: 0x8002006C -> 0x80020104
void * ChimpAnimator::~ChimpAnimator(class ChimpAnimator * const this /* r27 */) {
    // Local variables
    unsigned int i; // r29

    // References
    // -> struct [anonymous] __vt__13ChimpAnimator;
}

// Range: 0x80020104 -> 0x800201E8
void ChimpAnimator::GetAllIKBoneIndices(enum eIKBones eBone /* r28 */, unsigned int & outRoot /* r29 */, unsigned int & outMid /* r30 */, unsigned int & outEnd /* r31 */) {}

// Range: 0x800201E8 -> 0x8002059C
unsigned char ChimpAnimator::Initialize(class ChimpAnimator * const this /* r29 */, class cXPerson * person /* r30 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int i; // r30
    unsigned int rootBoneIdx; // r1+0x10
    unsigned int midBoneIdx; // r1+0xC
    unsigned int endBoneIdx; // r1+0x8
}

// Range: 0x800205D8 -> 0x80020818
void ChimpAnimator::setMovementVelocityFromAnimation(class ChimpAnimator * const this /* r29 */) {
    // Local variables
    int trans; // r4
    class EVec3 vTrans; // r1+0x1C
    float duration; // f31
    float distance; // f1
    class EACTrack tempTrack; // r1+0x28
    const struct AnimRef * SkillId; // r1+0xC
    class EAnimNodeDataPos * pNodeDataPos; // r0
    struct EACTrackNodeStreams * pStreams; // r0
    class ERAnim * animPointer; // r26
    float * pVelocity; // r31
    unsigned int valueFlag; // r30
    unsigned char scale; // r1+0x8

    // References
    // -> float kMinWalkAnimDistance;
    // -> class EAnimManager _animman;
}

// Range: 0x80020818 -> 0x8002081C
void ChimpAnimator::Update() {}

// Range: 0x8002081C -> 0x80020878
void ChimpAnimator::lockCarryArmNodes(class ChimpAnimator * const this /* r29 */, float * pNodeList /* r30 */, int eTrkFlag /* r31 */) {}

// Range: 0x80020878 -> 0x800208D4
void ChimpAnimator::lockCarryArmNodes(class ChimpAnimator * const this /* r29 */, float * pNodeList /* r30 */, class EACTrack * pTrack /* r31 */) {}

// Range: 0x800208D4 -> 0x80020AF8
enum TreeReturnCode ChimpAnimator::CarryBehavior(class ChimpAnimator * const this /* r27 */, const class AnimateNewParam * param /* r28 */, signed short animID /* r29 */, const struct AnimRef * & skill /* r30 */, class StackElem * elem /* r31 */) {
    // Local variables
    float fBlendTime; // f31
    int behavior; // r0
    unsigned char scale; // r1+0x8
    class EACTrack * pTrack; // r31
    enum TreeReturnCode code; // r31
    unsigned char bBackwards; // r0

    // References
    // -> float s_RightArmCarryIndexArray[57];
}

// Range: 0x80020AF8 -> 0x80020AFC
void ChimpAnimator::handleMoodAnimations() {}

// Range: 0x80020AFC -> 0x80020B50
void ChimpAnimator::InitStaticAnimationElements() {
    // References
    // -> float s_RightArmCarryIndexArray[57];
}

// Range: 0x80020B50 -> 0x80020D10
float ChimpAnimator::GetZRotation(class ChimpAnimator * const this /* r31 */) {
    // Local variables
    float trackFrames; // f0
    float rot; // f1
    float blendinfactor; // f3
    float lastDir; // f4
}

// Range: 0x80020D10 -> 0x80020D6C
float ChimpAnimator::GetMovementVelocityFromStyle() {
    // Local variables
    float fVelocity; // f1
}

// Range: 0x80020D6C -> 0x80020DC0
void ChimpAnimator::UpdateSimDirection() {}

// Range: 0x80020DC0 -> 0x80020F88
unsigned char ChimpAnimator::rotateAnimation(class ChimpAnimator * const this /* r30 */, float DeltaTime /* f30 */, float DesiredDir /* f31 */, float DeltaDir /* f29 */) {
    // Local variables
    unsigned char bRetVal; // r31
    float TurnRate; // f0
    float DeltaMovement; // f30
    float RotateDirection; // f0
}

// Range: 0x80020F88 -> 0x80020F90
float ChimpAnimator::GetWalkToRunDistance() {}

// Range: 0x80020F90 -> 0x80020F98
float ChimpAnimator::GetRunToWalkDistance() {}

// Range: 0x80020F98 -> 0x800210A0
int ChimpAnimator::selectRandomIdle(class ChimpAnimator * const this /* r30 */) {
    // Local variables
    int desiredAnim; // r3
    unsigned char bCurSitting; // r0
    class cXObject * pObj; // r0
    class cXPerson * pSocialPerson; // r4
}

// Range: 0x800210A0 -> 0x800210E8
int ChimpAnimator::SelectRandomIdleSit() {
    // Local variables
    int desiredAnim; // r3
    int animOffset; // r3
}

// Range: 0x800210E8 -> 0x80021138
int ChimpAnimator::SelectRandomIdleStand() {
    // Local variables
    int desiredAnim; // r3
    int animOffset; // r3
}

// Range: 0x80021138 -> 0x8002120C
unsigned char ChimpAnimator::IsCurrentlySitting(class ChimpAnimator * const this /* r29 */) {
    // Local variables
    class EACTrack * pCurTrack; // r0
    unsigned int curResId; // r0
    const struct AnimRef * skillId; // r1+0xC
    unsigned char scale; // r1+0x8
    unsigned int i; // r30
}

// Range: 0x8002120C -> 0x800212D0
enum TreeReturnCode ChimpAnimator::TryAnimate(class ChimpAnimator * const this /* r29 */, class StackElem * elem /* r30 */, const class AnimateNewParam * param /* r31 */) {
    // Local variables
    const struct AnimRef * skillId; // r1+0xC
    unsigned char scale; // r1+0x9
    unsigned char transComplete; // r1+0x8
}

// Range: 0x800212D0 -> 0x80021384
unsigned char ChimpAnimator::IsInSitToStandTransition(class ChimpAnimator * const this /* r29 */, unsigned char & transComplete /* r30 */) {
    // Local variables
    class EACTrack * pCurTrack; // r0
    unsigned int curResId; // r0
    const struct AnimRef * skillId; // r1+0xC
    unsigned char scale; // r1+0x8
}

// Range: 0x80021384 -> 0x800213D4
unsigned char ChimpAnimator::IsPlayingSittingAnim(class ChimpAnimator * const this /* r31 */) {
    // Local variables
    unsigned char transAnimComplete; // r1+0x8
}

// Range: 0x800213D4 -> 0x80021440
void ChimpAnimator::handleSitToIdleAnimation(class ChimpAnimator * const this /* r31 */) {
    // Local variables
    const struct AnimRef * skillId; // r1+0xC
    unsigned char scale; // r1+0x8
}

// Range: 0x80021440 -> 0x80021800
void ChimpAnimator::AdjustIKTargetHeight(class ChimpAnimator * const this /* r28 */, class IKData * pIKData /* r29 */, class EMat4 & endBoneOrient /* r30 */) {
    // Local variables
    float socialModeDelta; // r31
    unsigned char isFrontBackLower; // r0
    float deltaOffset; // f0
    float deltaFrontBackOffset; // f0
    float totalDelta; // f30
    float totalDelta; // f30
    float totalDelta; // r31
    float totalDelta; // r31
    float totalDelta; // f30
    float totalDelta; // f30
    float totalDelta; // r31
    float totalDelta; // f29
}


