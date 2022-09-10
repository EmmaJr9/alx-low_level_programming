#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
