#include <stdio.h>
#include <stdlib.h>
#include "SLLheader.h"

void showSLL(const node_t *pHead)
{
   const node_t *pNext = pHead;

   if (pHead == NULL)
   {
      printf("SLL is empty\n");
   }
   else
   {
      while (pNext != NULL)
      {
         printf("Node = %p  Data = %d  Next = %p\n",
                pNext, pNext->data, pNext->pNextNode);
         pNext = pNext->pNextNode;
      }
   }
}

void addSLL(node_t **ppHead, node_t *pNew)
{
   node_t *pNext = *ppHead;

   if (pNext != NULL)
   {
      while (pNext->pNextNode != NULL)
      {
         pNext = pNext->pNextNode;
      }
      pNext->pNextNode = pNew;
      pNew->pNextNode = NULL;
   }
   else
   {
      *ppHead = pNew;
      (*ppHead)->pNextNode = NULL;
   }
}

void deleteSLL(node_t **ppHead)
{
   node_t *pToBeRemoved = *ppHead;
   node_t *pNext = NULL;

   while (pToBeRemoved != NULL)
   {
      pNext = pToBeRemoved->pNextNode;
      free(pToBeRemoved);
      pToBeRemoved = pNext;
   }
   *ppHead = NULL;
}

int sizeSLL(const node_t *pHead)
{
   const node_t *pNext = pHead;
   int AmountNodes = 0;

   if (pNext != NULL)
   {
      AmountNodes = 1;
      while (pNext->pNextNode != NULL)
      {
         pNext = pNext->pNextNode;
         AmountNodes++;
      }
      return AmountNodes;
   }
   else
   {
      return 0;
   }
}
