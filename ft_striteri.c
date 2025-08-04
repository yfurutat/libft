/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:02:16 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/04 18:02:18 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strieri, stmapi: unsigned int では無限ループする可能性がある 
static size_t	_iter_apply_fnc_to_str(char *str, \
	void (*fnc)(unsigned int, char *));

//10L
/**
 * @brief 
 * 
 * @param str 
 * @param fnc 
 */
void	ft_striteri(char *str, void (*fnc)(unsigned int, char*))
{
	if (str == NULL || fnc == NULL)
		return ;
	_iter_apply_fnc_to_str(str, fnc);
}

static size_t	_iter_apply_fnc_to_str(char *str, \
	void (*fnc)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && i < UINT_MAX)
	{
		fnc((unsigned int)i, &str[i]);
		i += 1;
	}
	return (i);
}

// void	ft_striteri(char *str, void (*fnc)(unsigned int, char*))
// {
// 	// unsigned int	i;
// 	size_t	i;

// 	if (str == NULL || fnc == NULL)
// 		return ;
// 	i = 0;
// 	while (str[i] != '\0' && i < UINT_MAX)
// 	{
// 		fnc((unsigned int)i, &str[i]);
// 		i += 1;
// 	}
// }

// void	ft_toupper_p(unsigned int n, char *str)
// {
// 	if (*str >= 'a' && *str <= 'z')
// 		*str += ('A' - 'a');
// }

// int	main(void)
// {
// 	char	str[] = "abcdefghijklmno";

// 	ft_striteri(str, ft_toupper_p);
// 	printf("%s\n", str);
// 	return (0);
// }
