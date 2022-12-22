/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:21:22 by grenaud-          #+#    #+#             */
/*   Updated: 2021/10/27 12:21:20 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "lamemere1";
	str2 = "lameme132323";
	printf("la fonction strncmp indique %d ", strncmp(str1, str2, 0));
	printf("\nma ft_strncmp indique %d ", ft_strncmp(str1, str2, 0));
	return (0);
} */
