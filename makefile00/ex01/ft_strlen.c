#include "ft_strlen.h"

size_t ft_strlen(char *str)
{
	size_t i;
	for(i = 0; str[i] != '\0'; i++);

	return i;
}