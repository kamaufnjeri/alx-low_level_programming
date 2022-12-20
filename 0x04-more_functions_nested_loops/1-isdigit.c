#include "main.h"

/**
 * _isdigit -  a function that checks for a digit 0-9
 * @c: input
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
<<<<<<< HEAD
	if ((c >= 0 && (c <= 9))
		return (1);	
=======
	if ((c >= 48) && (c <= 57))
		return (1);
>>>>>>> refs/remotes/origin/master
	else
		return (0);
}
