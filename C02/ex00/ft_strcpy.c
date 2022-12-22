/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:56:34 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/14 21:41:51 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	test1[256] = "asdf";
	char	src;

	printf("%s", ft_strcpy(test1, "qwerty\n"));
	printf("%s", ft_strcpy(test1, "ma biche "));
	printf("%s", ft_strcpy(test1, "hell0\n"));
	printf("vraie fonction %s", strcpy(test1, "qwerty\n"));
	printf("%s", strcpy(test1, ""));
	printf("%s", strcpy(test1, "hell0\n"));
	return (0);
}
