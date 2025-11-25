/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_rtexture.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E9888 -> 0x802EA09C
*/
// Range: 0x802E9888 -> 0x802E98C8
void * ERTexture::ERTexture() {
    // References
    // -> struct [anonymous] __vt__9ERTexture;
}

// Range: 0x802E98C8 -> 0x802E9958
void * ERTexture::~ERTexture(class ERTexture * const this /* r30 */) {
    // References
    // -> class ETextureManager _textureman;
    // -> struct [anonymous] __vt__9EResource;
    // -> struct [anonymous] __vt__9ERTexture;
}

// Range: 0x802E9958 -> 0x802E9994
void ERTexture::Attach(class ERTexture * const this /* r30 */, class ETexture * pTexture /* r31 */) {}

// Range: 0x802E9994 -> 0x802E99DC
void ERTexture::Deallocate(class ERTexture * const this /* r31 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802E99DC -> 0x802E9A78
void ERTexture::Refresh(class ERTexture * const this /* r30 */, class EFile * pFile /* r31 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802E9A78 -> 0x802E9CE4
void ERTexture::LoadFromFile(class ERTexture * const this /* r30 */, class EFile * s /* r31 */) {
    // Local variables
    struct ETextureDef td; // r1+0x10
    int nImages; // r0
    int xSize; // r27
    int ySize; // r26
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    void * pImg; // r0
    int i; // r25
    unsigned int pImage; // r24
    int bytesToReadForImageRow; // r23
    int paddedBytesPerRow; // r0
    int y; // r22
    void * pPalette; // r4

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802E9CE4 -> 0x802E9D84
void ERTexture::Load(class ERTexture * const this /* r30 */, class EFile & s /* r31 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x8
}

// Range: 0x802E9D84 -> 0x802E9D8C
void ERTexture::Load() {}

// Range: 0x802E9D8C -> 0x802EA00C
void ERTexture::LoadFromMemory(class ERTexture * const this /* r30 */, unsigned char * pData /* r31 */) {
    // Local variables
    struct ETextureDef td; // r1+0x10
    int xSize; // r27
    int ySize; // r26
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    void * pImg; // r0
    int i; // r25
    unsigned int pImage; // r24
    int bytesToReadForImageRow; // r23
    int y; // r22
    void * pPalette; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802EA00C -> 0x802EA09C
unsigned char ERTexture::IsSafeToDelete(class ERTexture * const this /* r30 */) {
    // Local variables
    int p; // r31

    // References
    // -> class ERenderer * _pRend;
}


