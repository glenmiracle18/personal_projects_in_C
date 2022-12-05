#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: string to locate
 * @needle: substring to locate
 * Return: returns string at starting sub null
 */

char *_strstr(char *haystack, char *needle)
{
	int j;
	int i;

	if (needle[0] == '\0')
		return (haystack);
	
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (hayback + i);
		}
	}
	return ('\0');
}
