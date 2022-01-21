#include <stdio.h>
#include "ft_strlen.h"

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		printf("%d\n", ft_strlen(argv[1]));
		return 0;
	}
	
	return 1;
}
