/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\ea\string\basic_string.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FE1F4 -> 0x802FEB84
*/
// Range: 0x802FE1F4 -> 0x802FE278
void * BasicString::~BasicString(class BasicString * const this /* r30 */) {}

// Range: 0x802FE278 -> 0x802FE284
void BasicString::__dl() {}

// Range: 0x802FE284 -> 0x802FE288
char * BasicString::ReAllocRaw() {}

// Range: 0x802FE288 -> 0x802FE28C
struct AptFileSavedInputState * BasicString::ReAlloc() {}

// Range: 0x802FE28C -> 0x802FE2A4
unsigned char BasicString::DoingSmallStringOptimization() {}

// Range: 0x802FE2A4 -> 0x802FE2FC
void * BasicString::BasicString(class BasicString * const this /* r31 */) {}

// Range: 0x802FE2FC -> 0x802FE308
void * UseCapacity::UseCapacity() {}

// Range: 0x802FE308 -> 0x802FE38C
void * BasicString::~BasicString(class BasicString * const this /* r30 */) {}

// Range: 0x802FE38C -> 0x802FE398
void BasicString::__dl() {}

// Range: 0x802FE398 -> 0x802FE39C
char * BasicString::ReAllocRaw() {}

// Range: 0x802FE39C -> 0x802FE3A0
class AptSharedPtr * BasicString::ReAlloc() {}

// Range: 0x802FE3A0 -> 0x802FE3B8
unsigned char BasicString::DoingSmallStringOptimization() {}

// Range: 0x802FE3B8 -> 0x802FE410
void * BasicString::BasicString(class BasicString * const this /* r31 */) {}

// Range: 0x802FE410 -> 0x802FE464
void BasicString::PushBack(class BasicString * const this /* r31 */, const struct AptFileSavedInputState & c /* r1+0x8 */) {}

// Range: 0x802FE464 -> 0x802FE6D0
void BasicString::Insert(class BasicString * const this /* r27 */, const struct AptFileSavedInputState * const & begin /* r28 */, const struct AptFileSavedInputState * const & end /* r29 */, const struct DbgIterator & at /* r30 */) {
    // Local variables
    int distance; // r26
    int newSize; // r31
    int newCapacity; // r26
    int insertPos; // r30
}

// Range: 0x802FE6D0 -> 0x802FE6E8
struct DbgIterator DbgIteratorBase::__pl() {}

// Range: 0x802FE6E8 -> 0x802FE718
void * DbgIterator::DbgIterator(struct DbgIterator * const this /* r31 */) {}

// Range: 0x802FE718 -> 0x802FE728
void * DbgIteratorBase::DbgIteratorBase() {}

// Range: 0x802FE728 -> 0x802FE850
void BasicString::Reserve(class BasicString * const this /* r29 */, int capacity /* r30 */) {
    // Local variables
    struct AptFileSavedInputState * string; // r31
}

// Range: 0x802FE850 -> 0x802FE880
struct AptFileSavedInputState & DbgIterator::__ml(const struct DbgIterator * const this /* r31 */) {}

// Range: 0x802FE880 -> 0x802FE8B4
void DbgIteratorBase::Validate() {}

// Range: 0x802FE8B4 -> 0x802FE8EC
struct DbgIterator DbgIteratorBase::__pp(class DbgIteratorBase * const this /* r31 */) {}

// Range: 0x802FE938 -> 0x802FE940
void UseCapacity::Capacity() {}

// Range: 0x802FE940 -> 0x802FE950
struct DbgIterator & DbgIteratorBase::__mm() {}

// Range: 0x802FE950 -> 0x802FE99C
int DbgIteratorBase::__mi(const class DbgIteratorBase * const this /* r30 */, const class DbgIteratorBase & other /* r31 */) {}

// Range: 0x802FE99C -> 0x802FE9D4
void DbgIteratorBase::AssertSameRange() {}

// Range: 0x802FE9D4 -> 0x802FEA20
unsigned char DbgIteratorBase::__eq(const class DbgIteratorBase * const this /* r30 */, const struct DbgIterator & other /* r31 */) {}

// Range: 0x802FEA20 -> 0x802FEA28
int UseCapacity::Capacity() {}

// Range: 0x802FEA28 -> 0x802FEA78
unsigned char DbgIteratorBase::__ne(const class DbgIteratorBase * const this /* r30 */, const struct DbgIterator & other /* r31 */) {}

// Range: 0x802FEA78 -> 0x802FEAC8
struct DbgIterator BasicString::End() {}

// Range: 0x802FEAC8 -> 0x802FEAD8
struct DbgIterator DbgIteratorFactory::End() {}

// Range: 0x802FEAD8 -> 0x802FEAE4
void * DbgIteratorFactory::DbgIteratorFactory() {}

