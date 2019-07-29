/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:17:40 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/30 11:49:44 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	chr;
	size_t			i;
	char			*ptr;

	ptr = b;
	chr = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		*ptr++ = chr;
		i++;
	}
	return (b);
}
