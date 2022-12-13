/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adricima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:22:43 by adricima          #+#    #+#             */
/*   Updated: 2022/10/18 14:44:10 by adricima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t	i;
	char	*c1;
	char	*c2;

	c1 = (char *)dest;
	c2 = (char *)src;
	i = 0;
	if (!c1 && !c2)
		return (NULL);
	while (i < count)
	{
		c1[i] = c2[i];
		i++;
	}
	return (dest);
}
