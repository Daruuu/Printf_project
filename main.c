
#include "ft_printf.h"
#include <unistd.h>

int	main()
{
	//int	x02;
	int	d02;
	//x02 = -1;
	//x02 = 0;
	d02 = 10000;
	//printf("test x\n");
	//ft_printf("%x\n", x02);
	int fd = dup(STDOUT_FILENO);
	close(STDOUT_FILENO);
	int a = ft_printf("%d\n", d02);
	printf("--------------\n");
	printf("%d\n", d02);
	dup2(fd, STDOUT_FILENO);
	printf("asdasd: %d\n", a);

	return (0);
}
