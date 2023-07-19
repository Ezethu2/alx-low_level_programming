#include <stdio.h>
/**
  * main -prints alphaBETS
  *Return: Always 0 (success)
  */
int main(void)
{
	char lowerbet = 'a';
	char alphabet = 'A';

	while (lowerbet <= 'z')
	{
		putchar(lowerbet);
		lowerbet++;
	}
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}


