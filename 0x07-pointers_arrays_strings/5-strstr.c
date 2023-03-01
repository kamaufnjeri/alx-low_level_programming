#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *string, *search;

	if (*needle == 0)
		return (haystack);

	while (*haystack != '\0')
	{
		string = haystack;
		search = needle;
		
		while (*search == *haystack || (*haystack != '\0' && *search != '\0'))
		{
			haystack++;
			search++;
		}
		if (*search == 0)
			return (string);
		haystack = string + 1;
		return ('\0');
}
