#include <stdio.h>

int main(void)
{
	int i, j, start;

	i = 0;
	while (i < 10)
	{
		start = i;
		
		printf("%d = i in i loop up\n", i);
		printf("%d = start in i loop up\n", start);
		j = 0;
		printf("%d = j in i loop up\n", j);
		while (j < 10)
		{
			i++;
			j++;
			printf("%d = i  in j loop\n", i);
        		printf("%d = start in j loop\n", start);
        		printf("%d = j in j loop\n", j);
		}
		i = start + 1;
		printf("%d = i in i loop down\n", i);
		printf("%d = start in i loop down\n", start);
		printf("%d =  in i loop downword value of j\n", j);
	}
	printf(" outside down of loop\n");
	printf("%d = i\n", i);
	printf("%d = start\n", start);
	printf("%d = j\n", j);
	return (0);
}
