/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:36:07 by sabras            #+#    #+#             */
/*   Updated: 2024/05/09 14:58:51 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = ft_strlen(s);
	while (i >= 0 && s[i] != c)
		i--;
	if (i >= 0)
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
// 	res = ft_strrchr(str, '\0');
// 	printf("%p\n", res);
// 	res = strrchr(str, '\0');
// 	printf("%p\n", res);
// 	return (0);
// }
