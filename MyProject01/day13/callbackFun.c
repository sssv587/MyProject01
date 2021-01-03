//#include <stdio.h>
//#include <stdlib.h>
//
////回调函数
////1.int (*f)(void)
////2.f就是函数指针，它可以接收的函数是(返回int，没有形参的函数)
////3.f在这里被 initArray调用，充当了回调函数角色
//void initArray(int *array, int arraySize, int(*f)(void)) {
//    int i;
//    for (i = 0; i < arraySize; i++) {
//        array[i] = f();//通过 函数指针调用了getNextRandomValue函数
//        //array[i] = (*f)();
//    }
//}
//
////获取随机值
//int getNextRandomValue(void) {
//    return rand();//rand系统函数，会返回一个随机整数
//}
//
//int main(void) {
//    int myarray[10];
//
//    //说明
//    //1.调用initArray函数
//    //2.传入了一个函数名getNextRandomValue(地址),需要使用函数指针接收
//    initArray(myarray, 10, getNextRandomValue);
//    for (int i = 0; i < 10; i++) {
//        printf("%d\n", myarray[i]);
//    }
//    return 0;
//}

