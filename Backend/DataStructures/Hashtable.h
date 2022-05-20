#ifndef STUDENT_H
#include "../StudentData/Student.h"
#endif
#include "../StudentData/Id.h"

struct Hashtable{
    int size;
    void** table;
    int threshold;
    int* aboveThreshold;
};
Hashtable *newHashtable(int size, int threshold);
void insert(Hashtable *t, student* s);
student* search(Hashtable *t, Id* id);
void _delete(student * del);
