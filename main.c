#include "ft_printf.h"

int main()
{
    char *test_time = "This shows that ft_printf works!";
    //char *test_end = "That's all, folks!";
    char c_flag = 'c';
    char *s_flag = "Strings are characters that likes company!";
    int d_flag = -42;
    int i_flag = 42;
    char *various_flags = "This is the memory address";
    //int no_flag = ft_printf("This is a test without flags % \n");
    
    ft_printf("Just a char\n");
    ft_printf("%c\n", 'c');
    printf("%c\n", 'c');
    ft_printf("\n");
    //c flag 2 test
    ft_printf("c flag: %c\n", c_flag);
    printf("printf c flag: %c\n", c_flag);
    ft_printf("\n");
    //s flag
    ft_printf("s flag: %s\n", s_flag);
    printf("printf s flag: %s\n", s_flag);
    ft_printf("\n");
    //p flag
    ft_printf("p flag: %p\n", &test_time);
    printf("printf p flag: %p\n", &test_time);
    ft_printf("\n");
    //d flag
    ft_printf("d flag: %d\n", d_flag);
    printf("printf d flag: %d\n", d_flag);
    ft_printf("\n");
    //i flag
    ft_printf("i flag: %i\n", 42);
    printf("printf i flag: %i\n", 42);
    ft_printf("\n");
    //u flag
    ft_printf("u flag: %u\n", 42);
    printf("printf u flag: %u\n", 42);
    ft_printf("\n");
    //x flag
    ft_printf("x flag: %x\n", i_flag);
    printf("printf x flag: %x\n", i_flag);
    ft_printf("\n");
    //X flag
    ft_printf("X flag: %X\n", i_flag);
    printf("printf X flag: %X\n", i_flag);
    ft_printf("\n");
    //% flag
    ft_printf("%% flag: %%\n");
    printf("printf %% flag: %%\n");
    ft_printf("\n");
    //multiple flags
    ft_printf("%s %p , a total of %i flags\n", various_flags, &various_flags, 2);
    printf("printf %s %p , a total of %i flags\n", various_flags, &various_flags, 2);
    ft_printf("\n");
    //all flags
    ft_printf("All flags assamble: %c %s %p %d %i %u %x %X %%\n", c_flag, s_flag, &test_time, d_flag, i_flag, 42, i_flag, i_flag);
    printf("printf All flags assamble: %c %s %p %d %i %u %x %X %%\n", c_flag, s_flag, &test_time, d_flag, i_flag, 42, i_flag, i_flag);
    ft_printf("\n");
    //no flags
    //printf("%d\n", no_flag);

    //end of test
    ft_printf("That's all, folks!\n");
    ft_printf("\n");
    return (0);
}