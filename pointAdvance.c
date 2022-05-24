#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//字符指针
/*int main() {
	int arr[10] = { 0 };
	char* p = "abdcdefghi";//abdcdefghi是常量字符串.最准确的写法:const char*p
	printf("%c\n", *p);//a,
	printf("%c\n", p);//?,
	printf("%s\n", p);//打印字符串，如果把p改成*p，则会出错
	//*p = 'w';//尽管p是指向字符串的第一个字符，但却不能这样修改；会报错
	//linux中会报：segmentation fault
	//因为abdcdefghi是一个常量字符串。
	printf("%c\n", *p);
	printf("%s\n", p);
	return 0;
}*/

/*int main() {
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";//两个数组，存储在两个空间
	char*p1 = "abcdef";
	char*p2 = "abcdef";//同一个常量字符串，只存储一份，p1和p2指向同一地址
	//常量字符串，一模一样，不能被修改，所以只存一份
	if (arr1 == arr2)
		printf("hehe\n");
	else
		printf("wonderful\n");

	if (p1 == p2)
		printf("hehe\n");
	else
		printf("wonderful\n");
	return 0;
}*/

//指针数组，实际上是数组
/*int main() {	
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 3,4,5,6,7,8 };
	int*parr[] = { arr1,arr2,arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d ", *(parr[i]+j));
		}
		printf("\n");
	}	
	return 0;
}*/

//数组指针，实际上是指针
/*int main() {
	int* p = NULL;//整型指针；
	char* pc = NULL;//字符指针；
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//arr,首元素地址
	//arr[0],首元素地址
	//&arr，数组地址
	int(*pa)[10] = &arr;//数组指针的赋值,int(*)[10]是数组指针的类型
	return 0;//int*[10]是指针数组的类型
}*/

/*int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[10] = &arr;//(*pa)这个括号必须打
	int*p = arr;
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", (*pa)[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", *(*pa+i));
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", *(p + i));
	}
	return 0;
}*///数组指针在一维数组中使用不方便，还不如用整整指针更简单、易读一些；

//数组指针适用于二维数组以上，
/*void print1(int arr[3][5],int row, int col) {//参数是数组的形式
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int*p, int row, int col) {//首元素是第一行第一列的元素；
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", p[i*col+j]);
		}
		printf("\n");
	}
}
void print3(int(*p)[5], int row, int col) {//首元素是第一行的一维数组
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			//printf("%d ", p[i][j]);
			//printf("%d ", *(*(p + i)+j));//也可以这样写
			//printf("%d ", (*(p + i))[j]);//也可以这样写
			printf("%d ", p[i][j]);//也可以这样写
		}
		printf("\n");
	}
}
int main() {
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	print3(arr, 3, 5);
	return 0;
}*/

/*int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int*p = arr;
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", p[i]);
		printf("%d ", *(p+i));
		printf("%d ",arr[i]);
		printf("%d ", *(arr+i));//arr[i]==*(arr+i)
	}
	return 0;
}*/

//int(*parr[10])[5]---是一个数组，该数组有10个元素，每个元素都是一个数组指针
//该数组指针指向的数组有5个元素，每个元素是int型

//一维数组传参，下面函数传参是否可行？
/*void test(int arr[]){}//可行。[]中数字可写，可不写，可写与调用数组不同的值
void test(int arr[10]){}//可行。
void test(int* arr){}//可行。指针传参，传入首元素地址
void test2(int* arr[20]) {}//可行。20可省略。
void test2(int** arr) {}//可行。二级指针传参，可理解为（int* *arr）?						
int main() {
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}*/

//二维数组传参，下面函数传参是否可行？
/* test1(int  arr[3][5]) {}//可行
void test2(int  arr[][5]) {}//可行
//void test3(int  arr[3][]) {}//不可行
//void test4(int  arr[][]) {}//不可行

void test5(int* arr){}//不可行。但是，可以通过i*col+j来计算？
void test(int* arr[5]){}//不可行。不是指针，是指针数组
void test(int(*arr)[5]){}//可行。
void test(int **arr){}//不可行。数组的地址不能放到二级指针里。二级指针是
//存放一级指针的地址。
int main() {
	int arr[3][5] = { 0 };//二维数组，arr表示的是首元素地址，这里首元素是第一个一维数组
	test(arr);
	return 0;
}*/

//一级指针传参，下面函数传参是否可行？
/*void print(int*p, int sz) {
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", *(p + i));
}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int*p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);
	return 0;
}*/

