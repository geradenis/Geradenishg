#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length=0;
    int k=0;
    char str[150];
    int MAXk, MINk;
    int MAXlength=-1000, MINlength=1000;
    printf("Введите строку: ");
    fgets(str, 149, stdin);
    printf("\n");
    printf("%s\n", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            k++;
            if (length < MINlength) 
            {
                MINlength = length;
                MINk = k;
            }
            if (length > MAXlength)
            {
                MAXlength = length;
                MAXk = k;
            }
            length = 0; 
        }
        else {
            length++;
        }
    }
    k = 0;

    printf("Номер минимального по длине слова:%d\nСлово:", MINk);
    for (int i = 0; str[i] != '\0'; i++)
    {
        
        if (str[i] == ' ' || str[i] == '\n')
        {
            k++;
        }
        else {
            if (k >= MINk - 1 && k < MINk) {
                printf("%c", str[i]);
            }
        }
    }
    printf("\nНомер максимального по длине слова:%d\nСлово:", MAXk);
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
