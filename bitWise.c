#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int mask = 0x11101111;
  int a = 0;
  int b = 3;

  //Setting a bit
  a |= 1UL << 1;

  //int result = (emr & mask) | 0x000D0000;
  printf("%x\n",a);
}
