/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objselector.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A2160 -> 0x800A3C80
*/
// Range: 0x800A2160 -> 0x800A2278
void * ObjSelector::ObjSelector(class ObjSelector * const this /* r29 */) {}

// Range: 0x800A2278 -> 0x800A2304
void * ObjSelector::~ObjSelector(class ObjSelector * const this /* r30 */) {}

// Range: 0x800A2304 -> 0x800A2404
unsigned char ObjSelector::IsPreloaded(const class ObjSelector * const this /* r27 */) {
    // Local variables
    unsigned char result; // r31
    class ObjectFolder * const pFolder; // r30
    signed short masterID; // r29
    class ObjSelector * pSel; // r28
}

// Range: 0x800A2404 -> 0x800A243C
class iResFile * ObjSelector::loadFile(class ObjSelector * const this /* r31 */) {}

// Range: 0x800A243C -> 0x800A2498
signed short ObjSelector::GetEffectiveTreeTableID(class ObjSelector * const this /* r31 */) {
    // Local variables
    const struct ObjDefinition * def; // r0
    class ObjSelector * master; // r0
}

// Range: 0x800A2498 -> 0x800A24E8
unsigned char ObjSelector::TestFromSameFile(const class ObjSelector * const this /* r30 */) {}

// Range: 0x800A24E8 -> 0x800A2530
class ObjSelector * ObjSelector::GetMasterSelector(class ObjSelector * const this /* r31 */) {}

// Range: 0x800A2530 -> 0x800A2554
int ObjSelector::GetGUID() {
    // Local variables
    int guid; // r0
}

// Range: 0x800A2554 -> 0x800A2588
class ELocString ObjSelector::GetSelectorCatalogName() {
    // Local variables
    class ObjSelector * master; // r0
    class CatalogResource * cr; // r0
}

// Range: 0x800A2588 -> 0x800A25BC
class ELocString ObjSelector::GetSelectorCatalogDescription() {
    // Local variables
    class ObjSelector * master; // r0
    class CatalogResource * cr; // r0
}

// Range: 0x800A25BC -> 0x800A25F0
class ELocString ObjSelector::GetSelectorCatalogShortName() {
    // Local variables
    class ObjSelector * master; // r0
    class CatalogResource * cr; // r0
}

// Range: 0x800A25F0 -> 0x800A2654
class BString2 & ObjSelector::GetUserName() {
    // References
    // -> static class BString2 empty;
}

// Range: 0x800A2654 -> 0x800A26B8
void ObjSelector::SetUserName(class ObjSelector * const this /* r30 */, const class BString2 & newName /* r31 */) {}

// Range: 0x800A26B8 -> 0x800A271C
class BString2 & ObjSelector::GetUserLastName() {
    // References
    // -> static class BString2 empty;
}

// Range: 0x800A271C -> 0x800A2780
void ObjSelector::SetUserLastName(class ObjSelector * const this /* r30 */, const class BString2 & newLastName /* r31 */) {}

// Range: 0x800A2780 -> 0x800A27F0
void ObjSelector::GetUserFullName(class ObjSelector * const this /* r30 */, class BString2 & outString /* r31 */) {}

