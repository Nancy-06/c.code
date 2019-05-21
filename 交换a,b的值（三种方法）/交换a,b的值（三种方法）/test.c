#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
	
int main()
{
	int a =0;
	int b =0;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	//法1:创建临时变量
	int c = 0;
	c = a;
	a = b;
	b = c;
	//法2：利用a,b加减法
	a = a + b;
	b = a - b;
	a = a - b;
    //法3：利用位运算
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后的两个值为：");
	printf("%2d%2d\n", a, b);
	system("pause");
	return 0;
}
