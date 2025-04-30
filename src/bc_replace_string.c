#include "../includes/bc_library.h"

void	bc_replace_string(char *src, char *trg,char *rep)
{
	if (!src)
		return (NULL);
	if (!rep || !bc_strlen(rep) || !rep || !bc_strlen(trg))
		return (src);
	//...
}