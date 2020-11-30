/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sw <sw@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 04:03:20 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/15 23:34:51 by sw               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int cut;
	int rest;

	if (*b == 0)
		return ;
	cut = *a / *b;
	rest = *a % *b;
	*a = cut;
	*b = rest;
}