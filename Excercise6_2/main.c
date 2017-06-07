#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   int count;
   char *pText; /* must point to dynamic allocated memory ! */
} problem_t ;
int main()
{
   problem_t s1 = {1, NULL };
   problem_t s2 = {2, NULL };
   /* do not do ... = {1, "ABC "} */
   s1.pText = (char *) malloc(4 * sizeof (char ));
   if (s1.pText != NULL)
   {
      strcpy (s1.pText , "P");
      printf("%s\n", s1.pText);
      s2 = s1; /* problem ? this is a problem because the pointer of
      s2 is now the same as s1 so it is a pointer that points to itself
      in that way the the sll will not be expanded.*/
      printf("%s\n", s2.pText);
      free(s1.pText );
      s2.pText [0] = 'A'; /* problem ? instead of an adress to text you just put
      a character in that place so the mechanism of a pointer is gone.*/
   }
   printf("%s\n", s2.pText);
}
