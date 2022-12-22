/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:01:08 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/16 16:04:20 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = i + 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] >= tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
/* 
int	main(int argc, char const *argv[])
{
	int	tab[9] = {30,5,2,3,4,8,16,20,24};
	int i;
	
	printf("avant ");
	for (i = 0; i < 9; i++) 
	{
  		printf("%d, ", tab[i]);
	}
	ft_sort_int_tab(&tab, 9);
	printf("\n apres ");
	for (i = 0; i < 9; i++) 
	{
  		printf("%d, ", tab[i]);
	};
	return (0);
}
 */