/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\rparticle.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802EB088 -> 0x802EB97C
*/
// Range: 0x802EB088 -> 0x802EB0EC
void * RParticle::RParticle() {
    // References
    // -> struct [anonymous] __vt__9RParticle;
}

// Range: 0x802EB0EC -> 0x802EB17C
void * RParticle::~RParticle(class RParticle * const this /* r30 */) {
    // References
    // -> class ParticleManager _particleman;
    // -> struct [anonymous] __vt__9EResource;
    // -> struct [anonymous] __vt__9RParticle;
}

// Range: 0x802EB17C -> 0x802EB1CC
void RParticle::Deallocate(class RParticle * const this /* r31 */) {
    // References
    // -> class ParticleManager _particleman;
}

// Range: 0x802EB1CC -> 0x802EB294
void RParticle::DelRefSubResources(class RParticle * const this /* r26 */) {
    // Local variables
    int i; // r27
}

// Range: 0x802EB294 -> 0x802EB374
void RParticle::AddRefSubResources(class RParticle * const this /* r27 */) {
    // Local variables
    struct pemitterinfo * pInfo; // r0
    unsigned int * resId; // r0
    int i; // r28
    unsigned int * resId; // r0
    unsigned int * resId; // r0

    // References
    // -> class EShaderManager _shaderman;
    // -> class EModelManager _modelman;
}

// Range: 0x802EB374 -> 0x802EB514
unsigned char RParticle::TryIncrementSubResources(class RParticle * const this /* r31 */) {
    // Local variables
    unsigned int * resId; // r0
    struct pemitterinfo * pInfo; // r0
    int i; // r26
    int undo; // r26
    int i; // r4

    // References
    // -> class EShaderManager _shaderman;
    // -> class EModelManager _modelman;
}

// Range: 0x802EB514 -> 0x802EB7B8
void RParticle::Load(class RParticle * const this /* r30 */, class EFile * pFile /* r25 */) {
    // Local variables
    class EDataHeader resourceHeader; // r1+0x1C
    struct ParticleHeader header; // r1+0x8
    unsigned char * buffer; // r26
    unsigned char * ptr; // r0
    int nameLen; // r3
    int size; // r5
    struct pemitterinfo * pInfo; // r31
    unsigned int iResId; // r4
    class EResource * * pResource; // r0
    int i; // r25
    unsigned int iResId; // r3
    class EResource * * pResource; // r0
    unsigned int iResId; // r4
    class EResource * * pResource; // r0

    // References
    // -> class EShaderManager _shaderman;
    // -> class EModelManager _modelman;
    // -> class ParticleManager _particleman;
}

// Range: 0x802EB7B8 -> 0x802EB924
void RParticle::Refresh(class RParticle * const this /* r28 */, class EFile * pFile /* r29 */) {
    // Local variables
    struct pemitterinfo * pInfo; // r31
    class EDataHeader resourceHeader; // r1+0x1C
    struct ParticleHeader header; // r1+0x8
    unsigned char * buffer; // r30
    char * ptr; // r0
    int nameLen; // r3
    int size; // r5
    int i; // r5
}


