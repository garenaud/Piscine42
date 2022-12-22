/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:58:54 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/22 14:45:06 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	idest;
	int	isrc;

	idest = 0;
	while (dest[idest] != '\0')
	{
		idest++;
	}
	isrc = 0;
	while (src[isrc] != '\0')
	{
		dest[idest + isrc] = src[isrc];
		isrc++;
	}
	dest[idest + isrc] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	str[50] = "LBczuGHpkZZ";
	char	str1[50] = "zuGHpkZZ";

	strcpy(str, " mal en fait");
	strcpy(str1, "ca marche pas"); 
	//strcat(str1, str);
	ft_strcat(str1, str);
	printf("la fonction strcat indique %s ", str1);
	return (0);
} */
