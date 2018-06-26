#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int num[n];
  int a =0;
  int b =0;
  int andMax = 0;
  int orMax = 0;
  int xorMax = 0;


  //printf("N = %d, K = %d\n",n,k );

  for (size_t i = 1; i < n; i++)
  {
    a = i;

    for (size_t j = 2; j < n+1; j++)
    {
      b = j;
      int and = a & b;
      int or = a | b;
      int xor = a ^ b;

      //printf("a = %d,b = %d\n",a,b );
      //printf("\tAND = %d \n\tOR = %d\n\tXOR = %d\n",andMax, orMax,xorMax );

      if(a != b)
      {
        if(and > andMax && and < k)
        {
          andMax = and;
          //printf("\tand = %d\n",and );
        }
        if(or > orMax && or < k)
        {
          orMax = or;
          //printf("\tor = %d\n",or );
        }
        if(xor > xorMax && xor < k)
        {
          xorMax = xor;
          //printf("\txor = %d\n",xor );
        }
      }
    }

  }
  printf("%d\n%d\n%d\n",andMax,orMax,xorMax );
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
