#include "main.h"
#include<stddef.h>
/**
 * _strstr - locates an  entire substring from haystack
 * @haystack: source string
 * @needle: substring
 * Return: starting location of substring or null
 */
char *_strstr(char *haystack, char *needle)
{
int i;
while (*haystack != '\0')
	{
	if (*haystack == *needle)
		{
		i = 0;
		while (*(needle + i) != '\0')
			{
			if (*(haystack + i) != *(needle + i))
				{
				break;
				}
			i++;
			}
		if (*(needle + i) == '\0')
			{
			return (haystack);
			}
		}
	else if (*needle == '\0')
		{
		return (haystack);
		}
	haystack++;
	}
return (NULL);
}
