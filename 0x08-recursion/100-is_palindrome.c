#include "main.h"

int fstrlen(char *s);
int check_palindrome(char *s, int start, int end);
int is_palindrome(char *s);

/**
 * fstrlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int fstrlen(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += fstrlen(s + 1);
	}
	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len])
		return (1);
	if (s[index] == s[len - index - 1])
	{
		return (check_palindrome(s, len, index + 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = fstrlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}
