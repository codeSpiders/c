#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//�ַ�ָ��
/*int main() {
	int arr[10] = { 0 };
	char* p = "abdcdefghi";//abdcdefghi�ǳ����ַ���.��׼ȷ��д��:const char*p
	printf("%c\n", *p);//a,
	printf("%c\n", p);//?,
	printf("%s\n", p);//��ӡ�ַ����������p�ĳ�*p��������
	//*p = 'w';//����p��ָ���ַ����ĵ�һ���ַ�����ȴ���������޸ģ��ᱨ��
	//linux�лᱨ��segmentation fault
	//��Ϊabdcdefghi��һ�������ַ�����
	printf("%c\n", *p);
	printf("%s\n", p);
	return 0;
}*/

/*int main() {
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";//�������飬�洢�������ռ�
	char*p1 = "abcdef";
	char*p2 = "abcdef";//ͬһ�������ַ�����ֻ�洢һ�ݣ�p1��p2ָ��ͬһ��ַ
	//�����ַ�����һģһ�������ܱ��޸ģ�����ֻ��һ��
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

//ָ�����飬ʵ����������
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

//����ָ�룬ʵ������ָ��
/*int main() {
	int* p = NULL;//����ָ�룻
	char* pc = NULL;//�ַ�ָ�룻
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//arr,��Ԫ�ص�ַ
	//arr[0],��Ԫ�ص�ַ
	//&arr�������ַ
	int(*pa)[10] = &arr;//����ָ��ĸ�ֵ,int(*)[10]������ָ�������
	return 0;//int*[10]��ָ�����������
}*/

/*int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*pa)[10] = &arr;//(*pa)������ű����
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
}*///����ָ����һά������ʹ�ò����㣬������������ָ����򵥡��׶�һЩ��

//����ָ�������ڶ�ά�������ϣ�
/*void print1(int arr[3][5],int row, int col) {//�������������ʽ
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int*p, int row, int col) {//��Ԫ���ǵ�һ�е�һ�е�Ԫ�أ�
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d ", p[i*col+j]);
		}
		printf("\n");
	}
}
void print3(int(*p)[5], int row, int col) {//��Ԫ���ǵ�һ�е�һά����
	int i = 0, j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			//printf("%d ", p[i][j]);
			//printf("%d ", *(*(p + i)+j));//Ҳ��������д
			//printf("%d ", (*(p + i))[j]);//Ҳ��������д
			printf("%d ", p[i][j]);//Ҳ��������д
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

//int(*parr[10])[5]---��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ�ض���һ������ָ��
//������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int��

//һά���鴫�Σ����溯�������Ƿ���У�
/*void test(int arr[]){}//���С�[]�����ֿ�д���ɲ�д����д��������鲻ͬ��ֵ
void test(int arr[10]){}//���С�
void test(int* arr){}//���С�ָ�봫�Σ�������Ԫ�ص�ַ
void test2(int* arr[20]) {}//���С�20��ʡ�ԡ�
void test2(int** arr) {}//���С�����ָ�봫�Σ������Ϊ��int* *arr��?						
int main() {
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}*/

//��ά���鴫�Σ����溯�������Ƿ���У�
/* test1(int  arr[3][5]) {}//����
void test2(int  arr[][5]) {}//����
//void test3(int  arr[3][]) {}//������
//void test4(int  arr[][]) {}//������

void test5(int* arr){}//�����С����ǣ�����ͨ��i*col+j�����㣿
void test(int* arr[5]){}//�����С�����ָ�룬��ָ������
void test(int(*arr)[5]){}//���С�
void test(int **arr){}//�����С�����ĵ�ַ���ܷŵ�����ָ�������ָ����
//���һ��ָ��ĵ�ַ��
int main() {
	int arr[3][5] = { 0 };//��ά���飬arr��ʾ������Ԫ�ص�ַ��������Ԫ���ǵ�һ��һά����
	test(arr);
	return 0;
}*/

//һ��ָ�봫�Σ����溯�������Ƿ���У�
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

