//#include <stdio.h>
//#include <string.h>//ͷ�ļ��������ַ������ϵͳ����
//
//void main() {
//
//    char src[50] = "abc", dest[50]; //�����������ַ�����(�ַ���) , ��СΪ50
//    char *str = "abcdff";
//    printf("str.len=%d\n", strlen(str)); //ͳ���ַ����Ĵ�С
//
//    //��ʾ�� "hello" ������ src
//    //ע�⣬�����ַ����Ὣԭ�������ݸ���
//    strcpy(src, "hello");
//    printf("src=%s\n", src);
//
//    strcpy(dest, "�й��");
//    //strcat �ǽ� src �ַ������������ӵ� dest ,���ǲ��Ḳ��destԭ�������ݣ���������!!
//    strcat(dest, src); // "hello�й��"
//    printf("���յ�Ŀ���ַ����� dest=|%s|", dest);
//}