#include "main.h"
#include <stdlib.h>
/**
* _calloc - prints calloc;
* @nmemb: input string.
* @size: input string.
* Return: Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
        char *temp;
        unsigned int index;

        if (nmemb == 0 || size == 0)
        {
                return (NULL);
        }
        temp = malloc(nmemb * size);
        if (temp == NULL)
                return (NULL);
        for (index = 0; index < nmemb; index++)
        {BOB
                temp[index] = 0;
        }
        return (temp);
}
