/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:24:32 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/04 23:35:19 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// (dst != NULL, O)で crash しない 
static size_t	_iter_copy_src_to_dest(char *dest, const char *src, size_t end);

//1. 14L
/**
 * @brief 
 * 
 * @param dst 
 * @param src 
 * @param len_cpy 
 * @return size_t 
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t len_cpy)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	if (len_cpy == 0)
		return (len_src);
	_iter_copy_src_to_dest(dest, src, len_cpy);
	return (len_src);
}

static size_t	_iter_copy_src_to_dest(char *dest, const char *src, size_t end)
{
	size_t	i;

	i = 0;
	while (end > i + 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (i);
}

// size_t	ft_strlcpy(char *dest, const char *src, size_t len_cpy)
// {
// 	size_t	i;
// 	size_t	len_src;

// 	i = 0;
// 	len_src = ft_strlen(src);
// 	if (len_cpy > 0)
// 	{
// 		while (len_cpy > i + 1 && src[i] != '\0')
// 		{
// 			dest[i] = src[i];
// 			i += 1;
// 		}
// 		dest[i] = '\0';
// 	}
// 	return (len_src);
// }

// #include <stdio.h>
// #include <string.h>

// typedef struct s_strargs
// {
// 	char		*dest;
// 	const char	*src;
// 	size_t		len;
// }	t_strargs;

// void	test_strlcpy()
// {
// 	char buffer1[10] = {0};
// 	char buffer2[10] = {0};
// 	char buffer3[25] = {0};

// 	const t_strargs edge_cases[] = {
// 		// {NULL, NULL, 0},
// 		{ NULL, "NULL", 0 },
// 		{ "", "NULL", 0 },
// 		// { "1234", "NULL", 5 },
// 		{ buffer1, "NULL", 5 },
// 		{ buffer1, "Hello", sizeof(buffer1) },
// 		{ buffer2, "", sizeof(buffer2) },
// 		{ buffer1, "This is a long string", 5 }, // truncation case
// 		// { buffer1, "This is a long string", 15 }, // truncation case
// 		// { buffer1, "This is a long string", 21 }, // truncation case. abrt
// 		{ buffer3, "This is a long string", 21 }, // truncation case
// 		// { buffer1, "This is a long string", 22 }, // truncation case. abrt
// 		{ buffer2, "This is a long string", 22 }, // truncation case. abrt
// 	};

// 	const size_t num_cases = sizeof(edge_cases) / sizeof(edge_cases[0]);

// 	for (size_t i = 0; i < num_cases; ++i)
// 	{
// 		printf("Case %zu:\n", i);
// 		printf("  dest: \"%s\"\n", edge_cases[i].dest);
// 		printf("  src : \"%s\"\n", edge_cases[i].src);
// 		printf("  src : \"%zu\"\n", edge_cases[i].len);

// 		size_t ret = ft_strlcpy(edge_cases[i].dest, edge_cases[i].src, edge_cases[i].len);
// 		// size_t ret = strlcpy(edge_cases[i].dest, edge_cases[i].src, edge_cases[i].len);
// 		printf("  dest: \"%s\"\n", edge_cases[i].dest);
// 		printf("  returned: %zu\n\n", ret);
// 	}
// }

// // void	test_strlcpy()
// // {
// // 	const t_strargs	edge_lcpy = {

// // 	};

// // 	size_t	i = 0;
// // 	while (i < sizeof(edge_lcpy) / sizeof(t_strargs))
// // 	{
// // 		printf("%zu. %s\n", strlcpy(\
// // 			edge_lcpy[i].dest, edge_lcpy[i].src, edge_lcpy[i].len));
// // 		i++;
// // 	}
// // }

// int	main()
// {
// 	test_strlcpy();
// 	return 0;
// }
