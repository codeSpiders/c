#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//debug�汾��release�汾�������н����һ��,release�汾���Ż���
//�����ڹ����϶���������
/*int main() {
	int i = 0;//���i�ĵ�ַ����arr[12]�ĵ�ַ�����Ի�һֱѭ����ȥ
	//i��arr֮����2��ջ��Ԫ���ᴢ��ʲô�أ�
	//vc6.0:i<=10,��ѭ��,i������arr;
	//gcc:i<=11,��ѭ����i��arr����һ��ջ��Ԫ;
	//vc2013:i<=12,��ѭ����i��arr��������ջ��Ԫ;
	//��ѭ����ʱ�򣬳���û�л��ᱨ������Ҫ�ڳ���ͣ���������������������
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	
	printf("%p\n", &i);
	printf("%p\n", arr);//debug�汾��release�汾����������ַ��Դ�С��䡣
	system("pause");
	for (i = 0; i <= 12; i++) {
		printf("hehe\n");
		arr[i] = 0;
	}	
	return 0;
}*/

//1.�﷨����һ�㲻�õ��ԣ���Ϊ�������ᷢ�֡�
/*int main() {
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++) {
		printf("hehe\n");
		arr[i] = 0;
	}
	//system("pause");
	return 0;
}*/

//����Ĵ��룺
//1.��������������
//2.bug���٣�
//3.Ч�ʸߣ�
//4.�ɶ��Ըߣ�
//5.��ά���Ըߣ�
//6.ע��������
//7.�ĵ���ȫ��

//������coding����
//1.ʹ��assert;
//2.����ʹ��const;
//3.�������õı�����
//4.��ӱ�Ҫ��ע�ͣ�
//5.�����������壻

int main() {
	const int num = 0;
	//num = 40;//const ���κ�num�����ַ�ʽ�����޸�num��
	int* p = &num;//int*p�ո������*��ߣ�Ҳ������*�ұߣ�Ҳ����û�пո�
	*p = 30;//ָ��p�ܸ�num��ֵ
	printf("%d\n", num);
	const int* p1 = &num;//����ָ��ʱ����const���Ͳ��ܸ���
	//const ����*p1��*p1��num�����ܸġ�
	//*p1 = 50;//p1ָ�벻���޸�num��ֵ��
	int*const p2 = &num;
	//const ����p2,p2ֻ��ָ��num��p2����ָ�����ˣ���p2���ܸ���
	*p2 = 40;//���ǣ���ͨ��p2�޸�*p2��num��.
	int n = 0;
	//p2 = &n;
	const int*const p3 = &num;//����������const
	//*p3 = 80;
	//p3 = &n;
	return 0;
}