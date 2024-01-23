#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    printf("Введите строку: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *word = strtok(sentence, " "); // Разбиение строки на слова по пробелам
    char *min_word = word; // Предполагаем, что первое слово имеет минимальное количество символов
    int min_length = strlen(word); // Предполагаем, что первое слово имеет минимальную длину

    while (word != NULL) {
        int length = strlen(word);
        if (length < min_length) {
            min_word = word; // Обновляем слово с минимальной длиной
            min_length = length; // Обновляем минимальную длину
        }
        word = strtok(NULL, " "); // Получаем следующее слово
    }

    printf("Слово с минимальной длиной: %s\n", min_word);

    return 0;
}