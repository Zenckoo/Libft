/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:42:07 by isitbon           #+#    #+#             */
/*   Updated: 2022/11/15 17:18:56 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == *needle)
		{
			i2 = 0;
			while (needle[i2] && haystack[i + i2] && i + i2 < len
				&& haystack[i + i2] == needle[i2])
				i2++;
			if (needle[i2] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
