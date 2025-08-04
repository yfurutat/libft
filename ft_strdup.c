/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:23:29 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 02:49:36 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strdup(const char *str)
// {
// 	char	*dup;
// 	size_t	len;

// 	len = ft_strlen(str) + 1;
// 	dup = malloc(sizeof(char) * len);
// 	if (dup != NULL)
// 		ft_strlcpy(dup, str, len);
// 	return (dup);
// }

//14L
/**
 * @brief 
 * 
 * @param str 
 * @return char* 
 */
// char	*ft_strdup(const char *str)
// {
// 	char	*dup;
// 	size_t	i;

// 	dup = malloc(sizeof(char) * ft_strlen(str) + 1);
// 	if (!dup)
// 		return (NULL);
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		dup[i] = str[i];
// 		i += 1;
// 	}
// 	dup[i] = '\0';
// 	return (dup);
// }

// #include <errno.h>

// char	*ft_strdup(const char *s1)
// {
// 	char	*ptr;
// 	char	*save;

// 	ptr = (char *)malloc(ft_strlen(s1) + 1);
// 	if (!ptr)
// 	{
// 		errno = ENOMEM;
// 		return (NULL);
// 	}
// 	save = ptr;
// 	while (*s1)
// 		*ptr++ = *s1++;
// 	*ptr = 0;
// 	return (save);
// }


// char	*ft_strndup(const char *str, size_t n)
// {
// 	char	*dup;

// 	dup = malloc(sizeof(char) * n);
// 	if (dup != NULL)
// 		dup = ft_strncpy(dup, str, n);
// 	return (dup);
// }

// char	*ft_strndup(const char *str, size_t n)
// {
// 	char	*dup;

// 	dup = malloc(sizeof(char) * n);
// 	if (dup != NULL)
// 		ft_strlcpy(dup, str, n);
// 	return (dup);
// }

static size_t	_iter_copy_src_to_dest(char *dest, \
	const char *src, size_t end);

char	*ft_strdup(const char *str)
{
	return (ft_strndup(str, ft_strlen(str)));
}

char	*ft_strndup(const char *str, size_t n)
{
	char	*dup;

	dup = safer_malloc_for_str(n + 1);
	if (dup != NULL)
		_iter_copy_src_to_dest(dup, str, n + 1);
	return (dup);
}
	// dup = (char *)malloc(sizeof(char) * (n + 1));

static size_t	_iter_copy_src_to_dest(char *dest, const char *src, size_t end)
{
	size_t	i;

	i = 0;
	while (i + 1 < end && src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (i);
}

// int	main()
// {
// 	char	*str1;
// 	char	*str2;

// 	// str1 = strdup(NULL);
// 	// str2 = ft_strdup(NULL);
// 	str1 = strndup("hello", 0);
// 	str2 = ft_strndup("hello", 0);
// 	printf("strdup: ");
// 	printf("%s\n", str1);
// 	printf("ft_strdup: ");
// 	printf("%s\n", str2);
// 	free(str1);
// 	free(str2);
// 	return 0;
// }
