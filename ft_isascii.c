#include "libft.h"

int ft_isascii(int c)
{
  if (c >= 0 && c <= 127)
    return (1);
  else
    return (0);
}

/*
int main(void)
{
  char c;

  c = 'q';
  printf("%d", ft_isascii(c));
}
*/