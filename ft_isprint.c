/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:06:24 by efmacm23          #+#    #+#             */
/*   Updated: 2025/07/27 18:06:28 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param chr 
 * @return int 
 */
int	ft_isprint(int chr)
{
	return (chr >= ' ' && chr <= '~');
}

// #include <locale.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int		chr;
// 	char	c;

// 	chr = 0;
// 	c = 0;
// 	// setlocale(LC_ALL, "");
// 	while (chr < 127 || c < 127)
// 	{
// 		if (ft_isprint(chr))
// 		{
// 			printf("%c ", c);
// 			printf("%c ", chr);
// 		}
// 		c++;
// 		chr++;
// 	}
// 	return (0);
// }
