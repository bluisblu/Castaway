/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\byte_key_map.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013BFAC -> 0x8013D158
*/
// Range: 0x8013BFAC -> 0x8013BFF4
void * byte_key_map::byte_key_map(class byte_key_map * const this /* r30 */, const class allocator & __a /* r31 */) {}

// Range: 0x8013BFF4 -> 0x8013C03C
void * byte_key_map::byte_key_map(class byte_key_map * const this /* r30 */, const class byte_key_map & __x /* r31 */) {}

// Range: 0x8013C03C -> 0x8013C040
struct pair byte_key_map::insert() {}

// Range: 0x8013C040 -> 0x8013C1CC
struct pair byte_key_map::insert_unique(class byte_key_map * const this /* r28 */, const struct pair & __v /* r29 */) {
    // Local variables
    unsigned long __keyIndex; // r30
    unsigned long nextIndex; // r31
    unsigned long findNext; // r3
}

// Range: 0x8013C1CC -> 0x8013C1E0
void * _Byte_key_map_iterator::_Byte_key_map_iterator() {}

// Range: 0x8013C1E0 -> 0x8013C20C
unsigned long byte_key_map::_M_do_find_key_index() {
    // Local variables
    unsigned long count; // r3
}

// Range: 0x8013C20C -> 0x8013C404
unsigned long byte_key_map::_M_do_count_to(const class byte_key_map * const this /* r23 */, unsigned long __pos /* r24 */) {
    // Local variables
    unsigned long __result; // r26
    class reference bitRef; // r1+0x10
    int wordCount; // r25
    int curWord; // r24
    unsigned int lastWord; // r1+0x8
    const unsigned char * __byte_ptr; // r3
    const unsigned char * __end_ptr; // r4

    // References
    // -> unsigned char _S_bit_count[256];
}

// Range: 0x8013C404 -> 0x8013C43C
unsigned long _WordCount::_M_count_bytes() {
    // Local variables
    unsigned long __result; // r4
    const unsigned char * __byte_ptr; // r0

    // References
    // -> unsigned char _S_bit_count[256];
}

// Range: 0x8013C43C -> 0x8013C460
void * _Byte_key_map_iterator::_Byte_key_map_iterator() {}

// Range: 0x8013C460 -> 0x8013C520
struct _Byte_key_map_iterator byte_key_map::_M_insert(class byte_key_map * const this /* r29 */, signed short * __position /* r31 */, const struct pair & __x /* r30 */) {
    // Local variables
    unsigned long __n; // r31
}

// Range: 0x8013C520 -> 0x8013C528
void byte_key_map::reserve() {}

// Range: 0x8013C528 -> 0x8013C530
void byte_key_map::reserve() {}

// Range: 0x8013C530 -> 0x8013C584
struct _Byte_key_map_iterator byte_key_map::end(class byte_key_map * const this /* r31 */) {}

// Range: 0x8013C5D8 -> 0x8013C5FC
void * _Byte_key_map_iterator::_Byte_key_map_iterator() {}

// Range: 0x8013C5FC -> 0x8013C600
struct _Byte_key_map_iterator byte_key_map::find() {}

// Range: 0x8013C600 -> 0x8013C6C4
struct _Byte_key_map_iterator byte_key_map::_M_find(const class byte_key_map * const this /* r30 */, const unsigned long & __key /* r31 */) {
    // Local variables
    unsigned long __keyIndex; // r7
}

// Range: 0x8013C6C4 -> 0x8013C6D8
void * _Byte_key_map_iterator::_Byte_key_map_iterator() {}

// Range: 0x8013C6D8 -> 0x8013C6E8
signed short & _Byte_key_map_iterator::value(const struct _Byte_key_map_iterator * const this /* r4 */) {}

// Range: 0x8013C6E8 -> 0x8013C718
unsigned char _Byte_key_map_base_iterator::__ne() {}

// Range: 0x8013C718 -> 0x8013C76C
struct _Byte_key_map_iterator byte_key_map::end(const class byte_key_map * const this /* r31 */) {}

// Range: 0x8013C76C -> 0x8013C780
void * _Byte_key_map_iterator::_Byte_key_map_iterator() {}

// Range: 0x8013C780 -> 0x8013C7BC
struct _Byte_key_map_iterator byte_key_map::find() {}

// Range: 0x8013C7BC -> 0x8013C7F8
signed short & byte_key_map::__vc(class byte_key_map * const this /* r31 */) {
    // Local variables
    unsigned long __i; // r0
}

// Range: 0x8013C7F8 -> 0x8013C808
signed short & _Byte_key_map_iterator::value(const struct _Byte_key_map_iterator * const this /* r4 */) {}

// Range: 0x8013C838 -> 0x8013C840
unsigned long _Byte_key_map_iterator::key() {}

