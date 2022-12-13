#include "main.h"

#include <stdio.h>

/**

*_strchr - function to search for occurrence of character in a string

*@s: string to be searched

*@c: target charcter

*Return: pointer to the target string

*/

char *_strchr(char *s, char c)

{

	int i = 0;



	while (s[i] != '\0' && s[i] != c)

	i++;

	{

	if (s[i] == c)

	return (&s[i]);

	else

	return (NULL);

	}

return (0);

}
