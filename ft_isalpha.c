#include "libft.h"

/**
 * @brief 
 * 
 * @param chr 
 * @return int 
 */
int	ft_isalpha(int chr)
{
	return (ft_isupper(chr) || ft_islower(chr));
}

// int	ft_isalpha(int chr)
// {
// 	return ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z'));
// }
