/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:37:49 by grenaud-          #+#    #+#             */
/*   Updated: 2021/09/23 18:26:16 by grenaud-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < (unsigned int) nb)
	{
		++sqrt;
	}
	if (sqrt * sqrt == (unsigned int) nb)
		return (sqrt);
	return (0);
}

/* int main(void)
{
	int res, exp;
res = ft_sqrt(1), exp = 1;
printf("root 1 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(4), exp = 2;
printf("root 4 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(0), exp = 0;
printf("root 0 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(3), exp = 0;
printf("root 3 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(7), exp = 0;
printf("root 7 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(16), exp = 4;
printf("root 16 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(-5), exp = 0;
printf("root -5 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(144), exp = 12;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(-125), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(1640045925), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(2147395600), exp = 46340;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(2147483646), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(917362944), exp = 30288;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(1926881480), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(464919844), exp = 21562;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(274208610), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(115820644), exp = 10762;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(641135909), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(359595369), exp = 18963;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(2130351245), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(1813567396), exp = 42586;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(959162111), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
} */
