#include <stdio.h>
#include <stdlib.h>



int main()
{
    int T[20][20];
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
            T[i][j] = rand() % 5;
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int x = 0;//счетчик для столбцов, в которых есть нули 
    for (int i = 0; i < n; i++)
    {
        int l = -1;//альтернативная переменная(аля j) 
        while (l < m-1 && n != 0 && i<n)//ход по столбцу до отрицательного элемента 
        {
            l++;
            if (T[i][l] == 0)//инструкции что делать с отрицательным элементом 
            {
                for (int k = i; k < n - 1; k++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        T[k][j] = T[k + 1][j];
                    }
                }
                n = n - 1;
                l = -1;//Если обнаружил нулевой элемент после замены стобца обнуляем ход по i, чтобы он снова всё проверил 
                x = x + 1;
            }

        }
    }

    if (x > 0) {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d\t", T[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Нет нулевых элементов");
    }

    return 0;

}
