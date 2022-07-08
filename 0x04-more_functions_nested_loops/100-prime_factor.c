#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 * A code to return the largest prime factor of 612852475143
 */
int main(void)
{
	unsigned int a = 2;
	unsigned long n = 612852475143;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		} else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
