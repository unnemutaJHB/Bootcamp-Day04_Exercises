/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:46:27 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/15 10:02:06 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int result;
	result = nb;

	if (power ==  0)
		return 1;
	else
	{
		result = nb  * ft_recursive_power(result , power-1);
	}
	return result;
}
