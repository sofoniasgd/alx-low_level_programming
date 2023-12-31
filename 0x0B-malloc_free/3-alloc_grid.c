#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of int
 * @width: width of the 2D array
 * @height: height of the 2D array
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **ptr;

if (width == 0 || height == 0)
{
return (NULL);
}
ptr = (int **)malloc(sizeof(int) * width);
if (ptr == NULL)
	{
	free(ptr);
	return (NULL);
	}
for (i = 0; i < width; i++)
	{
	ptr[i] = (int *)malloc(sizeof(int) * height);
	if (ptr[i] == NULL)
		{
		free(ptr[i]);
		return (NULL);
		}
	for (j = 0; j < height; j++)
		{
		ptr[i][j] = 0;
		}
	}

return (ptr);
}
