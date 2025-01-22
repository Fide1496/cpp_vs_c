#ifndef BST_H
#define BST_H
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct Node
{
    char *value;
    struct Node *left;
    struct Node *right;
};

struct Node *makeNode(const char *value);

struct BST
{
    struct Node *root;
};
struct BST *makeBST();


// These two inserts done in class
int insertR(struct Node **node, const char *value);
int insertBST(struct BST *bst, const char *value);

int searchR(struct Node *node, const char *value);
int searchBST(struct BST *bst, const char *value);

int removeR(struct Node **node, const char *value);
int removeBST(struct BST *bst, const char *value);

void deallocNodes(struct Node **node);

// int insertBST(struct BST *bst, struct Node *node, const char value);

void destroyBST(struct BST *tree);

void postOrderNode(struct Node *node, FILE *output);
void postOrderBST(struct BST *bst, FILE *output);
void copyBST(struct BST *bstCopy, struct BST *dest);

#endif