/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:05:06 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/12 16:02:47 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/* 
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 24;
	num2 = 42;
	printf("%d, %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("%d, %d\n", num1, num2);
	return (0);
}
 */