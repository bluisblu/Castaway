/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\recon.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D5A38 -> 0x800D74F8
*/
// Range: 0x800D5A38 -> 0x800D5A70
void * ReconBuffer::ReconBuffer() {}

// Range: 0x800D5A70 -> 0x800D5AAC
void * ReconBuffer::ReconBuffer() {}

// Range: 0x800D5AAC -> 0x800D5B34
void * ReconBuffer::~ReconBuffer(class ReconBuffer * const this /* r30 */) {}

// Range: 0x800D5B34 -> 0x800D5B40
void ReconBuffer::EnableCompression() {}

// Range: 0x800D5B40 -> 0x800D5C64
void ReconBuffer::ReconCmprInt(class ReconBuffer * const this /* r29 */, int * value /* r30 */, class Scheme * sch /* r31 */) {
    // Local variables
    int nonZero; // r1+0x14
    int size; // r1+0x10
    int nonZero; // r1+0xC
    int size; // r1+0x8
    class Precision * p; // r31
}

// Range: 0x800D5C64 -> 0x800D5C80
void Precision::SignExtend() {}

// Range: 0x800D5C80 -> 0x800D5C88
int Precision::GetBitCount() {}

// Range: 0x800D5C88 -> 0x800D5C94
class Precision * Scheme::GetPrecision() {}

// Range: 0x800D5C94 -> 0x800D5D30
int Scheme::GetSize(class Scheme * const this /* r30 */, int intVal /* r31 */) {}

// Range: 0x800D5D30 -> 0x800D5D54
unsigned char Precision::Fits() {
    // Local variables
    int tmp; // r4
}

// Range: 0x800D5D54 -> 0x800D5F70
void ReconBuffer::ReconBits(class ReconBuffer * const this /* r29 */, int bitCount /* r30 */, int * bitVal /* r31 */) {
    // Local variables
    unsigned char * dest; // r4
    unsigned int mask; // r6
    unsigned int destMask; // r7
    unsigned char * src; // r5
    unsigned int mask; // r3
    unsigned int srcMask; // r7

    // References
    // -> static struct _FILE * dumpFile;
}

// Range: 0x800D5F70 -> 0x800D5F7C
void ReconBuffer::PadBits() {}

// Range: 0x800D5F7C -> 0x800D6180
void ReconBuffer::Recon8(class ReconBuffer * const this /* r28 */, signed char * value /* r31 */, int numelems /* r29 */) {
    // Local variables
    int intVal; // r1+0xC
    int intVal; // r1+0x8
    char * src; // r6
    char * dest; // [invalid]

    // References
    // -> static class Scheme scheme8;
}

// Range: 0x800D6180 -> 0x800D61D4
void ReconBuffer::ReconBool(unsigned char * value /* r31 */) {
    // Local variables
    signed char byte; // r1+0x8
}

// Range: 0x800D61D4 -> 0x800D6348
void ReconBuffer::Recon16(class ReconBuffer * const this /* r28 */, signed short * value /* r31 */, int numelems /* r29 */) {
    // Local variables
    int intVal; // r1+0xC
    int intVal; // r1+0x8
    char * src; // r6
    char * dest; // [invalid]

    // References
    // -> static class Scheme scheme16;
}

// Range: 0x800D6348 -> 0x800D634C
void ReconBuffer::ReconInt() {}

// Range: 0x800D634C -> 0x800D64E0
void ReconBuffer::Recon32(class ReconBuffer * const this /* r28 */, int * value /* r31 */, int numelems /* r29 */) {
    // Local variables
    int intVal; // r1+0xC
    int intVal; // r1+0x8
    char * src; // r6
    char * dest; // [invalid]

    // References
    // -> static class Scheme scheme32;
}

// Range: 0x800D64E0 -> 0x800D6674
void ReconBuffer::ReconFloat(class ReconBuffer * const this /* r28 */, float * value /* r31 */, int numelems /* r29 */) {
    // Local variables
    int intVal; // r1+0xC
    int intVal; // r1+0x8
    char * src; // r6
    char * dest; // [invalid]

    // References
    // -> static class Scheme scheme32;
}

// Range: 0x800D6674 -> 0x800D676C
void ReconBuffer::ReconMark(class ReconBuffer * const this /* r31 */) {
    // Local variables
    int * lastMark; // r3
    signed char * src; // r0
    signed char * dest; // r0
    signed char * dest; // r3
    signed char * src; // r5
    signed char * dest; // r3
}

