//#include <stdio.h>
//#include <string.h>
//
///*
//    1.һ�������������˵�������ȡ��ͬ�۸����Ʊ��
//    2.���д���˽ṹ��(Visitor)����������ξ����ܹ��������Ʊ�۸����
//    3.��������>18 , ��ƱΪ20Ԫ�����������ѡ�
//    4.����ѭ���ӿ���̨�������ֺ����䣬��ӡ��Ʊ�շ����, ����������� n ,���˳�����
// */
////����һ���ṹ��
//struct Visitor {
//    char name[10];
//    int age;
//    double pay; //Ӧ��Ʊ��
//};
//
////��д��������ҵ��
////˵��:��Ϊ�ṹ��Ĭ����ֵ���ݣ��´��һ���������ݣ�Ч�ʽϵ�
////��ˣ�Ϊ�����Ч�ʣ�����ֱ�ӽ��յ�ַ(ָ��)
//void ticket(struct Visitor *visitor) {
//    //�ж�
//    if (visitor->age > 18) {
//        visitor->pay = 20;
//    } else {
//        visitor->pay = 0;
//    }
//
//}
//
//
//void main() {
//    //����
//    //�����ṹ�����(����һ���ο�)
//    struct Visitor visitor;
//    //ѭ�����������ֺ�����
//    while (1) {
//        printf("�������ο�����\n");
//        scanf("%s", visitor.name);
//        //�ж������������n,���˳�����
//        if (!strcmp("n", visitor.name)) {
//            break;
//        }
//        printf("�������ο�����\n");
//        scanf("%d", &visitor.age);
//
//        //���ú���ticket,��ȡӦ����Ʊ��
//        ticket(&visitor);
//        printf("���ο�Ӧ��Ʊ��=%.2f", visitor.pay);
//    }
//    printf("�˳�����");
//}