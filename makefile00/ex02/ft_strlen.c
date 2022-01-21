#include "ft_strlen.h"

size_t ft_strlen(char *str)
{
	size_t j;
	for(j = 0; str[j] != '\0'; j++);
	return j;
}