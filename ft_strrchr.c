/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:25:35 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/04 23:25:46 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//5L
/**
 * @brief 
 * 
 * @param str 
 * @param chr 
 * @return char* 
 */
// char	*ft_strrchr(const char *str, int chr)
// {
// 	const char	*head;

// 	head = str;
// 	str += ft_strlen(str);
// 	// while ((unsigned char)*str != (unsigned char)chr && *str != *head)
// 	while ((unsigned char)*str != (unsigned char)chr && str != head)
// 		str -= 1;
// 	if ((unsigned char)*str == (unsigned char)chr)
// 		return ((char *)str);
// 	return (NULL);
// }

static char	*_iter_cmp_str_with_chr_rev(const char *head, const char *end, \
	unsigned char c);
// char	*_iter_cmp_str_with_chr(const unsigned char *str, unsigned char c);

char	*ft_strrchr(const char *str, int chr)
{
	// if (str == NULL)
	// 	return (NULL);
	return (_iter_cmp_str_with_chr_rev(str, str + ft_strlen(str), \
	(unsigned char)chr));
	// return (_iter_cmp_str_with_chr((const unsigned char *)str, \
	// 	(unsigned char)chr));
}

static char	*_iter_cmp_str_with_chr_rev(const char *head, const char *end, \
	unsigned char c)
// char	*_iter_cmp_str_with_chr(const unsigned char *str, unsigned char c)
{
	while ((unsigned char)*end != c && end != head)
		end--;
	if ((unsigned char)*end == c)
		return ((char *)end);
	return (NULL);
}