// Range: 0x800D676C -> 0x800D67B8
void ReconBuffer::ReadToNextMark(class ReconBuffer * const this /* r31 */) {}

// Range: 0x800D67B8 -> 0x800D690C
void ReconBuffer::ReconString(class ReconBuffer * const this /* r29 */, class BString & str /* r30 */) {
    // Local variables
    int index; // r31
    const char * cstr; // r4
}

// Range: 0x800D690C -> 0x800D6BB4
void ReconBuffer::ReconString(class ReconBuffer * const this /* r30 */, class BString2 & str /* r31 */) {
    // Local variables
    int index; // r28
    const char * cstr; // r4
    unsigned short * out; // r6
    unsigned char * pOffset; // r0
    unsigned char pTempValue; // r5
    unsigned short curChar; // r1+0x8
    unsigned int i; // r27
    unsigned int strLength; // r0
    unsigned short * out; // r27
}

// Range: 0x800D6BB4 -> 0x800D6CFC
void ReconBuffer::ReconString(class ReconBuffer * const this /* r29 */, class StringBuffer & str /* r30 */) {
    // Local variables
    int index; // r31
}

// Range: 0x800D6CFC -> 0x800D6F54
void ReconBuffer::ReconString(class ReconBuffer * const this /* r30 */, class StringBuffer2 & str /* r31 */) {
    // Local variables
    int index; // r27
    unsigned short * out; // r4
    int len; // r0
    int i; // r26
    unsigned short * out; // r26
}

// Range: 0x800D6F54 -> 0x800D7094
struct HandleNode * ReconBuilder::Compact(class ReconBuilder * const this /* r24 */, class ReconObject * recon /* r25 */, int version /* r26 */) {
    // Local variables
    int size; // r29
    class ReconBuffer rb; // r1+0x30
    struct HandleNode * hmem; // r28
    unsigned char * data; // r27
    class ReconBuffer rb2; // r1+0x8
}

// Range: 0x800D7094 -> 0x800D71B0
int ReconBuilder::Compact(class ReconBuilder * const this /* r27 */, class ReconObject * recon /* r28 */, int version /* r30 */, class iResFile * pFile /* r29 */, signed short id /* r31 */) {
    // Local variables
    struct HandleNode * res; // r30
    class StackString empty; // r1+0x8
    int err; // r31
}

// Range: 0x800D71B0 -> 0x800D7254
int ReconBuilder::Reconstitute(class ReconBuilder * const this /* r27 */, class ReconObject * recon /* r28 */, class iResFile * pFile /* r29 */, signed short id /* r30 */, int * version /* r31 */) {
    // Local variables
    struct HandleNode * res; // r5
}

// Range: 0x800D7254 -> 0x800D7354
void ReconBuilder::Reconstitute(class ReconBuilder * const this /* r27 */, class ReconObject * recon /* r28 */, struct HandleNode * hmem /* r29 */, int * version /* r30 */) {
    // Local variables
    unsigned char * data; // r0
    int headerType; // r1+0x10
    unsigned int headerSwizzle; // r1+0xC
    unsigned int headerVersion; // r1+0x8
    class ReconBuffer rb; // r1+0x18
}

// Range: 0x800D7354 -> 0x800D7394
void ReconBuilder::Swizzle(void * recon /* r31 */) {
    // Local variables
    struct Header * rh; // r0
}

// Range: 0x800D7394 -> 0x800D73B8
void ReconBuilder::SwapFourByteNumber() {
    // Local variables
    unsigned char * pFakeArray; // r0
    unsigned char nBuffer; // r6
}

// Range: 0x800D73B8 -> 0x800D73F8
void * ReconObject::~ReconObject(class ReconObject * const this /* r31 */) {}

// Range: 0x800D73F8 -> 0x800D73FC
void ReconObject::DoStream() {}

// Range: 0x800D73FC -> 0x800D7408
int ReconObject::GetType() {}

// Range: 0x800D7408 -> 0x800D74C8
void * Scheme::Scheme(class Scheme * const this /* r25 */, int bcnt0 /* r26 */, int bcnt1 /* r27 */, int bcnt2 /* r28 */, int bcnt3 /* r29 */) {}

// Range: 0x800D74DC -> 0x800D74F4
void * Precision::Precision() {}

// Range: 0x800D74F4 -> 0x800D74F8
void * Precision::Precision() {}


