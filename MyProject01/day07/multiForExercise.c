//#include <stdio.h>
//
//void main() {
//    //ͳ��3����ɼ������ÿ����������ͬѧ������������ƽ�ַֻ������а༶��ƽ����[ѧ���ĳɼ��Ӽ�������]
//
//    //����
//    //��̼���1.������� 2.�ȼ��ٸ���(�ֽ�)3.������Ҫ���ӻ��޸���Ӧ�Ĵ���
//    //1.�������ƽ�ַ�
//    //2.���а༶��ƽ����,�õ����а༶���ܷ� allClassTotalScore
//    //3.���������ʾ �༶���� classNum�����������ʾѧ������ stuNum
//    //4.�������classTotalScore ÿ���༶�ܷ�
//    //5.�������score������ѧ���ɼ�
//    //6.ʹ������forѭ��
//
//    //�����¹��� ͳ�������༰��������ÿ������5��ͬѧ
//    //����
//    //1.����һ������count,���漰������
//    //2.�����յ�һ��ѧ���ɼ��󣬿����Ƿ񼰸�����������ۼƵ�count
//    int stuNum = 5;
//    int classNum = 3;
//    double classTotalScore = 0.0;
//    double score = 0.0;
//    double allClassTotalScore = 0.0;//���а༶�ܳɼ�
//    int count = 0;//��������
//    int i, j;
//    for (i = 1; i <= classNum; i++) {//���ư༶ѭ������
//        //ÿ�θ�һ���༶����ɼ�ʱ����Ҫ����
//        classTotalScore = 0.0;
//        for (j = 1; j <= stuNum; j++) {//����ѧ��ѭ������
//            printf("�������%d�༶�� ��%d��ѧ���ĳɼ�\n", i, j);
//            scanf("%lf", &score);
//            if (score >= 60) {
//                count++;
//            }
//            classTotalScore += score;//�ۻ��ɼ�
//        }
//        allClassTotalScore += classTotalScore;//�ۼ����а༶�ɼ�
//        //���ڲ��forѭ�������󣬾͵õ��˸ð༶���ܳɼ�
//        printf("��%d���༶��ƽ�ַ� =%.2f\n", i, classTotalScore / stuNum);
//    }
//    //������а༶�ĳɼ�
//    printf("���а༶��ƽ�ַ� =%.2f\n", allClassTotalScore / (classNum * stuNum));
//    printf("���а༶�ļ������� =%d\n", count);
//}