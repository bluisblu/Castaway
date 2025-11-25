/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\unlockdisplayobject.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80243720 -> 0x80243FF4
*/
// Range: 0x80243720 -> 0x80243838
void * CUnlockDisplayObject::CUnlockDisplayObject(class CUnlockDisplayObject * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__20CUnlockDisplayObject;
}

// Range: 0x80243838 -> 0x80243948
void * CUnlockDisplayObject::~CUnlockDisplayObject(class CUnlockDisplayObject * const this /* r30 */) {
    // References
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
    // -> struct [anonymous] __vt__20CUnlockDisplayObject;
}

// Range: 0x80243948 -> 0x80243A00
unsigned char CUnlockDisplayObject::ServiceDataReady(class CUnlockDisplayObject * const this /* r30 */) {
    // Local variables
    unsigned char ready; // r31

    // References
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
}

// Range: 0x80243A00 -> 0x80243A84
void CUnlockDisplayObject::Setup(class CUnlockDisplayObject * const this /* r31 */) {}

// Range: 0x80243A84 -> 0x80243E20
void CUnlockDisplayObject::Update(class CUnlockDisplayObject * const this /* r31 */) {
    // Local variables
    class EMat4 mat; // r1+0x60
    class EBound3 bound; // r1+0x48

    // References
    // -> float _dt;
    // -> class EAnimManager _animman;
    // -> class EModelManager _modelman;
}

// Range: 0x80243E20 -> 0x80243F4C
void CUnlockDisplayObject::Draw(class CUnlockDisplayObject * const this /* r28 */, class ERC * prc /* r29 */) {
    // Local variables
    int nNodes; // r31
    class EMat4 * pmNodes; // r30
    class EMat4 tmp; // r1+0x8
}

// Range: 0x80243F4C -> 0x80243F74
unsigned char CUnlockDisplayObject::IsActive() {
    // Local variables
    unsigned char rc; // r4
}

// Range: 0x80243F74 -> 0x80243FF4
void CUnlockDisplayObject::SetMultiColorIndex(class CUnlockDisplayObject * const this /* r30 */, int index /* r31 */) {}


