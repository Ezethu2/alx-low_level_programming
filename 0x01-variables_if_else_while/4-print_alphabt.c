#include <stdio.h>
/**
 * main - print alhabets except q and e
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
																	putchar(alphabets);
		}
		alphabet++;
	}
	putchar('n\n');
	return (0);
}
