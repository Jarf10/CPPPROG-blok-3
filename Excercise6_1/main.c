/*You should always use a constant for the pointer of the head
 * because you never want to loose that. If you do, you will probably
 * never find your node back.
 *
 *
 * The complexity of the sizessl function is O(n) so linear. This
 * is given in the examples of the complexity's.

/* Singly Linked List: SLL */

#include <stdio.h>
#include <stdlib.h>
#include "SLLheader.h"

int main(void)
{
   node_t *pHead = NULL;  /* pHead is the 'owner' of the SLL */
   node_t *pNew = NULL;

   showSLL(pHead);
   for(int t=0; t<=5; t++)
   {
   printf("\nAdd new node to SLL 0x%p:\n", pHead);
   pNew = (node_t*)malloc(sizeof(node_t));
   if (pNew != NULL)
   {
      pNew->data = 10;
      pNew->pNextNode = NULL;
   }
   addSLL(&pHead, pNew);
   }
   showSLL(pHead);
   printf("\n");


   printf("Add new node to SLL 0x%p:\n", pHead);
   pNew = (node_t*)malloc(sizeof(node_t));
   if (pHead != NULL)
   {
      pNew->data = 20;
      pNew->pNextNode = NULL;
   }
   addSLL(&pHead, pNew);
   showSLL(pHead);
   printf("\n");
   int Nodes = sizeSLL(pHead);
   printf("The number of node(s) is: %d\n", Nodes);

   printf("Delete SLL by using the 'owner' pointer:\n");
   deleteSLL(&pHead);
   showSLL(pHead);
   printf("\n");

   return 0;
}
