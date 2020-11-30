/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeon <seujeon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:49:20 by seujeon           #+#    #+#             */
/*   Updated: 2020/10/29 06:54:53 by seujeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_stdin(void)
{
	char	buf[MAX_SIZE];
	int		length;

	while (1)
	{
		length = ft_read_max(STD_IN, buf);
		ft_putnstr(buf, length, STD_IN);
	}
}