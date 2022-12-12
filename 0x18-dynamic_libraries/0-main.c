#include "main.h"
#include <stdio.h>
#define int char
int main(void)
{
    int i;
    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}
