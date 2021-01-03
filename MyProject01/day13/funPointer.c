//#include <stdio.h>
//
////说明
////1.max函数
////2.接收两个int,返回较大数
//int max(int a, int b) {
//    return a > b ? a : b;
//}
//
//int main() {
//    int x, y, maxVal;
//
//    //说明 函数指针
//    //1.函数指针的名字 pmax
//    //2.int表示 该函数指针指向的函数是返回int类型
//    //3.(int,int)表示该函数指针指向的函数形参是接收两个int
//    //4.在定义函数指针时，也可以写上形参名 int (*pmax)(int a,int b) = max
//    int (*pmax)(int, int) = max;
//    printf("Input two numbers");
//
//    scanf("%d %d", &x, &y);
//    //(*pmax)(x,y)通过函数指针去调用函数
//    //调用方式2 pmax(x,y)
//    maxVal = (*pmax)(x,y);
//    printf("%d\n", sizeof(pmax));
//    printf("Max value:%d pmax=%p pmax本山的地址%p\n",maxVal,pmax,&pmax);
//    return 0;
//}