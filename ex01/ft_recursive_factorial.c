/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unnemuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:34:46 by unnemuta          #+#    #+#             */
/*   Updated: 2020/07/15 08:38:26 by unnemuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if(nb == 1)
	{
		return 1;
	}
	else
	{
		return nb * ft_recursive_factorial(nb-1);
	}
}
