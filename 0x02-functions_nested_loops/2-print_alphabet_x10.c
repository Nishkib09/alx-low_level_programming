#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times in lowercase.
*
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 132; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
