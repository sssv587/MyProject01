//#include <stdio.h>
//
//void main() {
//
//    /*
//    ����һ��char���͵�26��Ԫ�ص����飬�ֱ� ����'A'-'Z����
//    ʹ��forѭ����������Ԫ�ز���ӡ��������ʾ���ַ��������� 'A'+1 -> 'B'
//
//    */
////    char arr[26];
////    int i;
////    for (i = 0; i < 26; i++) {
////        arr[i] = 'A' + i;
////    }
////    //���
////    for (i = 0; i < 26; i++) {
////        printf("%c\n",arr[i]);
////    }
//
//    /*
//    �����һ����������ֵ�����õ���Ӧ���±�
//    ����
//    1. �������� ��С 5
//    2. �ٶ� max = arr[0] �������ֵ��Ȼ���������κ��������������бȽϣ�������ֱ� �б�max
//    ������������Ӧ�ı仯(�Ѹ��������� max)�������Ǳ������������飬max ���������
//    */
//    int arr[] = {0, -1, 89, 99, 4};
//    int arrLen = sizeof(arr) / sizeof(int);
//    int max = arr[0];
//    int maxIndex = 0;
//    int i;
//    for (i = 1; i < arrLen; i++) {
//        //��������б�max������������Ӧ�ı仯(�����ֵ����max)
//        if (arr[i] > max) {
//            max = arr[i];
//            maxIndex = i;
//        }
//    }
//    printf("max=%d maxIndex=%d", max, maxIndex);
//}