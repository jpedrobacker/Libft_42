#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	i;
  int lens1;
  int lens2;
	char *str;

	i = 0;
  lens1 = ft_strlen(s1);
  lens2 = ft_strlen(s2);
  str = (char *)malloc(lens1 + lens2 + 1);
  if (s1 == 0 && s2 == 0)
    return (0);
  if (!str)
    return (0);
	while (i < lens1 || i < lens2)
	{
		if (i < lens1)
			str[i] = s1[i];
		if (i < lens2)
			str[i + lens1] = s2[i];
		i++;
	}
	str[lens1 + lens2] = '\0';
	return (str);
}

/*
int main(void)
{
  char *s1 = "ola";
  char *s2 = "+";
  
	printf("%s", ft_strjoin(s1, s2));
}
*/