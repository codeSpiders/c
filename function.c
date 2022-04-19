#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//实际是把这个头文件中所有内容都拷进来；
#include<math.h>

//字符串拷贝
/*int main() {
	char a[] = { "hengyang" };//把字符串赋值给字符数组，注意后面会加
	//'\0'这个字符,所以，共9个元素
	char b[10] =  "##########" ;
	strcpy(b, a);//拷贝时，将hengyang\0都拷贝过去
	printf("%s", b);//打印时，只打印\0前面的元素，不包括\0
	//当目的字组长度小于源字组长度时，会全部拷过来，但是会发生溢出错误
	//当目的字组长度大于源字组长度时，会全部拷过来，覆盖目的字组前面
	//的元素，但后面的元素没有被覆盖。打印时打印到'\0'结束。
	return 0;
}*/

//memset函数调用
/*int main() {
	char arr[] =  "hello world!" ;
	memset(arr, '#', 5);
	printf("%s", arr);
	return 0;
}*/

//交换两个数(失败的案列)
//这样写，swap中交换了x,y两个数，但由于x,y的地址与a,b的地址不同，
//回到主函数后，a,b的值还是没有交换。void为无返回值
//实参传值给形参，形参是另一个地址的，形参其实是实参的临时拷贝，
//对形参的修改改变不了实参。这里只能采用传地址才能解决
/*void swap(int x, int y) {//x,y是形参
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a = 39;
	int b = 53;
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);//a，b是实参
	printf("a=%d,b=%d\n", a, b);
	return 0;
}*/

//交换两个数(传地址)
/*void swap(int* x, int* y) {//x,y是形参，形参只有在函数被调用后才
	//实例化（分配内存地址），所以叫形式参数。形参当函数调用完成后
	//就自动销毁了，因此形参只在本函数内有效。	
	int tmp = *x;
	*x = *y;
	*y = tmp;
}//传地址后，再交换地址所指的两个值

int main() {
	int a = 39;
	int b = 53;
	printf("a=%d,b=%d\n", a, b);
	swap(&a, &b);//&a，&b是实参,实参可以是常量，变量，表达式，函数
	//等，在传递给形参时，必须实参要有给定的值。
	printf("a=%d,b=%d\n", a, b);
	return 0;
}//传值调用:只是把实参的值传递给形参后，两者有不同的内存空间，形参
//无法改变实参。
//传址调用:把实参的地址传递给形参后，让函数（被调用的函数）和函数
//外部的变量有了真正的联系，也就是函数内部可以直接操作函数外的变量。
*/

//练习1：判断是否是素数
/*int IsPrimeNumber(int num) {//仔细体会num=2,3,4时，歪打正着
	int i = 0;
	//for (int i = 2; i <= sqrt(num); i++) {//定义了2个i，居然不报错
	for (i = 2; i <= sqrt(num); i++) {
	if (num%i == 0)
			break;//可以再优化,return 0;
	}
	if (i > sqrt(num))
		return 1;//return比break要强，return直接跳出了函数
	else
		return 0;
}

int main() {
	int a = 4;
	if (IsPrimeNumber(a))
		printf("%d是素数\n", a);
	else
		printf("%d不是素数\n", a);
	return 0;
}*/

//练习2:判断是否是闰年
/*int IsLeapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0)
		return 1;
	else if (year % 400 == 0)
		return 1;
	else
		return 0;
}

int main() {
	int year = 2100;
	if (IsLeapYear(year))
		printf("%d是闰年。\n", year);
	else
		printf("%d不是闰年。\n", year);
	return 0;
}*/

//练习3：升序整型数组的二分查找(第一次失败，后续成功)
/*int binaryFind(int p[],int num,int sz) {//这里并没有创建一个数组
	//传递过去的是首元素的地址,p本质上是一个指针,也可以如下写：
	//int binaryFind(int* p, int num, int sz) {
	int left = 0;
	int right = sz-1;//注意，这里要-1
	while (left <= right) {
		int mid = (left + right) / 2;
		if (p[mid] > num)
			right = mid-1;//-1重要
		else if (p[mid] < num)
			left = mid+1;//+1也重要
		else
			return mid;
	}
	//if (left > right)//这句可以省略
		return -1;
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int  a = 13;
	int index = binaryFind(arr, a,sz);
	if (index == -1)
		printf("没有找到这个数\n");
	else
		printf("找到了，下标为%d\n", index);	
	return 0;
}*/

//练习4：每调用一次函数，就会将num值增加1
/*int count() {
	int static num = 0;
	num++;
	return num;
}

int main() {
	for (int i = 0; i < 8; i++)
		count();
	int a = count();
	printf("%d", a);
	return 0;
}*/

