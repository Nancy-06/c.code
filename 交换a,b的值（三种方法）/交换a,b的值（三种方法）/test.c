#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
	
int main()
{
	int a =0;
	int b =0;
	printf("��������������");
	scanf("%d%d", &a, &b);
	//��1:������ʱ����
	int c = 0;
	c = a;
	a = b;
	b = c;
	//��2������a,b�Ӽ���
	a = a + b;
	b = a - b;
	a = a - b;
    //��3������λ����
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("�����������ֵΪ��");
	printf("%2d%2d\n", a, b);
	system("pause");
	return 0;
}
