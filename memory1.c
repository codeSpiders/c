#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数据类型：
//1.内置类型:char,short,int,long,long long, float, double
//2.自定义类型（又叫构造类型）： 

//类型的意义：
//1.使用这个数据类型时，开辟内存空间的大小；
//2.如何看待内存空间的视角

/*int main() {
	int a = 10;//内存：0a 00 00 00
	float b = 10.0;//内存：00 00 20 41
	return 0;
}*/

//整型家族：
//1.char:unsigned char (0~255); signed char (-128~127)
//2.short:unsigned short [int] ();signed short ()
//3.int:unsigned int ();signed int ()
//4.long:unsigned long [int] ();signed long()

//浮点型家族：
//1.float:
//2.double:

//构造类型：
//1.数组类型：
//2.结构体类型,struct:
//3.枚举类型，enum:
//4.联合体，union:

//指针类型：
// int* p
// char* p
//float* p
//void* p

//空类型：
//void表示空类型，即无类型。通常应用于函数类型，函数的参数，指针类型；
/*void test(void) {//尽管此处加了void，但是传了参，test正常执行，只是会报警告
//void test() {//()为空，但是调用时可以传参，不影响test正常执行
	printf("hehe\n");
}
int main() {
	test(0);//函数定义时不需要传参，但是这里传了参，不影响被调用的函数正常
	//执行。
	return 0;
}*/

/*int main() {
	int a = 20;//内存：14 00 00 00
	int b = -20;//内存：ec ff ff ff
	return 0;
}*/

//判断机器是大端还是小端
/*int check_sys() {
	int a = 1;
	return *(char*)&a;
}
int main() {
	int a = 0x11223344;
	char* p = &a;
	if (*p == 0x44)
		printf("这台电脑是小端机\n");
	else
		printf("这台电脑是大端机\n");
	int b = 0x80001111;
	int c = b<< 1;//左移，最高位舍掉。
	int d = b>> 1;//右移，最高点增加一位，这位与原最高位相同。
	int e =(unsigned)b >> 1;//右移，最高位增加一位0
	printf("%x\n", b);
	printf("%x\n", c);
	printf("%x\n", d);
	printf("%x\n", e);
	int res = check_sys();
	printf("%d\n", res);
	return 0;
}*/

/*int main() {
	char a = -1;
	//11111111111111111111111111111111，整型提升
	//截断后8位，存入char，即11111111存入a
	signed char b = -1;
	unsigned char c = -1;
	printf("%d %d %d\n", a, b, c);
	//打印时，%d表示打印10进制有符号数，所以，a要整型提升，a是char,是有符号数，提升
	//时左边补符号位（0或1），所以提升为11111111111111111111111111111111；
	//c为无符号数，整体提升时，左边补0，提升后为00000000000000000000000011111111
	//打印时，按有符号数进行打印，最高位是1的话，要把补码转换成原码输出。
	printf("%u %u %u\n", a, b, c);
	//%u表示打印10进制无符号数,所以，a要整型提升，a是char,是有符号数，提升
	//时左边补符号位（0或1），所以提升为11111111111111111111111111111111；
	//c为无符号数，整体提升时，左边补0，提升后为00000000000000000000000011111111
	//打印时按无符号数进行打印，即最高位是1也不转换成原码。
	printf("%c %c %c\n", a, b, c);
	return 0;
}*/

/*int main() {
	char a = -128;
	int b = -128;
	printf("%u %u\n", a,b);
	return 0;
}*/

/*int main() {
	char a = 128;
	int b = -128;
	printf("%u %u\n", a, b);
	return 0;
}*/

/*int main() {
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	return 0;
}*/

/*int main() {
	unsigned i = 9;
	for (; i >= 0; i--)
		printf("%u\n", i);//死循环
	return 0;
}*/

/*int main() {
	char a[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
		a[i] = -1 - i;
	printf("%d\n", strlen(a));
	return 0;
}*/

/*unsigned char i = 0;
int main() {
	for(i=0;i<=255;i++){
		printf("hehe\n");//死循环
	}
	return 0;
}*/

/*int main() {
	char a = 0;
	char b = '0';
	char c = ' ';
	char d = '\0';
	printf("%d %d %d %d\n", a, b, c,d);
	return 0;
}*/

/*int main() {
	double d = 1E10;
	double e = 1e10;//E或者e都行
	printf("%lf %lf\n", d, e);
	return 0;
}*/

int main() {
	int n = 9;
	float* p = (float*)&n;
	printf("n的值为%d\n", n);
	printf("*p的值为%f\n", *p);

	*p = 9.0;
	printf("n的值为%d\n", n);
	printf("*p的值为%f\n", *p);

	float f = 5.5;
	return 0;
}
