/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liber.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:19:33 by nranna            #+#    #+#             */
/*   Updated: 2024/10/16 16:26:52 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBER_H
# define LIBER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif
