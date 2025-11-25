/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\stringbuffer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016905C -> 0x801695DC
*/
// Range: 0x8016905C -> 0x80169094
void * StringBuffer::StringBuffer(class StringBuffer * const this /* r31 */) {}

// Range: 0x80169094 -> 0x8016909C
int StringBuffer::capacity() {}

// Range: 0x8016909C -> 0x801690A4
int StringBuffer::length() {}

// Range: 0x801690A4 -> 0x801690B4
void StringBuffer::erase() {}

// Range: 0x801690B4 -> 0x80169290
void StringBuffer::append(class StringBuffer * const this /* r27 */, const char * str /* r28 */, int len /* r29 */) {
    // Local variables
    int srcLen; // r3
    int myLen; // r0
    int i; // r30
}

// Range: 0x80169290 -> 0x80169298
char * StringBuffer::c_str() {}

// Range: 0x80169298 -> 0x801692A0
char * StringBuffer::buffer() {}

// Range: 0x801692A0 -> 0x801692E8
void StringBuffer::copy(class StringBuffer * const this /* r30 */, const char * str /* r31 */) {}

// Range: 0x801692E8 -> 0x80169330
void StringBuffer::copy(class StringBuffer * const this /* r30 */, const class StringBuffer & other /* r31 */) {}

// Range: 0x80169330 -> 0x8016937C
void StringBuffer::append(class StringBuffer * const this /* r30 */, int len /* r31 */) {}

// Range: 0x8016937C -> 0x801693C8
int StringBuffer::compare(const class StringBuffer * const this /* r30 */) {}

// Range: 0x801693C8 -> 0x80169428
int StringBuffer::compareNoCase(const class StringBuffer * const this /* r29 */, const class StringBuffer & other /* r30 */) {}

// Range: 0x80169428 -> 0x801694FC
int StringBuffer::compareNoCase(const class StringBuffer * const this /* r28 */, const char * s2 /* r29 */, int s2_len /* r30 */) {
    // Local variables
    const char * s1; // r0
    int len1; // r0
    int len; // r0
    int i; // r0
    char c1; // r4
    char c2; // r5
    int diff; // r0
}

// Range: 0x801694FC -> 0x8016955C
char StringBuffer::charAt(const class StringBuffer * const this /* r30 */, int pos /* r31 */) {}

// Range: 0x8016955C -> 0x80169590
void StringBuffer::appendChar() {
    // Local variables
    char str[2]; // r1+0x8
}

// Range: 0x80169590 -> 0x801695DC
void StringBuffer::appendNum(class StringBuffer * const this /* r31 */) {
    // Local variables
    char numStr[32]; // r1+0x8
}


