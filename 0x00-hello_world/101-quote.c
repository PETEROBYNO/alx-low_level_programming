#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora korpa, 2015-10-19",
 * fellowed by a newline, to standard erro.
 * Return: Always 1.
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora kopar, 2015-10-19\n" 59);
	return (1);
}
