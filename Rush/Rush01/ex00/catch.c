/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirochel <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:17:28 by pirochel          #+#    #+#             */
/*   Updated: 2021/09/11 21:41:28 by pirochel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int verify_catch(int nombreparam, int i);
int catch_argc(int nombreparam);
int catch_argv(int i);

/*
int verify_catch(int nombreparam, char *settings)
{
	printf("%s", settings);
	return (0);
} */


int verify_catch(int nombreparam, int i)
{
	//printf("%d", i);
	if (catch_argc(nombreparam) == 0 && catch_argv(i) == 0)
	{
		return (0);
	}
	else if (catch_argc(nombreparam) == 1 && catch_argv(i) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int catch_argc(int nombreparam)
{
        if (nombreparam > 2)
        {
			return (0);
        }
        else if (nombreparam == 2)
        {
                return (1);
        }
        else
        {
                return (0);
        }
        return (0);
}

	
int catch_argv(int i)
{
        if (i > 31)
        {
				return (0);
        }
        else if (i == 31)
        {
				return (1);
        }
        else
		{
				return (0);
        }
        return (0);

}
