#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "BST.h"

#define BUF_SIZE 1024

int main()
{

    char word[BUF_SIZE];
    struct BST *store = makeBST();

    if(store == NULL){
        printf("Failed to make BST\n");
        return -1;
    }

    
    printf("Please enter a series of words to store in a BST\n");
    printf("Type 'STOP' to end the series and output the BST\n");
    printf("In postorder\n");


    while (1)
    {
        printf("Word = ");

        scanf("%s", word);
        if (strcmp(word, "STOP") == 0) break;

        insertBST(store, word);
    }

    printf("The BST output in postorder is: \n");
    postOrderBST(store, stdout);
    printf("\n"); 

    destroyBST(store);

    return 0;

}