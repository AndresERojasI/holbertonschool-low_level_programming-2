#include "holberton.h"

/**
* main - Function to print using _putchar
* Return: 0
**/

int main(void)
{
	char i[9] = "Holberton";
	int counter;

	for (counter = 0; counter < 9 ; counter++)
	{
		_putchar(i[counter]);
	}
	_putchar('\n');
	return (0);
}
