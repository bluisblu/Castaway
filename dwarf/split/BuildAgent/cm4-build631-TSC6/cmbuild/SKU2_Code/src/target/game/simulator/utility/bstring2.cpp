/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\bstring2.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801650B4 -> 0x80167090
*/
// Range: 0x801650B4 -> 0x801650FC
void basic_string_ref2::delete_ptr(class basic_string_ref2 * const this /* r31 */) {}

// Range: 0x801650FC -> 0x80165138
void simple_allocator2::deallocate(void * p /* r31 */) {}

// Range: 0x80165138 -> 0x8016513C
void basic_string_ref2::throwlength() {}

// Range: 0x8016513C -> 0x80165140
void basic_string_ref2::throwrange() {}

// Range: 0x80165140 -> 0x80165198
void BString2::delete_ref(class BString2 * const this /* r31 */) {}

// Range: 0x80165198 -> 0x801651CC
void simple_allocator2::deallocate(void * p /* r31 */) {}

// Range: 0x801651CC -> 0x801651D8
unsigned long BString2::ref_count() {}

// Range: 0x801651D8 -> 0x801651E4
unsigned short * BString2::point() {}

// Range: 0x801651E4 -> 0x801651F0
unsigned long & BString2::len() {}

// Range: 0x801651F0 -> 0x80165244
unsigned short BString2::get_at(const class BString2 * const this /* r30 */, unsigned long pos /* r31 */) {}

// Range: 0x80165244 -> 0x80165288
unsigned short * BString2::data(const class BString2 * const this /* r31 */) {}

// Range: 0x80165288 -> 0x801652E0
unsigned short BString2::__vc(const class BString2 * const this /* r30 */, unsigned long pos /* r31 */) {}

// Range: 0x801652E0 -> 0x801652E4
unsigned short basic_string_ref2::eos() {}

// Range: 0x801652E4 -> 0x801652EC
unsigned short string_wchar_baggage::eos() {}

// Range: 0x801652EC -> 0x801652FC
void * basic_string_ref2::basic_string_ref2() {}

// Range: 0x801652FC -> 0x80165308
void string_wchar_baggage::assign() {}

// Range: 0x80165308 -> 0x80165350
unsigned short * simple_allocator2::allocate(unsigned long n /* r31 */) {}

// Range: 0x80165350 -> 0x8016540C
void * basic_string_ref2::basic_string_ref2(class basic_string_ref2 * const this /* r29 */, const class BString2 & str /* r30 */, unsigned long pos /* r31 */) {}

// Range: 0x8016540C -> 0x80165414
unsigned short * string_wchar_baggage::copy() {}

// Range: 0x80165414 -> 0x801654B8
void * basic_string_ref2::basic_string_ref2(class basic_string_ref2 * const this /* r30 */, const unsigned short * s /* r31 */) {}

// Range: 0x801654B8 -> 0x8016556C
void * basic_string_ref2::basic_string_ref2(class basic_string_ref2 * const this /* r29 */, const unsigned short * s /* r30 */, unsigned long n /* r31 */) {}

// Range: 0x8016556C -> 0x80165628
void * basic_string_ref2::basic_string_ref2(class basic_string_ref2 * const this /* r30 */, const unsigned short * s /* r31 */) {}

// Range: 0x80165628 -> 0x8016563C
unsigned long string_wchar_baggage::length() {}

// Range: 0x8016563C -> 0x80165690
void * basic_string_ref2::~basic_string_ref2(class basic_string_ref2 * const this /* r30 */) {}

// Range: 0x80165690 -> 0x80165694
unsigned short BString2::eos() {}

// Range: 0x80165694 -> 0x801657A8
void BString2::assign_str(class BString2 * const this /* r28 */, const unsigned short * s /* r29 */, unsigned long slen /* r30 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x801657A8 -> 0x801657D4
class basic_string_ref2 * simple_allocator2::allocate() {}

// Range: 0x801657D4 -> 0x80165920
void BString2::append_str(class BString2 * const this /* r26 */, const unsigned short * s /* r27 */, unsigned long slen /* r28 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80165920 -> 0x80165BB8
void BString2::replace_str(class BString2 * const this /* r24 */, unsigned long xlen /* r25 */, unsigned long pos /* r26 */, const unsigned short * s /* r27 */, unsigned long slen /* r28 */) {
    // Local variables
    void * ptr; // r0
    unsigned long count; // r20
}

// Range: 0x80165BB8 -> 0x80165C84
int BString2::compare_str(const class BString2 * const this /* r27 */, unsigned long pos /* r28 */, const unsigned short * str /* r29 */, unsigned long slen /* r30 */, unsigned long strlen /* r31 */) {
    // Local variables
    int result; // r3
}

// Range: 0x80165C84 -> 0x80165C8C
int string_wchar_baggage::compare() {}

// Range: 0x80165C8C -> 0x80165DA0
unsigned long BString2::find_str(const class BString2 * const this /* r30 */, const unsigned short * s /* r24 */, unsigned long len /* r31 */) {
    // Local variables
    unsigned long count; // r25
    unsigned long shift; // r0
    unsigned long place; // r24
}

// Range: 0x80165DA0 -> 0x80165DBC
unsigned char string_wchar_baggage::ne() {}

// Range: 0x80165DBC -> 0x80165DD8
void * BString2::BString2() {
    // References
    // -> class basic_string_ref2 defaultReference;
}

