/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:20:06 by vesingh           #+#    #+#             */
/*   Updated: 2019/06/07 13:36:48 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*mem;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((!(mem = ft_strnew(len))) || (start > (ft_strlen(s) - 1)))
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		mem[i] = s[start];
		start++;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
