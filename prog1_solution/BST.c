#include "BST.h"

struct BST *makeBST(){
    struct BST *bst = (struct BST *) malloc(sizeof(struct BST));
    if (bst == NULL) return NULL;
    bst->root = NULL;
    bsst->value = 0;

    return bst;
}

bool insert(Node **node, const char *value){
    if(*node == NULL){
        *node = (Node *)malloc(sizeof(Node));
        if (*node == NULL) {
            perror("Failed to allocate memory for Node");
            exit(EXIT_FAILURE);
        }
        (*node)->value = strdup(value);
        if ((*node)->value == NULL) {
            perror("Failed to allocate memory for value");
            free(*node);
            exit(EXIT_FAILURE);
        }
        (*node)->left = NULL;
        (*node)->right = NULL;
        return true;
    }
    if (strcmp(value, (*node)->value) < 0) {
        return insert(&(*node)->left, value);
    }
    if (strcmp(value, (*node)->value) > 0) {
        return insert(&(*node)->right, value);
    }
    return false;
}

bool search(Node *node, const char *value){
    if(root == NULL) return false;
    if(root->value == value)
}