#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the combination of single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
		if (n != 57)
		{
			putchar(',');
		}
	putchar('\n');
	return (0);
}
