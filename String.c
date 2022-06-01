#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
#include<string.h>	
#include<assert.h>

//C语言没有字符串类型。字符串通常放在常量字符串中，或者字符数组中；常量字符串不能修改；

//strlen:三种写法:
//1.计数器法
//2.递归(不用临时变量)
//3.指针减指针
/*int my_strlen( const char*p) {//计数器法
	assert(p!=NULL);
	int count = 0;
	while (*p != 0) {
		p++;
		count++;
	}
	return count;
}
int main() {
	char arr[] = "abdcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);

	if (strlen("abc") - strlen("abcdef") > 0)//strlen返回无符号整型，3-6=-3，-3
		//按补码存在内存中，被当成无符号整型，这是一个很大的数，大于0
		printf("hehe\n");//会执行此句
	else 
		printf("haha\n");
	return 0;
}*/

//strcpy:使用时，源字符串必须有'\0'结尾，并且'\0'也会拷贝过去。目标空间必须足够大，目标
//空间必须可修改，即目标空间不能是常量字符串。
/*void my_strcpy(char*dest,const char*src) {
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++) {
		;//此分号可省略
	}
}
int main() {
	char arr1[] = "abcdefg";
	char arr2[] = "heng";
	//strcpy(arr1, arr2);
	my_strcpy(arr1, arr2);
	//arr1 = arr2;//err,
	printf("%s\n", arr1);
	return 0;
}*/

//strcat:
/*char* my_strcat(char*dest,const char*src) {
	assert(dest != NULL);
	assert(src);//如果是空指针，则为0，条件为假
	char*p = dest;
	while (*dest) {
		dest++;
	}
	while (*dest++ = *src++) {
		;
	}
	return p;
}
int main() {
	char arr1[40] = "abcdefg\0xxxxxxxxxx";//目标空间必须足够大,必须可修改
	char arr2[] = "heng";//源字符串必须有\0,且\0也追加到目标上
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}*/

//strcmp
/*int main() {
	char*p1 = "abcdefg";//实际是将a的地址赋给了p1;
	char*p2 = "heng";//实际是将h的地址赋给了p2;
	//if ("abcdefg" == "heng") {}//实际是a和h的地址比较，肯定不会相等
	int ret = strcmp(p1, p2);//比较的是字符ascii码。vs编译器下，只返回1,0，-1。
	printf("%d\n", ret);//linux下gcc编译器，返回的是ASCII码的差值；
	char arr1[] = "bbcdefg";
	char arr2[] = "heng";
	return 0;
}*/

//strncpy(char*dest,char*src,int num)
//只拷贝num个字符，不会自动增加\0；如果src中没有num个字符，则在拷完src字符后，补\0凑集num个字符

//strncat(char*dest,char*src,int num)
//只追加num个字符，追加后加\0；如果不够num个字符，则追加完src后，再追加1个\0，而不管是否凑齐了num个字符
/*int main() {
	char arr1[30] = "abcd\0xxxxxxxxxxxxxxxxxx";
	char arr2[] = "heng";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr2);	
	return 0;
}*/

//strncmp
/*int main(){
	const char*p1 = "abcdef";
	const char*p2 = "abcfar";
	int res1 = strcmp(p1, p2);
	int res2 = strncmp(p1, p2, 3);
	int res3 = strncmp(p1, p2, 4);
	printf("%d %d %d", res1, res2, res3);
	return 0;
	}*/

//NULL指空指针，NUL/Null指的是\0
//strstr
/*char* my_strstr(const char*dest, const char* src) {
	assert(dest&&src);
	if (*src == 0)
		return (char*)dest;
	char* src0 = (char*)src;//const char*的变量赋值给cha*的变量，要强制类型转换一下
	do {
		while (*dest != *src)
			dest++;
		char*tmp = (char*)dest;
		while (*dest == *src) {	
			dest++;
			src++;
			if (*src == 0)
				return tmp;
		}		
		src = src0;
		dest = tmp + 1;//指针往后移动一位，要加，如果写成减，会死循环
	} while (*dest != 0);	
	return NULL;
}
int main() {
	char* p1 =  "aabbbcc";//abbbc 
	char* p2 = "bbc";//bbc fcd
	//char* res=strstr(p1, p2);
	char* res=my_strstr(p1, p2);
	if (res == NULL)
		printf("不存在\n");
	else {
		printf("存在，地址是%p\n", res);//返回第一次找到的地址
		printf("存在，地址是%s\n", res);
	}	
	return 0;
}*/

//strtok
/*int main() {
	char arr[] = "amourousyou@163.com";
	char*p = ".@";
	char buff[60] = { 0 };
	char buff2[60] = { 0 };
	strcpy(buff, arr);
	strcpy(buff2, arr);
	char*res1 = strtok(buff, p);//一般不会这么调用
	char*res2 = strtok(NULL, p);
	char*res3 = strtok(NULL, p);
	printf("%s %s %s\n", res1, res2, res3);

	//一般这么调用
	char* res = NULL;
	for (res = strtok(buff2, p); res != NULL; res = strtok(NULL, p)) {
		printf("%s\n", res);
	}//strtok内部可能会创建一个静态变量，记住上次运行的位置	
	return 0;
}*/

//strerror
#include<errno.h>
/*int main() {
	//0--no error;
	//1--Operation nont permitted
	char* p1 = strerror(1);//1,叫错误码
	//当c语言的库函数执行过程中发生错误时，就会把对应的错误码，赋值到errno中
	//char* p2 = strerror(errno);
	printf("%s\n", p1);
	//printf("%s\n", p2);
	return 0;
}*/

/*int main() {
	FILE* p = fopen("test,txt", "r");
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
		printf("open file success!\n");
	return 0;
}*/


