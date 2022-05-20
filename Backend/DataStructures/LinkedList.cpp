#include "LinkedList.h"
#ifndef STUDENT_H
#include "../StudentData/Student.h"
#endif
#include "stdlib.h"
list* init(student* s){
    node* n = (node *) malloc(sizeof (student));
    list* l = (list *)malloc(sizeof(list));
    l->head = n;
    l->insert = &ListInsert;
    return l;
}
void ListInsert(list* l, student *s){
	node* n = (node *)(malloc(sizeof(n)));
    initNode(n, s);
    n->next = l->head;
	l->head = n;
}
node* searchInList(list* l, Id* item){
	struct node* current = l->head;
	while (current != NULL)
	{
		if(compare(current -> data -> id, item) == 0)current = current->next;
		else return current;
	}
	return NULL;
}