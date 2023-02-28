/**
 * _strpbrk - Find first occurence of any accepted byte
 * @s: String to search
 * @accept: Bytes accepted
 *
 * Return: Return pointer to first occurence of byte
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	
	i = 0;
	
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0');
		{
			if (accept[j] == s[i])
			{
				s = s + a;
				return (s);
			}
			j++;
		}
		i++;
	}
	return (0);
}
