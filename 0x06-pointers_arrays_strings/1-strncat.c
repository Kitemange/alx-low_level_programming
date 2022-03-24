#include <stdio.h>
#include <string.h>
//#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

int main(void)
{
	int i, l;
	char dest[] = "Prompt user ";
	char str[] = "for password";

	printf("First string: %s\n", dest);
    printf("Second string: %s\n", str);

	for (i = 0; i < l && dest[i] != '\0'; i++)
	{
		/* code */
		str + 1;
		strcat(dest, str);
		printf("First string: %s\n", dest);
	}
	
	
}
