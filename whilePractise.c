#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>	

//break和continue的区别
/*int main() {
	int i = 1;
	while (i <= 10) {//当有多条语句时加大括号
		if (5 == i)
			//break;//此语句跳出while循环
			continue;//此语句结束后面的语句，继续下一次while循环
		//由于i++在continue语句后面，i到5后不能自加，所以i一直等于
		//5，while一直在循环到continue，陷入死循环。
		//结果是：1 2 3 4 死循环
		printf("%d  ", i);
		i++;
	}		
	printf("回到主干");
	return 0;
 }*/

//EOF
/*int main() {
	char ch =0;//类型可以为char,也可以为int,
	while ((ch = getchar()) != EOF)//EOF表示end of file,值为-1
		//但是这里输入“EOF”或者“-1”都不能结束，因为引号内
		//的计算机认为是字符，只有按“ctrl+z”才能结束
		putchar(ch);	//ctrl+z 表示输入EOF
	return 0;
}*/

//输入的陷阱
/*int main() {
	char ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>\n");	
	//scanf("%s\n", password);//注意：这里引号内加\n,程序会中断。
	scanf("%s", password);//（输入123456\n）此时读走了密码，但是输入缓冲区还剩一个\n;
	getchar();//将缓冲区的/n读走，否则，下一个getchar读取的将是\n
	//如果密码输入（123 abc）scanf只会读取空格或者回车前的内容，
	//getchar将读取空格，后面的getchar再读取abc(a)，所以还是没有实现目的
	printf("确认请输入Y，放弃请输入N:");
	ch = getchar();
	if (ch == 'Y'|| ch == 'y') {
		printf("您已确认！");
	}		
	else{
		printf("您已取消！");
	}
	return 0;
}*/

//上述问题解决办法
/*int main() {
	int ch = 0;
	int password;
	printf("请输入密码:>\n");
	while ((password = getchar()) != '\n') {//
		//;//空语句，本例中好像可有可无
	}
	printf("%c\n", password);//password存的是\n，或者是空？
	//字符只能用%c格式，否则报错
	printf("确认请输入Y，放弃请输入N:");
	ch = getchar();
	if (ch == 'Y' || ch == 'y') {
		printf("您已确认！");
	}
	else {
		printf("您已取消！");
	}
	return 0;
}*/

//打印字符串里的数字
/*int main() {
	char ch;//int 和char在这里效果一样
	while ((ch = getchar()) != EOF) {
		if (ch<'0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}*/

//for 循环 问题一
/*int main() {
	for (int i = 0; i < 11; i++) {
		if(i=5)//如果判断语句误写成赋值语句，则条件为真，永远循环下去。
		printf("hehe\n");
		printf("哈哈\n");
	}		//建议：不要在循环体内修改循环变量，防止循环失控；
	return 0;
}*/

//for 循环 问题二
/*int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//注意，跟Java
	//不一样，Java这样赋值的时候，不能指定数组长度的。
	int i = 0;
	for (; i < 10; i++)//前面已经初始化循环变量了，此处可以省略，当有嵌套循环时，省略会出问题
		//循环变量建议采用前闭后开的方式写。此处有10个循环
		printf("%d ", arr[i]);//循环体只有一句时，可省略大括号。
	return 0;
}*/

//for 循环变种一
/*int main() {//经常会用到
	for (;;)//循环变量初始化，判断，调整都可以省略；判断部分被省略，则恒为真。
	//这是个永久循环，除非循环体break出去
		printf("hehe ");
	return 0;
}*/

//for 嵌套循环省略初始化（初始化在for括号外）发生的问题
/*int main() {
	int i = 0;
	int j = 0;
	for (; i < 10; i++) {
		for (; j < 10; j++) {
			printf("hehe ");
		}
	}//10个hehe，当i开始第二轮循环时，j已经是10了，没有再被
	//初始化为0，故内循环没有进行；（i却一直循环到10，但后面不打印）
	return 0;
}*/

//for 循环变种二
/*int main() {
	int i ,j;
	
	for (i = 0, j = 0; i < 3 && j < 5; ++i, j++) {
		printf("hehe ");
	}
	return 0;
}*/

//for 循环例题
/*int main() {
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//注意:此处判断语句写成了
		//赋值语句，赋值0，则为假；赋值非0，则为真。所以循环了0次
		k++;
	return 0;
}*/

//do while 循环,至少循环一次
/*int main() {
	int i = 0;
		do {
			if (i == 5)
				//break;//0,1,2,3,4
				continue;//0,1,2,3,4,死循环
			//因为i=5后，continue后面的语句不执行，i无法增加，一直在if,continue,while循环
			printf("%d ", i);
			i++;
		} while (i < 10);//注意，此处条件判断后要加分号
	return 0;
}*/

//练习1：计算n的阶乘
/*int main() {
	printf("请输入一个整数\n");
	int n;
	scanf("%d", &n);
	int cum=1;
	for (int i = 1; i <= n; i++)
		cum *= i;
	printf("%d的阶乘是%d", n, cum);
	return 0;
}*/

