#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//ʵ���ǰ����ͷ�ļ����������ݶ���������
#include<math.h>

//�ַ�������
/*int main() {
	char a[] = { "hengyang" };//���ַ�����ֵ���ַ����飬ע�������
	//'\0'����ַ�,���ԣ���9��Ԫ��
	char b[10] =  "##########" ;
	strcpy(b, a);//����ʱ����hengyang\0��������ȥ
	printf("%s", b);//��ӡʱ��ֻ��ӡ\0ǰ���Ԫ�أ�������\0
	//��Ŀ�����鳤��С��Դ���鳤��ʱ����ȫ�������������ǻᷢ���������
	//��Ŀ�����鳤�ȴ���Դ���鳤��ʱ����ȫ��������������Ŀ������ǰ��
	//��Ԫ�أ��������Ԫ��û�б����ǡ���ӡʱ��ӡ��'\0'������
	return 0;
}*/

//memset��������
/*int main() {
	char arr[] =  "hello world!" ;
	memset(arr, '#', 5);
	printf("%s", arr);
	return 0;
}*/

//����������(ʧ�ܵİ���)
//����д��swap�н�����x,y��������������x,y�ĵ�ַ��a,b�ĵ�ַ��ͬ��
//�ص���������a,b��ֵ����û�н�����voidΪ�޷���ֵ
//ʵ�δ�ֵ���βΣ��β�����һ����ַ�ģ��β���ʵ��ʵ�ε���ʱ������
//���βε��޸ĸı䲻��ʵ�Ρ�����ֻ�ܲ��ô���ַ���ܽ��
/*void swap(int x, int y) {//x,y���β�
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a = 39;
	int b = 53;
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);//a��b��ʵ��
	printf("a=%d,b=%d\n", a, b);
	return 0;
}*/

//����������(����ַ)
/*void swap(int* x, int* y) {//x,y���βΣ��β�ֻ���ں��������ú��
	//ʵ�����������ڴ��ַ�������Խ���ʽ�������βε�����������ɺ�
	//���Զ������ˣ�����β�ֻ�ڱ���������Ч��	
	int tmp = *x;
	*x = *y;
	*y = tmp;
}//����ַ���ٽ�����ַ��ָ������ֵ

int main() {
	int a = 39;
	int b = 53;
	printf("a=%d,b=%d\n", a, b);
	swap(&a, &b);//&a��&b��ʵ��,ʵ�ο����ǳ��������������ʽ������
	//�ȣ��ڴ��ݸ��β�ʱ������ʵ��Ҫ�и�����ֵ��
	printf("a=%d,b=%d\n", a, b);
	return 0;
}//��ֵ����:ֻ�ǰ�ʵ�ε�ֵ���ݸ��βκ������в�ͬ���ڴ�ռ䣬�β�
//�޷��ı�ʵ�Ρ�
//��ַ����:��ʵ�εĵ�ַ���ݸ��βκ��ú����������õĺ������ͺ���
//�ⲿ�ı���������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ���������ı�����
*/

//��ϰ1���ж��Ƿ�������
/*int IsPrimeNumber(int num) {//��ϸ���num=2,3,4ʱ���������
	int i = 0;
	//for (int i = 2; i <= sqrt(num); i++) {//������2��i����Ȼ������
	for (i = 2; i <= sqrt(num); i++) {
	if (num%i == 0)
			break;//�������Ż�,return 0;
	}
	if (i > sqrt(num))
		return 1;//return��breakҪǿ��returnֱ�������˺���
	else
		return 0;
}

int main() {
	int a = 4;
	if (IsPrimeNumber(a))
		printf("%d������\n", a);
	else
		printf("%d��������\n", a);
	return 0;
}*/

//��ϰ2:�ж��Ƿ�������
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
		printf("%d�����ꡣ\n", year);
	else
		printf("%d�������ꡣ\n", year);
	return 0;
}*/

//��ϰ3��������������Ķ��ֲ���(��һ��ʧ�ܣ������ɹ�)
/*int binaryFind(int p[],int num,int sz) {//���ﲢû�д���һ������
	//���ݹ�ȥ������Ԫ�صĵ�ַ,p��������һ��ָ��,Ҳ��������д��
	//int binaryFind(int* p, int num, int sz) {
	int left = 0;
	int right = sz-1;//ע�⣬����Ҫ-1
	while (left <= right) {
		int mid = (left + right) / 2;
		if (p[mid] > num)
			right = mid-1;//-1��Ҫ
		else if (p[mid] < num)
			left = mid+1;//+1Ҳ��Ҫ
		else
			return mid;
	}
	//if (left > right)//������ʡ��
		return -1;
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int  a = 13;
	int index = binaryFind(arr, a,sz);
	if (index == -1)
		printf("û���ҵ������\n");
	else
		printf("�ҵ��ˣ��±�Ϊ%d\n", index);	
	return 0;
}*/

