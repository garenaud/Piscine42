/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:00:26 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/12 16:02:51 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* int	main(void)
{
	*int	nbr;
	int *ptr;

	nbr = 0;
	ptr = &nbr;
	printf("Old : %d\n", nbr);
	ft_ft(ptr);
	printf("New : %d\n", nbr);
	int	nbr;
	nbr = 0;
	printf("Old : %d\n", nbr);
	ft_ft(&nbr);
	printf("New : %d\n", nbr);
}
	 */