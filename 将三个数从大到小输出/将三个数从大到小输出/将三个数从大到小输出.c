#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	int i;
	printf("请输入3个整数\n");
	scanf_s("%d%d%d", &a, &b,& c);
	if (a < b)
	{
		i = a;
		a = b;
		b = i;
	}
	if (a<c)
	{
		i = a;
		a = c;
		c = i;
	}
	if (b<c)
	{
		i = b;
		b = c;
		c= i;
	}
	printf("% 2d % 2d % 2d\n", a, b, c);
	system("pause");
	return 0;
}