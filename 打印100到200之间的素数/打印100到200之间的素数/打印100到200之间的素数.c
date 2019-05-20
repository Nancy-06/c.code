#define _CRT_SECURE _NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n, i, flag = 0;
	double tmp;
	tmp = sqrt(n);
	scanf("%d", &n);
	for (i = 2; i <= tmp; i++)
	{
		if (n%i == 0)
		{
			printf("是和数");
				flag = 1;
				break;
		}
	}
	if (flag == 0)
	{
		printf("是素数");
	}
	system("pause");



	return 0;
}