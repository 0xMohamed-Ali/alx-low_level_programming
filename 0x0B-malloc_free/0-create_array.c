#include <main.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a sarrecific char
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL)
		return (0);

	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);
}
