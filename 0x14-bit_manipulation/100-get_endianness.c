#include "main.h"
#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>
/**
 * get_endianess - checks machine for Big/ Little Endianess
 * Return:  returns 0 if machine is big-endian, 1 if little
 */

int get_endianness(void)
{
unsigned int value = 0x1;
char *r = (char *) &value;

	if (*r == 1)
		return (1);
	else
		return (0);
}
