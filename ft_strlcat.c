/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:20:02 by nranna            #+#    #+#             */
/*   Updated: 2024/02/01 14:13:16 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//THIS IS A TEST VERSION OF STRLCAT
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	counter;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dst_size >= size)
		return (size + src_size);
	counter = 0;
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
