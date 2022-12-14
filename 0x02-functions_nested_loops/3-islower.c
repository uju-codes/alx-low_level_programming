#include "main.h"

/**
* _islower - checking for lowercase character
*@c: character that check each case
* Return: 0 or 1
*/

int _islower(int c);
{
	if (c >= 97 && c <= 122)

		return (1);
	else
		return (0);
}
