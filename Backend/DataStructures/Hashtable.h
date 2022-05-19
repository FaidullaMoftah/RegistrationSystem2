#include "../StudentData/Student.h"
#include "../StudentData/Id.h"
struct Hashtable{
    int size;
    void** table;
    int threshold;
    int* aboveThreshold;
};
Hashtable *newHashtable(int size);
void insert(student* s);
student* search(Id id);
void _delete(student * del);
