#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n = 0x10;
  int x = 0x13;
  int test = (n<<8) | x;
  printf("%#08x\n",test );
}
