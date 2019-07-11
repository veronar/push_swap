/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:41:41 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/30 11:53:47 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;
	unsigned char	*cstr;

	i = 0;
	chr = (unsigned char)c;
	cstr = (unsigned char*)s;
	while (i < n)
	{
		if (cstr[i] == chr)
			return (cstr + i);
		i++;
	}
	return (NULL);
}
