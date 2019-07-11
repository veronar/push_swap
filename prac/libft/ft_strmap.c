/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:02:02 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/30 12:07:51 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*mem;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(mem = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		mem[i] = s[i];
		mem[i] = f(mem[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
