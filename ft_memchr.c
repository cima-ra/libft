/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adricima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:41:40 by adricima          #+#    #+#             */
/*   Updated: 2022/11/07 16:54:35 by adricima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*p;
	unsigned char	*is;

	p = (unsigned char *) s;
	is = NULL;
	if (!s && !c && !n)
		return (NULL);
	while ((s != NULL) && (n--))
	{
		if (*p != (unsigned char)c)
		{
			p++;
		}
		else
		{
			is = p;
			break ;
		}
	}
	return (is);
}
