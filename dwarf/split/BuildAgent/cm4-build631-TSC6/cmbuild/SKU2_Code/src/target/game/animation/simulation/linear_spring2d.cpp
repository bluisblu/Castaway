/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\animation\simulation\linear_spring2d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80025650 -> 0x80025D28
*/
// Range: 0x80025650 -> 0x800256C8
void * LinearSpring2D::LinearSpring2D(class LinearSpring2D * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__14LinearSpring2D;
}

// Range: 0x800256C8 -> 0x8002574C
void LinearSpring2D::Init(class LinearSpring2D * const this /* r31 */) {
    // Local variables
    float radiusSq; // f5
}

// Range: 0x8002574C -> 0x800257D4
void LinearSpring2D::CalculateConstants(class LinearSpring2D * const this /* r31 */, float fDragMulFactor /* f31 */) {}

// Range: 0x800257D4 -> 0x80025948
void LinearSpring2D::Update(class LinearSpring2D * const this /* r29 */, float dt /* f30 */) {
    // Local variables
    unsigned int updateIter; // r30
    unsigned int kMaxIter; // r0
    unsigned int i; // r31
    class EVec3 oldAcc; // r1+0x20
    class EVec3 oldAcc; // r1+0x14
}

// Range: 0x80025948 -> 0x800259C8
void LinearSpring2D::UpdatePosition(class LinearSpring2D * const this /* r31 */, float dt /* f31 */) {}

// Range: 0x800259C8 -> 0x80025A70
void LinearSpring2D::UpdateAcceleration(class LinearSpring2D * const this /* r31 */) {}

// Range: 0x80025A70 -> 0x80025AD8
void LinearSpring2D::UpdateVelocity(class LinearSpring2D * const this /* r31 */, float dt /* f31 */) {}

// Range: 0x80025AD8 -> 0x80025C2C
void LinearSpring2D::ComputeTipRotationTranslation(class LinearSpring2D * const this /* r29 */, float lengthRatio /* f30 */, class EQuat & rot /* r30 */, class EVec3 & trans /* r31 */, float mulfac /* f31 */) {
    // Local variables
    float invAreaRatioSq; // f2
    float ratio; // f0
    float totDeflection; // f0
    float slope; // f1
    float angle; // f31
    class EVec3 rotAxis; // r1+0x34
}

// Range: 0x80025C2C -> 0x80025CDC
class EVec3 LinearSpring2D::ComputeRotationAxis(class EVec3 * rotAxis /* r31 */) {
    // Local variables
    class EVec3 orient; // r1+0x8
    float normalZVal; // f1
}

// Range: 0x80025CDC -> 0x80025D28
void LinearSpring2D::Reset(class LinearSpring2D * const this /* r31 */) {}


