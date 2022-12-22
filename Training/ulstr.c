/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:25:43 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/22 19:18:07 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
	{
		ft_putchar('\n');
	}
	i = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			j = av[1][i];
			j = j - 32;
			ft_putchar(j);
		}
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			j = av[1][i];
			j = j + 32;
			ft_putchar(j);
		}
		else
		{
			ft_putchar(av[1][i]);
		}
		i++;
	}
}