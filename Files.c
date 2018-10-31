#include<stdio.h>

int main()
{
  FILE *fp;
  fp=fopen("file.txt","w");
  fclose(fp);
  return 0;
}
