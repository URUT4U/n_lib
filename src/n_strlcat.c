/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:20:02 by nranna            #+#    #+#             */
/*   Updated: 2025/04/20 14:54:15 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

//THIS IS A TEST VERSION OF STRLCAT
size_t	n_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	counter;

	src_size = n_strlen(src);
	dst_size = n_strlen(dst);
	counter = 0;
	if (dst_size >= size)
		return (size + src_size);
	else if (dst_size < size)
	{
		while (src[counter] && (dst_size + counter + 1) < size)
		{
			dst[dst_size + counter] = src[counter];
			counter++;
		}
		return (dst_size + src_size);
	}
	return (src_size);
}
