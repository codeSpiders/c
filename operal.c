#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�����������+ - * / %
/*int main() {
	int a = 7 / 2;
	int b = 7 / 2.0;
	double c = 7 / 2.0;
	int d = 7 % 3;
	//int d = 7.0 % 3;//%����������������������
	printf("%d %d %d %lf\n", a, b, c,d);//�����ʽ���ԣ��������0��0.000
	return 0;
}//1.����%�������������+ - * / ��������ȿ���������������Ҳ���������ڸ�������
//2. / �����������2�������������������������ֻҪ��������һ�������ͣ�����и��������
//3. % ���������������2�������������������������Ҳ�����͡�
*/

//��λ�������<<  >> ֻ������������
/*int main() {
	int a = 10;
	int b=a << 2;//����һ����������ȡ�����
	//���ƣ���߶������ұ߲�0
	int c = a >> 2;//�༭��һ�㶼����������λ��
	//���Ʒ��������ƺ��߼�����
	//�������ƣ���߲�����λ���ұ߶���
	//�߼����ƣ���߲�0���ұ߶���
	int d = 10;
	d = d << 2;//Ҳ������������λ���ٸ�ֵ���Լ���
	int e = -1;
	e = e >> 3;
	printf("%d %d %d %d %d\n", a,b,c,d,e);
	return 0;
	//������λ����������д�ɣ�a<<-1���ƶ�����λ�������׼δ���壬������������֪����ô��
}*/

//��λ�������<<  >>
/*int main() {
	int a = -1;
	int b = a >> 1;	
	printf("%d %d \n", a, b);
	short c = -30000;
	short d = c << 1;
	printf("%d %d \n", c, d);
	return 0;
}*/

//λ��������^ & |  ֻ������������
/*int main() {
	int a = 5;
	int b = 3;
	int c = a & b;
	int d = a | b;
	int e = a ^ b;
	printf("%d %d %d", c, d, e);
	return 0;
}*/

//��ϰ:��һ���������洢�ڵ����ж����Ƶĸ���
/*int main() {//���ʺϸ�����������
	int num = 0;
	printf("������һ��������\n");
	scanf("%d", &num);
	int count = 0;
	while (num ) {//�˴�����Ҳ������num>0�����Ƽ�����һ��
		if (num % 2 == 1)
			count++;
		num = num >> 1; 
	}
	printf("����������%dλ1\n",count);
	return 0;
}*/

//��ϰ:��һ���������洢�ڵ����ж����Ƶĸ���
/*int main() {//����
	int num = 0;
	printf("������һ��������\n");
	scanf("%d", &num);
	int count = 0;
	for (int i = 0; i < 32; i++) {//ע�⣺-1�ķ���λ�����λ����ʵҲһֱ�ƹ�����
		if (1 == ((num >> i) & 1))//����32λ�󣬷���λ��1�պ��Ƶ��˸�λ�����ܴ�ʱ
			count++;//ǰ�滹��31��1������ѭ�������ˣ���������㲹�ϵ�1��
	}
	printf("����������%dλ1\n", count);
	return 0;
}*/

//��ֵ��������=
//���ϸ�ֵ����+= -= *= /= %= <<= >>= ^= &= |= 
/*int main() {
	int a = 10;
	int x = 20;
	int y = 39;
	a = x = x + y;//������ֵ�����Ƽ����ɶ��Բ�ǿ��
	printf("%d %d %d\n", a, x, y);
	return 0;
}*/

//��Ŀ�������� ! ~ + - & * ++ -- sizeof (int)
/*int main() {
	int a = 10;
	int b = 0;
	printf("%d %d\n", !a,!b);
	return 0;
}*/

/*int main() {
	int a = 3;
	char ch = 'e';
	char* p = &ch;
	int arr[10] = { 0 };
	printf("%d ", sizeof(a));//a��ߵ����ſ�ʡ��
	printf("%d ", sizeof(int));//int��ߵ����Ų���ʡ��
	printf("%d ", sizeof(ch));
	printf("%d ", sizeof(char));
	printf("%d ", sizeof(p));
	printf("%d ", sizeof(char*));
	printf("%d ", sizeof(arr));
	printf("%d ", sizeof(int[10]));//int[10]������������͡�int��[10]�м���пո�
	return 0;
}*///ע�⣬���鴫�δ����ǵ�ַ����ַ�ĳ���һ����4����8

/*int main() {
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 4));//2��sizeof����ı��ʽ������������
	printf("%d\n", s);//0
	sizeof(s = a + 4);
	printf("%d\n", s);//0
	return 0;
}*/

/*int main() {
	int a = 0;
	printf("%d\n", ~a);
	int b = 11;
	b = b | (1 << 2);
	printf("%d\n", b);
	b = b & (~(1 << 2));
	printf("%d\n", b);
	return 0;
}*/

/*int main() {
	int a = 10;
	int b = 10;
	printf("%d\n", ++a);//11
	printf("%d\n", a);//11��˵��printf()��ı��ʽ����㣬��sizeof�Աȿ�
	printf("%d\n", b++);//10
	printf("%d\n", b);//11
	return 0;
}*/

/*int main() {
	int a = (int)3.14;//��ǿ��ת�����ᱨ���档ǿ��ת������д��:int(3.14);
	printf("%d\n", a);
	return 0;
}*/

//��ϵ��������
//ע�⣺=��==������

