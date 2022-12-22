/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:31:07 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/12 16:02:45 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 50;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d \n", div);
	printf("mod: %d \n", mod);
	return (0);
}
 */