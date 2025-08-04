/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:24:27 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/04 23:24:29 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the length of a null-terminated string.
 *
 * This function takes a pointer to a null-terminated string and
 * returns the number of characters preceding the null terminator.
 *
 * @param str Pointer to the string whose length is to be computed.
 * @return size_t The number of characters in the string (excluding the null terminator).
 */
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len += 1;
	return (len);
}
