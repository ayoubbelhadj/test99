#include "shell.h"

/**
 * ft_interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int ft_interactive(info_t *info)
{
	if (isatty(STDIN_FILENO) && info->readfd <= 2)
		return (1);
	return (0);
}

/**
 * ft_is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int ft_is_delim(char c, char *delim)
{
	int	i;

	i = 0;
	while (delim[i])
	{
		if (delim[i] == c)
			return (1);
		i++;
	}
	return (0);
}
