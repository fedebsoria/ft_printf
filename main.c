#include "printf.h"

int main()
{
    char *test_time = "This shows that ft_printf works!";
    //char *test_end = "That's all, folks!";
    char c_flag = 'f';
    char *s_flag = "Strings are characters that likes company!";
    int d_flag = -42;
    int i_flag = 42;
    
    ft_printf("%s\n", test_time);
    ft_printf("c flag: %c\n", c_flag);
    ft_printf("s flag: %s\n", s_flag);
    ft_printf("p flag: %p\n", &test_time);
    ft_printf("d flag: %d\n", d_flag);
    ft_printf("i flag: %i\n", i_flag);
    ft_printf("u flag: %u\n", i_flag);
    ft_printf("x flag: %x\n", i_flag);
    ft_printf("X flag: %X\n", i_flag);
    ft_printf("%% flag: %%\n");
    ft_printf("That's all, folks!\n");
    return (0);
}