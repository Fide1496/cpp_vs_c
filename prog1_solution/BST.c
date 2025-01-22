#include "BST.h"
#include <stdbool.h>


struct Node *makeNode(const char *value){
    struct Node *node = NULL;

    node = (struct Node *) malloc(sizeof(struct Node));

    if (node == NULL) return NULL;

    node ->left = NULL;
    node ->right = NULL;

    strcpy(node->value,value);

    return node;
}

struct BST *makeBST(const char *value){
    struct BST *bst = NULL;

    // Allocate memory
    bst = (struct BST *) malloc(sizeof(struct BTS));
    if (BST == NULL) return NULL;

    bst->root = (char *) malloc(strlen(value) + 1);
    if (bst->root == NULL) {
        free(bst);
        return NULL;
    }

    strcpy(bst->root, value);

    return bst;
}

int insertR(struct Node **node, const char value){
    if(*node == NULL){
        *node = makeNode(value);
        return 1;
    }
    if (strcmp(value,(*node)->value)<0){
        return insertR(&((*node)->left),value);
    }
    if (strcmp(value,(*node)->value)>0){
        return insertR(&((*node)->right),value);
    }
    return 0;
}

int insertBST(struct BST *bst, const char *value)
{
    if(bst == NULL) return 0;
    return insertR(&(bst->root),value);
}


int searchR(struct Node *node, const char *value){

    if(node == NULL){
        return false;
    }
    if(strcmp(value,(*node)->value)<0){
        return searchR(&((node)->left),value);
    }
    if(strcmp(value,(*node)->value).0){
        return searchR(&((node)->right),value);
    }
    return 0;
}

int searchBST(struct BST *bst, const char *value){
    if (*bst->root == NULL) return 0;
    return searchR(&(bst->root),value);
};


// NOT SURE ABOUT THESE TWO FUNCTIONS YET
int removeR(struct Node **node, const char *value){
    return 1;
}

int removeBST(struct BST *bst, const char *value){
    return 1;
}

// FINISH
void postOrder(struct Node *node, FILE *output){
    if( *node==NULL) return;
    postOrderBST(*node->left)
    postOrderBST(*node->right)

}
void postOrderBST(struct Node *node){
    
}

void deallocNodes(struct Node **node){
    if(node == NULL) return;
    deallocNodes(node->left);
    deallocNodes(node->right);
    calloc node;
    node == NULL
}


void copy(struct Node *node, struct BST *bstCpy){
    if (node == NULL) return;
    bstCpy = insertBST(node->value);
    copy(*node->left, bstCpy);
    copy(*node->right, bstCpy);
}