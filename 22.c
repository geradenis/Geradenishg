#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kola=0;
    int k=0;
    char str[150];
    char a = 'a';
    int MAXk;
    int MAXkola=-1000;
    printf("Введите строку: ");
    fgets(str, 149, stdin);
    printf("\n");
    printf("%s\n", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            k++;
            if (kola > MAXkola)
            {
                MAXkola = kola;
                MAXk = k;
            }
            kola = 0; 
        }
        if(str[i] == a)
	{
           kola++;
        }
    }
    k = 0;
    printf("\nНомер слова с максимальнм количеством а:%d\nСлово:", MAXk);
    k = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == ' ' || str[i] == '\n')
        {
            k++;
        }
        else {
            if (k >= MAXk - 1 && k < MAXk) {
                printf("%c", str[i]);
            }
        }
    }




    return 0;

}
