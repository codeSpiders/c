#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>	

//break��continue������
/*int main() {
	int i = 1;
	while (i <= 10) {//���ж������ʱ�Ӵ�����
		if (5 == i)
			//break;//���������whileѭ��
			continue;//���������������䣬������һ��whileѭ��
		//����i++��continue�����棬i��5�����Լӣ�����iһֱ����
		//5��whileһֱ��ѭ����continue��������ѭ����
		//����ǣ�1 2 3 4 ��ѭ��
		printf("%d  ", i);
		i++;
	}		
	printf("�ص�����");
	return 0;
 }*/

//EOF
/*int main() {
	char ch =0;//���Ϳ���Ϊchar,Ҳ����Ϊint,
	while ((ch = getchar()) != EOF)//EOF��ʾend of file,ֵΪ-1
		//�����������롰EOF�����ߡ�-1�������ܽ�������Ϊ������
		//�ļ������Ϊ���ַ���ֻ�а���ctrl+z�����ܽ���
		putchar(ch);	//ctrl+z ��ʾ����EOF
	return 0;
}*/

//���������
/*int main() {
	char ch = 0;
	char password[20] = { 0 };
	printf("����������:>\n");	
	//scanf("%s\n", password);//ע�⣺���������ڼ�\n,������жϡ�
	scanf("%s", password);//������123456\n����ʱ���������룬�������뻺������ʣһ��\n;
	getchar();//����������/n���ߣ�������һ��getchar��ȡ�Ľ���\n
	//����������루123 abc��scanfֻ���ȡ�ո���߻س�ǰ�����ݣ�
	//getchar����ȡ�ո񣬺����getchar�ٶ�ȡabc(a)�����Ի���û��ʵ��Ŀ��
	printf("ȷ��������Y������������N:");
	ch = getchar();
	if (ch == 'Y'|| ch == 'y') {
		printf("����ȷ�ϣ�");
	}		
	else{
		printf("����ȡ����");
	}
	return 0;
}*/

//�����������취
/*int main() {
	int ch = 0;
	int password;
	printf("����������:>\n");
	while ((password = getchar()) != '\n') {//
		//;//����䣬�����к�����п���
	}
	printf("%c\n", password);//password�����\n�������ǿգ�
	//�ַ�ֻ����%c��ʽ�����򱨴�
	printf("ȷ��������Y������������N:");
	ch = getchar();
	if (ch == 'Y' || ch == 'y') {
		printf("����ȷ�ϣ�");
	}
	else {
		printf("����ȡ����");
	}
	return 0;
}*/

//��ӡ�ַ����������
/*int main() {
	char ch;//int ��char������Ч��һ��
	while ((ch = getchar()) != EOF) {
		if (ch<'0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}*/

//for ѭ�� ����һ
/*int main() {
	for (int i = 0; i < 11; i++) {
		if(i=5)//����ж������д�ɸ�ֵ��䣬������Ϊ�棬��Զѭ����ȥ��
		printf("hehe\n");
		printf("����\n");
	}		//���飺��Ҫ��ѭ�������޸�ѭ����������ֹѭ��ʧ�أ�
	return 0;
}*/

//for ѭ�� �����
/*int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//ע�⣬��Java
	//��һ����Java������ֵ��ʱ�򣬲���ָ�����鳤�ȵġ�
	int i = 0;
	for (; i < 10; i++)//ǰ���Ѿ���ʼ��ѭ�������ˣ��˴�����ʡ�ԣ�����Ƕ��ѭ��ʱ��ʡ�Ի������
		//ѭ�������������ǰ�պ󿪵ķ�ʽд���˴���10��ѭ��
		printf("%d ", arr[i]);//ѭ����ֻ��һ��ʱ����ʡ�Դ����š�
	return 0;
}*/

//for ѭ������һ
/*int main() {//�������õ�
	for (;;)//ѭ��������ʼ�����жϣ�����������ʡ�ԣ��жϲ��ֱ�ʡ�ԣ����Ϊ�档
	//���Ǹ�����ѭ��������ѭ����break��ȥ
		printf("hehe ");
	return 0;
}*/

//for Ƕ��ѭ��ʡ�Գ�ʼ������ʼ����for�����⣩����������
/*int main() {
	int i = 0;
	int j = 0;
	for (; i < 10; i++) {
		for (; j < 10; j++) {
			printf("hehe ");
		}
	}//10��hehe����i��ʼ�ڶ���ѭ��ʱ��j�Ѿ���10�ˣ�û���ٱ�
	//��ʼ��Ϊ0������ѭ��û�н��У���iȴһֱѭ����10�������治��ӡ��
	return 0;
}*/

//for ѭ�����ֶ�
/*int main() {
	int i ,j;
	
	for (i = 0, j = 0; i < 3 && j < 5; ++i, j++) {
		printf("hehe ");
	}
	return 0;
}*/

//for ѭ������
/*int main() {
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//ע��:�˴��ж����д����
		//��ֵ��䣬��ֵ0����Ϊ�٣���ֵ��0����Ϊ�档����ѭ����0��
		k++;
	return 0;
}*/

//do while ѭ��,����ѭ��һ��
/*int main() {
	int i = 0;
		do {
			if (i == 5)
				//break;//0,1,2,3,4
				continue;//0,1,2,3,4,��ѭ��
			//��Ϊi=5��continue�������䲻ִ�У�i�޷����ӣ�һֱ��if,continue,whileѭ��
			printf("%d ", i);
			i++;
		} while (i < 10);//ע�⣬�˴������жϺ�Ҫ�ӷֺ�
	return 0;
}*/

