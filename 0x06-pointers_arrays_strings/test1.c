#include<string.h>
#include<stdio.h>

int main(void)
{
char s1[] = "Hello";
char s2[] = "World!";

printf("%d\n", strcmp(s1, s2));
printf("%d\n", strcmp(s2, s1));
printf("%d\n", strcmp(s1, s1));
return (0);
}
