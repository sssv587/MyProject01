//#include <stdio.h>
//
///*
// * 打印空心菱形
// */
//void main() {
////         *       1 4      1
////        * *      3 3      2
////       *   *     5 2      3
////      *     *    7 1      4
////     *       *   9 0      5  12  8
////      *     *    7 1      6  13  7
////       *   *     5 2      7  14  6
////        * *      3 3      8      5
////         *       1 4      9      4
//    int i, j, k;
//    int TotalHeight = 0;
//    printf("请输入需要的层数:");
//    scanf("%d", &TotalHeight);
//    int mid = TotalHeight / 2 + 1;
//    int midLast = TotalHeight / 2;
//    for (i = 1; i <= mid; i++) {
//        for (k = 1; k <= mid - i; k++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            if (j == 1 || j == 2 * i - 1) {
//                printf("*");
//            } else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    for (i = 1; i <= midLast; i++) {
//        for (k = 1; k <= i; k++) {
//            printf(" ");
//        }
//        for (j = 1; j <= TotalHeight - 2 * i; j++) {
//            if (j == 1 || j == TotalHeight - 2 * i) {
//                printf("*");
//            } else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//}

