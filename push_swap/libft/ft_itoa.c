/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:41:12 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/12 10:39:08 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_itoa_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*result;
	int		neg;
	int		sign;

	len = ft_itoa_len(n);
	neg = 0;
	sign = 1;
	if (!(result = (char*)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		neg = 1;
		sign = -1;
	}
	while (len > neg)
	{
		len--;
		result[len] = '0' + (n % 10) * sign;
		n = n / 10;
	}
	return (result);
}
