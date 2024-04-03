#include "printf.h"

int main()
{
    char *world;
    char *hello = "hello";

    world = "world";
    ft_printf("Test: %s %s it works.\n",hello, world);
    return (0);
}