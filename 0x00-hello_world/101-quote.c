#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 Successful
 */

int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quot, 59);

	return (1);
}
