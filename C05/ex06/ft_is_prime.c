/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:13:57 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/23 18:23:37 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
 	printf("is 1 prime? %d\n", ft_is_prime(1));
	printf("is 2 prime? %d\n", ft_is_prime(2));
	printf("is 3 prime? %d\n", ft_is_prime(3));
	printf("is 4 prime? %d\n", ft_is_prime(4));
	printf("is 5 prime? %d\n", ft_is_prime(5));
	printf("is 6 prime? %d\n", ft_is_prime(6));
	printf("is 7 prime? %d\n", ft_is_prime(7));
	printf("is 8 prime? %d\n", ft_is_prime(8));
	printf("is 9 prime? %d\n", ft_is_prime(9));
	printf("is 10 prime? %d\n", ft_is_prime(10));
	printf("is 11 prime? %d\n", ft_is_prime(11));
	printf("is 12 prime? %d\n", ft_is_prime(12));
	printf("is 13 prime? %d\n", ft_is_prime(13));
	printf("is 14 prime? %d\n", ft_is_prime(14));
	printf("is 15 prime? %d\n", ft_is_prime(15));
	printf("is 16 prime? %d\n", ft_is_prime(16)); 
	printf("is 17 prime? %d\n", ft_is_prime(17));
} */