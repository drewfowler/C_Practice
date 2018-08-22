#include <stdio.h>

#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

int main()
{
  int test = 8;

  if(CHECK_BIT(test,3))
  {
   // printf() displays the string inside quotation
   printf("Hello, World!");
   return 0;
 }
 else
  printf("NOPE");
}
