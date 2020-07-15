/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:31:38 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/15 08:32:04 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int result;
	result  = 1;
	if(nb > 0 && nb < 17)
	{
		while(nb > 0)
		{
			result = result * nb;
			nb--;
		}
	}
	else
	{
		return 0;
	}
	return result;
}
