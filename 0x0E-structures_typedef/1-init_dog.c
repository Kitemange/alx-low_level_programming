#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *  * struct dog - dog
 *   * @name: name of the dog
 *    * @age: how old the dog is
 *     * @owner: who owns the dog
 *      */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d)
    {
        d -> name = name;
        d -> age = age;
        d -> owner = owner;
    }
    
}