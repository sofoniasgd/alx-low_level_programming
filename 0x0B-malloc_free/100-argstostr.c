#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * findlen - finds length of a string
 * @s: pointer to string
 * Return: length of the string
 */
int findlen(char *s)
	{
	int i;
	char *s1;

	s1 = s;
	i = 0;
	while (*(s1 + i) != '\0')
		{
		i++;
		}
	return (i);
	}
/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: pointer to arguments
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
char *ret;
int i, j, totalchars, inew, column;

totalchars = 0;
/* checking for NULL values in ac & av */
if (ac == 0 || av == NULL)
	{return (NULL); }
/* finding and adding number of chars in each argument */
/* to get total number of chars including new line */
for (i = 0; i < ac; i++)
	{
	totalchars += (findlen(av[i]) + 1);
	}
/* allocating the memory and catching errors */
ret = malloc(sizeof(char) * totalchars);
if (ret == NULL)
{return (NULL); }
inew = 0;
for (i = 0; i < ac; i++)
	{
	column = findlen(av[i]) + 1;
	for (j = 0; j < (column - 1); j++)
		{
		*(ret + inew) = av[i][j];
		inew++;
		}
	if (i == (ac - 1))
		{
		*(ret + inew) = '\n';
		inew++;
		*(ret + inew) = '\0';
		}
	else
		{
		*(ret + inew) = '\n';
		inew++;
		}
	}
return (ret);
}
