/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_midlotinstance.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008BE04 -> 0x8008D438
*/
// Range: 0x8008BE04 -> 0x8008BEBC
void * EMidLotInstance::EMidLotInstance(class EMidLotInstance * const this /* r28 */, struct MidLotObject * mplObj /* r29 */, enum eMidLotObjectType objectType /* r30 */) {
    // References
    // -> struct [anonymous] __vt__15EMidLotInstance;
}

// Range: 0x8008BF14 -> 0x8008BF9C
void * EMidLotInstance::~EMidLotInstance(class EMidLotInstance * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__15EMidLotInstance;
}

// Range: 0x8008BF9C -> 0x8008C088
void EMidLotInstance::Init(class EMidLotInstance * const this /* r31 */) {
    // Local variables
    float kDegreeConversion; // f0
    class EQuat rot; // r1+0x18
}

// Range: 0x8008C088 -> 0x8008C0CC
void EMidLotInstance::MagicCookieInit() {}

// Range: 0x8008C0CC -> 0x8008C184
void EMidLotInstance::SetupModel(class EMidLotInstance * const this /* r31 */) {
    // Local variables
    float newScaler; // f0

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8008C184 -> 0x8008C1DC
void EMidLotInstance::SetupCharacter(class EMidLotInstance * const this /* r31 */) {}

// Range: 0x8008C1DC -> 0x8008C254
void EMidLotInstance::SetupAnimation(class EMidLotInstance * const this /* r31 */) {}

// Range: 0x8008C254 -> 0x8008C3C0
void EMidLotInstance::BuildDigests(class EMidLotInstance * const this /* r31 */) {
    // Local variables
    class DigestGeomShaderPtr * digest; // r28
    int cSubModel; // r27
    class ESubModel & sm; // r26
    int cSubModelShader; // r25
    class ESubModelShader & sms; // r24
    unsigned char isLitFromBothSides; // r1+0x8

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8008C3C0 -> 0x8008C434
void EMidLotInstance::Update(class EMidLotInstance * const this /* r31 */) {}

// Range: 0x8008C434 -> 0x8008C5C8
void EMidLotInstance::ProcessAnimationNotes(class EMidLotInstance * const this /* r24 */) {
    // Local variables
    const class EACTrack * pTrack; // r0
    const class ERAnim * pAnim; // r0
    float fTimeMultiplier; // f31
    unsigned int iTickUpdateTime; // r0
    unsigned int iSize; // r0
    unsigned int iDelay; // r29
    const class TArray * pNotes; // r28
    unsigned int iOldDuration; // r27
    unsigned int iNewDuration; // r30
    unsigned int iAnimDuration; // r3
    unsigned char bLooped; // r26
    unsigned int i; // r25
    unsigned int iModTime; // r0
    unsigned char handleEvent; // r3

    // References
    // -> float _dt;
}

// Range: 0x8008C5C8 -> 0x8008C650
void EMidLotInstance::HandleAnimationEvent(class EMidLotInstance * const this /* r30 */, unsigned int iNegTime /* r31 */) {}

// Range: 0x8008C650 -> 0x8008C6A8
void EMidLotInstance::HandleSoundEvent(const char * eventID /* r30 */, unsigned int iNegTime /* r31 */) {}

// Range: 0x8008C6A8 -> 0x8008C7DC
void EMidLotInstance::HandleEffectsEvent(class EMidLotInstance * const this /* r29 */, const struct EAnimNote & pNote /* r30 */) {
    // Local variables
    const class REffectsAttachment * pEffectAttachment; // r31
    class EParticleObj * pParticleObj; // r4
    class NLIteratorPtrType * it; // r1+0x8

    // References
    // -> class EffectsAttachmentManager g_effectsAttachmentMan;
}

// Range: 0x8008C7DC -> 0x8008C844
class EParticleObj * EMidLotInstance::FindMidLotParticleEffect(const class REffectsAttachment * pEffectAttachment /* r30 */, class NLIteratorPtrType * & it /* r31 */) {
    // Local variables
    class EParticleObj * pParticleObj; // r0
}

// Range: 0x8008C844 -> 0x8008C9A0
void EMidLotInstance::DoAnimation(class EMidLotInstance * const this /* r29 */) {
    // Local variables
    class DigestGeomShaderPtr * pDigest; // r31
    int nDigest; // r30
    const struct EACNodeState * pNodeStates; // r0
    signed short nNewAnimStateFlags; // r5
}

// Range: 0x8008C9A0 -> 0x8008CA90
void EMidLotInstance::DrawSetup(class EMidLotInstance * const this /* r28 */, class ERC * prc /* r29 */, class InstanceData * pInstanceData /* r30 */) {
    // Local variables
    const class EMat4 * modelMatrices; // r31
    int modelMatrixCount; // r5
}

// Range: 0x8008CA90 -> 0x8008CAEC
void EMidLotInstance::DrawDigest(class EMidLotInstance * const this /* r6 */, class ERC * prc /* r30 */, const class DigestGeomShaderPtr * pDigest /* r31 */) {}

// Range: 0x8008CAEC -> 0x8008CBD8
void EMidLotInstance::DrawDigests(class EMidLotInstance * const this /* r22 */, class ERC * prc /* r23 */, class EOrderTableData & otd /* r24 */, unsigned char bHasAlpha /* r25 */) {
    // Local variables
    const class DigestGeomShaderPtr * pDigest; // r29
    int nDigest; // r28
    int iDigest; // r27
    const struct EShaderDef * pShaderDef; // r26
}

// Range: 0x8008CBD8 -> 0x8008CC80
void EMidLotInstance::DrawFinish(class EMidLotInstance * const this /* r30 */) {
    // Local variables
    class NLIteratorPtrType * it; // r31
    class EParticleObj * pParticleObj; // r0
}

// Range: 0x8008CC80 -> 0x8008CD44
void EMidLotInstance::Draw(class EMidLotInstance * const this /* r29 */, class ERC * prc /* r30 */) {
    // Local variables
    unsigned char bHasAlpha; // r31
    class EOrderTableData otd; // r1+0x8
}

// Range: 0x8008CD44 -> 0x8008CE60
void EMidLotInstance::DrawShadow(class EMidLotInstance * const this /* r30 */, struct ELevelDrawData & renderParam /* r29 */) {
    // Local variables
    const class EMat4 * modelMatrices; // r31
    int modelMatrixCount; // r5
    const class DigestGeomShaderPtr * pDigest; // r31
    int nDigest; // r30
}

// Range: 0x8008CE60 -> 0x8008CFE4
void EMidLotInstance::DrawWithShadow(class EMidLotInstance * const this /* r28 */, struct ELevelDrawData & renderParam /* r29 */, class EMat4 & shadowMatrix /* r30 */, float shadowAlpha /* f31 */) {
    // Local variables
    const class EMat4 * modelMatrices; // r31
    int modelMatrixCount; // r5
    const class DigestGeomShaderPtr * pDigest; // r31
    int nDigest; // r30

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8008CFE4 -> 0x8008D0B4
void EMidLotInstance::MidlotOrderTableCallback(struct ELevelDrawData & renderParam /* r28 */, class EOrderTableData * otd /* r29 */) {
    // Local variables
    class EMidLotInstance * pInstance; // r31
    const class DigestGeomShaderPtr * pDigest; // r30
    class ERLevel * pLevel; // r0

    // References
    // -> class EVec3 s_vDistantPointToForceSkySortOrder;
    // -> class EEngine * _pEngine;
}

// Range: 0x8008D0B4 -> 0x8008D0DC
unsigned int EMidLotInstance::VisibilityTest(class EMidLotInstance * const this /* r5 */) {}

// Range: 0x8008D0DC -> 0x8008D17C
void EMidLotInstance::SetupBounds(class EMidLotInstance * const this /* r31 */) {
    // Local variables
    float newScaler; // f0
    class EMat4 mOrient; // r1+0x20
    class EBound3 b; // r1+0x8
}

// Range: 0x8008D17C -> 0x8008D188
void EMidLotInstance::FreezeAnimation() {}

// Range: 0x8008D188 -> 0x8008D2C8
void EMidLotInstance::LightingCalculation(class EMidLotInstance * const this /* r31 */) {
    // Local variables
    struct ELights & lightsOut; // r27
    const class DigestGeomShaderPtr * pDigest; // r28
    class EVec3 vTargetPos; // r1+0x14
    const class RoomData * rd; // r0
    int i; // r26
}

// Range: 0x8008D344 -> 0x8008D3E0
void EMidLotInstance::Deallocate(class EMidLotInstance * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8008D3E0 -> 0x8008D438
void EMidLotInstance::SafeDelete(class EMidLotInstance * const this /* r31 */) {}


