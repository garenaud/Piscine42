/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirochel <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:28:19 by pirochel          #+#    #+#             */
/*   Updated: 2021/09/12 16:49:18 by pirochel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int verify_catch(int nombreparam, int i);
int catch_argc(int nombreparam);
int catch_argv(int i);
int catch_goinfre(int i);

int	main(int argc, char **argv)
{
	int nombreparam = argc;
	(void) argv;	
	//char *settings = argv[1];
	int i;

	i = 0;

	if(argc != 2)
	{	
		write(1, "Error", 6);
		return(0);
	}

	while(argv[1][i])
	{
		if (argv[1][i] == '1' || argv[1][i] == '2' || argv[1][i] == '3')
		{
			i++;
		}
		else if (argv[1][i] == '4' || argv[1][i] == ' ')
		{
			i++;
		}
		else
		{
			write(1, "Error", 6);
			return (0);
		}
	}

	if (verify_catch(nombreparam, i) == 0)
	{
		write(1, "Error", 6);
		return (0);
	}	


	int tab[4][4];
	int l;
	int c;

	l = 0;
	c = 0;

	while (l < 4)
	{
		while (c < 4)
		{
		tab[l][c] = '0';
		write(1, &tab[l][c], 1);
		c++;
		}
		c = 0;
		write (1, "\n", 1);
		l++;
	} 
}


