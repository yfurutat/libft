/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:12:25 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 01:21:02 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_compare_strings_to_find_diff(const char *str1, \
	const char *str2, size_t num_cmp);

int	ft_strncmp(const char *str1, const char *str2, size_t num_cmp)
{
	int	diff;

	if (num_cmp == 0 || str1 == NULL || str2 == NULL)
	// if (num_cmp == 0)
		return (0);
	diff = _compare_strings_to_find_diff((const char *)str1, \
		(const char *)str2, num_cmp);
	return (diff);
}

static int	_compare_strings_to_find_diff(const char *str1, \
	const char *str2, size_t num_cmp)
{
	size_t	i;

	i = 0;
	while (i < num_cmp)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i] \
			|| str1[i] == '\0' || str2[i] == '\0')
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i += 1;
	}
	return (0);
}

//19L
/**
 * @brief 
 * 
 * @param str1 
 * @param str2 
 * @param n_cmp 
 * @return int 
 */
// int	ft_strncmp(const char *str1, const char *str2, size_t n_cmp)
// {
// 	const unsigned char	*str1_u;
// 	const unsigned char	*str2_u;
// 	int					diff;
// 	size_t				i;

// 	str1_u = (const unsigned char *)str1;
// 	str2_u = (const unsigned char *)str2;
// 	diff = 0;
// 	i = 0;
// 	while (i < n_cmp)
// 	{
// 		if (str1_u[i] == '\0' || str2_u[i] == '\0' || str1_u[i] != str2_u[i])
// 		{
// 			diff = str1_u[i] - str2_u[i];
// 			break ;
// 		}
// 		i += 1;
// 	}
// 	return (diff);
// }

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;

// 	if (n == 0)
// 		return (0);
// 	i = 0;
// 	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
// 		i++;
// 	if (i == n)
// 		return (0);
// 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// }

// #include <stddef.h>

// bool	_chars_differ(const unsigned char chr1, const unsigned char chr2)
// {
// 	return (chr1 != chr2);
// }

// // bool	_is_end_of_str_at(const unsigned char *str, size_t i)
// // {
// // 	return (str != NULL && str[i] == '\0');
// // }

//8L
// int	ft_strncmp(const char *str_a, const char *str_b, size_t n_cmp)
// {
// 	while (n_cmp-- > 0)
// 	{
// 		if (*str_a == '\0' || *str_b == '\0' || *str_a != *str_b)
// 			return ((unsigned char)*str_a - (unsigned char)*str_b);
// 		str_a++;
// 		str_b++;
// 	}
// 	return (0);
// }
