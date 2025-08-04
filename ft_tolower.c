#include "libft.h"

/**
 * @brief 
 * 
 * @param chr 
 * @return int 
 */
int	ft_tolower(int chr)
{
	if (ft_isupper(chr) != 0)
		chr -= ('A' - 'a');
	return (chr);
}

// int	ft_tolower(int chr)
// {
// 	return (chr - ('A' - 'a') * (ft_isupper(chr)));
// }

// int	ft_tolower(int chr)
// {
// 	return (chr - ('A' - 'a') * (chr >= 'A' && chr <= 'Z'));
// }

// int	ft_tolower(int chr)
// {
// 	if (chr >= 'a' && chr <= 'z')
// 		chr -= ('A' - 'a');
// 	return (chr);
// }
