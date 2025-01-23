#include "BST.h"
#include <stdbool.h>

// Node constructor
struct Node *makeNode(const char *value) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    if (node == NULL) return NULL;

    node->value = (char *)malloc(strlen(value) + 1);
    strcpy(node->value, value);
    node->left = NULL;
    node->right = NULL;

    return node;
}

// BST constructor
struct BST *makeBST(){
    struct BST *bst = (struct BST *) malloc(sizeof(struct BST));
    if (bst == NULL) return NULL;
    bst->root = NULL;
    
    return bst;
}

// Recursive insert function
int insertR(struct Node **node, const char *value) {
    if (*node == NULL) {
        *node = makeNode(value);
        return 1;
    }
    if (strcmp(value, (*node)->value) < 0) {
        return insertR(&((*node)->left), value);
    }
    if (strcmp(value, (*node)->value) > 0) {
        return insertR(&((*node)->right), value);
    }
    return 0;
}

// Function to insert word into the BST struct if struct is not null 
int insertBST(struct BST *bst, const char *value)
{
    if(bst == NULL) return 0;
    return insertR(&(bst->root),value);
}

// Recursive search function
int searchR(struct Node **node, const char *value){

    if(node == NULL){
        return false;
    }
    if(strcmp(value,(*node)->value)<0){
        return searchR(&((*node)->left),value);
    }
    if(strcmp(value,(*node)->value)>0){
        return searchR(&((*node)->right),value);
    }
    return 1;
}

// Function to wearch for word in the BST struct if struct is not null 
int searchBST(struct BST *bst, const char *value){
    if (bst->root == NULL) return 0;
    return searchR(&(bst->root),value);
};

// The remove function didn't have any implementation in the OG C++ so I just included
// them to keep c++ and c consistent
int removeR(struct Node **node, const char *value){
    return 1;
}

int removeBST(struct BST *bst, const char *value){
    return 1;
}

// Post order functions
void postOrderNode(struct Node *node, FILE *output) {
    if (node == NULL) return;
    postOrderNode(node->left, output);
    postOrderNode(node->right, output);
    fprintf(output, "%s ", node->value);
}
void postOrderBST(struct BST *bst, FILE *output) {
    if (bst == NULL || bst->root == NULL) return;
    postOrderNode(bst->root, output);
}

// Copy function
void copy(struct Node *node, struct BST *bstCpy){
    if (node == NULL) return;
    insertR(&(bstCpy->root), node->value);

    copy(node->left, bstCpy);
    copy(node->right, bstCpy);
}

// Free memory after the program completes
void deallocNodes(struct Node *node) {
    if (node == NULL) return;
    deallocNodes(node->left);
    deallocNodes(node->right);
    free(node->value); 
    free(node);
}

// Destructor
void destroyBST(struct BST *bst) {
    if (bst == NULL) return;
    deallocNodes(bst->root);
    free(bst); 
}