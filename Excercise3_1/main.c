#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   if(argc>1)
   {
      int total=0;
      for(int i=1; i<=argc-1; i++)
      {
         total += atoi(argv[i]);
      }
      printf("total is: %d\n", total);
   }
   else
   {
      fprintf(stderr, "ERROR not enough arguments!\n");
   }
   return 0;
}
