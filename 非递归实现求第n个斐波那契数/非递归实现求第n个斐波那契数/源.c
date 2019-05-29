#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
}
int main()
{
	int n;
	int tmp = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	tmp = fib(n);
	printf("%d\n", tmp);
	system("pause");
	return 0;
}