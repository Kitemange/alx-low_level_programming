#include <stdio.h>

void Tortoise (void) __attribute__ ((constructor));

/**
 * Tortoise - prints a string before the
 */
void Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
