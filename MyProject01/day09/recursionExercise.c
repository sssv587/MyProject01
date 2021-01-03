//#include <stdio.h>
//
//int fbn(int n) {
//    if (n == 1 || n == 2) {
//        return 1;
//    } else
//        return fbn(n - 1) + fbn(n - 2);
//}
//
//int f(int n) {
//    if (n == 1) {
//        return 3;
//    } else {
//        return 2 * f(n - 1) + 1;
//    }
//}
//
//int peach(int day) {
//    if (day == 10) {
//        return 1;
//    } else {
//        return (peach(day + 1) + 1) * 2;
//    }
//}
//
//void main() {
//    //题1:斐波那契数列
//
//    //分析
//    //1.如果 n=1 n=2时，返回1
//    //2.从n=3开始，赌赢的斐波那契是 前面两个数的和
//
//    int res = fbn(7);//res = 13
//    printf("res=%d", res);
//
//    /*题2：求函数值 已知 f(1)=3; f(n) = 2*f(n-1)+1; 
//请使用递归的思想编程，求出 f(n)的值?
//分析：因为该题的公式已经给出，所以直接使用即可
//*/
//    int res2 = f(30);
//    printf("\nres2=%d", res2);
//
//
//    /*题3：猴子吃桃子问题有一堆桃子，猴子第一天吃了其中的一半，
//    并再多吃了一个！以后每天猴子都吃其中的一半，然后再多吃一个。
//    当到第十天时，想再吃时（还没吃），发现只有1个桃子了。问题：最初共多少个桃子？
//     分析:
//     1.day=10 有1一个桃子
//     2.day=9 (day10+1)*2 = 4
//     3.day=8 (day9+1)*2=10
//     //....
//     */
//     int peachNum = peach(1);
//     printf("\n第一条有%d个桃子",peachNum);
//}
