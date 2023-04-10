#include <stdio.h>
#include <stdlib.h>


/**
* main - multiplies two numbers.
* @argc: argument count
* @argv: arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
int e, f;


if (argc < 3)
{
printf("Error\n");
return (1);
}


e = atoi(argv[1]);
f = atoi(argv[2]);
printf("%d\n", e * f);


return (0);
}
