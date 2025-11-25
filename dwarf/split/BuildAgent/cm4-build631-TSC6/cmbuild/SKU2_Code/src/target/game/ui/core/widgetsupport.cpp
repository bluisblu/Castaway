/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\widgetsupport.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80187C60 -> 0x80188694
*/
// Range: 0x80187C60 -> 0x80187C74
void * WidgetScreenFormat::WidgetScreenFormat() {}

// Range: 0x80187C74 -> 0x80187CEC
void * WidgetScreenFormat::~WidgetScreenFormat(class WidgetScreenFormat * const this /* r29 */) {}

// Range: 0x80187CEC -> 0x80187DC4
void WidgetScreenFormat::LaunchWidgetScreenLayout(class WidgetScreenFormat * const this /* r29 */, const char * * ppLayout /* r30 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
}

// Range: 0x80187DC4 -> 0x80187E5C
unsigned char WidgetScreenFormat::IterateScreenLayout(class WidgetScreenFormat * const this /* r29 */, const char * * ppLayout /* r30 */, enum IterationType iterationType /* r31 */) {}

// Range: 0x80187E5C -> 0x80188050
void WidgetScreenFormat::IterateTags(class WidgetScreenFormat * const this /* r31 */, enum IterationType iterationType /* r28 */) {
    // Local variables
    char endTag[32]; // r1+0x8
    const char * pTag; // r30
    const char * pStartTag; // r29
}

// Range: 0x80188050 -> 0x80188138
char * WidgetScreenFormat::GetNextTag(class WidgetScreenFormat * const this /* r28 */, enum IterationType iterationType /* r29 */) {
    // Local variables
    int skipCount; // r30
}

// Range: 0x80188138 -> 0x801881CC
unsigned char WidgetScreenFormat::IsValidTag(const char * tag /* r26 */) {
    // Local variables
    unsigned char rc; // r28
    unsigned char done; // r27

    // References
    // -> struct TagsAndTests ValidTagsAndTests[64];
}

// Range: 0x801881CC -> 0x80188694
unsigned char WidgetScreenFormat::IsDataValid(const class WidgetScreenFormat * const this /* r24 */, const char * tag /* r25 */) {
    // Local variables
    unsigned char rc; // r28
    unsigned char done; // r27
    int i; // r26
    enum WidgetLayoutValidationType test; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0
    int iValue; // r0

    // References
    // -> struct TagsAndTests ValidTagsAndTests[64];
}


