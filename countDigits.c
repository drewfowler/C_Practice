#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int *digits;

    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.



    int count = 0;
    int j = 0;
    int temp = n;
    int sum = 0;

    //Counts number of digits
    while (temp != 0) {
      temp = temp/10;
      count++;
    }
    //This is a change
    //Allocate array to size of count digits
    digits = (int*)malloc(count+1*sizeof(int));

    //Fills the array with the single digits
    while (n != 0) {
      int num = n%10;
      n = n/10;
      j++;
      *(digits + j) = num;
    }

    //Prints the array
    for (size_t i = 0; i < count; i++) {
      sum += *(digits +i+1);
      printf("%d\n",*(digits+i+1) );
    }
    printf("%d\n",sum );


    return 0;
}
