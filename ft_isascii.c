/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:04:20 by efmacm23          #+#    #+#             */
/*   Updated: 2025/07/27 18:04:28 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param chr 
 * @return int 
 */
int	ft_isascii(int chr)
{
	return (chr >= 0 && chr <= 127);
}

// // #include <locale.h>
// #include <stdio.h>

// 	// setlocale(LC_ALL, "");
// int	main(void)
// {
// 	int		chr;
// 	char	c;

// 	chr = 32;
// 	c = 32;
// 	while (chr < 127 || c < 127)
// 	{
// 		if (ft_isascii(chr))
// 		{
// 			printf("%c ", c);
// 			printf("%c ", chr);
// 		}
// 		c++;
// 		chr++;
// 	}
// 	return (0);
// }

// // int main() {
// //     setlocale(LC_ALL, "");
// //     for (char c = '!'; c <= '/'; c++) {
// //         printf("%c ", c);
// //     }
// //     printf("\n");
// //     return 0;
// // }
