//#include <stdio.h>
//
////请编写一个函数 swap(int *n1,int *n2)可以交换n1 和 n2的值
//
////说明
////1.函数名为swap
////2.形参是两个指针类型
//void swap(int *n1, int *n2) {
//    int temp = *n1;//表示将n1这个指针指向的变量的值赋给temp
//    *n1 = *n2;//表示将n2这个指针指向的变量的值赋给n1这个指针指向的变量
//    *n2 = temp;//表示将temp值赋给n2这个指针指向的变量
//}
//
//
//void main() {
//    int n1 = 1;
//    int n2 = 2;
//    swap(&n1, &n2);
//    printf("main n1=%d n2=%d", n1, n2);
//}