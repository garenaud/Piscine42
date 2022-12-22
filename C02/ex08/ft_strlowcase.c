/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:22:10 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/14 19:36:27 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		++i;
	}
	return (str);
}
/* 
int	main(void)
{
	char	str[] = "asdf qWeRtY ZXCV";

	printf("Original: %s ", str);
	printf("final: %s ", ft_strlowcase(str));
	return (0);
}
 */