//二级指针传参
/*void test(int**p){}	
int main() {
	int*p1;
	test(&p1);//可传一级指针的地址
	int**p11 = &p1;
	test(p11);//可传二级指针
	int* arr[] = {NULL};
	test(arr);//可传指针数组的首地址
				//好像不能传数组指针，它只是个一级指针
	return 0;
}*/

//函数指针
/*int add(int x, int y) {
	return x + y;
}
int main() {
	int a = 10;
	int b = 20;
	printf("%d\n", add(a, b));
	printf("%p\n", &add);
	printf("%p\n", add);//跟数组很类似,但是有不同，&add和add都是函数的地址
	int(*p)(int, int) = add;//函数指针p赋值
	printf("%d\n", (*p)(a,b));
	return 0;
}*/

//代码：
// (*(void(*)())0)();//一次函数调用,调用地址为0位置的函数
// void(*signal(int,void(*)(int)))(int);//函数申明：函数名为signal,
//它的2个参数是(int,void(*)(int)),它的返回值为void(*    )(int)。可简写如下：
//typedef void(*pfun)(int);//pfun的类型是void(*)(int)
//pfun signal (int,pfun);

//函数指针
/*int add(int x, int y) {
	return x + y;
}
int main() {
	int a = 10;
	int b = 20;	
	int(*p)(int, int) = add;//函数指针p赋值
	printf("%d\n",  p(a, b));//相当于add(a,b)，add就是一个地址
	printf("%d\n", (*p)(a,b));
	printf("%d\n", (**p)(a,b));//多余1颗*，没有用，add函数仍可调用
	printf("%d\n", (***p)(a,b));
	printf("%d\n",  p(2, 3));
	printf("%d\n", (*p)(2,3));//(*p)必须括起来。因*的优先级比()低
	printf("%d\n", (**p)(2,3));
	printf("%d\n", (***p)(2,3));
	return 0;
}*/

//函数指针数组
/*int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
int main() {
	//int(*p)(int, int);
	int(*p[4])(int, int) = { add,sub,mul,div };
	int i = 0;
	for (i = 0; i < 4; i++)
		printf("%d\n", p[i](2, 3));//p前加*会报错
	return 0;
}*/

//char* (*p)(char*ps1,const char*ps2)
//char* (*p[4])(char*ps1,const char*ps2)

//函数指针数组的应用
/*int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
int xor(int x, int y) {
	return x ^ y;
}
void menu() {
	printf("*************************\n");
	printf("***  1--add   2--sub  ***\n");
	printf("***  3--mul   4--div  ***\n");
	printf("***  0--exit  5--xor  ***\n");
	printf("*************************\n");
	printf("请选择:\n");
}
int main() {
	int input = 0;
	do {
		menu();
		scanf("%d", &input);
		if (input <= 5 && input >= 1) {
			printf("请输入两个整数：\n");
			int x = 0, y = 0;
			scanf("%d%d", &x, &y);
			int(*parr[6])(int, int) = { NULL,add,sub,mul,div,xor };
			printf("%d\n", parr[input](x, y));
		}
		else if (input == 0) {
			printf("退出\n");
		}
		else {
			printf("输入错误\n");
		}		
	} while (input);
	return 0;
}*/

//回调函数:就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为
//参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，我们就说这是
//回调函数。回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发
//生时由另外的一方调用，用于对该事件或条件进行响应。
/*int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
int xor(int x, int y) {
	return x ^ y;
}
void menu() {
	printf("*************************\n");
	printf("***  1--add   2--sub  ***\n");
	printf("***  3--mul   4--div  ***\n");
	printf("***  0--exit  5--xor  ***\n");
	printf("*************************\n");
	printf("请选择:\n");
}
void malc(int(*p)(int, int)) {
	printf("请输入两个整数：\n");
	int x = 0, y = 0;
	scanf("%d%d", &x, &y);
	printf("%d\n", p(x, y));
}

int main() {
	int input = 0;
	do {
		menu();		
		scanf("%d", &input);
		switch (input) {
		case 1:
			malc(add);
			break;
		case 2:
			malc(sub);
			break;
		case 3:
			malc(mul);
			break;
		case 4:
			malc(div);
			break;
		case 5:
			malc(xor);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误\n");
		}
	} while (input);
	
	
	return 0;
}*/

