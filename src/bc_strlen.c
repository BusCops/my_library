/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bc_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenzaho <abenzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:50:47 by abenzaho          #+#    #+#             */
/*   Updated: 2025/05/16 10:57:17 by abenzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bc_library.h"

size_t	bc_strlen(const char *string)
{
	size_t	len;

	len = 0;
	if (!string)
		return 0;
	while (string[len])
		len++;
	return (len);
}