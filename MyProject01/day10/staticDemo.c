//#include <stdio.h>
//
////void main() {
////    static int n;//n����һ����̬�ֲ�����,Ĭ�ϳ�ʼ��ֵ0
////    printf("n=%d",n);
////}
//
//void fn(void){
//    int n = 10; //��ͨ����, ÿ��ִ�ж����ʼ����n ��ջ��
//    printf("n=%d\n", n);
//    n++;
//    printf("n++=%d\n", n);
//}
//void fn_static(void) {
//    static int n = 10; //��̬�ֲ������� ���ھ�̬�洢����ȫ�����ʿռ�
//    printf("\nstatic n=%d\n", n); // 10
//    n++; // n = 11
//    printf("\nn++=%d\n", n); // 11
//}
//int main(void) {
//  /*  fn();
//    printf("--------------------\n");*/
//    fn_static();
//    printf("--------------------\n");
// /*   fn();
//    printf("--------------------\n");*/
//    fn_static();
//    return 0;
//}
