/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\simimagemaker.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80040A30 -> 0x8004233C
*/
// Range: 0x80040A30 -> 0x80040AF8
void * CharacterImageMaker::CharacterImageMaker(class CharacterImageMaker * const this /* r29 */) {
    // References
    // -> unsigned int kDefaultAnimID[2];
    // -> class EVec3 kDefaultCameraUp;
    // -> class EVec3 kDefaultCameraTarget;
    // -> class EVec3 kDefaultCameraPos;
    // -> struct [anonymous] __vt__19CharacterImageMaker;
}

// Range: 0x80040AF8 -> 0x80040B54
void * CharacterImageMaker::~CharacterImageMaker(class CharacterImageMaker * const this /* r30 */) {}

// Range: 0x80040B54 -> 0x80040B64
void CharacterImageMaker::OverrideImageSize() {}

// Range: 0x80040B64 -> 0x80040B6C
void CharacterImageMaker::OverridePose() {}

// Range: 0x80040B6C -> 0x80040BDC
void CharacterImageMaker::OverrideCamera(class CharacterImageMaker * const this /* r29 */, const class EVec3 & camTarget /* r30 */, const class EVec3 & camUp /* r31 */, float camFOV /* f31 */) {}

// Range: 0x80040BDC -> 0x80040C50
void CharacterImageMaker::OverrideBackground(class CharacterImageMaker * const this /* r30 */, unsigned int bgTexId /* r31 */) {
    // References
    // -> class ETextureManager _textureman;
}

// Range: 0x80040C50 -> 0x80040CCC
void CharacterImageMaker::RenderCharacter(class CharacterImageMaker * const this /* r29 */, class ERC * prc /* r30 */) {}

// Range: 0x80040CCC -> 0x800410C8
class ETexture * CharacterImageMaker::CreateImage(class CharacterImageMaker * const this /* r29 */, unsigned char bCatalogThumbnail /* r30 */) {
    // Local variables
    class ERC * prc; // r31
    class E3DWindow window; // r1+0x68
    struct ETextureDef td; // r1+0x48
    class ETexture * pOriginalTexture; // r25
    class ERenderSurface * pRenderSurface; // r26
    class ETexture * pFinalTexture; // r26

    // References
    // -> class EVec4 kDefaultBackgroundColor;
    // -> class EGlobal _globals;
    // -> class EGraphics * _pGfx;
}

