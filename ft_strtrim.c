/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adricima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:08:01 by adricima          #+#    #+#             */
/*   Updated: 2022/11/28 16:08:06 by adricima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	len;

	p = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		len = ft_strlen((char *)s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > i)
			len--;
		p = (char *)malloc(sizeof(char) * (len - i + 1));
		if (p)
			ft_strlcpy(p, &s1[i], len - i + 1);
	}
	return (p);
}
