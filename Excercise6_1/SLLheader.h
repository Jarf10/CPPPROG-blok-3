#ifndef SLLHEADER_FILE
#define SLLHEADER_FILE

typedef struct node
{
   int data;
   struct node *pNextNode;
} node_t;

void showSLL(const node_t *pHead);
void addSLL(node_t **ppHead, node_t *pNew);
void deleteSLL(node_t **ppHead);
int sizeSLL(const node_t *pHead);
#endif