//��ϰ1������n�Ľ׳�
/*int main() {
	printf("������һ������\n");
	int n;
	scanf("%d", &n);
	int cum=1;
	for (int i = 1; i <= n; i++)
		cum *= i;
	printf("%d�Ľ׳���%d", n, cum);
	return 0;
}*/

//��ϰ2������ 1!+2!+3!+4!+  +10!
/*int main() {
	int i = 1;
	int sum = 0;
	for (; i <= 10; i++) {
		int cum = 1;
		for (int j = 1; j <= i; j++) {
			cum *= j;
		}
		sum += cum;
	}	
	printf("%d\n", sum);//4037913
	return 0;
}*/

//��ϰ2(�Ż�)������ 1!+2!+3!+4!+  +10!
/*int main() {
	int i = 1;
	int sum = 0;
	int cum = 1;
	for (; i <= 10; i++) {
		cum *= i;
		sum += cum;
	}
	printf("%d\n", sum);//4037913
	return 0;
}*/

//��ϰ3����һ�����������в��Ҿ�������n
/*int main() {
	int arr[14] = { 1,2,3,4,5,6,7,8,9,10 };//���鳤�ȿɲ�д��
	//дһ��Ҫ���ڻ���ڸ�ֵ����,������д��ֵΪ���鳤�ȣ�
	//���ȴ���{}���ֵ��Ϊ0.
	int findnum = 13;
	int flag = 0;//����С���ӣ��кô�,������񶨷�֧
	int i;
	printf("%d \n", sizeof(arr) / sizeof(arr[0]));
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		if (findnum == arr[i]) {
			printf("�Ѿ��ҵ�����%d", arr[i]);
			flag++;
			break;
		}
	//if (flag == 0)//ע�⣺�߼�==����д�ɸ�ֵ=��
	//Ҳ����д������һ��
	if(i == sizeof(arr) / sizeof(arr[0]))
		printf("û���ҵ������\n");
	return 0;
}*/

//��ϰ3(�Ż����۰����)����һ�����������в��Ҿ�������n
/*int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int findnum = 17;
	int left = 0;
	int right=sizeof(arr)/sizeof(arr[0])-1;//���±���Ԫ�ظ���-1
	int mid= (left + right) / 2;
	while (left <= right)//while������ѭ�����Ҫ�ӷֺţ����ﲻҪ��
	 {	
		mid = (left + right) / 2;
		if (findnum == arr[mid]) {
			printf("�Ѿ��ҵ�����������±���%d", mid);			
			break;
		}
		else if (findnum<arr[mid]){
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	} 
	if (left > right)//����right,left�ĺ���������left>right�ᷢ��
		printf("û���ҵ������\n");
	return 0;
}*/

//��ϰ4����ʾ����ַ��������ƶ������м���
/*int main() {
	char ch1,ch2;
	printf("������һ���ַ�\n");
	scanf("%c", &ch1);
	while ((ch2 = getchar()) != '\n') {
	}	
	printf("��������һ���ַ�\n");
	scanf("%c", &ch2);
	for (int i = 0; i <= 20; i++) {
		for (int j = 0; j <= i; j++) {
			printf(" ");
		}
		printf("%c", ch1);
		for (int k = 0; k <= 41-2*i-2; k++) {
			printf(" ");
		}
		printf("%c\n",ch2);
	}
	return 0;
}*/

//��ϰ5��ģ���û���¼��ʽ������ֻ�ܵ�¼����
/*int main() {
	char password[7];//��������6λ������Ҳֻ��6λ�Ļ��������Stack corrupted����
	char putword[7];//���һλ�������'\0'
	int i = 2;
	char ch;
	int flag = 0;
	printf("�������������룺\n");
	scanf("%s", password);
	//while ((ch=getchar()) != EOF) {  };
	do {
		printf("�������������룺\n");
		scanf("%s", putword);
		for (int j = 0; j < 6; j++) {
			if (putword[j] != password[j])
				break;
			else
				flag++;
		}
		if (flag == 6) {
			printf("�������������ȷ��");
			break;
		}
		i--;
	} while (i == 0);
	return 0;
}*/

//��ϰ6��
/*int main() {
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++) {//ע�⣬��ʼ����ִֻ��һ��
		if (b >= 20)
			break;
		if (b % 3 == 1) {//ע��2��if����if--else if������
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d", a); 
	return 0;
}*/

//ע�⣺flag=-flag,��������������㣬sum +=flag*n
//ע�⣺��һ���������ֵʱ���������һ����num������num��ÿ����
//ȥ�Ƚ�ʱ���п���num�������ģ����������һ����+num�е����ֵ
//����취�ǣ���Ҫ����num��ֵ����Ҫ��һ�����е�ĳ��ֵ������
//��%d*%d=%2d,i,j,i*j�����������У�%2dΪ��λʮ�����������Ҷ��룬
//%-2dΪ�������
//goto��価�����ã�������ȥ�����ܻ�������̣����ǣ�Ҳ�������Ӧ��
//goto���Ӧ�ó������������Ƕ�ף�Ҫ��������������goto���

//gotoӦ�ã��ػ�����
#include<string.h>
#include<stdlib.h>
int main() {
	char input[20] = { 0 };
	//cmd���룺shutdwon -s -t 60  
	system("shutdown -s -t 60");//60���ڹػ�
	start:
	printf("���Խ���1���Ӻ�رգ�����noȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "no") == 0)
		system("shutdown -a");//ȡ���ػ�
	else
		goto start;
	return 0;
}