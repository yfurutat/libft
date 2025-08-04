/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 04:22:38 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 04:22:47 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param node 
 * @param new_node 
 */
void	ft_lstadd_back(t_list **node, t_list *new_node)
{
	t_list	*last_node;

	if (node == NULL || new_node == NULL)
		return ;
	else if (*node == NULL)
		*node = new_node;
	else
	{
		last_node = ft_lstlast(*node);
		last_node->next = new_node;
	}
}
