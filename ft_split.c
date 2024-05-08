/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:24:42 by sabras            #+#    #+#             */
/*   Updated: 2024/05/08 02:11:05 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_strs(const char *str, char sep)
{
	size_t	strs_count;
	size_t	in_str;
	size_t	i;

	strs_count = 0;
	in_str = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != sep && !in_str)
		{
			strs_count++;
			in_str = 1;
		}
		else if (str[i] == sep)
			in_str = 0;
		i++;
	}
	return (strs_count);
}

void	ft_insert_str(char **tab, const char *str, size_t len, size_t idx)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		tab[idx][i] = str[i];
		i++;
	}
	tab[idx][i] = '\0';
}

int	ft_insert_tabs(char	**tab, const char *str, char sep)
{
	size_t	i;
	size_t	j;
	size_t	idx;

	i = 0;
	idx = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] != sep)
		{
			j = 0;
			while (str[i + j] && str[i + j] != sep)
				j++;
			tab[idx] = malloc((j + 1) * sizeof(char));
			if (!tab[idx])
				return (0);
			ft_insert_str(tab, str + i, j, idx++);
			i += j;
		}
		i++;
	}
	tab[idx] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;

	tab = malloc((ft_count_strs(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	if (!ft_insert_tabs(tab, s, c))
		return (NULL);
	return (tab);
}
