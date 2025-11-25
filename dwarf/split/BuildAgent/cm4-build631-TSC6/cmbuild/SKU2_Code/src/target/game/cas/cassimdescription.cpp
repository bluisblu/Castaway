/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\cassimdescription.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80032B70 -> 0x80037DF4
*/
// Range: 0x80032B70 -> 0x80032D20
void * CasSimDescription::CasSimDescription(class CasSimDescription * const this /* r28 */, unsigned char bMale /* r29 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__17CasSimDescription;
}

// Range: 0x80032D20 -> 0x80032E10
void * CasSimDescription::CasSimDescription(class CasSimDescription * const this /* r30 */, const class CasSimDescription & srcSimDesc /* r31 */) {
    // References
    // -> struct [anonymous] __vt__17CasSimDescription;
}

// Range: 0x80032E10 -> 0x8003309C
void CasSimDescription::Init(class CasSimDescription * const this /* r31 */) {
    // Local variables
    int i; // r28
}

// Range: 0x8003309C -> 0x8003319C
void CasSimDescription::InitQuickdataPointers(class CasSimDescription * const this /* r30 */) {
    // Local variables
    class ERQuickdata * pCASQuickdata; // r31
    const struct ERQTable * pSimPartsTable; // r1+0xC
    const struct ERQTable * pBodyPartTypeInfoTable; // r1+0x8

    // References
    // -> class EQuickdataManager _quickdataman;
    // -> class EGlobal _globals;
}

