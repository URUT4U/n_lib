/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_lstsize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:34:17 by nranna            #+#    #+#             */
/*   Updated: 2024/10/16 16:45:12 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liber.h"

int	n_lstsize(t_list *lst)
{
	int		count;
	t_list	*lst_i;
	
	if (!lst)
		return (0);
	count = 0;
	lst_i = lst;
	while (lst_i)
	{
		count++;
		lst_i = lst_i->next;
	}
	return (count);
}
