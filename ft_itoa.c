/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:35:29 by yuske             #+#    #+#             */
/*   Updated: 2025/08/05 04:54:11 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_sign	_check_sign_of_num(long long num);
static size_t	_count_digits(unsigned long num_cast_to_ul, int sign);
static void		_convert_int_to_ascii(unsigned long num, char *str, \
	size_t digits, t_sign sign);

//14L
/**
 * @brief 
 * 
 * @param from_integer 
 * @return char* 
 */
char	*ft_itoa(int from_integer)
{
	char			*to_ascii;
	unsigned long	num_cast_to_ul;
	size_t			digits;
	t_sign			sign;

	sign = _check_sign_of_num((long long)from_integer);
	num_cast_to_ul = (unsigned long)((long)from_integer * (long)sign);
	digits = _count_digits(num_cast_to_ul, sign);
	to_ascii = safer_malloc_for_str(digits + 1);
	// to_ascii = (char *)ft_calloc((digits + 1), sizeof(char));
	if (to_ascii != NULL)
		_convert_int_to_ascii(num_cast_to_ul, to_ascii, digits, sign);
	return (to_ascii);
}

static t_sign	_check_sign_of_num(long long num)
{
	if (num < 0)
		return (NEGATIVE);
	else
		return (POSITIVE);
}

//13L
/**
 * @brief 
 * 
 * @param num_uc 
 * @param sign 
 * @return size_t 
 */
static size_t	_count_digits(unsigned long num_cast_to_ul, int sign)
{
	size_t	digits;

	if (num_cast_to_ul == 0)
		return (1);
	digits = 0;
	if (sign == NEGATIVE)
		digits += 1;
	while (num_cast_to_ul > 0)
	{
		num_cast_to_ul /= 10;
		digits += 1;
	}
	return (digits);
}

//8L
/**
 * @brief 
 * 
 * @param from_i 
 * @param to_a 
 * @param digits 
 * @param sign 
 */
static void	_convert_int_to_ascii(unsigned long num, char *str, \
	size_t i, int sign)
{
	str[i] = '\0';
	while (i > 0)
	{
		i -= 1;
		str[i] = num % 10 + '0';
		num /= 10;
	}
	if (sign == NEGATIVE && i == 0)
		str[i] = '-';
}
