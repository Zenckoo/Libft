/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:01:59 by isitbon           #+#    #+#             */
/*   Updated: 2022/11/10 00:05:55 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if (!dstsize)
	{
		return ((size_t)ft_strlen(src));
	}
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	i2 = i;
	while (src[i - i2] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i - i2];
		i++;
	}
	if (i2 < dstsize)
	{
		dst[i] = '\0';
	}
	return (i2 + ft_strlen(src));
}
