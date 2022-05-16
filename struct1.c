#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	

struct stu {//struct stu仅定义时，不申请内存空间
	char name[20];//里面4个是struct stu的成员变量
	int age;
	char phone[12];
	char sex[6];
}s1,s2,s3;//这三个是全局变量。这里可以不定义s1,s2,s3变量。但是一旦定义，这
//三个变量就会申请内存空间

typedef struct stu1{//typedef 定义数据类型，这里是定义结构体数据类型
	char name[18];
	int age;
	char phone[12];
	char sex[5];
}stu;//struct stu被改了名字，叫stu。这个stu是类型
void printStu(stu s) {//传值，被调用函数拷贝一份s，费时费空间。如果要传2个参数，
	//先传后面一个参数，两个参数放在主函数和被调函数的之间（栈内）
	printf("name=%s\n", s.name);
	printf("age=%d\n", s.age);
	printf("phone=%s\n", s.phone);
	printf("sex=%s\n", s.sex);
}
void printStu2(stu* s) {//传地址，省时省空间
	printf("name=%s\n", (*s).name);
	printf("age=%d\n", (*s).age);
	printf("phone=%s\n", (*s).phone);
	printf("sex=%s\n", (*s).sex);
}
void printStu3(stu* s) {//传地址，省时省空间
	printf("name=%s\n", s->name);
	printf("age=%d\n", s->age);
	printf("phone=%s\n", s->phone);
	printf("sex=%s\n", s->sex);
}
int main() {
	struct stu s4 = { "张长",34,"13912345678","male" };//s4是局部变量
	//s4 = { "张长",34,"13912345678","male" };//这种初始化只能在申明时，后续不行

	stu s5 = { "张长",34,"13912345678","male" };
	//s5 = { "张长",34,"13912345678","male" };//这种初始化只能在申明时；
	//s5.name = "huwe";//为什么这句会有错？
	s5.age = 32;
	char arr[34] = "good morning";
	char* p = arr;
	printf("%p\n", p);//打印地址
	printf("%s\n", p);//打印字符串内容
	printf("%p\n", arr);
	printf("%s\n", arr);
	printf("%s\n", s5.name);
	printStu(s5);
	printStu2(&s5);
	printStu3(&s5);
	printf("%p\n", s5);	//s5实际是地址？
	return 0;
}

