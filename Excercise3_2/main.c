//You do not want to print in the function because,
//the only thing you want to get back is a bolean not a message.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isInt(const char str[]);

int main(int argc, char *argv[])
{
   int t=0;
   int *pt = &t;
   if(argc>1)
   {
      for(int i=1; i<argc; i++)
      {
         if(isInt(argv[i]))
         {
            *pt+=1;
         }
      }
      if(t==argc-1)
      {
         printf("All parameters are positive integers!\n");
      }
      else{printf("Not all parameters are positive integers!\n");}
   }
   else{fprintf(stderr,"Not enough parameters!\n");}
   return 0;
}

bool isInt(const char str[])
{
   for(int i=0; str[i]!='\0'; i++)
   {
      if(!isdigit(str[i]))
      {
         return false;
      }
   }
   return true;
}
