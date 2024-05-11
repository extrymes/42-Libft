/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:04:35 by sabras            #+#    #+#             */
/*   Updated: 2024/05/11 23:43:21 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min_size(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	size;
	size_t	i;

	if (dstsize != 0)
	{
		size = ft_min_size(dstsize, ft_strlen(src) + 1);
		i = 0;
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
