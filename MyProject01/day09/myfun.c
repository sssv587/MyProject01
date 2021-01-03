#include <stdio.h>

//实现int myCal(int n1,int n2, char oper)
int myCal(int n1, int n2, char oper) {
    //定义一个变量res,保存运算结果
    double res = 0.0;

    switch (oper) {
        case '+' :
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = n1 / n2;
            break;
        default :
            printf("你的运算符有误~");
    }
    printf("%d %c %d = %.2f\n", n1, oper, n2, res);

    return res;
}
