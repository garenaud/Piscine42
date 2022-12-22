/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:27:29 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/23 13:18:42 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power < 1)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/* 

int	main(void)
{
	printf("3 puissance 8 = %d", ft_recursive_power(3, 8));
}
 */