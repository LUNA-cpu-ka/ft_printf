#include "ft_printf.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s3 = malloc((sizeof(char) * (strlen(s1) + strlen(s2) + 1)));
	if (!s3)
		return (NULL);
	while (s1[i])
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		s3[j] = s2[i];
		j++;
		i++;
	}
	s3[j] = '\0';
	return (s3);
}

char *ft_variadic_strjoin(int count, ...)
{
	va_list arg;
	va_start(arg, count);
	int i = 0;
	char *joined = va_arg(arg, char *);

	while(i < count - 1)
	{
		joined = ft_strjoin(joined, va_arg(arg, char *));
		i++;
	}
	va_end(arg);
	return (joined);
}

int main()
{
	printf("%s", ft_variadic_strjoin(5, "hello ", "world ", "!", " ajberqbjg", " akbjbgj"));
}