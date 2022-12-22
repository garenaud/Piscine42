/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAff_first_param.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:05:36 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/16 20:33:42 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 1)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