//练习2：计算 1!+2!+3!+4!+  +10!
/*int main() {
	int i = 1;
	int sum = 0;
	for (; i <= 10; i++) {
		int cum = 1;
		for (int j = 1; j <= i; j++) {
			cum *= j;
		}
		sum += cum;
	}	
	printf("%d\n", sum);//4037913
	return 0;
}*/

//练习2(优化)：计算 1!+2!+3!+4!+  +10!
/*int main() {
	int i = 1;
	int sum = 0;
	int cum = 1;
	for (; i <= 10; i++) {
		cum *= i;
		sum += cum;
	}
	printf("%d\n", sum);//4037913
	return 0;
}*/

//练习3：在一个有序数组中查找具体数字n
/*int main() {
	int arr[14] = { 1,2,3,4,5,6,7,8,9,10 };//数组长度可不写，
	//写一定要大于或等于赋值长度,并且已写的值为数组长度，
	//长度大于{}后的值都为0.
	int findnum = 13;
	int flag = 0;//设置小旗子，有好处,好输出否定分支
	int i;
	printf("%d \n", sizeof(arr) / sizeof(arr[0]));
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		if (findnum == arr[i]) {
			printf("已经找到了数%d", arr[i]);
			flag++;
			break;
		}
	//if (flag == 0)//注意：逻辑==容易写成赋值=。
	//也可以写成下面一句
	if(i == sizeof(arr) / sizeof(arr[0]))
		printf("没有找到这个数\n");
	return 0;
}*/

//练习3(优化，折半查找)：在一个有序数组中查找具体数字n
/*int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int findnum = 17;
	int left = 0;
	int right=sizeof(arr)/sizeof(arr[0])-1;//右下标是元素个数-1
	int mid= (left + right) / 2;
	while (left <= right)//while条件在循环体后要加分号，这里不要加
	 {	
		mid = (left + right) / 2;
		if (findnum == arr[mid]) {
			printf("已经找到了这个数，下标是%d", mid);			
			break;
		}
		else if (findnum<arr[mid]){
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	} 
	if (left > right)//由于right,left的后续调整，left>right会发生
		printf("没有找到这个数\n");
	return 0;
}*/

//练习4：演示多个字符从两端移动，向中间汇聚
/*int main() {
	char ch1,ch2;
	printf("请输入一个字符\n");
	scanf("%c", &ch1);
	while ((ch2 = getchar()) != '\n') {
	}	
	printf("请输入另一个字符\n");
	scanf("%c", &ch2);
	for (int i = 0; i <= 20; i++) {
		for (int j = 0; j <= i; j++) {
			printf(" ");
		}
		printf("%c", ch1);
		for (int k = 0; k <= 41-2*i-2; k++) {
			printf(" ");
		}
		printf("%c\n",ch2);
	}
	return 0;
}*/

//练习5：模拟用户登录形式，并且只能登录三次
/*int main() {
	char password[7];//密码输入6位，数组也只有6位的话，会出现Stack corrupted问题
	char putword[7];//最后一位储存的是'\0'
	int i = 2;
	char ch;
	int flag = 0;
	printf("请设置您的密码：\n");
	scanf("%s", password);
	//while ((ch=getchar()) != EOF) {  };
	do {
		printf("请输入您的密码：\n");
		scanf("%s", putword);
		for (int j = 0; j < 6; j++) {
			if (putword[j] != password[j])
				break;
			else
				flag++;
		}
		if (flag == 6) {
			printf("您输入的密码正确！");
			break;
		}
		i--;
	} while (i == 0);
	return 0;
}*/

//练习6：
/*int main() {
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++) {//注意，初始条件只执行一次
		if (b >= 20)
			break;
		if (b % 3 == 1) {//注意2个if，和if--else if的区别
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d", a); 
	return 0;
}*/

//注意：flag=-flag,可以正负交错计算，sum +=flag*n
//注意：求一组数的最大值时，如果引进一个数num，并把num与每个数
//去比较时，有可能num就是最大的，所以求的是一组数+num中的最大值
//解决办法是，不要随便给num赋值，而要把一组数中的某个值赋给它
//“%d*%d=%2d,i,j,i*j”此输出语句中，%2d为二位十进制数，靠右对齐，
//%-2d为靠左对齐
//goto语句尽量不用，跳来跳去，可能会打乱流程；但是，也有特殊的应用
//goto语句应用场景：比如深层嵌套，要跳出来，可以用goto语句

//goto应用：关机程序
#include<string.h>
#include<stdlib.h>
int main() {
	char input[20] = { 0 };
	//cmd输入：shutdwon -s -t 60  
	system("shutdown -s -t 60");//60秒内关机
	start:
	printf("电脑将在1分钟后关闭，输入no取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "no") == 0)
		system("shutdown -a");//取消关机
	else
		goto start;
	return 0;
}