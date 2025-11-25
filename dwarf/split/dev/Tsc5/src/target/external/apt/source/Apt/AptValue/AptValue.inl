/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FFE20 -> 0x80300070
*/
// Range: 0x802FFE20 -> 0x802FFE30
void AptValue::setGCRoot() {}

// Range: 0x802FFE30 -> 0x802FFE70
void * AptValue::~AptValue(class AptValue * const this /* r31 */) {}

// Range: 0x802FFE70 -> 0x802FFF0C
void * AptValue::AptValue(class AptValue * const this /* r31 */) {
    // References
    // -> unsigned int snCurrentAllocationNumber;
    // -> struct [anonymous] __vt__8AptValue;
}

// Range: 0x802FFF0C -> 0x802FFF1C
void AptValue::ClearReleaseAtEnd() {}

// Range: 0x802FFF1C -> 0x802FFF2C
void AptValue::SetMaxRefCountHit() {}

// Range: 0x802FFF2C -> 0x802FFF3C
void AptValue::setGCMark() {}

// Range: 0x802FFF3C -> 0x802FFF4C
void AptValue::setIsDefined() {}

// Range: 0x802FFF4C -> 0x802FFF94
void AptValue::setRefCount(class AptValue * const this /* r31 */) {}

// Range: 0x802FFF94 -> 0x802FFFA4
void AptValue::setVtblIndex() {}

// Range: 0x802FFFA4 -> 0x802FFFCC
unsigned char AptValue::isUndefined() {}

// Range: 0x802FFFCC -> 0x802FFFD8
unsigned char AptValue::getIsDefined() {}

// Range: 0x802FFFD8 -> 0x802FFFE8
enum AptVirtualFunctionTable_Indices AptValue::getVtblIndex() {}

// Range: 0x802FFFE8 -> 0x802FFFF8
void AptValue::SetReleaseAtEnd() {}

// Range: 0x802FFFF8 -> 0x802FFFFC
class AptCIH * AptValue::c_cih() {}

// Range: 0x802FFFFC -> 0x80300070
unsigned char AptValue::isCIH(const class AptValue * const this /* r29 */, unsigned char bUndefOK /* r30 */) {
    // Local variables
    enum AptVirtualFunctionTable_Indices eType; // r0
}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030B600 -> 0x8030BBB4
*/
// Range: 0x8030B600 -> 0x8030B6D4
void * AptValue::AptValue(class AptValue * const this /* r30 */, enum AptVirtualFunctionTable_Indices eType /* r31 */) {
    // References
    // -> class AptValueVector * gpValuesToRelease;
    // -> unsigned int snCurrentAllocationNumber;
    // -> struct [anonymous] __vt__8AptValue;
}

// Range: 0x8030B6D4 -> 0x8030B714
class AptString * AptValue::c_string(const class AptValue * const this /* r31 */) {
    // Local variables
    enum AptVirtualFunctionTable_Indices t; // r0
}

// Range: 0x8030B714 -> 0x8030B774
unsigned char AptValue::isString(const class AptValue * const this /* r30 */) {
    // Local variables
    enum AptVirtualFunctionTable_Indices t; // r0
}

// Range: 0x8030B774 -> 0x8030B7D4
unsigned char AptValue::isScriptFunction(const class AptValue * const this /* r30 */) {
    // Local variables
    enum AptVirtualFunctionTable_Indices eType; // r0
}

// Range: 0x8030B7D4 -> 0x8030B82C
unsigned char AptValue::isNativeFunction(const class AptValue * const this /* r30 */) {}

// Range: 0x8030B82C -> 0x8030B858
unsigned char AptValue::isNone() {}

// Range: 0x8030B858 -> 0x8030B8B0
unsigned char AptValue::isFloat(const class AptValue * const this /* r30 */) {}

// Range: 0x8030B8B0 -> 0x8030B908
unsigned char AptValue::isInteger(const class AptValue * const this /* r30 */) {}

// Range: 0x8030B908 -> 0x8030B90C
class AptBoolean * AptValue::c_boolean() {}

// Range: 0x8030B90C -> 0x8030B964
unsigned char AptValue::isBoolean(const class AptValue * const this /* r30 */) {}

// Range: 0x8030B964 -> 0x8030B9BC
unsigned char AptValue::isObject(const class AptValue * const this /* r30 */) {}

// Range: 0x8030B9BC -> 0x8030B9C0
class AptScriptFunctionBase * AptValue::c_scriptfunction() {}

