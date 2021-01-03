//#include <stdio.h>
//
//void main(){
//    //浮点型常量默认为double型，声明float型常量时，须后加'f'或'F'
//
//    float d1 = 1.1696758; //从'double'到'float'截断
//    float d2 = 1.1f;//1.1f就是float
//    double d3 = 1.3;
//
//    double d4 = 5.12;
//    double d5 = .512; //等价0.512
//
//    double d6 = 5.12e2; //等价 5.12 * (10^2) = 512
//    double d7 = 5.12e-2;//等价 0.0512
//
//    //在输出时，如果格式为%f默认保留小数点6位
//    printf("d1=%.15f d2=%f d3=%f d4=%f d5=%f d6=%f d7=%f",d1,d2,d3,d4,d5,d6,d7);
//
//}