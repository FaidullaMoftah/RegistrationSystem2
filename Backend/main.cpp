#include <iostream>
//#include "Tester.h"
#include "DataStructures/LinkedList.h"
#include "DataStructures/bst.h"
int main(int argc, char const *argv[])
{
    BinarySearchTree* bst = (BinarySearchTree *)malloc(sizeof(BinarySearchTree));
    student* st1 = (student *)malloc(sizeof(student));
    st1->id.value = (char *)calloc(20, sizeof(char));
    for(int i = 0; i < 20;i++){
        st1->id.value[i] = (char) ('0' + rand() * 10);
    }
    printf("%s", st1->id.value);
    student* st2 = (student *)malloc(sizeof(student));
    st2->id.value = (char *)calloc(20, sizeof(char));
    for(int i = 0; i < 20;i++){
        st2->id.value[i] = (char) ('0' + rand() * 10);
    }
    printf("%s", st1->id.value);
    student* st3 = (student *)malloc(sizeof(student));
    st3->id.value = (char *)calloc(20, sizeof(char));
    for(int i = 0; i < 20;i++){
        st3->id.value[i] = (char) ('0' + rand() * 10);
    }
    printf("%s", st1->id.value);
    student* st4 = (student *)malloc(sizeof(student));
    st4->id.value = (char *)calloc(20, sizeof(char));
    for(int i = 0; i < 20;i++){
        st4->id.value[i] = (char) ('0' + rand() * 10);
    }
    insertStudent(bst, st1);
}
