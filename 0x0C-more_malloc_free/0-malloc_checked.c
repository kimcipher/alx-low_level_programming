#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*malloc_checked - function entry point
*@b: amount to be allocated
*Return: pointer to new memory
*/

void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL) {
        exit(98);
    }

    return ptr;
}

