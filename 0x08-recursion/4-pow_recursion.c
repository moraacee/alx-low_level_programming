#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: value to raise
 * @y: the power
 *
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (0);
	}
	return (x * _power_recursion(x, y - 1));
}
