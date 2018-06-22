#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);



    char *arr[10];
    int i=0;

    arr[i] = strtok(s," ");


    while(arr[i]!=NULL)
    {
        printf("%s\n",arr[i]);
        arr[++i] = strtok(NULL," ");

    }


    return 0;
}
