/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\cas\casmediator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80029708 -> 0x80029B58
*/
// Range: 0x80029708 -> 0x80029794
void * CasMediator::CasMediator(class CasMediator * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__11CasMediator;
}

// Range: 0x80029794 -> 0x80029824
void * CasMediator::~CasMediator(class CasMediator * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__11CasMediator;
}

// Range: 0x80029824 -> 0x800298D4
void CasMediator::AddListener(class CasMediator * const this /* r29 */, class CasListener * listener /* r1+0x8 */) {
    // Local variables
    unsigned char bAlreadyAdded; // r31
    class CasListener * * itor; // r30
}

// Range: 0x800298D4 -> 0x8002996C
void CasMediator::RemoveListener(class CasMediator * const this /* r29 */, class CasListener * listener /* r30 */) {
    // Local variables
    class CasListener * * itor; // r31
}

// Range: 0x8002996C -> 0x800299E4
void CasMediator::RemoveAllListeners(class CasMediator * const this /* r30 */) {
    // Local variables
    class CasListener * * itor; // r31
}

// Range: 0x800299E4 -> 0x80029A70
void CasMediator::PostEvent(const class CasMediator * const this /* r29 */, const class CasEvent & event /* r30 */) {
    // Local variables
    class CasListener * const * itor; // r31
}

// Range: 0x80029A70 -> 0x80029AE4
void CasMediator::SetScene(class CasMediator * const this /* r30 */, class CasScene * pScene /* r31 */) {}

// Range: 0x80029AE4 -> 0x80029AF8
void CasMediator::DrawSim() {}

// Range: 0x80029AF8 -> 0x80029B10
void CasMediator::SetControllerFilterId() {}

// Range: 0x80029B10 -> 0x80029B30
unsigned int CasMediator::GetControllerFilterId() {}

// Range: 0x80029B30 -> 0x80029B48
class CasSimDescription * CasMediator::GetEditSimDescription() {}

// Range: 0x80029B48 -> 0x80029B58
void CasMediator::SetCasMode() {}


