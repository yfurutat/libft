/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 04:23:00 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 04:25:02 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lstclear: del==NULL で freel) していないのでleak [ko] 

/**
 * @brief 
 * 
 * @param node 
 * @param f_del 
 */
// void	ft_lstclear(t_list **node, void (*f_del)(void *))
// {
// 	t_list	*tmp;

// 	if (node == NULL || f_del == NULL)
// 		return ;
// 	while (*node != NULL)
// 	{
// 		tmp = (*node)->next;
// 		ft_lstdelone(*node, f_del);
// 		(*node) = tmp;
// 	}
// }

void	ft_lstclear(t_list **node, void (*f_del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (node == NULL || *node == NULL || f_del == NULL)
		return ;
	current = *node;
	while (current != NULL)
	{
		next = current->next;
		f_del(current->content);
		free(current);
		current = next;
	}
	*node = NULL;
}
