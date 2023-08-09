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
/* nested loop to find size of words=> column */
i = 0;
while (*(str + i) != '\0')
	{
	if (*(str + i) != ' ' && *(str + (i - 1)) == ' ')
		{row++; }
	i++;
	}
split = (char **)malloc(sizeof(char) * (row + 1));
if (split == NULL)
{return (NULL); }
i = 0;
row = 0;
while (*(str + i) != '\0')
	{
	if (*(str + i) != ' ' && *(str + (i - 1)) == ' ')
		{
		j = 0;
		while (*(str + i + j) != ' ')
			{j++; }
		split[row] = (char *)malloc(sizeof(char) * (j + 2));
		if (split[row] == NULL)
		{return (NULL); }
		for (k = 0; k < (j); k++)
			{split[row][k] = *(str + i + k); }
		split[row][j] = '\0';
		row++;
		}
	i++;
	}
split[row] = NULL;
return (split);
}
