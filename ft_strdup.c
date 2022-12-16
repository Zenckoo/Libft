/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:37:11 by isitbon           #+#    #+#             */
/*   Updated: 2022/11/16 18:06:05 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (a == NULL)
		return (NULL);
	while (*s1)
	{
		a[i++] = *s1++;
	}
	a[i] = '\0';
	return (a);
}
