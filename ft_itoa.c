/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adricima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:08:30 by adricima          #+#    #+#             */
/*   Updated: 2022/11/28 16:08:35 by adricima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa2(long int n, int len, int neg)
{
	char	*res;

	res = ft_calloc(len + 2, 1);
	if (!res)
		return (NULL);
	if (neg)
	{
		res[0] = '-';
		while (len > 0)
		{
			res[len] = (n % 10) + 48;
			n /= 10;
			len--;
		}
	}
	else
	{
		while (len >= 0)
		{
			res[len] = (n % 10) + 48;
			n /= 10;
			len--;
		}
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		neg;
	int		len;
	long	temp;

	neg = 0;
	temp = n;
	if (n == 0)
	{
		res = ft_calloc(2, 1);
		res[0] = '0';
	}
	else
	{
		len = ft_len(temp);
		if (n < 0)
		{
			neg = 1;
			temp *= -1;
			len++;
		}
		res = ft_itoa2(temp, len - 1, neg);
	}
	return (res);
}
