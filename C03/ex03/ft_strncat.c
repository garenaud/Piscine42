/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:37:38 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/20 17:26:26 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
	{
		dst++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dst = *src;
		dst++;
		src++;
		nb--;
	}
	*dst = '\0';
	return (dest);
}

/* int	main(void)
{
	char	str[30];
	char	str1[30];

	strcpy(str, " bienvenue");
	strcpy(str1, "ca marche pas");
	ft_strncat(str1, str, 5);
	printf("la fonction strncat indique: \n %s ", str1);
	return (0); 
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
	printf("%s\n", ft_strncat(test, "asdf", 16));
	printf("%s\n", ft_strncat(test, "", 16));
	printf("%s\n", ft_strncat(test, "qwerty", 0));
	printf("%s\n", ft_strncat(test, "asdf", 3));
} */
