#include "main.h"
/**
 * chkpalindrome - function to traverse a set of matching chars
 * @s1: pointer to first of two matching chars
 * @s2: pointer to second char
 * Return: 1 if chars match all the way to \0 , 0 if not.
 */

int chkpalindrome(char *s1, char *s2)
{
if (*s2 == '\0')
	{
	return (1);
	}
if (*s1 == *s2)
	{
	return (1 * chkpalindrome((s1 - 1), (s2 + 1)));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 * Return: 1 if string is a palindrome or empty, 0 if not
 */

int is_palindrome(char *s)
{
	/* checks for empty string*/
if (*s == '\0')
	{
	return (1);
	}
/* checks for a four letter palinfrome => edde, reer */
else if ((*s == *(s + 1)) && (*(s - 1) == *(s + 2)))
	{
	return (chkpalindrome(s, (s + 1)));
	}
/*
 * checks for a four letter palindrome separated by another letter
 * => level, on no
 */
else if ((*(s - 1) == *(s + 1)) && (*(s - 2) == *(s + 2)))
	{
	return (chkpalindrome((s - 1), (s + 1)));
	}
/* checks for end of string meaning no palindrome */
if (*(s + 1) == '\0')
	{
	return (0);
	}
/* continue recursion */
	return (1 * is_palindrome((s + 1)));

}
