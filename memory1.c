#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�������ͣ�
//1.��������:char,short,int,long,long long, float, double
//2.�Զ������ͣ��ֽй������ͣ��� 

//���͵����壺
//1.ʹ�������������ʱ�������ڴ�ռ�Ĵ�С��
//2.��ο����ڴ�ռ���ӽ�

/*int main() {
	int a = 10;//�ڴ棺0a 00 00 00
	float b = 10.0;//�ڴ棺00 00 20 41
	return 0;
}*/

//���ͼ��壺
//1.char:unsigned char (0~255); signed char (-128~127)
//2.short:unsigned short [int] ();signed short ()
//3.int:unsigned int ();signed int ()
//4.long:unsigned long [int] ();signed long()

//�����ͼ��壺
//1.float:
//2.double:

//�������ͣ�
//1.�������ͣ�
//2.�ṹ������,struct:
//3.ö�����ͣ�enum:
//4.�����壬union:

//ָ�����ͣ�
// int* p
// char* p
//float* p
//void* p

//�����ͣ�
//void��ʾ�����ͣ��������͡�ͨ��Ӧ���ں������ͣ������Ĳ�����ָ�����ͣ�
/*void test(void) {//���ܴ˴�����void�����Ǵ��˲Σ�test����ִ�У�ֻ�ǻᱨ����
//void test() {//()Ϊ�գ����ǵ���ʱ���Դ��Σ���Ӱ��test����ִ��
	printf("hehe\n");
}
int main() {
	test(0);//��������ʱ����Ҫ���Σ��������ﴫ�˲Σ���Ӱ�챻���õĺ�������
	//ִ�С�
	return 0;
}*/

/*int main() {
	int a = 20;//�ڴ棺14 00 00 00
	int b = -20;//�ڴ棺ec ff ff ff
	return 0;
}*/

//�жϻ����Ǵ�˻���С��
/*int check_sys() {
	int a = 1;
	return *(char*)&a;
}
int main() {
	int a = 0x11223344;
	char* p = &a;
	if (*p == 0x44)
		printf("��̨������С�˻�\n");
	else
		printf("��̨�����Ǵ�˻�\n");
	int b = 0x80001111;
	int c = b<< 1;//���ƣ����λ�����
	int d = b>> 1;//���ƣ���ߵ�����һλ����λ��ԭ���λ��ͬ��
	int e =(unsigned)b >> 1;//���ƣ����λ����һλ0
	printf("%x\n", b);
	printf("%x\n", c);
	printf("%x\n", d);
	printf("%x\n", e);
	int res = check_sys();
	printf("%d\n", res);
	return 0;
}*/

/*int main() {
	char a = -1;
	//11111111111111111111111111111111����������
	//�ضϺ�8λ������char����11111111����a
	signed char b = -1;
	unsigned char c = -1;
	printf("%d %d %d\n", a, b, c);
	//��ӡʱ��%d��ʾ��ӡ10�����з����������ԣ�aҪ����������a��char,���з�����������
	//ʱ��߲�����λ��0��1������������Ϊ11111111111111111111111111111111��
	//cΪ�޷���������������ʱ����߲�0��������Ϊ00000000000000000000000011111111
	//��ӡʱ�����з��������д�ӡ�����λ��1�Ļ���Ҫ�Ѳ���ת����ԭ�������
	printf("%u %u %u\n", a, b, c);
	//%u��ʾ��ӡ10�����޷�����,���ԣ�aҪ����������a��char,���з�����������
	//ʱ��߲�����λ��0��1������������Ϊ11111111111111111111111111111111��
	//cΪ�޷���������������ʱ����߲�0��������Ϊ00000000000000000000000011111111
	//��ӡʱ���޷��������д�ӡ�������λ��1Ҳ��ת����ԭ�롣
	printf("%c %c %c\n", a, b, c);
	return 0;
}*/

/*int main() {
	char a = -128;
	int b = -128;
	printf("%u %u\n", a,b);
	return 0;
}*/

/*int main() {
	char a = 128;
	int b = -128;
	printf("%u %u\n", a, b);
	return 0;
}*/

/*int main() {
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	return 0;
}*/

/*int main() {
	unsigned i = 9;
	for (; i >= 0; i--)
		printf("%u\n", i);//��ѭ��
	return 0;
}*/

/*int main() {
	char a[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
		a[i] = -1 - i;
	printf("%d\n", strlen(a));
	return 0;
}*/

/*unsigned char i = 0;
int main() {
	for(i=0;i<=255;i++){
		printf("hehe\n");//��ѭ��
	}
	return 0;
}*/

/*int main() {
	char a = 0;
	char b = '0';
	char c = ' ';
	char d = '\0';
	printf("%d %d %d %d\n", a, b, c,d);
	return 0;
}*/

/*int main() {
	double d = 1E10;
	double e = 1e10;//E����e����
	printf("%lf %lf\n", d, e);
	return 0;
}*/

int main() {
	int n = 9;
	float* p = (float*)&n;
	printf("n��ֵΪ%d\n", n);
	printf("*p��ֵΪ%f\n", *p);

	*p = 9.0;
	printf("n��ֵΪ%d\n", n);
	printf("*p��ֵΪ%f\n", *p);

	float f = 5.5;
	return 0;
}
