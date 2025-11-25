/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\ngc\e_ngcsemaphore.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027A7F0 -> 0x8027A9DC
*/
// Range: 0x8027A7F0 -> 0x8027A838
void * ESemaphore::ESemaphore(class ESemaphore * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10ESemaphore;
}

// Range: 0x8027A838 -> 0x8027A8B0
void * ESemaphore::~ESemaphore(class ESemaphore * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__10ESemaphore;
}

// Range: 0x8027A8B0 -> 0x8027A90C
unsigned char ESemaphore::Create(class ESemaphore * const this /* r30 */, int maxCount /* r31 */) {}

// Range: 0x8027A90C -> 0x8027A918
void ESemaphore::Destroy() {}

// Range: 0x8027A918 -> 0x8027A978
unsigned char ESemaphore::Acquire(class ESemaphore * const this /* r31 */) {
    // Local variables
    int count; // r0
}

// Range: 0x8027A978 -> 0x8027A9DC
unsigned char ESemaphore::Release(class ESemaphore * const this /* r30 */) {
    // Local variables
    unsigned char enabled; // r31
}


