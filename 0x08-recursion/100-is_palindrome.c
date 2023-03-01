#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int strlen(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += strlen(s + 1);
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
int check_palindrome(char *s, int start, int end)
{
	char *temp;

	if (*s)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		return (check_palindrome(*s, start++, end--));
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
	int start = 0;
	int end = find_strlen(s) - 1;

	if (!(*s))
		return (1);
	return (check_palindrome(s, start, end));
}
