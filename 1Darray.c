#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arlen;
    int sum = 0;

    scanf("%d", &arlen);

    int arr[arlen];

    for (size_t i = 0; i < arlen; i++) {
      scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < arlen; i++) {
      sum += arr[i];
    }

    printf("%d\n",sum );

    return 0;
}
