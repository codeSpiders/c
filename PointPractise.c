#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>	

//1.
/*int main() {
	int a[5] = { 1,2,3,4,5 };
	int*p = (int*)(&a + 1);
	printf("%d %d", *(a + 1), *(p - 1));
	return 0;
}*/

//2.
/*struct test {
	int num;
	char* pcName;
	short sDate;
	char ch[2];
	short sBa[4];
}*p;
int main() {
	p = (struct test*)0x100000;
	printf("%p\n", p + 0x1);//ע�⣬p+20,����16���ƣ�������p+14��
	printf("%p\n",(unsigned long) p + 0x1);//����p���Ǳ�ʾ��ַ����ʾһ����0x100000��p+1=0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
	return 0;
}*/

//3
/*int main() {
	int a[4] = { 1,2,3,4 };
	int*p1 = (int*)(&a + 1);
	int*p2 = (int*)((int)a + 1);
	printf("%x,%x", p1[-1], *p2);//[]�ڿ����и���
	return 0;
}*/

//4
/*int main() {
	int a[3][2] = { (0,1),(2,3),(4,5) };//ע�⣬��������С����
	int *p;
	p = a[0];
	printf("%d\n", p[0]);
	printf("%d\n", a[0]);
	return 0;
}*/

//5
/*int main() {
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}*/

//6
/*int main() {
	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p1 = (int*)(&arr + 1);
	int *p2 = (int*)(*(arr + 1));//*(arr+1)�ȼ���arr[1]��arr[1]����ָ��arr[1]��һ��Ԫ�صĵ�ַ
	//���ԣ����Խ�ǰ���ǿ������ת��(int*)ȥ��.
	printf("%d %d", *(p1 - 1), *(p2 - 1));
	return 0;
}*/

//7
/*int main() {
	char *pp = "abcdef";//���ַ���"abcdef"���׵�ַ��ֵ���ַ�ָ��pp��
	char* ch[] = { "work"," at","alibaba" };
	char**p = ch;
	p++;
	printf("%s\n", *p);//��ӡ�ַ��������ľ����ַ�������Ҳ������Ԫ�ص�ַ
	return 0;
}*/

//8
int main() {
	char*c[] = { "ENTER","NEW","POINT","FIRST" };//"ENTER","NEW"���ַ������ܴ洢�����Զ
	char**cp[] = { c + 3,c + 2,c + 1,c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//ע�⣺�����cppֵ�仯�ˣ�+1��
	printf("%s\n", *--*++cpp+3);//ע�⣺�����cppֵ�����еĻ������ֱ仯�ˣ���+1��
	printf("%s\n", *cpp[-2]+3);//ע�⣺�����cppֵû�б仯������һ����ͬ��
	printf("%s\n", cpp[-1][-1]+1);//
	return 0;
} 