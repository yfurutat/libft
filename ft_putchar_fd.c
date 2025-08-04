/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:33:31 by efmacm23          #+#    #+#             */
/*   Updated: 2025/07/26 15:33:38 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param c 
 * @param fd 
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <unistd.h> // write()
// #include <errno.h> // errno is automatically set in case of failure

// ssize_t	ft_putchar_fd(char c, int fd)
// {
// 	return (write(fd, &c, 1));
// }

// ssize_t	ft_putchar_fd(char c, int fd)
// {
// 	#define EINV_ARG (-2);

// 	if (fd < 0)
// 		return (EINV_ARG);
// 	return (write(fd, &c, 1));
// }
