//#include <stdio.h>
//
//void main() {
//    //统计3个班成绩情况，每个班有五名同学，求出各个班的平局分还有所有班级的平均分[学生的成绩从键盘输入]
//
//    //分析
//    //编程技巧1.先死后活 2.先简单再复杂(分解)3.根据需要增加或修改相应的代码
//    //1.各个班的平局分
//    //2.所有班级的平均分,得到所有班级的总分 allClassTotalScore
//    //3.定义变量表示 班级个数 classNum，定义变量表示学生个数 stuNum
//    //4.定义变量classTotalScore 每个班级总分
//    //5.定义变量score，接收学生成绩
//    //6.使用两层for循环
//
//    //增加新功能 统计三个班及格人数，每个班有5名同学
//    //分析
//    //1.定义一个变量count,保存及格人数
//    //2.当接收到一个学生成绩后，看看是否及格，如果及格，则累计到count
//    int stuNum = 5;
//    int classNum = 3;
//    double classTotalScore = 0.0;
//    double score = 0.0;
//    double allClassTotalScore = 0.0;//所有班级总成绩
//    int count = 0;//及格人数
//    int i, j;
//    for (i = 1; i <= classNum; i++) {//控制班级循环次数
//        //每次给一个班级输出成绩时，需要清零
//        classTotalScore = 0.0;
//        for (j = 1; j <= stuNum; j++) {//控制学生循环次数
//            printf("请输入第%d班级的 第%d个学生的成绩\n", i, j);
//            scanf("%lf", &score);
//            if (score >= 60) {
//                count++;
//            }
//            classTotalScore += score;//累积成绩
//        }
//        allClassTotalScore += classTotalScore;//累计所有班级成绩
//        //当内层的for循环结束后，就得到了该班级的总成绩
//        printf("第%d个班级的平局分 =%.2f\n", i, classTotalScore / stuNum);
//    }
//    //输出所有班级的成绩
//    printf("所有班级的平局分 =%.2f\n", allClassTotalScore / (classNum * stuNum));
//    printf("所有班级的及格人数 =%d\n", count);
//}