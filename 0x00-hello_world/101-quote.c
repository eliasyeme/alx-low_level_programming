#include <unistd.h>
#include <string.h>

/**
* main - Entry point
*
* print to stderr
*
* Return: 1 no matter what
*/

int main(void)
{
char e[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, e, strlen(e));
return (1);
}
