/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\ui2d.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017DD64 -> 0x8017E6A0
*/
// Range: 0x8017DD64 -> 0x8017DE24
void * UI2D::UI2D(class UI2D * const this /* r29 */) {
    // Local variables
    class UI2DRecord * prev; // r31
    int i; // r30

    // References
    // -> class EShaderManager _shaderman;
    // -> struct [anonymous] __vt__4UI2D;
}

// Range: 0x8017DE24 -> 0x8017DEF8
void * UI2D::~UI2D(class UI2D * const this /* r29 */) {
    // Local variables
    class UI2DRecord * record; // r3
    class UI2DRecord * next; // r31

    // References
    // -> class EShaderManager _shaderman;
    // -> struct [anonymous] __vt__4UI2D;
}

// Range: 0x8017DEF8 -> 0x8017E080
void UI2D::AddEntry(class ERShader * pShader /* r29 */, int colorIndex /* r30 */) {
    // Local variables
    class UI2DRecord * record; // r31

    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8017E080 -> 0x8017E1D8
void UI2D::RemoveEntry(class UI2D * const this /* r31 */, class UI2DRecord * record /* r30 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8017E1D8 -> 0x8017E264
unsigned char UI2D::InstallEntry(class UI2D * const this /* r27 */, const char * flashName /* r28 */, unsigned int shaderId /* r29 */, const char * className /* r30 */, int colorIndex /* r31 */) {
    // Local variables
    class UI2DRecord * record; // r4
}

// Range: 0x8017E264 -> 0x8017E300
unsigned char UI2D::InstallEntry(class UI2D * const this /* r27 */, const char * flashName /* r28 */, class ERShader * pShader /* r29 */, const char * className /* r30 */, int colorIndex /* r31 */) {
    // Local variables
    class UI2DRecord * record; // r4
}

// Range: 0x8017E300 -> 0x8017E3D8
class UI2DRecord * UI2D::FindEntry(class UI2D * const this /* r28 */, const char * flashName /* r29 */) {
    // Local variables
    class UI2DRecord * record; // r30
}

// Range: 0x8017E3D8 -> 0x8017E424
unsigned char UI2D::UnInstallEntry(class UI2D * const this /* r31 */) {
    // Local variables
    class UI2DRecord * record; // r4
}

// Range: 0x8017E424 -> 0x8017E498
unsigned char UI2D::UnInstallAllEntries(class UI2D * const this /* r29 */, const char * className /* r30 */) {
    // Local variables
    unsigned char rc; // r3
    class UI2DRecord * record; // r5
    class UI2DRecord * next; // r31
}

// Range: 0x8017E498 -> 0x8017E4C4
unsigned char UI2D::ContainsEntry() {}

// Range: 0x8017E4C4 -> 0x8017E6A0
class ERShader * UI2D::GetShader(class UI2D * const this /* r30 */) {
    // Local variables
    class UI2DRecord * record; // r0

    // References
    // -> class EShaderManager _shaderman;
}


