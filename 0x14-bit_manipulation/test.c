#include<stdio.h>
#include<limits.h>
#include<stdlib.h> 
int main(void)
{
    unsigned int value = 0x1;
    char *r = (char *) &value;
 
    if (*r == 1) 
        printf("Your system is Little Endian\n");
    else
        printf("Your system is Big Endian\n");
    return 0;

}
