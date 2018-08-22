#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int R_True(int x)
{
  return x;
}

int main()
{
  int test;
  test = (R_True(1)<<3) | (R_True(1)<<2);

  printf("%d\n",test );
}
