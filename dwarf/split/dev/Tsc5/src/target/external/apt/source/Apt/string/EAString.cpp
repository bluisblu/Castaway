/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\string\EAString.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80333E30 -> 0x80335268
*/
char s_EmptyInternalData[9]; // size: 0x9, address: 0x8045FC68
struct AptUserFunctions * sAptCallbacks; // size: 0x4, address: 0x805DC510
// Range: 0x80333E30 -> 0x80333EA8
void * EAStringC::EAStringC(class EAStringC * const this /* r30 */) {
    // References
    // -> char s_EmptyInternalData[9];
}

// Range: 0x80333EA8 -> 0x80333F48
void * EAStringC::EAStringC(class EAStringC * const this /* r29 */, unsigned int uChar /* r31 */, unsigned int uLength /* r30 */) {
    // References
    // -> char s_EmptyInternalData[9];
}

// Range: 0x80333F48 -> 0x80334000
class EAStringC & EAStringC::__apl(class EAStringC * const this /* r27 */, const class EAStringC & strText /* r28 */) {
    // Local variables
    char * pStrBuffer; // r0
    unsigned int uLength1; // r29
    unsigned int uLength2; // r0
}

// Range: 0x80334000 -> 0x803340D4
class EAStringC & EAStringC::__apl(class EAStringC * const this /* r28 */, const char * const pStrText /* r29 */) {
    // Local variables
    char * pStrBuffer; // r0
    unsigned int uLength1; // r30
    unsigned int uLength2; // r0
}

// Range: 0x803340D4 -> 0x803341CC
class EAStringC __pl(const char * const pStrText /* r26 */, const class EAStringC & strText /* r27 */) {
    // Local variables
    unsigned int uLength1; // r30
    unsigned int uLength2; // r29
    class EAStringC strNewText; // r1+0x8
    char * pStrBuffer; // r28
}

// Range: 0x803341CC -> 0x80334274
class EAStringC & EAStringC::Duplicate(class EAStringC * const this /* r28 */, const class EAStringC & strText /* r29 */) {
    // Local variables
    unsigned int uLength; // r31
    char * pStrBuffer; // r30
}

// Range: 0x80334274 -> 0x803342D4
void EAStringC::ReserveSize(class EAStringC * const this /* r30 */, unsigned int uSize /* r31 */) {
    // Local variables
    unsigned int uCopySize; // r6
}

// Range: 0x803342D4 -> 0x80334310
unsigned char EAStringC::IsEnoughSize(unsigned int uSize /* r31 */) {}

// Range: 0x80334310 -> 0x803343D4
class EAStringC & EAStringC::Append(class EAStringC * const this /* r28 */, const char * const pStrText /* r29 */) {
    // Local variables
    const char * pStrCount; // r3
    char * pStrBuffer; // r0
    unsigned int uLength1; // r31
    unsigned int uLength2; // r30
}

// Range: 0x803343D4 -> 0x80334460
void EAStringC::Format() {
    // Local variables
    struct __va_list_struct Args[1]; // r1+0x68
}

// Range: 0x80334460 -> 0x80334514
void EAStringC::vsFormat(class EAStringC * const this /* r27 */, const char * const pStrFormat /* r28 */, struct __va_list_struct * Args /* r29 */) {
    // Local variables
    int iSize; // r31
    int iFilled; // r3
    char * pStrBuffer; // r30
}

// Range: 0x80334514 -> 0x803345A8
int EAStringC::Find(const class EAStringC * const this /* r29 */, const char * const pStrText /* r30 */, int iStart /* r31 */) {
    // Local variables
    const char * pFound; // r0
    int iPos; // [invalid]
}

// Range: 0x803345A8 -> 0x8033463C
int EAStringC::Find(const class EAStringC * const this /* r29 */, char cChar /* r30 */, int iStart /* r31 */) {
    // Local variables
    const char * pFound; // r0
    int iPos; // [invalid]
}

// Range: 0x8033463C -> 0x80334768
int EAStringC::Delete(class EAStringC * const this /* r26 */) {
    // Local variables
    int iClampedIndex; // r28
    int iClampedEnd; // r27
    int iOldSize; // r29
    int newSize; // r28
    char * pOldBuffer; // r0
}

// Range: 0x80334768 -> 0x8033481C
class EAStringC EAStringC::Left(const class EAStringC * const this /* r30 */, int iCount /* r31 */) {
    // Local variables
    class EAStringC strText; // r1+0x8
}

// Range: 0x8033481C -> 0x803348D4
class EAStringC EAStringC::Mid(const class EAStringC * const this /* r29 */, int iFirst /* r30 */) {
    // Local variables
    int iSize; // r31
    class EAStringC strText; // r1+0x8
}

