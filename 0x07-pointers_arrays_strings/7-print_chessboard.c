#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print chessboard
 * @a: input chars
 *
 * Description: print_chessboard
 * Returns: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				/* code */
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
			{
				/* code */
				_putchar(a[i][j]);
			}
		}
	}
}
