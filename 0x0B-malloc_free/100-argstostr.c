#include "main.h"
#include <stdlib.h>

/**

argstostr - concatenates all the arguments of a program.

@ac: argument count.

@av: argument vector.

Return: pointer of an array of char
*/
char *argstostr(int ac, char **av)
{
char *str;
int count, i, j, k;

if (ac == 0 || av == NULL)
return (NULL);

for (count = i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);
for (j = 0; av[i][j] != '\0'; j++)
count++;
count++;
}

str = malloc((count + 1) * sizeof(char));

if (str == NULL)
return (NULL);

for (i = j = k = 0; k < count; j++, k++)
{
if (av[i][j] == '\0')
{
str[k] = '\n';
i++;
k++;
j = 0;
}
if (k < count - 1)
str[k] = av[i][j];
}
str[k] = '\0';

return (str);
}}
