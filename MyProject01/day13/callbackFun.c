//#include <stdio.h>
//#include <stdlib.h>
//
////�ص�����
////1.int (*f)(void)
////2.f���Ǻ���ָ�룬�����Խ��յĺ�����(����int��û���βεĺ���)
////3.f�����ﱻ initArray���ã��䵱�˻ص�������ɫ
//void initArray(int *array, int arraySize, int(*f)(void)) {
//    int i;
//    for (i = 0; i < arraySize; i++) {
//        array[i] = f();//ͨ�� ����ָ�������getNextRandomValue����
//        //array[i] = (*f)();
//    }
//}
//
////��ȡ���ֵ
//int getNextRandomValue(void) {
//    return rand();//randϵͳ�������᷵��һ���������
//}
//
//int main(void) {
//    int myarray[10];
//
//    //˵��
//    //1.����initArray����
//    //2.������һ��������getNextRandomValue(��ַ),��Ҫʹ�ú���ָ�����
//    initArray(myarray, 10, getNextRandomValue);
//    for (int i = 0; i < 10; i++) {
//        printf("%d\n", myarray[i]);
//    }
//    return 0;
//}

