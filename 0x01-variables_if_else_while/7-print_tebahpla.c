#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
int m = 122;
while (m >= 97)
{
	putchar(m);
	m--;
}
putchar('\n');
return (0);
}
