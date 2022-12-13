/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adricima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:47:24 by adricima          #+#    #+#             */
/*   Updated: 2022/10/25 14:37:18 by adricima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lenght_dest;
	size_t	lenght_src;

	i = 0;
	lenght_dest = ft_strlen(dest);
	lenght_src = ft_strlen(src);
	j = lenght_dest;
	if (lenght_dest < size - 1 && size > 0)
	{
		while (src[i] && lenght_dest + i < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = 0;
	}
	if (lenght_dest >= size)
		lenght_dest = size;
	return (lenght_dest + lenght_src);
}
