#include <stdio.h>
#include "seqqueue.h"
#include <stdlib.h>

void init(sequence_queue *sq) {
    sq->front = sq->rear = 0;
}

int empty(sequence_queue sq) {
    return sq.front == sq.rear ? 1 : 0;
}

void display(sequence_queue sq) {
    if (empty(sq)) {
        printf("队列是空的");
        exit(1);
    }
    int i;
    for (i = sq.front; i < sq.rear; i++) {
        printf("%d ", sq.a[i]);
    }

}

datatype get(sequence_queue sq) {
    if (empty(sq)) {
        printf("队列是空的");
        exit(1);
    }
    return sq.a[sq.front];
}

void insert(sequence_queue *sq, datatype x) {
//    if (sq->rear == MAXSIZE) {
    if ((sq->rear + 1) % MAXSIZE == sq->front) {
        printf("队列满了");
        exit(1);
    }
    sq->a[sq->rear] = x;
//    sq->rear++;
    sq->rear = (sq->rear + 1) % MAXSIZE;
}

void del(sequence_queue *sq) {
    if (sq->front == sq->rear) {
        printf("队列是空的");
        exit(1);
    }
    int i;
    for (i = sq->front; i < sq->rear - 1; i++) {
        sq->a[i] = sq->a[i + 1];
    }
//    sq->front++;
    sq->front = (sq->front + 1) % MAXSIZE;
}

int main() {
    sequence_queue sq;
    init(&sq);

    insert(&sq, 100);
    insert(&sq, 200);
    insert(&sq, 300);
    insert(&sq, 400);

    del(&sq);

    int val = get(sq);
    printf("%d", val);
}