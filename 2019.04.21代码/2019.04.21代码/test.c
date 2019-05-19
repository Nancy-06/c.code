#define _CRT_SECURE_NO_WARNINGS 1
//1..调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
//1.
//#include<stdio.h>
//#include<stdlib.h>
//void AdjustNum(int arr[ ], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	int tmp = 0;
//	while (i < j)
//	{
//		if (i < j && ((arr[i] & 1) == 1))
//		{
//			i++;
//		}
//		if (i < j && ((arr[j] & 1) == 0))
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//			i ++;
//			j  --;
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	int sz = 0;
//	int arr[ ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	AdjustNum(arr, sz);
//	for (n = 0; n < sz; n++)
//	{
//		printf("%2d", arr[n]);
//	}
//	system("pause");
//	return 0;
//}
//2.
//#include<stdio.h>
//#include<stdlib.h>
//int FindNum(int a [ ][3], int x, int y, int f)
//{
//	int i = 0;
//	int j = y - 1; 
//	while (j >= 0 && i < x)
//	{
//		if (a[i][j] < f)
//		{
//			i ++;
//		}
//		else if ( a[i][j] > f )
//		{
//			j --;
//		}
//		else if ( a[i][j] == f )
//		{
//			return 1;
//		}
//	}
//    return 0;   
//}
//int main()
//{
//	int a[3][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
//	if (FindNum(a, 3, 3, 6))
//	{
//		printf("存在这个数！\n");
//	}
//	else
//	{
//		printf("没找到这个数！\n");
//	}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int tmp1 = 0;
	int tmp2 = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2)
		{
			arr1[tmp1++] = arr[i];
		}
		else
		{
			arr2[tmp2++] = arr[i];
		}
	}
	for (i = 0; i <tmp1; i++)
	{
		arr[i] = arr1[i];
	}
	for (i = 0; i <tmp2; i++)
	{
		arr[tmp1+i] = arr2[i];
	}
	for (i = 0; i < 10; i++)
		{
              printf("%d", arr[i]);
		}
	
	system("pause");
	return 0;
}
