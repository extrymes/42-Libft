/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:54:27 by sabras            #+#    #+#             */
/*   Updated: 2024/05/15 23:24:54 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_dst;
	const char	*p_src;
	int			i;

	if (!dst && !src)
		return (NULL);
	p_dst = (char *)dst;
	p_src = (const char *)src;
	if (p_src >= p_dst)
	{
		i = -1;
		while (++i < (int)len)
			p_dst[i] = p_src[i];
	}
	else
	{
		i = len + 1;
		while (--i > 0)
			p_dst[i - 1] = p_src[i - 1];
	}
	return (dst);
}
