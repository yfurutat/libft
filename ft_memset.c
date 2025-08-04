/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:32:56 by efmacm23          #+#    #+#             */
/*   Updated: 2025/07/26 22:33:00 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	iter_fill_str_with_chr_by_n(unsigned char *str, unsigned char c, \
	size_t n);

void	*ft_memset(void *mem, int chr, size_t num_bytes_to_set_chr)
{
	iter_fill_str_with_chr_by_n((unsigned char *)mem, (unsigned char)chr, \
		num_bytes_to_set_chr);
	return (mem);
}

size_t	iter_fill_str_with_chr_by_n(unsigned char *str, \
	unsigned char c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		str[i] = c;
		i += 1;
	}
	return (i);
}
