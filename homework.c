#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//1
/*int main(){
	unsigned long arr[] = { 6,7,8,9,10 };
	unsigned long* p;
	p = arr;
	*(p + 3) += 3;
	printf("%d %d", *p, *(p + 3));
	return 0;
	}*/

//编程：逆序一个字符串
/*void reverse(char* p) {
	assert(p);
	int len = strlen(p);
	char* left = p;
	char* right = p + len - 1;
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main() {
	printf("请输入一个字符串\n");
	char ch[300] = { 0 };
	scanf("%s", ch);
	reverse(ch);
	printf("%s", ch);
	return 0;
}*/

//编程：求a+aa+aaa+aaaa---之和
/*int sum1(int a, int n) {
	int sum = 0;
	int num = 0;
	for (int i = 0; i < n; i++) {
		num = num*10+a;
		sum += num;
	}
	return sum;
}
int main() {
	printf("请输入整数a及n\n");
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	//printf("%d %d", a, n);
	printf("%d\n", sum1(a, n));
	return 0;
}*/

//编程：水仙花数
/*int IsPPDI(int num) {
	int tmp = num;
	int a[10] = { 0 };
	int i = 0;
	while(tmp){
		*(a + i) = tmp % 10;
		tmp /= 10;
		i++;
	}
	int sum = 0;
	for (int j = 0; j < i; j++) {
		int mul = 1;
		for (int k = 0; k < i; k++) {
			mul *= *(a + j);
		}
		sum += mul;
	}
	if (sum == num)
		return 1;
	else
		return 0;
}
int main() {
	int i = 0;
	for (i = 0; i < 10000; i++) {
		if (IsPPDI(i))
			printf("%d ", i);
	}
	return 0;
}*/

//编程：打印菱形
/*int main() {
	int i = 0;
	int j = 0;
	int num = 0;
	printf("请输入菱形上部行数\n");
	scanf("%d", &num);
	for (i = 0; i <num; i++) {
		for (j = 1; j < num-i; j ++) {
			printf(" ");//printf参数中，""如果改为''，则会报错
		}
		for (j = 0; j < 2*i+1; j ++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <num- 1; i++) {
		for (j = 0; j <=  i; j++) {
			printf(" ");
		}
		for (j = 0; j <= (num-i-1)*2-2; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

//编程：将数组中的奇数调整到数组的前面部分
/*void exchange(int*p, int len) {
	int i = 0;
	int flag ;
	do {
		flag = 0;
		for (i = 0; i < len - 1; i++) {
			if (p[i] % 2)
				continue;
			else if (p[i] % 2 == 0 && p[i + 1] % 2 == 0)
				continue;
			else {
				int tmp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = tmp;
				flag++;
			}
		}
	} while (flag);	
}
void exchange2(int*p, int len) {
	int left = 0;
	int right = len - 1;
	while (left < right) {
		while (p[left] % 2) {
			left++;
		}
		while (p[right] % 2 == 0) {
			right--;
		}
		if (left < right) {
			int tmp = p[left];
			p[left] = p[right];
			p[right] = tmp;
			left++;
			right--;
		}		
	}
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	exchange2(arr,len);
	int i = 0;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	return 0;
}*/

//编程：方案一，if中的判断不准确，输出了2个结果，其中一个不准确
/*int main() {
	//char a[6] = { 'A','B','C','D','E' ,'\0'};
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 0; a < 5; a++) {
		for (b = 0; b < 5; b++) {
			for (c = 0; c < 5; c++) {
				for (d = 0; d < 5; d++) {
					for (e = 0; e < 5; e++) {
						if ((b == 1 || a == 2) && (b == 1 || e == 3) && (c == 0 ||
							d == 1) && (d == 2 || c ==4) && (a == 0 || e== 3)&&(a!=b)
							&& (a != c) && (a != d) && (a != e) && (b != c) && (b != d) && (b != e) && (c != d) && (c != e) && (d != e)) {
							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a,b,c,d,e);
							break;
						}
					}
				}
			}
		}
	}	
	return 0;		
}*/

