/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\ngc\e_ngcrendereraaimpl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C5C00 -> 0x802C5E90
*/
// Range: 0x802C5C00 -> 0x802C5C1C
void * NGCRendererAAImpl::NGCRendererAAImpl() {}

// Range: 0x802C5C1C -> 0x802C5C78
void * NGCRendererAAImpl::~NGCRendererAAImpl(class NGCRendererAAImpl * const this /* r30 */) {}

// Range: 0x802C5C78 -> 0x802C5D24
void NGCRendererAAImpl::Init(class NGCRendererAAImpl * const this /* r30 */) {
    // Local variables
    int prevFrameTexMemSize; // r31

    // References
    // -> unsigned char kAASamplePatternOn[12][2];
    // -> unsigned char kVerticalFilterOn[7];
}

// Range: 0x802C5D24 -> 0x802C5D4C
void * NGCRendererAAImpl::GetPreviousFrameBuffer() {}

// Range: 0x802C5D4C -> 0x802C5D5C
unsigned char NGCRendererAAImpl::EnablePrevFrameCopy(class NGCRendererAAImpl * const this /* r5 */) {
    // Local variables
    unsigned char prev; // r0
}

// Range: 0x802C5D5C -> 0x802C5D6C
unsigned char NGCRendererAAImpl::ForceDisableAA(class NGCRendererAAImpl * const this /* r5 */) {
    // Local variables
    unsigned char retVal; // r0
}

// Range: 0x802C5D6C -> 0x802C5D74
int NGCRendererAAImpl::GetNumberOfFullScenePasses() {}

// Range: 0x802C5D74 -> 0x802C5DEC
void NGCRendererAAImpl::BeginFullScenePass(class NGCRendererAAImpl * const this /* r31 */) {}

// Range: 0x802C5DEC -> 0x802C5DF0
void NGCRendererAAImpl::EndFullScenePass() {}

// Range: 0x802C5DF0 -> 0x802C5E90
void NGCRendererAAImpl::EndFrame(class NGCRendererAAImpl * const this /* r31 */) {}


