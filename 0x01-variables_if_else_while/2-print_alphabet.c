/**
 * main - Prints the last digit of a randomly generated number
 * and determines whether it is greater than 5, less than 6 or 0
 *
 * Returns - Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n,n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) !-0)
	{
		printf("Last digit i0)
