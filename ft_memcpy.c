/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:20:43 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 01:12:47 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// //15L
// /**
//  * @brief 
//  * 
//  * @param dst 
//  * @param src 
//  * @param n 
//  * @return void* 
//  */
// void	*ft_memcpy(void *dst, const void *src, size_t num_bytes_to_copy)
// {
// 	size_t				i;
// 	unsigned char		*dst_bin;
// 	const unsigned char	*src_bin;

// 	if (dst == src || (src && !num_bytes_to_copy))
// 		return (dst);
// 	dst_bin = (unsigned char *)dst;
// 	src_bin = (const unsigned char *)src;
// 	i = 0;
// 	while (i < num_bytes_to_copy)
// 	{
// 		dst_bin[i] = src_bin[i];
// 		i += 1;
// 	}
// 	return (dst_bin);
// }
// 	// if (!dst && !src)

static size_t	_iter_memcpy(unsigned char *dest, \
	const unsigned char *src, size_t num_bytes_to_copy);

void	*ft_memcpy(void *dest, const void *src, size_t num_bytes_to_copy)
{
	if (dest == src || (src != NULL && num_bytes_to_copy == 0))
		return (dest);
	_iter_memcpy((unsigned char *)dest, \
	(const unsigned char *)src, num_bytes_to_copy);
	return (dest);
}

static size_t	_iter_memcpy(unsigned char *dest, \
	const unsigned char *src, size_t num_bytes_to_copy)
{
	size_t	i;

	i = 0;
	while (i < num_bytes_to_copy)
	{
		dest[i] = src[i];
		i += 1;
	}
	return (i);
}
