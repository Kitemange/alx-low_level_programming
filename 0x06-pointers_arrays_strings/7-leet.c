#include "main.h"

/**
 *leet - encodes a string into 1337.
 *@s: string to encode.
 *Return: the encoded string.
 */

char *leet(char *s)
{
	int i = 0, j;
	char encode[] = {'4', '3', '1', '0', '7'};
	char U_letters[] = {'A', 'E', 'L', 'O', 'T'};
	char L_letters[] = {'a', 'e', 'l', 'o', 't'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == L_letters[j] || s[i] == U_letters[j])
				s[i] = encode[j];
		}
		i++;
	}

	return (s);
}