// Range: 0x800A27F0 -> 0x800A2878
int ObjSelector::GetNpcShaderId(unsigned char preferLarge /* r31 */) {
    // Local variables
    const struct RelationshipTable * relTableRow; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x800A2878 -> 0x800A2AE0
unsigned char ObjSelector::GetThumbnail(class ObjSelector * const this /* r28 */, class ERShader * * ppShader /* r29 */) {
    // Local variables
    int npcShaderId; // r4
    class ETexture * texture; // r31
    unsigned short resID; // r0
    struct HandleNode * handle; // r30
    class ThumbnailLoader thumb; // r1+0x8
    unsigned char bCreateBlankTexture; // r30
    class cXPerson * pPerson; // r0
    class ESim * pSim; // r31

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x800A2AE0 -> 0x800A2BF4
void ObjSelector::SetThumbnail(class ObjSelector * const this /* r30 */, class ETexture * pTexture /* r31 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x800A2BF4 -> 0x800A2D14
void ObjSelector::SetThumbnail(class ObjSelector * const this /* r29 */) {
    // Local variables
    class ERTexture * pSrc; // r0
    struct ETextureDef td; // r1+0x8
    class ETexture * pDest; // r30

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x800A2D14 -> 0x800A2D84
void ObjSelector::DestroyThumbnail(class ObjSelector * const this /* r31 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x800A2D84 -> 0x800A2DE4
unsigned char ObjSelector::GetIsMultiTileSubObject(class ObjSelector * const this /* r30 */) {}

// Range: 0x800A2DE4 -> 0x800A2E14
unsigned char ObjSelector::GetIsPerson() {}

// Range: 0x800A2E14 -> 0x800A2E84
int ObjSelector::GetInitTreeVersion(class ObjSelector * const this /* r30 */) {
    // Local variables
    class ObjFnTable * fnTab; // r0
    signed short initTreeID; // r0
}

// Range: 0x800A2E84 -> 0x800A2EF4
int ObjSelector::GetMainTreeVersion(class ObjSelector * const this /* r30 */) {
    // Local variables
    class ObjFnTable * fnTab; // r0
    signed short mainTreeID; // r0
}

// Range: 0x800A2EF4 -> 0x800A3028
int ObjSelector::GetCatalogRating() {}

// Range: 0x800A3028 -> 0x800A30F0
class ObjFnTable * ObjSelector::GetFnTable(class ObjSelector * const this /* r29 */) {
    // Local variables
    int err; // r0
}

// Range: 0x800A30F0 -> 0x800A31D8
class CatalogResource * ObjSelector::GetSelectorCatalogResource(class ObjSelector * const this /* r29 */) {
    // Local variables
    signed short catalogID; // r31
    class CatalogResource * cr; // r30
}

// Range: 0x800A31D8 -> 0x800A322C
void ObjSelector::GetShortFilename(class StringBuffer * outName /* r31 */) {
    // Local variables
    class StackString fileName; // r1+0x410
    class StackString shortName; // r1+0x8
}

// Range: 0x800A322C -> 0x800A328C
int ObjSelector::CountTypeAttributes(class ObjSelector * const this /* r31 */) {
    // Local variables
    int guid; // r4
    class ObjectTypeAttrBlock * block; // r0
}

// Range: 0x800A328C -> 0x800A32EC
signed short * ObjSelector::GetTypeAttributes(class ObjSelector * const this /* r31 */) {
    // Local variables
    int guid; // r4
    class ObjectTypeAttrBlock * block; // r0
}

// Range: 0x800A32EC -> 0x800A3338
class ITreeTable * ObjSelector::GetTreeTable(class ObjSelector * const this /* r31 */) {}

// Range: 0x800A3338 -> 0x800A33A0
void ObjSelector::SetSimDescription(class ObjSelector * const this /* r30 */, class CasSimDescription * pSimDescription /* r31 */) {}

// Range: 0x800A33A0 -> 0x800A33BC
class CasSimDescription * ObjSelector::GetNonCostumedSimDescription() {}

// Range: 0x800A33BC -> 0x800A3464
void ObjSelector::GetSkinName(const class ObjSelector * const this /* r30 */, class EString & strFullName /* r31 */) {
    // Local variables
    char firstName[32]; // r1+0x28
    char lastName[32]; // r1+0x8
}

// Range: 0x800A3464 -> 0x800A34DC
void ObjSelector::ResetAnimTables() {
    // Local variables
    int i; // r29
}

// Range: 0x800A34DC -> 0x800A3578
class AnimTable * ObjSelector::GetAnimTable(class ObjSelector * const this /* r29 */, enum tNewAnimTableIndex index /* r30 */) {}

// Range: 0x800A3578 -> 0x800A3624
class AnimTable * ObjSelector::GetSemiAnimTable(class ObjSelector * const this /* r29 */, enum tNewAnimTableIndex index /* r30 */) {}

// Range: 0x800A3624 -> 0x800A3654
enum tNewAnimTableIndex ObjSelector::GetNewAnimTableIndex() {}

// Range: 0x800A3654 -> 0x800A368C
class AnimTable * ObjSelector::GetAnimTableForSimType(class ObjSelector * const this /* r31 */) {
    // Local variables
    enum tNewAnimTableIndex index; // r0
}

// Range: 0x800A368C -> 0x800A36C4
class AnimTable * ObjSelector::GetSemiAnimTableForSimType(class ObjSelector * const this /* r31 */) {
    // Local variables
    enum tNewAnimTableIndex index; // r0
}

// Range: 0x800A36C4 -> 0x800A3A18
void ThumbnailLoader::DoStream(class ThumbnailLoader * const this /* r30 */, class ReconBuffer * r /* r31 */) {
    // Local variables
    class ETexture * pTexture; // r28
    class ERShader * pShader; // r1+0x10
    unsigned char bTextureSwizzled; // r27
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    signed char * pData; // r0
    unsigned char bSourceWasPs2; // r3
    unsigned char * pix; // r4
    int i; // r5
    int i; // r4
}

// Range: 0x800A3A18 -> 0x800A3C80
class ETexture * ThumbnailLoader::CreateEmptyThumbnail() {
    // Local variables
    struct ETextureDef td; // r1+0x10
    class ETexture * pTexture; // r30
    int pitchX; // r1+0xC
    int pitchY; // r1+0x8
    int i; // r0
    signed char * pData; // r3

    // References
    // -> class EGraphics * _pGfx;
}


