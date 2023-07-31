#include "main.h"
#include <string.h>

/**
 * rot13 - Encode a string using rot13
 * @str: string
 *
 * Description: This function is meant to encode a string
 * using rot13 encryption.
 * Return: return the number of bytes printed
 */

int rot13(char *str)
{
	char fd;
	char rep;
	int i;
	int len = strlen(str);
	char *s;

	s = strdup(str);
	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			for (fd = 'A', rep = 'N'; fd <= 'N' && rep <= 'Z'; fd++, rep++)
			{
				if (s[i] == fd)
					s[i] = rep;
				else if (s[i] == rep)
					s[i] = fd;
			}
		}
		else
		{
		for (fd = 'a', rep = 'n'; fd <= 'n' && rep <= 'z'; fd++, rep++)
		{
			if (s[i] == fd)
				s[i] = rep;
			else if (s[i] == rep)
				s[i] = fd;
		}
		}
	}
	for (i = 0; i < len; i++)
		print_char(s[i]);
	return (i);
}
