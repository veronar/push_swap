/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:01:43 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/30 11:52:45 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*csrc;
	unsigned char	*cdest;

	i = len;
	csrc = (unsigned char*)src;
	cdest = (unsigned char*)dst;
	if (csrc == NULL && cdest == NULL)
		return (NULL);
	if (dst > src)
	{
		while (i > 0)
		{
			i--;
			cdest[i] = csrc[i];
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return ((void*)dst);
}
