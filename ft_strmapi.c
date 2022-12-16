/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:40:02 by isitbon           #+#    #+#             */
/*   Updated: 2022/12/15 16:57:22 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	l;
	char	*s1;

	i = 0;
	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (l + 1));
	if (!s1)
		return (NULL);
	while (i < l)
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
