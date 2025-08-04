/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:34:39 by efmacm23          #+#    #+#             */
/*   Updated: 2025/07/13 15:35:11 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param mem 
 * @param num_bytes_to_set_zero 
 */
void	ft_bzero(void *mem, size_t num_bytes_to_set_zero)
{
	ft_memset(mem, 0, num_bytes_to_set_zero);
}
