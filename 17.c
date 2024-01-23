#include <stdio.h>
#include <stdlib.h>

int main()
{
	int E[10][10];
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
			E[i][j] = rand() % 101 - 50;
			printf("%d\t", E[i][j]);
		}
		printf("\n");
	}

	for (int j = 0; j < n; j++)
	{
		int col = 0;
		for (int i = 0; i < n; i++)
		{
			if (E[i][j] < 0)
			{
				col = col + 1;
			}
		}
		E[j][j] = col;
		printf("\nКоличество отриццательных элементов в %d столбце: %d", j+1, col);
		
	
	}
	printf("\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", E[i][j]);
		}
		printf("\n");
	}

	return 0;
}
