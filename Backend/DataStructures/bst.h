#ifndef STUDENT_H
#include "../StudentData/Student.h"
#endif
struct Node{
    student* value;
    struct Node *rightChild;
    struct Node *leftChild;
    struct Node *parent;
};
struct BinarySearchTree{
    struct Node *root;
};
void printOrderedTree(Node* root);
Node* newNode(int num);
void insert(BinarySearchTree *tree , Node *node);
void insertStudent(BinarySearchTree *tree , student *node);
Node* minimumElement(Node *root);
Node* maximumElement(Node *root);
Node* TreeSearch(Node *root, Id* value);
Node* successor(Node *node);
Node* predecessor(Node *node);
void transplant(BinarySearchTree *tree, Node *n1, Node *n2);
void deleteNode(BinarySearchTree *tree, Node *n);
struct BinarySearchTree* newBinarySearchTree(int num);
