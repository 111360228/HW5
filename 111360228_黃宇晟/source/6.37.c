#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int *, int);
main()
{
	int v, min, n;
	int a[100];
	printf("請輸入陣列大小: ");
	scanf_s("%d", &n);
	printf("請輸入數字: \n");
	for (int i = 0; i < n; i++)
	{
		printf("第%d個數字: ", i+1);
		scanf_s("%d", &a[i]);
	}
	v = max(a, n);
	printf("最大值為%d\n", v);
}

int max(int *a, int j)
{
	int m;
	if (j == 1)
	{
		return a[0];
	}
	else
	{
		m = max(a, j-1);
	}
	if (a[j - 1] > m)
	{
		return a[j - 1];
	}
	else
	{
		return m;
	}
}