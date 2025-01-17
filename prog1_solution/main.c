#include <stdio.h>
#include "linked.h"
#include <string.h>

int main()
{
    int i = 0;
    struct LL *ll = NULL;

    ll = makeLL(); // LL ll; this is our constructor

    printf("I am expecting my output to be 1 2 3 4 5 10 ... is it? \n\n");

    prepend(ll, 1);

    for (i = 2; i<11; i++){
        append(ll,i);
    }
    for (i = 6; i<10; i++){
        remove(ll, i);
    }
    display(ll);

    unmakesLL(ll); //deconstructor
}