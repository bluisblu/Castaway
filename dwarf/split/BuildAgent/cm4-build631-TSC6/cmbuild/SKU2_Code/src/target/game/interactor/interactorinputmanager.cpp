/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\interactorinputmanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80060218 -> 0x80060BE0
*/
// Range: 0x80060218 -> 0x800602BC
char * Debug_GetNameFromCommand() {
    // Local variables
    const char * psz; // r3
}

// Range: 0x800602BC -> 0x80060300
void * InstanceData::InstanceData(class InstanceData * const this /* r31 */) {}

// Range: 0x80060358 -> 0x800603B8
void * InstanceData::~InstanceData(class InstanceData * const this /* r30 */) {}

// Range: 0x800603B8 -> 0x8006041C
void InstanceData::AddCommandMapping(class InstanceData * const this /* r30 */, enum InteractorCommand interactorCmd /* r31 */) {}

// Range: 0x8006041C -> 0x8006048C
void InstanceData::AddCommandMapping(class InstanceData * const this /* r30 */, enum InteractorCommand interactorCmd /* r31 */) {}

// Range: 0x8006048C -> 0x800605AC
unsigned char InstanceData::OpenSession(class InstanceData * const this /* r24 */, int nButtonMapping /* r25 */, const struct ButtonSemantic * buttonSems /* r26 */, int nStickMappings /* r27 */, const struct StickSemantic * stickSems /* r28 */, const char * szDebugFilterName /* r29 */, int priority /* r30 */) {
    // Local variables
    class EController * pCtrl; // r31
    int n; // r30
    int n; // r30

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x800605AC -> 0x80060608
void InstanceData::CloseSession(class InstanceData * const this /* r31 */) {
    // Local variables
    class EController * pCtrl; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80060608 -> 0x80060610
unsigned int InstanceData::GetControllerFilterId() {}

// Range: 0x80060610 -> 0x80060A30
void InstanceData::Update(class InstanceData * const this /* r25 */, float delta /* f28 */) {
    // Local variables
    class EController * pCtrl; // r29
    struct pair * it; // r28
    enum ECTRL_CMD controllerCmd; // r27
    enum InteractorCommand interactorCmd; // r26
    int nWhichStick; // r1+0xC
    int nWhichAxis; // r1+0x8
    float lastVal; // f30
    float val; // f29
    float delta; // f0
    class EVec2 controllerCursor; // r1+0x10
    float val; // f0

    // References
    // -> class EGlobal _globals;
    // -> static unsigned char cButtonCmdUp;
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80060A30 -> 0x80060AA0
void * InteractorInputManager::InteractorInputManager(class InteractorInputManager * const this /* r30 */) {}

// Range: 0x80060AA0 -> 0x80060B08
void * InteractorInputManager::~InteractorInputManager(class InteractorInputManager * const this /* r30 */) {}

// Range: 0x80060B08 -> 0x80060B7C
void InteractorInputManager::Update(class InteractorInputManager * const this /* r29 */, float delta /* f31 */) {
    // Local variables
    int n; // r30
}

// Range: 0x80060B7C -> 0x80060BB0
unsigned char InteractorInputManager::OpenSession(int priority /* r11 */) {}

// Range: 0x80060BB0 -> 0x80060BC0
void InteractorInputManager::CloseSession() {}

// Range: 0x80060BC0 -> 0x80060BE0
class InstanceData * InteractorInputManager::GetSessionData() {}


