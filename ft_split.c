/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 00:23:16 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/14 03:52:03 by aelaaser         ###   ########.fr       */
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

int	ft_get_keys(char const *s, char c)
{
	int	i;
	int	keys;

	if (!s || c == '\0' || ft_strlen(s) == 0)
		return (0);
	keys = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c || s[i + 1] == '\0')
			keys++;
		i++;
	}
	return (keys);
}

char	**ft_set_arr(char const *s, char c)
{
	int		key;
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
	int		i;
	int		key;
	size_t	start;
	size_t	strlen;

	i = 0;
	key = 0;
	start = 0;
	strlen = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (strlen == 0)
				start = i;
			strlen++;
		}
		if ((s[i] == c || s[i + 1] == '\0') && strlen > 0)
		{
			arr[key] = ft_substr(s, start, strlen);
			if (arr[key] == NULL)
				return (ft_free_ar(arr));
			strlen = 0;
			key++;
		}
		i++;
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
