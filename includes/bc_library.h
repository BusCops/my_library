#ifndef BC_LIBRARY_H
#define BC_LIBRARY_H

#include <stdlib.h>

// Returns the length of the given string
size_t	bc_strlen(const char *string);

// Compares two strings up to 'n' characters
int		bc_strncmp(const char *s1, const char *s2, size_t n);

// Compares two full null-terminated strings
int		bc_strcmp(const char *s1, const char *s2);

// Returns a duplicated string starting after the first occurrence of 'c'
char	*bc_strchr_fo(const char *s, char c);

// Returns a duplicated string starting from the first occurrence of 'c'
char	*bc_strchr_fo_rv(const char *s, char c);

// Duplicates the given string (allocates memory and copies it)
char	*bc_strdup(const char *s1);

// Copies up to 'n' characters from 'src' to 'dest'
void	bc_strncpy(char *dest, char *src, unsigned int n);

// Splits 'str' into an array of strings using characters in 'charset' as delimiters
char	**bc_split(char *str, char *charset);

// Replaces characters in 's' found in 'src' with corresponding characters from 'dst'
// Uses '*k' as an index tracker thats hold the last postion of the string you changed
char	*bc_replace_char(char *s, char *dst, char *src, int *k);

#endif
