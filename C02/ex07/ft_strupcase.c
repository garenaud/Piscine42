/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:03:30 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/14 19:36:25 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		++i;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "asdf qWeRtY ZXCV";

	printf("Original: %s ", str);
	printf("final: %s ", ft_strupcase(str));
	return (0);
}
 */