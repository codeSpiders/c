#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//debug版本与release版本可能运行结果不一样,release版本的优化，
//可能在功能上都有所调整
/*int main() {
	int i = 0;//这里，i的地址就是arr[12]的地址，所以会一直循环下去
	//i和arr之间有2个栈单元，会储存什么呢？
	//vc6.0:i<=10,死循环,i紧挨着arr;
	//gcc:i<=11,死循环，i与arr间有一个栈单元;
	//vc2013:i<=12,死循环，i与arr间有两个栈单元;
	//死循环的时候，程序没有机会报错，报错要在程序停下来（正常或非正常）后
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	
	printf("%p\n", &i);
	printf("%p\n", arr);//debug版本和release版本，这两个地址相对大小会变。
	system("pause");
	for (i = 0; i <= 12; i++) {
		printf("hehe\n");
		arr[i] = 0;
	}	
	return 0;
}*/

//1.语法问题一般不用调试，因为编译器会发现。
/*int main() {
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++) {
		printf("hehe\n");
		arr[i] = 0;
	}
	//system("pause");
	return 0;
}*/

//优秀的代码：
//1.代码运行正常；
//2.bug很少；
//3.效率高；
//4.可读性高；
//5.可维护性高；
//6.注释清晰；
//7.文档齐全；

//常见的coding技巧
//1.使用assert;
//2.尽量使用const;
//3.养成良好的编码风格；
//4.添加必要的注释；
//5.避免编码的陷阱；

int main() {
	const int num = 0;
	//num = 40;//const 修饰后num，这种方式不能修改num；
	int* p = &num;//int*p空格可以在*左边，也可以在*右边，也可以没有空格
	*p = 30;//指针p能改num的值
	printf("%d\n", num);
	const int* p1 = &num;//申明指针时，加const，就不能改了
	//const 修饰*p1，*p1（num）不能改。
	//*p1 = 50;//p1指针不能修改num的值了
	int*const p2 = &num;
	//const 修饰p2,p2只能指向num，p2不能指向别的了，即p2不能改了
	*p2 = 40;//但是，能通过p2修改*p2（num）.
	int n = 0;
	//p2 = &n;
	const int*const p3 = &num;//还可以两个const
	//*p3 = 80;
	//p3 = &n;
	return 0;
}