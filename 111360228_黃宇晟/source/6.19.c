#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status { CONTINUE, WON, LOST };
int rollDice(void);

int main(void)
{
	int sum[36] = { 0 };
	int die1,a;
	int die2;
	int workSum;

	srand(time(NULL));

	for (int i = 1; i <= 36000; i++)
	{
		die1 = 1 + (rand() % 6);
		die2 = 1 + (rand() % 6);
		workSum = die1 + die2;
		sum[workSum - 2]++;
	}
	for (int y = 2; y <= 12; y++)
	{
		printf("%d:%d\n",y,sum[y-2]);

	}

	system("pause");
	return 0;
}

