#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*int main() {
	int a = 0x11223344;//�ڴ��д����:44 33 22 11 
	char* pa = (char*)&a;
	*pa = 0;
	printf("%x\n", a);
	return 0;//С�˻����ĵ���44�������11223300��
}*/

/*int i;//ȫ�ֱ�������ʼ����Ĭ����0���ֲ���������ʼ������Ϊ���ֵ��
int main() {
	i--;//-1
	if (i > sizeof(i))//sizeof����ֵ�����޷��������Ƚ�ʱ��
		//��-1ת�����޷�������������ܴ���������������4��
		printf(">\n");
	else
		printf("<\n");
	return 0;
}*/

/*int main() {
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;// ���ű��ʽ�ȼ���͡�����4�����ű��ʽ��
	//�ȼ���b=++c��Ȼ����������㡣ע�⣬���ﲻ��b =( ++c, c++, ++a, a++)
	//�������������( ++c, c++, ++a, a++)�е�ֵΪa++��
	b += a++ + c;
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	return 0;
}*/

//ͳ�ƶ�������1�ĸ���
int test1(unsigned int num) {//ע�⣬����ĳ�unsigned������ͳ�Ƹ�����������
	int count = 0;//��ʼ������0��ʼ����
	while (num) {
		if (num % 2 == 1)
			count++;
		num /= 2;
	}
	return count;
}
int test2(int num) {
	int count = 0;
	while (num) {//��Ч��ѭ��������
		num = num & (num - 1);//����һ�Σ�ȥ���ұ�һ��1
			count++;		
	}
	return count;
}
int main() {
	int a =-1;
	unsigned int b = (unsigned int)a;
	 int c = (unsigned int)a;
	printf("%d  %d %d\n", a, b,c);
	int d=test2(a);
	printf("a�Ķ���������%d��1\n", d);
	system("pause");
	return 0;
}