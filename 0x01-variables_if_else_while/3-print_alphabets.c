#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase
 * and the in uppercase, fellow by a new line
 * Return: o
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (cn <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