//����ָ�봫��
/*void test(int**p){}	
int main() {
	int*p1;
	test(&p1);//�ɴ�һ��ָ��ĵ�ַ
	int**p11 = &p1;
	test(p11);//�ɴ�����ָ��
	int* arr[] = {NULL};
	test(arr);//�ɴ�ָ��������׵�ַ
				//�����ܴ�����ָ�룬��ֻ�Ǹ�һ��ָ��
	return 0;
}*/

//����ָ��
/*int add(int x, int y) {
	return x + y;
}
int main() {
	int a = 10;
	int b = 20;
	printf("%d\n", add(a, b));
	printf("%p\n", &add);
	printf("%p\n", add);//�����������,�����в�ͬ��&add��add���Ǻ����ĵ�ַ
	int(*p)(int, int) = add;//����ָ��p��ֵ
	printf("%d\n", (*p)(a,b));
	return 0;
}*/

//���룺
// (*(void(*)())0)();//һ�κ�������,���õ�ַΪ0λ�õĺ���
// void(*signal(int,void(*)(int)))(int);//����������������Ϊsignal,
//����2��������(int,void(*)(int)),���ķ���ֵΪvoid(*    )(int)���ɼ�д���£�
//typedef void(*pfun)(int);//pfun��������void(*)(int)
//pfun signal (int,pfun);

//����ָ��
/*int add(int x, int y) {
	return x + y;
}
int main() {
	int a = 10;
	int b = 20;	
	int(*p)(int, int) = add;//����ָ��p��ֵ
	printf("%d\n",  p(a, b));//�൱��add(a,b)��add����һ����ַ
	printf("%d\n", (*p)(a,b));
	printf("%d\n", (**p)(a,b));//����1��*��û���ã�add�����Կɵ���
	printf("%d\n", (***p)(a,b));
	printf("%d\n",  p(2, 3));
	printf("%d\n", (*p)(2,3));//(*p)��������������*�����ȼ���()��
	printf("%d\n", (**p)(2,3));
	printf("%d\n", (***p)(2,3));
	return 0;
}*/

//����ָ������
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
		printf("%d\n", p[i](2, 3));//pǰ��*�ᱨ��
	return 0;
}*/

//char* (*p)(char*ps1,const char*ps2)
//char* (*p[4])(char*ps1,const char*ps2)

//����ָ�������Ӧ��
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
	printf("��ѡ��:\n");
}
int main() {
	int input = 0;
	do {
		menu();
		scanf("%d", &input);
		if (input <= 5 && input >= 1) {
			printf("����������������\n");
			int x = 0, y = 0;
			scanf("%d%d", &x, &y);
			int(*parr[6])(int, int) = { NULL,add,sub,mul,div,xor };
			printf("%d\n", parr[input](x, y));
		}
		else if (input == 0) {
			printf("�˳�\n");
		}
		else {
			printf("�������\n");
		}		
	} while (input);
	return 0;
}*/

//�ص�����:����һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ
//�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵����
//�ص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼���������
//��ʱ�������һ�����ã����ڶԸ��¼�������������Ӧ��
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
	printf("��ѡ��:\n");
}
void malc(int(*p)(int, int)) {
	printf("����������������\n");
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
			printf("�˳�\n");
			break;
		default:
			printf("�������\n");
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
	printf("��ѡ��:\n");
}
int malc(int(*p)(int, int)) {
	printf("����������������\n");
	int x = 0, y = 0;
	scanf("%d%d", &x, &y);
	 p(x, y);//�˴����Բ���return;��Ҳ���ԡ���p(x,y)����return�����Գ���2�㺯����
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
			printf("�˳�\n");
			break;
		default:
			printf("�������\n");
		}
	} while (input);
	
	return 0;
}*/

//ָ����ָ�������ָ��
/*int add(int x, int y) {
	return x + y;
}
int main() {
	int arr[10] = { 0 };
	int (*pa)[10] = &arr;//ȡ������ĵ�ַ
	int(*parr[4])(int, int) = { add };//����ָ������
	int(*(*pparr)[4])(int, int) = &parr;//pparr��ָ����ָ�������ָ��
	return  0;
}*/

