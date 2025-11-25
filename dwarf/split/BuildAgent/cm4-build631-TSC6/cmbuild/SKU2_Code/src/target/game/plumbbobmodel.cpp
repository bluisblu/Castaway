/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\plumbbobmodel.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80240270 -> 0x802408F0
*/
// Range: 0x80240270 -> 0x80240304
void * PlumbBobModel::PlumbBobModel(class PlumbBobModel * const this /* r31 */) {
    // References
    // -> class PlumbBobParms s_plumbBobParms;
}

// Range: 0x80240304 -> 0x80240384
void * PlumbBobModel::~PlumbBobModel(class PlumbBobModel * const this /* r30 */) {}

// Range: 0x80240384 -> 0x80240424
unsigned int PlumbBobModel::SetModel(class PlumbBobModel * const this /* r29 */, unsigned int resId /* r30 */) {
    // Local variables
    unsigned int nOldID; // r31

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x80240424 -> 0x802404C4
unsigned int PlumbBobModel::SetShadow(class PlumbBobModel * const this /* r29 */, unsigned int resId /* r30 */) {
    // Local variables
    unsigned int nOldID; // r31

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x802404C4 -> 0x8024057C
void PlumbBobModel::DrawShadow(class PlumbBobModel * const this /* r30 */, class ERC * prc /* r31 */) {
    // Local variables
    class EMat4 mat; // r1+0x8
}

// Range: 0x8024057C -> 0x802407C0
void PlumbBobModel::Update(class PlumbBobModel * const this /* r31 */) {
    // Local variables
    float mu; // f1
    float additionalScale; // f30
    float modelHalfHeight; // f1
    float additionalOffset; // f1

    // References
    // -> float _dt;
    // -> class PlumbBobParms s_plumbBobParms;
}

// Range: 0x802407C0 -> 0x80240818
void PlumbBobModel::Draw(class PlumbBobModel * const this /* r30 */, class ERC * prc /* r31 */) {}

// Range: 0x80240818 -> 0x802408F0
void PlumbBobModel::GetExtents(const class PlumbBobModel * const this /* r29 */, class EVec2 & extents /* r30 */) {
    // Local variables
    class EBound3 & bound; // r31
    float halfHeight; // f3
}


