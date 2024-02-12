#include <unistd.h>

void    ft_putchar(char c);
{
    write(1, &c, 1);
}

int main(int    argc, char  *argv[])
{
    int i;
    int x;

    i = argc - 1;
    while (i > 0)
    {
        x = 0;
        while (argv[i][x] != '\0' && argc)
        {
            ft_putchar(argv[i][x]);
            x++;
        }
        ft_putchar('\n');
        i--;
    }
    return (0);
    
}