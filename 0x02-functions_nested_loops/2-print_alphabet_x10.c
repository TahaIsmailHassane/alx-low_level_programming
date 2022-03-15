# include "main.h"
/**
 * print_alphabet_x10 - its print alphabet letters 10 time
 *
 * Return: always (0)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
			i++;
	}
}
