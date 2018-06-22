#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {


    int num[10] = {0};

    // char* str = "test";
    // printf("%c\n",str[2] );
    // /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char n[100];
    scanf("%s", &n);

    for(int i=0;i<strlen(n);i++)
    {
      if(isdigit(n[i]))
      {
        int x = n[i]-48;
        num[x] +=1;
      }
    }

    for (int i = 0; i < 10; i++) {
      printf("%d ",num[i] );
    }


    return 0;
}
