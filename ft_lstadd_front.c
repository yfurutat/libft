/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 04:18:46 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 04:20:12 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param node 
 * @param new_node 
 */
void	ft_lstadd_front(t_list **node, t_list *new_node)
{
	if (node == NULL || new_node == NULL)
		return ;
	else
	{
		new_node->next = *node;
		*node = new_node;
		return ;
	}
}
