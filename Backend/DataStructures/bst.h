#include "../StudentData/Student.h"
struct Node{
    student* value;
    struct Node *rightChild;
    struct Node *leftChild;
    struct Node *parent;
};

struct BinarySearchTree{
    struct Node *root;
};

Node* newNode(int num);
void insert(BinarySearchTree *tree , Node *node);
void insertStudent(BinarySearchTree *tree , student *node);
Node* minimumElement(Node *root);
Node* maximumElement(Node *root);
Node* TreeSearch(struct Node *root, int value);
Node* successor(Node *node);
Node* predecessor(Node *node);
void printOrderedTree(Node *root);
void transplant(BinarySearchTree *tree, Node *n1, Node *n2);
void _delete(BinarySearchTree *tree, Node *n);
struct BinarySearchTree* newBinarySearchTree(int num);
