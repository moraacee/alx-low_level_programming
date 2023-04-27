#include <stdio.h>

int sum(int x)

	s = 0;

	if (x == 0)

		return (x);

	s = (x + sum(x - 1));

void main(void)
{
	int a;

	a = (sum 10);

	printf('%d', a);
}
