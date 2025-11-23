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

char	*ft_substr(char const *str, unsigned int start, size_t len_for_sub)
{
	size_t	end_of_str;

	if (str == NULL)
		return (NULL);
	end_of_str = ft_strlen(str);
	if (len_for_sub == 0 || start >= end_of_str)
		return (ft_strdup(""));
	if (len_for_sub > end_of_str - start)
		len_for_sub = end_of_str - start;
	return (ft_strndup(&str[start], len_for_sub));
}
		// return (ft_strndup("", 0));
