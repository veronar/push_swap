/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:51:03 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/31 11:19:45 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t	k;
	char	**ret;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (s == NULL || c == 0)
		return (NULL);
	if (!(ret = (char**)ft_memalloc(sizeof(char*) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			k = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			ret[x] = ft_strsub(s, k, (i - k));
			x++;
		}
	}
	return (ret);
}
