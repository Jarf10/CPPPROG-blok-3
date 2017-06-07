# include <ctype.h>
# include <stdio.h>
# include <stdbool.h>
# include <string.h>

bool compareIntArrays(const int arr1[], const int arr2[], int size);

int main(void)
{
   int array1[5] = { 3, 4, 5,6,7};
   int array2[5] = { 3, 4, 5,6,7};
   if(compareIntArrays(array1, array2, 5))
   {
      printf("The array's are the same!\n");
   }
   else{printf("The array's are not the same!\n");}

   return 0;
}

bool compareIntArrays(const int arr1[], const int arr2[], int size)
{
   int t = 0;
   for(int i=0; i<=size; i++)
   {
      if(arr1[i]==arr2[i])
      {
         t++;
      }
   }
   return t==size;
}
