#include "GATESOFHELL"

/**
 * _strcmp - compares two strings to find out if they are exactly the same
 * @name: name supplied by user to search for
 * @variable: variable to compare against
 * @length: length of name
 * Return: 1 if strings are equal, -1 if they are not
 */
int _strcmp(char *name, char *variable, unsigned int length)
{
	unsigned int var_length;
	unsigned int m;

	var_length = _strlen(variable);
	if (var_length != length)
		return (-1);

	m = 0;
	while (name[m] != '\0' && variable[m] != '\0')
	{
		if (name[m] != variable[m])
			return (1);
	m++;
	}
	return (0);
}

/**
 * _strncmp - compares two strings
 * up to given length are the same
 * @name: name supplied by user to search for
 * @variable: variable to compare against
 * @length: length to compare up to
 * Return: 1 if strings are equal, -1 if they are not
 */
int _strncmp(char *name, char *variable, unsigned int length)
{
	unsigned int y;

	y = 0;
	while (y< length)
	{
		if (name[y] != variable[y])
			return (-1);
		y++;
	}
	return (1);
}

/**
 * *_strcpy - copies string pointed to by src to the buffer pointed to dest
 * @dest: string destination
 * @src: string source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int o = _strlen(src);

	for (x = 0; x <= o; x++)
		dest[x] = src[x];

	return (dest);
}
/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;

	return (x);
}
