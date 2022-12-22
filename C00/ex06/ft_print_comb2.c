/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:38:08 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/14 18:42:37 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(int n)
{
    write(1, &n, 1);
}

void    ft_putnbr(int nb)
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
        ft_putchar(nb + 48);
    }
}

void    display(int nb)
{
    int first;
    int second;

    if (nb > 9)
    {
        first = nb / 10;
        second = nb % 10;
        ft_putchar(first + 48);
        ft_putchar(second + 48);
    }
    else
    {
        ft_putchar('0');
        ft_putchar(nb + 48);
    }
}

void ft_print_comb2()
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
    {
        b = a + 1;
        while(b <= 99)
        {
            display(a);
            ft_putchar(' ');
            display(b);
            if (a < 98 || b < 99)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
}

int main()
{
    ft_print_comb2();
    return (0);
}