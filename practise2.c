#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

/*int main() {
	int a = 0x11223344;//内存中存的是:44 33 22 11 
	char* pa = (char*)&a;
	*pa = 0;
	printf("%x\n", a);
	return 0;//小端机，改的是44，结果是11223300；
}*/

/*int i;//全局变量不初始化，默认是0；局部变量不初始化，则为随机值；
int main() {
	i--;//-1
	if (i > sizeof(i))//sizeof返回值都是无符号数，比较时，
		//把-1转换成无符号数，这个数很大，所以这个数会大于4；
		printf(">\n");
	else
		printf("<\n");
	return 0;
}*/

/*int main() {
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;// 逗号表达式等级最低。这里4个逗号表达式，
	//先计算b=++c，然后再往后计算。注意，这里不是b =( ++c, c++, ++a, a++)
	//如果是这样，则( ++c, c++, ++a, a++)中的值为a++。
	b += a++ + c;
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	return 0;
}*/

//统计二进制中1的个数
int test1(unsigned int num) {//注意，这里改成unsigned，就能统计负数二进制了
	int count = 0;//初始化，从0开始计数
	while (num) {
		if (num % 2 == 1)
			count++;
		num /= 2;
	}
	return count;
}
int test2(int num) {
	int count = 0;
	while (num) {//高效，循环次数少
		num = num & (num - 1);//计算一次，去掉右边一个1
			count++;		
	}
	return count;
}
int main() {
	int a =-1;
	unsigned int b = (unsigned int)a;
	 int c = (unsigned int)a;
	printf("%d  %d %d\n", a, b,c);
	int d=test2(a);
	printf("a的二进制中有%d个1\n", d);
	system("pause");
	return 0;
}