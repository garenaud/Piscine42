/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:18:24 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/22 20:21:30 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_reversetab(char *tab, int size)
{
	int	i;
	int j;
	int temp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

int	main(int ac, char **av)
{
	int size;

	size = ft_strlen(av[1]);
	if (ac < 1)
	{
		write(1, "\n", 1);
	}
	ft_reversetab(av[1], size);
	ft_putstr(av[1]);
	printf("ma string est %s", av[1]);
	return (0);
}