//编程：方案二,更准确
/*int main() {
	//char a[6] = { 'A','B','C','D','E' ,'\0'};
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <=5; a++) {
		for (b = 1; b <= 5; b++) {
			for (c = 1; c <= 5; c++) {
				for (d = 1; d <= 5; d++) {
					for (e = 1; e <= 5; e++) {
						if ((b==2)+(a==3)==1 &&
							(b==2) + (e==4) == 1 &&
							(c==1) + (d==2) == 1 &&
							(d==3) + (c==5) == 1&&
							(a==1) + (e==4) == 1 &&(a*b*c*d*e==120)) {
							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}*/

//free释放内存空间后，指针不会自动指向NULL；
#include<stdlib.h>
/*int main() {
	int*p = (int*)malloc(10 * sizeof(int));
	free(p);//查看内存，*p的内容已经变了，但p中的地址仍没有变;
	p = NULL;//所以，需要此语句将p置为空；
	return 0;
}*/

//编程：左旋k个字符
/*void flip(char*p,int n) {//此代码有错误，破坏了数组的栈
	int len = strlen(p);	
	int i = 0;
	for (i = 0; i < n; i++) {
		p[len + i] = p[i];		
	}
	for (i = 0; i < len; i++) {
		p[i] = p[i + n];
	}
	p[len] = 0;
}
#include<assert.h>
void flip2(char*p, int n) {
	assert(p);
	int len = strlen(p);
	int i = 0;
	for (i = 0; i < n; i++) {
		char tmp = p[0];
		for (int j = 0; j < len-1; j++) {
			p[j] = p[j + 1];			
		}
		p[len - 1] = tmp;
	}
}
int main() {
	char arr[] = "abcde";//要用数组定义，如果用指针定义，则是常量字符串，后面无法修改
	int k = 3;
	flip2(arr,k); 
	printf("%s\n", arr);
	return 0;
}*/
//采用三次翻转，实现左旋
/*void convert(char*p, int n) {
	assert(p);
	char*left = p;
	char*right = p + n-1;//注意细节，注意这里要-1
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main() {//采用三次翻转，实现左旋
	char arr[] = "abcde";
	int k = 3;
	int len = strlen(arr);
	convert(arr,k);//逆序左边
	convert(arr + k, len - k);//逆序右边
	convert(arr, len);//逆序整体
	printf("%s\n", arr);
	return 0;
}*/
//abcde abcde包含了所以左旋的类型
/*int IsSubArr(char*p1, char*p2) {
	int len1 = strlen(p1);
	int len2 = strlen(p2);
	if (len1 != len2)
		return 0;
	int i = 0;
	for (i = 0; i < len1; i++) {
		*(p1 + i + len1) = *(p1 + i);
	}
	*(p1 + len1 * 2) = 0;
	for (i = 0; i < len1; i++) {
		if (*p2 == *(p1 + i)) {
			int j = 0;
			for (j = 0; j < len2; j++) {
				if (*(p2 + j) != *(p1 + i + j)) {
					break;
				}
				return 1;
			}
		}
	}
	return 0;
}
int main() {
	char arr[40] = "abcdef";
	char arr2[] = "cdefab";
	int res=IsSubArr(arr, arr2);
	printf("%s\n", arr);
	if (res == 1)
		printf("yes\n");
	else
		printf("not\n");
	return 0;
}*/

//在杨氏矩阵中找到给定的数。返回多个结果时该怎么办？看例子:
int isInit(int arr[4][5],int num,int*x,int*y) {
	int i = 0;
	int j = *y - 1;
	while (i <= *x - 1 && j >= 0) {
		if (arr[i][j] < num) {
			i++;
		}
		else if (arr[i][j] > num) {
			j--;
		}
		else {
			*x = i;//注意，这些语句要放在return前面，否则没有机会执行
			*y = j;
			return 1;			
		}
	}
	return 0;
}
int main() {
	int arr[4][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int num = 23;
	int x = 4;
	int y = 5;
	int res=isInit(arr, num, &x, &y);//传入一些地址，可以将被调用函数中的一些值返回来
	if (res == 1) {
		printf("yes,下标为%d,%d\n", x, y);
	}
	else
		printf("not\n");
	return 0;
}