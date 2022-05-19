#include "cstdlib"
#include "stdio.h"
#include "bst.h"
Node* newNode(student* s){
    Node* node = (Node*) malloc(sizeof(Node));
    node->value = s;
    node->rightChild = NULL;
    node->leftChild = NULL;
    node->parent = NULL;
    return node;
};
void insert(BinarySearchTree *tree , Node *node){
    Node *y = NULL;
    Node *x = tree->root;

    while (x != NULL)
    {
        y = x;
        if (compare(node->value->getId(), x->value->getId()) == -1)
        {
            x = x->leftChild;
        }
        else{
            x = x->rightChild;
        }
    }
    node->parent = y;
    if (y == NULL)
    {
        tree->root = node;
    }
    else if (compare(node->value->getId() , y->value->getId()) == -1)
    {
        y->leftChild = node;
    }
    else{
        y->rightChild = node;
    }

};

Node* minimumElement(Node *root){
    if (root->leftChild == NULL)
    {
        return root;
    }
    return(minimumElement(root->leftChild));

};

Node* maximumElement(Node *root){
    if (root->rightChild == NULL)
    {
        return root;
    }
    return(maximumElement(root->rightChild));

};

Node* TreeSearch(struct Node *root, Id* value){
    if (root == NULL || compare(root->value->getId(), value) == 0)
    {
        return root;
    }
    if (compare(root->value->getId(), value) == 1)
    {
        return TreeSearch(root->leftChild, value);
    }
    return TreeSearch(root->rightChild, value);
};

// Returns the successor of a node where a sucessor is defined as the next node in a list sorted ascendingly by node value
Node* successor(Node *node){
    if (node->rightChild != NULL)
    {
        return minimumElement(node);
    }
    Node *x = node->parent;
    Node *child = node;
    while (x != NULL &&  x->rightChild == child)
    {
        child = x;
        x = x->parent;
    }
    return x;
};

// Returns the predecessor of a node where a predecessor is defined as the previous node in a list sorted ascendingly by node value
Node* predecessor(Node *node){
    if (node->leftChild != NULL)
    {
        return minimumElement(node->leftChild);
    }
    Node *x = node->parent;
    Node *child = node;
    while (x != NULL &&  x->leftChild == child)
    {
        child = x;
        x = x->parent;
    }
    return x;
};

void printOrderedTree(Node *root){
    if (root != NULL)
    {
        printOrderedTree(root->leftChild);
        printf("%s ",*root->value->getId());
        printOrderedTree(root->rightChild);
    }
};

// Replace the subtree rooted at node n1 with the subtree rooted at n2
void transplant(BinarySearchTree *tree, Node *n1, Node *n2){
    if (n1->parent == NULL)
    {
        tree->root = n2;
    }
    else if (n1 == n1->parent->leftChild)
    {
        n1->parent->leftChild = n2;
    }
    else{
        n1->parent->rightChild = n2;
    }

    if (n2 != NULL)
    {
        n2->parent = n1->parent;
    }
}
void _delete(BinarySearchTree *tree, Node *n){
    if (n->leftChild == NULL)
    {
        transplant(tree, n, n->rightChild);
    }

    else if (n->rightChild == NULL)
    {
        transplant(tree, n, n->leftChild);
    }

    else{
        struct Node *x = successor(n);
        if (x->parent != n)
        {
            transplant(tree, x, x->rightChild);
            x->rightChild = n->rightChild;
            x->rightChild->parent = x;
        }
        transplant(tree, n, x);
        x->leftChild = n->leftChild;
        x->leftChild->parent = x;
    }

}

struct BinarySearchTree* newBinarySearchTree(int num){
    struct BinarySearchTree *tree = (BinarySearchTree *)malloc(sizeof(BinarySearchTree));
    tree->root = newNode(num);
    return tree;
};


