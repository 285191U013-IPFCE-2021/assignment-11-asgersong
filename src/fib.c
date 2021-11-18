/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert(n >= 1); // precondition: The first fibonacci number is defined as 0 and the second is 1 (First few fib numbers: 0,1,1,2,3,5 ...)

    if (n == 1) // simple case #1
        return p;
    else if (n == 2) // simple case #2
        return pp;
    else // recursive step
        return fib(n - 1, pp, p + pp);
}
