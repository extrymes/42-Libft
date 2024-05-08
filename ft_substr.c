/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:11:00 by sabras            #+#    #+#             */
/*   Updated: 2024/05/08 00:14:37 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i + 1 < len && s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
