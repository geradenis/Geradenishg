#include <stdio.h>
#include <stdlib.h>

int main()
{
	int B[10][10];
	int n = 40;
	int m = 40;
	int maxotr = -1000;
	int maxpol = -1000;
	int buff;

	while((n > 10)||(n < 0))
	{
		printf("Введите n:");
		scanf("%d", &n);
	}	
	while((m > 10)||(m < 0))
	{
		printf("Введите m:");
		scanf("%d", &m);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			B[i][j] = rand()% 100 - 49;
			printf("%d\t", B[i][j]);
		}
	printf("\n");
	}

	int jmaxpol;
	int jmaxotr;
	for(int j = 0; j < m; j++)
	{
		int pol = 0;
		int otr = 0;
		for(int i = 0; i < n; i++)
		{
			if( B[i][j] >= 0)
			{
				pol++;	
			}
			else
			{
				otr++;
			}
		}

		if(pol > maxpol)
		{
			maxpol = pol;
			jmaxpol = j;
		}
	  	
		if(otr > maxotr)
		{
			maxotr = otr;
			jmaxotr = j;
		}	
	}
	if(maxpol != -1000 || maxotr != -1000)
	{
			printf("Столбец содержащий максимальное количество положительных элементов и их количество: №%d %d\n", jmaxpol+1, maxpol);
			printf("Столбец содержащий максимальное количество отрицательных элементов и их количество: №%d %d\n", jmaxotr+1, maxotr);
	

	for(int i = 0; i < n; i++)
	{
		buff = B[i][jmaxpol];
		B[i][jmaxpol] = B[i][jmaxotr];
		B[i][jmaxotr] = buff;
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
		printf("Ошибка нет положительных или отрицательных элементов");
	}
	return 0;
}
