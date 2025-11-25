/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\core\e_msgqueue.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026581C -> 0x80265C04
*/
// Range: 0x8026581C -> 0x80265868
void * EMsgQueue::EMsgQueue(class EMsgQueue * const this /* r31 */) {}

// Range: 0x80265868 -> 0x802658E0
void * EMsgQueue::~EMsgQueue(class EMsgQueue * const this /* r30 */) {}

// Range: 0x802658E0 -> 0x802659DC
unsigned char EMsgQueue::Create(class EMsgQueue * const this /* r27 */, int size /* r28 */) {
    // Local variables
    unsigned char inRet; // r0
    unsigned char outRet; // r0
}

// Range: 0x802659DC -> 0x80265A40
void EMsgQueue::Destroy(class EMsgQueue * const this /* r30 */) {}

// Range: 0x80265A40 -> 0x80265B20
unsigned char EMsgQueue::Send(class EMsgQueue * const this /* r30 */, unsigned int msg /* r31 */) {
    // Local variables
    unsigned char success; // r0
}

// Range: 0x80265B20 -> 0x80265BE4
unsigned char EMsgQueue::Receive(class EMsgQueue * const this /* r30 */, unsigned int * pMsgOut /* r31 */) {
    // Local variables
    unsigned char success; // r0
}

// Range: 0x80265BE4 -> 0x80265C04
int EMsgQueue::GetCount() {
    // Local variables
    int in; // r4
    int out; // r5
}


