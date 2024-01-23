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

	int imaxpol;
	int imaxotr;
	for(int i = 0; i < n; i++)
	{
		int pol = 0;
		int otr = 0;
		for(int j = 0; j < m; j++)
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
			imaxpol = i;
		}
	  	
		if(otr > maxotr)
		{
			maxotr = otr;
			imaxotr = i;
		}	
	}
	if(maxpol != -1000 || maxotr != -1000)
	{
			printf("Строка содержащая максимальное количество положительных элементов и их количество: №%d %d\n", imaxpol+1, maxpol);
			printf("Строка содержащая максимальное количество отрицательных элементов и их количество: №%d %d\n", imaxotr+1, maxotr);
	

	for(int j = 0; j < m; j++)
	{
		buff = B[imaxpol][j];
		B[imaxpol][j] = B[imaxotr][j];
		B[imaxotr][j] = buff;
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
