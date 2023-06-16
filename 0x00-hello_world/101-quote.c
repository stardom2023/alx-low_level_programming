#include <stdio.h>
/**
 *main-the entry point of our program
 *Return:always successful (0)
 */
int main(void)
{
	const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fputs(message, stderr);
	return 1;
}