//�߼���������
/*int main() {
	int a = 3;
	int b = 5;
	int c = a && b;
	int d = a || b;
	printf("%d %d", c, d);
	return 0;
}*/

//��ϰ��
/*int main() {
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//�Ӳ������Ŷ���һ���ģ���·��ֵ��ǰ���Ѿ�Ϊ���ˣ�����Ͳ�����
	printf("%d %d %d %d %d\n", i, a, b, c, d);
	return 0;
}*/

/*int main() {//������Ա�,������Ҳû��������
	int i=1 , a = 0, b = 2, c = 3, d = 4;
	i = (a++) && (++b) && (d++);
	printf("%d %d %d %d %d\n", i, a, b, c, d);
	return 0;
}*/

/*int main() {//�����������Ա�,a��Ϊ��1
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = (a++) && (++b) && (d++);
	printf("%d %d %d %d %d\n", i, a, b, c, d);
	return 0;
}*/

/*int main() {//&&������||
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//��Ȼ��·��ֵ���㵽++b���Ϳ���ȷ�����ʽ������ˣ��Ͳ����ټ�����
	printf("%d %d %d %d %d\n", i, a, b, c, d);
	return 0;
}*/

//������������Ҳ����Ŀ������
/*int main() {
	int a = 3;
	int b = 4;
	int max = a > b ? a : b;
	printf("%d\n", max);
	return 0;
}*/

//���ű��ʽ�������ö��Ÿ���������ʽ�����ű��ʽ��������������ִ�У��������ʽ
//�Ľ�������һ�����ʽ�Ľ��
/*int main() {
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n", c);//13

	int d=1;
	if (a = b + 1, c = a / 2,  d > 0);

	while (a = b + 1, c = a / 2, a > 0) {
		;
	}
	return 0;
}*/
//��������subf((v1,v2),(v3,v4),v5,v6)��ʵ�εĸ�����4����(v1,v2)ʵ����v2,
//(v3,v4)ʵ����v4,���Բ���ʵ��Ϊ��v2,v4,v5,v6��,��4����

//�±����ò�������[]
/*int main() {
	int a[10];
	a[3] = 4;
	return 0;
}*/

//�������ò�������() ��������Ϊ�����Ͳ�����
//.��������->������
/*struct stu {//�����ṹ�����ͣ�������Ϊ��struct stu
	char name[20];
	int age;
	char id[20];
};

int main() {
	//ʹ��struct stu���ʹ�����һ��s1���󣬲���ʼ��
	struct stu s1 = { "liming", 20," 12584" };//����ʱΪ�ֺţ���ֵʱΪ����
	printf("%s\n", s1.name);
	struct stu* p = &s1;
	printf("%d\n", p->age);
	printf("%d\n", (*p).age);
	printf("%s\n", p->id);
	//s1.name = "wangshan";
	return 0;
}*/

//��ʽ����ת��
/*����������C���������㣬����������ȱʡ�������͵ľ��������еģ�
//Ϊ�˻��������ȣ����ʽ�е��ַ��Ͷ����Ͳ�������ʹ��֮ǰ��ת��Ϊ��ͨ���ͣ��������������
//���磺char a,b,c;a=b+c;b��c��ֵ������Ϊ��ͨ���ͺ󣬲ż��㣬������Ϊ��ͨ���ͣ�Ȼ��
//�ֱ��ضϣ�����char���͵ı���c��
//���ʽ���������㣬Ҫ��CPU��Ӧ�������ڽ��У�CPU������ALU�������ĳ���һ��Ϊint���ȣ�
//ͬʱҲ��ͨ�üĴ����ĳ��ȣ���ˣ���ʹ����char��ӣ���CPUִ��ʱ��ҲҪ��ת��ΪCPU��
//���Ͳ������ı�׼���ȡ�ͨ��CPU������ֱ��ʵ������8bitλ���ֽ�ֱ����ӣ�����Ȼ����
//ָ���п�����������ָ������ԣ����ʽ�и��ֳ���С��int������ֵ��������CPU����ǰ��
��������ת����int����unsigned int��*/
/*int main() {
	char a = 4;//����32����λ��4���ٽضϸ���a;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}*/

/*int main() {
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)//�٣���ΪaΪ0xb6000000
		printf("a\n");
	if (b == 0xb600)//�٣���ΪaΪ0xb6000000
		printf("b\n");
	if (c == 0xb6000000)//��
		printf("c\n");
	return 0;
}*/

/*int main() {
	char a = 1;
	printf("%u\n", sizeof(a));//1,
	printf("%u\n", sizeof(+a));//4,+�����㣬��������
	printf("%u\n", sizeof(!a));//1��ȡ����û������
	return 0;
}*/

//����ת��:Ҳ����ʽת����һ�֡�int<unsigned int<long<unsigned long<float<double<long double
//���ʽ���Ӻ󣬼���˳����ܻ��ж����������a*b+c*d+d*e�ȡ�д����ʱ�����ʽ����д��
//һЩ����������������������Ψһ�����·�����Ϳ�����һ��������Ĵ���
//c + --c  ,����Ԥ�⣬������
//i=10;i=i-- - --i*(i=-3)*i++ + ++i;��������ͬ�����Ҳ��ͬ
//i=1;(++i)+(++i)+(++i)����������ͬ�����Ҳ��ͬ