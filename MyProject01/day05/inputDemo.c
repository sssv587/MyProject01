//#include <stdio.h>
//
//void main() {
//
//    //使用字符数组接收名
//    char name[10] = "";
//    int age = 0;
//    double sal = 0.0;
//    char gender = ' ';
//
//    //提示用户输入信息
//    printf("请输入名字:");
//    //数组的名称本身表示地址
//    //scanf("%s",name)表示接收一个字符串，存放到name字符数组中
//    scanf("%s",name);
//
//    printf("请输入年龄:");
//    scanf("%d",&age);//因为我们将得到输入存放到age变量指向地址,因此需要加&
//
//    printf("请输入薪水:");
//    scanf("%lf",&sal);//接收一个double时,格式参数%lf
//
//    printf("请输入性别(m/f):");
//    scanf("%c",&gender);//这里是接收到了上面的回车字符
//    scanf("%c",&gender);//等待用户输入
//
//    //输出得到信息
//    printf("\nname %s age %d sal %.2f gender %c",name,age,sal,gender);
//
//    getchar();//接收到一个回车
//    getchar();//这个getchar才会让控制台暂停
//}