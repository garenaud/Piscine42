/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:24:52 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/22 16:40:52 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

/* int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "oui";
	str2 = "o\200";
	printf("la fonction strcmp indique %d ", strcmp(str1, str2));
	printf("\nma fonction ft_strcmp indique %d ", ft_strcmp(str1, str2));
	return (0);
} */
