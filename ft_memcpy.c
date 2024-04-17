/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:16:54 by sabras            #+#    #+#             */
/*   Updated: 2024/04/17 16:58:22 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main () {
// 	char	*str;
// 	char	*str2;
// 	char	*str3;

// 	str = strdup("Hello");
// 	str2 = strdup("Hello");
// 	str3 = strdup("World");
// 	puts(str);
// 	puts(str2);
// 	puts(str3);
// 	memcpy(str, str3, 3);
// 	ft_memcpy(str2, str3, 3);
// 	puts(str);
// 	puts(str2);
// 	puts(str3);
// 	return(0);
// }
