#define _CRT_SECURE_NO_WARNINGS 1
//1..��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
//		printf("�����������\n");
//	}
//	else
//	{
//		printf("û�ҵ��������\n");
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
