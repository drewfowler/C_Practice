#include <stdio.h>
int main()
{
  int c;
  FILE *file;
  char buff[255];
  int pos = 0;
  int row =0;
  int col =0;

  file = fopen("file.txt", "r+");

  while((c = fgetc(file)) != EOF)
  {
    col +=1;
    if(c =='\n')
    {
      row +=1;
      col =0;
    }
    else if(c == '1' )
    {
       break;
    }
    else
      pos +=1;
  }


  printf("Row = %d, Col = %d\n",row,col );
  fclose(file);


   return 0;
}
