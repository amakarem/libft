/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:50:54 by aelaaser          #+#    #+#             */
/*   Updated: 2024/10/09 16:10:06 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;

	x = ft_strlen(dst);
	y = 0;
	while (src[y] != '\0' && y < dstsize)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[y] = '\0';
	return (x);
}
