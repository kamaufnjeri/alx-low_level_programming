#include <stdio.h>


int main(void)
{
	char *p, *pp;
	int i = 2;

	*p = 'a';
	printf("%c\n", *p);
	pp = &p;
	*pp = 'b';
	printf("%c\n", *p);
	return (0);
}
