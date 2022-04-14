#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

int main(int ac, char **av)
{
    if (ac != 3)
    {
        ft_putchar('\n');
        return(0);
    }
    char tab[256] = {0};
    char *s1 = av[1] , *s2 = av[2];

    while (*s2)
    {
        tab[(int)*s2] = 1;
        s2++;
    }
    while (*s1)
    {
        if (tab[(int)*s1] == 1)
        {
            ft_putchar(*s1);
            tab[(int)*s1] = 0;
        }
        s1++;
    }
    ft_putchar('\n');
    
}