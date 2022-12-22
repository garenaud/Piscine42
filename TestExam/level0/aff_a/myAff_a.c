/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myAff_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:48:22 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/16 19:57:41 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		putchar('a');
		putchar('\n');
	}
	while (i != '0')
	{
		if (argv[1][i] == 'a')
		{
			putchar('a');
			putchar('\n');
		}
		else
		{
			putchar('\n');
		}
		i++;
	}
}
