#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "BST.h"

#define BUF_SIZE 1024

int main()
{
    // Create BST instance and word variable
    char word[BUF_SIZE];
    struct BST *store = makeBST();

    // Validate BST was created
    if(store == NULL){
        printf("Failed to make BST\n");
        return -1;
    }

    // Display instructions to the user 
    printf("Please enter a series of words to store in a BST\n");
    printf("Type 'STOP' to end the series and output the BST\n");
    printf("In postorder\n");

    // While loop to accept words until 'STOP' is entered
    while (1)
    {
        printf("Word = ");

        scanf("%s", word);
        if (strcmp(word, "STOP") == 0) break;

        insertBST(store, word);
    }

    // Display the BST in post order
    printf("The BST output in postorder is: \n");
    postOrderBST(store, stdout);
    printf("\n"); 

    // Destructor to free memory
    destroyBST(store);

    return 0;

}