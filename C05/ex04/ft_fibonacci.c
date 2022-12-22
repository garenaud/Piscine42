/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:41:34 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/23 13:19:01 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/* 
int	main(void)
{
	printf("%d \n", ft_fibonacci(0));
	printf("%d \n", ft_fibonacci(1));
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(3));
	printf("%d \n", ft_fibonacci(4));
	printf("%d \n", ft_fibonacci(5));
	printf("%d \n", ft_fibonacci(6));
	printf("%d \n", ft_fibonacci(7));
	printf("%d \n", ft_fibonacci(8));
	printf("%d \n", ft_fibonacci(9));
	printf("%d \n", ft_fibonacci(10));
}
 */