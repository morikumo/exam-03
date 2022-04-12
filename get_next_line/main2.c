#include "get_next_line.h"

int main()
{
	int fd = open("bof", O_RDWR);
	int fd2 = open("tap.txt", O_RDWR);
	int fd3 = open("sleep.txt", O_RDWR);
	
    printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd3));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd3));	
		
}