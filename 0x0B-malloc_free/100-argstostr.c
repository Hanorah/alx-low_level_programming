#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer to an array of char
 */
char *argstostr(int ac, char **av)
{
	char *out;
	int len = 0, i, j, idx = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	out = malloc((len + 1) * sizeof(char));
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, idx++)
			out[idx] = av[i][j];
		out[idx] = '\n';
		idx++;
	}
	out[idx] = '\0';

	return (out);
}
