#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  assert(n >= 1);
  if (n == 1) // simple case
    return 1 + total;
  else // recursive call which is the last executed statement
    return sumtail(n - 1, n + total);
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  // precondition
  assert (n >= 1);
  
  int i = 1, // counter starts from 1 since our precondition says that n must be at least 1, so there is no need need to start from 0.
  sum = 0;   // sum (returning argument)
  while (i <= n)
  {
    sum = i + sum;
    i++;
  }
  return sum;
}

