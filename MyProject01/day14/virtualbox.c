//#include <stdio.h>
//
///*
// * �󳤷���������ʹ�ýṹ��
// */
//struct Box {
//    int length;
//    int weight;
//    int height;
//    int volume;
//};
//
//int getvolume(struct Box *box) {
//    box->volume = box->length * box->weight * box->height;
//    return box->volume;
//}
//
//void main() {
//    struct Box box;
//    box.length = 4;
//    box.weight = 4;
//    box.height = 4;
//    int volume = getvolume(&box);
//    printf("�ó����ε����Ϊ:%d",volume);
//}