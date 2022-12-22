/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:29:54 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/23 18:33:51 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	i = 1;
	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i < nb + 1)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
/* 
int	main(void)
{
	int res, exp;

	res = ft_iterative_factorial(4), exp = 24;
	printf("4! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(0), exp = 1;
	printf("0! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(1), exp = 1;
	printf("1! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(10), exp = 3628800;
	printf("10! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(12), exp = 479001600;
	printf("12! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(13), exp = 1932053504;
	printf("13! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(-2), exp = 0;
	printf("-2! (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_factorial(1000), exp = 0;
	printf("1000! (%d vs %d) -> %d\n", res, exp, res == exp);
}
 */