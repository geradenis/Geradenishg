#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
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

	int x = 0;//переменная, которую мы будем использовать как счетчик строк, которые мы удалили
		for (int i = 0; i < n; i++)
		{
			while (A[i][0] % 2 == 0 && i<n)
			{
				x = x + 1;
				for (int k = i; k < n - 1; k++)
				{
					for (int j = 0; j < m; j++)
					{
						A[k][j] = A[k + 1][j];
					}
				}
				n = n - 1;
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
