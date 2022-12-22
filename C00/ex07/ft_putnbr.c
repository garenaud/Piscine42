/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:26:40 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/20 15:51:31 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(int n)
{
    write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '48');
	}
}

int main()
{
    ft_putnbr(4);
    return(0);
}