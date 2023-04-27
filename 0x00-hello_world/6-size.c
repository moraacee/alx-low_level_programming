#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long long int b;
	char c;
	double d;
	long e;
	float f;

	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long long int: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of double: %lu byte(s)\n", (unsigned long)sizeof(d));
}
