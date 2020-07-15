/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:26:16 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/15 08:42:28 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_iterative_power(int nb, int power)
{
	int result = 1;
	if(nb == 0)
	{
		return result;
	}
	if(nb > 0)
	{
		while(power > 0)
		{
			result = result * nb;
			power--;
		}
	}
	else
	{
		return 0;
	}
	return result;
}
