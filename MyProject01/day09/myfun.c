#include <stdio.h>

//ʵ��int myCal(int n1,int n2, char oper)
int myCal(int n1, int n2, char oper) {
    //����һ������res,����������
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
            printf("������������~");
    }
    printf("%d %c %d = %.2f\n", n1, oper, n2, res);

    return res;
}
