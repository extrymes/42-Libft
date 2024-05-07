/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 08:49:04 by sabras            #+#    #+#             */
/*   Updated: 2024/05/07 18:59:26 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	*str;
// 	char	*res;

// 	str = "This is the way";
// 	res = ft_strchr(str, 'h');
// 	printf("%p\n", res);
// 	res = strchr(str, 'h');
// 	printf("%p\n", res);
// 	return (0);
// }
