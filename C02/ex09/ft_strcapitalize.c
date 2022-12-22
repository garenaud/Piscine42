/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:25:59 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/14 19:36:35 by grenaud-         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (str[i] < 48)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{	
				str[i + 1] = str[i + 1] - 32;
			}
		}			
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char	str[] = "asdf-qWeRtY ZXCV 100TIS";

	printf("Original: %s ", str);
	printf("\n final: %s ", ft_strcapitalize(str));
	return (0);
}
 */