/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\e_ipointlight.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80085ABC -> 0x80085F5C
*/
// Range: 0x80085ABC -> 0x80085B60
void * EIPointLight::EIPointLight(class EIPointLight * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__12EIPointLight;
}

// Range: 0x80085B60 -> 0x80085BBC
void EIPointLight::Write(class EIPointLight * const this /* r30 */, class EStream & s /* r31 */) {}

// Range: 0x80085BBC -> 0x80085C28
void EIPointLight::Read(class EIPointLight * const this /* r30 */, class EStream & s /* r31 */) {}

// Range: 0x80085C28 -> 0x80085CFC
void EIPointLight::CalcFullIntensityLightOnPoint(class EIPointLight * const this /* r30 */, float & intensity /* r31 */) {
    // Local variables
    class EVec3 vDelta; // r1+0x8
    float distance; // f0
    float distanceFactor; // f2
}

// Range: 0x80085CFC -> 0x80085E24
void EIPointLight::LightingParameters(class EIPointLight * const this /* r28 */, class EVec3 & vDirectionOut /* r29 */, class EVec3 & vLightColorOut /* r30 */) {
    // Local variables
    class EVec3 is; // r1+0x2C
}

// Range: 0x80085E24 -> 0x80085ED0
void EIPointLight::SetPosition(class EIPointLight * const this /* r30 */, const class EVec3 & vPos /* r31 */) {
    // Local variables
    signed short loc; // r1+0xA
    signed short lightLoc; // r1+0x8
    int x; // r4
    int y; // r5

    // References
    // -> unsigned char m_haveLightsChanged;
}

// Range: 0x80085ED0 -> 0x80085F5C
void EIPointLight::Setup(class EIPointLight * const this /* r31 */) {
    // Local variables
    class EBound3 b; // r1+0x20
}


