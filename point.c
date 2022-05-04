#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//初识指针
/*int main() {
	int a = 2;
	int* p = &a;//p是存放地址的变量，叫指针变量。p本质上是变量，只是储存了地址而已
	//存放在p中的值，被当成地址来处理.
	//指针在32位平台是4个字节，在64位平台是8个字节。指针类型确定步长
	int b = 0x11223344;
	//printf("%d\n", *b)//因b不是指针类型变量，不能用*操作符解引用;
	int* p1 = &b;
	char* p2 = &b;//会警告： 从“int *”到“char *”的类型不兼容，但可运行
	printf("%x %x\n", p1, p2);
	printf("%p %p\n", p1, p2);
	//指针类型决定了解引用操作时能访问的空间大小（确定步长）；
	//汇编语言，操作数类型不同，操作命令也不同
	printf("%x %x\n", *p1, *p2);//地址从小端(个位)起，叫小端机
	return 0;
}*/

//指针加减整数
/*int main() {
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);//+1表示往后走一个步长；整型指针+1往后走4个字节
	printf("%p\n", pc);
	printf("%p\n", pc+1);//字符指针+1往后走1个字节

	return 0;
}*/

//指针类型：以后可根据如何操作内存数，来定义什么样的指针类型
/*int main() {
	int arr[10] = { 0 };
	int* p = arr;
	//char* p = arr;//改成 char* p=arr ，再运行一次
	*(p + 1) = 4;
	printf("%d\n", arr[1]);
	*(arr + 1) = 7;//此时，p和arr实际上是一样的。2种特殊情况下不一样。参前面
	printf("%d\n", arr[1]);

	for (int i = 0; i < 10; i++)
		*(p + i) = 1;
	for (int j = 0; j < 10; j++)
		printf("%d ", arr[j]);
	
	return 0;
}*/

//野指针:指指向位置未知的（随机的，不正确的，没有明确限制的）指针。
/*int main() {
	int a;//局部变量不初始化，默认是随机值；
	int* p;//局部指针不初始化化，默认也是随机值；这就是野指针
	*p = 29;//野指针很危险，可能会存到已在用的内存中，并覆盖原内存，特别是覆盖内核时
	printf("%d\n", *p);//不能运行，编译通不过
	return 0;
}*/

//指针越界访问，也会导致野指针问题
/*int main() {
	int arr[10] = { 0 };
	int* p = arr;
	*(p + 11) = 3;//可以编译，但运行会出错。也很危险
	return 0;
}*/

//函数调用，造成野指针问题。解决办法：空间释放后，及时将指针设置为NULL。
/*int* test() {
	int a = 20;
	return &a;
}
int main() {
	int* p = test();//函数一调用完，a的内存已经被释放，即p指向的内存可能
	//已被其他程序用了，所以再对这块内存操作，会很危险。除非这个内存不销毁，final?
	//释放之后，就不是程序所能控制的空间了
	*p = 20;//这个好像能运行
	printf("%d\n", *p);
	return 0;
}*/

//指针在使用之前，检测其有效性，并初始化
/*int main() {
	int a = 4;
	int* pa = &a;//一般这样初始化指针
	int* p1 = NULL;//当还不能确定指向谁时，可以这样初始化
	//NULL,是 (void*)0,地址是：0x00000000
	*p1 = 10;//这里会出错
	if (p1 != NULL) {//当不确定指针是否指向空时，使用前检测
		;
	}		
	return 0;
}*/

//指针的计算:指针加减整数
/*int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int* p = arr;
	for (int i = 0; i < 10; i++) {
		printf("%d ", *p++);//p +=2; p -=3;都可以，注意指针不要超界
	}
	return 0;
}*/

//指针的关系运算
/*#define VALUES 5
int main() {
	float arr[VALUES];
	float* pf ;//这里虽然指针没有被初始化，当时并没有用它，在用它之前要初始化
	for (pf = &arr[0]; pf < &arr[VALUES];) {
		*pf++ = 0;//
		
	}
	return 0;
}*/

/*#define VALUES 5
int main() {
	float arr[VALUES];
	float* pf ;
	for (pf = &arr[VALUES]; pf > &arr[0];) {//编译器允许数组向后越位1个下标？
		*--pf = 0;//但是这里只引用，没有使用数组后一个元素
		//编译器把数组后面一个元素理解为：arr[0]+数组长度，数组最后一个元素
		//跟数组外是连着的。
	}
	return 0;
}*/

/*#define VALUES 5
int main() {//跟上面相比，此程序运算可能会出错,（本机已出错）
	float arr[VALUES];
	float* pf;
	for (pf = &arr[VALUES-1]; pf >= &arr[0];) {
		*--pf = 0;
		//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个
		//内存位置的指针进行比较，但不允许与指向第一个元素之前的那个内存位置
		//的指针进行比较。
	}
	return 0;
}*/

//指针-指针
/*int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 0 };
	printf("%d \n",arr[9] - arr[0]);//中间元素的个数
	printf("%d \n", arr[9] - ch[0]);//随机数，无意义，不能这么写
	//首先是地址步长不统一，相当于两个单位不统一的量相减
	//其次，数组内部是连续的内存空间，但数组和数组之间并不一定是连续的
	return 0;
}*/

//计算字符串的长度
/*int myLen(char* p) {
	char* end = p;
	while (*end != '\0')
		end++;
	return end - p;
}
int main() {
	char s[] = "wind";
	int len = myLen(s);
	printf("%d\n", len);
	return 0;
}*/

//指针和数组
/*int main() {

	return 0;
}*/

//二级指针
/*int main() {
	int a = 10;
	int* pa = &a;
	int* pa1 = &pa;
	int** pa2 = &pa;//pa2就是二级指针
	int*** pa3 = &pa2;//三级指针，等等
	printf("%p %p %p %p\n", pa, pa1, pa2, pa3);//pa1==pa2
	printf("%d %d %d %d\n", a, *pa, *pa1, **pa2, ***pa3);//pa1不能**
	***pa3 = 5;
	printf("%d %d %d %d\n", a, *pa, *pa1, **pa2, ***pa3);
	return 0;
}*/

//指针数组：存储指针的数组
//数组指针：数组的指针
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
		printf("%d ", *arr[i]);
	return 0;
}