// Range: 0x802FEAE4 -> 0x802FEAF4
struct DbgIterator & DbgIteratorBase::__pp() {}

// Range: 0x802FEAF4 -> 0x802FEB24
struct AptFileSavedInputState * DbgIterator::__rf(const struct DbgIterator * const this /* r31 */) {}

// Range: 0x802FEB24 -> 0x802FEB74
struct DbgIterator BasicString::Begin() {}

// Range: 0x802FEB74 -> 0x802FEB84
struct DbgIterator DbgIteratorFactory::Begin() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\ea\string\basic_string.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80323B28 -> 0x80324514
*/
// Range: 0x80323B28 -> 0x80323C80
void BasicString::Swap(class BasicString * const this /* r29 */, class BasicString & other /* r30 */) {
    // Local variables
    int size; // r5
    int capa; // r31
    unsigned char doingSmallString; // r0
    unsigned char otherDoingSmallString; // r0
    class AptSharedPtr * otherString; // r0
    class AptSharedPtr * string; // r4
    class AptSharedPtr s[2]; // r1+0x10
}

// Range: 0x80323C80 -> 0x80323DCC
void BasicString::Swap(class BasicString * const this /* r29 */, class BasicString & other /* r30 */) {
    // Local variables
    int size; // r5
    int capa; // r31
    unsigned char doingSmallString; // r0
    unsigned char otherDoingSmallString; // r0
    struct AptFileSavedInputState * otherString; // r0
    struct AptFileSavedInputState * string; // r4
    struct AptFileSavedInputState s[2]; // r1+0x10
}

// Range: 0x80323DCC -> 0x80323E1C
unsigned char DbgIteratorBase::__ne(const class DbgIteratorBase * const this /* r30 */, const struct DbgIterator & other /* r31 */) {}

// Range: 0x80323E1C -> 0x80323E54
void DbgIteratorBase::AssertSameRange() {}

// Range: 0x80323E54 -> 0x80323EA4
struct DbgIterator BasicString::End() {}

// Range: 0x80323EA4 -> 0x80323EB4
struct DbgIterator DbgIteratorFactory::End() {}

// Range: 0x80323EB4 -> 0x80323EE4
void * DbgIterator::DbgIterator(struct DbgIterator * const this /* r31 */) {}

// Range: 0x80323EE4 -> 0x80323EF4
void * DbgIteratorBase::DbgIteratorBase() {}

// Range: 0x80323EF4 -> 0x80323F00
void * DbgIteratorFactory::DbgIteratorFactory() {}

// Range: 0x80323F00 -> 0x80323F10
struct DbgIterator & DbgIteratorBase::__pp() {}

// Range: 0x80323F10 -> 0x80323F40
class AptSharedPtr & DbgIterator::__ml(const struct DbgIterator * const this /* r31 */) {}

// Range: 0x80323F40 -> 0x80323F74
void DbgIteratorBase::Validate() {}

// Range: 0x80323F74 -> 0x80323FC4
struct DbgIterator BasicString::Begin() {}

// Range: 0x80323FC4 -> 0x80323FD4
struct DbgIterator DbgIteratorFactory::Begin() {}

// Range: 0x80323FD4 -> 0x80323FDC
int BasicString::Size() {}

// Range: 0x80323FDC -> 0x80324030
void BasicString::PushBack(class BasicString * const this /* r31 */, const class AptSharedPtr & c /* r1+0x8 */) {}

// Range: 0x80324030 -> 0x803242A4
void BasicString::Insert(class BasicString * const this /* r27 */, const class AptSharedPtr * const & begin /* r28 */, const class AptSharedPtr * const & end /* r29 */, const struct DbgIterator & at /* r30 */) {
    // Local variables
    int distance; // r26
    int newSize; // r31
    int newCapacity; // r26
    int insertPos; // r30
}

// Range: 0x803242A4 -> 0x803242BC
struct DbgIterator DbgIteratorBase::__pl() {}

// Range: 0x803242BC -> 0x803243E8
void BasicString::Reserve(class BasicString * const this /* r29 */, int capacity /* r30 */) {
    // Local variables
    class AptSharedPtr * string; // r31
}

// Range: 0x803243E8 -> 0x80324420
struct DbgIterator DbgIteratorBase::__pp(class DbgIteratorBase * const this /* r31 */) {}

// Range: 0x8032446C -> 0x8032447C
struct DbgIterator & DbgIteratorBase::__mm() {}

// Range: 0x8032447C -> 0x803244C8
int DbgIteratorBase::__mi(const class DbgIteratorBase * const this /* r30 */, const class DbgIteratorBase & other /* r31 */) {}

// Range: 0x803244C8 -> 0x80324514
unsigned char DbgIteratorBase::__eq(const class DbgIteratorBase * const this /* r30 */, const struct DbgIterator & other /* r31 */) {}


