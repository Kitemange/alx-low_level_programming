#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Always return(0)
 */

int main(void)
{
	char ch='a';

	if (ch <= 'z')
	{
		putchar(ch);
	}
    ch++;
	
	return (0);
}