/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\swstarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DE8AC -> 0x801E0984
*/
// Range: 0x801DE8AC -> 0x801DEDB0
void * SWSTarget::SWSTarget(class SWSTarget * const this /* r30 */) {
    // Local variables
    int c; // r5
    int r; // r0

    // References
    // -> class EGlobal _globals;
    // -> static const char * const SWS_sd;
    // -> static const char * const SWS_sh;
    // -> static const char * const SWS_sn;
    // -> static const char * const SWS_dpad_shdr;
    // -> static const char * const SWS_aqn_7;
    // -> static const char * const SWS_aqn_6;
    // -> static const char * const SWS_aqn_5;
    // -> static const char * const SWS_aqn_4;
    // -> static const char * const SWS_aqn_3;
    // -> static const char * const SWS_aqn_2;
    // -> static const char * const SWS_aqn_1;
    // -> static const char * const SWS_aqn_0;
    // -> static const char * const SWS_action;
    // -> static const char * const SWS_title;
    // -> static const char * const SWS_rgSizeY;
    // -> static const char * const SWS_rgSizeX;
    // -> static const char * const SWS_rgOffSetY;
    // -> static const char * const SWS_rgOffSetX;
    // -> static const char * const SWS_rgKey;
    // -> static const char * const SWS_Cancel;
    // -> static const char * const SWS_loaded;
    // -> static const char * const SWS_hide_callback;
    // -> static const char * const SWS_show_callback;
    // -> static const char * const SWS_delete_action;
    // -> static const char * const SWS_highlight;
    // -> static const char * const SWS_test_delete;
    // -> static const char * const SWS_act_count_5;
    // -> static const char * const SWS_act_count_4;
    // -> static const char * const SWS_act_count_3;
    // -> static const char * const SWS_act_count_2;
    // -> static const char * const SWS_act_count_1;
    // -> static const char * const SWS_act_count_0;
    // -> static const char * const SWS_highlight_start;
    // -> static const char * const SWS_sim_count;
    // -> static const char * const SSH_exists;
    // -> static const char * const SWS_exists;
    // -> struct [anonymous] __vt__9SWSTarget;
}

// Range: 0x801DEDB0 -> 0x801DEE8C
void * SWSTarget::~SWSTarget(class SWSTarget * const this /* r29 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9SWSTarget;
}

// Range: 0x801DEE8C -> 0x801DF29C
void SWSTarget::SetVariable(class SWSTarget * const this /* r29 */, const char * szCommand /* r28 */, const char * szParams /* r27 */) {
    // Local variables
    int lastHighlightedColumn; // r31
    int lastHighlightedRow; // r30
    char colStr[8]; // r1+0x10
    char rowStr[8]; // r1+0x8
    class SWSRecord * pRecord; // r28
    class SWSRecord * pRecord; // r28
    class cXPerson * pPerson; // r30

    // References
    // -> static const char * const SWS_rgSizeY;
    // -> static const char * const SWS_rgSizeX;
    // -> static const char * const SWS_rgOffSetY;
    // -> static const char * const SWS_rgOffSetX;
    // -> static const char * const SWS_rgKey;
    // -> static const char * const SWS_Cancel;
    // -> static const char * const SWS_loaded;
    // -> static const char * const SWS_hide_callback;
    // -> static const char * const SWS_show_callback;
    // -> static const char * const SWS_delete_action;
    // -> static const char * const SWS_highlight;
}

// Range: 0x801DF29C -> 0x801DF500
char * SWSTarget::GetVariable(class SWSTarget * const this /* r30 */, const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r31
    int column; // r0
    class SWSRecord * pRecord; // r29
    class cXPerson * pPerson; // r3
    class SWSRecord * pRecord; // r3

    // References
    // -> static const char * const SSH_exists;
    // -> static const char * const SWS_exists;
    // -> class EGlobal _globals;
    // -> static const char * const SWS_highlight_start;
    // -> static const char * const SWS_sim_count;
}

