#include "main.h"
#include<stdio.h>

/**
 * leet - encoding 1337
 * @s: pointer to string
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
int i, j;
char a1[5] = "aeotl";
char a2[5] = "AEOTL";
char a3[5] = "43071";
i = 0;
while (*(s + i) != '\0')
{
for (j = 0; j < 5; j++)
	{
	if (*(s + i) == a1[j] || *(s + i) == a2[j])
		{
		/* printf("%d\n", j);*/
		*(s + i) = a3[j];
		}
	}
i++;
}
return (s);
}
