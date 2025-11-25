/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\awarenessmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001D060 -> 0x8001FEDC
*/
// Range: 0x8001D060 -> 0x8001D134
void * AwarenessManager::AwarenessManager(class AwarenessManager * const this /* r29 */) {
    // References
    // -> struct [anonymous] __vt__16AwarenessManager;
}

// Range: 0x8001D134 -> 0x8001D264
void AwarenessManager::Init(class AwarenessManager * const this /* r29 */, class SAnimator2 * pSAnimator /* r30 */) {
    // References
    // -> float kAwarenessLookupDelay;
}

// Range: 0x8001D264 -> 0x8001D34C
void AwarenessManager::Reset(class AwarenessManager * const this /* r30 */) {
    // References
    // -> float kAwarenessLookupDelay;
}

// Range: 0x8001D34C -> 0x8001D3AC
void AwarenessManager::ClearPendingCarryAnim(class AwarenessManager * const this /* r31 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001D3AC -> 0x8001D430
void * AwarenessManager::~AwarenessManager(class AwarenessManager * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__16AwarenessManager;
}

// Range: 0x8001D430 -> 0x8001D52C
void AwarenessManager::AwarenessCheck(class AwarenessManager * const this /* r29 */, unsigned int animState /* r30 */) {
    // Local variables
    unsigned char isPaused; // r31
}

// Range: 0x8001D52C -> 0x8001D584
void AwarenessManager::handleAwarenessAnimations(class AwarenessManager * const this /* r30 */, unsigned int animState /* r31 */) {}

// Range: 0x8001D584 -> 0x8001D5C8
void AwarenessManager::SetIsRaining(unsigned char newVal /* r31 */) {}

// Range: 0x8001D5C8 -> 0x8001D654
unsigned char AwarenessManager::AwarenessAutoRunCheck(float fRouteDistance /* f31 */) {
    // Local variables
    float autoRunTestDistance; // f0
    unsigned char bRetVal; // r31
}

// Range: 0x8001D654 -> 0x8001D67C
void AwarenessManager::SetPlayerControl() {}

// Range: 0x8001D67C -> 0x8001D9B0
class EQuat AwarenessManager::GetFirstNodeRotation(class EQuat * q /* r28 */, class AwarenessManager * const this /* r29 */, float deltaTime /* f29 */, const class EVec3 & maxFirstNodeRotation /* r31 */) {
    // Local variables
    class EVec3 maxRotation; // r1+0x14
    class EVec3 faceRot; // r1+0x8
    int i; // r30
    float mulFactor; // f27

    // References
    // -> float kAwarenessAngleTurnRate;
}

// Range: 0x8001D9B0 -> 0x8001DB3C
class EQuat AwarenessManager::GetSecondNodeRotation(class EQuat * q /* r28 */, const class AwarenessManager * const this /* r29 */, const class EVec3 & maxFirstNodeRotation /* r31 */) {
    // Local variables
    class EVec3 torsoRot; // r1+0x8
    int i; // r30
}

// Range: 0x8001DB3C -> 0x8001DD48
void AwarenessManager::AwarenessAnimateHeadLeadsMotion(unsigned int userParam /* r31 */, struct EACNodeState * nodes /* r29 */) {
    // Local variables
    class AwarenessManager * pAwarenessManager; // [invalid]
    float deltaTime; // f31
    struct EACNodeState * pNodeState; // r30
    struct EACNodeState newNodeState; // r1+0x88

    // References
    // -> float kMaxLookupAngle;
    // -> float _dt;
}

// Range: 0x8001DD48 -> 0x8001DF0C
void AwarenessManager::AwarenessAnimateTorsoLeadsMotion(unsigned int userParam /* r29 */, struct EACNodeState * nodes /* r30 */) {
    // Local variables
    class AwarenessManager * pAwarenessManager; // [invalid]
    float deltaTime; // f31
    struct EACNodeState * pNodeState; // r31
    struct EACNodeState newNodeState; // r1+0x78

    // References
    // -> float _dt;
}

// Range: 0x8001DF0C -> 0x8001E138
unsigned char AwarenessManager::SetAwarenessTargetAngle(class AwarenessManager * const this /* r28 */, class cXObject * awarenessTargetObject /* r29 */) {
    // Local variables
    unsigned char bRetVal; // r31
    float distance; // f29
    float deltaDir; // f0
    float thresholdAngle; // f0
    class cXPerson * pPerson; // r30
    class EVec3 awareLookAtPos; // r1+0x20
    class ISimInstance * pInstance; // r0
    class EVec3 lookerHeadPos; // r1+0x14
    float deltaElevation; // f29

    // References
    // -> float kAwarenessMaxAllowableLookupAngle;
    // -> float kAwarenessMaxAllowableAngle;
    // -> float kInfluenceTileDistance;
}

