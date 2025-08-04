#include "libft.h"

//19L
// /**
//  * @brief 
//  * 
//  * @param mem1 
//  * @param mem2 
//  * @param n_cmp 
//  * @return int 
//  */
// int	ft_memcmp(const void *mem1, const void *mem2, size_t n_cmp)
// {
// 	const unsigned char	*mem_box1;
// 	const unsigned char	*mem_box2;
// 	int					diff;
// 	size_t				i;

// 	mem_box1 = (const unsigned char *)mem1;
// 	mem_box2 = (const unsigned char *)mem2;
// 	diff = 0;
// 	i = 0;
// 	while (i < n_cmp)
// 	{
// 		if (mem_box1[i] != mem_box2[i])
// 		{
// 			diff = mem_box1[i] - mem_box2[i];
// 			break ;
// 		}
// 		i += 1;
// 	}
// 	return (diff);
// }

static int	_compare_uchar_strings_to_find_diff(\
	const char *str1, \
	const char *str2, \
	size_t n_cmp);

int	ft_memcmp(const void *mem1, const void *mem2, size_t n_cmp)
{
	int		diff;

	if (n_cmp == 0)
		return (0);
	diff = _compare_uchar_strings_to_find_diff(\
		(const char *)mem1, \
		(const char *)mem2, \
		n_cmp);
	return (diff);
}

static int	_compare_uchar_strings_to_find_diff(\
	const char *str1, \
	const char *str2, \
	size_t n_cmp)
{
	size_t	i;

	i = 0;
	while (i < n_cmp)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i += 1;
	}
	return (0);
}

//15L
// /**
//  * @brief 
//  * 
//  * @param mem1 
//  * @param mem2 
//  * @param n_cmp 
//  * @return int 
//  */
// int	ft_memcmp(const void *mem1, const void *mem2, size_t n_cmp)
// {
// 	const unsigned char	*mem_box1;
// 	const unsigned char	*mem_box2;
// 	int					diff;
// 	size_t				i;

// 	mem_box1 = (const unsigned char *)mem1;
// 	mem_box2 = (const unsigned char *)mem2;
// 	i = 0;
// 	while (i < n_cmp && mem_box1[i] == mem_box2[i])
// 		i += 1;
// 	if (i == n_cmp || !mem1 || !mem2)
// 		diff = 0;
// 	else
// 		diff = mem_box1[i] - mem_box2[i];
// 	return (diff);
// }

//12L
// /**
//  * @brief 
//  * 
//  * @param mem1 
//  * @param mem2 
//  * @param n_cmp 
//  * @return int 
//  */
// int	ft_memcmp(const void *mem1, const void *mem2, size_t n_cmp)
// {
// 	const unsigned char	*mem_box1;
// 	const unsigned char	*mem_box2;
// 	size_t				i;

// 	if (n_cmp == 0)
// 		return (0);
// 	mem_box1 = (const unsigned char *)mem1;
// 	mem_box2 = (const unsigned char *)mem2;
// 	i = 0;
// 	while (i < n_cmp - 1 && mem_box1[i] == mem_box2[i])
// 		i += 1;
// 	return (mem_box1[i] - mem_box2[i]);
// }
