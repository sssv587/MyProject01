//#include <stdio.h>
//#include <stdlib.h>
//
////编写一个函数，返回一个一位数组
//int *f1() {
//    static int arr[10];//必须加上static，让arr的空间在静态数据区分配
//    int i;
//    for (i = 0; i < 10; i++) {
//        arr[i] = rand();
//    }
//    return arr;
//}
//
//void main() {
//
//    int i, *p;
//    p = f1();//p指向的是在f1生成的数组的首地址(即第一个元素的地址)
//    for (i = 0; i < 10; i++) {
//        printf("%d\n", *(p + i));
//    }
//}

