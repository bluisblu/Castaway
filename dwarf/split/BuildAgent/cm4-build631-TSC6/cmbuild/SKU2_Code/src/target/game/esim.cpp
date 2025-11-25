/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\esim.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022035C -> 0x80222F04
*/
// Range: 0x8022035C -> 0x80220668
void * ESim::ESim(class ESim * const this /* r30 */, class cXPerson * person /* r31 */) {
    // References
    // -> class ESimsDataManager _simsdataman;
    // -> static class EVec3 bigPosVal;
    // -> int s_nNumInitializingSims;
    // -> struct [anonymous] __vt__4ESim;
}

// Range: 0x80220668 -> 0x802207B0
void * ESim::~ESim(class ESim * const this /* r29 */) {
    // References
    // -> volatile class ESim * s_changingSim;
    // -> class EGraphics * _pGfx;
    // -> class ESimsDataManager _simsdataman;
    // -> struct [anonymous] __vt__4ESim;
}

// Range: 0x802207B0 -> 0x80220928
void ESim::InitModel(class ESim * const this /* r30 */) {
    // Local variables
    class ESleep sleeper; // r1+0x8
    const struct NPC * pServiceNPC; // r4

    // References
    // -> class GameData _gd;
    // -> class EModelManager _modelman;
}

// Range: 0x80220928 -> 0x80220A40
void ESim::InitShadow(class ESim * const this /* r30 */) {
    // Local variables
    class EMat4 mShadow; // r1+0x8
    unsigned int modelId; // r31
}

// Range: 0x80220A40 -> 0x80220AE0
void ESim::DestroyShadow(class ESim * const this /* r30 */) {}

// Range: 0x80220AE0 -> 0x80220CB8
void ESim::InitAnimation(class ESim * const this /* r31 */) {
    // Local variables
    unsigned int i; // r27
    unsigned int i; // r27
    class EACTrack * pTrack; // r0
    unsigned int i; // r27

    // References
    // -> unsigned int s_nNumRequiredAnimations;
    // -> unsigned int s_lRequiredAnimations[34];
    // -> unsigned int s_nNumRequiredAnimations;
    // -> unsigned int s_lRequiredAnimations[12];
    // -> class EAnimManager _animman;
    // -> unsigned int s_nNumRequiredAnimations;
    // -> unsigned int s_lRequiredAnimations[20];
}

// Range: 0x80220CB8 -> 0x80220DF4
void ESim::UnloadRequiredAnimations(class ESim * const this /* r28 */) {
    // Local variables
    unsigned int i; // r28
    unsigned int i; // r28
    unsigned int i; // r28

    // References
    // -> unsigned int s_nNumRequiredAnimations;
    // -> unsigned int s_lRequiredAnimations[34];
    // -> unsigned int s_nNumRequiredAnimations;
    // -> unsigned int s_lRequiredAnimations[12];
    // -> class EAnimManager _animman;
    // -> unsigned int s_nNumRequiredAnimations;
    // -> unsigned int s_lRequiredAnimations[20];
}

// Range: 0x80220DF4 -> 0x80220EF0
void ESim::InitServiceNPC(class ESim * const this /* r28 */, const struct NPC * pServiceNPC /* r29 */) {
    // Local variables
    char guidStr[32]; // r1+0x8
    unsigned int nPredefinedSimDatasetID; // r30
    class ERDataset * pRes; // r3

    // References
    // -> class EModelManager _modelman;
    // -> class EDatasetManager _datasetman;
}

// Range: 0x80220EF0 -> 0x802210CC
void ESim::InitNormalSim(class ESim * const this /* r30 */) {
    // Local variables
    class QTimer timer; // r1+0x10
    class EString strFullName; // r1+0x8
}

// Range: 0x802210CC -> 0x802211C4
unsigned char ESim::ReadModelFromCache(class ESim * const this /* r30 */) {
    // Local variables
    unsigned int guid; // r31
    class SimModelTSC6 * pSimModel; // r0
}

// Range: 0x802211C4 -> 0x80221370
unsigned char ESim::TryCacheModel(class ESim * const this /* r29 */, unsigned char bDeleteModel /* r30 */) {
    // Local variables
    class SimModelTSC6 * pCachedSimModel; // r0
    unsigned char retval; // r31
}

// Range: 0x80221370 -> 0x80221378
unsigned char ESim::IsAdult() {}

// Range: 0x80221378 -> 0x80221380
unsigned char ESim::IsMale() {}

// Range: 0x80221380 -> 0x80221388
unsigned char ESim::IsPet() {}

// Range: 0x80221388 -> 0x80221390
unsigned char ESim::IsChimp() {}

// Range: 0x80221390 -> 0x80221398
unsigned char ESim::IsBoar() {}