// Range: 0x801DF500 -> 0x801DF684
unsigned short * SWSTarget::GetLocalizable(class SWSTarget * const this /* r29 */, const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    class SWSRecord * pRecord; // r3
    class SWSRecord * pRecord; // r3
    int r; // r0
    class SWSRecord * pRecord; // r3
    unsigned short * outString; // r30

    // References
    // -> static const char * const SWS_action;
    // -> static const char * const SWS_title;
}

// Range: 0x801DF684 -> 0x801DF8E0
void SWSTarget::Update(class SWSTarget * const this /* r31 */) {
    // Local variables
    class ObjectModule * pObjMod; // r0
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class AptViewer * _gpAptViewer;
    // -> float _dt;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801DF8E0 -> 0x801DF940
void SWSTarget::ActivateSimSwitcher(class SWSTarget * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DF940 -> 0x801DF94C
void SWSTarget::DeactivateSimSwitcher() {}

// Range: 0x801DF94C -> 0x801DFA40
class cXPerson * SWSTarget::GetSimSwitcherPlayer(class SWSTarget * const this /* r27 */) {
    // Local variables
    class ObjectModule * pObjMod; // r0
    class cXPerson * pTestPerson; // r4
    unsigned char found; // r29
    int failsafe; // r28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801DFA40 -> 0x801DFA68
unsigned char SWSTarget::IsSimSwitcherActive() {}

// Range: 0x801DFA68 -> 0x801DFBBC
void SWSTarget::AddAction(class SWSTarget * const this /* r31 */, const class Interaction * pAction /* r27 */, const class BString2 & strName /* r28 */, unsigned int shaderID /* r29 */, class ERShader * pShader /* r30 */) {
    // References
    // -> char * s_SWSShaderNames[6][9];
}

// Range: 0x801DFBBC -> 0x801DFD0C
void SWSTarget::AddFakeAction(class SWSTarget * const this /* r31 */, const class BString2 & strName /* r28 */, unsigned int shaderID /* r29 */, class ERShader * pShader /* r30 */) {
    // References
    // -> char * s_SWSShaderNames[6][9];
}

// Range: 0x801DFD0C -> 0x801DFDC0
void * SWSRecord::SWSRecord(class SWSRecord * const this /* r25 */, class cXPerson * in_pPerson /* r26 */, const class Interaction * in_pAction /* r27 */, const class BString2 & in_strName /* r28 */, unsigned int in_shaderID /* r29 */, class ERShader * in_pShader /* r30 */, unsigned char in_fake /* r31 */) {}

// Range: 0x801DFDC0 -> 0x801DFE34
void * SWSRecord::~SWSRecord(class SWSRecord * const this /* r30 */) {}

// Range: 0x801DFE34 -> 0x801E0760
void SWSTarget::InitSimSwitcher(class SWSTarget * const this /* r15 */) {
    // Local variables
    int c; // r7
    int r; // r0
    class cXPerson * pSelectedPerson; // r18
    class Family * family; // r0
    const class FamilyMember * member; // r0
    int guid; // r14
    class Neighbor * firstNeighbor; // r0
    class cXPerson * pTestPerson; // r17
    unsigned char found; // r19
    int failcount; // r20
    class cXPerson * pFirstPerson; // r3
    int i; // r17
    class Neighbor * pNeighbor; // r16
    class BString2 simsName; // r1+0x40
    class ERShader * pShader; // r1+0x3C
    class BString2 firstName; // r1+0x38
    class BString2 lastName; // r1+0x34
    signed short jobID; // r0

    // References
    // -> char * s_SWSShaderNames[6][9];
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801E0760 -> 0x801E07D8
void SWSTarget::CleanupSimSwitcherAllocations() {
    // Local variables
    int r; // r28
    int c; // r27
}

// Range: 0x801E07D8 -> 0x801E089C
void SWSTarget::PushControllerButtonFilter(class SWSTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E089C -> 0x801E0900
void SWSTarget::PopControllerButtonFilter(class SWSTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801E0900 -> 0x801E0984
class Interaction * SWSTarget::GetInteractionFromID(class cXPerson * pPerson /* r27 */, int id /* r28 */) {
    // Local variables
    int count; // r0
    int i; // r30
    const class Interaction * pAction; // r29
}


