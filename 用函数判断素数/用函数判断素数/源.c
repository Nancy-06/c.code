#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n)
{
	int t;
	for (t = 2; t <= sqrt(n); t++)
	{
		if (n%t == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n = 0;
	int tmp = 0;
	printf("����һ������\n");
	scanf("%d", &n);
	tmp=prime(n);
	if (tmp == 1)
	{
		printf("����Ϊ������\n");
	}
	else
	{
		printf("��������������\n");
	}
	system("pause");
	return 0;
}
