/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_dataheader.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025FFB4 -> 0x80260274
*/
// Range: 0x8025FFB4 -> 0x8025FFEC
void * EDataHeader::EDataHeader(class EDataHeader * const this /* r31 */) {}

// Range: 0x8025FFEC -> 0x80260040
void * EDataHeader::~EDataHeader(class EDataHeader * const this /* r30 */) {}

// Range: 0x80260040 -> 0x80260098
void EDataHeader::Clear(class EDataHeader * const this /* r30 */) {}

// Range: 0x80260098 -> 0x8026026C
unsigned char EDataHeader::Read(class EDataHeader * const this /* r22 */, class EFile & f /* r23 */, unsigned int signature /* r24 */, unsigned int minVersion /* r25 */, unsigned int maxVersion /* r26 */) {
    // Local variables
    unsigned int pos; // r29
    int retryCnt; // r28
    unsigned int data[4]; // r1+0x8
    int nameLength; // r27
}

// Range: 0x8026026C -> 0x80260274
char * EDataHeader::GetName() {}


