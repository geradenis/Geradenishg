#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[10][15];
	int n = 40;
	int m = 40;
	int min = 1000;
	int max = -1000;
	int buff;

	while((n > 10)||(n < 0))
	{
		printf("Введите n:");
		scanf("%d", &n);
	}	
	while((m > 15)||(m < 0))
	{
		printf("Введите m:");
		scanf("%d", &m);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			A[i][j] = rand()% 100 + 1;
			printf("%d\t", A[i][j]);
		}
	printf("\n");
	}

	int jmax;
	int jmin;
	for(int j = 0; j < m; j++)
	{
		int sum = 0;
		for(int i = 0; i < n; i++)
		{
			sum = sum + A[i][j];
		}
		printf("Сумма столбца %d: %d\n", j+1, sum);
	       if(max < sum)
	       {
	       max = sum;
	       jmax = j;
	       }	
		if(min > sum)
		{
		min = sum;
		jmin = j;
		}	
	}
	printf("Столбец содержащий максимальную сумму %d: %d\n", jmax+1, max);
	printf("Столбец содержащий минимальную сумму %d: %d\n", jmin+1, min);

	for(int i = 0; i < n; i++)
	{
		buff = A[i][jmax];
		A[i][jmax] = A[i][jmin];
		A[i][jmin] = buff;
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
