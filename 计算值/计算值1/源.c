#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	double a=0.0, b=0.0, c=0.0;
	for (n = 1; n <= 100; n++)
	{
		if (n % 2 == 0)
		{
			a+= (1.0 / n);
		}
		else
		{
			b+= 1.0 / n;
		}
	}
	c = b - a;
	printf("ÖµÎª£º%f\n",c);
	system("pause");
	return 0;
}