/**
 * _strpbrk - Find first occurence of any accepted byte
 * @s: String to search
 * @accept: Bytes accepted
 *
 * Return: Return pointer to first occurence of byte
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j;
	char *f;

	while (*s != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (*s == accept[j])
			{
				f = &*s;
				return (f);
			}
			j++;
		}
		s++;
	}
	return (0);
}
