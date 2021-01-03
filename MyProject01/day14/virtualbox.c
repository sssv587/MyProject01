//#include <stdio.h>
//
///*
// * 求长方体的体积，使用结构体
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
//    printf("该长方形的体积为:%d",volume);
//}