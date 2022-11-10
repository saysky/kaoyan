//
// 带头结点的单链表
//
#include <stdio.h>
#include <stdlib.h>
#include "slinklist.h"

node *init() {
    node *head = (node *) malloc(sizeof(node));
    head->next = NULL;
    return head;
}

/**
 * 打印
 * @param head
 */
void display(node *head) {
    node *p = head->next; // 从第一个节点开始
    while (p) {
        printf("%d ", p->info);
    }
}

/**
 * 查询第i个节点
 * @param head
 * @param i
 * @return
 */
node *find(node *head, int i) {
    node *p = head;
    int j = 0;
    if (i < 0) {
        printf("位置不存在");
        return NULL;
    }
    if (i == 0) {
        return p;
    }
    while (p && i != j) {
        p = p->next;
        j++;
    }
    return p;
}

/**
 * 插入
 * @param head
 * @param x
 * @param i
 * @return
 */
node *insert(node *head, datatype x, int i) {
    node *p = (node *) malloc(sizeof(node));
    p->info = x;
    node *q = find(head, i);
    if (q) {
        p->next = q->next;
        q->next = p;
    }
    return head;
}

/**
 * 删除值
 * @param head
 * @param x
 * @return
 */
node *deleteByValue(node *head, datatype x) {
    node *pre = NULL;
    node *q = head;
    while (q && q->info != x) {
        pre = q;
        q = q->next;
    }
    if (q) {
        pre->next = q->next;
    }
    return head;
}