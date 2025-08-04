/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:23:57 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 04:50:02 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//18L
/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @return char* 
 */
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*nu_str;
// 	size_t	i;
// 	size_t	j;

// 	if (!s1 || !s2)
// 		return (NULL);
// 	nu_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
// 	if (!nu_str)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s1[j])
// 		nu_str[i++] = s1[j++];
// 	j = 0;
// 	while (s2[j])
// 		nu_str[i++] = s2[j++];
// 	nu_str[i] = '\0';
// 	return (nu_str);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = safer_malloc_for_str(len_s1 + len_s2 + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, len_s1 + 1);
	ft_strlcat(new_str, s2, len_s1 + len_s2 + 1);
	return (new_str);
}
	// nu_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
