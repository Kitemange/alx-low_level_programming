#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 *  * struct dog - dog
 *   * @name: name of the dog
 *    * @age: how old the dog is
 *     * @owner: who owns the dog
 *      */
typedef struct dog
{
	/* data */
	char *name;
	float age;
	char *owner;
}dog_t;


#endif
