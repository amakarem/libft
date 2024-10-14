/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 00:23:16 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/14 06:34:51 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_ar(char	**arr)
{
	int	i;

	if (arr == NULL)
		return (NULL);
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

size_t	ft_get_keys(char const *s, char c)
{
	size_t	keys;

	if (!s || !*s || !c)
		return (0);
	keys = 0;
	while (*s)
	{
		if (*s == c || !*s + 1)
			keys++;
		s++;
	}
	return (keys);
}

char	**ft_set_arr(char const *s, char c)
{
	size_t	key;
	char	**arr;

	key = ft_get_keys(s, c);
	if (key == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (key + 1));
	if (arr == NULL)
		return (NULL);
	return (arr);
}

char	**ft_split_write(char const *s, char c, char **arr)
{
	int		key;
	size_t	strlen;

	key = 0;
	strlen = 0;
	while (*s)
	{
		if (*s == c && *s)
			s++;
		if (*s && *s != c)
		{
			if (!ft_strchr(s, c))
				strlen = ft_strlen(s);
			else
				strlen = ft_strchr(s, c) - s;
			arr[key] = ft_substr(s, 0, strlen);
			if (arr[key] == NULL)
				return (ft_free_ar(arr));
			key++;
			s = s + strlen;
		}
	}
	arr[key] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = ft_set_arr(s, c);
	if (arr == NULL)
		return (NULL);
	return (ft_split_write(s, c, arr));
}
