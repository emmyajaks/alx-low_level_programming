#include "main.h"

/**
 * _strlen - checks the lenght of the string
 * @s: string to be checked
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int string_lenght = 0;

	while (s[string_lenght])
		string_lenght++;
	return (string_lenght);
}
