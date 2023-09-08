/*
 * File: 9-print_comb.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 48; num <= 58; num++)
	{
		putchar(num);
		if (num != 57)
		{	
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
