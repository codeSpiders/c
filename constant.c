#define _CRT_SECURE_NO_WARNINGS 1
/*�����ȫ�������⣬�����ַ�����
��һ�֣��ڰ�װĿ¼������newc++file.cpp,����һ�仰����ȥ��һ�����ݣ�
�ڶ��֣��Ҽ���Ŀ����--����--c/c++--Ԥ������--Ԥ���������壬
       ����һ�仰��_CRT_SECURE_NO_WARNINGS������ȥ��ע���÷ֺŷָ����еġ�
������,�½���Ŀʱ���½�win32����̨Ӧ�ó���--��һ��--ȡ��Ԥ����ͷ
      �Ͱ�ȫ�������������й��������Ͽ���Ŀ---���
*/

#include<stdio.h>

//����ȫ����
/*int main() {
	char arr[5] = { 0 };
	scanf("%s", &arr);//����ȫ����
	printf("%s\n", arr);
	return 0;
}*/

//���泣���볣����
/*int main() {
	3;//���泣��
	3.14;//���泣��

	const int num = 4;//������,����һ�������Σ�����ֵ��ֻ���ڴ˸�ֵ
	printf("%d\n", num);
	//num = 5;//�����������ٸ�ֵ�������ڳ�ʼ��ʱ�޸�ֵ

	//int n;
	//const n = 5;
	//printf("%d\n", n);//���ֱܷ�����n;

	//const int m;
	//m = 13;
	//printf("%d\n", m);//�����͸�ֵ���ֿܷ�

	//int num2 = 10;
	//int arr[num2 ] = { 0 };//C�����У�����Ĵ�С����ȷ����Ҳ��Ҫ�ó�����

	//const int num3 = 20;
	//int arr[num3] = { 0 };//��ʹnum3Ϊ��������������Ҳ����,˵�������б���������

	 return 0;
}*/

//#define ����ı�ʾ������
/*int main() {
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);
	return 0;
}*/

//ö�ٳ���
int main() {
	enum Sex {//ö�ٶ���
		MALE,
		FEMALE
	};//MALE,FEMALEΪö�ٳ���,���ܸ�
	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", s);
	s = FEMALE;//s�Ǳ��������Ը�
	printf("%d\n", s);

	int n = 1;
	enum Sex s2 = n;//�е�python���ֵ����˼
	printf("%d\n", s2);
	return 0;
}