// Range: 0x8001E138 -> 0x8001E24C
void AwarenessManager::handlePassiveInfluenceAnimation(class AwarenessManager * const this /* r31 */) {
    // References
    // -> float s_UpperBodyIndexArray[58];
    // -> float kAwarenessBlendTime;
}

// Range: 0x8001E24C -> 0x8001E288
void AwarenessManager::handleMemoryAwarenessAnimation() {}

// Range: 0x8001E288 -> 0x8001E33C
void AwarenessManager::handleAwarenessTurningAnimation(class AwarenessManager * const this /* r31 */) {
    // Local variables
    unsigned int animatorParam; // [invalid]
}

// Range: 0x8001E33C -> 0x8001E37C
unsigned char AwarenessManager::SetAwareOfObject() {}

// Range: 0x8001E37C -> 0x8001E3AC
unsigned char AwarenessManager::SetAwareOfObjectKilled() {}

// Range: 0x8001E3AC -> 0x8001E428
unsigned char AwarenessManager::ClearAwareOfObject(class AwarenessManager * const this /* r31 */) {}

// Range: 0x8001E428 -> 0x8001E4AC
unsigned char AwarenessManager::IsTimeToCheckMemoryAwareness() {
    // Local variables
    float deltaTime; // f3
    unsigned char bRetVal; // r31

    // References
    // -> float kAwarenessLookupDelay;
    // -> float _dt;
}

// Range: 0x8001E4AC -> 0x8001E570
unsigned char AwarenessManager::ShouldAwarenessBeActive(class AwarenessManager * const this /* r30 */) {
    // Local variables
    unsigned char bRetVal; // r31
    class EACTrack * pTrack; // r0
}

// Range: 0x8001E570 -> 0x8001E638
int AwarenessManager::CanSeePlayer(class AwarenessManager * const this /* r28 */) {
    // Local variables
    float distance; // f0
    int playerID; // r30
    class cXPerson * pPlayer; // r29
    float deltaDir; // f0
    float thresholdAngle; // f0

    // References
    // -> float kAwarenessMaxAllowableAngle;
    // -> float kInfluenceTileDistance;
    // -> class EGlobal _globals;
}

// Range: 0x8001E638 -> 0x8001E6F8
void AwarenessManager::GetActiveMemoryCategory(class AwarenessManager * const this /* r28 */, int & outputMemoryCategory /* r29 */, int & outputMemoryCategoryValue /* r30 */) {
    // Local variables
    class cXPerson * personToTry; // r31
}

// Range: 0x8001E6F8 -> 0x8001E870
void AwarenessManager::StartMemoryAwarenessSprite(class AwarenessManager * const this /* r29 */) {
    // Local variables
    class SpriteSlot & slot; // r31
    int index; // r30
}

