#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: base value, whose power is to be calculated
 * @y: the power
 *
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	if (y == 0)

		return (1);

	return (x * _pow_recursion(x, y - 1));
}
