//#include <stdio.h>
//#include <string.h>
//
//void main() {
////    int j, i;
////    for (j = 0; j < 4; j++) {
////        for (i = 0; i < 10; i++) {
////            if (i == 2) { break; }
////            printf("i = %d \n", i);
////        }
////    }
//
//
////100以内的数求和，求出当和第一次大于20的当前数
////    int i = 1;
////    int sum = 0;
////    for (i = 1; i <= 100; i++) {
////        sum += i;
////        if (sum > 20) {
////            printf("当和第一次大于20的当前数=%d", i);
////            break;
////        }
////    }
//
//    //实现登录验证，有三次机会，如果用户名为”张无忌” ,密码”888”提示登录成功，
//    //否则提示还有几次机会，请使用for 循环完成
//
//    //分析
//    //1.首先要定义一个变量，保存登录的机会(次数)chance
//    //2.定义两个字符数组，接收用户名和密码
//    //3.使用for循环+break，如果登陆成功，就提前退出
//    int chance = 3;
//    int loginCount = chance;
//    char name[10] = "";
//    char pwd[10] = "";
//    int i;//循环变量
//    for (i = 1; i <= loginCount; i++) {
//        printf("请输入名字");
//        scanf("%s", name);//字符数组，不要加&
//        printf("请输入密码");
//        scanf("%s", pwd);
//
//        //判断字符串相同使用strcmp
//        if (strcmp("张无忌", name) == 0 && strcmp("888", pwd) == 0) {
//            printf("登陆成功");
//            break; // for + break
//        } else {
//            //机会次数减少
//            chance--;
//            printf("你还有%d次登录机会\n", chance);
//        }
//    }
//
//}