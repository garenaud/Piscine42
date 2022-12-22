/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:30:49 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/22 16:40:25 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*tab;
	char	*check;

	if (*to_find == '\0')
		return (str);
	tab = str;
	check = to_find;
	while (true)
	{
		if (*check == '\0')
			return ((char *)(tab - (check - to_find)));
		if (*tab == *check)
			check++;
		else
			check = to_find;
		if (*tab == '\0')
			break ;
		tab++;
	}
	return (0);
}

/* int	main(void)
{
 	char	*tab;
	char	*check;
	char	*result_c;
	char	*result_ft;

	tab = "Salut Sasausaumon";
	check = "saumon";
	result_c = strstr(tab, check);
	result_ft = ft_strstr(tab, check);
	printf("\n%p / %p", result_c, result_ft);
	printf("\nresult fonction %s", result_c);
	printf("\nresult ma fonction %s", result_ft);
	return (0);
 

printf("%s\n", ft_strstr("asdf qwerty", "wer"));
printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
printf("%s\n", ft_strstr("asdf qwerty", "qwerty1"));
printf("%s\n", ft_strstr("", "wer"));
printf("%s\n", ft_strstr("asdf qwerty", "zxcv"));
printf("%s\n", ft_strstr("asdf qwerty", ""));

}
 */