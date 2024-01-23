#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 0;
    int k = 0;
    char str[150];
    printf("Введите строку: ");
    fgets(str, 149, stdin);
    printf("\n");
    printf("%s\n", str);
    printf("Слова меньше 5 символов:\t");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
                if (length<5)
                {
                    k++;
                    for (int j = i - length; j < i; j++)
                    {
                        printf("%c", str[j]);
                    }
                    printf("\t");
                }
                length = 0;
        }
        else {
            length++;
        }
    }
    if (k != 0) 
    {
        printf("\nКоличество слов меньше 5 символов:%d", k);
    }
    else {
        printf("Нужных слов нет");
    }
    
    return 0;

}
