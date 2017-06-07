#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct
{
   int zipnum;
   char zipchar[2];
} zipcode_t;

/* qsort comparison function */
int compareZipCodes(const void *pZC1, const void *pZC2);

int main()
{
   int i = 0;
   zipcode_t data[SIZE] = {{9569, {'A','A'}},
                           {4569, {'A','C'}},
                           {4569, {'B','A'}},
                           {4569, {'A','A'}},
                           {1569, {'A','A'}}};

   printf("---- Not sorted:\n");
   for (i = 0; i < SIZE; i++)
   {
      printf("Zipcode: %d%s\n", data[i].zipnum, data[i].zipchar);
   }
   printf(" \n");

   /* sorting algorithm: quick sort */
   /* compareData is a function pointer to callback function */
   qsort(data, SIZE, sizeof(zipcode_t), compareZipCodes);
   printf("---- Sorted:\n");
   for (i = 0; i < SIZE; i++)
   {
      printf("Zipcode: %d%s\n", data[i].zipnum, data[i].zipchar);
   }
   printf("\n");

   return 0;
}

/* callback function for qsort */
int compareZipCodes(const void *pZC1, const void *pZC2)
{
   if((((zipcode_t*)pZC1)->zipnum) == (((zipcode_t*)pZC2)->zipnum))
   {
      if((((zipcode_t*)pZC1)->zipchar[0]) == (((zipcode_t*)pZC2)->zipchar[0]))
      {
         return ((((zipcode_t*)pZC1)->zipchar[1]) > (((zipcode_t*)pZC2)->zipchar[1]));
      }
      else
      {
         return ((((zipcode_t*)pZC1)->zipchar[0]) > (((zipcode_t*)pZC2)->zipchar[0]));
      }
   }
   else
   {
      return ((((zipcode_t*)pZC1)->zipnum) > (((zipcode_t*)pZC2)->zipnum));
   }
}