// Range: 0x8030B9D4 -> 0x8030B9D8
class AptNativeFunction * AptValue::c_nativefunction() {}

// Range: 0x8030B9D8 -> 0x8030B9DC
class AptInteger * AptValue::c_integer() {}

// Range: 0x8030B9DC -> 0x8030B9E0
class AptArray * AptValue::c_array() {}

// Range: 0x8030B9E0 -> 0x8030BA38
unsigned char AptValue::isArray(const class AptValue * const this /* r30 */) {}

// Range: 0x8030BA38 -> 0x8030BA90
unsigned char AptValue::isExtern(const class AptValue * const this /* r30 */) {}

// Range: 0x8030BA90 -> 0x8030BA9C
unsigned int AptValue::getRefCount() {}

// Range: 0x8030BA9C -> 0x8030BAA0
class AptObject * AptValue::c_object() {}

// Range: 0x8030BAA0 -> 0x8030BAA4
class AptPrototype * AptValue::c_prototype() {}

// Range: 0x8030BAA4 -> 0x8030BAFC
unsigned char AptValue::isPrototype(const class AptValue * const this /* r30 */) {}

// Range: 0x8030BAFC -> 0x8030BB00
class AptRegister * AptValue::c_register() {}

// Range: 0x8030BB00 -> 0x8030BB58
unsigned char AptValue::isRegister(const class AptValue * const this /* r30 */) {}

// Range: 0x8030BB58 -> 0x8030BB5C
class AptLookup * AptValue::c_lookup() {}

// Range: 0x8030BB5C -> 0x8030BBB4
unsigned char AptValue::isLookup(const class AptValue * const this /* r30 */) {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80317700 -> 0x80317760
*/
// Range: 0x80317700 -> 0x80317704
class AptTextFormat * AptValue::c_textformat() {}

// Range: 0x80317704 -> 0x8031775C
unsigned char AptValue::isTextFormat(const class AptValue * const this /* r30 */) {}

// Range: 0x8031775C -> 0x80317760
class AptFloat * AptValue::c_float() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031D968 -> 0x8031D96C
*/
// Range: 0x8031D968 -> 0x8031D96C
class AptDate * AptValue::c_date() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80320900 -> 0x80320918
*/
// Range: 0x80320900 -> 0x8032090C
unsigned char AptValue::getGCMark() {}

// Range: 0x8032090C -> 0x80320918
unsigned int AptValue::getGCRoot() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80327A70 -> 0x80327ACC
*/
// Range: 0x80327A70 -> 0x80327AC8
unsigned char AptValue::isKey(const class AptValue * const this /* r30 */) {}

// Range: 0x80327AC8 -> 0x80327ACC
class AptLoadVars * AptValue::c_loadvars() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032A59C -> 0x8032A5F8
*/
// Range: 0x8032A59C -> 0x8032A5A0
class AptSound * AptValue::c_sound() {}

// Range: 0x8032A5A0 -> 0x8032A5F8
unsigned char AptValue::isSound(const class AptValue * const this /* r30 */) {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032F180 -> 0x8032F198
*/
// Range: 0x8032F180 -> 0x8032F18C
unsigned char AptValue::IsReleaseAtEnd() {}

// Range: 0x8032F18C -> 0x8032F198
unsigned char AptValue::GetMaxRefCountHit() {}


/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8033126C -> 0x80331270
*/
// Range: 0x8033126C -> 0x80331270
class AptScriptColour * AptValue::c_scriptcolour() {}


/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80332B28 -> 0x80332B58
*/
// Range: 0x80332B28 -> 0x80332B2C
class AptXml * AptValue::c_xml() {}

// Range: 0x80332B2C -> 0x80332B58
unsigned char AptValue::isXml() {}


/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80332CD4 -> 0x80332D04
*/
// Range: 0x80332CD4 -> 0x80332CD8
class AptXmlAttributes * AptValue::c_xmlattributes() {}

// Range: 0x80332CD8 -> 0x80332D04
unsigned char AptValue::isXmlAttributes() {}


/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8033398C -> 0x803339BC
*/
// Range: 0x8033398C -> 0x80333990
class AptXmlNode * AptValue::c_xmlnode() {}

// Range: 0x80333990 -> 0x803339BC
unsigned char AptValue::isXmlNode() {}


/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\source\Apt\AptValue\AptValue.inl
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80337484 -> 0x803374C0
*/
// Range: 0x80337484 -> 0x803374A4
void AptValue::incGCRoot() {}

// Range: 0x803374A4 -> 0x803374C0
void AptValue::decGCRoot() {}