// Range: 0x80165DD8 -> 0x80165EC4
void * BString2::BString2(class BString2 * const this /* r28 */, const class BString2 & str /* r29 */, unsigned long pos /* r30 */, unsigned long n /* r31 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80165EC4 -> 0x80165F50
void * BString2::BString2(class BString2 * const this /* r28 */, const unsigned short * s /* r29 */, unsigned long rlen /* r30 */, unsigned long xlen /* r31 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80165F50 -> 0x80165FBC
void * BString2::BString2(class BString2 * const this /* r29 */, const unsigned short * s /* r30 */, unsigned long n /* r31 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80165FBC -> 0x80166018
void * BString2::BString2(class BString2 * const this /* r30 */, const unsigned short * s /* r31 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80166018 -> 0x80166080
void * BString2::~BString2(class BString2 * const this /* r30 */) {}

// Range: 0x80166080 -> 0x80166138
class BString2 & BString2::__as(class BString2 * const this /* r29 */, const class BString2 & str /* r30 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80166138 -> 0x80166188
class BString2 & BString2::__as(class BString2 * const this /* r30 */, const unsigned short * s /* r31 */) {}

// Range: 0x80166188 -> 0x801661EC
class BString2 & BString2::__apl(class BString2 * const this /* r29 */, const class BString2 & rhs /* r30 */) {}

// Range: 0x801661EC -> 0x8016623C
class BString2 & BString2::__apl(class BString2 * const this /* r30 */, const unsigned short * s /* r31 */) {}

// Range: 0x8016623C -> 0x801662E0
class BString2 & BString2::append(class BString2 * const this /* r28 */, const class BString2 & str /* r29 */, unsigned long pos /* r30 */, unsigned long n /* r31 */) {}

// Range: 0x801662E0 -> 0x80166330
class BString2 & BString2::append(class BString2 * const this /* r30 */, const unsigned short * s /* r31 */) {}

// Range: 0x80166330 -> 0x80166418
class BString2 & BString2::assign(class BString2 * const this /* r28 */, const class BString2 & str /* r29 */, unsigned long pos /* r30 */, unsigned long n /* r31 */) {}

// Range: 0x80166418 -> 0x80166468
class BString2 & BString2::assign(class BString2 * const this /* r30 */, const unsigned short * s /* r31 */) {}

// Range: 0x80166468 -> 0x80166630
class BString2 & BString2::erase(class BString2 * const this /* r30 */, unsigned long pos /* r25 */, unsigned long n /* r31 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80166630 -> 0x801666F4
class BString2 & BString2::replace(class BString2 * const this /* r26 */, unsigned long pos1 /* r27 */, unsigned long n1 /* r28 */, const class BString2 & str /* r29 */, unsigned long pos2 /* r30 */, unsigned long n2 /* r31 */) {}

// Range: 0x801666F4 -> 0x80166780
class BString2 & BString2::replace(class BString2 * const this /* r28 */, unsigned long pos /* r29 */, unsigned long n1 /* r30 */, const unsigned short * s /* r31 */) {}

// Range: 0x80166780 -> 0x80166AF0
class BString2 & BString2::replace(class BString2 * const this /* r24 */, unsigned long pos /* r25 */, unsigned long n /* r21 */, unsigned short c /* r1+0x8 */, unsigned long rep /* r26 */) {
    // Local variables
    unsigned long count; // r21
    class basic_string_ref2 * tmp; // r0
    void * ptr; // r0
}

// Range: 0x80166AF0 -> 0x80166BB4
unsigned short & BString2::__vc(class BString2 * const this /* r27 */, unsigned long pos /* r28 */) {
    // Local variables
    void * ptr; // r0
}

// Range: 0x80166BB4 -> 0x80166BE4
unsigned short * BString2::c_str() {
    // Local variables
    const unsigned short * result; // r0
}

// Range: 0x80166BE4 -> 0x80166C54
unsigned long BString2::find(const class BString2 * const this /* r28 */, const class BString2 & str /* r29 */, unsigned long pos /* r30 */) {}

// Range: 0x80166C54 -> 0x80166CE8
unsigned long BString2::find(const class BString2 * const this /* r29 */, unsigned short c /* r1+0x8 */, unsigned long pos /* r30 */) {}

// Range: 0x80166CE8 -> 0x80166DA4
class BString2 BString2::substr(const class BString2 * const this /* r29 */, unsigned long pos /* r30 */, unsigned long n /* r31 */) {}

// Range: 0x80166DA4 -> 0x80166E28
int BString2::compare(const class BString2 * const this /* r27 */, const class BString2 & str /* r28 */, unsigned long pos /* r29 */, unsigned long n /* r30 */) {}

// Range: 0x80166E28 -> 0x80166E9C
int BString2::compare(const class BString2 * const this /* r28 */, const unsigned short * s /* r29 */, unsigned long pos /* r30 */) {}

// Range: 0x80166E9C -> 0x80166F80
class BString2 __pl(const class BString2 & lhs /* r30 */, unsigned short rhs /* r1+0x8 */) {
    // Local variables
    class BString2 tmp; // r1+0xC
}

// Range: 0x80166F80 -> 0x80166FB0
unsigned char BString2::__eq() {}

// Range: 0x80166FB0 -> 0x80166FE4
unsigned char BString2::__ne() {}

// Range: 0x80166FE4 -> 0x80166FF0
unsigned long BString2::length() {}

// Range: 0x80166FF0 -> 0x80166FFC
unsigned long BString2::reserve() {}

// Range: 0x80166FFC -> 0x80167090
class BString2 & BString2::assignDebug(class BString2 * const this /* r28 */) {
    // Local variables
    int len; // r30
    unsigned short * s; // r29
}


