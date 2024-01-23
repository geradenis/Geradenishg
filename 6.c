#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[20][20];
	int n;
	int m;
	printf("Введите n:");
	scanf("%d", &n);
	while ((n > 20) || (n <= 0))
	{
		printf("Введите n:");
		scanf("%d", &n);
	}

	printf("Введите m:");
	scanf("%d", &m);
	while ((m > 20) || (m <= 0))
	{
		printf("Введите m:");
		scanf("%d", &m);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] = rand() % 100 + 1;
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int x = 0;//переменная, которую мы будем использовать как счетчик столбцов, которые мы удалили
		for (int j = 0; j < m; j++)
		{
			while (A[0][j] % 3 == 0 && j<m)
			{
				x = x + 1;
				for (int k = j; k < m - 1; k++)
				{
					for (int i = 0; i < n; i++)
					{
						A[i][k] = A[i][k+1];
					}
				}
				m = m - 1;
			}
		}

		if (x != 0) {
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					printf("%d\t", A[i][j]);
				}
				printf("\n");
			}
		}
		else printf("строк с первыми кратными 2ум элементами нет");
		return 0;

}
