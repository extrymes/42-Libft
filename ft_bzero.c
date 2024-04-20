/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:54:24 by sabras            #+#    #+#             */
/*   Updated: 2024/04/16 20:13:39 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str;

// 	str = strdup("Hello World");
// 	puts(str);
// 	ft_bzero(str, 5);
// 	puts(str);
// }