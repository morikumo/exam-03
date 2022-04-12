#include "get_next_line.h"

int main(int ac, char **av)
{
	(void)	ac;
	
    char    *line;
    int     fd;

    fd = open(av[1], O_RDONLY);
    while ((line = get_next_line(fd)))
    {
        printf("%s",line);
        free(line);
    }
    close(fd);
    return (0);
}