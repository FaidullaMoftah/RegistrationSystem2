#include <iostream>
//#include "Tester.h"
#include "DataStructures/LinkedList.h"
#include "DataStructures/bst.h"
#include "DataStructures/Hashtable.h"
#define MOD 29
int main(int argc, char const *argv[])
{
    student* st1 = new student();
    generateRandomId(st1->getId());
    student* st2 = new student();
    generateRandomId(st2->getId());
    student* st3 = new student();
    generateRandomId(st3->getId());
    student* st4 = new student();
    generateRandomId(st4->getId());

    Hashtable* h = newHashtable(MOD, 5);
    hash(st2->getId(), MOD);

    insert(h,st1);
    insert(h,st2);
    insert(h,st3);
    student* st = search(h, st2->getId());
    if(st != NULL)
    printf("%d",st->getId()->hashValue);

}
