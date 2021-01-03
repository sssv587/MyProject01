//#include <stdio.h>
//
//int binarySearch(int arr[], int leftIndex, int rightIndex, int findVal) {
//    /*1,3,5 //2
//     *
//     *
//     */
//    //先找到数组中间这个数midVal
//    int midIndex = (leftIndex + rightIndex) / 2;
//    int midVal = arr[midIndex];
//    //如果leftIndex>rightIndex，说明这个数组都比较过，但是没有找到
//    if (leftIndex > rightIndex) {
//        return -1;
//    }
//    //如果midVal>findVal说明，应该在midVal的左边查找
//    if (midVal > findVal) {
//        binarySearch(arr, leftIndex, midIndex - 1, findVal);
//    } else if (midVal < findVal) {
//        binarySearch(arr, midIndex + 1, rightIndex, findVal);
//    } else {
//        return midIndex;//返回该数的下标
//    }
//}
//
//void main() {
//
//    //请对一个有序数组进行二分查找 {1,8, 10, 89, 1000, 1234} ，
//    //输入一个数看看该数组是否存在此数，并且求出下标，
//    //如果没有就提示"没有这个数"。二分查找的前提是，该数组是一个有序数组
//
//    //思路分析
//    //比如我们要查找的数是findVal
//    //1.先找到数组中间这个数minVal，和findVal比较
//    //2.如果midVal>findVal说明，应该在midVal的左边查找
//    //3.如果midVal<findVal说明，应该在midVal的右边查找
//    //4.如果minVal==findVal，说明找到
//    //5.这里还有一个问题，没有考虑找不到的情况
//    int arr[] = {1, 8, 10, 89, 1000, 1234};
//    int arrLen = sizeof(arr) / sizeof(int);
//    int index = binarySearch(arr, 0, arrLen - 1, -1);
//    if(index!=-1){
//        printf("index=%d", index);
//    } else{
//        printf("没有找到");
//    }
//}
