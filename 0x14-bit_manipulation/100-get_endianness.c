#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
    unsigned data = 1;/*Assign data*/
    unsigned *cptr;

    cptr = (unsigned int*)&data; /*Type cast*/
    if (*cptr == 1)
        return (1);
    else if(*cptr == 0)
        return (0);
    
    return (-1);
}
