//#include <stdio.h>
//
//int binarySearch(int arr[], int leftIndex, int rightIndex, int findVal) {
//    /*1,3,5 //2
//     *
//     *
//     */
//    //���ҵ������м������midVal
//    int midIndex = (leftIndex + rightIndex) / 2;
//    int midVal = arr[midIndex];
//    //���leftIndex>rightIndex��˵��������鶼�ȽϹ�������û���ҵ�
//    if (leftIndex > rightIndex) {
//        return -1;
//    }
//    //���midVal>findVal˵����Ӧ����midVal����߲���
//    if (midVal > findVal) {
//        binarySearch(arr, leftIndex, midIndex - 1, findVal);
//    } else if (midVal < findVal) {
//        binarySearch(arr, midIndex + 1, rightIndex, findVal);
//    } else {
//        return midIndex;//���ظ������±�
//    }
//}
//
//void main() {
//
//    //���һ������������ж��ֲ��� {1,8, 10, 89, 1000, 1234} ��
//    //����һ���������������Ƿ���ڴ�������������±꣬
//    //���û�о���ʾ"û�������"�����ֲ��ҵ�ǰ���ǣ���������һ����������
//
//    //˼·����
//    //��������Ҫ���ҵ�����findVal
//    //1.���ҵ������м������minVal����findVal�Ƚ�
//    //2.���midVal>findVal˵����Ӧ����midVal����߲���
//    //3.���midVal<findVal˵����Ӧ����midVal���ұ߲���
//    //4.���minVal==findVal��˵���ҵ�
//    //5.���ﻹ��һ�����⣬û�п����Ҳ��������
//    int arr[] = {1, 8, 10, 89, 1000, 1234};
//    int arrLen = sizeof(arr) / sizeof(int);
//    int index = binarySearch(arr, 0, arrLen - 1, -1);
//    if(index!=-1){
//        printf("index=%d", index);
//    } else{
//        printf("û���ҵ�");
//    }
//}