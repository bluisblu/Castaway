/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\adult_sim_animator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001B6F0 -> 0x8001CF20
*/
// Range: 0x8001B6F0 -> 0x8001B72C
void * AdultSimAnimator::AdultSimAnimator(class AdultSimAnimator * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__16AdultSimAnimator;
}

// Range: 0x8001B72C -> 0x8001B808
void * AdultSimAnimator::~AdultSimAnimator(class AdultSimAnimator * const this /* r27 */) {
    // Local variables
    const struct AnimRef * skill; // r1+0xC
    unsigned char scale; // r1+0x8
    unsigned int i; // r29

    // References
    // -> class EAnimManager _animman;
    // -> struct [anonymous] __vt__16AdultSimAnimator;
}

// Range: 0x8001B808 -> 0x8001B8EC
void AdultSimAnimator::GetAllIKBoneIndices(enum eIKBones eBone /* r28 */, unsigned int & outRoot /* r29 */, unsigned int & outMid /* r30 */, unsigned int & outEnd /* r31 */) {}

// Range: 0x8001B8EC -> 0x8001BC28
unsigned char AdultSimAnimator::Initialize(class AdultSimAnimator * const this /* r29 */, class cXPerson * person /* r30 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int i; // r30
    unsigned int rootBoneIdx; // r1+0x10
    unsigned int midBoneIdx; // r1+0xC
    unsigned int endBoneIdx; // r1+0x8
}

// Range: 0x8001BC28 -> 0x8001C2BC
void AdultSimAnimator::DrawCensor(class AdultSimAnimator * const this /* r27 */, class ERC * prc /* r28 */) {
    // Local variables
    class E3DWindow * pWin; // r31
    class EMat4 mOrient; // r1+0x1B8
    class EVec3 vChest; // r1+0x1A8
    class EVec3 vChestWorld; // r1+0x19C
    class EVec3 vPelvis; // r1+0x190
    class EVec3 vPelvisWorld; // r1+0x184
    class EVec3 vLHand; // r1+0x178
    class EVec3 vLHandWorld; // r1+0x16C
    class EVec3 vRHand; // r1+0x160
    class EVec3 vRHandWorld; // r1+0x154
    class EVec3 vMid; // r1+0x148
    class EVec4 vMidEye; // r1+0x138
    float q; // f31
    float length; // f31
    float z; // f30
    class EVec3 vNaughty; // r1+0x12C
    class EVec3 vUL; // r1+0x120
    class EVec3 vBR; // r1+0x114
    unsigned char brighten; // r30
    int censorship; // r29
    float x_offset; // f30
    float y_offset; // f0
    float x_offset; // f30
    float y_offset; // f0

    // References
    // -> class EGraphics * _pGfx;
    // -> float s_censor_rect_Z_offset;
}

// Range: 0x8001C2BC -> 0x8001C404
void AdultSimAnimator::InitStaticAnimationElements() {
    // References
    // -> float s_UpperBodyIndexArray[58];
    // -> float s_FXNodeIndexArray[58];
    // -> float s_HeadIndexArray[58];
    // -> float s_DualArmCarryIndexArray[58];
    // -> float s_LeftArmCarryIndexArray[58];
    // -> float s_RightArmCarryIndexArray[58];
}

// Range: 0x8001C404 -> 0x8001C550
void AdultSimAnimator::handleMoodAnimations(class AdultSimAnimator * const this /* r30 */) {
    // Local variables
    int MoodId; // r31
    float Intensity; // f31
    class EACTrack * pTrack; // r31

    // References
    // -> float s_HeadIndexArray[58];
}

// Range: 0x8001C550 -> 0x8001C880
void AdultSimAnimator::selectIdleOverlay(class AdultSimAnimator * const this /* r30 */) {
    // Local variables
    const struct AnimRef * SkillId; // r1+0xC
    unsigned char scale; // r1+0x9
    unsigned char scale; // r1+0x8
    int selectionValue; // r0
    int selectionIndex; // r4
    enum StdAnimIdx idleSelection; // r31
    class EACTrack * pTrack; // r25
    float fBlendTime; // f31

    // References
    // -> float s_UpperBodyIndexArray[58];
    // -> float kDefaultBlendTime;
    // -> int kIdleOverlayFiveChance;
    // -> int kIdleOverlayFourChance;
    // -> int kIdleOverlayThreeChance;
    // -> int kIdleOverlayTwoChance;
    // -> int kIdleOverlayOneChance;
    // -> int kIdleOverlayChance;
    // -> class EAnimManager _animman;
}

// Range: 0x8001C880 -> 0x8001C8C8
void AdultSimAnimator::lockHandsUpCarryNodes(class AdultSimAnimator * const this /* r31 */) {
    // References
    // -> float s_DualArmCarryIndexArray[58];
}

// Range: 0x8001C8C8 -> 0x8001C924
void AdultSimAnimator::lockCarryArmNodes(class AdultSimAnimator * const this /* r29 */, float * pNodeList /* r30 */, class EACTrack * pTrack /* r31 */) {}

// Range: 0x8001C924 -> 0x8001C980
void AdultSimAnimator::lockCarryArmNodes(class AdultSimAnimator * const this /* r29 */, float * pNodeList /* r30 */, int eTrkFlag /* r31 */) {}

// Range: 0x8001C980 -> 0x8001CA24
void AdultSimAnimator::LoadCarryAsync(class AdultSimAnimator * const this /* r30 */) {
    // Local variables
    const struct AnimRef * skill; // r1+0xC
    unsigned char scale; // r1+0x8

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001CA24 -> 0x8001CAA0
unsigned char AdultSimAnimator::CheckPendingCarryAnimation(class AdultSimAnimator * const this /* r30 */, const struct AnimRef * & skill /* r31 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001CAA0 -> 0x8001CC2C
void AdultSimAnimator::startCarry(class AdultSimAnimator * const this /* r30 */) {
    // Local variables
    const struct AnimRef * skill; // r1+0xC
    unsigned char scale; // r1+0x8
    class ObjectModule * module; // r31
    class cXObject * pObj; // r31
    class EACTrack * pTrack; // r31

    // References
    // -> float s_RightArmCarryIndexArray[58];
    // -> class EAnimManager _animman;
}

// Range: 0x8001CC2C -> 0x8001CC68
void AdultSimAnimator::SetFXNodeArrayBlendFactor(class EACTrack * pTrack /* r31 */) {
    // References
    // -> float s_FXNodeIndexArray[58];
}

// Range: 0x8001CC68 -> 0x8001CEC0
enum TreeReturnCode AdultSimAnimator::CarryBehavior(class AdultSimAnimator * const this /* r31 */, const class AnimateNewParam * param /* r27 */, signed short animID /* r28 */, const struct AnimRef * & skill /* r29 */, class StackElem * elem /* r30 */) {
    // Local variables
    float fBlendTime; // f31
    unsigned char scale; // r1+0x8
    int behavior; // r0
    class EACTrack * pTrack; // r30
    enum TreeReturnCode code; // r30
    unsigned char bBackwards; // r0

    // References
    // -> float s_RightArmCarryIndexArray[58];
    // -> float kCarryBlendTime;
}

// Range: 0x8001CEC0 -> 0x8001CF20
float AdultSimAnimator::GetMovementVelocityFromStyle() {
    // Local variables
    float fVelocity; // f1

    // References
    // -> float kRoutingSidestepVelocity;
    // -> float kFreeMoveRunVelocity;
    // -> float kSimMoveRunVelocity;
    // -> float kFreeMoveWalkVelocity;
    // -> float kSimMoveWalkVelocity;
}


