#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: the digit to find last place
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	_putchar('\n');
	return (n % 10);
}
