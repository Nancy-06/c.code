#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, i, t;
	printf("��������������\n");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		if (a%b == 0)
			i = b;
		else
			i = (a%b);
	}
	else
	{
		t = b;
		b = a;
		a = t;
		{
			if (a%b == 0)
				i = b;
			else
				i = (a%b);
		}
	}
	printf("���Լ��Ϊ:%d\n", i);
	return 0;
	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, i;
	printf("������������:");
	scanf("%d%d", &a, &b);
	if (a >= b) {
		i = a % b;
	}
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
		i = a % b;
	}
	while (i != 0)
	{
		a = b;
		b = i;
		i = a % b;
	}
	printf("���Լ��Ϊ��%d\n", b);
	system("pause");
	return 0;
}
