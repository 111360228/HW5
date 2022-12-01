#include<stdlib.h>
#include<stdio.h>
#define SIZE 15
int binarySearch(const int b[], int searchKey, int low, int high);
void header(void);
void row(const int b[], int low, int mid, int high);
int main(void)
{
	int a[SIZE];
	int k, r;
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = 2 * i;
	}
	printf("Enter a number between 0 and 28: ");
	scanf_s("%d", &k);
	header();
	r = binarySearch(a, k, 0, SIZE - 1);
	if (r != -1)
	{
		printf("\n%d found in array element %d\n", k, r);
	}
	else
	{
		printf("\n%d not found\n", k);
	}
	system("pause");
	return 0;
}

int binarySearch(const int b[], int searchKey, int low, int high)
{
	int m;
	while (low <= high)
	{
		m = (low + high) / 2;
		row(b, low, m, high);

		if (searchKey == b[m])
		{
			return m;
		}
		else if (searchKey < b[m])
		{
			return binarySearch(b, searchKey, low, m - 1);
		}
		else
		{
			return binarySearch(b, searchKey, m + 1, high);
		}
	}
	return -1;
}

void header(void)
{
	unsigned int i;
	printf("\nSubscripts:\n\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%3u ", i);
	}
	printf("\n");

	for (i = 1; i <= 4 * SIZE; i++)
	{
		printf("-");
	}
	printf("\n");
}

void row(const int b[], int low, int mid, int high)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if ((i < low) || (i > high))
		{
			printf("    ");
		}
		else if (i == mid)
		{
			printf("%3d*", b[i]);
		}
		else
		{
			printf("%3d ", b[i]);
		}
	}
	printf("\n");
}