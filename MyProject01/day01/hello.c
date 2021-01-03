//开发项目

//引入头文件，后面还会详细介绍
#include <stdio.h>
#include <stdbool.h>
//说明
//1.这是一个main函数，是程序执行的入口，即程序是从main函数开始执行
//2.void表示main函数没有返回值
//3.main(){
//函数体，即一条条语句
//}
//void main() {
//    //说明
//    //1.printf是一个函数，需要是一个头文件才能使用
//    //2.printf是在<stdio.h>，需要引入该头文件
//    printf("hello world!");
//
//    getchar();//让窗口停留
//}

//void main() {
//    //演示一下常用转移字符的使用
//    //说明
//    //1.\t是表示一个制表位
//    //2.\n表示换行输出
//    //3.\\第一个\是转义，第二个\表示输出的内容
//    //4.\"第一个\是转义，第二个"表示输出内容
//    printf("北京\t上海\t天津\n");
//
//    printf("张三说 你好!\n");
//
//    printf("hello,\\world\n");
//    printf("hello,\"world\n");
//    printf("hello,\'world\n");
//    //分析\r表示回车，不是换行
//    //1.先输出:张无忌赵敏周
//    //2.输出芷若小昭敏周
//    //最后输出结果就是芷若小昭敏周
//    printf("张无忌赵敏周\r芷若小昭\n");
//
//    printf("姓名\t年龄\t籍贯\t住址\njohn\t12\t河北\t北京");
//    getchar();//让控制台不退出
//}

//函数
///*
// * 函数名:sum
// * 参数:int n1,int n2
// * 返回类型:int,即该函数返回 整数
// * 功能:sum函数是返回两个数的和
// * 作者:yuhang.sun
// * 日期:xxxx年x月x日
// */
//int sum(int n1, int n2) {
//    //返回n1和n2的和
//    printf("ok1");
//    return n1 + n2;
//}
//
////行位风格
//void test() {
//    if (true) {
//        printf("ok");
//    }
//}
//
////次行风格
//void  test2()
//{
//    if(true)
//    {
//        printf("ok");
//    }
//}