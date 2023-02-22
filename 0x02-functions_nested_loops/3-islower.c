#include "main.h"

/**
 * _islower - Checks for lowercase character 
 * @c : The charecter to be checked 
 * Return: 1 For lowercase character or 0 for anything els
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
