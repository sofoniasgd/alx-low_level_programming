#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * strtow - function that splits a string into words
 * @str: pointer to start of string
 * Return: pointer to the split strings double pointer
 */
char **strtow(char *str)
{
char **split;
int i, j, k, row;
row = 0;

if (str == NULL || *str == '\0')
{return (NULL); }
/* loop to find start of strings=> row */
i = 0;
while (*(str + i) != '\0')
	{
	if (*(str + i) != ' ' && (*(str + (i - 1)) == ' ' || i == 0))
		{row++; }
	i++;
	}
split = (char **)malloc(sizeof(char) * (row + 1));
if (split == NULL)
	{
	free(split);
	return (NULL);
	}
i = 0;
row = 0;
while (*(str + i) != '\0')
	{
	if (*(str + i) != ' ' && (i == 0 || *(str + (i - 1)) == ' '))
		{
		j = 0;
		while (*(str + i + j) != ' ')
			{
			if (*(str + i + j) == '\0')
			{break; }
			j++;
			}
		split[row] = malloc(sizeof(char) * (j + 1));
		if (split[row] == NULL)
			{
			free(split[row]);
			return (NULL);
			}
		for (k = 0; k <= j; ++k)
			{
			if (k == j)
				split[row][k] = '\0';
			else
				split[row][k] = *(str + i + k);
			}
			/* printf("split[%i][%i] - %c\n", row, j, split[row][0]); */
		++row;
		}
	++i;
	}
/* printf("split[0][0] - %c\n", split[0][0]); */
split[row] = NULL;
return (split);
}
