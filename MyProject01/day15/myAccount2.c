//#include <stdio.h>
//#include <string.h>
//
////����һ���ṹ��
//struct MyFamilyAccount {
//    int flag;//��ʾ�Ƿ�������һ���������֧��
//    char details[3000];//��ϸ
//    double balance;//���
//};
//
////������صı���,ȫ�ֱ���
//char key = ' ';//��ʾ�û��������ĸ��˵�
//int loop = 1;//�����Ƿ��˳��˵�
//char note[20] = " "; //���������֧���ĵ�˵��
//char temp[100] = " ";//���ڸ�ʽ��ÿ�ε��������֧����Ȼ��ƴ�ӵ�detail��ȥ
//double money = 0.0;
//char choice = ' ';//��ʾ�û�ѡ�����y����n
//
////ʹ�ú�������ʾ��ϸ
//void showDetails(struct MyFamilyAccount *myFamilyAccount) {
//    if (myFamilyAccount->flag) {
//        printf("%s", myFamilyAccount->details);
//    } else {
//        printf("��ǰû����֧��ϸ...��һ�ʰ�");
//    }
//}
//
////ʹ�ú�������ɵǼ�����
//void income(struct MyFamilyAccount *myFamilyAccount) {
//    printf("\n����������:");
//    scanf("%lf", &money);
//    getchar();//���˻س�
//    myFamilyAccount->balance += money;//�������
//    printf("��������˵��:");
//    scanf("%s", note);
//    getchar();//���˻س�
//    sprintf(temp, "\n����\t%.2f\t\t%.2f\t\t\t%s", money, myFamilyAccount->balance, note);//��������Ϣ��д�뵽temp�ַ�����
//    //����Ϣƴ�ӵ�detail
//    strcat(myFamilyAccount->details, temp);
//    myFamilyAccount->flag = 1;
//}
//
////���һ���Ǽ�֧��
//void pay(struct MyFamilyAccount *myFamilyAccount) {
//    printf("\n����֧�����:");
//    scanf("%lf", &money);
//    getchar();
//    //�ж��Ƿ�֧��
//    if (money > myFamilyAccount->balance) {//����
//        printf("����...");
//        return;
//    }
//    printf("\n����֧��˵��:");
//    scanf("%s", note);
//    getchar();
//    myFamilyAccount->balance -= money;
//    sprintf(temp, "\n֧��\t%.2f\t\t%.2f\t\t\t%s", money, myFamilyAccount->balance, note);
//    strcat(myFamilyAccount->details, temp);
//    myFamilyAccount->flag = 1;
//}
//
////ʹ�ú���������˳�
//void exit(){
//    printf("\n��ȷ��Ҫ�˳���?y/n");
//    do {
//        scanf("%c", &choice);
//        getchar();
//        if (choice == 'y' || choice == 'n') {
//            break;
//        }
//        printf("\n���������������������");
//    } while (1);
//    if (choice == 'y') {
//        loop = 0;
//    }
//}
//
//
////����ר��������ʾ�˵�
//void mainMenu(struct MyFamilyAccount *myFamilyAccount) {
//    do {
//        printf("\n---------��ͥ��֧�������---------");
//        printf("\n         1 ��֧��ϸ");
//        printf("\n         2 �Ǽ�����");
//        printf("\n         3 �Ǽ�֧��");
//        printf("\n         4 ��    ��");
//        printf("\n ��ѡ��(1-4)��");
//        scanf("%c", &key);
//        getchar();//���˻س�
//        switch (key) {
//            case '1':
//                showDetails(myFamilyAccount);
//                break;
//            case '2':
//                income(myFamilyAccount);
//                break;
//            case '3':
//                pay(myFamilyAccount);
//                break;
//            case '4':
//                exit();
//        }
//    } while (loop);
//
//    printf("���˳��˼�ͥ�������~~");
//}
//
//void main() {
//    //����һ���ṹ�����
//    struct MyFamilyAccount myFamilyAccount;
//    //��ʼ��
//    myFamilyAccount.flag = 0;
//    myFamilyAccount.balance = 1000.0;
//    //(����),����ֱ�Ӹ�ֵ,ʹ�ÿ����ķ�ʽ��ֵ
//    memset(myFamilyAccount.details, 3000, 0);
//    strcpy(myFamilyAccount.details, "-----------------��ǰ��֧��ϸ��¼-----------------\n��֧\t��֧���\t�˻����	\t˵  ��");
//    //����mainMenu��ʾ�˵�
//    mainMenu(&myFamilyAccount);
//}