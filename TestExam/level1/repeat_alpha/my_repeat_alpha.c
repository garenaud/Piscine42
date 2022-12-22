/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:43:28 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/20 19:06:30 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		rep;
	char	c;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			c = av[1][i];
			if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			{
				if (c >= 'a' && c <= 'z')
				{
					rep = c - 'a';
				}
				if (c >= 'A' && c <= 'Z')
				{
					rep = c - 'A';
				}
				while (rep > 0)
				{
					write(1, &c, 1);
					rep--;
				}
			}
			i++;
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}





