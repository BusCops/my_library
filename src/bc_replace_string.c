#include "../includes/bc_library.h"

int check_if_target(char *src, char *trg)
{
	int	len;
	int	i;

	len = bc_strlen(trg);
	while (trg[i])
	{
		if ()
	}
}

static size_t	size_count(char *src, char *trg, char *rep)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] = trg[0])
		{
			
		}
		i++;
	}
}

char	*bc_replace_string(char *src, char *trg, char *rep)
{
	char *str;

	if (!src)
		return (NULL);
	if (!rep || !rep || !bc_strlen(trg))
		return (src);
	//...
}