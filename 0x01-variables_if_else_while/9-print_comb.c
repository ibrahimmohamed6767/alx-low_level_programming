/*
 * File: 9-print_comb.c
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (num == 9)
			continue;
	
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