// Range: 0x80221398 -> 0x8022144C
void ESim::DrawPlumbBob(class ESim * const this /* r31 */) {
    // Local variables
    class PlumbBob * pPlumbBob; // r0
    float scaleFactor; // f0
}

// Range: 0x8022144C -> 0x802215B0
float ESim::UpdatePlumbBob(class ESim * const this /* r29 */, class EVec3 & vInnerColor /* r30 */, class EVec3 & vOuterColor /* r31 */) {
    // Local variables
    float scaleFactor; // f1

    // References
    // -> float OuterColorScaler;
    // -> class EVec3 vRepairMeterColor;
    // -> class EVec3 vSkillMeterColor;
}

// Range: 0x802215B0 -> 0x80221618
void ESim::DrawSkillMeter(class ESim * const this /* r30 */, class ERC * prc /* r31 */) {
    // Local variables
    class EVec3 vColorInner; // r1+0x14
    class EVec3 vColorOuter; // r1+0x8
}

// Range: 0x80221618 -> 0x80221714
void ESim::SetPlumbBobState(class ESim * const this /* r30 */, unsigned int plumbBobState /* r31 */) {}

// Range: 0x80221714 -> 0x802217E8
void ESim::PropOrderTableCallback(struct ELevelDrawData & renderParam /* r28 */) {
    // Local variables
    class ESim * pThis; // r31
    int nNodes; // r30
    class EMat4 * pmNodes; // r3
    class ERC * prc; // r29
}

// Range: 0x802217E8 -> 0x802219E8
void ESim::SimOrderTableCallback(struct ELevelDrawData & renderParam /* r25 */) {
    // Local variables
    class ERC * prc; // r30
    class ESim * pThis; // r29
    class EVec3 pos; // r1+0x28
    int nNodes; // r28
    class EMat4 * pmNodes; // r27
    float scale; // f31
    int c; // r26
    float pos_scale; // f0
    class EVec3 scaled_pos; // r1+0x1C
    class EVec3 delta_pos; // r1+0x10
    float final_scale; // f3
    class cXPerson * plumbbobPerson; // r26

    // References
    // -> class EGlobal _globals;
}

// Range: 0x802219E8 -> 0x80221A94
void ESim::CensorOrderTableCallback(struct ELevelDrawData & renderParam /* r29 */) {
    // Local variables
    class ERC * prc; // r31
    class ESim * pThis; // r30
}

// Range: 0x80221A94 -> 0x80221AE0
void ESim::DrawCharacterModel(class ESim * const this /* r9 */) {}

// Range: 0x80221AE0 -> 0x80221BA0
void ESim::ServiceNpcOrderTableCallback(struct ELevelDrawData & renderParam /* r29 */) {
    // Local variables
    class ESim * pThis; // r31
    class ERC * prc; // r30
    class EMat4 mOrient; // r1+0x8
}

