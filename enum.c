#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


enum gender {
	MALE,//枚举可能的取值，叫枚举常量
	FEMALE,
	SECRET
};
enum color {
	RED=2,
	GREEN=1,
	BLUE=6
};
int main() {
	enum gender g=MALE	;//只能赋枚举内定义的值
	printf("%d,%d,%d\n", MALE, FEMALE, SECRET);
	printf("%d,%d,%d\n", RED, GREEN, BLUE);
	//enum color c = 2;//不能这么写，因为2是int类型，而c是枚举类型，两边类型不一致
	//MALE = 5;//不能修改MALE的值了，只能在定义枚举类型时修改
	return 0;
}
//为什么要使用枚举，而不使用define定义常量呢?(枚举的优点)
//1.增加代码的可读性和可维护性；
//2.和#define定义的标识符比较，枚举有类型检查，更严谨
//3.防止了命名污染（有封装）
//4.便于调试
//5.使用方便，一次可以定义多个常量