#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k = 0;

        i  = 0;
        while (s[i] != '\0' && s[i] != ' ')
        {
                j = 0;
                while (accept[j] != '\0')
                {
                        if (accept[j] == s[i])
                        {
                                k++;
                        }
                        j++;
                }
                i++;
        }
        return (k);
}