// Range: 0x8001E870 -> 0x8001E92C
unsigned char AwarenessManager::SetPendingMemoryAwarenessAnim(class AwarenessManager * const this /* r30 */) {
    // Local variables
    const struct AnimRef * SkillId; // r1+0x8
    unsigned char bRetVal; // r31

    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001E92C -> 0x8001EAF4
void AwarenessManager::StartMemoryAwarenessAnimation(class AwarenessManager * const this /* r31 */, enum eAwarenessAction awarenessAction /* r29 */) {
    // Local variables
    const struct AnimRef * SkillId; // r1+0x8
    class EACTrack * pTrack; // r30

    // References
    // -> float s_UpperBodyIndexArray[58];
    // -> float kAwarenessSmallEpsilon;
    // -> float kAwarenessBlendTime;
    // -> class EAnimManager _animman;
}

// Range: 0x8001EAF4 -> 0x8001EC1C
void AwarenessManager::SetMemoryAwarenessActionToTry(class AwarenessManager * const this /* r31 */) {
    // Local variables
    int activeMemoryCategoryValue; // r1+0x8
}

// Range: 0x8001EC1C -> 0x8001EC80
void AwarenessManager::ClearPendingMemoryAwarenessAnim(class AwarenessManager * const this /* r31 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8001EC80 -> 0x8001EEC0
void AwarenessManager::MemoryAwarenessClearAction(class AwarenessManager * const this /* r31 */) {
    // Local variables
    class cXPerson * pPerson; // r0
    class SpriteSlot & slot; // r31

    // References
    // -> float kAwarenessBlendTime;
}

// Range: 0x8001EEC0 -> 0x8001EF28
unsigned char AwarenessManager::IsMemoryAwarenessAnimDone() {
    // Local variables
    enum eTrackFlags trkFlags; // r4
    unsigned char bRetVal; // r31
}

// Range: 0x8001EF28 -> 0x8001EFE8
void AwarenessManager::UpdateAwarenessAngle(class AwarenessManager * const this /* r31 */) {}

// Range: 0x8001EFE8 -> 0x8001EFEC
void AwarenessManager::RelationshipAwarenessCheck() {}

// Range: 0x8001EFEC -> 0x8001F168
void AwarenessManager::MemoryAwarenessCheck(class AwarenessManager * const this /* r30 */, unsigned int animState /* r31 */) {
    // Local variables
    int playerID; // r4

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8001F168 -> 0x8001F27C
void AwarenessManager::StopPassiveInfluenceAnimation(class AwarenessManager * const this /* r29 */) {
    // Local variables
    const struct AnimRef * SkillId; // r30

    // References
    // -> float kAwarenessBlendTime;
    // -> class EAnimManager _animman;
}

// Range: 0x8001F27C -> 0x8001F3DC
unsigned char AwarenessManager::StartPassiveInfluenceAnimation(class AwarenessManager * const this /* r28 */, const struct AnimRef * SkillId /* r29 */) {
    // Local variables
    unsigned char bRetVal; // r30
    class EACTrack * pTrack; // r30

    // References
    // -> float s_UpperBodyIndexArray[58];
    // -> float kAwarenessBlendTime;
    // -> float kAwarenessSmallEpsilon;
    // -> class EAnimManager _animman;
}

// Range: 0x8001F3DC -> 0x8001F478
void AwarenessManager::RainAwarenessCheck(class AwarenessManager * const this /* r31 */) {}

// Range: 0x8001F478 -> 0x8001F734
void AwarenessManager::PassiveInfluenceAwarenessCheck(class AwarenessManager * const this /* r31 */, unsigned int animState /* r27 */) {
    // Local variables
    class PassiveInfluenceMap * pInfluenceMap; // r30
    int x; // r29
    int y; // r28
    class PassiveInfluencePerson * influenceItem; // r28
    unsigned char animType; // r29
    const struct AnimRef * animName; // r1+0x8
    unsigned char valid; // r0

    // References
    // -> float kTimeBetweenHungerAnims;
    // -> float _dt;
}

// Range: 0x8001F734 -> 0x8001F744
class cXObject * AwarenessManager::GetPlayerObject() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8001F744 -> 0x8001F8C8
float AwarenessManager::GetDeltaAngleToTargetObject(class AwarenessManager * const this /* r29 */, class cXObject * awarenessTargetObject /* r30 */) {
    // Local variables
    float testTargetAngle; // f0
    float deltaDir; // f31
    class EVec2 TempVec; // r1+0x10
    class EVec2 pos; // r1+0x8
    class EVec3 BonePos; // r1+0x18

    // References
    // -> float kAwarenessSmallEpsilon;
}

// Range: 0x8001F8C8 -> 0x8001F94C
void AwarenessManager::getPassiveInfluenceSkillID() {
    // Local variables
    int animID; // r4
    unsigned char scale; // r1+0x8
}

// Range: 0x8001F94C -> 0x8001FA8C
void AwarenessManager::getAwarenessSkillID() {
    // Local variables
    int animID; // r7
    unsigned char scale; // r1+0x9
    unsigned char scale; // r1+0x8
}

// Range: 0x8001FA8C -> 0x8001FB54
unsigned char AwarenessManager::shouldAutoCarry(class AwarenessManager * const this /* r30 */) {
    // Local variables
    unsigned char bRetVal; // r31
}

// Range: 0x8001FB54 -> 0x8001FDE4
void AwarenessManager::startAutoCarry(class AwarenessManager * const this /* r31 */) {
    // Local variables
    class EACTrack * pTrack; // r29
    int index; // r3
    const struct AnimRef * skill; // r1+0xC
    enum StdAnimIdx animIndex; // r28
    int propID; // r27
    class InventoryItems * pInventory; // r30
    unsigned char scale; // r1+0x8

    // References
    // -> float s_LeftArmCarryIndexArray[58];
    // -> float kCarryBlendTime;
    // -> float kAwarenessSmallEpsilon;
    // -> class EAnimManager _animman;
}

// Range: 0x8001FDE4 -> 0x8001FEDC
void AwarenessManager::endAutoCarry(class AwarenessManager * const this /* r28 */) {
    // Local variables
    int index; // r29

    // References
    // -> float kCarryBlendTime;
}


