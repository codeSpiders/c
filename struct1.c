#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	

struct stu {//struct stu������ʱ���������ڴ�ռ�
	char name[20];//����4����struct stu�ĳ�Ա����
	int age;
	char phone[12];
	char sex[6];
}s1,s2,s3;//��������ȫ�ֱ�����������Բ�����s1,s2,s3����������һ�����壬��
//���������ͻ������ڴ�ռ�

typedef struct stu1{//typedef �����������ͣ������Ƕ���ṹ����������
	char name[18];
	int age;
	char phone[12];
	char sex[5];
}stu;//struct stu���������֣���stu�����stu������
void printStu(stu s) {//��ֵ�������ú�������һ��s����ʱ�ѿռ䡣���Ҫ��2��������
	//�ȴ�����һ���������������������������ͱ���������֮�䣨ջ�ڣ�
	printf("name=%s\n", s.name);
	printf("age=%d\n", s.age);
	printf("phone=%s\n", s.phone);
	printf("sex=%s\n", s.sex);
}
void printStu2(stu* s) {//����ַ��ʡʱʡ�ռ�
	printf("name=%s\n", (*s).name);
	printf("age=%d\n", (*s).age);
	printf("phone=%s\n", (*s).phone);
	printf("sex=%s\n", (*s).sex);
}
void printStu3(stu* s) {//����ַ��ʡʱʡ�ռ�
	printf("name=%s\n", s->name);
	printf("age=%d\n", s->age);
	printf("phone=%s\n", s->phone);
	printf("sex=%s\n", s->sex);
}
int main() {
	struct stu s4 = { "�ų�",34,"13912345678","male" };//s4�Ǿֲ�����
	//s4 = { "�ų�",34,"13912345678","male" };//���ֳ�ʼ��ֻ��������ʱ����������

	stu s5 = { "�ų�",34,"13912345678","male" };
	//s5 = { "�ų�",34,"13912345678","male" };//���ֳ�ʼ��ֻ��������ʱ��
	//s5.name = "huwe";//Ϊʲô�����д�
	s5.age = 32;
	char arr[34] = "good morning";
	char* p = arr;
	printf("%p\n", p);//��ӡ��ַ
	printf("%s\n", p);//��ӡ�ַ�������
	printf("%p\n", arr);
	printf("%s\n", arr);
	printf("%s\n", s5.name);
	printStu(s5);
	printStu2(&s5);
	printStu3(&s5);
	printf("%p\n", s5);	//s5ʵ���ǵ�ַ��
	return 0;
}

