#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all numbers from n to 98, followed by a new line
 * @n: Input
 * Return: Results
 */
void print_to_98(int n)
{
	int to = 98;
	int i;

	if (n < to || n > to)
	{
		if (n < to)
		{
			for (i = n; i <= to; i++)
			{
				printf("%d ", i);
			}
		}
		if (n > to)
		{
			for (i = n; i >= to; i--)
			{
				printf("%d ", i);
			}
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
