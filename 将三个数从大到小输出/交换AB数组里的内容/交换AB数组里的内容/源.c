#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5], b[5], c[5], i;
	a[5] = {1, 2, 3, 4, 5 };
	b[5] = {6, 7, 8, 9, 0 };
	for (i = 0; i < 5; i++)
	{
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", b[i]);
	}
	system("pause");
	return 0;
}