//#include <stdio.h>
//
////void main() {
////    static int n;//n就是一个静态局部变量,默认初始化值0
////    printf("n=%d",n);
////}
//
//void fn(void){
//    int n = 10; //普通变量, 每次执行都会初始化，n 在栈区
//    printf("n=%d\n", n);
//    n++;
//    printf("n++=%d\n", n);
//}
//void fn_static(void) {
//    static int n = 10; //静态局部变量， 放在静态存储区，全局性质空间
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
