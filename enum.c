#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


enum gender {
	MALE,//ö�ٿ��ܵ�ȡֵ����ö�ٳ���
	FEMALE,
	SECRET
};
enum color {
	RED=2,
	GREEN=1,
	BLUE=6
};
int main() {
	enum gender g=MALE	;//ֻ�ܸ�ö���ڶ����ֵ
	printf("%d,%d,%d\n", MALE, FEMALE, SECRET);
	printf("%d,%d,%d\n", RED, GREEN, BLUE);
	//enum color c = 2;//������ôд����Ϊ2��int���ͣ���c��ö�����ͣ��������Ͳ�һ��
	//MALE = 5;//�����޸�MALE��ֵ�ˣ�ֻ���ڶ���ö������ʱ�޸�
	return 0;
}
//ΪʲôҪʹ��ö�٣�����ʹ��define���峣����?(ö�ٵ��ŵ�)
//1.���Ӵ���Ŀɶ��ԺͿ�ά���ԣ�
//2.��#define����ı�ʶ���Ƚϣ�ö�������ͼ�飬���Ͻ�
//3.��ֹ��������Ⱦ���з�װ��
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������