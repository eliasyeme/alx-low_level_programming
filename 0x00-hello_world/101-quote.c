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
char error_message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, error_message, strlen(error_message));
return (1);
}
