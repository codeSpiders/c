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

//��̣�����һ���ַ���
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
	printf("������һ���ַ���\n");
	char ch[300] = { 0 };
	scanf("%s", ch);
	reverse(ch);
	printf("%s", ch);
	return 0;
}*/

//��̣���a+aa+aaa+aaaa---֮��
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
	printf("����������a��n\n");
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	//printf("%d %d", a, n);
	printf("%d\n", sum1(a, n));
	return 0;
}*/

//��̣�ˮ�ɻ���
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

//��̣���ӡ����
/*int main() {
	int i = 0;
	int j = 0;
	int num = 0;
	printf("�����������ϲ�����\n");
	scanf("%d", &num);
	for (i = 0; i <num; i++) {
		for (j = 1; j < num-i; j ++) {
			printf(" ");//printf�����У�""�����Ϊ''����ᱨ��
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

//��̣��������е����������������ǰ�沿��
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

//��̣�����һ��if�е��жϲ�׼ȷ�������2�����������һ����׼ȷ
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

//��̣�������,��׼ȷ
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

//free�ͷ��ڴ�ռ��ָ�벻���Զ�ָ��NULL��
#include<stdlib.h>
/*int main() {
	int*p = (int*)malloc(10 * sizeof(int));
	free(p);//�鿴�ڴ棬*p�������Ѿ����ˣ���p�еĵ�ַ��û�б�;
	p = NULL;//���ԣ���Ҫ����佫p��Ϊ�գ�
	return 0;
}*/

//��̣�����k���ַ�
/*void flip(char*p,int n) {//�˴����д����ƻ��������ջ
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
	char arr[] = "abcde";//Ҫ�����鶨�壬�����ָ�붨�壬���ǳ����ַ����������޷��޸�
	int k = 3;
	flip2(arr,k); 
	printf("%s\n", arr);
	return 0;
}*/
//�������η�ת��ʵ������
/*void convert(char*p, int n) {
	assert(p);
	char*left = p;
	char*right = p + n-1;//ע��ϸ�ڣ�ע������Ҫ-1
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main() {//�������η�ת��ʵ������
	char arr[] = "abcde";
	int k = 3;
	int len = strlen(arr);
	convert(arr,k);//�������
	convert(arr + k, len - k);//�����ұ�
	convert(arr, len);//��������
	printf("%s\n", arr);
	return 0;
}*/
//abcde abcde��������������������
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

//�����Ͼ������ҵ��������������ض�����ʱ����ô�죿������:
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
			*x = i;//ע�⣬��Щ���Ҫ����returnǰ�棬����û�л���ִ��
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
	int res=isInit(arr, num, &x, &y);//����һЩ��ַ�����Խ������ú����е�һЩֵ������
	if (res == 1) {
		printf("yes,�±�Ϊ%d,%d\n", x, y);
	}
	else
		printf("not\n");
	return 0;
}