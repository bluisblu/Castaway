/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngctexturebase.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CF820 -> 0x802D0494
*/
// Range: 0x802CF820 -> 0x802CF91C
void * ENgcTextureBase::~ENgcTextureBase(class ENgcTextureBase * const this /* r29 */) {
    // Local variables
    int dummyX; // r1+0xC
    int dummyY; // r1+0x8
    int bytes; // r0

    // References
    // -> class ETextureManager _textureman;
    // -> int _ngcTexMem;
    // -> int _ngcTexCount;
    // -> struct [anonymous] __vt__15ENgcTextureBase;
}

// Range: 0x802CF91C -> 0x802CF990
void ENgcTextureBase::FlushImageMemoryRange(class ENgcTextureBase * const this /* r30 */, unsigned char sync /* r31 */) {
    // Local variables
    int dummyX; // r1+0xC
    int dummyY; // r1+0x8
    int bytes; // r4
}

// Range: 0x802CF990 -> 0x802CF9A4
unsigned char ENgcTextureBase::Lock() {}

// Range: 0x802CF9A4 -> 0x802CF9B4
void ENgcTextureBase::Unlock() {}

// Range: 0x802CF9B4 -> 0x802CF9B8
void ENgcTextureBase::Invalidate() {}

// Range: 0x802CF9B8 -> 0x802CFAC8
unsigned char ENgcTextureBase::Create(class ENgcTextureBase * const this /* r31 */) {
    // Local variables
    int dummyX; // r1+0xC
    int dummyY; // r1+0x8
    int bytes; // r30

    // References
    // -> class ETextureManager _textureman;
    // -> int _ngcTexMem;
    // -> int _ngcTexCount;
}

// Range: 0x802CFAC8 -> 0x802CFC9C
void ENgcTextureBase::Select(class ENgcTextureBase * const this /* r30 */, int texturecount /* r31 */) {
    // Local variables
    enum _GXTexFilter filter; // r4

    // References
    // -> static float lodBias;
    // -> static enum _GXTlut sTlut;
}

// Range: 0x802CFC9C -> 0x802CFCF0
unsigned char ENgcTextureBase::UpdateBegin(class ENgcTextureBase * const this /* r30 */, enum ETextureUpdateType type /* r31 */) {}

// Range: 0x802CFCF0 -> 0x802CFDDC
void * ENgcTextureBase::UpdateMipLevel(class ENgcTextureBase * const this /* r27 */, int mipLevel /* r28 */, int & pitchX /* r29 */, int & pitchY /* r30 */) {
    // Local variables
    unsigned char * src; // r31
    int dummyX; // r1+0xC
    int dummyY; // r1+0x8
    int bytes; // r31
    void * offset; // r0
}

// Range: 0x802CFDDC -> 0x802CFDE4
void * ENgcTextureBase::UpdatePalette() {}

// Range: 0x802CFDE4 -> 0x802CFF70
void ENgcTextureBase::UpdateEnd(class ENgcTextureBase * const this /* r31 */) {
    // Local variables
    int dummyX; // r1+0x14
    int dummyY; // r1+0x10
    int paddedWidth; // r1+0xC
    int paddedHeight; // r1+0x8
    int i; // r30
    int bytes; // r0
}

// Range: 0x802CFF70 -> 0x802D033C
int ENgcTextureBase::ComputeMipLevelOffset() {
    // Local variables
    int xsize; // r0
    int ysize; // r7
    int offset; // r8
    int bytes; // r12
    int bpp; // r9
    int i; // r10
}

// Range: 0x802D033C -> 0x802D0344
int ENgcTextureBase::GetTEVStageCount() {}

// Range: 0x802D0344 -> 0x802D034C
int ENgcTextureBase::GetTEXCount() {}

// Range: 0x802D034C -> 0x802D0478
void ENgcTextureBase::ClearSwizzleFlag(class ENgcTextureBase * const this /* r30 */) {
    // Local variables
    int dx; // r1+0x14
    int dy; // r1+0x10
    int imageBytes; // r31
    int paddedWidth; // r1+0xC
    int paddedHeight; // r1+0x8
    int i; // r31
    int offset; // r0
}

// Range: 0x802D0478 -> 0x802D0494
void ENgcTextureBase::ClearTileFlags() {}


