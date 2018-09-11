#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int numTerms = 0;
  int term1 =0;
  int term3 = 0;
  int term2=1;

  scanf("%d",&numTerms);

  for(int i=0;i<numTerms;i++)
  {
    printf("%d\n",term1);
    term3 = term2 +term1;
    term1 = term2;
    term2 = term3;
  }
}
