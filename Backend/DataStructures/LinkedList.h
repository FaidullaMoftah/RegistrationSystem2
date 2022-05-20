#pragma once
#ifndef STUDENT_H
#include "../StudentData/Student.h"
#endif
struct node {
    node* next;
    student* data;
};
struct list {
    node* head;
    int size;
    void (*insert)(list, node*);
};
void ListInsert(list* l, student* s);
//We define a linked list that supports only addition from front, since this is sufficient for
//our purposes.
//void insertAtEnd(list l, node* node);
//void insertAtMiddle(list l, int i, node* node);
//void init(list* l);
void init(student *s);
//returns nullptr if not found
node* searchInList(list* l, Id* item);