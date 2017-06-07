//You need to pass the size of the array to calculate the answer!
//And otherwise you dont know how many doubles you need to include.
#include <stdio.h>

void averageDdata(double data[], int size);
int main(void)
{
   double darray1[4] = {1, 2, 3, 4};
   printf("This is the first array:\n");
   averageDdata(darray1, 4);
   double darray2[6] = {0.5, 0.002, 60.8, 14.6, 30.95, 45.19};
   printf("\n\nThis is the second array:\n");
   averageDdata(darray2, 6);
   return 0;
}

void averageDdata(double data[], int size)
{
   printf("This was the original array:\n");
   for (int i=1; i<=size; i++)
   {
         printf("%0.3f is the %d", data[i-1], i);
         if(i==1)
         {
            printf("st");
         }
         else if(i==2)
         {
            printf("nd");
         }
         else if(i==3)
         {
            printf("rd");
         }
         else
         {
            printf("th");
         }
         printf(" double of the array\n");
   }
   double total = 0;
   for(int i=0; i<=size-1; i++)
   {
      total += data[i];
   }
   double average = total/size;
   double answer[size];
   for (int i=0; i <=size-1; i++)
   {
      answer[i]=average;
   }
   printf("\nAnd these are the answers:\n");
   for (int i=1; i<=size; i++)
   {
      printf("%0.3f is the %d", data[i-1], i);
      if(i==1)
      {
         printf("st");
      }
      else if(i==2)
      {
         printf("nd");
      }
      else if(i==3)
      {
         printf("rd");
      }
      else
      {
         printf("th");
      }
      printf(" double of the array\n");
   }

}
