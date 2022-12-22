/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:51:37 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/16 14:16:27 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}	
	return (dest);
}

int	main(void)
{
	char	tab1[] = "je ne me souviens plus si ca fonctionne";
	char	tab2[26];

	ft_strncpy(tab2, tab1, 20);
	printf("tab 2: %s", tab2);
	printf("\ntab 1: %s", tab1);
	return (0);
}
