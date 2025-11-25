/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_shader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029A9FC -> 0x8029B248
*/
// Range: 0x8029A9FC -> 0x8029AAB0
void * EShader::EShader(class EShader * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__7EShader;
}

// Range: 0x8029AAB0 -> 0x8029AB38
void * EShader::~EShader(class EShader * const this /* r30 */) {
    // References
    // -> class EShaderManager _shaderman;
    // -> struct [anonymous] __vt__7EShader;
}

// Range: 0x8029AB38 -> 0x8029ABEC
unsigned char EShader::Create(class EShader * const this /* r31 */) {}

// Range: 0x8029ABEC -> 0x8029AC5C
class EShader * EShader::Clone(class EShader * const this /* r31 */) {
    // Local variables
    class EShader * pClone; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8029AC5C -> 0x8029AD68
void EShader::AddToUpdateList(class EShader * const this /* r31 */) {
    // References
    // -> class TLinkedList m_updateList;
    // -> class EMutex m_updateListMutex;
    // -> class EShaderManager _shaderman;
}

// Range: 0x8029AD68 -> 0x8029AE38
void EShader::RemoveFromUpdateList(class EShader * const this /* r31 */) {
    // References
    // -> class EShaderManager _shaderman;
    // -> class TLinkedList m_updateList;
    // -> class EMutex m_updateListMutex;
}

// Range: 0x8029AE38 -> 0x8029AEC0
void EShader::UpdateAll(float deltaTime /* f31 */) {
    // Local variables
    struct EShaderUpdate * psu; // r31

    // References
    // -> class TLinkedList m_updateList;
    // -> class EMutex m_updateListMutex;
}

// Range: 0x8029AEC0 -> 0x8029B078
void EShader::Update() {
    // Local variables
    int d; // r7
}

// Range: 0x8029B078 -> 0x8029B0C8
void EShader::ChangeMaterial() {}

// Range: 0x8029B0C8 -> 0x8029B118
class ETexture * EShader::GetTexture() {}

// Range: 0x8029B118 -> 0x8029B1F8
void EShader::Validate(class EShader * const this /* r28 */) {
    // Local variables
    int textureCount; // r30
    int i; // r29
    int i; // r29
}

// Range: 0x8029B1F8 -> 0x8029B20C
void EShader::SelectForShadowMask() {}

// Range: 0x8029B20C -> 0x8029B210
void EShader::SetShadowAlpha() {}

// Range: 0x8029B210 -> 0x8029B248
void EShader::ClearZTest() {
    // Local variables
    unsigned int i; // r6
}


