#include "sumn.h"

#include<stdio.h>
#include<assert.h> // assert

int sumn (int n)
{
    if (n == 1) // simple step
        return 1;
    else // recursive step
        return 2 * n - 1 + sumn(n - 1);
}