/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:02:14 by isitbon           #+#    #+#             */
/*   Updated: 2022/12/16 17:43:43 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (*s)
	{
		if (*s != c && t == 0)
		{
			t = 1;
			i++;
		}
		else if (*s == c)
			t = 0;
		s++;
	}
	return (i);
}

static char	**ft_free(char **tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(tab[i++]);
	free(tab);
	return (NULL);
}

char	*ft_duplicate(const char *s, int start, int end)
{
	char	*w;
	int		i;

	i = 0;
	w = malloc((end - start + 1) * sizeof(char));
	if (w == NULL)
		return (NULL);
	while (start < end)
		w[i++] = s[start++];
	w[i] = '\0';
	return (w);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	char	**s1;

	if (s)
		s1 = ft_calloc((ft_count(s, c) + 1), sizeof(char *));
	if (!s || !s1)
		return (NULL);
	i = -1;
	j = -1;
	k = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			s1[++j] = ft_duplicate(s, k, i);
			if (s1[j] == NULL)
				return (ft_free(s1, j));
			k = -1;
		}
	}
	return (s1);
}
