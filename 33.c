#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//sizeof���÷�
/*int main() { 
	int a = 10;
	int arr[] = { 1,2,3,4,5 };//Java�У��ɽ������ŷ���int����
	printf("a�ĳ���Ϊ��%d\n", sizeof (a));
	printf("a�ĳ���Ϊ��%d\n", sizeof a);//���Կ�����sizeof�ǲ����� 
	printf("int�ĳ���Ϊ��%d\n", sizeof(int));//��Ϊintʱ�����������	
	printf("arr����ĳ��ȣ�%d\narr�����Ԫ�صĳ��ȣ�%d\n", sizeof(arr), sizeof(arr[0]));
	printf("%d\n%d\n", sizeof arr, sizeof arr[0] );	
	int sz = sizeof arr / sizeof arr[0];//������ĳ��ȣ�
	printf("sz=%d\n", sz);
	return 0;
}*/

//~���÷�����Ϊȡ����
/*int main() {
	int a = 0;
	int b = ~a;//-1
	printf("%d\n", b);
	return 0;   //0��ʾfalse,��0��ʾtrue
}*/

//++���÷�
/*int main() {
	int a = 0;
	int b = a++;//�к���++����ʹ��a��ֵ���ټӼ�
	int c = 0;
	int d = ++c;//��ǰ��++���ȼӼӣ���ʹ��a��ֵ
	printf("a=%d;b=%d\n", a, b);
	printf("c=%d;d=%d\n", c, d);
	return 0;
}*/

//�߼���������ע�⣬C�����У�0Ϊfalse����0Ϊtrue��
/*int main() {
	int a = 0;
	int b = 5;
	int c = a && b;    //ע�⣬����&����λ������
	int d = a || b;
	printf("c=%d\n", c);//false����0��true����1��
	printf("d=%d\n", d);
	return 0;
}*/

//����������
/*int main() {
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };//ÿ��Ԫ�س�ʼ��Ϊ0
	int max = a > b ? a : b;//��Ŀ������,Ҳ������������
	//exp1?exp2:exp3---->exp1���Ϊ�棬��ִ��exp2������ִ��exp3��
	printf("%d\n", max);
	return 0;
}*/

//�����ؼ��֣�
// atuo,break,case,char,const,continue,default,do,double,else,enum,
//extern,float,for,goto,if,int,long,register,return,short,signed,
//sizeof,static,struct,switch,typedef,union,unsigned,void,volatile,while

/*int main() {
	auto int a = 10;//�ֲ��������ֽ��Զ�����������ʡ��
	register int b = 10;//�����b����ɼĴ�������
	int c = -5;//int��������з��ŵı�����int=signed int
	unsigned int d = 6;//�޷��ű�������Զ��������
	unsigned int e = -5;//e=4294967291
	printf("%d\n", e);//��ӡ������e��Ȼ��-5

	typedef unsigned int u_int;
	u_int num = 20;   //��ͬ��unsigned int num = 20
	return 0;	
}*/

//static���÷�(���ξֲ�����,�ı��˱������������ڣ�ʹ�������ڱ䳤��
/*void test() {
	//int a = 1;		//a��һ���ֲ�����
	static int a = 1;//a��һ����̬�ľֲ�����
	a++;
	printf("a=%d\n", a);
}
int main() {
	int i = 0;
	while (i < 6) {
		test();
		i++;
	}
	return 0;
}*/

//static���÷�(����ȫ�ֱ������ı��˱����������򣬾�̬��ȫ��
//����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����ԭ�ļ����޷�ʹ����)
//static���κ������ı��˺������������ԣ���ͨ���������ⲿ�������ԣ�
//����static���κ󣬱�����ڲ��������ԡ�Ч��ͬ����ȫ�ֱ���һ����
/*static int g_val3=2030;
int main() {
	extern int g_val;
	extern int g_val2;
	printf("%d\n", g_val);
	//printf("%d\n", g_val2);//����ʹ��g_val2
	printf("%d\n", g_val3);
	return 0;
}*/

//define ���峣���ͺ�
/*#define MAXA 2020
#define MAX(x,y)( x > y ? x : y)//���ֲ�����ͬ
int main() {
	int a = 30;
	int b = 20;
	int arr[MAXA] = { 0 };
	int max = MAX(a, b);
	printf("%d\n", max);
	printf("%d\n", MAXA);
	return 0;

}*/

//ָ��
main() {
	int a = 10;
	printf("%p\n", &a);//��ӡa�ĵ�ַ
	int* p = &a;  //ȡ��ַ
	printf("%p\n", p);
	*p = 30;//*�����ò�����
	printf("*p=%d\n", *p);
	printf("a=%d\n", a);
	char ch = 'c';
	char* cp = &ch;
	printf("%p\n", cp);
	printf("%d\n", sizeof cp);
	return 0;
}
