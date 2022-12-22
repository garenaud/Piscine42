/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:36:39 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/12 18:33:30 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}
/* 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 50;
	b = 7;
	ptra = &a;
	ptrb = &b;
	ft_ultimatum_div_mod(ptra, ptrb);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	return (0);
}
 */