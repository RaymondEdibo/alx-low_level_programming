#include "main.h"

/**
 * long - check
 * @s: number
 *
 * Return: Always 0.
 */

int long(char *s)
{
	if (*s != '\0')
	{
		return (1 + long(s + 1));
	}
	return (0);

}
/**
 * compare - check
 * @s: number
 * @l: lenght
 *
 * Return: Always 0.
 */
int check(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (check(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - palindrome
 * @s: character
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int a;

	a = long(s);
	return (check(s, a));
}
