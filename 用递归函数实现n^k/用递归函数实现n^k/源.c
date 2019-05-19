#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int power(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n*power(n, k - 1);
	}
}
int main()
{
	int n = 1;
	int k = 0;
	int tmp = 0;
	printf("请输入n和k（实现n^k）:");
	scanf("%d%d", &n,& k);
	tmp = power(n, k); 
	printf("%d\n", tmp);


	system("pause");
	return 0;
}