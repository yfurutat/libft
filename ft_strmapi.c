/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:02:21 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/05 04:50:44 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strieri, stmapi: unsigned int では無限ループする可能性がある 
static size_t	_iter_apply_fnc_to_str(char *new_str, const char *str, \
	size_t end, char (*fnc)(unsigned int, char));

//18L
/**
 * @brief 
 * 
 * @param str 
 * @param fnc 
 * @return char* 
 */
char	*ft_strmapi(char const *str, char (*fnc)(unsigned int, char))
{
	size_t	end;
	char	*new_str;

	if (str == NULL || fnc == NULL)
		return (NULL);
	end = ft_strlen(str);
	if (end > UINT_MAX)
		end = UINT_MAX;
	new_str = safer_malloc_for_str(end + 1);
	if (new_str != NULL)
		_iter_apply_fnc_to_str(new_str, str, end, fnc);
	return (new_str);
}
	// new_str = (char *)malloc(sizeof(char) * (end + 1));

static size_t	_iter_apply_fnc_to_str(char *new_str, const char *str, \
	size_t end, char (*fnc)(unsigned int, char))
{
	size_t	i;

	i = 0;
	while (i < end)
	{
		new_str[i] = fnc((unsigned int)i, str[i]);
		i += 1;
	}
	new_str[i] = '\0';
	return (i);
}

// char	*ft_strmapi(char const *str, char (*fnc)(unsigned int, char))
// {
// 	size_t	i;
// 	size_t	end;
// 	char	*new_str;

// 	if (str == NULL || fnc == NULL)
// 		return (NULL);
// 	end = ft_strlen(str);
// 	new_str = (char *)malloc(sizeof(char) * (end + 1));
// 	if (new_str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < end)
// 	{
// 		new_str[i] = fnc(i, str[i]);
// 		i += 1;
// 	}
// 	new_str[i] = '\0';
// 	return (new_str);
// }
	// while (str[i] != '\0')
	// unsigned int	i; // infinite loop
	// unsigned int	end; // infinite loop

// char	ft_toupper_p(unsigned int n, char chr);

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("hello", ft_toupper_p));
// }

// char	ft_toupper_p(unsigned int n, char chr)
// {
// 	if (chr >= 'a' && chr <= 'z')
// 		chr += ('A' - 'a');
// 	return (chr);
// }
