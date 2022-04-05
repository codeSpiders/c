#include <stdio.h>

/*int main() {

	//数据类型的输出格式
	//%d-整型十进制；%c-字符型；%f-浮点型；%lf-也可表示双精度浮点数；%p-以地址的形式打印
	//%x-十六进制；%o-八进制,%s-字符串；
	int num = 25;
	char ch = 'x';//单引号是字符，双引号为字符串；字符串有且仅有一个字符
	short s = 34;
	long l = 334;
	double d = 45.5;
	float f = 456.4f;	//注意后面加f
	printf("hello,world!\n");
	printf("%c\n", ch);//
	printf("%d\n", num);
	printf("%d\n", s);
	printf("%lf\n", f);

	return 0;
}*/

/*int main() {
	//数据类型的大小
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
	int global = 5;   //局部变量和全局变量的名字建议不要相同；
	printf("%d\n", global);//当局部变量和全局变量相同时，局部变量优先；
	return 0;
}
*/

/*
int main() {
	int num1;
	int num2;
	int sum ;
	//注意，c语言规定，变量要定义在当前代码块的前面，与c++等不同
	scanf_s("%d%d", &num1,&num2);//取地址符号&
	//注意，scanf与scanf_s的区别
	sum = num1 + num2;
	printf("sum =%d\n", sum);   
	return 0;
}*/

int main() {
	extern int g_val;
	//extern 申明本文件外的全局变量。
	//本文件外的全局变量必须要申明才能使用。
	printf("g_val = %d\n", g_val);
	return 0;
}