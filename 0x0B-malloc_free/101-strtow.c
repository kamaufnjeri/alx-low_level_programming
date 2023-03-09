#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str)
{
        int len = 0, index = 0;

        while (str[index] != ' ' && *(str + index))
        {
                len++;
                index++;
        }
        printf("%d\n", index);
        return (len);
}
int count_words(char *str)
{
        int index, len = 0, word = 0;

        for (index = 0; str[index] != '\0'; index++)
                len++;
        for (index = 0; index < len; index++)
        {
                if(*(str + index) != ' ')
                {
                        word++;
                        index += word_len(str + index);
                }
        }
        return (word);
}
char **strtow(char *str)
{
        char **string;
        int word, letters, index = 0, w, l;

        if (str == NULL || str[0] == '\0')
                return (NULL);
        word = count_words(str);
        if (word == 0)
                return (NULL);
        string = malloc(sizeof(char *) * (word + 1));
        if (string == NULL)
                return (NULL);
        for (w = 0; w < word; w++)
        {
                while (str[index] == ' ')
                        index++;
                letters = word_len(str + index);
                string[w] = malloc(sizeof(char) * (letters + 1));
                if (string[w] == NULL)
		{
                        for (; w >= 0; w--)
                                free(string[w]);
                        free(string);
                        return (NULL);
                }
                for (l = 0; l < letters; letters++)
                {
                        string[w][l] = str[index++];
                }
                string[w][l] = '\0';
        }
        string[w] = NULL;
        return (string);
}

