#include<stdio.h>
/**
  * main - A program that prints the size of various comp uter types
  * Return 0 (success)
  */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu  byte(s)\n", (unsigned long)sizeof(a)); 
printf("size of an ink: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes (s)\n"; (unsigned long)sizeof(C));
printf("size of a long float %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