//��ϰ4��ÿ����һ�κ������ͻὫnumֵ����1
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

//��ϰ4(������)��ÿ����һ�κ������ͻὫnumֵ����1
/*void fun(int* p) {
	(*p)++;//ע�⣬����Ҫ��С���ţ���Ϊ++�������ȼ���
	//*p += 1;//Ҳ��������д
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

//������Ƕ�׵��ú���ʽ����
//��ʽ����:ָ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
/*int main() {
	printf("%d", printf("%d", printf("%d", 3458)));//345841
	return 0;
}*/

//��������ú����������������棬��ô��������ǰ��Ҫ����һ�£���:
// int add(int x,int y){};//ע�����Ҫ�ӷֺ�
//Ҳ���԰�x,yʡ�ԣ���int add(int,int){};
//ʵ�ʹ����У�������������ͷ�ļ��У��������������һ���ļ���
//#include "add.h"�����ÿ�ͷ�ļ�����<>�������Լ���ͷ�ļ�����"".

//ͷ�ļ���ʹ�ã�����������
/*#include"add.h"
int main() {
	int a = 30;
	int b = 34;
	int sum = add(a, b);
	printf("sum = %d", sum);
	return 0;
}*/

//�ݹ�:���ִ�ӡ���������
/*void xx(int num) {
	if (num >9)//û��if���ݹ鲻��ͣ����������ѭ����û����ֹ������
		xx(num/10);	//xx(num)���ݹ�Ҳ����ͣ����������û�б仯
	printf("%d\n", num%10 );//���ǰ������else������ֱ�Ӵ�ӡnum
}//�ݹ���ã��ڷ���ǰ��ÿ�����õ�printf��䶼���ţ��������ݹ�ת�۵�
//ʱ�����ӡת�۵㴦��printf,Ҳ�������λ��Ȼ��ݹ鷵�أ��ᰴ�෴
//��˳���ӡ�������printf��䣬���θ�λ���ٴθ�λ���ȵȡ�
//�ݹ��������
//1.�ݹ����������������������������ʱ���ݹ鲻�ڽ��У�
//2.ÿ��ݹ���ú�ҪԽ��Խ�ӽ��������������

int main() {
	printf("������һ��������\n");
	unsigned int num = 0;
	scanf("%d", &num);

	xx(num);
	return 0;
}*/

//�ݹ飺�����ַ����ĳ���
/*int my_strlen(char* arr) {
	if (*arr != '\0') 
		return 1 + my_strlen(++arr);//ָ���һ����ַ����arr+1
	//ע�⣬����д��++arr�����Լӣ��ٰ��Լӵ�ֵ�����������ã���
	//���ǲ���д��arr++����������������ֵû�б䣿����
	else
		return 0;
}
int main() {
	char arr[] = "story";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}*/

//��n!
/*int mul(int n) {
	if (n == 1)//ǧ��ע�⣬��ֵ�������жϷ��ŵ�����
		return 1;
	else
		return mul(n - 1)*n;
}
int main() {
	int num =0;
	printf("������һ������:\n");
	scanf("%d", &num);
	int res = mul(num);
	printf("n�Ľ׳�Ϊ:%d\n", res);
	return 0;
}*/

//��쳲���������
/*int fbo(int n) {//�ع鷽��
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fbo(n - 1) + fbo(n - 2);
}//Ч�ʺܵͣ�����50ʱ����2��50�η�,�кܶ��ظ����㣬��������������
//��ò��е����ķ�ʽ
int fib(int n) {//��������һ
	int a1=1, a2=0;
	for (int i = 2; i <= n; i++) {
		if (i % 2 == 0)
			a2 += a1;
		else
			a1 += a2;
	}
	return a1 > a2 ? a1 : a2;
}
int fib2(int n) {//����������
	int a = 1, b = 1, c = 1;//c����ֵ1����n������2ʱ��ֱ�ӷ���1
	while (n > 2) {
		c = a + b;//��n����2ʱ��c�ĳ�ֵ������
		a = b;
		b = c;
		n--;//nΪѭ������������������ã������в����룬�Ӹ����ͼ���
		//�ʹӵ����߼�����Ч��һ��,����n--����������Ӧ����������ѭ��
	}
	return c;
}
int main() {
	printf("������һ��������:\n");
	int num = 0;
	scanf("%d", &num);
	int res = fib2(num);
	printf("��%d��쳲�������Ϊ%d\n", num, res);
	return 0;
}//�ݹ飺����ջ���������Ч�ʵ͡��ݹ���һ��˼ά����ĳЩ���������
*/

//����������
void hrt(int n,char c) {
	int col = 'b';
	if (n > 1)
		hrt(n - 1, col);
	printf("��%dŲ��%c����\n",n,c);
}
int main() {
	printf("������һ��������:\n");
	int num = 0;
	scanf("%d", &num);
	hrt(num,'c');
	return 0;
}
