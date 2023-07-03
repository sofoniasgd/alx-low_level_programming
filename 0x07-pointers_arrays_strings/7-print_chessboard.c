#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: 2d array - board
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
int i;
while ((*a)[7] != '\0')
	{
	for (i = 0; i < 8; i++)
		{
		_putchar((*a)[i]);
		}
	_putchar(10);
	a++;
	}
}
