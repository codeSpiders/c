#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//算术运算符：+ - * / %
/*int main() {
	int a = 7 / 2;
	int b = 7 / 2.0;
	double c = 7 / 2.0;
	int d = 7 % 3;
	//int d = 7.0 % 3;//%两个操作数都必须是整型
	printf("%d %d %d %lf\n", a, b, c,d);//输出格式不对，将会输出0或0.000
	return 0;
}//1.除了%运算符，其他（+ - * / ）运算符既可以作用于整数，也可以作用于浮点数；
//2. / 运算符作用于2个整数，则进行整数除法，而只要操作数有一个浮点型，则进行浮点除法；
//3. % 运算符必须作用于2个整数，结果是相除后的余数，也是整型。
*/

//移位运算符：<<  >> 只能作用于整数
/*int main() {
	int a = 10;
	int b=a << 2;//用另一个变量来获取结果，
	//左移：左边丢弃，右边补0
	int c = a >> 2;//编辑器一般都采用算术移位；
	//右移分算术右移和逻辑右移
	//算术右移：左边补符号位，右边丢弃
	//逻辑右移：左边补0，右边丢弃
	int d = 10;
	d = d << 2;//也可以这样，移位后再赋值给自己，
	int e = -1;
	e = e >> 3;
	printf("%d %d %d %d %d\n", a,b,c,d,e);
	return 0;
	//对于移位操作，不能写成：a<<-1，移动负数位，这个标准未定义，连编译器都不知道怎么办
}*/

//移位运算符：<<  >>
/*int main() {
	int a = -1;
	int b = a >> 1;	
	printf("%d %d \n", a, b);
	short c = -30000;
	short d = c << 1;
	printf("%d %d \n", c, d);
	return 0;
}*/

//位操作符：^ & |  只能作用于整数
/*int main() {
	int a = 5;
	int b = 3;
	int c = a & b;
	int d = a | b;
	int e = a ^ b;
	printf("%d %d %d", c, d, e);
	return 0;
}*/

//练习:求一个整数，存储在电脑中二进制的个数
/*int main() {//不适合负数，有问题
	int num = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	int count = 0;
	while (num ) {//此处条件也可以是num>0；估计计算慢一点
		if (num % 2 == 1)
			count++;
		num = num >> 1; 
	}
	printf("二进制中有%d位1\n",count);
	return 0;
}*/

//练习:求一个整数，存储在电脑中二进制的个数
/*int main() {//更正
	int num = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	int count = 0;
	for (int i = 0; i < 32; i++) {//注意：-1的符号位（最高位）其实也一直移过来了
		if (1 == ((num >> i) & 1))//移了32位后，符号位的1刚好移到了个位，尽管此时
			count++;//前面还有31个1，但是循环结束了，并不会计算补上的1。
	}
	printf("二进制中有%d位1\n", count);
	return 0;
}*/

//赋值操作符：=
//复合赋值符：+= -= *= /= %= <<= >>= ^= &= |= 
/*int main() {
	int a = 10;
	int x = 20;
	int y = 39;
	a = x = x + y;//连续赋值，不推荐，可读性不强；
	printf("%d %d %d\n", a, x, y);
	return 0;
}*/

//单目操作符： ! ~ + - & * ++ -- sizeof (int)
/*int main() {
	int a = 10;
	int b = 0;
	printf("%d %d\n", !a,!b);
	return 0;
}*/

/*int main() {
	int a = 3;
	char ch = 'e';
	char* p = &ch;
	int arr[10] = { 0 };
	printf("%d ", sizeof(a));//a外边的括号可省略
	printf("%d ", sizeof(int));//int外边的括号不能省略
	printf("%d ", sizeof(ch));
	printf("%d ", sizeof(char));
	printf("%d ", sizeof(p));
	printf("%d ", sizeof(char*));
	printf("%d ", sizeof(arr));
	printf("%d ", sizeof(int[10]));//int[10]就是数组的类型。int和[10]中间可有空格
	return 0;
}*///注意，数组传参传的是地址，地址的长度一般是4或者8

/*int main() {
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 4));//2，sizeof里面的表达式不会真正计算
	printf("%d\n", s);//0
	sizeof(s = a + 4);
	printf("%d\n", s);//0
	return 0;
}*/

/*int main() {
	int a = 0;
	printf("%d\n", ~a);
	int b = 11;
	b = b | (1 << 2);
	printf("%d\n", b);
	b = b & (~(1 << 2));
	printf("%d\n", b);
	return 0;
}*/

/*int main() {
	int a = 10;
	int b = 10;
	printf("%d\n", ++a);//11
	printf("%d\n", a);//11，说明printf()里的表达式会计算，与sizeof对比看
	printf("%d\n", b++);//10
	printf("%d\n", b);//11
	return 0;
}*/

