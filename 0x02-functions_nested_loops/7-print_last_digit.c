#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 *
 * @n: takes in int n and checks
 *
 * Return: always 0
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (n < 0)
		res *= -1;
	_putchar(res + '0');
	return (res);
}
