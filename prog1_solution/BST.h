#ifndef BST_H
#define BST_H

#include <malloc.h>

struct Node
{
    char value;
    struct Node *left;
    struct Node *right;
};

struct BST
{
    struct Node *root;
     
};

struct Node *makeNode();
struct BST *makeBST();
void destroyBST(BST *tree);

int insertNode(struct Node **node, const char value);
int searchNode(struct Node *node, const char *value);
int removeNode(struct Node **node, const char *value);

void postOrderTraversal(struct Node *node, FILE *output);
void deallocNodes(struct Node **node);
void copyTree(struct Node *source, BST *dest);

int insert(struct BST *bst, const char value);
int search(struct BST *bst, const char *value);
int remove(struct BST *bst, const char *value);

void postOrder(struct BST *bst, FILE, *output);
void copyBST(struct BST *bstCopy, BST *dest);

#endif