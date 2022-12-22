/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:54:51 by grenaud-          #+#    #+#             */
/*   Updated: 2021/10/26 09:54:26 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{	
	int	i;
	int	d;

	d = 0;
	for (i = 0; i < 5; i++)
	{
		printf("for: %d ", i);
	}
	printf("\n");
	while(d < 5) 
	{
		printf("while: %d ", d);
		d++;
	}
	//write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = '0' - 1;
	while (++centaine <= '9')
	{
		dizaine = centaine;
		while (++dizaine <= '9')
		{
			unite = dizaine + 1;
			while (unite <= '9')
			{
				ft_putchar(centaine);
				ft_putchar(dizaine);
				ft_putchar(unite);
				if (centaine != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				unite++;
			}			
		}
	}
}

int	main(void)
{
	//ft_print_comb();
	ft_putchar('c');
	return (0);
}
