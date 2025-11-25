/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\simmodel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003BAF8 -> 0x8003E814
*/
// Range: 0x8003BAF8 -> 0x8003BE64
void * SimModelTSC6::SimModelTSC6(class SimModelTSC6 * const this /* r29 */) {
    // Local variables
    int i; // r30

    // References
    // -> char s_SimPartsMapNames[4][4];
    // -> unsigned short gSimPartsMapSizeMultiplier_CAS;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__12SimModelTSC6;
}

// Range: 0x8003BE64 -> 0x8003BFB8
void * SimModelTSC6::~SimModelTSC6(class SimModelTSC6 * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__12SimModelTSC6;
}

// Range: 0x8003BFB8 -> 0x8003C04C
void SimModelTSC6::Init(class SimModelTSC6 * const this /* r29 */, class CasSimDescription * pSimDesc /* r30 */, unsigned char bHighRes /* r31 */) {}

// Range: 0x8003C04C -> 0x8003C09C
void SimModelTSC6::Reset(class SimModelTSC6 * const this /* r31 */) {}

// Range: 0x8003C09C -> 0x8003C0E8
void SimModelTSC6::DeallocateAllSkinTextures() {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x8003C0E8 -> 0x8003C1A8
void SimModelTSC6::DeallocateChangingData(class SimModelTSC6 * const this /* r28 */) {
    // Local variables
    unsigned char nBodyPartIndex; // r29
}

// Range: 0x8003C1A8 -> 0x8003C1B0
class CasSimDescription * SimModelTSC6::GetSimDescription() {}

// Range: 0x8003C1B0 -> 0x8003C1B8
void SimModelTSC6::SetHighResolution() {}

// Range: 0x8003C1B8 -> 0x8003C20C
class CasSimDescription & SimModelTSC6::GetSimDescriptionRef(class SimModelTSC6 * const this /* r31 */) {}

// Range: 0x8003C20C -> 0x8003C274
void SimModelTSC6::SetSimDescription(class SimModelTSC6 * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8003C274 -> 0x8003C2CC
class SimModelPart * SimModelTSC6::GetSimModelPart(class SimModelTSC6 * const this /* r30 */, enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003C2CC -> 0x8003C314
void SimModelTSC6::SetSimModelPart(class SimModelTSC6 * const this /* r30 */, class SimModelPart * pSimModelPart /* r31 */) {}

// Range: 0x8003C314 -> 0x8003C370
class BitFlags & SimModelTSC6::GetModelFlags(class SimModelTSC6 * const this /* r30 */, enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003C370 -> 0x8003C3DC
unsigned char SimModelTSC6::GetModelFlag(class SimModelTSC6 * const this /* r29 */, enum eBodyPart bodyPart /* r30 */, int flag /* r31 */) {}

// Range: 0x8003C3DC -> 0x8003C458
void SimModelTSC6::SetModelFlag(class SimModelTSC6 * const this /* r28 */, enum eBodyPart bodyPart /* r29 */, int flag /* r30 */, unsigned char val /* r31 */) {}

// Range: 0x8003C458 -> 0x8003C5E8
void SimModelTSC6::ChangeClothing(class SimModelTSC6 * const this /* r29 */, unsigned char bDeallocateCurrentModelsBeforeChange /* r30 */, unsigned char bRemoveMorphResources /* r31 */) {
    // Local variables
    unsigned char bAnyModelsChanged; // r0
}

// Range: 0x8003C5E8 -> 0x8003C7BC
void SimModelTSC6::UseChangingModels(class SimModelTSC6 * const this /* r31 */) {
    // Local variables
    unsigned char bModelChanged[15]; // r1+0x14
    unsigned char bodyPartIndex; // r24
    class EIStaticModel * pOldStaticModel; // r23
    class BitFlags nOldModelFlags; // r1+0x10
    unsigned char i; // r23
    class ERTexture * pOldTexture; // r0
    unsigned char bodyPartIndex; // r23
}

// Range: 0x8003C7BC -> 0x8003C824
void SimModelTSC6::SetAllModels(class SimModelTSC6 * const this /* r30 */) {
    // Local variables
    unsigned char bodyPartIndex; // r31
}

// Range: 0x8003C824 -> 0x8003CBF4
unsigned char SimModelTSC6::PrepareChangingModels(class SimModelTSC6 * const this /* r24 */) {
    // Local variables
    unsigned char bAnyModelsChanged; // r28
    int bodyPart; // r21
    unsigned char bodyPartIndex; // r0
    unsigned int nCurrentModelID; // r0
    unsigned int nNewModelID; // r0
    unsigned char bAnyBodyPartsLoadedForMorphing; // r27
    unsigned char bChecked[15]; // r1+0x18
    unsigned char bodyPartIndex; // r0
    unsigned int connectionList[3]; // r1+0xC
    int bodyPart; // r26
    unsigned char bodyPartIndex; // r0
    unsigned int nConnectionListSize; // r1+0x8
    unsigned int i; // r25
    unsigned char bodyPartIndex2; // r0
    unsigned int i; // r21
    unsigned char bodyPartIndex; // r22

    // References
    // -> char s_SimPartsMapNames[4][4];
}

// Range: 0x8003CBF4 -> 0x8003CC50
class EIStaticModel * SimModelTSC6::GetModelPart(class SimModelTSC6 * const this /* r30 */, enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003CC50 -> 0x8003CCE8
unsigned char SimModelTSC6::GetChangedModels(class SimModelTSC6 * const this /* r25 */, int * modelIDList /* r26 */) {
    // Local variables
    unsigned char bAnyChanged; // r28
    unsigned char nBodyPartIndex; // r27
    unsigned int nCurrentModelID; // r0
    unsigned int nNewModelID; // r0
}

// Range: 0x8003CCE8 -> 0x8003CCF0
void SimModelTSC6::WeldChangedBodyParts() {}

// Range: 0x8003CCF0 -> 0x8003CF20
void SimModelTSC6::WeldChangedBodyParts(class SimModelPart * * ppSimModelParts /* r31 */) {
    // Local variables
    unsigned int connectionList[3]; // r1+0xC
    unsigned char bWelded[15][15]; // r1+0x18
    unsigned char bodyPartIndex; // r7
    unsigned char bodyPartIndex2; // r0
    unsigned char bodyPartIndex; // r22
    unsigned int nConnectionListSize; // r1+0x8
    unsigned int i; // r21
    unsigned char bodyPartIndex2; // r0
}

// Range: 0x8003CF20 -> 0x8003CF28
void SimModelTSC6::UpdateReweld() {}

// Range: 0x8003CF28 -> 0x8003D0CC
void SimModelTSC6::UpdateReweld(class SimModelTSC6 * const this /* r27 */, unsigned char bRemoveMorphResources /* r29 */, class SimModelPart * * ppSimModelParts /* r28 */) {
    // Local variables
    unsigned char bodyPartIndex; // r31
    unsigned char bNeedToMorph; // r30
    unsigned char bodyPartIndex; // r29
    unsigned char bodyPartIndex; // r29
}

// Range: 0x8003D0CC -> 0x8003D0D4
unsigned char SimModelTSC6::VerifyRequiredModels() {}

// Range: 0x8003D0D4 -> 0x8003D164
unsigned char SimModelTSC6::VerifyRequiredModels(class SimModelPart * * ppSimModelParts /* r29 */) {
    // Local variables
    unsigned char bResult; // r31
    unsigned char nBodyPartIndex; // r30
}

// Range: 0x8003D164 -> 0x8003D1C0
void SimModelTSC6::DeallocateAllModels(class SimModelTSC6 * const this /* r30 */) {
    // Local variables
    unsigned char bodyPartIndex; // r31
}

// Range: 0x8003D1C0 -> 0x8003D2EC
unsigned char SimModelTSC6::AllMorphDataDeallocated(class SimModelTSC6 * const this /* r30 */) {
    // Local variables
    unsigned int bodyPart; // r31
}

// Range: 0x8003D2EC -> 0x8003D510
void SimModelTSC6::GetImageModels() {}

// Range: 0x8003D510 -> 0x8003D5B4
void SimModelTSC6::GetPortraitModels(class SimModelTSC6 * const this /* r26 */, enum eBodyPart * bodyParts /* r27 */, unsigned int nMaxBodyParts /* r28 */, unsigned int & nNumParts /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003D5B4 -> 0x8003D658
void SimModelTSC6::GetSimHeadModels(class SimModelTSC6 * const this /* r26 */, enum eBodyPart * bodyParts /* r27 */, unsigned int nMaxBodyParts /* r28 */, unsigned int & nNumParts /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003D658 -> 0x8003D6B4
void SimModelTSC6::ApplySkinToModels(class SimModelTSC6 * const this /* r30 */) {
    // Local variables
    unsigned char bodyPartIndex; // r31
}

// Range: 0x8003D6B4 -> 0x8003D6BC
void SimModelTSC6::ApplyAllLatticeMorphs() {}

// Range: 0x8003D6BC -> 0x8003D7A8
void SimModelTSC6::ApplyAllLatticeMorphs(class SimModelTSC6 * const this /* r26 */, class SimModelPart * * ppSimModelParts /* r27 */) {
    // Local variables
    class EIStaticModel * bodyPartsToMorph[15]; // r1+0x14
    unsigned char bodyPartIndex; // r28
    class MorphUtilities morpher; // r1+0x8
}

// Range: 0x8003D7A8 -> 0x8003D7B0
void SimModelTSC6::DeallocateMorphResources() {}

// Range: 0x8003D7B0 -> 0x8003D818
void SimModelTSC6::DeallocateMorphResources(class SimModelPart * * ppSimModelParts /* r30 */) {
    // Local variables
    unsigned char bodyPartIndex; // r31
}

// Range: 0x8003D818 -> 0x8003D878
unsigned char SimModelTSC6::BodyPartCanBeMorphedByMorphTargets(class SimModelTSC6 * const this /* r30 */, enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003D878 -> 0x8003D8E0
unsigned char SimModelTSC6::BodyPartContainsMorphTargets(class SimModelTSC6 * const this /* r30 */, enum eBodyPart bodyPart /* r31 */) {}

// Range: 0x8003D8E0 -> 0x8003D8E8
void SimModelTSC6::ApplyAllMorphTargets() {}

// Range: 0x8003D8E8 -> 0x8003D97C
void SimModelTSC6::ApplyAllMorphTargets(unsigned char bUnregisterMorphTargets /* r28 */, class SimModelPart * * ppSimModelParts /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003D97C -> 0x8003D9F4
void SimModelTSC6::LoadCurrentBrowseMorphTargets(class SimModelTSC6 * const this /* r29 */, enum eBodyPart bodyPart /* r30 */, enum eMorphTargetRegion morphRegion /* r31 */) {}

// Range: 0x8003D9F4 -> 0x8003DA50
enum eMorphTargetRegion SimModelTSC6::GetMorphRegionStart() {
    // Local variables
    enum eMorphTargetRegion morphRegionStart; // r3
}

// Range: 0x8003DA50 -> 0x8003DB24
void SimModelTSC6::UnregisterUserSelectedMorphTargetsInRegion(class SimModelTSC6 * const this /* r28 */, enum eBodyPart bodyPart /* r29 */, enum eMorphTargetRegion morphRegion /* r30 */) {
    // Local variables
    class ERModel * pModel; // r31
    enum eMorphTargetRegion morphRegionStart; // r0
}

// Range: 0x8003DB24 -> 0x8003DBF8
void SimModelTSC6::PromoteCurrentBrowseMorphTargets(class SimModelTSC6 * const this /* r28 */, enum eBodyPart bodyPart /* r29 */, enum eMorphTargetRegion morphRegion /* r30 */) {
    // Local variables
    class ERModel * pModel; // r31
    enum eMorphTargetRegion morphRegionStart; // r0
}

// Range: 0x8003DBF8 -> 0x8003DC8C
void SimModelTSC6::UnregisterCurrentBrowseMorphTargets(class SimModelTSC6 * const this /* r30 */, enum eBodyPart bodyPart /* r31 */) {
    // Local variables
    class ERModel * pModel; // r0
}

// Range: 0x8003DC8C -> 0x8003DD60
void SimModelTSC6::CopyWeightsFromUserSelectedToCurrentBrowse(class SimModelTSC6 * const this /* r28 */, enum eBodyPart bodyPart /* r29 */, enum eMorphTargetRegion morphRegion /* r30 */) {
    // Local variables
    class ERModel * pModel; // r31
    enum eMorphTargetRegion morphRegionStart; // r0
}

// Range: 0x8003DD60 -> 0x8003DDCC
void SimModelTSC6::CreateSkin(class SimModelTSC6 * const this /* r28 */, const char * szBaseName /* r29 */) {
    // Local variables
    unsigned int i; // r30
}

// Range: 0x8003DDCC -> 0x8003DDD4
void SimModelTSC6::CompositeAllSkin() {}

// Range: 0x8003DDD4 -> 0x8003DECC
void SimModelTSC6::CompositeAllSkin(class SimModelTSC6 * const this /* r29 */, class SimTexturePart * pSimTextureParts /* r28 */) {
    // Local variables
    class ERDataset * pSkinDataset; // r30
    unsigned int nSkinTextureDatasetID; // r29
    unsigned char i; // r29

    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x8003DECC -> 0x8003DEE8
void SimModelTSC6::CompositeSkinPart() {}

// Range: 0x8003DEE8 -> 0x8003E4D8
void SimModelTSC6::HandleEventChangeCharacter(class SimModelTSC6 * const this /* r29 */, const class CasEventChangeCharacter & event /* r31 */, class CasMediator * pMediator /* r30 */) {
    // Local variables
    enum CharacterPart eventCharacterPart; // r0
    class CasSimDescription & simDesc; // r31
}

// Range: 0x8003E4D8 -> 0x8003E608
void SimModelTSC6::HandleEventMorphCharacter(class SimModelTSC6 * const this /* r27 */, const class CasEventMorphCharacter & event /* r28 */) {
    // Local variables
    class EIStaticModel * ppModelList[15]; // r1+0x14
    unsigned char bodyPartIndex; // r29
    class MorphUtilities morpher; // r1+0x8
    unsigned char bodyPartIndex; // r29
}

// Range: 0x8003E608 -> 0x8003E690
void SimModelTSC6::SetupPreMorphRegion(class SimModelTSC6 * const this /* r28 */, enum eMorphTargetRegion morphTargetRegion /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003E690 -> 0x8003E718
void SimModelTSC6::SetupPostMorphRegion(class SimModelTSC6 * const this /* r28 */, enum eMorphTargetRegion morphTargetRegion /* r29 */) {
    // Local variables
    unsigned char bodyPartIndex; // r30
}

// Range: 0x8003E718 -> 0x8003E784
class SimModelPart * SimModelTSC6::GetChangingSimModelPart(class SimModelTSC6 * const this /* r31 */) {
    // Local variables
    unsigned char bodyPartDBIndex; // r0
}

// Range: 0x8003E784 -> 0x8003E7F4
class EIStaticModel * SimModelTSC6::GetChangingModelPart(class SimModelTSC6 * const this /* r31 */) {
    // Local variables
    unsigned char bodyPartDBIndex; // r0
}

// Range: 0x8003E7F4 -> 0x8003E814
class ERTexture * SimModelTSC6::GetChangingQuadrantTexture() {}


