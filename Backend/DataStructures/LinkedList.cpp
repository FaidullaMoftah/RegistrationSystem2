#include "LinkedList.h"
#ifndef STUDENT_H
#include "../StudentData/Student.h"
#endif
#include "stdlib.h"
#include "../StudentData/Id.h"
list* init(student* s){
    node* n = (node *) malloc(sizeof (student));
    list* l = (list *)malloc(sizeof(list));
    l->head = n;
    l->insert = &ListInsert;
    return l;
}
node* createNode(student* s){
    node* n = (node*)malloc(sizeof(node));
    n->data = s;
    return n;
};
void ListInsertStudent(list *l, student *s){
    node* n = createNode(s);
    ListInsert(l, n);
}
void ListInsert(list* l, node *n){
    n->next = l->head;
	l->head = n;
}
node* searchInList(list* l, Id* item){
	struct node* current = l->head;
	while (current != NULL)
	{
		if(compare((current -> data -> getId()), item) != 0)current = current->next;
		else return current;
	}
	return NULL;
}
void deleteNode(node** head_ref, int key)
{

    node* temp = *head_ref;
    node* prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }
}