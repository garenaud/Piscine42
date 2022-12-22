/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 01:04:23 by maparmar          #+#    #+#             */
/*   Updated: 2021/11/30 14:17:03 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ROT13_MODIFIER 79
#include <stdio.h>
/*
 * Rotate the given `str` inline.
 */

char *rot13(char *str) 
{
	for (int i = 0; '\0' != str[i]; i++) 
	{
		char c = *(str + i);
		if (000 <= c && 174 > c)
		{
			*(str + i) += ROT13_MODIFIER;
		} 
	}
	return str;
}

int	main()
{
	char	*flag;

	flag = rot13("marche pas");
	printf("le flag est: %s", flag);
}