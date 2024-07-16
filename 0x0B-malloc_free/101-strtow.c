#include "main.h"
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, wc = 0, word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			wc++;
	}
	if (wc == 0)
		return (NULL);
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i] && word < wc; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] && str[j] != ' '; j++)
				len++;
			words[word] = malloc((len + 1) * sizeof(char));
			if (words[word] == NULL)
			{
				for (k = 0; k < word; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				words[word][k] = str[i + k];
			words[word][k] = '\0';
			word++;
			i += len;
		}
	}
	words[word] = NULL;
	return (words);
}
