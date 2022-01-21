#include <stdio.h>
#include "ft_strlen.h"

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		printf("Girilen String uzunlugu: %ld\n", ft_strlen(argv[1]));
		return 0;
	}

	printf("Lutfen bir deger giriniz!\n");
	return 1;
}
