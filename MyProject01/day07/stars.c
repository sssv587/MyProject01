//#include <stdio.h>
//
//void main() {
//    //打印空心金字塔
//
//    //化繁为简，先死后活
//
//    //分析
//    //1.打印矩形
//    /*
//     *****
//     *****
//     *****
//     *****
//     *****
//     */
//    //2.打印半个金字塔
//    /*
//     *
//     **
//     ***
//     ****
//     *****
//     */
//    //3.打印整个金字塔
//    /*
//         *       //1个 (2*i-1)=1  空格有 4 (总的层数-i) = 5-1=4
//        ***      //3个 (2*i-1)=3  空格有 3 (总的层数-i) = 5-2=3
//       *****     //5个 (2*i-1)=5  空格有 2 (总的层数-i) = 5-3=2
//      *******    //7个 (2*i-1)=7  空格有 1 (总的层数-i) = 5-4=1
//     *********   //9个 (2*i-1)=9  空格有 0 (总的层数-i) = 5-5=0
//     */
//    //4.打印空心金字塔
//    //在输出*号的时候，需要考虑是否输出的*还是空格
//    //分析
//    /*
//         *       // i=1 该输入*就输入*
//        * *      // 如果是 第一个*和最后一个*输出的是*，其它应该输入空格
//       *   *     // 如果是 第一个*和最后一个*输出的是*，其它应该输入空格
//      *     *    // 如果是 第一个*和最后一个*输出的是*，其它应该输入空格
//     *********   // i=5 该输入*就输入*
//     */
//    //将5层，改成一个变量totalLevel
//    //5.打印空心菱形
//    int i, j, k, totalLevel = 10;
//    for (i = 1; i <= totalLevel; i++) { //控制层
//        //输出空格，使用k控制空格的循环
//        for (k = 1; k <= totalLevel - i; k++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            if (j == 1 || j == 2 * i - 1 || i == totalLevel) { //i==5表示最下层
//                printf("*");
//            } else {
//                printf(" ");
//            }
//
//        }
//        printf("\n");
//    }
//}