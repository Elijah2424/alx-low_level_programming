#include "main.h"

/**
 * _islower - function to check for lower case character
 *
 * @c:takes in int c and checks
 *
 * Return: 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
