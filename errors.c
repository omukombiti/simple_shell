#include "GATESOFHELL"

/**
 * errors - prints errors based on case
 * @error: error number associated with perror statement
 * Return: void
 */
void errors(int error)
{
	switch (error)
	{
	case 1: 
		write(STDERR_FILENO, ERR_FORK, _strlen(ERR_FORK));
		perror("this is an Error try again");
		break;

	case 2: 
		perror("Error dected please exit");
		break;

	case 3: /* writes malloc error to stderr */
		write(STDERR_FILENO, ERR_MALLOC, _strlen(ERR_MALLOC));
		break;
	case 4: /* writes empty path error to stderr */
		write(STDERR_FILENO, ERR_PATH, _strlen(ERR_PATH));
		break;

	default:
		return;
	}
}
