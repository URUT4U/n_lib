/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_putchar_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:10:23 by nranna            #+#    #+#             */
/*   Updated: 2025/04/19 21:38:03 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	n_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ((void)0);
}
