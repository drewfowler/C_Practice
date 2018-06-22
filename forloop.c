#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const char *num[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (size_t i = a; i <= b; i++) {
      if(i<=9)
        printf("%s\n", num[i] );
      else if(i%2 == 0)
        printf("even\n");
      else
        printf("odd\n");
    }







    return 0;
}
