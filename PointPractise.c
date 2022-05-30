#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>	

//1.
/*int main() {
	int a[5] = { 1,2,3,4,5 };
	int*p = (int*)(&a + 1);
	printf("%d %d", *(a + 1), *(p - 1));
	return 0;
}*/

//2.
/*struct test {
	int num;
	char* pcName;
	short sDate;
	char ch[2];
	short sBa[4];
}*p;
int main() {
	p = (struct test*)0x100000;
	printf("%p\n", p + 0x1);//注意，p+20,这是16进制，所以是p+14；
	printf("%p\n",(unsigned long) p + 0x1);//这里p不是表示地址，表示一个数0x100000，p+1=0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
	return 0;
}*/

//3
/*int main() {
	int a[4] = { 1,2,3,4 };
	int*p1 = (int*)(&a + 1);
	int*p2 = (int*)((int)a + 1);
	printf("%x,%x", p1[-1], *p2);//[]内可以有负数
	return 0;
}*/

//4
/*int main() {
	int a[3][2] = { (0,1),(2,3),(4,5) };//注意，这里面是小括号
	int *p;
	p = a[0];
	printf("%d\n", p[0]);
	printf("%d\n", a[0]);
	return 0;
}*/

//5
/*int main() {
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}*/

//6
/*int main() {
	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p1 = (int*)(&arr + 1);
	int *p2 = (int*)(*(arr + 1));//*(arr+1)等价于arr[1]，arr[1]可以指代arr[1]第一个元素的地址
	//所以，可以将前面的强制类型转换(int*)去掉.
	printf("%d %d", *(p1 - 1), *(p2 - 1));
	return 0;
}*/

//7
/*int main() {
	char *pp = "abcdef";//把字符串"abcdef"的首地址赋值给字符指针pp；
	char* ch[] = { "work"," at","alibaba" };
	char**p = ch;
	p++;
	printf("%s\n", *p);//打印字符串，给的就是字符串名，也就是首元素地址
	return 0;
}*/

//8
int main() {
	char*c[] = { "ENTER","NEW","POINT","FIRST" };//"ENTER","NEW"等字符串可能存储间隔很远
	char**cp[] = { c + 3,c + 2,c + 1,c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//注意：这里的cpp值变化了（+1）
	printf("%s\n", *--*++cpp+3);//注意：这里的cpp值在上行的基础上又变化了（又+1）
	printf("%s\n", *cpp[-2]+3);//注意：这里的cpp值没有变化。跟上一行相同；
	printf("%s\n", cpp[-1][-1]+1);//
	return 0;
} 