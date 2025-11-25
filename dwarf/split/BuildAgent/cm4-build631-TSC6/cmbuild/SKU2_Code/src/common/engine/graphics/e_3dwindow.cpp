/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\graphics\e_3dwindow.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80283568 -> 0x80286F04
*/
// Range: 0x80283568 -> 0x80283614
void * E3DWindow::E3DWindow(class E3DWindow * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__9E3DWindow;
}

// Range: 0x80283614 -> 0x80283740
void E3DWindow::SetProjection(class E3DWindow * const this /* r31 */, float fovYDegrees /* f28 */, float aspect /* f29 */, float nearPlane /* f30 */, float farPlane /* f31 */) {
    // Local variables
    class EMat4 mProj; // r1+0x8
}

// Range: 0x80283740 -> 0x80283C5C
void E3DWindow::SetOrthoProjectionForUIHD(class E3DWindow * const this /* r31 */, float left /* f21 */, float right /* f22 */, float bottom /* f23 */, float top /* f24 */, float nearPlane /* f25 */, float farPlane /* f26 */, float scale_x /* f27 */, float scale_y /* f28 */, float scale_z /* f29 */, float scale_x_correction /* f30 */, float scale_y_correction /* f31 */) {
    // Local variables
    class EMat4 mProj; // r1+0x120
    class EMat4 mat; // r1+0xE0
    class EMat4 mat2; // r1+0xA0
}

// Range: 0x80283C5C -> 0x80283EB8
void E3DWindow::SetOrthoProjection(class E3DWindow * const this /* r31 */, float left /* f26 */, float right /* f27 */, float bottom /* f28 */, float top /* f29 */, float nearPlane /* f30 */, float farPlane /* f31 */) {
    // Local variables
    class EMat4 mProj; // r1+0x8
}

// Range: 0x80283EB8 -> 0x80283F78
void E3DWindow::SetLookAt(class E3DWindow * const this /* r24 */) {}

// Range: 0x80283F78 -> 0x80283FBC
void E3DWindow::SetLookAt(class E3DWindow * const this /* r31 */) {}

// Range: 0x80283FBC -> 0x80284010
void E3DWindow::SetViewport(class E3DWindow * const this /* r31 */) {}

// Range: 0x80284010 -> 0x80284064
void E3DWindow::CalcViewport() {}

// Range: 0x80284064 -> 0x802852EC
void E3DWindow::CalcViewportStructures(class E3DWindow * const this /* r31 */) {
    // Local variables
    float z; // f0
    class EVec4 vcam; // r1+0x1E8
    class EVec3 off; // r1+0x1D8
    class EVec3 scale; // r1+0x1CC
    class EVec3 v; // r1+0x1C0
    float d; // f3

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x802852EC -> 0x80285434
int E3DWindow::Test() {
    // Local variables
    float x; // f0
    float y; // f1
    float z; // f2
    float rad; // f3
    float d; // f4
    float dScreen; // f8
}

// Range: 0x80285434 -> 0x80285758
int E3DWindow::Test() {
    // Local variables
    unsigned char * boxPtr; // r0
    float x; // f1
    float y; // f5
    float z; // f5
    float dNear; // f2
    float dFar; // f1
    float dScreenNear; // f0
    float dScreenFar; // f1
    int flags; // r0
}

// Range: 0x80285758 -> 0x80285900
int E3DWindow::TestAsRect() {
    // Local variables
    unsigned char * boxPtr; // r0
    float x; // f0
    float y; // f3
    float dNear; // f2
    float dFar; // f1
}

// Range: 0x80285900 -> 0x802859E4
void E3DWindow::ProjectionMatrixChanged(class E3DWindow * const this /* r31 */) {}

// Range: 0x802859E4 -> 0x80285AC0
void E3DWindow::LookAtMatrixChanged(class E3DWindow * const this /* r31 */) {}

// Range: 0x80285AC0 -> 0x80285B00
void E3DWindow::CalcLookAtDotProjection(class E3DWindow * const this /* r31 */) {}

// Range: 0x80285B00 -> 0x80285C14
void E3DWindow::Select(class E3DWindow * const this /* r30 */, class ERC * prc /* r31 */) {}

// Range: 0x80285C14 -> 0x80285C68
void E3DWindow::InputCoordinatesChanged() {}

// Range: 0x80285C68 -> 0x80285CBC
void E3DWindow::OutputCoordinatesChanged() {}

// Range: 0x80285CBC -> 0x80285D7C
unsigned char E3DWindow::TransformToScreen(class E3DWindow * const this /* r30 */, class EVec2 & vScreenOut /* r31 */) {
    // Local variables
    class EVec4 vEye; // r1+0x18
    float q; // f3
}

// Range: 0x80285D7C -> 0x80285E60
unsigned char E3DWindow::TransformToScreen(class E3DWindow * const this /* r30 */, class EVec3 & vScreenOut /* r31 */, float zOffset /* f31 */) {
    // Local variables
    class EVec4 vEye; // r1+0x18
    float q; // f3
    float z; // f0
}

// Range: 0x80285E60 -> 0x80286040
unsigned char E3DWindow::TransformToWorld(class E3DWindow * const this /* r30 */, class EVec3 & vWorldOut /* r31 */) {
    // Local variables
    class EVec2 vView; // r1+0x10
    float right; // r1+0xC
    float bottom; // r1+0x8
}

// Range: 0x80286040 -> 0x80286060
void E3DWindow::GetFOVLengths() {}

// Range: 0x80286060 -> 0x80286078
void E3DWindow::SetFrustumType() {}

// Range: 0x80286078 -> 0x802860C8
void dummyTrace() {}

// Range: 0x802860C8 -> 0x80286F04
void E3DWindow::Get3DQuadFromScreenTrapAtZ(class E3DWindow * const this /* r29 */, float z /* f30 */, const float * trap /* r30 */, class Quad * quad /* r31 */) {
    // Local variables
    class EVec2 screenPos; // r1+0x28
    class EVec3 corner; // r1+0x23C
    class EVec3 temp; // r1+0x230
    float width; // f31
}


