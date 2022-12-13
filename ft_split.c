/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adricima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:08:14 by adricima          #+#    #+#             */
/*   Updated: 2022/11/28 16:08:17 by adricima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		ii;
	int		lensub;

	res = (char **)malloc(sizeof(char *) * (ft_strlen((char *)s) / 2) + 8);
	if (!res)
		return (NULL);
	res[0] = NULL;
	i = 0;
	ii = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		lensub = i;
		while (s[lensub] != c && s[lensub])
			lensub++;
		lensub -= i;
		if (lensub)
			res[ii] = ft_substr(s, i, lensub);
		ii++;
		i += lensub;
	}
	return (res);
}
