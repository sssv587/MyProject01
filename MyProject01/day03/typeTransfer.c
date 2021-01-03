//#include <stdio.h>
//
//void main() {
//
//    //举例1
//    char c1 = 'a';
//    int num1 = c1;//ok
//    double d1 = num1; //ok
//
//    //ok
//    //举例2
//    short s1 = 10;
//    int num2 = 20;
//    int num3 = s1 + num2;
//
//    //举例3
//    float f1 = 1.1f; //ok
//    double d2 = 4.12345346;
//    f1 = d2; //出现精度损失(double -> float)
//    printf("f1 = %.8f",f1);
//}