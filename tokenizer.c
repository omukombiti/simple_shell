#include "GATESOFHELL"

/**
 * tokenizer - tokenizes string
 * @str: user input
 * Return: pointer to array of tokens
 */
char **tokenizer(char *str)
{
	char **tokens;
	char *token;
	unsigned int x;

	tokens = malloc(sizeof(char) * BUFFER);
	if (tokens == NULL)
	{
		errors(3);
		exit(EXIT_FAILURE);
	}

	token = strtok(str, "\n\t\r ");

	x = 0;
	while (token != NULL)
	{
		tokens[x] = token;
		token = strtok(NULL, "\n\t\r ");
		x++;
	}

	tokens[x] = NULL;

	return (tokens);
}
