//#include <stdio.h>
//
//void main() {

    //定义变量保存秒数，打印输出xx小时，xx分钟xx秒
    //思路
    //1.定义变量保存 秒数 second
    //2.定义变量保存 小时 hour
    //3.定义变量保存 分钟 min
    //4.定义变量保存 剩余秒数 leftSecond

//    int second = 238123;
//    int hour = second / 3600;
//    int min = second % 3600 / 60;
//    int leftSecond = second% 60;
//
//    printf("%d 秒 合%d小时%d分钟%d秒",second,hour,leftSecond);

//    //实现对三个整数进行排序，输出时按照从小到大的顺序输出 => 冒泡
//    int n1 = 10;
//    int n2 = 8;
//    int n3 = 5;
//
//    printf("最初顺序 n1=%d n2=%d n3=%d\n",n1,n2,n3);
//    //思路如下
//    //1.从小到大将值保存 n1 n2 n3
//    //2.n1 和 n2比较，如果n1大于n2，则交换
//    //3.n2 和 n3比较，如果n2大于n3，则交换
//    //4.n1和n2比较，如果n1大于n2，则交换
//    int temp = 0;//temp是用于交换的临时变量
//    if (n1 > n2){
//        temp = n1;
//        n1 = n2;
//        n2 = temp;
//    }
//
//    //输出
//    printf("第一次处理 n1=%d n2=%d n3=%d\n",n1,n2,n3);
//
//    if (n2 > n3){
//        temp = n2;
//        n2 = n3;
//        n3 = temp;
//    }
//    printf("第二次处理 n1=%d n2=%d n3=%d\n",n1,n2,n3);
//
//    if (n1 > n2){
//        temp = n1;
//        n1 = n2;
//        n2 = temp;
//    }
//    printf("第三次处理 n1=%d n2=%d n3=%d",n1,n2,n3);
//
//}
