/**
 * _strpbrk - Find first occurence of any accepted byte
 * @s: String to search
 * @accept: Bytes accepted
 *
 * Return: Return pointer to first occurence of byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *f;

	while (*s != 0)
	{
		j = 0;
		while (*accept != 0)
		{
			if (*s == *accept)
			{
				f = &*s;
				return (f);
			}
			accept++;
		}
		s++;
	}
	return (0);
}
