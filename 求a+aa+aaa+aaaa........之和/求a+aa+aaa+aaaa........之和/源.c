#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i, n, tmp,sum;
	tmp = 0;
	sum = 0;
	printf ("输入一个0到9的数字：\n") ;
	scanf ("%d", &i) ;
	for (n = 1; n <= 5; n++)
	{
		tmp = tmp * 10 + i;
		sum += tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}