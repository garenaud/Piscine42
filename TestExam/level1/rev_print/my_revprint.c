/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_revprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:15:30 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/21 19:56:36 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i] != '0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	swap;
	int	size = ft_strlen(av[1]);
	int	j = size - 1;

	if (ac == 2)
	{
		while (av[1][i] <= size / 2)
		{
			swap = av[1][i];
			av[1][i] = av[1][j];
			av[1][j] = swap;
			i++;
			j--;
		}
		printf("ma str %s \n mon i %i \n mon j %i", av[1], i, j);
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}