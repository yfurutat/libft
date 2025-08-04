/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:21:28 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 01:13:11 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// //20L
// /**
//  * @brief 
//  * 
//  * @param dst 
//  * @param src 
//  * @param n 
//  * @return void* 
//  */
// void	*ft_memmove(void *dst, const void *src, size_t n)
// {
// 	unsigned char		*dst_bin;
// 	const unsigned char	*src_bin;

// 	if (dst == src)
// 		return (NULL);
// 	dst_bin = (unsigned char *)dst;
// 	src_bin = (const unsigned char *)src;
// 	if (n == 0)
// 		return (dst);
// 	else if (dst > src)
// 	{
// 		while (n > 0)
// 		{
// 			n -= 1;
// 			dst_bin[n] = src_bin[n];
// 		}
// 	}
// 	else
// 		dst = ft_memcpy(dst, src, n);
// 	return (dst);
// }
// 	// if (dst == NULL && src == NULL)
// 		// ft_memcpy(dst, src, n);

static size_t	_iter_memcpy(unsigned char *dest, \
	const unsigned char *src, size_t num_bytes_to_copy);
static size_t	_iter_memcpy_rev(unsigned char *dest, \
	const unsigned char *src, size_t num_bytes_to_copy);

void	*ft_memmove(void *dest, const void *src, size_t num_cpy)
{
	if (dest == src || (src != NULL && num_cpy == 0))
		return (dest);
	else if (dest > src)
	{
		_iter_memcpy_rev((unsigned char *)dest, \
		(const unsigned char *)src, num_cpy);
	}
	else
	{
		_iter_memcpy((unsigned char *)dest, \
		(const unsigned char *)src, num_cpy);
	}
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

static size_t	_iter_memcpy_rev(unsigned char *dest, \
	const unsigned char *src, size_t len)
{
	while (len > 0)
	{
		len -= 1;
		dest[len] = src[len];
	}
	return (len);
}
