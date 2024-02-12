#include <unistd.h>

void    ft_putchar(char c);
{
    write(1, &c, 1);
}

int main(int    argc, char  *argv[])
{
    int i;
    int x;

    x = 1;
    while (x < argc)
    {
        i = 0;
        while (argv[x][i] != '\0')
        {
            ft_putchar(argv[x][i])
            i++;
        }
        ft_putchar('\n');
        i++;
    }
    return (0);
}