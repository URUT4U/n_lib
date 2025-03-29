/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_lstadd_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:30:59 by nranna            #+#    #+#             */
/*   Updated: 2024/10/16 16:33:51 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liber.h"

void	n_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
	return ;
}
