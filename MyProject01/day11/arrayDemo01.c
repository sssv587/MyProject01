//#include <stdio.h>
//
//void main() {
//    /*一个养鸡场有6只鸡，它们的体重分别是3kg,5kg,1kg,
//3.4kg,2kg,50kg 。请问这六只鸡的总体重是多少?平
//均体重是多少? 请你编一个程序。*/
//
//    //1.定义数组
//    double hens[6];
//    //2.初始化数组的每个元素
//    hens[0] = 3;//第一个元素
//    hens[1] = 5;
//    hens[2] = 1;
//    hens[3] = 3.4;
//    hens[4] = 2;
//    hens[5] = 50;
//
//    double totalWeight = 0.0;
//    double avgWeight = 0.0;
//    //3.遍历数组
//    //如何得到数组的大小
//
//    int i, arrLen;
//    //sizeof(hens)数组的总的大小
//    //6*8=48
//    //sizeof(double)返回一个double占用的字节
//    arrLen = sizeof(hens) / sizeof(double);
////    printf("sizeof(hens)=%d\n", sizeof(hens));
//    for (i = 0; i < arrLen; i++) {
//        totalWeight += hens[i];//累计每只鸡的体重
//    }
//    avgWeight = totalWeight / arrLen;
//    printf("总体重totalWeight=%.2f\n平均体重avgWeight=%.2f", totalWeight, avgWeight);
//
//}

