#include "../includes/bc_library.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
		return (1);
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}