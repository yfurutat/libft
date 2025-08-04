/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:02:26 by efmacm23          #+#    #+#             */
/*   Updated: 2025/07/27 18:02:54 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param chr 
 * @return int 
 */
int	ft_isalnum(int chr)
{
	return (ft_isalpha(chr) || ft_isdigit(chr));
}

// int	ft_isalnum(int chr)
// {
// 	return ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z')
// 		|| (chr >= '0' && chr <= '9'));
// }
