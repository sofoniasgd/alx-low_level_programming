#include<stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
	for (j = 0; j < 100; j++)
	{
		if (j > i)
		{
			puchar((i / 10) + 48);
			puchar((i % 10) + 48);
			puchar(32);
			puchar((j / 10) + 48);
			puchar((j % 10) + 48);
			if (i == 98 && j == 99)
			{
				continue;
			}
			else
			{
				puchar(44);
				puchar(32);
			}
		}
	}
}

putchar(10);
return (0);
}
