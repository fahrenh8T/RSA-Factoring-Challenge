#include "factors.h"
/**
 * factorizer - function that factors a number
 * @num_string: string representation of the number to factrize
 *
 * Return: 0 (success)
*/
int factorizer(char *num_string)
{
	int num;
	int divisor;

	num = atoi(num_string);

	for (divisor = 2; divisor < num; divisor++)
	{
		if (num % divisor == 0)
		{
			printf("%d=%d*%d\n", num, num / divisor, divisor);
			break;
		}
	}
return (0);
}
