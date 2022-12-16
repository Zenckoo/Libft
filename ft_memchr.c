/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:16:21 by isitbon           #+#    #+#             */
/*   Updated: 2022/11/12 15:40:56 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	s2;

	i = 0;
	s2 = (unsigned char)c;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		if (s1[i] == s2)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}
