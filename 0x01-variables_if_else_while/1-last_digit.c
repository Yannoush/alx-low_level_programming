#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * he output of the program should be:The string Last digit of, followed by n, followed by
 * the string is, followed by
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and less than 6 and noot 0\n", n, last);
	return (0);
}
