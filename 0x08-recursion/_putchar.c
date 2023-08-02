#include <unistd.h>

/**
*This is my _putchac.c
*/

int _putchar(char c)
{
    return write(STOUD_FILENO, &C, 1);
}
