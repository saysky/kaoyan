//
// 单链表
//

//#include <stdio.h>
//#include <stdlib.h>
//#include "04-slinklist.h"
//
//
///**
// * 初始化
// * @return
// */
//node *init() {
//    return NULL;
//}
//
///**
// * 打印单链表
// * @param head
// */
//void display(node *head) {
//    node *p = head;
//    if (!p) {
//        printf("link list is empty\n");
//        exit(1);
//    }
//    while (p) {
//        printf("%d ", p->info);
//        p = p->next;
//    }
//}
//
//
///**
// * 寻找第i个地址
// * @param head
// * @param i 从1开始数
// * @return
// */
//node *find(node *head, int i) {
//    if (i < 1) {
//        return NULL;
//    }
//
//    int j = 1;
//    node *p = head;
//    while (p && i != j) {
//        j++;
//        p = p->next;
//    }
//    return p;
//}
//
///**
// * 在第i位置插入x
// * @param head
// * @param i
// * @param x
// * @return
// */
//node *insert(node *head, int i, datatype x) {
//    // p为待插入的值
//    node *p = (node *) malloc(sizeof(node));
//    p->info = x;
//    // q 为i位置上的值
//    node *q = find(head, i);
//    if (!q && i != 0) {
//        printf("i is not found\n");
//    } else {
//        // 如果插在最前面，即i==0
//        if (i == 0) {
//            p->next = q;
//            head = p;
//        } else {
//            // 如果是插在中间某个位置
//            p->next = q->next;
//            q->next = p;
//        }
//    }
//    return head;
//
//}
//
///**
// * 根据值删除
// * @param head
// * @param x
// * @return
// */
//node *delByValue(node *head, datatype x) {
//    if (!head) {
//        printf("link list is empty\n");
//        return head;
//    }
//    node *p = head, *pre = NULL;
//    while (p && p->info != x) {
//        pre = p;
//        p = p->next;
//    }
//    if (!p) {
//        printf("%d not found\n", x);
//    } else {
//        pre->next = p->next;
//    }
//    return head;
//}
//
//int main() {
//    node *head = init();
//    head = insert(head, 0, 100);
//    head = insert(head, 1, 200);
//    head = insert(head, 2, 300);
//    head = delByValue(head, 200);
//
//    display(head);
//}