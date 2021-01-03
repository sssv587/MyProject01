//#include <stdio.h>
//
//int *func() {
////    int n = 100;//局部变量,在func返回时，就会销毁
//    static int n = 100;//如果这个局部变量是static性质的，那么n存放数据的空间在静态数据区
//    return &n;
//}
//
//int main() {
//    int *p = func();//返回指针
//    int n;
//    printf("okok~\n");//可能是使用到 局部变量 int n =100 占用空间
//    n = *p;
//    printf("values=%d", n);//思考，是否能够输出100?不一定
//    return 0;
//}
