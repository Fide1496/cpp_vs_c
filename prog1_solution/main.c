#include <stdio.h>
#include "linked.h"
#include <string.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    struct LL *ll = NULL;
    int vals = 0;

    printf("Please enter a series of words to store in a BST\n");
    printf("Type 'STOP' to end the series and output the BST\n");
    printf("In postorder\n");

    while(vals <= 0)
    {
        printf("Word = ");
        scanf("%d", vals);
    }


    printf("The BST ouput in postorder is \n")

    return 0;


    // ll = makeLL(); // LL ll; this is our constructor

    // printf("I am expecting my output to be 1 2 3 4 5 10 ... is it? \n\n");

    // prepend(ll, 1);

    // for (i = 2; i<11; i++){
    //     append(ll,i);
    // }
    // for (i = 6; i<10; i++){
    //     remove(ll, i);
    // }
    // display(ll);

    // unmakesLL(ll); //deconstructor
}