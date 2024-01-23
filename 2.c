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

	int imax;
	int imin;
	for(int i = 0; i < n; i++)
	{
		int sum = 0;
		for(int j = 0; j < m; j++)
		{
			sum = sum + A[i][j];
		}
		printf("Сумма столбца %d: %d\n", i+1, sum);
	       if(max < sum)
	       {
	       max = sum;
	       imax = i;
	       }	
		if(min > sum)
		{
		min = sum;	
		imin = i;
		}	
	}
	printf("Строка содержащая максимальную сумму %d: %d\n", imax+1, max);
	printf("Строка содержащая минимальную сумму %d: %d\n", imin+1, min);

	for(int j = 0; j < m; j++)
	{
		buff = A[imax][j];
		A[imax][j] = A[imin][j];
		A[imin][j] = buff;
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
