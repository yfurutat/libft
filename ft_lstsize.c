/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 03:54:49 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 04:06:08 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief take a linked list as the parameter to determine its size
 * 		it's like the strlen() linked list edition.
 * @param node the pointer to the current node of the linked list
 * @return int the number of nodes actually counted
 */
int	ft_lstsize(t_list *node)
{
	int	cnt;

	cnt = 0;
	while (node != NULL)
	{
		node = node->next;
		cnt += 1;
	}
	return (cnt);
}
