#include <stdio.h>
#include <stdlib.h>


int main()
{
    int length = 0;
    int x = 0;
    char str[150];
    printf("Введите строку: ");
    fgets(str, 149, stdin);
    printf("\n");
    printf("%s\n", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            if (length < 5)
            {
                x++;
                if (str[i] == ' ') {
                    for (int j = i - length; str[j + length + 1] != '\0'; j++)
                    {
                        str[j] = str[j + length + 1];
                        if (str[j + length + 1] == '\0' || str[j + length + 1] == '\n') {
                            str[j] = '\n';
                            str[j + 1] = '\0';
                        }
                    }
                    i = i - length - 1;
                }
                if (str[i] == '\n') {
                    i = i - length;
                    str[i] = '\n';
                    str[i + 1] = '\0';
                }
            }
            length = 0;
        }
        else {
            length++;
        }
    }
    if (x != 0)
    {
        printf("%s\n", str);
    }
    else printf("Нет слов меньше 5");





    return 0;

}
