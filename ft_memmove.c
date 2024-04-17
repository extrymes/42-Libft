/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:54:27 by sabras            #+#    #+#             */
/*   Updated: 2024/04/17 16:58:26 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (const char *)src;
	if (s < d)
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main () {
// 	char	*str;
// 	char	*str2;
// 	char	*str3;

// 	str = strdup("Hell");
// 	str2 = strdup("Hell");
// 	str3 = strdup("World");
// 	puts(str);
// 	puts(str2);
// 	puts(str3);
// 	memmove(str, str3, 2);
// 	ft_memmove(str2, str3, 2);
// 	puts(str);
// 	puts(str2);
// 	puts(str3);
// 	return(0);
// }
