#ifndef BC_LIBRARY
#define BC_LIBRARY

# include <stdlib.h>

size_t	bc_strlen(char *string);

//function return a string at the first occurence of a character once from the begin and the oher after the character
char	*bc_strchr_fo_rv(const char *s, char c);

#endif