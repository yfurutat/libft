/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:22:33 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/04 23:22:37 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// //5L
// /**
//  * @brief 
//  * 
//  * @param str 
//  * @param chr 
//  * @return char* 
//  */
// char	*ft_strchr(const char *str, int chr)
// {
// 	while (*str != (unsigned char)chr && *str != '\0')
// 		str += 1;
// 	if (*str == (unsigned char)chr)
// 		return ((char *)str);
// 	return (NULL);
// }

static char	*_iter_cmp_str_with_chr(const char *str, unsigned char c);
// char	*_iter_cmp_str_with_chr(const unsigned char *str, unsigned char c);

char	*ft_strchr(const char *str, int chr)
{
	// if (str == NULL)
	// 	return (NULL);
	return (_iter_cmp_str_with_chr(str, (unsigned char)chr));
	// return (_iter_cmp_str_with_chr((const unsigned char *)str, \
	// 	(unsigned char)chr));
}

static char	*_iter_cmp_str_with_chr(const char *str, unsigned char c)
// char	*_iter_cmp_str_with_chr(const unsigned char *str, unsigned char c)
{
	while ((unsigned char)*str != c && *str != '\0')
		str++;
	if ((unsigned char)*str == c)
		return ((char *)str);
	return (NULL);
}
