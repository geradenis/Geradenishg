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
		int col = 0;
		for (int j = 0; j < n; j++)
		{
			if (G[i][j] % 7 == 0)
			{
				col = col + 1;
			}
		}
		G[i][i] = col;
		printf("\nКоличество элементов кратных 7ми в %d строке: %d", i+1, col);
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
