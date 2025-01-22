#include <stdio.h>
#include "BST.h"
#include <string.h>
#include <stdlib.h>

int main()
{
    Node *root = NULL;
    char word [50];

    printf("Please enter a series of words to store in a BST\n");
    printf("Type 'STOP' to end the series and output the BST\n");
    printf("In postorder\n");

    while (1)
    {
        printf("Word = ");
        scanf("%d", word);

        if (strcmp(word, "STOP",4) == 0) break;

        insert(&root, word);
    }

    printf("The BST output in postorder is: \n");
    postOrder(root, stdout);
    printf("\n"); 

    dealloc(&root)

    return 0;

}