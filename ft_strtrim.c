/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:46:10 by isitbon           #+#    #+#             */
/*   Updated: 2022/12/10 21:50:43 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	i2;
	char	*s2;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	i2 = ft_strlen(s1);
	while (i2 > 0)
	{
		if (ft_strchr(set, s1[i2]) == 0)
			break ;
		i2--;
	}
	if (i2 == 0)
		return (ft_calloc(1, 1));
	s2 = malloc((i2 - i + 2) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, (s1 + i), (i2 - i + 2));
	return (s2);
}
