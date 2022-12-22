/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:41:04 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/14 16:22:52 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}
/* 
int	main(int argc, const char *argv[])
{
	char	*str;

	str = "ca fonctionne";
	ft_putstr(str);
	return (0);
}
 */