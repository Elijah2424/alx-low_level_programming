#include "main.h"

/**
 * _isalpha - is a function that checks if character is an alphabet
 *
 * @c: takes in int c and checks
 * Return: Always return 0 on success
 */
int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
