#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ַ���
/*int main() {
	char arr1[] = "abc";//\0�������ַ�����β
    // char arr2[] = { 'a','b','c','\0' };//\0--�ַ����Ľ�����־��	
	char arr2[] = { 'a','b','c',0 };//0�˴�����Ҳ����(\0��ASCII	������0��
	 //�˴���0���ܼӵ����ţ�����������һ���ַ��������ǽ�����־
	char arr3[] = { 'a','b','c' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//strlen---string length ���ַ����ĳ���
	printf("%d\n", strlen(arr1));//3��\0�����ڳ�����
	printf("%d\n", strlen(arr2));//3
	printf("%d\n", strlen(arr3));//���ֵ

	return 0;
}*/

//ת���ַ�
int main() {
	printf("abcn");
	printf("abc\n");//\nת���ַ�����ʾ����

	printf("c:\test\32\test.c\n");//\t--->�Ʊ����\32-->
	printf("c:\\test\\32\\test.c\n");//\\��\���ٱ�ʾת��

	printf("%c\n", '\'');
	printf("%s\n", "\"");

	printf("(are you ok??)\n");//??)--->����ĸ��(�����﷨,�����Ѳ�������)
	
	printf("%d\n", strlen("c:\test\32\test.c"));//13,\32��Ϊ�˽��Ƶ�����
	//ת����ʮ���Ƶ������ҳ���Ӧ��ASCII��ֵ(26)����Ӧ���ַ���
	//\ddd  ddd��ʾ�˽��Ƶ����֣��ٶ�ӦASCII�룬��Ӧ���ַ���
	//\xdd  dd��ʾʮ�����Ƶ����֣��ٶ�ӦASCII�룬��Ӧ���ַ���

	return 0;
}

///*c���Բ�֧��Ƕ��ע�ͣ���/*/*  */*/
//ע�Ϳ�ݼ�ctr+k+c;ȡ��ע��Ϊctr+k+u
