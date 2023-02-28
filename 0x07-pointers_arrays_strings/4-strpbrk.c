/**
 * _strpbrk - searches string for set of bytes
 *
 * @s: string to check
 * @accept: substring of chars
 *
 * Return: pointer to first occurance
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	
	i = 0;
	while (*s)
	{
		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0); /* didn't find an occurance */
}
