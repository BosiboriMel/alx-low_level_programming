#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates a space from heap and asigning a character to it
 * @size: unsigned int
 * @c: string of characters to beinputted
 * Return: prt
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr
	if (size == 0)
		return (NULL);
	ptr - (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i - 0; i < size; i++)
	
	{
			*(ptr + i) = c;
	}
	return (ptr);
}
