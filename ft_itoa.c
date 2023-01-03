/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:14:32 by isitbon           #+#    #+#             */
/*   Updated: 2022/12/17 17:50:12 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*s;
	long	j;

	j = n;
	i = ft_len(j);
	s = malloc((sizeof(char) * (i + 1)));
	if (!s)
		return (NULL);
	s[i--] = '\0';
	if (j == 0)
		s[0] = '0';
	if (j < 0)
	{
		s[0] = '-';
		j = -j;
	}
	while (j > 0)
	{
		s[i--] = (j % 10) + '0';
		j = j / 10;
	}
	return (s);
}
