/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 04:25:15 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 04:25:21 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param node 
 * @param f_del 
 */
// void	ft_lstdelone(t_list *node, void (*f_del)(void *))
// {
// 	if (node == NULL || f_del == NULL)
// 		return ;
// 	f_del(node->content);
// 	free(node);
// }
	// node = NULL;

void	ft_lstdelone(t_list *node, void (*f_del)(void *))
{
	if (node == NULL || f_del == NULL)
		return ;
	if (node->content)
		f_del(node->content);
	free(node);
}
