#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * str_len - getting string len
 * @s: indicating an input value
 *
 * Description: finding the length of a string
 * Return: returns string's length
 */


 
int is_palindrome(char *s)
{
    int i,c=0,n;
    
    n=strlen(s);
	for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
        return 1;
    else
        return 0;
 
 	
}