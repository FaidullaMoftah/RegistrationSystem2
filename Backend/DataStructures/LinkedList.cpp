#include "LinkedList.h"
#ifndef student
#include "../StudentData/Student.h"
#endif
#include "../StudentData/Id.h"
#include "stdlib.h"

void initList(struct list* l) {
	l->head = NULL;
	l->size = 0;
}
void initNode(node* n, struct student* s)
{
	n->data = s;
	n->next = 0;
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