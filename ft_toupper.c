#include "libft.h"

/**
 * @brief 
 * 
 * @param chr 
 * @return int 
 */
int	ft_toupper(int chr)
{
	if (ft_islower(chr) != 0)
		chr += ('A' - 'a');
	return (chr);
}

// int	ft_toupper(int chr)
// {
// 	return (chr + ('A' - 'a') * (ft_islower(chr)));
// }

// int	ft_toupper(int chr)
// {
// 	return (chr + ('A' - 'a') * (chr >= 'a' && chr <= 'z'));
// }

// int	ft_toupper(int chr)
// {
// 	if (chr >= 'a' && chr <= 'z')
// 		chr += ('A' - 'a');
// 	return (chr);
// }
