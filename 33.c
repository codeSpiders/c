#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//注意：define,include不是关键字

//sizeof的用法
/*int main() { 
	int a = 10;
	int arr[] = { 1,2,3,4,5 };//Java中，可将中括号放在int后面
	printf("a的长度为：%d\n", sizeof (a));
	printf("a的长度为：%d\n", sizeof a);//可以看出，sizeof是操作符 
	printf("int的长度为：%d\n", sizeof(int));//当为int时，必须加括号	
	printf("arr数组的长度：%d\narr数组的元素的长度：%d\n", sizeof(arr), sizeof(arr[0]));
	printf("%d\n%d\n", sizeof arr, sizeof arr[0] );	
	int sz = sizeof arr / sizeof arr[0];//求数组的长度；
	printf("sz=%d\n", sz);
	return 0;
}*/

//~的用法（按为取反）
/*int main() {
	int a = 0;
	int b = ~a;//-1
	printf("%d\n", b);
	return 0;   //0表示false,非0表示true
}*/

//++的用法
/*int main() {
	int a = 0;
	int b = a++;//叫后置++，先使用a的值，再加加
	int c = 0;
	int d = ++c;//叫前置++，先加加，再使用a的值
	printf("a=%d;b=%d\n", a, b);
	printf("c=%d;d=%d\n", c, d);
	return 0;
}*/

//逻辑操作符。注意，C语言中，0为false；非0为true；
/*int main() {
	int a = 0;
	int b = 5;
	int c = a && b;    //注意，两个&不是位操作符
	int d = a || b;
	printf("c=%d\n", c);//false返回0，true返回1；
	printf("d=%d\n", d);
	return 0;
}*/

//条件操作符
/*int main() {
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };//每个元素初始化为0
	int max = a > b ? a : b;//三目操作符,也叫条件操作符
	//exp1?exp2:exp3---->exp1如果为真，则执行exp2；否则执行exp3。
	printf("%d\n", max);
	return 0;
}*/

//常见关键字：
// atuo,break,case,char,const,continue,default,do,double,else,enum,
//extern,float,for,goto,if,int,long,register,return,short,signed,
//sizeof,static,struct,switch,typedef,union,unsigned,void,volatile,while

/*int main() {
	auto int a = 10;//局部变量，又叫自动变量，可以省掉
	register int b = 10;//建议把b定义成寄存器变量
	int c = -5;//int定义的是有符号的变量，int=signed int
	unsigned int d = 6;//无符号变量，永远都是正数
	unsigned int e = -5;//e=4294967291
	printf("%d\n", e);//打印出来，e仍然是-5

	typedef unsigned int u_int;
	u_int num = 20;   //等同于unsigned int num = 20
	return 0;	
}*/

//static的用法(修饰局部变量,改变了变量的生命周期，使生命周期变长）
/*void test() {
	//int a = 1;		//a是一个局部变量
	static int a = 1;//a是一个静态的局部变量
	a++;
	printf("a=%d\n", a);
}
int main() {
	int i = 0;
	while (i < 6) {
		test();
		i++;
	}
	return 0;
}*/

//static的用法(修饰全局变量，改变了变量的作用域，静态的全局
//变量只能在自己所在的源文件内部使用，出了原文件就无法使用了)
//static修饰函数，改变了函数的链接属性，普通函数具有外部链接属性，
//当被static修饰后，变成了内部链接属性。效果同修饰全局变量一样。
/*static int g_val3=2030;
int main() {
	extern int g_val;
	extern int g_val2;
	printf("%d\n", g_val);
	//printf("%d\n", g_val2);//不能使用g_val2
	printf("%d\n", g_val3);
	return 0;
}*/

//define 定义常量和宏
/*#define MAXA 2020
#define MAX(x,y)( x > y ? x : y)//名字不能相同
int main() {
	int a = 30;
	int b = 20;
	int arr[MAXA] = { 0 };
	int max = MAX(a, b);
	printf("%d\n", max);
	printf("%d\n", MAXA);
	return 0;

}*/

//指针
main() {
	int a = 10;
	printf("%p\n", &a);//打印a的地址
	int* p = &a;  //取地址
	printf("%p\n", p);
	*p = 30;//*解引用操作符
	printf("*p=%d\n", *p);
	printf("a=%d\n", a);
	char ch = 'c';
	char* cp = &ch;
	printf("%p\n", cp);
	printf("%d\n", sizeof cp);
	return 0;
}
