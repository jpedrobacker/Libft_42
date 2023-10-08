#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str + i) == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}

/*
int main(void)
{
  char *str = "sdhahsduha.joao";
  char *stri;
  stri = ft_memchr(str, '.', 50);
  printf("%s", stri);
}
*/