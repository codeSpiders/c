#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/*struct doc {
	char name[20];//�г�Ա����
	char tele[12];
	int age;
}d1,d2;
struct doc d3;//d1,d2,d3��ȫ�ֱ���
struct {
	int a;
	int b;
	int c;
}sa;//�����ṹ�壬ֻ�������ﶨ������ˡ����Ƽ���
struct {
	int a;
	int b;
	int c;
}*psc;//�����ṹ��ָ�룬ֻ�������ﶨ������ˡ����Ƽ���
int main() {
	struct doc d4, d5;//d4,d5�Ǿֲ�����
	psc = &sa;//�ᱨ���棬��Ϊ���Ͳ�һ��
	//���������ṹ�壬���ܳ�Ա������һ�������������ǰ����ǵ���2����ͬ�����ͣ�
	return 0;
}*/

//�ṹ��������ã���ʽ�洢
/*struct node {
	int num;
	//struct node n;//��������д������д��û�а취��ֹ����������,�����޷������С
	struct node* next;//�ṹ��ָ�룬ָ����һ���ڵ�ĵ�ַ����СΪ��32λ��4���ֽ�
};
int main() {

	return 0;
}*/

//typedef����ṹ��
/*typedef struct node {
	int num;	
	struct node* next;
}node;
int main() {
	struct node d1;
	node d2;//d1,d2�����Զ��壬��û�����⣬������ͬһ���͵�
	return 0;
}*/

//�ṹ��ĳ�ʼ��������
/*struct sport {
	double height;
	int age;
};
struct person {
	char name[20];
	char gender;
	struct sport s;
	int id;
	float weight;
};
int main() {
	struct person p = { "charlotte",'w',{172.3,26},182,50.6 };
	printf("%s,%c,%d,%f\n", p.name, p.gender, p.id, p.weight);
	printf("%lf,%d\n", p.s.height, p.s.age);
	return 0;
}*/

//�ṹ����ڴ����(ƽ̨ԭ��--��ֲ������ԭ��).����
//1.�ṹ��ĵ�һ����Ա���ڽṹ���ַƫ��Ϊ0��λ�ã�
//2.������Ա������Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
//3.������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ��VSĬ����8��gccû��Ĭ�϶�����
//4.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
//5.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ���
//  �����С����������������������Ƕ�׽ṹ��Ķ�����������������
/*struct s1 {
	char c1;
	int i;
	char c2;
};
struct s2 {
	char c1;
	char c2;
	int i;	
};
int main() {
	struct s1 s1 = { 0 };
	struct s2 s2 = { 0 };
	printf("%d,%d\n", sizeof(s1), sizeof(s2));
	return 0;
}*/

//��ϰ1
/*struct s3 {
	double d;
	char c;
	int i;
}s3;
struct s4 {
	char c;
	struct s3 ss;
	double d;
}s4;
int main() {
	printf("%d\n", sizeof(s3));
	printf("%d\n", sizeof(s4));
	return 0;
}*/

/*#pragma pack(4)//����Ĭ�϶�����Ϊ4��
struct s {
	char a;
	double d;
}s;
#pragma pack()//ȡ�����õ�Ĭ�϶�����
int main() {
	printf("%d\n", sizeof(s));//��ͬ��Ĭ�϶�������������ܲ�һ��
	return 0;
}*/

//offsetof
#include<stddef.h>
/*struct s {
	char c;
	int i;
	double d;
};
int main() {
	printf("%d\n", offsetof(struct s, c));
	printf("%d\n", offsetof(struct s, i));
	printf("%d\n", offsetof(struct s, d));	
	return 0;
}*/

//�ṹ�崫��
/*struct s {
	int i;
	char c;
	double d;
};
init(struct s tmp) {//ֵ���ݣ���һ�ݲ��������������޸�ԭ����
	tmp.c = 'd';
	tmp.d = 6.87;
	tmp.i = 2000;
}
init2(struct s* p) {//����û�з���ֵ������Ҳ��
	p->c = 'r';
	p->d = 9.3654;
	(*p).i = 100;
}
int main() {
	struct s s1;
	s1.c = 'f';
	s1.d = 3.14;
	s1.i = 57;
	//init(s1);
	init2(&s1);
	printf("%c,%lf,%d\n", s1.c, s1.d, s1.i);
	return 0;
}*/

//λ�Σ�λ���������ͽṹ�������Ƶģ���2������
//1.λ�εĳ�Ա������int,unsigned int,signed int���������ͣ�Ҳ��char����
//2.λ�εĳ�Ա�������һ��ð�ź�һ������
//3.λ���ǰ�4���ֽڻ�һ���ֽ������ٿռ�
//4.λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�Եĳ���Ӧ����ʹ��λ��
/*struct A {
	int _a : 2;//��ʾaֻ��Ҫ2��bitλ��
	int _b : 5;
	int _c : 10;
	int d : 30;//���ﲻ�ܴ���32��
};//λ�ξ���Ϊ��ʡ�ռ�����ڵ�
int main() {
	struct A s;
	printf("%d\n", sizeof(s));
	return 0;
}*/

//��ϰ1
struct b {
	char a : 3;	
	char b : 4;
	char c : 5;
	char d : 4;
};
int main() {
	struct b b = { 0 };
	printf("%d\n", sizeof(b));
	b.a = 10;//1010��ǰ���1������
	b.b = 12;
	b.c = 3;
	b.d = 4;
	printf("%d\n", sizeof(b));
	return 0;
}
//λ�εĿ�ƽ̨���⣺
//1.intλ�α������з����������޷��������ǲ�ȷ����
//2.λ�������λ����Ŀ��ȷ������16λ�������16,32λ�������32��д��27����16λ�����ϻ�������⣩
//3.λ���еĳ�Ա���ڴ��д������ҷ��䣬���Ǵ���������䣬��׼δ����
//4.��λ�ΰ���2�������ϵ�λ��ʱ���ڶ�����λ��Ա�Ƚϴ��޷������ڵ�һ����λʣ���λʱ��
//  ������ʣ���λ���������ã����ǲ�ȷ���ģ