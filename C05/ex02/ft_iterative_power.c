/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:06:52 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/22 12:36:15 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
	{
		return (0);
	}
	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/* 
int	main(void)
{
	printf("3 puissance 8 = %d", ft_iterative_power(3, 8));
} */
