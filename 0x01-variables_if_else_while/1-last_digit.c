#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - prints number is positive or negative or 0
  * Return: Always 0
  */
int main(void)
{

	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (n > 5)
	{
		printf("Last digit of 98 is 8 and is greater than  5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of 980 is and 0 \n", n, a);
	}
		else
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
		}
		return (0);
}
