<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Prints the alphabet.
=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines either greater than 5, is less than 6, or is 0
>>>>>>> 64fd320d290f821283af5a54727ec202bf25128d
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
=======
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
>>>>>>> 64fd320d290f821283af5a54727ec202bf25128d
	return (0);
}
