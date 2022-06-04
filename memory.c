#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//memcpy 只要处理内存不重叠的情况
/*void* my_memcpy(void* dest, const void* rsc,size_t num) {
	assert(dest&&rsc);
	void* tmp = dest;
	while (num--) {
		*(char*)dest = *(char*)rsc;
		++(char*)dest;//因为++是从右往左读的??
		++(char*)rsc;
	}
	return tmp;
}
int main() {
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	//memcpy(arr2, arr1,sizeof(arr1));
	my_memcpy(arr2, arr1,sizeof(arr1));
	return 0;
}*/

//memmove 处理内存重叠的情况。但是它也能处理内存不重叠的情况
/*void* my_memmove(void* dest, const void* rsc, size_t num) {
	assert(dest&&rsc);
	void* tmp = dest;
	if (dest <= rsc) {
		while (num--) {
			*(char*)dest = *(char*)rsc;
			++(char*)dest;
			++(char*)rsc;
		}
	}
	else {
		(char*)dest += num-1;
		(char*)rsc += num-1;
		while (num--) {
			*(char*)dest = *(char*)rsc;//以下3句可以改成一句：*((char*)dest+num) = *((char*)rsc+num)
			--(char*)dest;
			--(char*)rsc;
		}
	}	
	return tmp;
}
int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };		
	my_memmove(arr1 + 2, arr1 , 20);
	return 0;
}*/

//memcmp
/*int main() {
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,5,3,4, };
	int res = memcmp(arr1, arr2,16);
	printf("%d\n", res);
	return 0;
}*/

//memset内存设置
int main() {
	char ch[10] = { ' ' };
	memset(ch, 'a', 10);
	int arr[10] = { 0 };
	memset(arr, 1, 10);//注意:这个函数是按字节修改的，一个int为4个byte；
	return 0;
}

