//#include <stdio.h>
//
//void main() {
//    int b1 = 0, b2 = 0;
//    // 将 b2==5>0 改成 b2=5>0 又输出什么
//    // 充分考虑运算符的优先级问题
////    if ((b1 == 2 > 3) && (b2 = 5 > 0)) {
////        printf("\n(b1=2>3) && (b2=5>0)为真"); //输出
////    }
////    printf("\nb1= %d ;b2= %d", b1, b2);// b1=0 b2=1
//
//
//    //输出小写的a-z以及大写的Z—A
//    //char c1;
////    for (char c1 = 'a'; c1 <= 'z'; c1++) {
////        printf("%c", c1);
////    }
////    printf("\n=============================\n");
////    for (char c1 = 'Z'; c1 >= 'A'; c1--) {
////        printf("%c", c1);
////    }
//
//
//    //求出1-1/2+1/3-1/4…..1/100的和
//    //思路分析，找到算式的规律，并求解
//    // 1-1/2+1/3-1/4…..1/100 = (1/1)-(1/2)+(1/3)-(1/4)..... (1/100)
//    // 分母为奇数， 则符号时 +
//    // 分母为偶数， 则符号时 -
//
//    //定义一个变量 sum来统计和
//    double sum = 0.0;
//    for (int i = 1; i < 100; i++) {
//        //如果i是奇数
//        if (i % 2 != 0) {
//            sum += 1.0 / i;//注意，考虑保留小数1.0而不是1
//        } else {
//            sum -= 1.0 / i;
//        }
//    }
//    printf("sum=%.2f", sum);
//
//}

