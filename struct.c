#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/*struct doc {
	char name[20];//叫成员变量
	char tele[12];
	int age;
}d1,d2;
struct doc d3;//d1,d2,d3是全局变量
struct {
	int a;
	int b;
	int c;
}sa;//匿名结构体，只能在这里定义变量了。不推荐用
struct {
	int a;
	int b;
	int c;
}*psc;//匿名结构体指针，只能在这里定义变量了。不推荐用
int main() {
	struct doc d4, d5;//d4,d5是局部变量
	psc = &sa;//会报警告，因为类型不一样
	//两个匿名结构体，尽管成员变量都一样，编译器还是把它们当成2个不同的类型；
	return 0;
}*/

//结构体的自引用，链式存储
/*struct node {
	int num;
	//struct node n;//不能这样写。这样写，没有办法终止，无限套娃,而且无法计算大小
	struct node* next;//结构体指针，指向下一个节点的地址。大小为（32位）4个字节
};
int main() {

	return 0;
}*/

//typedef定义结构体
/*typedef struct node {
	int num;	
	struct node* next;
}node;
int main() {
	struct node d1;
	node d2;//d1,d2都可以定义，都没有问题，而且是同一类型的
	return 0;
}*/

//结构体的初始化及访问
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

//结构体的内存对齐(平台原因--移植，性能原因).规则：
//1.结构体的第一个成员，在结构体地址偏移为0的位置；
//2.其他成员变量，要对齐到某个数字（对齐数）的整数倍的地址处
//3.对齐数=编译器默认的一个对齐数与该成员大小的较小值。VS默认是8。gcc没有默认对起数
//4.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//5.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的
//  整体大小，就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍；
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

//练习1
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

/*#pragma pack(4)//设置默认对齐数为4；
struct s {
	char a;
	double d;
}s;
#pragma pack()//取消设置的默认对齐数
int main() {
	printf("%d\n", sizeof(s));//不同的默认对齐数，结果可能不一样
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

//结构体传参
/*struct s {
	int i;
	char c;
	double d;
};
init(struct s tmp) {//值传递，另建一份参数拷贝，不会修改原参数
	tmp.c = 'd';
	tmp.d = 6.87;
	tmp.i = 2000;
}
init2(struct s* p) {//函数没有返回值，好像也行
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

//位段：位段是申明和结构体是类似的，有2点区别：
//1.位段的成员必须是int,unsigned int,signed int等整型类型；也有char类型
//2.位段的成员名后边有一个冒号和一个数字
//3.位段是按4个字节或一个字节来开辟空间
//4.位段涉及很多不确定因素，位段是不跨平台的，注重可移植性的程序应避免使用位段
/*struct A {
	int _a : 2;//表示a只需要2个bit位；
	int _b : 5;
	int _c : 10;
	int d : 30;//这里不能大于32的
};//位段就是为节省空间而存在的
int main() {
	struct A s;
	printf("%d\n", sizeof(s));
	return 0;
}*/

//练习1
struct b {
	char a : 3;	
	char b : 4;
	char c : 5;
	char d : 4;
};
int main() {
	struct b b = { 0 };
	printf("%d\n", sizeof(b));
	b.a = 10;//1010，前面的1被丢弃
	b.b = 12;
	b.c = 3;
	b.d = 4;
	printf("%d\n", sizeof(b));
	return 0;
}
//位段的跨平台问题：
//1.int位段被当成有符号数还是无符号数，是不确定的
//2.位段中最大位的数目不确定，（16位机器最大16,32位机器最大32，写成27，在16位机器上会出现问题）
//3.位段中的成员在内存中从左向右分配，还是从右向左分配，标准未定义
//4.当位段包含2个及以上的位段时，第二个段位成员比较大，无法容纳于第一个段位剩余的位时，
//  是舍弃剩余的位，还是利用，这是不确定的；