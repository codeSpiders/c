#include <stdio.h>

/*int main() {

	//�������͵������ʽ
	//%d-����ʮ���ƣ�%c-�ַ��ͣ�%f-�����ͣ�%lf-Ҳ�ɱ�ʾ˫���ȸ�������%p-�Ե�ַ����ʽ��ӡ
	//%x-ʮ�����ƣ�%o-�˽���,%s-�ַ�����
	int num = 25;
	char ch = 'x';//���������ַ���˫����Ϊ�ַ������ַ������ҽ���һ���ַ�
	short s = 34;
	long l = 334;
	double d = 45.5;
	float f = 456.4f;	//ע������f
	printf("hello,world!\n");
	printf("%c\n", ch);//
	printf("%d\n", num);
	printf("%d\n", s);
	printf("%lf\n", f);

	return 0;
}*/

/*int main() {
	//�������͵Ĵ�С
	printf("%d\n", sizeof(char));   //1 byte
	printf("%d\n", sizeof(short));  //2
	printf("%d\n", sizeof(int));    //4
	printf("%d\n", sizeof(long));    //4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));   //4
	printf("%d\n", sizeof(double));   //8

	return 0;
}*/

/*
int global = 60;
int main() {
	int global = 5;   //�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��
	printf("%d\n", global);//���ֲ�������ȫ�ֱ�����ͬʱ���ֲ��������ȣ�
	return 0;
}
*/

/*
int main() {
	int num1;
	int num2;
	int sum ;
	//ע�⣬c���Թ涨������Ҫ�����ڵ�ǰ������ǰ�棬��c++�Ȳ�ͬ
	scanf_s("%d%d", &num1,&num2);//ȡ��ַ����&
	//ע�⣬scanf��scanf_s������
	sum = num1 + num2;
	printf("sum =%d\n", sum);   
	return 0;
}*/

int main() {
	extern int g_val;
	//extern �������ļ����ȫ�ֱ�����
	//���ļ����ȫ�ֱ�������Ҫ��������ʹ�á�
	printf("g_val = %d\n", g_val);
	return 0;
}