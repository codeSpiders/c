#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	
#include<string.h>	
#include<assert.h>

//C����û���ַ������͡��ַ���ͨ�����ڳ����ַ����У������ַ������У������ַ��������޸ģ�

//strlen:����д��:
//1.��������
//2.�ݹ�(������ʱ����)
//3.ָ���ָ��
/*int my_strlen( const char*p) {//��������
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

	if (strlen("abc") - strlen("abcdef") > 0)//strlen�����޷������ͣ�3-6=-3��-3
		//����������ڴ��У��������޷������ͣ�����һ���ܴ����������0
		printf("hehe\n");//��ִ�д˾�
	else 
		printf("haha\n");
	return 0;
}*/

//strcpy:ʹ��ʱ��Դ�ַ���������'\0'��β������'\0'Ҳ�´����ȥ��Ŀ��ռ�����㹻��Ŀ��
//�ռ������޸ģ���Ŀ��ռ䲻���ǳ����ַ�����
/*void my_strcpy(char*dest,const char*src) {
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++) {
		;//�˷ֺſ�ʡ��
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
	assert(src);//����ǿ�ָ�룬��Ϊ0������Ϊ��
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
	char arr1[40] = "abcdefg\0xxxxxxxxxx";//Ŀ��ռ�����㹻��,������޸�
	char arr2[] = "heng";//Դ�ַ���������\0,��\0Ҳ׷�ӵ�Ŀ����
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}*/

//strcmp
/*int main() {
	char*p1 = "abcdefg";//ʵ���ǽ�a�ĵ�ַ������p1;
	char*p2 = "heng";//ʵ���ǽ�h�ĵ�ַ������p2;
	//if ("abcdefg" == "heng") {}//ʵ����a��h�ĵ�ַ�Ƚϣ��϶��������
	int ret = strcmp(p1, p2);//�Ƚϵ����ַ�ascii�롣vs�������£�ֻ����1,0��-1��
	printf("%d\n", ret);//linux��gcc�����������ص���ASCII��Ĳ�ֵ��
	char arr1[] = "bbcdefg";
	char arr2[] = "heng";
	return 0;
}*/

//strncpy(char*dest,char*src,int num)
//ֻ����num���ַ��������Զ�����\0�����src��û��num���ַ������ڿ���src�ַ��󣬲�\0�ռ�num���ַ�

//strncat(char*dest,char*src,int num)
//ֻ׷��num���ַ���׷�Ӻ��\0���������num���ַ�����׷����src����׷��1��\0���������Ƿ������num���ַ�
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

//NULLָ��ָ�룬NUL/Nullָ����\0
//strstr
/*char* my_strstr(const char*dest, const char* src) {
	assert(dest&&src);
	if (*src == 0)
		return (char*)dest;
	char* src0 = (char*)src;//const char*�ı�����ֵ��cha*�ı�����Ҫǿ������ת��һ��
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
		dest = tmp + 1;//ָ�������ƶ�һλ��Ҫ�ӣ����д�ɼ�������ѭ��
	} while (*dest != 0);	
	return NULL;
}
int main() {
	char* p1 =  "aabbbcc";//abbbc 
	char* p2 = "bbc";//bbc fcd
	//char* res=strstr(p1, p2);
	char* res=my_strstr(p1, p2);
	if (res == NULL)
		printf("������\n");
	else {
		printf("���ڣ���ַ��%p\n", res);//���ص�һ���ҵ��ĵ�ַ
		printf("���ڣ���ַ��%s\n", res);
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
	char*res1 = strtok(buff, p);//һ�㲻����ô����
	char*res2 = strtok(NULL, p);
	char*res3 = strtok(NULL, p);
	printf("%s %s %s\n", res1, res2, res3);

	//һ����ô����
	char* res = NULL;
	for (res = strtok(buff2, p); res != NULL; res = strtok(NULL, p)) {
		printf("%s\n", res);
	}//strtok�ڲ����ܻᴴ��һ����̬��������ס�ϴ����е�λ��	
	return 0;
}*/

//strerror
#include<errno.h>
/*int main() {
	//0--no error;
	//1--Operation nont permitted
	char* p1 = strerror(1);//1,�д�����
	//��c���ԵĿ⺯��ִ�й����з�������ʱ���ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
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


