#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,b=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			b+=1;
		if (i / 10 == 9)
			b += 1;
	}
	printf("����9�ĸ�����%d", b);

	system("pause");
	return 0;
}