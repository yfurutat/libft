/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:11:52 by efmacm23          #+#    #+#             */
/*   Updated: 2025/08/04 23:29:15 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <ctype.h>

// #define OK (0)
// #define OVERFLOW (1)
// #define UNDERFLOW (-1)
// #define POSITIVE (1)
// #define NEGATIVE (-1)
#define INVAL_ARG (-1)

// static int		_skip_spaces(const char **str);
static size_t	_char_type_len(const char *str, int (*func)(int));
static t_sign	_check_sign_of_num_in_str_literal(const char **str);
static int		_convert_str_to_num(const char *str, int sign);
static bool		__isoverflow(t_sign sign, unsigned long digits2p, \
	unsigned long digit1);

int	ft_atoi(const char *from_ascii)
{
	t_sign	sign;
	int		to_integer;

	// _skip_spaces(&from_ascii);
	from_ascii += _char_type_len(from_ascii, ft_isspace);
	sign = _check_sign_of_num_in_str_literal(&from_ascii);
	to_integer = _convert_str_to_num(from_ascii, sign);
	return (to_integer);
}

// static int	_skip_spaces(const char **str)
// {
// 	const char	*head;

// 	if (!str || !*str || !**str)
// 		return (INVAL_ARG);
// 	if (!ft_isspace(**str))
// 		return (0);
// 	head = *str;
// 	while (ft_isspace(**str))
// 		(*str)++;
// 	return (*str - head);
// }

static size_t	_char_type_len(const char *str, int (*func)(int))
{
	size_t	len;

	if (str == NULL || func == NULL)
		return (0);
	len = 0;
	while (str[len] != '\0' && func((unsigned char)str[len]))
	{
		len++;
		// str++;
	}
	return (len);
}

static t_sign	_check_sign_of_num_in_str_literal(const char **str)
{
	t_sign	sign;

	sign = POSITIVE;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign *= NEGATIVE;
		(*str) += 1;
	}
	return (sign);
}

static int	_convert_str_to_num(const char *str, int sign)
{
	unsigned long	num;
	unsigned long	digit1;
	bool			flow;

	num = 0;
	while (ft_isdigit(*str))
	{
		digit1 = (*str - '0');
		flow = __isoverflow(sign, num, digit1);
		if (flow == true && sign == POSITIVE)
			return ((int)LONG_MAX);
		else if (flow == true && sign == NEGATIVE)
			return ((int)LONG_MIN);
		num = (num * 10) + digit1;
		str += 1;
	}
	return ((int)(num * sign));
}

static bool	__isoverflow(t_sign sign, unsigned long digits2p, \
	unsigned long digit1)
{
	if (sign == POSITIVE)
	{
		return (digits2p > ((unsigned long)LONG_MAX - digit1) / 10);
			// return (OVERFLOW);
	}
	else if (sign == NEGATIVE)
	{
		return (digits2p > ((unsigned long)LONG_MAX + 1UL - digit1) / 10);
			// return (UNDERFLOW);
	}
	return (false);
}
// else if (sign == NEGATIVE \
// 	&& (digits2p > (unsigned long)(-(LONG_MIN + digit1)) / 10))