// Range: 0x80221BA0 -> 0x80221C9C
void ESim::DrawSimAndNpcCommonItems(class ESim * const this /* r30 */, class ERC * prc /* r31 */) {
    // Local variables
    class EMat4 mat; // r1+0x8
    float Height; // f1
    unsigned char bDoAnimate; // r5

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80221C9C -> 0x80221D28
void ESim::SkillMeterOrderTableCallback(struct ELevelDrawData & renderParam /* r31 */) {
    // Local variables
    class ESim * pThis; // r5
}

// Range: 0x80221D28 -> 0x80221F58
void ESim::DrawCursorHighLight(class ESim * const this /* r30 */, class ERC * prc /* r31 */, unsigned char bDoAnimation /* r29 */) {
    // Local variables
    class EVec3 playerColor; // r1+0x1C
    class EMat4 mOrient; // r1+0x68
    class EVec3 & m_vPos; // r0
    float _range[2]; // r1+0x8
    int tmp; // r3
    float mu; // f1
    float wmu; // f0
    float xyscale; // f31
    float zscale; // f30
    class EMat4 mStatic; // r1+0x28
    struct ELights _deflight; // r1+0xA8

    // References
    // -> float _dt;
    // -> class PlumbBobParms s_plumbBobParms;
    // -> class EGlobal _globals;
}

// Range: 0x80221F58 -> 0x80221FB4
void ESim::DoAnimation(class ESim * const this /* r31 */) {
    // Local variables
    const class EMat4 & mOrient; // r0
}

// Range: 0x80221FB4 -> 0x80221FB8
void ESim::DoLightingCalculation() {}

// Range: 0x80221FB8 -> 0x80222438
void ESim::Draw(class ESim * const this /* r29 */, struct ELevelDrawData & renderParam /* r30 */) {
    // Local variables
    struct ELights * pLights; // r31
    class EVec3 ambColor; // r1+0x5C
    float brightness; // f1
    float ambMinimum; // f31
    float x; // f0
    float contrast; // f31
    int i; // r27
    class EVec3 fillDir; // r1+0x50
    class EMat4 fillOrientation; // r1+0x68
    class EVec3 vDir; // r1+0x44
    class EVec3 vEye; // r1+0x38
    class EVec3 vPos; // r1+0x2C
    float curAlpha; // f0
    float fAlpha; // f0

    // References
    // -> class EGlobal _globals;
    // -> class SimLightingTuning g_simLightingTuning;
    // -> static class EVec3 _vGhostGreen;
    // -> static struct ELights _ESim_GreenLight;
    // -> int s_nNumInitializingSims;
}

// Range: 0x80222438 -> 0x80222570
void ESim::Update(class ESim * const this /* r31 */) {
    // Local variables
    int currCensorState; // r3
    class ERShader * pShader; // r1+0x8

    // References
    // -> class EApp * _pApp;
}

// Range: 0x80222570 -> 0x80222614
unsigned int ESim::VisibilityTest(class ESim * const this /* r30 */, class E3DWindow & win /* r31 */) {
    // Local variables
    class EMat4 mOrient; // r1+0x20
    class EBound3 box; // r1+0x8
}

// Range: 0x80222614 -> 0x80222744
void ESim::UpdateShowerCurtain(class ESim * const this /* r31 */) {
    // Local variables
    int censorship; // r0

    // References
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x80222744 -> 0x80222914
void ESim::UpdateSkinChange(class ESim * const this /* r31 */) {
    // Local variables
    const struct NPC * pServiceNPC; // r0

    // References
    // -> int s_nNumInitializingSims;
    // -> class ESimsDataManager _simsdataman;
    // -> class EGraphics * _pGfx;
    // -> volatile class ESim * s_changingSim;
}

// Range: 0x80222914 -> 0x80222978
unsigned char ESim::CreateSkinAsync(class ESim * const this /* r31 */) {}

// Range: 0x80222978 -> 0x80222A44
void ESim::CreateThumbnail(class ESim * const this /* r30 */) {
    // Local variables
    class QTimer timer; // r1+0x8
    class SimImageMaker sim; // r1+0x10
    class ETexture * pFaceImage; // r31
}

// Range: 0x80222A44 -> 0x80222A68
void ESim::tProcessCommand() {
    // Local variables
    enum ESimCommands cmd; // r0
}

// Range: 0x80222A68 -> 0x80222A84
unsigned char ESim::HasQueuedOperation() {}

// Range: 0x80222A84 -> 0x80222AD4
void ESim::UpdateQueuedOperation(class ESim * const this /* r31 */) {
    // References
    // -> class EApp * _pApp;
}

// Range: 0x80222AD4 -> 0x80222B24
void ESim::DrawSim(class ESim * const this /* r30 */, unsigned char bDrawOn /* r31 */) {}

// Range: 0x80222B24 -> 0x80222BE8
class EVec3 ESim::GetObCenter(class ESim * const this /* r31 */) {
    // Local variables
    class EVec3 vPelvis; // r1+0x18
    class EBound3 mBound; // r1+0x28
    class EBoundSphere sphere; // r1+0x8
}

// Range: 0x80222BE8 -> 0x80222C30
int ESim::GetPlayerIndex() {
    // Local variables
    int playerIndex; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80222C30 -> 0x80222C64
void ESim::UpdatePlumbBob() {
    // References
    // -> float _dt;
}

// Range: 0x80222C64 -> 0x80222D18
void ESim::UpdateShadow(class ESim * const this /* r30 */) {
    // Local variables
    unsigned char drawShadow; // r31
}

// Range: 0x80222D18 -> 0x80222DA4
void ESim::ChangeClothing(class ESim * const this /* r30 */) {}

// Range: 0x80222DA4 -> 0x80222DEC
void ESimShadow::DrawShadow(class ESimShadow * const this /* r30 */, struct ELevelDrawData & renderParam /* r31 */) {}

// Range: 0x80222DEC -> 0x80222E34
void ESimShadow::GetShadowCenter(class EVec3 & pos /* r31 */) {}

// Range: 0x80222E34 -> 0x80222F04
void SkillMeterParams::UpdateBobAndRotation() {
    // Local variables
    int tmp; // r3
    float mu; // f1

    // References
    // -> float fBobHeight;
    // -> float fRotateZ;
    // -> float bobrange[2];
    // -> int pbobS1;
    // -> int pbobS0;
    // -> float fBobDur;
    // -> float _gamedt;
    // -> float fpbobtime;
}


