/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:01:43 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/30 11:52:12 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*csrc;
	char			*cdest;
	unsigned char	chr;

	chr = c;
	i = 0;
	csrc = (unsigned char*)src;
	cdest = (char*)dst;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == chr)
			return ((void*)dst + i + 1);
		i++;
	}
	return (NULL);
}