/*int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
int xor(int x, int y) {
	return x ^ y;
}
void menu() {
	printf("*************************\n");
	printf("***  1--add   2--sub  ***\n");
	printf("***  3--mul   4--div  ***\n");
	printf("***  0--exit  5--xor  ***\n");
	printf("*************************\n");
	printf("请选择:\n");
}
int malc(int(*p)(int, int)) {
	printf("请输入两个整数：\n");
	int x = 0, y = 0;
	scanf("%d%d", &x, &y);
	 p(x, y);//此处可以不加return;加也可以。因p(x,y)中有return，可以冲破2层函数？
}
int main() {
	int input = 0;
	int res = 0;
	do {
		menu();		
		scanf("%d", &input);
		switch (input) {
		case 1:
			res = malc(add);
			printf("%d\n", res);
			break;
		case 2:
			res = malc(sub);
			printf("%d\n", res);
			break;
		case 3:
			res = malc(mul);
			printf("%d\n", res);
			break;
		case 4:
			res = malc(div);
			printf("%d\n", res);
			break;
		case 5:
			res = malc(xor);
			printf("%d\n", res);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误\n");
		}
	} while (input);
	
	return 0;
}*/

//指向函数指针数组的指针
/*int add(int x, int y) {
	return x + y;
}
int main() {
	int arr[10] = { 0 };
	int (*pa)[10] = &arr;//取出数组的地址
	int(*parr[4])(int, int) = { add };//函数指针数组
	int(*(*pparr)[4])(int, int) = &parr;//pparr是指向函数指针数组的指针
	return  0;
}*/

/*int main() {
	int arr[] = { 1,2,3,4 };
	printf("%d\n", sizeof(arr));//16，求整个数组的大小
	printf("%d\n", sizeof(arr+0));//4，首元素地址
	printf("%d\n", sizeof(*arr));//4，首元素地址解引用，这里表示第一个元素的类型大小
	printf("%d\n", sizeof(arr+1));//4，第二个元素的地址
	printf("%d\n", sizeof(arr[1]));//4，第二个元素
	printf("%d\n", sizeof(&arr));//4，取出整个数组的地址，数组的地址仍是地址
	printf("%d\n", sizeof(*&arr));//16，求数组的大小，*&好像相互抵消了
	printf("%d\n", sizeof(&arr+1));//4,整个数组地址的下一个地址
	printf("%d\n", sizeof(&arr[0]));//4，第一个元素的地址
	printf("%d\n", sizeof(&arr[0]+1));//4，第二个元素的地址
	return 0;
}*/

/*int main() {
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr + 1));//4
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(*&arr));//6
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0]));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4

	printf("%d\n", strlen(arr));//随机数
	printf("%d\n", strlen(arr + 0));//随机数
	//printf("%d\n", strlen(*arr));//错误。*arr传的是‘a'(97)，strlen需要的
	//是地址，结果，strlen就从地址97开始数字符了。这是非法访问内存了。
	//printf("%d\n", strlen(arr[1]));//错误 
	printf("%d\n", strlen(&arr));//随机数	
	printf("%d\n", strlen(&arr + 1));//随机数-6	
	printf("%d\n", strlen(&arr[0] + 1));//随机数-1
	return 0;
}*/

/*int main() {
	char arr[] = { "abcdef" };
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr + 1));//4
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(*&arr));//7
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0]));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//错误	
	printf("%d\n", strlen(&arr));//6	
	printf("%d\n", strlen(&arr + 1));//随机值，这里跳过了末尾的'\0',
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}*/

int main() {
	int arr[3][4] = { 0 };
	printf("%d\n", sizeof(arr));//48
	printf("%d\n", sizeof(arr[0][0]));//4
	printf("%d\n", sizeof(arr[0]));//16，此处arr[0]表示第一行数组的地址；
	printf("%d\n", sizeof(arr[0]+1));//16/4，此处arr[0]是第一行的数组名，数组名此时表示
	//首元素的地址，arr[0]+1表示第二个元素的地址，地址大小是4/8.
	//arr[0]没有单独放在sizeof里面，也没有对它取地址操作，所以，它不是表示第一行数组的地址
	printf("%d\n", sizeof(*(arr[0]+1)));//4
	printf("%d\n", sizeof(arr+1));//16/4,arr没有单独放在sizeof里面，也没有对它取地址
	//操作，所以它不是表示整个数组的地址，而是表示二维数组的第一个元素地址，即第一行的
	//地址。所以arr+1是第二行的地址，所以是4/8。
	printf("%d\n", sizeof(*(arr + 1)));//4/16, *(arr+1)相当于第二行的数组名
	printf("%d\n", sizeof(&arr[0] + 1));//16/4,第二行的地址
	printf("%d\n", sizeof(*(&arr[0] + 1)));//4/16
	printf("%d\n", sizeof(*arr));//4/16,arr表示首元素（第一行）地址。*arr表示第一行
	printf("%d\n", sizeof(arr[3]));//-/16,sizeof并没有访问内存地址，只是根据类型来计算
	//大小。所以，此处arr[3]==arr[0]，因为他们大小是相同的。sizeof并没有访问arr[3]的内存
	return 0;
}