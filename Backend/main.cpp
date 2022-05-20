#include <iostream>
//#include "Tester.h"
#include "DataStructures/LinkedList.h"
#include "DataStructures/bst.h"
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

    BinarySearchTree* tree = newBinarySearchTree(st1);
    insertStudent(tree, st2);
    insertStudent(tree, st3);
    insertStudent(tree, st4);

    printOrderedTree(tree->root);
    int k = 0;
}
