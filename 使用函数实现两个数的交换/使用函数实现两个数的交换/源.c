#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int* a, int* b)
{
	int c=0;
	c = *a;
	*a =* b;
	*b = c;

}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	swap(&a,& b);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}