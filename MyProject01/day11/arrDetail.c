//#include <stdio.h>
//
//void f1(int arr[]) {
//    arr[0] = arr[0] + 1;
//    printf("f1中的arr的地址=%p",arr);
//}
//
//void main() {
//    int arr[3] = {3, 4, 5};
//    printf("main中的arr的地址=%p\n",arr);
//    //数组默认是以 地址传递(传递指针)
//    f1(arr);
//    int i;
//    //遍历main函数中的arr
//    for (i = 0; i < 3; i++) {
//        printf("\narr[%d]=%d", i, arr[i]);
//    }
//}
