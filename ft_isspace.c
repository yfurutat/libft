/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:06:41 by efmacm23          #+#    #+#             */
/*   Updated: 2025/07/27 18:06:45 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param chr 
 * @return int 
 */
int	ft_isspace(int chr)
{
	return (chr == ' ' || chr == '\t' || chr == '\n' \
		|| chr == '\f' || chr == '\v' || chr == '\r');
}

// int	ft_isspace(int chr)
// {
// 	return (chr == ' ' || (chr >= '\t' && chr <= '\r'));
// }
