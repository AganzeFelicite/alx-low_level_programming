#include "main.h"
/**
 * _strlen - gets length of string for a const
 * @b: pointer to string
 * Return: length of string
 */
int _strlen(const char *b)
{
	/*declare vairables to be used*/
	int count = 0;

	while (b[count] != '\0')
		count++;
	return (count);
}

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: pointer to a string
 * Return: unisgned int
 */

unsigned int binary_to_uint(const char *b)
{
	/*declare variables to be used*/
	unsigned int self_add = 1, decimal = 0, num = 0;
	int len, i;
	/*check if character is not NULL*/
	if (!b)
		return (0);
	/*get string length*/
	len = _strlen(b);
	/*loop through characters and check if not 0 or 1*/
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);/*there's a wrong character*/
		/*check and convert*/
		if (b[i] == '1')
			num = self_add;
		else
			num = 0;

		decimal += num;/*adds the decimal number*/
		self_add += self_add;/*add self*/
	}
	return (decimal);
}
