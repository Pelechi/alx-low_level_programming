#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *f = haystack;
		char *t = needle;

		while (*f == *t && *t != '\0')
		{
			f++;
			t++;
		}

		if (*t == '\0')
			return (haystack);
	}

	return (0);
}
