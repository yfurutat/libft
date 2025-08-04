
#include "libft.h"

// 13L
/**
 * @brief 
 * 
 * @param num 
 * @param size 
 * @return void* 
 */
void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	if (num > SIZE_MAX / size)
	{
		errno = EOVERFLOW;
		return (NULL);
	}
	mem = malloc(num * size);
	if (mem == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(mem, num * size);
	return (mem);
}
	// printf(" num:   %zu \n size:  %zu \n SZMAX: %zu\n", num, size, SIZE_MAX);
		// ft_calloc(1, 1);
		// return (NULL);

char	*safer_malloc_for_str(size_t len)
{
	char	*buf;

	if (len > (SIZE_MAX / sizeof(char)) - 1)
	{
		errno = EOVERFLOW;
		return (NULL);
	}
	buf = (char *)malloc(sizeof(char) * len);
	if (buf == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	return (buf);
}

// #include "libft.h"
// #include <stdlib.h>
// #include <errno.h>

// bool	check_overflow(size_t count, size_t size)
// {
// 	return (count != 0 && (SIZE_MAX / count) < size);
// }

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*ptr;
// 	size_t	total_size;

// 	if (check_overflow(count, size))
// 	{
// 		errno = EOVERFLOW;
// 		return (NULL);
// 	}
// 	total_size = count * size;
// 	ptr = malloc(total_size);
// 	if (!ptr)
// 	{
// 		errno = ENOMEM;
// 		return (NULL);
// 	}
// 	ft_memset(ptr, 0, total_size);
// 	return (ptr);
// }

// #include <malloc/malloc.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	void	*ptr;

// 	// ptr = malloc(INT_MIN); // fails
// 	// ptr = calloc(INT_MIN, INT_MIN); // fails
// 	// ptr = calloc(0, INT_MIN); // (1, 1)
// 	ptr = ft_calloc(INT_MIN, INT_MIN); // (1, 1)
// 	if (!ptr)
// 	{
// 		printf("malloc failed\n");
// 		printf("errno: %d %s\n", errno, strerror(errno));
// 	}
// 	else if (ptr)
// 	{
// 		printf("Allocated bytes: %zu\n", malloc_size(ptr));
// 		free(ptr);
// 		printf("errno: %d\n", errno);
// 	}
// 	return 0;
// }