/*int main() {
	int a = (int)3.14;//不强制转换，会报警告。强制转换不能写成:int(3.14);
	printf("%d\n", a);
	return 0;
}*/

//关系操作符：
//注意：=与==的区别

//逻辑操作符：
/*int main() {
	int a = 3;
	int b = 5;
	int c = a && b;
	int d = a || b;
	printf("%d %d", c, d);
	return 0;
}*/

//练习：
/*int main() {
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//加不加括号都是一样的；短路求值，前面已经为假了，后面就不算了
	printf("%d %d %d %d %d\n", i, a, b, c, d);
	return 0;
}*/

/*int main() {//与上面对比,加括号也没有起作用
	int i=1 , a = 0, b = 2, c = 3, d = 4;
	i = (a++) && (++b) && (d++);
	printf("%d %d %d %d %d\n", i, a, b, c, d);
	return 0;
}*/

/*int main() {//与上面的上面对比,a改为了1
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = (a++) && (++b) && (d++);
	printf("%d %d %d %d %d\n", i, a, b, c, d);
	return 0;
}*/

/*int main() {//&&换成了||
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//依然短路求值，算到++b，就可以确定表达式的真假了，就不会再计算了
	printf("%d %d %d %d %d\n", i, a, b, c, d);
	return 0;
}*/

//条件操作符：也叫三目操作符
/*int main() {
	int a = 3;
	int b = 4;
	int max = a > b ? a : b;
	printf("%d\n", max);
	return 0;
}*/

//逗号表达式：就是用逗号隔开多个表达式。逗号表达式，从左往右依次执行，整个表达式
//的结果是最后一个表达式的结果
/*int main() {
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);//13

	int d=1;
	if (a = b + 1, c = a / 2,  d > 0);

	while (a = b + 1, c = a / 2, a > 0) {
		;
	}
	return 0;
}*/
//函数调用subf((v1,v2),(v3,v4),v5,v6)中实参的个数？4个，(v1,v2)实际是v2,
//(v3,v4)实际是v4,所以参数实际为（v2,v4,v5,v6）,共4个。

//下标引用操作符：[]
/*int main() {
	int a[10];
	a[3] = 4;
	return 0;
}*/

//函数调用操作符：() ，操作数为函数和参数，
//.操作符，->操作符
/*struct stu {//创建结构体类型，类型名为：struct stu
	char name[20];
	int age;
	char id[20];
};

int main() {
	//使用struct stu类型创建了一个s1对象，并初始化
	struct stu s1 = { "liming", 20," 12584" };//定义时为分号，赋值时为逗号
	printf("%s\n", s1.name);
	struct stu* p = &s1;
	printf("%d\n", p->age);
	printf("%d\n", (*p).age);
	printf("%s\n", p->id);
	//s1.name = "wangshan";
	return 0;
}*/

//隐式类型转换
/*整型提升：C的算术运算，总是至少以缺省整型类型的精度来进行的；
//为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，这就是整型提升
//例如：char a,b,c;a=b+c;b和c的值被提升为普通整型后，才计算，计算结果为普通整型，然后
//又被截断，放入char类型的变量c中
//表达式的整型运算，要在CPU相应运算器内进行，CPU运算器ALU操作数的长度一般为int长度，
//同时也是通用寄存器的长度，因此，即使两个char相加，在CPU执行时，也要先转换为CPU内
//整型操作数的标准长度。通用CPU是难以直接实现两个8bit位的字节直接相加，（虽然机器
//指令中可能有这样的指令）。所以，表达式中各种长度小于int的整型值，在送入CPU计算前，
都必须先转换成int或者unsigned int。*/
/*int main() {
	char a = 4;//先是32比特位的4，再截断赋给a;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}*/

/*int main() {
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)//假，因为a为0xb6000000
		printf("a\n");
	if (b == 0xb600)//假，因为a为0xb6000000
		printf("b\n");
	if (c == 0xb6000000)//真
		printf("c\n");
	return 0;
}*/

/*int main() {
	char a = 1;
	printf("%u\n", sizeof(a));//1,
	printf("%u\n", sizeof(+a));//4,+号运算，整型提升
	printf("%u\n", sizeof(!a));//1，取反，没有提升
	return 0;
}*/

//算术转换:也是隐式转换的一种。int<unsigned int<long<unsigned long<float<double<long double
//表达式复杂后，计算顺序可能会有多种情况，如a*b+c*d+d*e等。写程序时，表达式尽量写简单
//一些，避免出现上述情况。不是唯一的求解路径，就可能是一个有问题的代码
//c + --c  ,不可预测，有歧义
//i=10;i=i-- - --i*(i=-3)*i++ + ++i;编译器不同，结果也不同
//i=1;(++i)+(++i)+(++i)；编译器不同，结果也不同