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
	printf("输入一个数：\n");
	scanf("%d", &n);
	tmp=prime(n);
	if (tmp == 1)
	{
		printf("此数为素数。\n");
	}
	else
	{
		printf("此数不是素数。\n");
	}
	system("pause");
	return 0;
}
