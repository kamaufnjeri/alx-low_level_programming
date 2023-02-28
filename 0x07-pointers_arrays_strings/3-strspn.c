#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;

        while (s[a] &&  accept[a])
        {
                a++;
        }
        if (accept[a] == '\0')
                a++;
        return (a);
}
