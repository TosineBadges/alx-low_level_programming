#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to be converted
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	int count;

	diff = n ^ m;
	count = 0;

	while (dif)
	{
		count++;
		dif &= (dif - 1);
	}

	return (count);
}
