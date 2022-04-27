#include "main.h"

/**
 * flip_bits - prints number of times to flip bits to make int equal
 * @n: number being changed to base two
 * @m: second number being changed to base 2
 * Return: count of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	/*loop through till n and m are 0*/
	while (n > 0 || m > 0)
	{
		/*checking if index bit n and m are not equal to 0*/
		if ((n & 1) != (m & 1))
			count++;
		/*move n and m to the next index bit*/
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
