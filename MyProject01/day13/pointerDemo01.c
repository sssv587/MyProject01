//#include <stdio.h>
//
//const int MAX = 3;//常量
//int main() {
//    int var[] = {10, 100, 2000};//int 数组
//    int i, *ptr;//ptr是一个int*指针
//    int *s;
//    ptr = var;//ptr指向了var数组的首地址
//    for (i = 0; i < MAX; i++) {
//        printf("var[%d]地址=%p\n", i, ptr);
//        printf("存储值：var[%d]=%d\n", i, *ptr);
//        ptr++;//ptr = ptr+1(1个int的字节数);ptr存放值+4字节(int)
//    }
//    return 0;
//}