/*int main() {
	int arr[] = { 1,2,3,4 };
	printf("%d\n", sizeof(arr));//16������������Ĵ�С
	printf("%d\n", sizeof(arr+0));//4����Ԫ�ص�ַ
	printf("%d\n", sizeof(*arr));//4����Ԫ�ص�ַ�����ã������ʾ��һ��Ԫ�ص����ʹ�С
	printf("%d\n", sizeof(arr+1));//4���ڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(arr[1]));//4���ڶ���Ԫ��
	printf("%d\n", sizeof(&arr));//4��ȡ����������ĵ�ַ������ĵ�ַ���ǵ�ַ
	printf("%d\n", sizeof(*&arr));//16��������Ĵ�С��*&�����໥������
	printf("%d\n", sizeof(&arr+1));//4,���������ַ����һ����ַ
	printf("%d\n", sizeof(&arr[0]));//4����һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&arr[0]+1));//4���ڶ���Ԫ�صĵ�ַ
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

	printf("%d\n", strlen(arr));//�����
	printf("%d\n", strlen(arr + 0));//�����
	//printf("%d\n", strlen(*arr));//����*arr�����ǡ�a'(97)��strlen��Ҫ��
	//�ǵ�ַ�������strlen�ʹӵ�ַ97��ʼ���ַ��ˡ����ǷǷ������ڴ��ˡ�
	//printf("%d\n", strlen(arr[1]));//���� 
	printf("%d\n", strlen(&arr));//�����	
	printf("%d\n", strlen(&arr + 1));//�����-6	
	printf("%d\n", strlen(&arr[0] + 1));//�����-1
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
	//printf("%d\n", strlen(*arr));//����	
	printf("%d\n", strlen(&arr));//6	
	printf("%d\n", strlen(&arr + 1));//���ֵ������������ĩβ��'\0',
	printf("%d\n", strlen(&arr[0] + 1));//5
	return 0;
}*/

int main() {
	int arr[3][4] = { 0 };
	printf("%d\n", sizeof(arr));//48
	printf("%d\n", sizeof(arr[0][0]));//4
	printf("%d\n", sizeof(arr[0]));//16���˴�arr[0]��ʾ��һ������ĵ�ַ��
	printf("%d\n", sizeof(arr[0]+1));//16/4���˴�arr[0]�ǵ�һ�е�����������������ʱ��ʾ
	//��Ԫ�صĵ�ַ��arr[0]+1��ʾ�ڶ���Ԫ�صĵ�ַ����ַ��С��4/8.
	//arr[0]û�е�������sizeof���棬Ҳû�ж���ȡ��ַ���������ԣ������Ǳ�ʾ��һ������ĵ�ַ
	printf("%d\n", sizeof(*(arr[0]+1)));//4
	printf("%d\n", sizeof(arr+1));//16/4,arrû�е�������sizeof���棬Ҳû�ж���ȡ��ַ
	//���������������Ǳ�ʾ��������ĵ�ַ�����Ǳ�ʾ��ά����ĵ�һ��Ԫ�ص�ַ������һ�е�
	//��ַ������arr+1�ǵڶ��еĵ�ַ��������4/8��
	printf("%d\n", sizeof(*(arr + 1)));//4/16, *(arr+1)�൱�ڵڶ��е�������
	printf("%d\n", sizeof(&arr[0] + 1));//16/4,�ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&arr[0] + 1)));//4/16
	printf("%d\n", sizeof(*arr));//4/16,arr��ʾ��Ԫ�أ���һ�У���ַ��*arr��ʾ��һ��
	printf("%d\n", sizeof(arr[3]));//-/16,sizeof��û�з����ڴ��ַ��ֻ�Ǹ�������������
	//��С�����ԣ��˴�arr[3]==arr[0]����Ϊ���Ǵ�С����ͬ�ġ�sizeof��û�з���arr[3]���ڴ�
	return 0;
}