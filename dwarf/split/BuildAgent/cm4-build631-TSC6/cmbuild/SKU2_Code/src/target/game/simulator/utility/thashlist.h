/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\thashlist.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80140EC0 -> 0x801414F0
*/
// Range: 0x80140EC0 -> 0x80140EE8
unsigned char HashIterator::__ne() {}

// Range: 0x80140EE8 -> 0x80140F28
unsigned char HashIterator::__eq() {}

// Range: 0x80140F28 -> 0x80140F9C
class ObjSelector * * HashIterator::__pp() {}

// Range: 0x80140F9C -> 0x80140FA4
class ObjSelector * * HashIterator::__opPP11ObjSelector() {}

// Range: 0x80140FC0 -> 0x8014103C
struct HashIterator HashList::begin(struct HashIterator * result /* r30 */, struct HashList * const this /* r31 */) {}

// Range: 0x8014103C -> 0x80141080
struct HashIterator HashList::end(struct HashIterator * result /* r30 */, struct HashList * const this /* r31 */) {}

// Range: 0x80141080 -> 0x80141090
void * HashIterator::HashIterator() {}

// Range: 0x80141090 -> 0x801410E4
void * HashList::~HashList(struct HashList * const this /* r30 */) {}

// Range: 0x801410E4 -> 0x80141130
void HashList::clear(struct HashList * const this /* r30 */) {
    // Local variables
    int i; // r31
}

// Range: 0x80141130 -> 0x80141184
void HashList::resetHash() {
    // Local variables
    class ObjSelector * node; // r31
    class ObjSelector * tmp; // r0
}

// Range: 0x80141184 -> 0x801411BC
void * HashList::HashList(struct HashList * const this /* r31 */) {}

// Range: 0x801411BC -> 0x8014121C
int HashList::size(const struct HashList * const this /* r29 */) {
    // Local variables
    int i; // r31
    int result; // r30
}

// Range: 0x8014121C -> 0x80141244
int HashList::getSize() {
    // Local variables
    class ObjSelector * node; // r3
    int result; // r4
}

// Range: 0x80141244 -> 0x80141290
class ObjSelector * HashList::findItem(struct HashList * const this /* r30 */, const int & cmp /* r31 */) {
    // Local variables
    unsigned int key; // r0
}

// Range: 0x80141290 -> 0x8014131C
class ObjSelector * HashList::findItem(struct HashList * const this /* r27 */, const int & cmp /* r28 */) {
    // Local variables
    class ObjSelector * node; // r30
    class ObjSelector * prev; // r29
}

// Range: 0x8014131C -> 0x80141378
struct HashIterator HashList::find(struct HashList * const this /* r30 */, const int & cmp /* r31 */) {
    // Local variables
    unsigned int key; // r0
}

// Range: 0x80141378 -> 0x80141404
struct HashIterator HashList::find(struct HashIterator * result /* r27 */, struct HashList * const this /* r28 */, const int & cmp /* r29 */, unsigned int key /* r30 */) {
    // Local variables
    class ObjSelector * node; // r31
}

// Range: 0x80141404 -> 0x80141490
void HashList::removeNode(struct HashList * const this /* r30 */, class ObjSelector * node /* r31 */) {
    // Local variables
    unsigned int key; // r0
    class ObjSelector * prev; // r4
}

// Range: 0x80141490 -> 0x801414DC
void HashList::addNode(struct HashList * const this /* r30 */, class ObjSelector * node /* r31 */) {
    // Local variables
    unsigned int key; // r0
}

// Range: 0x801414DC -> 0x801414F0
void HashList::addNode() {}


/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\thashlist.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80212A1C -> 0x80212D2C
*/
// Range: 0x80212A1C -> 0x80212A70
void * HashList::~HashList(struct HashList * const this /* r30 */) {}

// Range: 0x80212A70 -> 0x80212ABC
void HashList::clear(struct HashList * const this /* r30 */) {
    // Local variables
    int i; // r31
}

// Range: 0x80212ABC -> 0x80212B10
void HashList::resetHash() {
    // Local variables
    class ECheatLookup * node; // r31
    class ECheatLookup * tmp; // r0
}

// Range: 0x80212B10 -> 0x80212B48
void * HashList::HashList(struct HashList * const this /* r31 */) {}

// Range: 0x80212B48 -> 0x80212B5C
void HashList::addNode() {}

// Range: 0x80212B5C -> 0x80212B64
class ECheatLookup * * HashIterator::__opPP12ECheatLookup() {}

// Range: 0x80212B64 -> 0x80212B8C
unsigned char HashIterator::__ne() {}

// Range: 0x80212B8C -> 0x80212BCC
unsigned char HashIterator::__eq() {}

// Range: 0x80212BCC -> 0x80212C10
struct HashIterator HashList::end(struct HashIterator * result /* r30 */, struct HashList * const this /* r31 */) {}

// Range: 0x80212C10 -> 0x80212C20
void * HashIterator::HashIterator() {}

// Range: 0x80212C3C -> 0x80212CB0
class ECheatLookup * * HashIterator::__pp() {}

// Range: 0x80212CB0 -> 0x80212D2C
struct HashIterator HashList::begin(struct HashIterator * result /* r30 */, struct HashList * const this /* r31 */) {}


