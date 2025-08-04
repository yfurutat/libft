/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efmacm23 <efmacm23@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:46:28 by efmacm23          #+#    #+#             */
/*   Updated: 2025/07/18 19:47:11 by efmacm23         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_count_words(const char *str, char delim);
static size_t	_proc_words(char const *str, char delim, \
	char **split_words, size_t num_words);
static bool		_free_null_dptr(char ***split_words);

// 12L
char	**ft_split(char const *str, char delim)
{
	char	**split_words;
	size_t	num_words;

	if (str == NULL)
		return (NULL);
	num_words = _count_words(str, delim);
	split_words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (split_words == NULL)
		return (NULL);
	if (_proc_words(str, delim, split_words, num_words) != num_words)
		_free_null_dptr(&split_words);
	return (split_words);
}

// 15L
static size_t	_count_words(const char *str, char delim)
{
	size_t	cnt;

	cnt = 0;
	while (*str != '\0')
	{
		if (*str != delim)
		{
			cnt++;
			while (*str != delim && *str != '\0')
				str++;
		}
		else
			str++;
	}
	return (cnt);
}

// 24L
static size_t	_proc_words(char const *str, char delim, \
	char **split_words, size_t num_words)
{
	size_t	start;
	size_t	len;
	size_t	i;

	start = 0;
	i = 0;
	while (i < num_words && str[start] != '\0')
	{
		if (str[start] != delim)
		{
			len = 0;
			while (str[start + len] != delim && str[start + len] != '\0')
				len++;
			split_words[i] = ft_substr(str, start, len);
			if (split_words[i] == NULL)
				return (i);
			i++;
			start += len;
		}
		else
			start++;
	}
	split_words[i] = NULL;
	return (i);
}

// 16L
static bool	_free_null_dptr(char ***split_words)
{
	size_t	i;

	if (split_words && *split_words)
	{
		i = 0;
		while ((*split_words)[i])
		{
			free((*split_words)[i]);
			(*split_words)[i] = NULL;
			i++;
		}
		free(*split_words);
		*split_words = NULL;
		return (true);
	}
	return (false);
}
