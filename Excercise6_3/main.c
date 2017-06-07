#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   int count;
   char *pText; /* must point to dynamic allocated memory ! */
} problem_t ;

int deepCopy(problem_t *pDestination, const problem_t *pSource);

int main()
{
   problem_t s1 = {1, NULL };
   problem_t s2 = {2, NULL };
   /* do not do ... = {1, "ABC "} */
   s1.pText = (char *) malloc(4 * sizeof (char ));
   if (s1.pText != NULL)
   {
      strcpy (s1.pText , "Testing the location");
      deepCopy(&s2, &s1);
      printf("%s\n%s\n", s1.pText, s2.pText);
      printf("Location1 0x%x \nLocation2 0x%x\n",s1.pText, s2.pText);
   }
   free(s1.pText);
   free(s2.pText);
}

int deepCopy(problem_t *pDestination, const problem_t *pSource)
{
   free(pDestination->pText);
   pDestination->pText = (char *) malloc(sizeof (*pSource->pText));
   if(pDestination->pText == NULL)
   {return 0;}
   strcpy(pDestination->pText, pSource->pText);
   return 1;
}
