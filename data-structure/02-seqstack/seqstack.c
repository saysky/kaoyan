//#include <stdio.h>
//#include <stdlib.h>
//#include "02-seqstack.h"
//
//void init(sequence_stack *st) {
//    st->top = 0;
//}
//
//int empty(sequence_stack st) {
//    return st.top == 0 ? 1 : 0;
//}
//
//datatype read(sequence_stack st) {
//    return st.a[st.top - 1];
//}
//
//void push(sequence_stack *st, datatype x) {
//    if (st->top == MAXSIZE) {
//        printf("\n栈满了");
//        exit(1);
//    }
//    st->a[st->top] = x;
//    st->top++;
//}
//
//void pop(sequence_stack *st) {
//    if (st->top == 0) {
//        printf("\n栈空了");
//        exit(1);
//    }
//    st->top--;
//}
////
////int main() {
////    // 写法1
////    sequence_stack st;
////    init(&st);
////
////    push(&st, 100);
////    push(&st, 200);
////    push(&st, 300);
////    pop(&st);
////
////    int val = read(st);
////    printf("%d", val);
////
//////    // 写法2
//////    sequence_stack st, *st2 = &st;
//////    init(st2);
//////
//////    push(st2, 100);
//////    push(st2, 200);
//////    push(st2, 300);
//////    pop(st2);
//////
//////    int val = read(*st2);
//////    printf("%d", val);
////    return 0;
////}