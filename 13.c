
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int G[10][10];
	int n;
	

	printf("Введите n:");
	scanf("%d", &n);
	while ((n > 10) || (n <= 0))
	{
		printf("Введите n:");
		scanf("%d", &n);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			G[i][j] = rand() % 101 - 50;
			printf("%d\t", G[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (G[i][j] < 0)
			{
				sum = sum + G[i][j];
			}
		}
		G[i][n - i - 1] = sum;
		printf("\nСумма отрицательных элементов строки %d: %d", i+1, sum);
	}
	printf("\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", G[i][j]);
		}
		printf("\n");
	}

	return 0;
}
