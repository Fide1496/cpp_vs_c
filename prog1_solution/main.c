#include <stdio.h>
#include "BST.h"
#include <string.h>
#include <stdlib.h>

int main()
{
    struct BST *bst = NULL;
    char word [50];

    printf("Please enter a series of words to store in a BST\n");
    printf("Type 'STOP' to end the series and output the BST\n");
    printf("In postorder\n");

    while (1)
    {
        printf("Word = ");
        scanf("%d", word);

        if (strcmp(word, "STOP\n") == 0) break;

        insert(bst->root, word);
    }

    printf("The BST output in postorder is: \n");
    postOrder(bst->root, stdout);
    printf("\n"); 

    free(bst);

    return 0;

}