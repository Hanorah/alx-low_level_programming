#include "main.h"
#include <stdio.h>		
#include <stdlib.h>
		
/**
		
 * create_array - create array of size size and assign char c
		
 * @size: size of array
		
 * @a: char to assign
		
 * Description: creat array of size and assign it a char a
		
 * Return: pointer to array, NULL if fail
		
 *
		
 */
		
char *create_array(unsigned int size, char a)
		
{
		
	char *str;
		
	unsigned int i;
	
	str = malloc(sizeof(char) * size);
		
	if (size == 0 || str == NULL)
		
		return (NULL);
		

		
	for (i = 0; i < size; i++)
		
		str[i] = a;
		
	return (str);
}
