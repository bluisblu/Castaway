/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\routing.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DAC50 -> 0x800DD0F0
*/
// Range: 0x800DAC50 -> 0x800DACA8
void * PenaltyRect::PenaltyRect(class PenaltyRect * const this /* r29 */, class IRect * r /* r30 */, int penalty /* r31 */) {}

// Range: 0x800DACA8 -> 0x800DAD08
void * PenaltyRect::PenaltyRect(class PenaltyRect * const this /* r26 */, int l /* r27 */, int t /* r28 */, int r /* r29 */, int b /* r30 */, int penalty /* r31 */) {}

// Range: 0x800DAD08 -> 0x800DADD4
int FindIntersectingRect(const class IRect * r /* r29 */, const class vector * partition /* r30 */) {
    // Local variables
    const class PenaltyRect * i; // r31
}

// Range: 0x800DADD4 -> 0x800DAE70
void SpacePartition::FindInterfaceRect(class SpacePartition * const this /* r28 */, int n2 /* r29 */, class IRect * outRect /* r30 */) {
    // Local variables
    class ASTNode * node1; // r31
    class ASTNode * node2; // r5
}

// Range: 0x800DAE70 -> 0x800DAF1C
void SpacePartition::FindInterfaceRect(class SpacePartition * const this /* r29 */, const class ASTNode * n2 /* r30 */, class IRect * outRect /* r31 */) {
    // Local variables
    class IRect tem; // r1+0x8
}

// Range: 0x800DAF1C -> 0x800DAFCC
class IPoint SpacePartition::FindInterfacePoint(class IPoint * i /* r28 */, class SpacePartition * const this /* r29 */, const class ASTNode * n1 /* r30 */, const class ASTNode * n2 /* r31 */) {
    // Local variables
    class IRect tem; // r1+0x8
}

// Range: 0x800DAFCC -> 0x800DB04C
void * SpacePartition::SpacePartition(class SpacePartition * const this /* r30 */) {}

// Range: 0x800DB04C -> 0x800DB118
int SpacePartition::GetIntersectingFreeRect(class SpacePartition * const this /* r29 */, const class IRect * r /* r30 */) {
    // Local variables
    const class PenaltyRect * i; // r31
}

// Range: 0x800DB118 -> 0x800DB290
class PenaltyRect * SpacePartition::GetIntersectingPartitionRect(class SpacePartition * const this /* r29 */, const class IRect * r /* r30 */) {
    // Local variables
    class PenaltyRect * final_rect; // r0
    const class PenaltyRect * found; // r31
    const class PenaltyRect * i; // r28

    // References
    // -> static unsigned char use_grid;
}

// Range: 0x800DB290 -> 0x800DB2F0
class ASTNode * SpacePartition::GetNode(class SpacePartition * const this /* r30 */, int n /* r31 */) {}

// Range: 0x800DB2F0 -> 0x800DB42C
float SpacePartition::EstimateDistanceToGoal(class SpacePartition * const this /* r30 */) {
    // Local variables
    class ASTNode * node; // r0
    const class IRect * goalRect; // r0
    float delx; // f1
    float dely; // f0
}

// Range: 0x800DB42C -> 0x800DB5EC
float SpacePartition::MeasureDistance(class SpacePartition * const this /* r26 */, int parent /* r27 */, int child /* r28 */, class IPoint * foundEntryPoint /* r29 */) {
    // Local variables
    class ASTNode * n; // r30
    class ASTNode * s; // r31
    const class PenaltyRect * goal; // r0
    float xdel; // f1
    float ydel; // f0
    float dist; // f1
}

// Range: 0x800DB600 -> 0x800DB614
void SpacePartition::GetTerminals() {}

// Range: 0x800DB614 -> 0x800DB7BC
int SpacePartition::CountSuccessors(class SpacePartition * const this /* r31 */, int n /* r29 */) {
    // Local variables
    class ASTNode * node; // r30
    const int * i; // r29
    const int * i; // r29
    class ASTNode * preGoalNode; // r0
}

// Range: 0x800DB7BC -> 0x800DB858
int SpacePartition::GetNthSuccessor(class SpacePartition * const this /* r29 */, int n /* r30 */, int succIndex /* r31 */) {
    // Local variables
    int numSucc; // r0
    class ASTNode * node; // r0
    int tableIndex; // r31
}

// Range: 0x800DB858 -> 0x800DB8A8
void SpacePartition::Clear(class SpacePartition * const this /* r31 */) {}

// Range: 0x800DB8A8 -> 0x800DB9CC
void SpacePartition::Deallocate(class SpacePartition * const this /* r30 */) {
    // Local variables
    class vector temp; // r1+0x60
    class vector temp; // r1+0x50
    class vector temp; // r1+0x40
    class vector temp; // r1+0x30
    class vector temp; // r1+0x20
}

// Range: 0x800DB9CC -> 0x800DBA2C
static unsigned char IsRectInside() {}

