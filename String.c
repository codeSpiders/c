#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//字符串
/*int main() {
	char arr1[] = "abc";//\0隐藏在字符串结尾
    // char arr2[] = { 'a','b','c','\0' };//\0--字符串的结束标志。	
	char arr2[] = { 'a','b','c',0 };//0此处好像也可以(\0的ASCII	编码是0）
	 //此处的0不能加单引号，否则，它算作一个字符，而不是结束标志
	char arr3[] = { 'a','b','c' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//strlen---string length 求字符串的长度
	printf("%d\n", strlen(arr1));//3，\0不算在长度内
	printf("%d\n", strlen(arr2));//3
	printf("%d\n", strlen(arr3));//随机值

	return 0;
}*/

//转义字符
int main() {
	printf("abcn");
	printf("abc\n");//\n转义字符，表示换行

	printf("c:\test\32\test.c\n");//\t--->制表符，\32-->
	printf("c:\\test\\32\\test.c\n");//\\让\不再表示转义

	printf("%c\n", '\'');
	printf("%s\n", "\"");

	printf("(are you ok??)\n");//??)--->三字母词(早期语法,现在已不存在了)
	
	printf("%d\n", strlen("c:\test\32\test.c"));//13,\32作为八进制的数，
	//转换成十进制的数，找出对应的ASCII码值(26)，对应的字符。
	//\ddd  ddd表示八进制的数字，再对应ASCII码，对应的字符；
	//\xdd  dd表示十六进制的数字，再对应ASCII码，对应的字符；

	return 0;
}

///*c语言不支持嵌套注释，即/*/*  */*/
//注释快捷键ctr+k+c;取消注释为ctr+k+u

//字符串结束标志：\0 它的ASCII码值为0
//'\0'--转义字符：0
//0 表示数字0，它的ASCII码值为48
//'0'表示字符0
// EOF :end of file -文件结束标志，实际值为-1
//\0不算字符串的长度。但是当字符串存到数组中是，\0需要占一个数组元素。当用strlen计算数组长度时，如果数组中没有\0，则输出的长度是
//随机值（因为它要一直数到\0为止）。
//并不是所有的（/字母）都是转义字符

