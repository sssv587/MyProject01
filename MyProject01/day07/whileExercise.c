//#include <stdio.h>
//#include <string.h>
//
//void main() {
//    //打印1-100之前所有能被3整除的数
////    int i = 1;
////    int max = 100;
////    while (i <= max) {
////        if (i % 3 == 0) {
////            printf("i=%d 能被3整除\n", i);
////        }
////        i++;
////    }
////
//    //打印40-200之间的所有的偶数
////    int i = 40;
////    int max = 200;
////    while (i <= max) {
////        if (i % 2 == 0) {
////            printf("i=%d 是偶数\n", i);
////        }
////        i++;
////    }
//
//    //不断输入姓名，直到输入"exit"为止[使用while完成]
//    //分析
//    //1.需要接受用户的输入，字符串[字符数组]
//    //2.提示:<string.h>有一个stecmp函数，判断两个字符串是否相等
//	// int strcmp(const char *str1, const char *str2) // 返回0 表示相等，非0表示不相等
//    char name[10] = "";
//    while (strcmp(name, "exit") != 0){
//        printf("请输入名字");
//        scanf("%s",name);//这里不需要加&name,因为数组的名称就是地址
//        printf("你输入的名字是=%s\n",name);
//    }
//    printf("退出while循环");
//}

