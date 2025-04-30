#include "../includes/bc_library.h"

size_t	bc_strlen(char *string)
{
	size_t	len;

	len = 0;
	if (!string)
		return 0;
	while (string[len])
		len++;
	return (len);
}