/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakgun <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:36:36 by bakgun            #+#    #+#             */
/*   Updated: 2022/09/12 17:45:05 by bakgun           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	i = 2;
	n = nb;
	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	while (i * i <= n)
	{
		if (i * i == n)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d ", ft_sqrt(25));
}
*/