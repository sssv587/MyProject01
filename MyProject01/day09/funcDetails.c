//#include <stdio.h>
//
//void f1() {
//    int num = 10;
//}
//
//void f2(int n) {
//    n++;
//    printf("f2函数中n=%d", n);
//}
//
//void f3(int *p) {
//    (*p)++;
//}
//
//void main() {
//    //函数的变量是局部的，函数外不生效
//    //printf("num=%d",num);
//
//    int n = 9;
//    f2(n);
//    printf("\nmain函数中n=%d", n);//9
//
//    f3(&n);
//    printf("\nmain函数中n=%d", n);//10
//}