// Range: 0x800410C8 -> 0x80041248
void CharacterImageMaker::InitWindow(class CharacterImageMaker * const this /* r28 */, class E3DWindow & window /* r29 */, class ERC * prc /* r30 */) {
    // Local variables
    class ERenderSurface * pRenderSurface; // r31
    struct ERenderSurfaceDef rsd; // r1+0x18

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80041248 -> 0x80041AC0
class ETexture * CharacterImageMaker::CopyToFinalImage(class CharacterImageMaker * const this /* r25 */, class ETexture * pOriginalTexture /* r26 */, unsigned char bCatalogThumbnail /* r17 */) {
    // Local variables
    int pitchX; // r1+0x18
    int pitchY; // r1+0x14
    unsigned int nBackgroundDepth; // r19
    struct ETextureDef td; // r1+0x20
    class ETexture * pFinalTexture; // r31
    unsigned char bBackgroundTextureSwizzled; // r30
    unsigned int numPixels; // r29
    unsigned int i; // r20
    unsigned char colorArray[4]; // r1+0x10
    void * pBackgroundPixels; // r28
    unsigned int * pBackgroundPalette; // r27
    unsigned int * pOriginalPixels; // r18
    unsigned int * pFinalPixels; // r0
    unsigned short * pOriginalPixels; // r18
    unsigned short * pFinalPixels; // r0
    unsigned short nColor; // r1+0x8
    unsigned int * pOriginalPixels; // r18
    unsigned int * pFinalPalette; // r19
    unsigned char * pFinalPixels; // r0
    unsigned int paletteSize; // r20
    unsigned int color; // r1+0xC
    unsigned int backgroundEntry; // r0
    unsigned int offset; // r19
    unsigned int y; // r21
    unsigned int x; // r22

    // References
    // -> unsigned char kCatalogBackgroundColorArray[4];
    // -> unsigned char s_fullAlphaValue;
    // -> class EGraphics * _pGfx;
}

// Range: 0x80041AC0 -> 0x80041CB4
class ETexture * CharacterImageMaker::CreateImage32x32(class CharacterImageMaker * const this /* r27 */, unsigned char bCatalogThumbnail /* r28 */) {
    // Local variables
    int originalDepth; // r31
    class ETexture * pLargeTexture; // r30
    struct ETextureDef td; // r1+0x10
    class ETexture * pSmallTexture; // r29
    unsigned int clearPink; // r1+0x8
    class ETexture * pFinalTexture; // r30

    // References
    // -> unsigned char kClearPinkArray[4];
    // -> class EGraphics * _pGfx;
}

// Range: 0x80041D40 -> 0x80041DA0
void * SimImageMaker::SimImageMaker(class SimImageMaker * const this /* r30 */, class SimModelTSC6 * pSimModel /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13SimImageMaker;
}

// Range: 0x80041DA0 -> 0x80041E14
void * SimImageMaker::~SimImageMaker(class SimImageMaker * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__13SimImageMaker;
}

// Range: 0x80041E14 -> 0x80041E38
unsigned char SimImageMaker::Init() {}

// Range: 0x80041E38 -> 0x80041E8C
void SimImageMaker::Shutdown(class SimImageMaker * const this /* r31 */) {}

// Range: 0x80041E8C -> 0x80041EE0
void SimImageMaker::Reset(class SimImageMaker * const this /* r31 */) {}

// Range: 0x80041EE0 -> 0x80042038
void SimImageMaker::SetToDefaultValues(class SimImageMaker * const this /* r27 */) {
    // Local variables
    int i; // r27

    // References
    // -> class EVec3 kDefaultDirLightDir[4];
    // -> class EVec3 kDefaultDirLightColor[4];
    // -> class EVec3 kDefaultLightAmbientColor;
    // -> class EVec3 kDefaultCameraUp;
    // -> class EVec3 kDefaultCameraTarget;
    // -> class EVec3 kDefaultCameraPos;
    // -> unsigned int kDefaultAnimID[2];
}

// Range: 0x80042038 -> 0x80042080
void SimImageMaker::SetModel(class SimImageMaker * const this /* r30 */, const class EIStaticModel * pModel /* r31 */) {
    // Local variables
    unsigned int bodyPartIndex; // r0
}

// Range: 0x80042080 -> 0x8004214C
void SimImageMaker::SetImageModels(class SimImageMaker * const this /* r29 */, enum eImageModelSetType imageModelSetType /* r30 */) {
    // Local variables
    enum eBodyPart bodyParts[15]; // r1+0xC
    unsigned int numParts; // r1+0x8
    unsigned int i; // r30
}

// Range: 0x8004214C -> 0x80042150
void SimImageMaker::SetPortraitModels() {}

// Range: 0x80042150 -> 0x80042288
void SimImageMaker::PoseCharacter(class SimImageMaker * const this /* r28 */, class ERC * prc /* r29 */) {
    // Local variables
    class EMat4 mSimOrient; // r1+0x30
    unsigned int skeletonIndex; // r0
    unsigned int numNodes; // r30
    class EMat4 * nodes; // r0

    // References
    // -> unsigned int kSkeletonID[2];
}

// Range: 0x80042288 -> 0x800422CC
void SimImageMaker::SetSpecies(class SimImageMaker * const this /* r31 */) {
    // References
    // -> unsigned int kDefaultAnimID[2];
}

// Range: 0x800422CC -> 0x8004233C
void SimImageMaker::RenderCharacter(class SimImageMaker * const this /* r29 */, class ERC * prc /* r30 */) {}


