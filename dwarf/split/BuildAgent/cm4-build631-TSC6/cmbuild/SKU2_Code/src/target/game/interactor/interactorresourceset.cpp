/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\interactorresourceset.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800636E8 -> 0x80063DD0
*/
// Range: 0x800636E8 -> 0x80063794
void * InteractorResourceSet::InteractorResourceSet(class InteractorResourceSet * const this /* r30 */) {}

// Range: 0x80063794 -> 0x80063838
void * InteractorResourceSet::~InteractorResourceSet(class InteractorResourceSet * const this /* r30 */) {}

// Range: 0x80063838 -> 0x80063908
unsigned char InteractorResourceSet::AddModel(class InteractorResourceSet * const this /* r30 */, unsigned int modelId /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
    class ERModel * pModel; // r31
    struct pair insertResult; // r1+0x20

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x8006391C -> 0x800639D8
class ERModel * InteractorResourceSet::GetModel(class InteractorResourceSet * const this /* r30 */, unsigned int modelId /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
    class ERModel * pModel; // r31
    struct pair insertResult; // r1+0x20

    // References
    // -> class EModelManager _modelman;
}

// Range: 0x800639D8 -> 0x80063AAC
unsigned char InteractorResourceSet::AddShader(class InteractorResourceSet * const this /* r30 */, unsigned int shaderId /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
    class ERShader * pShader; // r31
    struct pair insertResult; // r1+0x20

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80063AC0 -> 0x80063B60
unsigned char InteractorResourceSet::RemoveShader(class InteractorResourceSet * const this /* r30 */, unsigned int shaderId /* r1+0x8 */) {
    // Local variables
    unsigned int * iter; // r31

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80063B60 -> 0x80063C20
class ERShader * InteractorResourceSet::GetShader(class InteractorResourceSet * const this /* r30 */, unsigned int shaderId /* r1+0x8 */) {
    // Local variables
    struct pair * iter; // r0
    class ERShader * pShader; // r31
    struct pair insertResult; // r1+0x20

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x80063C20 -> 0x80063D38
void InteractorResourceSet::ClearSet(class InteractorResourceSet * const this /* r29 */) {
    // Local variables
    unsigned int * iter; // r30
    unsigned int * iter; // r30
    unsigned int * iter; // r30

    // References
    // -> class ETextureManager _textureman;
    // -> class EShaderManager _shaderman;
    // -> class EModelManager _modelman;
}

// Range: 0x80063D38 -> 0x80063D78
void InteractorResourceSet::AddOrderTableData(class InteractorResourceSet * const this /* r31 */) {}

// Range: 0x80063D78 -> 0x80063DD0
class EOrderTableData * InteractorResourceSet::GetOrderTableData(class InteractorResourceSet * const this /* r30 */, unsigned int tableId /* r31 */) {}


