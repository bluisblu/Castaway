/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\effects\frameeffects.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028202C -> 0x802828C8
*/
// Range: 0x8028202C -> 0x80282098
void FrameEffect::Enable(class FrameEffect * const this /* r31 */) {}

// Range: 0x80282098 -> 0x8028212C
void FrameEffect::Update(class FrameEffect * const this /* r30 */, class ERC * rc /* r31 */) {}

// Range: 0x8028212C -> 0x8028214C
unsigned char FrameEffect::IsEffectRamping() {}

// Range: 0x8028214C -> 0x80282164
unsigned char FrameEffect::IsEffectRunning() {}

// Range: 0x80282164 -> 0x80282224
void FrameEffect::UpdateEffectState(class FrameEffect * const this /* r31 */) {}

// Range: 0x80282224 -> 0x802822F8
void MotionBlur::UpdateTargetParameters(class MotionBlur * const this /* r31 */, float elapsedTime /* f31 */) {}

// Range: 0x802822F8 -> 0x80282360
static float InterpolateLinear() {}

// Range: 0x80282360 -> 0x8028238C
void MotionBlur::EffectStateChanged() {}

// Range: 0x8028238C -> 0x802823A4
unsigned char MotionBlur::EffectIsFinishedFadingIn() {}

// Range: 0x802823A4 -> 0x802823BC
unsigned char MotionBlur::EffectIsFinishedFadingOut() {}

// Range: 0x802823BC -> 0x80282500
void Bloom::UpdateTargetParameters() {
    // Local variables
    int i; // r0
}

// Range: 0x80282500 -> 0x8028256C
void Bloom::EffectStateChanged() {}

// Range: 0x8028256C -> 0x80282584
unsigned char Bloom::EffectIsFinishedFadingIn() {}

// Range: 0x80282584 -> 0x8028259C
unsigned char Bloom::EffectIsFinishedFadingOut() {}

// Range: 0x8028259C -> 0x80282748
void DepthOfField::UpdateTargetParameters(class DepthOfField * const this /* r31 */, float elapsedTime /* f31 */) {}

// Range: 0x80282748 -> 0x8028285C
static class EVec3 InterpolateLinear() {}

// Range: 0x8028285C -> 0x80282898
void DepthOfField::EffectStateChanged() {}

// Range: 0x80282898 -> 0x802828B0
unsigned char DepthOfField::EffectIsFinishedFadingIn() {}

// Range: 0x802828B0 -> 0x802828C8
unsigned char DepthOfField::EffectIsFinishedFadingOut() {}