//练习4(方法二)：每调用一次函数，就会将num值增加1
/*void fun(int* p) {
	(*p)++;//注意，这里要加小括号，因为++运算优先级高
	//*p += 1;//也可以这样写
}
int main() {
	int num = 0;
	fun(&num);
	printf("num=%d\n", num);
	fun(&num);
	printf("num=%d\n", num);
	fun(&num);
	printf("num=%d\n", num);
	return 0;
}*/

//函数的嵌套调用和链式访问
//链式访问:指把一个函数的返回值作为另一个函数的参数
/*int main() {
	printf("%d", printf("%d", printf("%d", 3458)));//345841
	return 0;
}*/

//如果被调用函数放在主函数后面，那么在主函数前面要声明一下，如:
// int add(int x,int y){};//注意后面要加分号
//也可以把x,y省略，如int add(int,int){};
//实际工程中，函数声明放在头文件中，函数定义放在另一个文件中
//#include "add.h"。引用库头文件，用<>；引用自己的头文件，用"".

//头文件的使用，函数的声明
/*#include"add.h"
int main() {
	int a = 30;
	int b = 34;
	int sum = add(a, b);
	printf("sum = %d", sum);
	return 0;
}*/

//递归:逐字打印输入的数字
/*void xx(int num) {
	if (num >9)//没有if，递归不能停下来，会死循环（没有终止条件）
		xx(num/10);	//xx(num)，递归也不能停下来，调用没有变化
	printf("%d\n", num%10 );//这句前不能有else，不能直接打印num
}//递归调用，在返回前，每个调用的printf语句都挂着，当发生递归转折点
//时，会打印转折点处的printf,也就是最高位，然后递归返回，会按相反
//的顺序打印被挂起的printf语句，即次高位，再次高位，等等。
//递归的条件：
//1.递归存在限制条件，当满足限制条件时，递归不在进行；
//2.每层递归调用后，要越来越接近这个限制条件；

int main() {
	printf("请输入一个正整数\n");
	unsigned int num = 0;
	scanf("%d", &num);

	xx(num);
	return 0;
}*/

//递归：计算字符串的长度
/*int my_strlen(char* arr) {
	if (*arr != '\0') 
		return 1 + my_strlen(++arr);//指向后一个地址，是arr+1
	//注意，可以写成++arr（先自加，再把自加的值传给函数调用），
	//但是不能写成arr++（这样传给函数的值没有变？）。
	else
		return 0;
}
int main() {
	char arr[] = "story";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}*/

//求n!
/*int mul(int n) {
	if (n == 1)//千万注意，赋值符号与判断符号的区别！
		return 1;
	else
		return mul(n - 1)*n;
}
int main() {
	int num =0;
	printf("请输入一个整数:\n");
	scanf("%d", &num);
	int res = mul(num);
	printf("n的阶乘为:%d\n", res);
	return 0;
}*/

//求斐波拉契数列
/*int fbo(int n) {//回归方法
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fbo(n - 1) + fbo(n - 2);
}//效率很低，计算50时，有2的50次方,有很多重复计算，满二叉树都算了
//最好才有迭代的方式
int fib(int n) {//迭代方法一
	int a1=1, a2=0;
	for (int i = 2; i <= n; i++) {
		if (i % 2 == 0)
			a2 += a1;
		else
			a1 += a2;
	}
	return a1 > a2 ? a1 : a2;
}
int fib2(int n) {//迭代方法二
	int a = 1, b = 1, c = 1;//c赋初值1，当n不大于2时，直接返回1
	while (n > 2) {
		c = a + b;//当n大于2时，c的初值被覆盖
		a = b;
		b = c;
		n--;//n为循环次数，仅起计数作用，计算中不参与，从高往低计数
		//和从低往高计数，效果一样,这里n--，与条件呼应，可以跳出循环
	}
	return c;
}
int main() {
	printf("请输入一个正整数:\n");
	int num = 0;
	scanf("%d", &num);
	int res = fib2(num);
	printf("第%d个斐波拉契数为%d\n", num, res);
	return 0;
}//递归：容易栈溢出，容易效率低。递归是一种思维，对某些问题有妙解
*/

//汉若塔问题
void hrt(int n,char c) {
	int col = 'b';
	if (n > 1)
		hrt(n - 1, col);
	printf("将%d挪到%c柱上\n",n,c);
}
int main() {
	printf("请输入一个正整数:\n");
	int num = 0;
	scanf("%d", &num);
	hrt(num,'c');
	return 0;
}
