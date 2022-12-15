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

	res = (char **)ft_calloc(8 * (ft_strlen((char *)s) / 2) + 8, 1);
	if (!res)
		return (NULL);
	res[0] = NULL;
	i = 0;
	ii = 0;
	while (s && s[i])
	{
		while (s && s[i] == c)
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

/*int		main(void)
{
	char	**prova;
	char	*s;

	s = "sssssdgg";
	prova = ft_split(s, ' ');

	printf("%s", prova[0]);
	printf("%s", "\n");
	printf("%s", prova[1]);
printf("%s", "\n");
	printf("%s", prova[2]);
printf("%s", "\n");
	printf("%s", prova[3]);
printf("%s", "\n");
	printf("%s", prova[4]);
printf("%s", "\n");
	printf("%s", prova[5]);
printf("%s", "\n");
	printf("%s", prova[6]);
	printf("%s", "\n");
}*/
