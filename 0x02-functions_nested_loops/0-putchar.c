#include "main.h"
/**
 * main - Check description
 * Description: It prints the word_putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
