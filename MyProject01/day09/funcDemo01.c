//#include <stdio.h>
//
////˵��
////1.������ cal
////2.û�з���ֵ void
////3.�β��б�Ϊ(int n1,int n2,char oper)
//double cal(int n1, int n2, char oper) {
//    //����һ������res,����������
//    double res = 0.0;
//
//    switch (oper) {
//        case '+' :
//            res = n1 + n2;
//            break;
//        case '-':
//            res = n1 - n2;
//            break;
//        case '*':
//            res = n1 * n2;
//            break;
//        case '/':
//            res = n1 / n2;
//            break;
//        default :
//            printf("������������~");
//    }
//    printf("%d %c %d = %.2f\n", n1, oper, n2, res);
//
//    return res;
//}
//
//void main() {
//
//    int num1 = 10; //��һ����
//    int num2 = 20;//�ڶ�����
//    double res = 0.0;//���
//    char oper = '-'; //�����
//
//
//    //������Ҫ������������һ�������
//    int num3 = 60;
//    int num4 = 80;
//    double res2 = 0.0;
//    char oper2 = '*';
//
//    //ʹ�ú��������������������
//
//    printf("ʹ�ú����������������~~");
//    res = cal(num1, num2, oper);//���ú�����ʹ�ú���
//
//    printf("\n cal�������صĽ�� res=%.2f",res);
//
//    //ʹ�ú�����ɵڶ�����������
//    res2 = cal(num3,num4,oper2);//���ú�����ʹ�ú���
//    printf("\n cal�������صĽ�� res2=%.2f",res2);
//
//    //��ͳ����
//
//    /*
//    switch(oper2) {
//    case '+' :
//        res2 = num3 + num4;
//        break;
//    case '-':
//        res2 = num3 - num4;
//        break;
//    case '*':
//        res2 = num3 * num4;
//        break;
//    case '/':
//        res2 = num3 / num4;
//        break;
//    default :
//        printf("������������~");
//    }
//    printf("%d %c %d = %.2f\n", num3, oper2, num4, res2); */
//
//}