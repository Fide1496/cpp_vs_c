#ifndef BST_H
#define BST_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Node structure and constructor
struct Node
{
    char *value;
    struct Node *left;
    struct Node *right;
};

struct Node *makeNode(const char *value);

// BST struct and constructor
struct BST
{
    struct Node *root;
};
struct BST *makeBST();

// Function headers
int insertR(struct Node **node, const char *value);
int insertBST(struct BST *bst, const char *value);

int searchR(struct Node **node, const char *value);
int searchBST(struct BST *bst, const char *value);

int removeR(struct Node **node, const char *value);
int removeBST(struct BST *bst, const char *value);

void deallocNodes(struct Node *node);
void destroyBST(struct BST *tree);

void postOrderNode(struct Node *node, FILE *output);
void postOrderBST(struct BST *bst, FILE *output);
void copyBST(struct BST *bstCopy, struct BST *dest);

#endif