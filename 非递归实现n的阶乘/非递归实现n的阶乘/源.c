#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int is_power(int n)
{
	int i = 1;
	int pow = 1;
	if (n ==0)
		return 1;
	else if (n>=1)
	{
		for (i = 1; i <= n; i++)
		{
			pow *= i;
		}
		return pow;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", is_power(n));
	system("pause");
	return 0;
}