// Range: 0x8003319C -> 0x800331F8
void CasSimDescription::InitBodyPartData(class CasSimDescription * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800331F8 -> 0x800334C8
void CasSimDescription::ClearSim(class CasSimDescription * const this /* r31 */, unsigned char bMale /* r26 */, unsigned char bClearClothingItemsOnly /* r27 */, unsigned char bClearCharDesc /* r28 */) {
    // Local variables
    unsigned char bWasMale; // r0
    unsigned char beginIndex; // [invalid]
    unsigned char bodyPart; // r28
    int nGenderIndex; // r0
    enum eSpecies species; // r28
    const class LatticeParam * pLatticeParam; // r29
    int i; // r30
    const class MorphTargetParam * pMorphTargetParam; // r29
    int i; // r30

    // References
    // -> static signed char zodiacPersonalityValues[12][5];
    // -> unsigned char s_nudeTattooIndex[4][2];
    // -> class EGlobal _globals;
}

// Range: 0x800334C8 -> 0x80033748
void CasSimDescription::CopyFrom(class CasSimDescription * const this /* r28 */, const class CasSimDescription & srcSimDesc /* r29 */) {
    // Local variables
    unsigned char bodyPart; // r31
    int i; // r31
    int i; // r31
    int i; // r31
    int i; // r30
}

// Range: 0x80033748 -> 0x80033838
void CasSimDescription::CopyBodyPart(class CasSimDescription * const this /* r28 */, enum eBodyPart bodyPart /* r29 */, const class CasSimDescription & srcSimDesc /* r30 */) {
    // Local variables
    unsigned char bodyPartIndex; // r0
    class SimBodyPart * pBodyPart; // r3
}

// Range: 0x80033838 -> 0x80033A30
void CasSimDescription::DoStream(class CasSimDescription * const this /* r28 */, class ReconBuffer * r /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x80033A30 -> 0x80033A80
signed short CasSimDescription::StreamReadUniqueIdentifier(class ReconBuffer * r /* r31 */) {
    // Local variables
    signed short tempUID; // r1+0x8
}

// Range: 0x80033A80 -> 0x80033EB0
void CasSimDescription::DoStreamTSC5(class CasSimDescription * const this /* r29 */, class ReconBuffer * r /* r30 */) {
    // Local variables
    signed char bogusInt8; // r1+0x9
    float bogusFloat; // r1+0xC
    unsigned char bogusBool; // r1+0x8
    int i; // r31
    int i; // r31
}

// Range: 0x80033EB0 -> 0x80034270
void CasSimDescription::DoStreamTSC5Pet(class CasSimDescription * const this /* r29 */, class ReconBuffer * r /* r30 */) {
    // Local variables
    signed char nPetVersion; // r1+0xA
    signed char bogusInt8; // r1+0x9
    signed short bogusInt16; // r1+0xC
    float bogusFloat; // r1+0x10
    unsigned char bogusBool; // r1+0x8
    int i; // r31
}

// Range: 0x80034270 -> 0x800347E8
void CasSimDescription::Verify(class CasSimDescription * const this /* r30 */) {
    // Local variables
    unsigned char bNameContainsNullChar; // r4
    unsigned int nameArrayIndex; // r5
    char szErr[512]; // r1+0x10
    unsigned char bodyPart; // r29
    enum eSpecies species; // r28
    const class LatticeParam * pLatticeParam; // r27
    int i; // r26
    const class MorphTargetParam * pMorphTargetParam; // r26
    int i; // r27
    unsigned char bPersonalityIsValid; // r4
    unsigned int personalityIndex; // r6

    // References
    // -> static signed char zodiacPersonalityValues[12][5];
    // -> class EGlobal _globals;
}

// Range: 0x800347E8 -> 0x800348C4
void CasSimDescription::AssertWithInfo(const class CasSimDescription * const this /* r30 */, const char * error /* r31 */) {
    // Local variables
    char fullMsg[1024]; // r1+0x8
    char * strOffset; // r4
    unsigned int i; // r5
}

// Range: 0x800348C4 -> 0x8003490C
unsigned char CasSimDescription::GetClothingSetIndex(const class CasSimDescription * const this /* r31 */) {}

// Range: 0x8003490C -> 0x80034970
void CasSimDescription::SetClothingSetIndex(class CasSimDescription * const this /* r30 */, unsigned char newIndex /* r31 */) {}

// Range: 0x80034970 -> 0x800349BC
unsigned char CasSimDescription::GetModelCodeIndex(const class CasSimDescription * const this /* r31 */) {}

// Range: 0x800349BC -> 0x80034A14
void CasSimDescription::SetModelCodeIndex(class CasSimDescription * const this /* r30 */, unsigned char newIndex /* r31 */) {}

// Range: 0x80034A14 -> 0x80034A5C
unsigned char & CasSimDescription::ModelCodeIndex(class CasSimDescription * const this /* r31 */) {}

// Range: 0x80034A5C -> 0x80034AA8
unsigned char CasSimDescription::GetStyleIndex(const class CasSimDescription * const this /* r31 */) {}

// Range: 0x80034AA8 -> 0x80034B00
void CasSimDescription::SetStyleIndex(class CasSimDescription * const this /* r30 */, unsigned char newIndex /* r31 */) {}

// Range: 0x80034B00 -> 0x80034B48
unsigned char & CasSimDescription::StyleIndex(class CasSimDescription * const this /* r31 */) {}

// Range: 0x80034B48 -> 0x80034B94
unsigned char CasSimDescription::GetTextureIndex(const class CasSimDescription * const this /* r31 */) {}

// Range: 0x80034B94 -> 0x80034BEC
void CasSimDescription::SetTextureIndex(class CasSimDescription * const this /* r30 */, unsigned char newIndex /* r31 */) {}

// Range: 0x80034BEC -> 0x80034C34
unsigned char & CasSimDescription::TextureIndex(class CasSimDescription * const this /* r31 */) {}

// Range: 0x80034C34 -> 0x80034C44
float CasSimDescription::GetMorphTargetValue() {}

// Range: 0x80034C44 -> 0x80034C54
float & CasSimDescription::MorphTargetValue() {}

// Range: 0x80034C54 -> 0x80034C64
void CasSimDescription::SetMorphTargetValue() {}

// Range: 0x80034C64 -> 0x80034CC8
char * CasSimDescription::GetTypeCode(const class CasSimDescription * const this /* r31 */) {}

// Range: 0x80034CC8 -> 0x80034D08
char * CasSimDescription::GetSkinColorName() {}

// Range: 0x80034D08 -> 0x80034D4C
class SimBodyPart * CasSimDescription::GetBodyPart(const class CasSimDescription * const this /* r31 */) {}

// Range: 0x80034D4C -> 0x80034D6C
class SimBodyPart * CasSimDescription::GetBodyPartByIndex() {}

// Range: 0x80034D6C -> 0x80034E3C
unsigned int CasSimDescription::GetSkinTextureID(const class CasSimDescription * const this /* r28 */, enum eSimPartsMapLocation nQuadrantNumber /* r30 */, unsigned char bInGame /* r29 */) {
    // Local variables
    unsigned char nTextureIndex; // r30
    const struct BodyPartSkinTSC6 * pSkinData; // r0
}

// Range: 0x80034E3C -> 0x80034F58
class EString CasSimDescription::GetSkinTextureName(const class CasSimDescription * const this /* r28 */, enum eSimPartsMapLocation nQuadrantNumber /* r30 */, unsigned char bInGame /* r29 */) {
    // Local variables
    class EString strName; // r1+0x8
    unsigned char nTextureIndex; // r30
    const struct BodyPartSkinTSC6 * pSkinData; // r0
}

// Range: 0x80034F58 -> 0x80034FEC
unsigned int CasSimDescription::GetTattooTextureID(const class CasSimDescription * const this /* r28 */, unsigned char bInGame /* r29 */) {}

// Range: 0x80034FEC -> 0x8003508C
class EString CasSimDescription::GetTattooClothingSetName(class EString * strName /* r28 */, const class CasSimDescription * const this /* r29 */, enum eTattooLocation tattooLocation /* r31 */) {}

// Range: 0x8003508C -> 0x80035180
void CasSimDescription::FillInTextureBlendInfo(const class CasSimDescription * const this /* r28 */, enum eBodyPart bodyPart /* r31 */, unsigned char bInGame /* r29 */, struct TextureBlendInfo * pTextureInfo /* r30 */) {
    // Local variables
    unsigned char bodyPartIndex; // r0
}

// Range: 0x80035180 -> 0x80035344
unsigned int CasSimDescription::GetClothingTextureInfo(const class CasSimDescription * const this /* r28 */, struct TextureBlendInfo * textureInfo /* r29 */, unsigned char bInGame /* r30 */) {
    // Local variables
    unsigned int nNumParts; // r31
}

// Range: 0x80035344 -> 0x800355B0
unsigned int CasSimDescription::GetTattooTextureInfo(const class CasSimDescription * const this /* r28 */, struct TextureBlendInfo * textureInfo /* r29 */, unsigned char bInGame /* r30 */) {}

// Range: 0x800355B0 -> 0x80035608
class EString CasSimDescription::GetCompositeTextureBaseName(class EString * strBaseName /* r30 */, const class CasSimDescription * const this /* r31 */) {}

// Range: 0x80035608 -> 0x80035734
class EString CasSimDescription::GetCompositeTextureName(class EString * strName /* r27 */, const class CasSimDescription * const this /* r28 */, const char * szBaseName /* r29 */, enum eSimPartsMapLocation quadrant /* r30 */) {}

// Range: 0x80035734 -> 0x800357A0
unsigned int CasSimDescription::GetCompositeTextureID(const char * szBaseName /* r0 */) {
    // Local variables
    class EString strName; // r1+0x8
}

// Range: 0x800357A0 -> 0x80035834
unsigned int CasSimDescription::GetSkinTexturesDatasetID(const class CasSimDescription * const this /* r29 */, unsigned char bLowRes /* r30 */) {
    // Local variables
    char szSkinName[256]; // r1+0x8
}

// Range: 0x80035834 -> 0x800358B8
unsigned int CasSimDescription::GetValidClothingSetIndexes(class CasSimDescription * const this /* r29 */, enum eBodyPart bodyPart /* r30 */, class vector & l /* r31 */) {
    // Local variables
    unsigned char bodyPartIndex; // r0
}

// Range: 0x800358B8 -> 0x80035A70
unsigned int CasSimDescription::GetValidTattooIndexes(class CasSimDescription * const this /* r21 */, enum eTattooLocation tattooTextureIndex /* r20 */, class vector & l /* r22 */) {
    // Local variables
    unsigned int numParts; // r26
    unsigned char bIsMale; // r0
    unsigned char numOptions; // r25
    unsigned char bUseArchetype; // r0
    unsigned char nNudeIndex; // r0
    struct ClothingSetIndexInfo info; // r1+0x10
    signed short nCurrentCreativitySkill; // r24
    int nNeighborID; // r19
    class Neighbor * pNeighbor; // r0
    unsigned char i; // r23
    const struct BodyPartTextureTSC6 * pTattooSetData; // r0
    struct ClothingSetIndexInfo info; // r1+0x8

    // References
    // -> class EGlobal _globals;
    // -> unsigned char s_nudeTattooIndex[4][2];
}

// Range: 0x80035A70 -> 0x80035E24
void CasSimDescription::Randomize(class CasSimDescription * const this /* r31 */, unsigned char bPreserveName /* r28 */, unsigned char bRandomizeClothing /* r29 */) {
    // Local variables
    unsigned char bMale; // r30
    unsigned short savedFirstName[32]; // r1+0x48
    unsigned short savedLastName[32]; // r1+0x8
    unsigned int i; // r29
    enum eMorphTargetRegion morphRegion; // r0
    float fBlendedMorphVal; // f1
}

// Range: 0x80035E24 -> 0x80035EB0
void CasSimDescription::ChoosePersonalityTraits(class CasSimDescription * const this /* r31 */) {
    // Local variables
    unsigned char randomSign; // r3

    // References
    // -> static signed char zodiacPersonalityValues[12][5];
}

// Range: 0x80035EB0 -> 0x80035F04
void CasSimDescription::SwitchToFirstAvailableStyle(class CasSimDescription * const this /* r31 */) {}

// Range: 0x80035F04 -> 0x80035F58
void CasSimDescription::AdjustToLegalStyle(class CasSimDescription * const this /* r31 */) {}

// Range: 0x80035F58 -> 0x800360A4
void CasSimDescription::SetBodyTypeMorphValues(class CasSimDescription * const this /* r30 */) {}

// Range: 0x800360A4 -> 0x8003612C
void CasSimDescription::InitializeToDefaultCostume(class CasSimDescription * const this /* r29 */, unsigned char bMale /* r30 */) {
    // Local variables
    unsigned char bodyPart; // r31
}

// Range: 0x8003612C -> 0x8003619C
void CasSimDescription::RemoveClothesForTattoo(class CasSimDescription * const this /* r30 */) {
    // Local variables
    unsigned char bodyPart; // r31
}

// Range: 0x8003619C -> 0x8003626C
class BitFlags CasSimDescription::Repair(class BitFlags * nDegRepResult /* r31 */, class CasSimDescription * const this /* r30 */) {
    // Local variables
    class SimBodyPart * pSimBodyPart; // r31
    class ClothingItem * pClothingItem; // r30
}

// Range: 0x8003626C -> 0x800362D4
class BitFlags CasSimDescription::DegradeSkin(class BitFlags * nDegRepResult /* r30 */, class CasSimDescription * const this /* r31 */) {}

// Range: 0x800362D4 -> 0x80036350
unsigned char CasSimDescription::UseDyesForTextureVariation(class CasSimDescription * const this /* r31 */) {
    // Local variables
    unsigned char bodyPartIndex; // r0
    unsigned char bUsingArchetype; // r0

    // References
    // -> unsigned char cheatIgnoreRequirements;
}

// Range: 0x80036350 -> 0x80036398
char * CasSimDescription::GetBodyPartName(const class CasSimDescription * const this /* r31 */) {}

// Range: 0x80036398 -> 0x800363A0
unsigned char CasSimDescription::GetBodyPartIndex() {}

// Range: 0x800363A0 -> 0x800368AC
unsigned char CasSimDescription::GetAdjacentIndex(class CasSimDescription * const this /* r26 */, const class CasEventChangeCharacter & event /* r25 */) {
    // Local variables
    signed char modifier; // r28
    unsigned char minIndex; // r27
    unsigned char maxIndex; // r27
    unsigned char curIndex; // r26
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    unsigned char curTempIndex; // r25
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    unsigned char curModelIndex; // r0
    enum eBodyPart bodyPart; // r25
    unsigned char bodyPartIndex; // r0
    class InventoryItems * pInventory; // r0
    signed short nDyesInInventory[9]; // r1+0x1C
    unsigned char curTempIndex; // r25
    signed short nDyesRequired[9]; // r1+0x8
    unsigned char bHasDyes; // r6
    signed short color; // r7
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    unsigned char curTempIndex; // r25
    enum eTattooLocation tattooLocation; // r25
}

// Range: 0x800368AC -> 0x80036F54
void CasSimDescription::HandleEventChangeCharacter(class CasSimDescription * const this /* r28 */, const class CasEventChangeCharacter & event /* r29 */, unsigned char & oldIndex /* r30 */, unsigned char & newIndex /* r31 */) {
    // Local variables
    signed short nClothingItemInstanceID; // r25
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    unsigned char bWoreClothingItem; // r29
    class ClothingItem * pClothingItem; // r0
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    enum eBodyPart bodyPart; // r25
    unsigned char bodyPartIndex; // r0
    class InventoryItems * pInventory; // r25
    signed short nOldDyesRequired[9]; // r1+0x24
    signed short color; // r24
    signed short nDyesRequired[9]; // r1+0x10
    signed short color; // r24
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    enum eTattooLocation tattooLocation; // r0

    // References
    // -> static unsigned char snInitialTextureIndex;
}

// Range: 0x80036F54 -> 0x80037540
unsigned char CasSimDescription::ChangeEventTypeHasMoreThanOneOption(class CasSimDescription * const this /* r28 */, enum CharacterPart nSimPart /* r27 */) {
    // Local variables
    unsigned char maxIndex; // r28
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    unsigned char curIndex; // r27
    unsigned char maxTempIndex; // r26
    unsigned char curTempIndex; // r25
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    unsigned char curModelIndex; // r0
    enum eBodyPart bodyPart; // r25
    unsigned char bodyPartIndex; // r0
    unsigned char maxTempIndex; // r26
    class InventoryItems * pInventory; // r0
    signed short nDyesInInventory[9]; // r1+0x1C
    unsigned char curIndex; // r27
    unsigned char curTempIndex; // r28
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    signed short nDyesRequired[9]; // r1+0x8
    unsigned char bHasDyes; // r6
    signed short color; // r7
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    unsigned char curIndex; // r26
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    unsigned char maxTempIndex; // r27
    unsigned char curTempIndex; // r30
    enum eBodyPart bodyPart; // r0
    unsigned char bodyPartIndex; // r0
    unsigned char curIndex; // r26
    const struct BodyPartGeometryTSC6 * pClothingSetData; // r0
    unsigned char curTempIndex; // r24
    enum eTattooLocation tattooLocation; // r24
}

// Range: 0x80037540 -> 0x8003765C
unsigned char CasSimDescription::ChangeToCostume(class CasSimDescription * const this /* r27 */) {
    // Local variables
    const struct CostumesTSC6 * pCostumeData; // r0
    unsigned char bodyPart; // r28
    unsigned char bodyPartIndex; // r0
    unsigned char nClothingSetIndex; // r0
}

// Range: 0x8003765C -> 0x800377C8
void CasSimDescription::CreateWornClothingItemsInInventory(class CasSimDescription * const this /* r23 */, class InventoryItems * pInventory /* r24 */, signed short nNeighborID /* r25 */, int nNumDegradations /* r26 */) {
    // Local variables
    unsigned char bIsMale; // r29
    unsigned char bodyPart; // r28
    unsigned char bodyPartIndex; // r0
    class SimBodyPart * pSimBodyPart; // r27
    const char * szBodyPartName; // r30
    const char * szClothingSetName; // r0
    signed short nClothingItemID; // r0
    int i; // r30
}

// Range: 0x800377C8 -> 0x80037924
void CasSimDescription::SetAllClothingItemsFromInventory(class CasSimDescription * const this /* r24 */, signed short nNeighborID /* r25 */) {
    // Local variables
    class Neighbor * pNeighbor; // r0
    class Family * pFamily; // r0
    class InventoryItems * pInventory; // r30
    unsigned char bIsMale; // r29
    unsigned char bodyPart; // r28
    unsigned char bodyPartIndex; // r0
    class SimBodyPart * pSimBodyPart; // r27
    class ClothingItem * pClothingItem; // r26
}

// Range: 0x80037924 -> 0x80037984
unsigned char CasSimDescription::GetClothingSetUIIndex(const class CasSimDescription * const this /* r31 */) {
    // Local variables
    unsigned char bodyPartIndex; // r0
}

// Range: 0x80037984 -> 0x80037B2C
unsigned char CasSimDescription::WearClothingItem(class CasSimDescription * const this /* r27 */, unsigned char bodyPartIndex /* r28 */, signed short nNeighborID /* r29 */, signed short nClothingItemInstanceID /* r30 */) {
    // Local variables
    class InventoryItems * pInventory; // r0
    class InventoryItem * pItem; // r31
    class ClothingItem * pClothingItem; // r30
    class ClothingItem * pCurrentClothingItem; // r0
}

// Range: 0x80037B2C -> 0x80037DF4
class BitFlags CasSimDescription::ApplyDamage(class BitFlags * simDamageResult /* r24 */, class CasSimDescription * const this /* r25 */, signed short nNeighborID /* r21 */, const struct DamageEvent & damage /* r26 */, signed short nArmorMultiplier /* r27 */) {
    // Local variables
    class Neighbor * pNeighbor; // r0
    class Family * pFamily; // r0
    class InventoryItems * pInventory; // r0
    unsigned int nTotalClothingHitPoints; // r29
    unsigned char bodyPart; // r28
    unsigned char bodyPartIndex; // r0
    unsigned char nNumStates; // r0
    unsigned char nNumStyles; // r0
    int nCurrentTotalState; // r4
    int nHitPointsPerDegradationState; // r0
    signed short nDamageReduction; // r5
    signed short nActualSkinDamage; // r21
    signed short nMaxHitPoints; // r22
    class BitFlags nSkinDegradeResult; // r1+0xC
}


