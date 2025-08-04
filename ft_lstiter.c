/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 04:17:01 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 04:17:18 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param node 
 * @param fnc 
 */
void	ft_lstiter(t_list *node, void (*fnc)(void *))
{
	if (fnc == NULL || node == NULL)
		return ;
	while (node != NULL)
	{
		fnc(node->content);
		node = node->next;
	}
}