// Range: 0x800DBA2C -> 0x800DBECC
unsigned char SpacePartition::ExpandRect(class SpacePartition * const this /* r21 */, class PenaltyRect * prect /* r22 */) {
    // Local variables
    int expCnt; // r28
    int empCnt; // r27
    class IRect origExp; // r1+0x28
    int * iexp; // r0
    int flates[4]; // r1+0x18
    int maxSize; // r26
    int iterations; // r25
    const class PenaltyRect * startPart; // r24
    const class IRect * maxBounds; // r23
    int flateSize; // r3
    const class PenaltyRect * part; // r0
    int w; // r23
    int h; // r24
    class IRect newExp; // r1+0x8
    float ratio; // f1
    float ratio; // f1
}

// Range: 0x800DBECC -> 0x800DC308
void SpacePartition::BuildSpatialSuccessorList(class SpacePartition * const this /* r25 */, int parent /* r26 */) {
    // Local variables
    class ASTNodeRefList & succTab; // r29
    int curEdge; // r28
    class ASTNode * p; // r27
    class PenaltyRect baseNode; // r1+0x48
    class PenaltyRect seed; // r1+0x34
    int successorNode; // r1+0x8
    class IRect obstacle; // r1+0x10
    const class PenaltyRect * part; // r24
    int freeRectNum; // r23
    class PenaltyRect prect; // r1+0x20
    class ASTNode newNode; // r1+0x5C
    class ASTNode * i; // r23
}

// Range: 0x800DC308 -> 0x800DC3FC
unsigned char Path::InitAST(class Path * const this /* r29 */) {
    // Local variables
    class ASTNode * start; // r0

    // References
    // -> class SpacePartition fSpacePartition;
}

// Range: 0x800DC3FC -> 0x800DC7AC
unsigned char Path::OpenANode(class Path * const this /* r31 */) {
    // Local variables
    class ASTNode * cur; // r0
    int ct; // r30
    int lastRect; // r27
    int nr; // r1+0xC
    const class ASTNode * node; // r0
    const class ASTNode * n1; // r0
    int finalNodeRef; // r0
    class ASTNode * finalNode; // r0
    int goalNumber; // r27
    class IRect goalRect; // r1+0x20
    class IPoint center; // r1+0x18
    int succ; // r1+0x8
    float newg; // f31
    int numSuccessors; // r0
    int i; // r27
    class ASTNode * s; // r0
    class IPoint newEntry; // r1+0x10
    float dist; // f0
    const class ASTNode * n; // r0

    // References
    // -> class SpacePartition fSpacePartition;
}

// Range: 0x800DC7AC -> 0x800DC818
static unsigned char EvalPoint(const class IPoint & b /* r29 */, class IPoint * bestPt /* r30 */, float * bestDist /* r31 */) {
    // Local variables
    float tem; // f0
}

// Range: 0x800DC818 -> 0x800DC87C
static float Distance3(const class IPoint & a /* r30 */, const class IPoint & b /* r31 */) {}

// Range: 0x800DC87C -> 0x800DC8F0
static float Distance2() {
    // Local variables
    float xdel; // f1
    float ydel; // f0
}

// Range: 0x800DC8F0 -> 0x800DCC4C
unsigned char Path::DoOneSmooth(class Path * const this /* r24 */) {
    // Local variables
    int numNodes; // r0
    int somethingMoved; // r27
    int bumpValue; // r26
    int numPoints; // r0
    int ct; // r25
    class IRect irect; // r1+0x30
    float bestDist; // r1+0x8
    class IPoint a; // r1+0x28
    class IPoint b; // r1+0x20
    class IPoint c; // r1+0x18
    class IPoint bestPt; // r1+0x10

    // References
    // -> class SpacePartition fSpacePartition;
}

// Range: 0x800DCC4C -> 0x800DCF34
void SpacePartition::Init(class SpacePartition * const this /* r29 */) {
    // Local variables
    int startRectNumber; // r0
    class IPoint s; // r1+0x8
    class PenaltyRect prect; // r1+0x24
    class ASTNode startNode; // r1+0xBC
    class ASTNode goalNode; // r1+0x90
    const class PenaltyRect * j; // r30
    int * thisPreGoal; // r0
    int * thisPostStart; // r0
    const class PenaltyRect * part; // r0
    int newNodeRect; // r25
    class PenaltyRect dest; // r1+0x10
    class ASTNode newPreGoalNode; // r1+0x64
    class ASTNode newPostStartNode; // r1+0x38
}

// Range: 0x800DCF34 -> 0x800DD010
void Path::InitPath(class Path * const this /* r30 */) {
    // References
    // -> class SpacePartition fSpacePartition;
}

// Range: 0x800DD010 -> 0x800DD0E4
int Path::FindSmallestOpenNode(class Path * const this /* r27 */) {
    // Local variables
    int nodeRef; // r0
    class ASTNode * node; // r0
    int smallest; // r29
    float smallestf; // f31
    const int * i; // r28

    // References
    // -> class SpacePartition fSpacePartition;
}

// Range: 0x800DD0E4 -> 0x800DD0F0
void Path::DeallocateAllPathData() {
    // References
    // -> class SpacePartition fSpacePartition;
}


