/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Myfirst_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:46:13 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/19 20:25:09 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	isspace(int n)
{
	if (n == '\t' || n == '\n' || n == '\v' || n == '\f' || n == ' ')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	printf("voila mon nombre d'argument: %d \n", ac);
	if (ac == 2)
		while (isspace((av[1][i])))
		{
			i = i + 1;
		}
		while (!(isspace(av[1][i])) && av[1][i])
		{
			write(1, &av[1][i++], 1);
		}
	write(1, "\n", 1);
	return (0);
}
