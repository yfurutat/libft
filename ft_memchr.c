/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:07:48 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/04 23:20:18 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//10L
/**
 * @brief 
 * 
 * @param mem 
 * @param chr 
 * @param n 
 * @return void* 
 */
// void	*ft_memchr(const void *mem, int chr, size_t n)
// {
// 	const char	*mem_caster;
// 	// const unsigned char	*mem_caster;

// 	mem_caster = (const char *)mem;
// 	// mem_caster = (const unsigned char *)mem;
// 	while (n > 0)
// 	{
// 		// if ((const unsigned char)*mem_caster == (unsigned char)chr)
// 		if (*mem_caster == (unsigned char)chr)
// 			return ((void *)mem_caster);
// 		mem_caster += 1;
// 		n -= 1;
// 	}
// 	return (NULL);
// }
	// return ((void *)mem_caster);
void	*_iter_cmp_str_with_chr(const char *str, unsigned char c, \
	size_t n_cmp);
// void	*_iter_cmp_str_with_chr(const unsigned char *str, unsigned char c, \
// 	size_t n_cmp);

void	*ft_memchr(const void *mem, int chr, size_t n)
{
	return (_iter_cmp_str_with_chr((const char *)mem, \
		(unsigned char)chr, n));
	// return (_iter_cmp_str_with_chr((const unsigned char *)mem, \
	// 	(unsigned char)chr, n));
}

void	*_iter_cmp_str_with_chr(const char *str, unsigned char c, \
	size_t n_cmp)
// void	*_iter_cmp_str_with_chr(const unsigned char *str, unsigned char c, \
// 	size_t n_cmp)
{
	// if (str == NULL)
	// 	return (NULL);
	while (n_cmp)
	{
		// if ((const unsigned char)*str == c)
		if (*str == c)
			return ((void *)str);
		str++;
		n_cmp--;
	}
	return (NULL);
}

// void	*ft_memchr(const void *mem, int chr, size_t n)
// {
// 	const unsigned char	*mem_caster;
// 	size_t			i;

// 	i = 0;
// 	mem_caster = (const unsigned char *)mem;
// 	while (i < n)
// 	{
// 		if (mem_caster[i] == (unsigned char)chr)
// 			return ((char *)&mem_caster[i]);
// 		i += 1;
// 	}
// 	return (NULL);
// }
			// return ((void *)&mem_caster[i]);

// void *ft_memchr(const void *mem, int chr, size_t n)
// {
//     const unsigned char *mem_caster;
//     size_t i;

//     i = 0;
//     mem_caster = (const unsigned char *)mem;
//     while (i < n)
//     {
//         if (mem_caster[i] == (unsigned char)chr)
//             return ((char *)mem + i);
//         i += 1;
//     }
//     return (NULL);
// }
            // return ((void *)mem + i);
