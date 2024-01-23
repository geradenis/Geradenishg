#include <stdio.h>
#include <stdlib.h>


int main()
{
    int length = 0;
    int k = 0;
    int j;
    char str[150];
    char glas[] = "aeiouyAEIOUY";
    printf("Введите строку: ");
    fgets(str, 149, stdin);
    printf("\n");
    printf("%s\n", str);
    printf("Слова на одну букву:\t");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            for (int l = 0; l < 13; l++) {
                if ((str[i - 1] == glas[l] && str[i - length] == glas[l]))
                {
                    k++;
                    for (int j = i - length; j < i; j++)
                    {
                        printf("%c", str[j]);
                    }
                    printf("\t");
                }
            }
            length = 0;
        }
        else {
            length++;
        }
    }
    if (k != 0)
    {
        printf("\nКоличество слов на одну букву:%d", k);
    }
    else {
        printf("Нужных слов нет");
    }

    return 0;

}
