#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints numbers between 00 to 99.
=======
 * main - Prints the alphabet.
>>>>>>> fce152b3c05a0e56a83fc1399b5f5e7f972b6855
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(e);
			putchar(i);
			if (i == 57 && e == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		e++;
=======
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
>>>>>>> fce152b3c05a0e56a83fc1399b5f5e7f972b6855
	}
	putchar('\n');
	return (0);
}
