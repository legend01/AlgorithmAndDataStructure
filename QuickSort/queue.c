/*
 * @Description:链表
 * @version: 
 * @Author: HLLI8
 * @Date: 2020-09-28 14:46:27
 * @LastEditors: HLLI8
 * @LastEditTime: 2020-09-28 14:57:47
 */
#include "queue.h"
#include <stdlib.h>

LNode *InitLNode(void){
    LNode *head = (LNode *)malloc(sizeof(LNode));
    if(head == NULL){
        return -1;
    }
    head->data = NULL;
    head->next = NULL;
    return head;
}

int InsertLNode(LNode *head, int x){
    LNode *p = NULL, *r = head;
    while (r->next != NULL)
    {
        r = r->next;
    }
    p = (LNode *)malloc(sizeof(LNode));
    p->next = NULL;

    p->data = x;
    r->next = p;
    return 1;
}

void ShowLNode(LNode *head){
    LNode *p = head->next;
    while (p != NULL)
    {
        printf("[INFO] LNode->data: %d\n", p->data);
        p = p->next;
    }
}



