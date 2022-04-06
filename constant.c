#define _CRT_SECURE_NO_WARNINGS 1
/*解决安全函数问题，有三种方法：
第一种，在安装目录下搜索newc++file.cpp,将第一句话拷进去（一劳永逸）
第二种，右键项目名称--属性--c/c++--预处理器--预处理器定义，
       将第一句话（_CRT_SECURE_NO_WARNINGS）拷进去，注意用分号分隔已有的。
第三种,新建项目时，新建win32控制台应用程序--下一步--取消预编译头
      和安全开发生命周期中勾，并勾上空项目---完成
*/

#include<stdio.h>

//不安全函数
/*int main() {
	char arr[5] = { 0 };
	scanf("%s", &arr);//不安全函数
	printf("%s\n", arr);
	return 0;
}*/

//字面常量与常变量
/*int main() {
	3;//字面常量
	3.14;//字面常量

	const int num = 4;//常变量,必须一次性修饰，如有值，只能在此赋值
	printf("%d\n", num);
	//num = 5;//常变量不可再赋值，除非在初始化时修改值

	//int n;
	//const n = 5;
	//printf("%d\n", n);//不能分别修饰n;

	//const int m;
	//m = 13;
	//printf("%d\n", m);//申明和赋值不能分开

	//int num2 = 10;
	//int arr[num2 ] = { 0 };//C语言中，数组的大小必须确定，也即要用常变量

	//const int num3 = 20;
	//int arr[num3] = { 0 };//即使num3为常变量，在这里也不行,说明它具有变量的性质

	 return 0;
}*/

//#define 定义的标示符常量
/*int main() {
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);
	return 0;
}*/

//枚举常量
int main() {
	enum Sex {//枚举定义
		MALE,
		FEMALE
	};//MALE,FEMALE为枚举常量,不能改
	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", s);
	s = FEMALE;//s是变量，可以改
	printf("%d\n", s);

	int n = 1;
	enum Sex s2 = n;//有点python中字典的意思
	printf("%d\n", s2);
	return 0;
}