// Range: 0x8013C840 -> 0x8013C870
struct _Byte_key_map_iterator & _Byte_key_map_iterator::__pp(struct _Byte_key_map_iterator * const this /* r31 */) {}

// Range: 0x8013C870 -> 0x8013C8D8
void _Byte_key_map_iterator::_M_increment(struct _Byte_key_map_iterator * const this /* r31 */) {
    // Local variables
    unsigned long newPos; // r0
}

// Range: 0x8013C8D8 -> 0x8013C93C
struct _Byte_key_map_iterator byte_key_map::begin(class byte_key_map * const this /* r31 */) {
    // Local variables
    unsigned long bitPos; // r6
}

// Range: 0x8013C93C -> 0x8013C96C
unsigned char _Byte_key_map_base_iterator::__eq() {}

// Range: 0x8013C96C -> 0x8013C9E0
void byte_key_map::erase(class byte_key_map * const this /* r30 */, struct _Byte_key_map_iterator & __position /* r31 */) {}

// Range: 0x8013C9E0 -> 0x8013CA2C
void byte_key_map::swap(class byte_key_map * const this /* r30 */, class byte_key_map & __x /* r31 */) {}

// Range: 0x8013CA2C -> 0x8013CA34
unsigned long byte_key_map::capacity() {}

// Range: 0x8013CA34 -> 0x8013CA3C
unsigned long byte_key_map::size() {}

// Range: 0x8013CA3C -> 0x8013CA4C
class byte_key_map & _Byte_key_map_iterator::value(const struct _Byte_key_map_iterator * const this /* r4 */) {}

// Range: 0x8013CA4C -> 0x8013CA7C
unsigned char _Byte_key_map_base_iterator::__ne() {}

// Range: 0x8013CA7C -> 0x8013CAD0
struct _Byte_key_map_iterator byte_key_map::end(class byte_key_map * const this /* r31 */) {}

// Range: 0x8013CAD0 -> 0x8013CAE4
void * _Byte_key_map_iterator::_Byte_key_map_iterator() {}

// Range: 0x8013CAE4 -> 0x8013CAE8
struct _Byte_key_map_iterator byte_key_map::find() {}

// Range: 0x8013CAE8 -> 0x8013CBAC
struct _Byte_key_map_iterator byte_key_map::_M_find(const class byte_key_map * const this /* r30 */, const unsigned long & __key /* r31 */) {
    // Local variables
    unsigned long __keyIndex; // r7
}

// Range: 0x8013CBAC -> 0x8013CBD8
unsigned long byte_key_map::_M_do_find_key_index() {
    // Local variables
    unsigned long count; // r3
}

// Range: 0x8013CBD8 -> 0x8013CDD0
unsigned long byte_key_map::_M_do_count_to(const class byte_key_map * const this /* r23 */, unsigned long __pos /* r24 */) {
    // Local variables
    unsigned long __result; // r26
    class reference bitRef; // r1+0x10
    int wordCount; // r25
    int curWord; // r24
    unsigned int lastWord; // r1+0x8
    const unsigned char * __byte_ptr; // r3
    const unsigned char * __end_ptr; // r4

    // References
    // -> unsigned char _S_bit_count[256];
}

// Range: 0x8013CDD0 -> 0x8013CDE4
void * _Byte_key_map_iterator::_Byte_key_map_iterator() {}

// Range: 0x8013CDE4 -> 0x8013CE00
void * _Byte_key_map_iterator::_Byte_key_map_iterator() {}

// Range: 0x8013CE00 -> 0x8013CE3C
class byte_key_map & byte_key_map::__vc(class byte_key_map * const this /* r31 */) {
    // Local variables
    unsigned long __i; // r0
}

// Range: 0x8013CE3C -> 0x8013CE40
struct pair byte_key_map::insert() {}

// Range: 0x8013CE40 -> 0x8013CFCC
struct pair byte_key_map::insert_unique(class byte_key_map * const this /* r28 */, const struct pair & __v /* r29 */) {
    // Local variables
    unsigned long __keyIndex; // r31
    unsigned long nextIndex; // r30
    unsigned long findNext; // r3
}

// Range: 0x8013CFCC -> 0x8013D01C
class byte_key_map & byte_key_map::__as(class byte_key_map * const this /* r30 */, const class byte_key_map & __x /* r31 */) {}

// Range: 0x8013D01C -> 0x8013D040
void * _Byte_key_map_iterator::_Byte_key_map_iterator() {}

// Range: 0x8013D040 -> 0x8013D110
struct _Byte_key_map_iterator byte_key_map::_M_insert(class byte_key_map * const this /* r29 */, class byte_key_map * __position /* r31 */, const struct pair & __x /* r30 */) {
    // Local variables
    unsigned long __n; // r31
}

// Range: 0x8013D110 -> 0x8013D158
void * byte_key_map::byte_key_map(class byte_key_map * const this /* r30 */, const class allocator & __a /* r31 */) {}


