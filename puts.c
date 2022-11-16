#include "shell.h"

/**
 * puts - write all char from stdout
 *
 * @prmStr: string to print
 *
 * Return: number of printed char
 */

int _puts(char *prmStr)
{
	int i = 0, sum = 0;

	while (prmStr[i])
	{
		sum += _putchar(prmStr[i]);
		i++;
	}
	return (sum);
}
