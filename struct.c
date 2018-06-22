#include <stdio.h>
#include <string.h>

typedef struct _Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
}Books;

int ID12(Books* book)
{
   book->book_id = 12;
   return(book->book_id);
}

int main( ) {

   Books Book1;

   ID12(&Book1);

   printf("%d\n", Book1.book_id);
}
