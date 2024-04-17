/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:16:27 by sabras            #+#    #+#             */
/*   Updated: 2024/04/17 15:35:54 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len-- > 0)
		*p++ = c;
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int main () {
// 	char	*str;
// 	char	*str2;

// 	str = strdup("Hello World");
// 	str2 = strdup("Hello World");
// 	puts(str);
// 	puts(str2);
// 	str = memset(str, '$', 5);
// 	str2 = ft_memset(str, '$', 5);
// 	puts(str);
// 	puts(str2);
// 	return(0);
// }
