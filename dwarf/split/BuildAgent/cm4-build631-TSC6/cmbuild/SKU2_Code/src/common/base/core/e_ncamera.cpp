/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_ncamera.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80265F28 -> 0x80266798
*/
// Range: 0x80265F28 -> 0x80265F78
void * ENCamera::ENCamera(class ENCamera * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__8ENCamera;
}

// Range: 0x80265F78 -> 0x80265FD4
void * ENCamera::~ENCamera(class ENCamera * const this /* r30 */) {}

// Range: 0x80265FD4 -> 0x802661D4
void ENCamera::Write(class ENCamera * const this /* r22 */, class EStream & s /* r23 */) {
    // Local variables
    int nVersion; // r0
    int i; // r24
    struct ENCameraPoint & cameraPoint; // r0
}

// Range: 0x802661D4 -> 0x802663FC
void ENCamera::Read(class ENCamera * const this /* r31 */, class EStream & s /* r23 */) {
    // Local variables
    int nVersion; // r1+0x8
    int i; // r24
    char copyName[64]; // r1+0x10
    int j; // r24
    int i; // r25
}

// Range: 0x802663FC -> 0x80266604
void ENCamera::Read(class ENCamera * const this /* r27 */, class EFile * s /* r28 */) {
    // Local variables
    int nVersion; // r1+0x8
    int i; // r29
    char copyName[64]; // r1+0x10
    int j; // r29
    int i; // r30
}

// Range: 0x80266604 -> 0x80266798
unsigned int ENCamera::Read(class ENCamera * const this /* r26 */, unsigned char * buff /* r27 */) {
    // Local variables
    unsigned char * start; // r29
    int nVersion; // r1+0x8
    int i; // r28
    char copyName[64]; // r1+0x10
    int j; // r28
    int i; // r30
}