// Range: 0x803348D4 -> 0x803349A8
class EAStringC EAStringC::Mid(const class EAStringC * const this /* r28 */, int iFirst /* r29 */) {
    // Local variables
    int iSize; // r31
    int iClampedFirst; // r31
    int iClampedCount; // r30
    class EAStringC strText; // r1+0x8
}

// Range: 0x803349A8 -> 0x80334A44
class EAStringC & EAStringC::MakeLower(class EAStringC * const this /* r28 */) {
    // Local variables
    int nLength; // r31
    int i; // r30
    char * pBuffer; // r29
}

// Range: 0x80334A44 -> 0x80334B0C
class EAStringC & EAStringC::TrimRight(class EAStringC * const this /* r27 */, const char * const pStrText /* r28 */) {
    // Local variables
    const char * pBuffer; // r30
    char cChar; // r0
    unsigned int i; // r29
    unsigned int uSize; // r0
    class EAStringC strText; // r1+0xC
}

// Range: 0x80334B0C -> 0x80334BCC
unsigned char EAStringC::EndWithRemove(class EAStringC * const this /* r28 */, const char * const pStrText /* r29 */) {
    // Local variables
    unsigned int uLength1; // r0
    unsigned int uLength2; // r30
}

// Range: 0x80334BCC -> 0x80334C00
char * EAStringC::UTF8_GetBuffer(int iIndex /* r31 */) {}

// Range: 0x80334C00 -> 0x80334C24
int EAStringC::UTF8_Size() {}

// Range: 0x80334C24 -> 0x80334CB8
class EAStringC EAStringC::UTF8_Mid(const class EAStringC * const this /* r29 */) {
    // Local variables
    const char * pBufferStart; // r31
    const char * pBufferFirst; // r0
    int iClampedFirst; // r30
}

// Range: 0x80334CB8 -> 0x80334D88
class EAStringC EAStringC::UTF8_Mid(const class EAStringC * const this /* r28 */) {
    // Local variables
    const char * pBufferStart; // r31
    const char * pBufferFirst; // r30
    const char * pBufferCount; // r0
    int iClampedFirst; // r30
    int iClampedCount; // r29
}

// Range: 0x80334D88 -> 0x80334E14
class EAStringC & EAStringC::UTF8_Append(class EAStringC * const this /* r28 */, const char * const pStrText /* r29 */, int iSize /* r30 */) {
    // Local variables
    int i; // r31
    int iCharacter; // r1+0x8
    const char * pBuffer; // r5
}

// Range: 0x80334E14 -> 0x80334EB8
int EAStringC::UTF8_Find(const class EAStringC * const this /* r27 */, const char * const pStrText /* r31 */, int iStart /* r28 */) {
    // Local variables
    const char * pBuffer; // r0
    const char * pBufferStart; // [invalid]
    int iStartASCII; // [invalid]
    int iFoundASCII; // r0
    int i; // r30
    int iFoundUTF8; // [invalid]
    int iSize; // r0
    const char * pCurrentBuffer; // r29
}

// Range: 0x80334EB8 -> 0x80334F58
class EAStringC & EAStringC::UTF8_MakeLower(class EAStringC * const this /* r29 */) {
    // Local variables
    int nLength; // r4
    int iCharacter; // r1+0x8
    char * pBuffer; // r31
    char * pPrevBuffer; // r30
}

// Range: 0x80334F58 -> 0x80334FF8
class EAStringC & EAStringC::UTF8_MakeUpper(class EAStringC * const this /* r29 */) {
    // Local variables
    int nLength; // r4
    int iCharacter; // r1+0x8
    char * pBuffer; // r31
    char * pPrevBuffer; // r30
}

// Range: 0x80334FF8 -> 0x80335054
class EAStringC & EAStringC::UTF8_Initialize(class EAStringC * const this /* r30 */, int iCharacter /* r31 */) {
    // Local variables
    int iSize; // r0
}

// Range: 0x80335054 -> 0x80335194
void EAStringC::ChangeBuffer(class EAStringC * const this /* r24 */, unsigned int uSizeToReserve /* r25 */, unsigned int uOffsetCopy /* r26 */, unsigned int uSizeCopy /* r27 */, enum CBPushZero bPushZero /* r28 */, unsigned int uInternalSize /* r29 */) {
    // Local variables
    class DebugDataC * pData; // r30
    unsigned int uRealReservedSize; // r0
    char * pOldBuffer; // r0

    // References
    // -> char s_EmptyInternalData[9];
}

// Range: 0x80335194 -> 0x80335230
void EAStringC::InitFromBuffer(class EAStringC * const this /* r29 */, const char * const pStrText /* r30 */) {
    // Local variables
    int iSize; // r31

    // References
    // -> char s_EmptyInternalData[9];
}

// Range: 0x80335230 -> 0x80335268
void EAStringC::CalculateHashValue(const class EAStringC * const this /* r31 */) {}


