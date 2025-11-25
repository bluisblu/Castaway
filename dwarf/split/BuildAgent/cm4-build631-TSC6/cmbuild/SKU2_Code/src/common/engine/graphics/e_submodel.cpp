/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_submodel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029B248 -> 0x8029C1B0
*/
// Range: 0x8029B248 -> 0x8029B288
void * ESubModel::ESubModel(class ESubModel * const this /* r31 */) {}

// Range: 0x8029B288 -> 0x8029B340
void * ESubModel::~ESubModel(class ESubModel * const this /* r29 */) {}

// Range: 0x8029B340 -> 0x8029B3A4
void ESubModel::DelRefSubResources(class ESubModel * const this /* r29 */) {
    // Local variables
    int c; // r30
}

// Range: 0x8029B3A4 -> 0x8029B408
void ESubModel::AddRefSubResources(class ESubModel * const this /* r29 */) {
    // Local variables
    int c; // r30
}

// Range: 0x8029B408 -> 0x8029B4A8
unsigned char ESubModel::TryIncrementSubResources(class ESubModel * const this /* r29 */) {
    // Local variables
    int c; // r30
    int undo; // r30
}

// Range: 0x8029B4A8 -> 0x8029B660
void ESubModel::Read(class ESubModel * const this /* r26 */, class EFile * s /* r27 */, int modelVersion /* r28 */) {
    // Local variables
    unsigned int numTrees; // r1+0x10
    unsigned int i; // r30
    unsigned int shaderId; // r1+0xC
    class EVec3 vMin; // r1+0x20
    class EVec3 vMax; // r1+0x14
    int count; // r1+0x8
    int i; // r29
}

// Range: 0x8029B660 -> 0x8029B700
void ESubModel::Draw(class ESubModel * const this /* r27 */, class ERC * prc /* r28 */) {
    // Local variables
    int cSubModelShader; // r29
}

// Range: 0x8029B700 -> 0x8029B790
void ESubModel::DrawGeometry(class ESubModel * const this /* r27 */, class ERC * prc /* r28 */) {
    // Local variables
    int cSubModelShader; // r29
}

// Range: 0x8029B790 -> 0x8029B82C
void ESubModel::DrawAsShadow(class ESubModel * const this /* r27 */, class ERC * prc /* r28 */) {
    // Local variables
    int cSubModelShader; // r29
}

// Range: 0x8029B82C -> 0x8029B8A0
void ESubModel::DrawWireFrame(class ESubModel * const this /* r28 */, class ERC * prc /* r29 */) {
    // Local variables
    int cSubModelShader; // r30
}

// Range: 0x8029B8A0 -> 0x8029B914
void ESubModel::BuildDisplayList(class ESubModel * const this /* r28 */, struct ESMBuildDisplayListData * pDataExchange /* r29 */) {
    // Local variables
    int cSubModelShader; // r30
}

// Range: 0x8029B914 -> 0x8029B980
void ESubModel::GetMinMaxX(class ESubModel * const this /* r27 */, float * minX /* r28 */, float * maxX /* r29 */) {
    // Local variables
    int cSubModelShader; // r30
}

// Range: 0x8029B980 -> 0x8029B9E8
unsigned char ESubModel::BuildDisplayListStripsMorph(class ESubModel * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029B9E8 -> 0x8029BA4C
void ESubModel::ResetStripsMorph(class ESubModel * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BA4C -> 0x8029BAD0
unsigned char ESubModel::ApplyMorphTargetsToStripsMorph(class ESubModel * const this /* r26 */, float * currentBrowseMorphTargetWeightList /* r27 */, float * userSelectedMorphTargetWeightList /* r28 */) {
    // Local variables
    unsigned char status; // r30
    int i; // r29
}

// Range: 0x8029BAD0 -> 0x8029BB34
void ESubModel::ApplyLatticesToStripsMorph(class ESubModel * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BB34 -> 0x8029BBA0
void ESubModel::AllocateMorphTargetArray(class ESubModel * const this /* r27 */, unsigned int numCurrentBrowseMorphTargets /* r28 */, unsigned int numMorphRegions /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BBA0 -> 0x8029BC14
unsigned char ESubModel::RegisterCurrentBrowseMorphTarget(class ESubModel * const this /* r27 */, class ESubModel * pMorphTarget /* r28 */, int currentBrowseMorphTargetIndex /* r29 */) {
    // Local variables
    unsigned char status; // r3
    int i; // r30
}

// Range: 0x8029BC14 -> 0x8029BC88
void ESubModel::UnregisterCurrentBrowseMorphTarget(class ESubModel * const this /* r28 */, int currentBrowseMorphTargetIndex /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BC88 -> 0x8029BCFC
void ESubModel::UnregisterUserSelectedMorphTarget(class ESubModel * const this /* r28 */, int userSelectedMorphTargetIndex /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BCFC -> 0x8029BD68
void ESubModel::PromoteCurrentBrowseMorphTarget(class ESubModel * const this /* r27 */, int * currentBrowseMorphTargetIndexArray /* r28 */, int morphRegionIndex /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BD68 -> 0x8029BDDC
void ESubModel::CreateLatticeParameterVerts(class ESubModel * const this /* r28 */, class TArray * volumeList /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BDDC -> 0x8029BE40
void ESubModel::FreeLatticeResource(class ESubModel * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BE40 -> 0x8029BEB8
unsigned char ESubModel::HasModifiableColor(class ESubModel * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BEB8 -> 0x8029BF4C
void ESubModel::TransformModelUV(class ESubModel * const this /* r22 */, const class EVec2 & scale /* r23 */, const class EVec2 & translate /* r24 */, unsigned int altShaderID /* r25 */, const class EVec2 & altScale /* r26 */, const class EVec2 & altTranslate /* r27 */, unsigned char bIsWeldable /* r28 */, unsigned char bTranslateFirstUV /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x8029BF4C -> 0x8029C0E0
unsigned char ESubModel::RaycastIntersection(class ESubModel * const this /* r19 */, const class EVec3 & ray_pos_unModified /* r25 */, const class EVec3 & ray_pos /* r26 */, const class EVec3 & ray_dir /* r27 */, class EVec3 & hit_pos /* r28 */, float & hit_dist /* r29 */, unsigned char bFirst /* r30 */, class RaycastLastHit * lastHit /* r31 */) {
    // Local variables
    unsigned char bHit; // r23
    class RBIteratorPtrType * iter; // r22
    class EQuadTree * pTree; // r24
    class TArray smsArray; // r1+0x14
    int numSMSPotentialHits; // r21
    int i; // r20
    class ESubModelShader * pShader; // r19
}

// Range: 0x8029C0E0 -> 0x8029C1B0
void ESubModel::CreateQuadTrees(class ESubModel * const this /* r26 */) {
    // Local variables
    unsigned int nSMS; // r28
    unsigned int i; // r27
    class EQuadTree * pTree; // r1+0x8
    class RBIteratorPtrType * iter; // r27
    class EQuadTree * pTree; // r0
}


