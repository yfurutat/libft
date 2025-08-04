#include "libft.h"

/**
 * @brief 
 * 
 * @param str 
 * @param fd 
 */
void	ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}

// void	ft_putendl_fd(char *str, int fd)
// {
// 	size_t	len;

// 	if (str == NULL)
// 		return ;
// 	len = ft_strlen(str);
// 	write(fd, str, len);
// 	write(fd, "\n", 1);
// }
