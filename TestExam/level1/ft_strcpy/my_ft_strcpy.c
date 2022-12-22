/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ft_strcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:08:28 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/20 18:24:43 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		//s2[i] = s1[i];
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char	str1[255];
	char	str2[255] = "Helllloo pas le monde";

	//str2 = "hello world";
	printf("Mon str1 est: %s \n Mon str2 est: %s \n", str1, str2);
	ft_strcpy(str1, str2);
	printf("apres strcpy \n");
	printf("Mon str1 est: %s \n Mon str2 est: %s \n", str1, str2);
	return (0);
}
