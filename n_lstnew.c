/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_lstnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:23:12 by nranna            #+#    #+#             */
/*   Updated: 2024/10/16 16:29:50 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liber.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = NULL;
	if (!content)
		return (NULL);
	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
