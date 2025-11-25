/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\stringbuffer2.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801695DC -> 0x80169B78
*/
// Range: 0x801695DC -> 0x80169614
void * StringBuffer2::StringBuffer2(class StringBuffer2 * const this /* r31 */) {}

// Range: 0x80169614 -> 0x8016961C
int StringBuffer2::capacity() {}

// Range: 0x8016961C -> 0x80169624
int StringBuffer2::length() {}

// Range: 0x80169624 -> 0x80169634
void StringBuffer2::erase() {}

// Range: 0x80169634 -> 0x80169834
void StringBuffer2::append(class StringBuffer2 * const this /* r27 */, const unsigned short * str /* r28 */, int len /* r29 */) {
    // Local variables
    int srcLen; // r4
    int myLen; // r0
    int i; // r30
}

// Range: 0x80169834 -> 0x8016983C
unsigned short * StringBuffer2::c_str() {}

// Range: 0x8016983C -> 0x80169844
unsigned short * StringBuffer2::buffer() {}

// Range: 0x80169844 -> 0x8016988C
void StringBuffer2::copy(class StringBuffer2 * const this /* r30 */, const unsigned short * str /* r31 */) {}

// Range: 0x8016988C -> 0x801698D4
void StringBuffer2::copy(class StringBuffer2 * const this /* r30 */, const class StringBuffer2 & other /* r31 */) {}

// Range: 0x801698D4 -> 0x80169920
void StringBuffer2::append(class StringBuffer2 * const this /* r30 */, int len /* r31 */) {}

// Range: 0x80169920 -> 0x80169980
unsigned short StringBuffer2::charAt(const class StringBuffer2 * const this /* r30 */, int pos /* r31 */) {}

// Range: 0x80169980 -> 0x801699E0
unsigned short * StringBuffer2::AddrAt(class StringBuffer2 * const this /* r30 */, int pos /* r31 */) {}

// Range: 0x801699E0 -> 0x80169A3C
void StringBuffer2::appendNum(class StringBuffer2 * const this /* r31 */) {
    // Local variables
    char numStr[32]; // r1+0x8
    unsigned short numStr2[32]; // r1+0x28
}

// Range: 0x80169A3C -> 0x80169AF8
int StringBuffer2::find(const class StringBuffer2 * const this /* r24 */, const unsigned short * str /* r25 */, int startPos /* r26 */) {
    // Local variables
    int len; // r0
    int max; // r29
    int i; // [invalid]
    unsigned char found; // r28
    int j; // r27
    unsigned short c1; // r0
}

// Range: 0x80169AF8 -> 0x80169B78
void StringBuffer2::assignDebug(class StringBuffer2 * const this /* r28 */, const char * str /* r29 */) {
    // Local variables
    int len; // r31
    unsigned short * s; // r30
}


