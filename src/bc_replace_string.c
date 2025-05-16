/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bc_replace_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenzaho <abenzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:03:11 by abenzaho          #+#    #+#             */
/*   Updated: 2025/05/16 11:10:56 by abenzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bc_library.h"

char	*bc_replace_char(char *s, char *dst, char *src, int *k)
{
	int		len;
	char	*str;
	int		i;

	i = *k;
	if (!s || !dst)
		return (NULL);
	len = bc_strlen(s) + bc_strlen(src) - bc_strlen(dst) + 1;
	str = (char *)malloc(sizeof(char) * (len));
	if (!str)
		return (NULL);
	bc_strncpy(str, s, *k);
	bc_strncpy(str + *k, src, bc_strlen(src));
	*k = *k + bc_strlen(src);
	bc_strncpy(str + *k, s + i + bc_strlen(dst), len - *k);
	if (!bc_strlen(str))
		return (NULL);
	return (str);
}
