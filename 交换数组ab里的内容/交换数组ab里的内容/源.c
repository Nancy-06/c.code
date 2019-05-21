#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5], b[5], c[5], i;
	printf("输入数组a:"); 
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("输入数组b:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 5; i++)
	{
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
	for (i = 0; i < 5; i++)
	{
		printf("%2d", a[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%2d", b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}