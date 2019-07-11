/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:32:17 by vesingh           #+#    #+#             */
/*   Updated: 2019/05/27 14:40:42 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	min;
	int	max;
	int	len;

	min = 0;
	if (s == NULL)
		return (NULL);
	while (s[min] != '\0' &&
			(s[min] == ' ' || s[min] == '\t' || s[min] == '\n'))
		min++;
	max = ft_strlen(s);
	while (min < max &&
			(s[max - 1] == ' ' || s[max - 1] == '\t' || s[max - 1] == '\n'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len));
}
