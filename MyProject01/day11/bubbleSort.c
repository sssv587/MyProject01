//#include <stdio.h>
////冒泡排序的函数
//void bubbleSort(int arr[],int arrLen){
//    int i, j;
//    int t;//临时变量
//    for (i = 0; i < arrLen - 1; i++) {
//        for (j = 0; j < arrLen - i - 1; j++) {
//            //如果前面的数大于后面的数，就交换
//            if (arr[j] > arr[j + 1]) {
//                t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//            }
//        }
//    }
//    //输出看看第一轮的排序后的情况
//    for (j = 0; j < 5; j++) {
//        printf("%d\n", arr[j]);
//    }
//}
//void main() {
//    int arr[] = {3, 9, -1, 10, -2};
//    int arrLen = sizeof(arr) / sizeof(int);//通过计算得到
//    bubbleSort(arr,arrLen);//数组默认是地址传递(指针)
//}
