#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello Word \n");

    int i = 6;

    int *p = &i;

    // p = malloc(sizeof(int));

    printf("&i = %p\n", (void *) &i);

    printf("i = %d\n", i);

    // printf("&G   = %p\n", (void *) &G);
    return 0;
}