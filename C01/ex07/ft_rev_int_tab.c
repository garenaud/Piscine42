/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:23:16 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/14 15:30:02 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < size / 2)
	{
		c = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = c;
		i++;
	}
}

int	main(int argc, char const *argv[])
{
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int	size;
	int	loop;

	size = 10;
	printf("avant: ");
	for (loop = 0; loop < 10; loop++)
	{
		printf("%d", tab[loop]);
	}
	ft_rev_int_tab(tab, size);
	printf("\n apres: ");
		for (loop = 0; loop < 10; loop++)
	{
		printf("%d", tab[loop]);
	}
	return (0);
}
