#ifndef __QUEUE_H__
#define __QUEUE_H__
typedef struct LNode{
    int data;
    struct Lnode *next;
}LNode;

LNode *InitLNode(void);
int InsertLNode(LNode *head, int x);
void ShowLNode(LNode *head);
#endif // !__QUEUE_H__
