#include<stdio.h>

int main()
{
  FILE *fp;
  fp=fopen("file.txt","w");

  fprintf(fp, "17\n" );

  fclose(fp);
  return 0;
}
