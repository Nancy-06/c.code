#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	int tmp = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	tmp=fib(n);
	printf("%d\n", tmp);
	system("pause");
	return 0;
}