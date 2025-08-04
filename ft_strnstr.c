/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:25:06 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/04 23:25:32 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define FOUND 0

//13
/**
 * @brief 
 * 
 * @param str_l 
 * @param str_s 
 * @param n_look 
 * @return char* 
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (len < needle_len)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i <= len - needle_len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == FOUND)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *str_long, const char *str_short, size_t n_cmp)
// {
// 	size_t	len_s;

// 	len_s = ft_strlen(str_short);
// 	if (n_cmp == 0 || len_s == 0 || n_cmp > len_s)
// 		return ((char *)str_long);
// 	while (*str_long != '\0' && n_cmp > len_s - 1)
// 	{
// 		if ((ft_strncmp(str_long, str_short, len_s)) == FOUND)
// 			return ((char *)str_long);
// 		str_long += 1;
// 		n_cmp -= 1;
// 	}
// 	return (NULL);
// }

//9L
// char	*ft_strnstr(const char *str_l, const char *str_s, size_t n)
// {
// 	if (*str_s == '\0' || (str_l == NULL && n == 0))
// 		return ((char *)str_l);
// 	while (*str_l != '\0' && n-- > ft_strlen(str_s) - 1)
// 	{
// 		if (!(ft_strncmp(str_l, str_s, ft_strlen(str_s))))
// 			return ((char *)str_l);
// 		str_l++;
// 	}
// 	return (NULL);
// }
