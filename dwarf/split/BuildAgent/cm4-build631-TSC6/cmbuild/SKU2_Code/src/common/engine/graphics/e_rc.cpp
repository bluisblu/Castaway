/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_rc.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80296814 -> 0x8029A798
*/
// Range: 0x80296814 -> 0x8029688C
void * ERC::ERC(class ERC * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__3ERC;
}

// Range: 0x8029688C -> 0x802968EC
void * ERC::~ERC(class ERC * const this /* r30 */) {}

// Range: 0x802968EC -> 0x802969A0
void ERC::Init(class ERC * const this /* r30 */, enum RCMode mode /* r31 */) {
    // Local variables
    void * pNewSeg; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802969A0 -> 0x80296A44
void ERC::BeginCommand(class ERC * const this /* r29 */, int command /* r30 */) {
    // Local variables
    int lastCommand; // r31
}

// Range: 0x80296A44 -> 0x80296B2C
void ERC::Send(class ERC * const this /* r31 */) {
    // Local variables
    class EAllocGroup tag; // r1+0x8
    void * pNewSeg; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80296B2C -> 0x80296BEC
struct EDLEntry * ERC::NewEntry(class ERC * const this /* r29 */, int count /* r30 */) {
    // Local variables
    struct EDLEntry * pNewEntry; // [invalid]
    void * pNewSeg; // r31
}

// Range: 0x80296BEC -> 0x80296BFC
void ERC::Connect() {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80296BFC -> 0x80296CB4
void ERC::TriStrip(class ERC * const this /* r29 */, int nVerts /* r30 */) {
    // Local variables
    struct EGEVert * vertsCopy; // r0
    struct EDLEntryCommandU16andU32 * p; // r0
}

// Range: 0x80296CB4 -> 0x80296DF4
void ERC::TriStrip(class ERC * const this /* r30 */, int nVerts /* r31 */, const float * texcoords /* r26 */, const unsigned char * colors /* r27 */, const signed char * normals /* r28 */, const unsigned char * weights /* r24 */, unsigned char dualTexcoords /* r25 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x80296DF4 -> 0x80296E28
void ERC::TriStripRef(unsigned char dualTexcoords /* r0 */) {}

// Range: 0x80296E28 -> 0x80296F70
void ERC::TriStrip(class ERC * const this /* r30 */, int nVerts /* r31 */, const signed short * texcoords /* r26 */, const unsigned char * colors /* r27 */, const signed char * normals /* r28 */, const unsigned char * weights /* r24 */, unsigned char dualTexcoords /* r25 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x80296F70 -> 0x80296FA4
void ERC::TriStripRef(unsigned char dualTexcoords /* r0 */) {}

// Range: 0x80296FA4 -> 0x80296FA8
void ERC::TriFan() {}

// Range: 0x80296FA8 -> 0x80296FAC
void ERC::TriList() {}

// Range: 0x80296FAC -> 0x80296FB0
void ERC::QuadList() {}

// Range: 0x80296FB0 -> 0x80296FB4
void ERC::QuadList() {}

// Range: 0x80296FB4 -> 0x8029706C
void ERC::LineList(class ERC * const this /* r29 */, int nVerts /* r30 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * p; // r0
}

// Range: 0x8029706C -> 0x80297124
void ERC::LineStrip(class ERC * const this /* r29 */, int nVerts /* r30 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * p; // r0
}

// Range: 0x80297124 -> 0x80297128
void ERC::PointList() {}

// Range: 0x80297128 -> 0x80297250
void ERC::PointList(class ERC * const this /* r24 */, int nVerts /* r25 */, const float * texcoords /* r28 */, const unsigned char * colors /* r29 */, const signed char * normals /* r30 */, const unsigned char * weights /* r26 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x80297250 -> 0x80297308
void ERC::SpriteList(class ERC * const this /* r29 */, int nVerts /* r30 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * p; // r0
}

// Range: 0x80297308 -> 0x80297430
void ERC::SpriteList(class ERC * const this /* r24 */, int nVerts /* r25 */, const float * texcoords /* r28 */, const unsigned char * colors /* r29 */, const signed char * normals /* r30 */, const unsigned char * weights /* r26 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x80297430 -> 0x80297434
void ERC::ParticleListInfo() {}

// Range: 0x80297434 -> 0x8029743C
void * ERC::ParticleListBegin() {}

// Range: 0x8029743C -> 0x80297440
void ERC::ParticleListEnd() {}

// Range: 0x80297440 -> 0x80297500
void ERC::ParticleList(class ERC * const this /* r29 */, int nParticles /* r30 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
}

// Range: 0x80297500 -> 0x80297608
void ERC::LineStreakList(class ERC * const this /* r28 */, int nStreaks /* r29 */, const class EVec4 & vStartColor /* r30 */, const class EVec4 & vEndColor /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * pCommand1; // r0
    class EVec4 * pvColors; // r0
}

// Range: 0x80297608 -> 0x802976C8
void ERC::ParticleListRot(class ERC * const this /* r29 */, int nParticles /* r30 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
}

// Range: 0x802976C8 -> 0x8029770C
void ERC::AddDisplayListReference(class ERC * const this /* r31 */) {}

// Range: 0x8029770C -> 0x802977F4
void ERC::DisplayList(class ERC * const this /* r30 */, class EDL * pDL /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802977F4 -> 0x80297930
void ERC::Terminate(class ERC * const this /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80297930 -> 0x802979C0
void ERC::Viewport(class ERC * const this /* r30 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802979C0 -> 0x80297A60
void ERC::ClipRect(class ERC * const this /* r30 */, const class TRect & rect /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    float * pf; // r0
}

// Range: 0x80297A60 -> 0x80297AF0
void ERC::Scissor(class ERC * const this /* r30 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80297AF0 -> 0x80297B98
void ERC::ModelMatrixList(class ERC * const this /* r28 */, const class EMat4 * matrixList /* r29 */, int matrixCount /* r30 */) {}

// Range: 0x80297B98 -> 0x80297C28
void ERC::ModelMatrixIndex(class ERC * const this /* r29 */, int matrixNum /* r30 */, int listIndex /* r31 */) {}

// Range: 0x80297C28 -> 0x80297D5C
void ERC::ModelMatrices(class ERC * const this /* r30 */, int matrixCount /* r31 */) {
    // Local variables
    int maxNum; // r8
    int i; // r9
}

// Range: 0x80297D5C -> 0x80297D74
void ERC::ModelMatrixId() {}

// Range: 0x80297D74 -> 0x80297E6C
void ERC::FlushQueuedMatrices(class ERC * const this /* r30 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
    struct EDLEntryCommandU8 * p; // r0
}

// Range: 0x80297E6C -> 0x80297EFC
void ERC::ViewMatrix(class ERC * const this /* r30 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80297EFC -> 0x80297F8C
void ERC::ProjectionMatrix(class ERC * const this /* r30 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80297F8C -> 0x8029801C
void ERC::WindowMatrix(class ERC * const this /* r30 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x8029801C -> 0x802980C8
void ERC::Texture(class ERC * const this /* r29 */, class ETexture * pTexture /* r30 */, int renderPass /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802980C8 -> 0x8029814C
void ERC::EnableGeometryModes(class ERC * const this /* r30 */, unsigned int modeFlags /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x8029814C -> 0x802981D4
void ERC::DisableGeometryModes(class ERC * const this /* r30 */, unsigned int modeFlags /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802981D4 -> 0x80298258
void ERC::SetGeometryModes(class ERC * const this /* r30 */, unsigned int modeFlags /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80298258 -> 0x802982EC
void ERC::EnableRasterModes(class ERC * const this /* r29 */, unsigned int modeFlags /* r30 */, int renderPass /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802982EC -> 0x80298384
void ERC::DisableRasterModes(class ERC * const this /* r29 */, unsigned int modeFlags /* r30 */, int renderPass /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80298384 -> 0x80298418
void ERC::SetRasterModes(class ERC * const this /* r29 */, unsigned int modeFlags /* r30 */, int renderPass /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80298418 -> 0x8029848C
void ERC::SaveState(class ERC * const this /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x8029848C -> 0x80298500
void ERC::RestoreState(class ERC * const this /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80298500 -> 0x802985D8
void ERC::Lights(class ERC * const this /* r28 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802985D8 -> 0x80298668
void ERC::Material(class ERC * const this /* r30 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80298668 -> 0x8029866C
void ERC::VertexMorphWeightsList() {}

// Range: 0x8029866C -> 0x80298670
void ERC::MipMapSetup() {}

// Range: 0x80298670 -> 0x80298704
void ERC::SetMipMap(class ERC * const this /* r30 */, float mipBias /* f31 */, int renderPass /* r31 */) {
    // Local variables
    struct EDLEntryCommandF32 * p; // r0
}

// Range: 0x80298704 -> 0x802987C0
void ERC::Callback(class ERC * const this /* r27 */, void (* pfnCallback)(unsigned int, unsigned short, unsigned char) /* r28 */, unsigned int param32 /* r29 */, unsigned short param16 /* r30 */, unsigned char param8 /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * p1; // r0
    struct EDLEntryCommandU32 * p2; // r0
}

// Range: 0x802987C0 -> 0x802988B8
void ERC::RectList(class ERC * const this /* r28 */, int nRects /* r29 */, const class EVec4 & vColor /* r30 */, float depth /* f31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    float * pf; // r0
}

// Range: 0x802988B8 -> 0x802989A8
void ERC::RectListRot(class ERC * const this /* r28 */, int nRects /* r29 */, const class EVec4 & vColor /* r30 */, float depth /* f31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    float * pf; // r0
}

// Range: 0x802989A8 -> 0x80298AB0
void ERC::Rect(class ERC * const this /* r26 */, const class EVec2 & vUpperLeft /* r27 */, const class EVec2 & vLowerRight /* r28 */, const class EVec2 & vUpperLeftTC /* r29 */, const class EVec2 & vLowerRightTC /* r30 */, const class EVec4 & vColor /* r31 */, float depth /* f31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    float * pf; // r0
}

// Range: 0x80298AB0 -> 0x80298BB8
void ERC::Rect(class ERC * const this /* r26 */, const class EVec2 & vUpperLeft /* r27 */, const class EVec2 & vLowerRight /* r28 */, const class EVec4 * vColor /* r29 */, const class EVec2 & vUpperLeftTC /* r30 */, const class EVec2 & vLowerRightTC /* r31 */, float depth /* f31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    float * pf; // r0
}

// Range: 0x80298BB8 -> 0x80298CA8
void ERC::DirectRect(class ERC * const this /* r28 */, const class EVec2 & vPos /* r29 */, const class EVec2 & vScale /* r30 */, const class EVec4 & vColor /* r31 */, float depth /* f31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    float * pf; // r0
}

// Range: 0x80298CA8 -> 0x80298D04
void ERC::EnvironmentMap() {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x80298D04 -> 0x80298E0C
void ERC::TextureMatrix(class ERC * const this /* r26 */, const class EMat4 * pmTexture /* r31 */, enum ETCTransformSource source /* r27 */, unsigned char useLookAt /* r28 */, unsigned char perspectiveDivide /* r29 */, int renderPass /* r30 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
    unsigned int flags; // r0
}

// Range: 0x80298E0C -> 0x80298EA0
void ERC::RecalcMatrices(class ERC * const this /* r29 */, int pos /* r30 */, int count /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80298EA0 -> 0x80298F34
void ERC::Debug(class ERC * const this /* r29 */, unsigned int val1 /* r30 */, unsigned int val2 /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80298F34 -> 0x80298FA8
void ERC::GeometrySetup(class ERC * const this /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80298FA8 -> 0x80299044
void ERC::ZTest(class ERC * const this /* r27 */, unsigned char enable /* r28 */, int method /* r29 */, int write /* r30 */, int renderPass /* r31 */) {
    // Local variables
    struct EDLEntryCommandU8andU32 * p; // r0
}

// Range: 0x80299044 -> 0x80299114
void ERC::AlphaTest(class ERC * const this /* r28 */, unsigned char enable /* r29 */, int method /* r30 */, float threshold /* f31 */, int renderPass /* r31 */) {
    // Local variables
    struct EDLEntryCommandU8andU32 * p; // r0
}

// Range: 0x80299114 -> 0x802991B8
void ERC::Stencil(class ERC * const this /* r28 */, int write /* r29 */, int test /* r30 */, int value /* r31 */) {
    // Local variables
    struct EDLEntryCommandU8andU32 * p; // r0
}

// Range: 0x802991B8 -> 0x802991BC
void ERC::SetColorModulation() {}

// Range: 0x802991BC -> 0x802991C0
void ERC::EnableColorModulation() {}

// Range: 0x802991C0 -> 0x80299290
void ERC::SetBlendMode(class ERC * const this /* r25 */, int a /* r26 */, int b /* r27 */, int c /* r28 */, int d /* r29 */, int pass /* r30 */) {
    // Local variables
    int k; // r31
    struct EDLEntryCommandU16andU32 * pCommand; // r0
}

// Range: 0x80299290 -> 0x80299294
void ERC::SetBlendModePass3() {}

// Range: 0x80299294 -> 0x80299298
void ERC::SetTextureAlphaValue() {}

// Range: 0x80299298 -> 0x8029932C
void ERC::SetCombineMode(class ERC * const this /* r29 */, int mode /* r30 */, int pass /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
}

// Range: 0x8029932C -> 0x802993C0
void ERC::RenderSurface(class ERC * const this /* r29 */, class ERenderSurface * pSurface /* r30 */, int which /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x802993C0 -> 0x80299444
void ERC::SaveImageData(class ERC * const this /* r30 */, class ERenderSurface * pSurface /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * p; // r0
}

// Range: 0x80299444 -> 0x80299510
void ERC::Vertex(class ERC * const this /* r24 */, int nVerts /* r25 */, int pos /* r26 */, const float * xyzs /* r27 */, const float * texcoords /* r28 */, const unsigned char * colors /* r29 */, const signed char * normals /* r30 */, const unsigned char * weights /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x80299510 -> 0x802995A4
void ERC::TriIndexed(class ERC * const this /* r29 */, int nTris /* r30 */, const unsigned char * ids /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
}

// Range: 0x802995A4 -> 0x8029A084
void ERC::DrawBox(class ERC * const this /* r28 */, const class EVec3 & minPt /* r29 */, const class EVec3 & maxPt /* r30 */) {
    // Local variables
    struct EGEVert * v; // r31
}

// Range: 0x8029A084 -> 0x8029A0F8
void ERC::Noop(class ERC * const this /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
}

// Range: 0x8029A0F8 -> 0x8029A30C
void ERC::ZClear(class ERC * const this /* r31 */, float xUpperLeft /* f27 */, float yUpperLeft /* f28 */, float xLowerRight /* f29 */, float yLowerRight /* f30 */, float zval /* f31 */) {}

// Range: 0x8029A30C -> 0x8029A4D8
void ERC::StencilClear(class ERC * const this /* r30 */, float xUpperLeft /* f28 */, float yUpperLeft /* f29 */, float xLowerRight /* f30 */, float yLowerRight /* f31 */, int value /* r31 */) {}

// Range: 0x8029A4D8 -> 0x8029A4DC
void ERC::SetDebugMarker() {}

// Range: 0x8029A4DC -> 0x8029A560
void ERC::MovieFrame(class ERC * const this /* r30 */, class EMovie * pMovie /* r31 */) {
    // Local variables
    struct EDLEntryCommandU16andU32 * pCommand; // r0
}

// Range: 0x8029A560 -> 0x8029A5E4
void ERC::SetAlpha(class ERC * const this /* r31 */, float alpha /* f31 */) {
    // Local variables
    struct EDLEntryCommandF32 * pCommand; // r0
}

// Range: 0x8029A5E4 -> 0x8029A5E8
void ERC::SetAlphaPlane() {}

// Range: 0x8029A5E8 -> 0x8029A5EC
void ERC::SetFogValues() {}

// Range: 0x8029A5EC -> 0x8029A700
void ERC::CopyScreenToTexture(class ERC * const this /* r28 */, class ETexture * pTexture /* r29 */, const class EVec4 & rect /* r30 */, const class EVec2 & p /* r31 */) {
    // Local variables
    struct EDLEntryCommandU32 * pCommand; // r0
    unsigned int * p32; // r0
}

// Range: 0x8029A700 -> 0x8029A70C
void * ERC::Alloc() {}

// Range: 0x8029A70C -> 0x8029A718
void * ERC::AllocFlushable() {}

// Range: 0x8029A718 -> 0x8029A724
void ERC::AllocFlushableExternal() {}

// Range: 0x8029A724 -> 0x8029A798
void * ERC::AllocAndCopy(void * data /* r29 */, int bytes /* r30 */) {}


