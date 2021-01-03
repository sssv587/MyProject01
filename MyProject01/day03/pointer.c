//讲解指针的入门
//#include <stdio.h>
//
//void main() {
//    int num = 1;
//    //定义一个指针变量，指针
//    //说明
//    //1.int*表示类型为 指针类型
//    //2.名称 ptr,ptr就是一个int*的类型
//    //3.ptr指向了一个int类型的变量的地址
//    int *ptr = &num;
//
//    //num的地址是多少
//    //说明1:如果要输出一个变量的地址，使用的格式是%p
//    //说明2:&num表示取出num这个变量的地址为
//    printf("num的值=%d num 地址=%p", num, &num);
//
//    //1.指针变量，本身也有地址
//    //2.指针变量，存放的地址ptr
//    //3.获取指针指向的值 *ptr
//    printf("\nptr的地址是%p ptr存放的值是一个地址%p ptr指向的值=%d",&ptr,ptr,*ptr);
//}
