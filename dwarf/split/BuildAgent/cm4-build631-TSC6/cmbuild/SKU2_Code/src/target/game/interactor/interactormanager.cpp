/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\interactor\interactormanager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800625D4 -> 0x80063590
*/
// Range: 0x800625D4 -> 0x80062688
void * InteractorManager::InteractorManager(class InteractorManager * const this /* r29 */) {}

// Range: 0x80062688 -> 0x800627EC
void InteractorManager::Initialize(class InteractorManager * const this /* r31 */) {
    // References
    // -> class InteractorVisualizer * s_pVisualizer;
    // -> class InteractorInputManager * s_pInputManager;
}

// Range: 0x800627EC -> 0x8006285C
void InteractorManager::Shutdown(class InteractorManager * const this /* r30 */) {
    // References
    // -> class InteractorInputManager * s_pInputManager;
    // -> class InteractorVisualizer * s_pVisualizer;
}

// Range: 0x8006285C -> 0x800628B0
void InteractorManager::Update(class InteractorManager * const this /* r31 */, float delta /* f31 */) {
    // References
    // -> class InteractorInputManager * s_pInputManager;
}

// Range: 0x800628B0 -> 0x8006294C
unsigned char InteractorManager::ChangeActiveInteractorToNull(class InteractorManager * const this /* r30 */, int playerId /* r31 */) {
    // Local variables
    unsigned char playerBitToCheck; // r4
}

// Range: 0x8006294C -> 0x800629A4
enum InteractorType InteractorManager::GetPlayerInteractorType(class InteractorManager * const this /* r30 */, int playerId /* r31 */) {
    // Local variables
    const struct ActiveInteractor & activeInteractor; // r0
}

// Range: 0x800629A4 -> 0x80062A1C
class Interactor * InteractorManager::GetPlayerInteractor(class InteractorManager * const this /* r29 */, int playerId /* r30 */, enum InteractorType type /* r31 */) {
    // Local variables
    struct ActiveInteractor & activeInteractor; // r0
}

// Range: 0x80062A1C -> 0x80062A6C
struct InteractorInfo & InteractorManager::GetPlayerInteractorInfo(const class InteractorManager * const this /* r30 */, int playerId /* r31 */) {}

// Range: 0x80062A6C -> 0x80062AB0
class InteractorManager * InteractorManager::GetSingleton() {
    // References
    // -> class InteractorManager * s_pInteractorManager;
}

// Range: 0x80062AB0 -> 0x80062AB8
class InteractorInputManager * InteractorManager::GetInputManager() {
    // References
    // -> class InteractorInputManager * s_pInputManager;
}

// Range: 0x80062AB8 -> 0x80062AC0
class InteractorVisualizer * InteractorManager::GetVisualizer() {
    // References
    // -> class InteractorVisualizer * s_pVisualizer;
}

// Range: 0x80062AC0 -> 0x80062AC8
unsigned char InteractorManager::IsInitialized() {}

// Range: 0x80062AC8 -> 0x80062E00
void InteractorManager::CreatePlayerInteractorSets(class InteractorManager * const this /* r27 */) {
    // Local variables
    int i; // r29
    class vector & interactorSet; // r28
}

// Range: 0x80062E00 -> 0x800632A4
void InteractorManager::DestroyPlayerInteractorSets(class InteractorManager * const this /* r28 */) {
    // Local variables
    int i; // r30
    class Interactor * pInteractor; // r0
    class vector & interactorSet; // r29
}

// Range: 0x800632A4 -> 0x800632E4
unsigned char InteractorManager::IsValidPlayerId() {}

// Range: 0x800632E4 -> 0x80063590
void InteractorManager::UpdateActivePlayerInteractors(class InteractorManager * const this /* r30 */, float delta /* f31 */) {
    // Local variables
    int i; // r31
    unsigned char playerBitToCheck; // r24
    struct ActiveInteractor & activeInteractor; // r0
    enum InteractorType interactorType; // r24
    class vector & interactorSet; // r0
    class Interactor * pInteractorToChangeTo; // r0
    const struct InteractorParams * pParams; // r24
    const struct InteractorParams * pParams; // r3
    class ESimsCam * pCamera; // r24
    class EIObjectMan * pObjMan; // r4

    // References
    // -> class EGlobal _globals;
}


