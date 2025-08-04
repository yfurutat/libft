/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:43:49 by yuske             #+#    #+#             */
/*   Updated: 2025/08/04 23:22:12 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	_handle_negative(int nbr, int fd);

/**
 * @brief 
 * 	without return ;
 * 	affect other calls and repeat printing '-'
 *  can lead to UB (print unexpected character), too.
 * @param nbr 
 * @param fd 
 */
// 17L
void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0)
		_handle_negative(nbr, fd);
	else
	{
		if (nbr > 9)
			ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
}

// void	ft_putnbr_fd(int nbr, int fd)
// {
// 	if (nbr < 0)
// 	{
// 		_handle_negative(nbr, fd);
// 		return ;
// 	}
// 	if (nbr > 9)
// 		ft_putnbr_fd(nbr / 10, fd);
// 	ft_putchar_fd(nbr % 10 + '0', fd);
// }

void	_handle_negative(int nbr, int fd)
{
	if (nbr == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nbr * -1, fd);
	}
	return ;
}

// // 13L
// void	ft_putnbr_fd(int nbr, int fd)
// {
// 	if (nbr < 0)
// 	{
// 		if (nbr == INT_MIN)
// 		{
// 			ft_putstr_fd("-2147483648", fd);
// 			return ;
// 		}
// 		ft_putchar_fd('-', fd);
// 		nbr *= -1;
// 	}
// 	if (nbr > 9)
// 		ft_putnbr_fd(nbr / 10, fd);
// 	ft_putchar_fd(nbr % 10 + '0', fd);
// }

// void	ft_putnbr_fd(int nbr, int fd)
// {
// 	if (nbr == INT_MIN)
// 		ft_putstr_fd("-2147483648", fd);
// 	else
// 	{
// 		if (nbr < 0)
// 		{
// 			ft_putchar_fd('-', fd);
// 			nbr *= -1;
// 		}
// 		if (nbr > 9)
// 		{
// 			ft_putnbr_fd(nbr / 10, fd);
// 		}
// 		ft_putchar_fd(nbr % 10 + '0', fd);
// 	}
// }

// //malloced, but freed right after the output
// void	ft_putnbr_fd(int n, int fd)
// {
// 	char	*str;

// 	str = ft_itoa(n);
// 	ft_putstr_fd(str, fd);
// 	free (str);
// }

// static t_sign			check_sign_of_num(long long num);
// static size_t			_count_digits(unsigned long num_uc);
// static unsigned long	_determine_the_largest_divisor(size_t digits);
// static size_t			_proc_and_print(unsigned long nbr_cast_to_ul, \
// 	size_t digits, unsigned long divisor, int fd);

// //20L
// /**
//  * @brief 
//  * 
//  * @param nbr 
//  * @param fd 
//  */
// void	ft_putnbr_fd(int nbr, int fd)
// {
// 	unsigned long	nbr_cast_to_ul;
// 	unsigned long	divisor;
// 	size_t			digits;
// 	t_sign			sign;

// 	sign = check_sign_of_num((long long)nbr);
// 	nbr_cast_to_ul = (unsigned long)(nbr * sign);
// 	digits = _count_digits(nbr_cast_to_ul);
// 	divisor = _determine_the_largest_divisor(digits);
// 	if (sign == NEGATIVE)
// 		ft_putchar_fd('-', fd);
// 	_proc_and_print(nbr_cast_to_ul, digits, divisor, fd);
// }

// static size_t	_proc_and_print(unsigned long num, \
// 	size_t digits, unsigned long divisor, int fd)
// {
// 	while (digits)
// 	{
// 		ft_putchar_fd(num / divisor + '0', fd);
// 		num %= divisor;
// 		divisor /= 10;
// 		digits -= 1;
// 	}
// 	return (digits);
// }

// static t_sign	check_sign_of_num(long long num)
// {
// 	if (num < 0)
// 		return (NEGATIVE);
// 	else
// 		return (POSITIVE);
// }

// //11L
// /**
//  * @brief 
//  * 
//  * @param num_uc 
//  * @return size_t 
//  */
// static size_t	_count_digits(unsigned long num_uc)
// {
// 	size_t	digits;

// 	digits = 0;
// 	if (num_uc == 0)
// 		digits += 1;
// 	while (num_uc > 0)
// 	{
// 		num_uc /= 10;
// 		digits += 1;
// 	}
// 	return (digits);
// }

// //8L
// /**
//  * @brief 
//  * 
//  * @param divider 
//  * @param digits 
//  * @param i 
//  * @return unsigned long 
//  */
// static unsigned long	_determine_the_largest_divisor(size_t digits)
// {
// 	unsigned long	divisor;
// 	size_t			i;

// 	divisor = 1;
// 	i = 0;
// 	while (i + 1 < digits)
// 	{
// 		divisor *= 10;
// 		i += 1;
// 	}
// 	return (divisor);
// }
// 	// divisor = 1;
	// i = 0;

// #include <stdint.h>

// void	print_test()
// {
// 	// const size_t	table[] = {
// 	// 	sizeof(sizeof(int)), sizeof(size_t), sizeof(t_sign), 
// 	// 	sizeof(int), -123456, SIZE_MAX, SSIZE_MAX
// 	// };
// 	const int	table[] = {
// 		INT_MIN, INT_MAX, -12345, 12345, -123456
// 	};
// 	size_t		i;

// 	i = 0;
// 	// while (i < sizeof(table) / sizeof(size_t))
// 	while (i < sizeof(table) / sizeof(int))
// 	{
// 		ft_putchar_fd('\n', STDOUT_FILENO);
// 		ft_putnbr_fd(table[i], STDOUT_FILENO);
// 		i++;
// 	}
// 	ft_putchar_fd('\n', STDOUT_FILENO);
// 	ft_putchar_fd('a', STDOUT_FILENO);
// 	ft_putchar_fd('\n', STDOUT_FILENO);
// }

// int	main()
// {
// 	print_test();
// 	return 0;
// }
