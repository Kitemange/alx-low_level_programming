#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Print the elements of variable of type struct dog.
 * @d: Variable to print it's elements.
 **/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		
		if (d->owner != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)\n");
		printf("\n");
	}
}
