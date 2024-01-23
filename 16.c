#include <stdio.h>
#include <stdlib.h>
#define NUM 256
int main()
{
    int length = 0;
    int k = 0;
    char str[NUM];
    printf("Введите строку: ");
    fgets(str, NUM-1, stdin);
    printf("\n");
    printf("%s\n", str);
    printf("Слова на одну букву: ");
    for (int i = 0; str[i] != ' '; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            if (str[i-1]== str[i - length])
            {
                k++;
                for (int j = i - length;j<i;j++)
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
        printf("\nКоличество слов на одну букву:%d", k);
    }
    else {
        printf("Нужных слов нет");
    }
    
    return 0;

}
