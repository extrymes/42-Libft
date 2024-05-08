/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:09:52 by sabras            #+#    #+#             */
/*   Updated: 2024/05/08 01:24:00 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_find_start(const char *str, const char *set)
{
	size_t	i;

	i = 0;
	while (ft_in_set(str[i], set))
		i++;
	return (i);
}

static size_t	ft_find_end(const char *str, const char *set)
{
	size_t	i;

	i = ft_strlen(str) - 1;
	while (ft_in_set(str[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	str = malloc((end - start + 2) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
