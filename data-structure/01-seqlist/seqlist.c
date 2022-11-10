#include <stdio.h>
#include <stdlib.h>
#include "seqlist.h"

//
///**
// * 初始化，清空表
// * @param slt
// */
//void init(sequence_list *slt) {
//    slt->size = 0;
//}
//
///**
// * 末尾插入一个元素
// * @param slt
// * @param x
// */
//void append(sequence_list *slt, datatype x) {
//    if (slt->size == MAXSIZE) {
//        printf("\n顺序表是满的");
//        exit(1);
//    }
//    slt->a[slt->size] = x;
//    slt->size++;
//}
//
///**
// * 打印顺序表
// * @param slt
// */
//void display(sequence_list slt) {
//    int i;
//    if (slt.size == 0) {
//        printf("\n顺序表是空的！");
//        exit(1);
//    }
//    for (i = 0; i < slt.size; i++) {
//        printf("%d ", slt.a[i]);
//    }
//
//}
//
///**
// * 判断顺序表是否为空
// * @param slt
// * @return
// */
//int empty(sequence_list slt) {
//    return slt.size == 0 ? 1 : 0;
//}
//
//
///**
// * 寻找x的位置
// * @param slt
// * @param x
// * @return
// */
//int find(sequence_list slt, datatype x) {
//    int i;
//    for (i = 0; i < slt.size; i++) {
//        if (slt.a[i] == x) {
//            return i;
//        }
//    }
//    return -1;
//}
//
///**
// * 获取某个下标的值
// * @param slt
// * @param position
// * @return
// */
//datatype get(sequence_list slt, int position) {
//    if (position < 0 || position >= MAXSIZE) {
//        printf("\n位置不存在");
//        exit(1);
//    }
//    return slt.a[position];
//}
//
///**
// * 在position位置插入x
// * @param slt
// * @param x
// * @param position
// */
//void insert(sequence_list *slt, datatype x, int position) {
//    if (slt->size == MAXSIZE) {
//        exit(1);
//    }
//    if (position < 0 || position > MAXSIZE) {
//        printf("\n位置不存在");
//        exit(1);
//    }
//    // 插入，从后往前
//    int i;
//    for (i = slt->size; i > position; i--) {
//        slt->a[i] = slt->a[i - 1];
//    }
//    slt->a[position] = x;
//    slt->size++;
//}
//
///**
// * 删除position上的值
// * @param position
// */
//void delete(sequence_list *slt, int position) {
//    if (position < 0 || position >= slt->size) {
//        printf("\n位置不存在");
//        exit(1);
//    }
//    if (slt->size == 0) {
//        printf("\n顺序表是空的");
//        exit(1);
//    }
//    // 删除，从前往后
//    int i;
//    for (i = position; position < slt->size - 1; i++) {
//        slt->a[i] = slt->a[i + 1];
//    }
//    slt->size--;
//}


//int main() {
//    printf("hello");
//    return 0;
//}