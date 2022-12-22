/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:06:45 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/12 16:02:38 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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
/* 
int	main(int argc, const char *argv[])
{
	char	str[] = {'1', '2', '3', '4', '\0'};

	printf("valeur de l'array %d", ft_strlen(str));
	return (0);
}
 */