/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:18:17 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/04 23:26:10 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	end;

	if (str == NULL)
		return (NULL);
	end = ft_strlen(str);
	if (len == 0 || start >= end)
		return (ft_strdup(""));
	if (len > end - start)
		len = end - start;
	return (ft_strndup(&str[start], len));
}
		// return (ft_strndup("", 0));
