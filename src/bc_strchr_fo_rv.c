#include "../includes/bc_library.h"

char	*bc_strchr_fo_rv(const char *s, char c)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
