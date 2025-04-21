/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_strlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:54:50 by nranna            #+#    #+#             */
/*   Updated: 2025/04/20 14:53:44 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

size_t	n_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	if (size == 0)
		return (n_strlen(src));
	while (src[counter] && counter < (size - 1))
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (n_strlen(src));
}
