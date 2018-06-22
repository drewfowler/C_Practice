#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);


    //Allocates memory for the ptr array to an array of ints by the number of shelves
    total_number_of_books = (int*)malloc(total_number_of_shelves*sizeof(int));
    total_number_of_pages = (int *)malloc(total_number_of_shelves*sizeof(int *));

    while (total_number_of_queries--) {
        int type_of_query;

        scanf("%d", &type_of_query);

        if (type_of_query == 1) {



            int x, y;
            scanf("%d %d", &x, &y);
            int nb;
            //Adds book to xth spot in the array
            *(total_number_of_books+x) +=1;

            //Copies the number of books array
            nb = *(total_number_of_books+x);

            //Adds more colums to this array
            total_number_of_pages[x] = (int *)realloc(total_number_of_pages[x], nb*sizeof(int));

            //Places the number of pages(y) in the new column of the xth row
            *(*(total_number_of_pages + x) + (nb-1)) = y;





          } else if (type_of_query == 2) {
          int x, y;
          scanf("%d %d", &x, &y);
          printf("%d\n", *(*(total_number_of_pages + x) + y));
      } else {
          int x;
          scanf("%d", &x);
          printf("%d\n", *(total_number_of_books + x));
      }
  }

  if (total_number_of_books) {
      free(total_number_of_books);
  }

  for (int i = 0; i < total_number_of_shelves; i++) {
      if (*(total_number_of_pages + i)) {
          free(*(total_number_of_pages + i));
      }
  }

  if (total_number_of_pages) {
      free(total_number_of_pages);
  }

  return 0;
}
